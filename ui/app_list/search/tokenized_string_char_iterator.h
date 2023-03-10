// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_APP_LIST_SEARCH_TOKENIZED_STRING_CHAR_ITERATOR_H_
#define UI_APP_LIST_SEARCH_TOKENIZED_STRING_CHAR_ITERATOR_H_

#include <stddef.h>
#include <stdint.h>

#include "base/macros.h"
#include "base/memory/scoped_ptr.h"
#include "ui/app_list/app_list_export.h"
#include "ui/app_list/search/tokenized_string.h"

namespace base {
namespace i18n {
    class UTF16CharIterator;
}
}

namespace app_list {

// An UTF16 char iterator for a TokenizedString.
class APP_LIST_EXPORT TokenizedStringCharIterator {
public:
    struct State {
        State();
        State(size_t token_index, int char_index);

        size_t token_index;
        int32_t char_index;
    };

    // Requires |tokenized| out-lives this iterator.
    explicit TokenizedStringCharIterator(const TokenizedString& tokenized);
    ~TokenizedStringCharIterator();

    // Advances to the next char. Returns false if there is no next char.
    bool NextChar();

    // Advances to the first char of the next token. Returns false if there is
    // no next token.
    bool NextToken();

    // Returns the current char if there is one. Otherwise, returns 0.
    int32_t Get() const;

    // Returns the array index in original text of the tokenized string that is
    // passed in constructor.
    int32_t GetArrayPos() const;

    // Returns the number of UTF16 code units for the current char.
    size_t GetCharSize() const;

    // Returns true if the current char is the first char of the current token.
    bool IsFirstCharOfToken() const;

    // Helpers to get and restore the iterator's state.
    State GetState() const;
    void SetState(const State& state);

    // Returns true if the iterator is at the end.
    bool end() const { return !current_token_iter_; }

private:
    void CreateTokenCharIterator();

    const TokenizedString::Tokens& tokens_;
    const TokenizedString::Mappings& mappings_;

    size_t current_token_;
    scoped_ptr<base::i18n::UTF16CharIterator> current_token_iter_;

    DISALLOW_COPY_AND_ASSIGN(TokenizedStringCharIterator);
};

} // namespace app_list

#endif // UI_APP_LIST_SEARCH_TOKENIZED_STRING_CHAR_ITERATOR_H_
