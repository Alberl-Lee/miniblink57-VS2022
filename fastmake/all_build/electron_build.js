import { constVal, buildCommonSetting } from "./const_val.js";

var json = [{
	"var":[
		{"sdkPath":constVal.sdkPath},
		{"clangPath":constVal.clangPath},
		{"srcPath":constVal.srcPath},
		{"ndkIncludePath":constVal.ndkIncludePath},
		{"ndkBinPath":constVal.ndkBinPath},
		{"v8dir": constVal.v8dir},
		{"targetDir": constVal.targetDir},
	],
	"compile":{
		"ccompiler":"${clangPath}/clang.exe",
		"cppcompiler":"${clangPath}/clang++.exe",
			
		"include":[
			"${sdkPath}/include/c++/7.2.0",
			"${sdkPath}/include/c++/7.2.0/include",
			//"C:/cygwin64/usr/local/x86_64-unknown-linux-gnu/lib/gcc/x86_64-unknown-linux-gnu/7.2.0/include", // sse is compile error
			"${ndkIncludePath}",
			"${sdkPath}/include/c++/7.2.0/x86_64-unknown-linux-gnu/",
			"${srcPath}",
			"${sdkPath}/sysroot/usr/include",
			"${sdkPath}/sysroot/usr/",
			"${sdkPath}/sysroot/usr/include/linux",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/include/cairo",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/include/glib-2.0",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/include/gtk-3.0",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/include/gdk-pixbuf-2.0",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/include/atk-1.0",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/include/pango-1.0",
			"G:/chromium/M84/build/linux/debian_sid_amd64-sysroot/usr/lib/x86_64-linux-gnu/glib-2.0/include",
			"${srcPath}/linux",
			"${srcPath}/gen/${v8dir}/include",
			"${srcPath}/${v8dir}",
			"${srcPath}/${v8dir}/include",
			"${srcPath}/electron",
			"${srcPath}/third_party/skia/include/core",
			"${srcPath}/third_party/skia/include/config",
			"${srcPath}/third_party/skia/include/codec",
			"${srcPath}/third_party/skia/include/device",
			"${srcPath}/third_party/skia/include/effects",
			"${srcPath}/third_party/skia/include/images",
			"${srcPath}/third_party/skia/include/pathops",
			"${srcPath}/third_party/skia/include/ports",
			"${srcPath}/third_party/skia/include/private",
			"${srcPath}/third_party/skia/include/utils",
			"${srcPath}/third_party/skia/include/gpu",
			"${srcPath}/third_party/",
			"${srcPath}/third_party/zlib",
			"${srcPath}/node/openssl/openssl/include",
			"${srcPath}/node/openssl",
			"${srcPath}/node/uv/src",
			"${srcPath}/node/cares/include",
			"${srcPath}/node/cares/config/linux",
			"${srcPath}/node/uv/include"
		],
		"prebuildSrc":[
			//"${srcPath}/electron/common/asar/ScopedTemporaryFile.cpp",
			//"${srcPath}/electron/browser/api/ApiSession.cpp",
			//"${srcPath}/electron/common/asar/Archive.cpp",
			//"${srcPath}/electron/common/api/ApiAsar.cpp",
			"${srcPath}/electron/browser/api/ApiWebContents.cpp",
			"${srcPath}/electron/browser/api/ApiBrowserWindow.cpp",
			"${srcPath}/electron/browser/api/ApiApp.cpp",
			//"${srcPath}/electron/renderer/api/ApiRendererIpc.cpp",
			//"${srcPath}/electron/common/NodeThread.cpp",
			//"${srcPath}/electron/common/NodeBinding.cpp",
			//"${srcPath}/electron/common/ThreadCallWrap.cpp",
			"${srcPath}/electron/browser/api/ApiDownloadItem.cpp",
			"${srcPath}/gin/dictionary.cc",
			"${srcPath}/electron/Electron.cpp"
		],
		"src":[
			"${srcPath}/electron/renderer/api/ApiContextBridge.cpp",
			"${srcPath}/electron/browser/api/ApiWebContents.cpp",
			"${srcPath}/electron/browser/api/WindowList.cpp",
			"${srcPath}/electron/browser/api/ApiApp.cpp",
			"${srcPath}/gin/object_template_builder.cc",
			"${srcPath}/gin/converter.cc",
			"${srcPath}/gin/dictionary.cc",
			"${srcPath}/gin/wrapper_info.cc",
			"${srcPath}/gin/wrappable.cc",
			"${srcPath}/gin/arguments.cc",
			"${srcPath}/gin/function_template.cc",
			"${srcPath}/gin/per_isolate_data.cc",
			"${srcPath}/electron/common/OptionsSwitches.cpp",
			"${srcPath}/electron/browser/api/ApiElectron.cpp",
			"${srcPath}/electron/browser/api/ApiMenu.cpp",
			"${srcPath}/electron/common/NodeThread.cpp",
			"${srcPath}/electron/common/NodeBinding.cpp",
			"${srcPath}/electron/common/AtomCommandLine.cpp",
			"${srcPath}/electron/renderer/api/ApiRendererIpc.cpp",
			"${srcPath}/electron/common/IdLiveDetect.cpp",
			"${srcPath}/electron/common/api/EventEmitter.cpp",
			"${srcPath}/electron/common/api/EventEmitterCaller.cpp",
			"${srcPath}/electron/common/api/Event.cpp",
			"${srcPath}/electron/common/api/RemoteCallbackFreer.cpp",
			"${srcPath}/electron/common/api/RemoteObjectFreer.cpp",
			"${srcPath}/electron/common/api/ObjectLifeMonitor.cpp",
			"${srcPath}/electron/common/api/ApiV8Util.cpp",
			//"${srcPath}/electron/common/api/ApiShell.cpp",
			//"${srcPath}/electron/common/PlatformUtilWin.cpp",
			"${srcPath}/electron/common/api/ApiOriginalFs.cpp",
			//"${srcPath}/electron/common/api/ApiScreen.cpp",
			"${srcPath}/electron/renderer/api/ApiWebFrame.cpp",
			"${srcPath}/electron/Electron.cpp",
			"${srcPath}/electron/common/api/ApiIntlCollator.cpp",
			//"${srcPath}/electron/browser/api/ApiDialag.cpp",
			"${srcPath}/electron/common/api/ApiAsar.cpp",
			"${srcPath}/electron/common/asar/AsarUtil.cpp",
			"${srcPath}/electron/common/asar/Archive.cpp",
			"${srcPath}/electron/common/asar/ScopedTemporaryFile.cpp",
			"${srcPath}/electron/browser/api/ApiProtocol.cpp",
			//"${srcPath}/electron/browser/api/ApiTray.cpp",
			//"${srcPath}/electron/common/SystemTray.cpp",
			//"${srcPath}/content/ui/WebDropSource.cpp",
			//"${srcPath}/content/ui/ClipboardUtil.cpp",
			//"${srcPath}/electron/common/api/ApiNativeImage.cpp",
			//"${srcPath}/electron/renderer/WebviewPluginImpl.cpp",
			//"${srcPath}/electron/renderer/WebviewPlugin.cpp",
			//"${srcPath}/electron/common/InitGdiPlus.cpp",
			//"${srcPath}/electron/common/api/ApiClipboard.cpp",
			//"${srcPath}/content/ui/WCDataObject.cpp",
			//"${srcPath}/electron/NapiStub.cpp",
			"${srcPath}/electron/browser/api/ApiBrowserView.cpp",
			"${srcPath}/electron/browser/api/ApiBrowserWindow.cpp",
			"${srcPath}/electron/common/ThreadCallWrap.cpp",
			"${srcPath}/electron/browser/api/ApiSession.cpp",
			"${srcPath}/electron/browser/api/ApiWebRequest.cpp",
			"${srcPath}/electron/renderer/api/ObjectCache.cpp",
			"${srcPath}/gin/promise.cc",
			"${srcPath}/gin/microtasks_scope.cc",
			"${srcPath}/electron/browser/api/ApiDownloadItem.cpp"

		],
		// 
		"cmd":[
			"--target=x86_64-linux-guneabi", 
			"-std=c++14",
			"-fno-exceptions",
			"-fms-extensions",
			//"-fshort-wchar",
			"-D__POSIX__=1",
			"-DHAVE_CONFIG_H",
			"-D_GNU_SOURCE",
			"-DUSE_AURA",
			"-DOS_LINUX_FOR_WIN",
			"-DINSIDE_BLINK",
			"-DBLINK_IMPLEMENTATION",
			"-DENABLE_WKE",
			"-D_HAS_CONSTEXPR=0",
			"-D_CRT_SECURE_NO_WARNINGS",
			"-DNODE_WANT_INTERNALS",
			"-DHAVE_OPENSSL",
			"-DCARES_STATICLIB",
			"-DBUILDING_UV_SHARED",
			"-DSK_SUPPORT_LEGACY_CREATESHADER_PTR=1",
			"-DSK_SUPPORT_LEGACY_TYPEFACE_PTR=1",
			"-DENABLE_WKE=1",
			"-DENABLE_MB=1",
			"-DENABLE_NODEJS=1"
		],
		"objdir":"${srcPath}/out/tmp/electron/${targetDir}",
		"outdir":"${srcPath}/out/${targetDir}",
		"target":"libelectron.a",
		"beginLibs":[
		],
		"linkerCmd":[],
		"endLibs":[
		],
		"linker":"${ndkBinPath}/ar.exe"
	}
}];

buildCommonSetting(json);