// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/shell/app/shell_main_delegate_mac.h"

#include <unistd.h>

#include "base/command_line.h"
#include "base/files/file_path.h"
#include "base/logging.h"
#include "base/mac/foundation_util.h"
#include "base/mac/scoped_nsobject.h"
#include "content/public/common/content_switches.h"
#include "content/shell/app/paths_mac.h"
#include "content/shell/common/shell_switches.h"

namespace content {

void EnsureCorrectResolutionSettings() {
  // Exit early if this isn't a browser process.
  if (base::CommandLine::ForCurrentProcess()->HasSwitch(switches::kProcessType))
    return;

  NSString* const kHighResolutionCapable = @"NSHighResolutionCapable";
  base::FilePath info_plist = GetInfoPlistPath();
  base::scoped_nsobject<NSMutableDictionary> info_dict(
      [[NSMutableDictionary alloc]
          initWithContentsOfFile:base::mac::FilePathToNSString(info_plist)]);

  bool running_layout_tests = switches::IsRunLayoutTestSwitchPresent();
  bool not_high_resolution_capable =
      [info_dict objectForKey:kHighResolutionCapable] &&
      [[info_dict objectForKey:kHighResolutionCapable] isEqualToNumber:@(NO)];
  if (running_layout_tests == not_high_resolution_capable)
    return;

  // We need to update our Info.plist before we can continue.
  [info_dict setObject:@(!running_layout_tests) forKey:kHighResolutionCapable];
  CHECK([info_dict writeToFile:base::mac::FilePathToNSString(info_plist)
                    atomically:YES]);

  const base::CommandLine::StringVector& original_argv =
      base::CommandLine::ForCurrentProcess()->argv();
  char** argv = new char*[original_argv.size() + 1];
  for (unsigned i = 0; i < original_argv.size(); ++i)
    argv[i] = const_cast<char*>(original_argv.at(i).c_str());
  argv[original_argv.size()] = NULL;

  CHECK(execvp(argv[0], argv));
}

}  // namespace content
