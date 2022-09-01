[{
	"var":[
		{"sdkPath":"C:/cygwin64/usr/local/x86_64-unknown-linux-gnu/x86_64-unknown-linux-gnu"},
		{"clangPath":"C:/Microsoft/AndroidNDK64/android-ndk-r16b/toolchains/llvm/prebuilt/windows-x86_64/bin"},
		{"srcPath":"G:/mycode/miniblink57"}
	],
	"compile":{
		"ccompiler":"${clangPath}/clang.exe",
		"cppcompiler":"${clangPath}/clang++.exe",
			
		"include":[
			"${sdkPath}/include/c++/7.2.0",
			"${sdkPath}/include/c++/7.2.0/include",
			//"C:/cygwin64/usr/local/x86_64-unknown-linux-gnu/lib/gcc/x86_64-unknown-linux-gnu/7.2.0/include", // sse is compile error
			"C:/Microsoft/AndroidNDK64/android-ndk-r16b/toolchains/llvm/prebuilt/windows-x86_64/lib64/clang/5.0/include",
			"${sdkPath}/include/c++/7.2.0/x86_64-unknown-linux-gnu/",
			"${srcPath}",
			"${sdkPath}/sysroot/usr/include",
			"${sdkPath}/sysroot/usr/",
			"${sdkPath}/sysroot/usr/include/linux",
			"${srcPath}/linux",
//			"${srcPath}/gen/v8_7_5/include",
//			"${srcPath}/v8_7_5",
//			"${srcPath}/v8_7_5/include",
			"${srcPath}/third_party/",
			"${srcPath}/third_party/npapi",
			"${srcPath}/third_party/WebKit",
			"${srcPath}/third_party/WebKit/Source",
			"${srcPath}/cef",
			"${srcPath}/third_party/icu/source/common",
			"${srcPath}/gen/blink",
			"${srcPath}/gen/blink/core",
			"${srcPath}/gen/blink/bindings/modules/v8",
			"${srcPath}/gen/blink/bindings/core/v8",
			"${srcPath}/gen/third_party/WebKit",
			"${srcPath}/gpu",
			"${srcPath}/third_party/khronos",
			"${srcPath}/third_party/libxml/src/include",
			"${srcPath}/third_party/libxml/win32/include",
			"${srcPath}/third_party/skia/src/image",
			"${srcPath}/third_party/skia/src/core",
			"${srcPath}/third_party/skia/src/sfnt",
			"${srcPath}/third_party/skia/src/lazy",
			"${srcPath}/third_party/skia/src/utils",
			"${srcPath}/third_party/skia/src/opts",
			"${srcPath}/third_party/skia/src/ports",
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
			"${srcPath}/third_party/angle/include",
			"${srcPath}/third_party/angle/src",
			"${srcPath}/third_party/freetype/src/include"
		],
		"prebuildSrc":[
			//"${srcPath}/third_party/skia/src/ports/SkFontHost_fontconfig.cpp",
//			"${srcPath}/third_party/skia/src/ports/SkTLS_pthread.cpp",
//			"${srcPath}/third_party/skia/src/ports/SkFontHost_FreeType.cpp",
//			"${srcPath}/third_party/skia/src/ports/SkFontHost_FreeType_common.cpp",
//			"${srcPath}/third_party/skia/src/ports/SkFontConfigInterface_direct_factory.cpp",
//			"${srcPath}/third_party/skia/src/ports/SkFontConfigInterface_direct.cpp",
			"${srcPath}/third_party/skia/src/fonts/SkFontMgr_fontconfig.cpp",
//			"${srcPath}/third_party/skia/src/ports/SkOSFile_posix.cpp",
			//"${srcPath}/third_party/skia/src/effects/SkXfermodeImageFilter.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontMgr_custom.cpp"
		],
		"src":[
			"${srcPath}/third_party/skia/src/fonts/SkFontMgr_fontconfig.cpp",
			"${srcPath}/third_party/skia/src/fonts/SkRandomScalerContext.cpp",
			"${srcPath}/third_party/skia/src/fonts/SkRemotableFontMgr.cpp",
			"${srcPath}/third_party/skia/src/fonts/SkTestScalerContext.cpp",
			"${srcPath}/third_party/skia/src/fonts/SkFontMgr_indirect.cpp",
			"${srcPath}/third_party/skia/src/fonts/SkGScalerContext.cpp",
			"${srcPath}/third_party/skia/src/image/SkSurface.cpp",
			"${srcPath}/third_party/skia/src/image/SkSurface_Raster.cpp",
			"${srcPath}/third_party/skia/src/image/SkImage.cpp",
			"${srcPath}/third_party/skia/src/image/SkImage_Raster.cpp",
			"${srcPath}/third_party/skia/src/lazy/SkDiscardableMemoryPool.cpp",
			"${srcPath}/third_party/skia/src/lazy/SkDiscardablePixelRef.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsQuad.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsRect.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsSimplify.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsTightBounds.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsTSect.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsTypes.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsWinding.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathWriter.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkReduceOrder.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkAddIntersections.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkDConicLineIntersection.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkDCubicLineIntersection.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkDCubicToQuads.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkDLineIntersection.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkDQuadLineIntersection.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkIntersections.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpAngle.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpBuilder.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpCoincidence.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpContour.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpCubicHull.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpEdgeBuilder.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpSegment.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkOpSpan.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsCommon.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsConic.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsCubic.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsCurve.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsDebug.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsLine.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsOp.cpp",
			"${srcPath}/third_party/skia/src/pathops/SkPathOpsPoint.cpp",
			"${srcPath}/third_party/skia/src/utils/win/SkDWriteFontFileStream.cpp",
			"${srcPath}/third_party/skia/src/utils/win/SkDWriteGeometrySink.cpp",
			"${srcPath}/third_party/skia/src/utils/win/SkHRESULT.cpp",
			"${srcPath}/third_party/skia/src/utils/win/SkIStream.cpp",
			"${srcPath}/third_party/skia/src/utils/win/SkAutoCoInitialize.cpp",
			"${srcPath}/third_party/skia/src/utils/win/SkDWrite.cpp",
			"${srcPath}/third_party/skia/src/core/SkAutoPixmapStorage.cpp",
			"${srcPath}/third_party/skia/src/core/SkBBHFactory.cpp",
			"${srcPath}/third_party/skia/src/core/SkBigPicture.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmap.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapController.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapDevice.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapProcShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapProcState.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapProcState_matrixProcs.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapProvider.cpp",
			"${srcPath}/third_party/skia/src/core/SkBitmapScaler.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitMask_D32.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitRow_D16.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitRow_D32.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitter.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitter_A8.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitter_ARGB32.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitter_PM4f.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitter_RGB16.cpp",
			"${srcPath}/third_party/skia/src/core/SkBlitter_Sprite.cpp",
			"${srcPath}/third_party/skia/src/core/SkBuffer.cpp",
			"${srcPath}/third_party/skia/src/core/SkCachedData.cpp",
			"${srcPath}/third_party/skia/src/core/SkCanvas.cpp",
			"${srcPath}/third_party/skia/src/core/SkChecksum.cpp",
			"${srcPath}/third_party/skia/src/core/SkChunkAlloc.cpp",
			"${srcPath}/third_party/skia/src/core/SkClipStack.cpp",
			"${srcPath}/third_party/skia/src/core/SkColor.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorFilter.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorFilterShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorMatrixFilterRowMajor255.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorSpace.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorSpaceXform.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorTable.cpp",
			"${srcPath}/third_party/skia/src/core/SkComposeShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkConfig8888.cpp",
			"${srcPath}/third_party/skia/src/core/SkConvolver.cpp",
			"${srcPath}/third_party/skia/src/core/SkCpu.cpp",
			"${srcPath}/third_party/skia/src/core/SkCubicClipper.cpp",
			"${srcPath}/third_party/skia/src/core/SkData.cpp",
			"${srcPath}/third_party/skia/src/core/SkDataTable.cpp",
			"${srcPath}/third_party/skia/src/core/SkDebug.cpp",
			"${srcPath}/third_party/skia/src/core/SkDeque.cpp",
			"${srcPath}/third_party/skia/src/core/SkDevice.cpp",
			"${srcPath}/third_party/skia/src/core/SkDeviceLooper.cpp",
			"${srcPath}/third_party/skia/src/core/SkDeviceProfile.cpp",
			"${srcPath}/third_party/skia/src/core/SkDistanceFieldGen.cpp",
			"${srcPath}/third_party/skia/src/core/SkDither.cpp",
			"${srcPath}/third_party/skia/src/core/SkDocument.cpp",
			"${srcPath}/third_party/skia/src/core/SkDraw.cpp",
			"${srcPath}/third_party/skia/src/core/SkDrawable.cpp",
			"${srcPath}/third_party/skia/src/core/SkDrawLooper.cpp",
			"${srcPath}/third_party/skia/src/core/SkEdge.cpp",
			"${srcPath}/third_party/skia/src/core/SkEdgeBuilder.cpp",
			"${srcPath}/third_party/skia/src/core/SkEdgeClipper.cpp",
			"${srcPath}/third_party/skia/src/core/SkError.cpp",
			"${srcPath}/third_party/skia/src/core/SkFilterProc.cpp",
			"${srcPath}/third_party/skia/src/core/SkFlattenable.cpp",
			"${srcPath}/third_party/skia/src/core/SkFlattenableSerialization.cpp",
			"${srcPath}/third_party/skia/src/core/SkFont.cpp",
			"${srcPath}/third_party/skia/src/core/SkFontDescriptor.cpp",
			"${srcPath}/third_party/skia/src/core/SkFontLCDConfig.cpp",
			"${srcPath}/third_party/skia/src/core/SkFontMgr.cpp",
			"${srcPath}/third_party/skia/src/core/SkFontStream.cpp",
			"${srcPath}/third_party/skia/src/core/SkFontStyle.cpp",
			"${srcPath}/third_party/skia/src/core/SkForceCPlusPlusLinking.cpp",
			"${srcPath}/third_party/skia/src/core/SkGeometry.cpp",
			"${srcPath}/third_party/skia/src/core/SkGlobalInitialization_core.cpp",
			"${srcPath}/third_party/skia/src/core/SkGlyphCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkGraphics.cpp",
			"${srcPath}/third_party/skia/src/core/SkHalf.cpp",
			"${srcPath}/third_party/skia/src/core/SkImageCacherator.cpp",
			"${srcPath}/third_party/skia/src/core/SkImageFilter.cpp",
			"${srcPath}/third_party/skia/src/core/SkImageFilterCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkImageGenerator.cpp",
			"${srcPath}/third_party/skia/src/core/SkImageInfo.cpp",
			"${srcPath}/third_party/skia/src/core/SkLightingShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkLinearBitmapPipeline.cpp",
			"${srcPath}/third_party/skia/src/core/SkLineClipper.cpp",
			"${srcPath}/third_party/skia/src/core/SkLocalMatrixImageFilter.cpp",
			"${srcPath}/third_party/skia/src/core/SkLocalMatrixShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkMallocPixelRef.cpp",
			"${srcPath}/third_party/skia/src/core/SkMask.cpp",
			"${srcPath}/third_party/skia/src/core/SkMaskCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkMaskFilter.cpp",
			"${srcPath}/third_party/skia/src/core/SkMaskGamma.cpp",
			"${srcPath}/third_party/skia/src/core/SkMath.cpp",
			"${srcPath}/third_party/skia/src/core/SkMatrix.cpp",
			"${srcPath}/third_party/skia/src/core/SkMatrix44.cpp",
			"${srcPath}/third_party/skia/src/core/SkMatrixImageFilter.cpp",
			"${srcPath}/third_party/skia/src/core/SkMD5.cpp",
			"${srcPath}/third_party/skia/src/core/SkMetaData.cpp",
			"${srcPath}/third_party/skia/src/core/SkMiniRecorder.cpp",
			"${srcPath}/third_party/skia/src/core/SkMipMap.cpp",
			"${srcPath}/third_party/skia/src/core/SkModeColorFilter.cpp",
			"${srcPath}/third_party/skia/src/core/SkMultiPictureDraw.cpp",
			"${srcPath}/third_party/skia/src/core/SkNinePatchIter.cpp",
			"${srcPath}/third_party/skia/src/core/SkNormalSource.cpp",
			"${srcPath}/third_party/skia/src/core/SkOpts.cpp",
			"${srcPath}/third_party/skia/src/core/SkPaint.cpp",
			"${srcPath}/third_party/skia/src/core/SkPaintPriv.cpp",
			"${srcPath}/third_party/skia/src/core/SkPath.cpp",
			"${srcPath}/third_party/skia/src/core/SkPathEffect.cpp",
			"${srcPath}/third_party/skia/src/core/SkPathMeasure.cpp",
			"${srcPath}/third_party/skia/src/core/SkPathRef.cpp",
			"${srcPath}/third_party/skia/src/core/SkPicture.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureAnalyzer.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureContentInfo.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureData.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureFlat.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureImageGenerator.cpp",
			"${srcPath}/third_party/skia/src/core/SkPicturePlayback.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureRecord.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureRecorder.cpp",
			"${srcPath}/third_party/skia/src/core/SkPictureShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkPixelRef.cpp",
			"${srcPath}/third_party/skia/src/core/SkPixmap.cpp",
			"${srcPath}/third_party/skia/src/core/SkPoint.cpp",
			"${srcPath}/third_party/skia/src/core/SkPoint3.cpp",
			"${srcPath}/third_party/skia/src/core/SkPtrRecorder.cpp",
			"${srcPath}/third_party/skia/src/core/SkQuadClipper.cpp",
			"${srcPath}/third_party/skia/src/core/SkRasterClip.cpp",
			"${srcPath}/third_party/skia/src/core/SkRasterizer.cpp",
			"${srcPath}/third_party/skia/src/core/SkReadBuffer.cpp",
			"${srcPath}/third_party/skia/src/core/SkRecord.cpp",
			"${srcPath}/third_party/skia/src/core/SkRecordDraw.cpp",
			"${srcPath}/third_party/skia/src/core/SkRecordedDrawable.cpp",
			"${srcPath}/third_party/skia/src/core/SkRecorder.cpp",
			"${srcPath}/third_party/skia/src/core/SkRecordOpts.cpp",
			"${srcPath}/third_party/skia/src/core/SkRecords.cpp",
			"${srcPath}/third_party/skia/src/core/SkRect.cpp",
			"${srcPath}/third_party/skia/src/core/SkRefDict.cpp",
			"${srcPath}/third_party/skia/src/core/SkRegion.cpp",
			"${srcPath}/third_party/skia/src/core/SkRegion_path.cpp",
			"${srcPath}/third_party/skia/src/core/SkResourceCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkRRect.cpp",
			"${srcPath}/third_party/skia/src/core/SkRTree.cpp",
			"${srcPath}/third_party/skia/src/core/SkRWBuffer.cpp",
			"${srcPath}/third_party/skia/src/core/SkScalar.cpp",
			"${srcPath}/third_party/skia/src/core/SkScalerContext.cpp",
			"${srcPath}/third_party/skia/src/core/SkScan.cpp",
			"${srcPath}/third_party/skia/src/core/SkScan_Antihair.cpp",
			"${srcPath}/third_party/skia/src/core/SkScan_AntiPath.cpp",
			"${srcPath}/third_party/skia/src/core/SkScan_Hairline.cpp",
			"${srcPath}/third_party/skia/src/core/SkScan_Path.cpp",
			"${srcPath}/third_party/skia/src/core/SkSemaphore.cpp",
			"${srcPath}/third_party/skia/src/core/SkShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkSharedMutex.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpanProcs.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpecialImage.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpecialSurface.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpinlock.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpriteBlitter_ARGB32.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpriteBlitter_RGB16.cpp",
			"${srcPath}/third_party/skia/src/core/SkSpriteBlitter4f.cpp",
			"${srcPath}/third_party/skia/src/core/SkStream.cpp",
			"${srcPath}/third_party/skia/src/core/SkString.cpp",
			"${srcPath}/third_party/skia/src/core/SkStringUtils.cpp",
			"${srcPath}/third_party/skia/src/core/SkStroke.cpp",
			"${srcPath}/third_party/skia/src/core/SkStrokeRec.cpp",
			"${srcPath}/third_party/skia/src/core/SkStrokerPriv.cpp",
			"${srcPath}/third_party/skia/src/core/SkSwizzle.cpp",
			"${srcPath}/third_party/skia/src/core/SkTaskGroup.cpp",
			"${srcPath}/third_party/skia/src/core/SkTextBlob.cpp",
			"${srcPath}/third_party/skia/src/core/SkThreadID.cpp",
			"${srcPath}/third_party/skia/src/core/SkTime.cpp",
			"${srcPath}/third_party/skia/src/core/SkTLS.cpp",
			"${srcPath}/third_party/skia/src/core/SkTSearch.cpp",
			"${srcPath}/third_party/skia/src/core/SkTypeface.cpp",
			"${srcPath}/third_party/skia/src/core/SkTypefaceCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkUnPreMultiply.cpp",
			"${srcPath}/third_party/skia/src/core/SkUtils.cpp",
			"${srcPath}/third_party/skia/src/core/SkUtilsArm.cpp",
			"${srcPath}/third_party/skia/src/core/SkValidatingReadBuffer.cpp",
			"${srcPath}/third_party/skia/src/core/SkVarAlloc.cpp",
			"${srcPath}/third_party/skia/src/core/SkVertState.cpp",
			"${srcPath}/third_party/skia/src/core/SkWriteBuffer.cpp",
			"${srcPath}/third_party/skia/src/core/SkWriter32.cpp",
			"${srcPath}/third_party/skia/src/core/SkXfermode.cpp",
			"${srcPath}/third_party/skia/src/core/SkXfermode4f.cpp",
			"${srcPath}/third_party/skia/src/core/SkXfermodeF16.cpp",
			"${srcPath}/third_party/skia/src/core/SkXfermodeInterpretation.cpp",
			"${srcPath}/third_party/skia/src/core/SkYUVPlanesCache.cpp",
			"${srcPath}/third_party/skia/src/core/SkAAClip.cpp",
			"${srcPath}/third_party/skia/src/core/SkAdvancedTypefaceMetrics.cpp",
			"${srcPath}/third_party/skia/src/core/SkAlphaRuns.cpp",
			"${srcPath}/third_party/skia/src/core/SkAnnotation.cpp",
			"${srcPath}/third_party/skia/src/effects/GrCircleBlurFragmentProcessor.cpp",
			"${srcPath}/third_party/skia/src/effects/Sk1DPathEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/Sk2DPathEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/SkAlphaThresholdFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkArcToPathEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/SkArithmeticMode.cpp",
			"${srcPath}/third_party/skia/src/effects/SkArithmeticMode_gpu.cpp",
			"${srcPath}/third_party/skia/src/effects/SkBlurDrawLooper.cpp",
			"${srcPath}/third_party/skia/src/effects/SkBlurImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkBlurMask.cpp",
			"${srcPath}/third_party/skia/src/effects/SkBlurMaskFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkColorCubeFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkColorFilterImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkColorMatrix.cpp",
			"${srcPath}/third_party/skia/src/effects/SkColorMatrixFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkComposeImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkCornerPathEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/SkDashPathEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/SkDiscretePathEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/SkDisplacementMapEffect.cpp",
			"${srcPath}/third_party/skia/src/effects/SkDropShadowImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkEmbossMask.cpp",
			"${srcPath}/third_party/skia/src/effects/SkEmbossMaskFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkGpuBlurUtils.cpp",
			"${srcPath}/third_party/skia/src/effects/SkImageSource.cpp",
			"${srcPath}/third_party/skia/src/effects/SkLayerDrawLooper.cpp",
			"${srcPath}/third_party/skia/src/effects/SkLayerRasterizer.cpp",
			"${srcPath}/third_party/skia/src/effects/SkLightingImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkLumaColorFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkMagnifierImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkMatrixConvolutionImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkMergeImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkMorphologyImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkOffsetImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkPackBits.cpp",
			"${srcPath}/third_party/skia/src/effects/SkPaintFlagsDrawFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkPaintImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkPerlinNoiseShader.cpp",
			"${srcPath}/third_party/skia/src/effects/SkPictureImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkTableColorFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkTableMaskFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkTileImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/SkXfermodeImageFilter.cpp",
			"${srcPath}/third_party/skia/src/effects/GrAlphaThresholdFragmentProcessor.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkGradientShader.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkLinearGradient.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkRadialGradient.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkSweepGradient.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkTwoPointConicalGradient.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/Sk4fGradientBase.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/Sk4fLinearGradient.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkClampRange.cpp",
			"${srcPath}/third_party/skia/src/effects/gradients/SkGradientBitmapCache.cpp",
			"${srcPath}/third_party/skia/src/images/SkMovie.cpp",
			"${srcPath}/third_party/skia/src/images/SkMovie_FactoryDefault.cpp",
			"${srcPath}/third_party/skia/src/images/SkARGBImageEncoder.cpp",
			"${srcPath}/third_party/skia/src/images/SkForceLinking.cpp",
			"${srcPath}/third_party/skia/src/images/SkImageEncoder.cpp",
			"${srcPath}/third_party/skia/src/images/SkImageEncoder_Factory.cpp",
			"${srcPath}/third_party/skia/src/opts/SkOpts_sse41.cpp",
			"${srcPath}/third_party/skia/src/opts/SkOpts_ssse3.cpp",
			"${srcPath}/third_party/skia/src/opts/opts_check_x86.cpp",
			"${srcPath}/third_party/skia/src/opts/SkBitmapFilter_opts_SSE2.cpp",
			"${srcPath}/third_party/skia/src/opts/SkBitmapProcState_opts_SSE2.cpp",
			"${srcPath}/third_party/skia/src/opts/SkBitmapProcState_opts_SSSE3.cpp",
			"${srcPath}/third_party/skia/src/opts/SkBlitRow_opts_SSE2.cpp",
			"${srcPath}/third_party/skia/src/opts/SkOpts_avx.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontMgr_custom.cpp",
			//"${srcPath}/third_party/skia/src/ports/SkFontMgr_custom_directory_factory.cpp",
			//"${srcPath}/third_party/skia/src/ports/SkFontMgr_custom_embedded_factory.cpp",
			//"${srcPath}/third_party/skia/src/ports/SkFontMgr_custom_empty_factory.cpp",
			//"${srcPath}/third_party/skia/src/ports/SkFontMgr_empty_factory.cpp",
			"${srcPath}/third_party/skia/src/ports/SkOSFile_posix.cpp",
			"${srcPath}/third_party/skia/src/ports/SkTLS_pthread.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontHost_FreeType.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontHost_FreeType_common.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontConfigInterface_direct_factory.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontConfigInterface_direct.cpp",
			"${srcPath}/third_party/skia/src/ports/SkDebug_stdio.cpp",
			"${srcPath}/third_party/skia/src/ports/SkDebug_win.cpp",
			"${srcPath}/third_party/skia/src/ports/SkDiscardableMemory_none.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontHost_win.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontMgr_win_gdi_factory.cpp",
			"${srcPath}/third_party/skia/src/ports/SkGlobalInitialization_default.cpp",
			"${srcPath}/third_party/skia/src/ports/SkImageGenerator_none.cpp",
			"${srcPath}/third_party/skia/src/ports/SkMemory_malloc.cpp",
			"${srcPath}/third_party/skia/src/ports/SkOSEnvironment.cpp",
			"${srcPath}/third_party/skia/src/ports/SkOSFile_stdio.cpp",
			"${srcPath}/third_party/skia/src/ports/SkOSFile_win.cpp",
			"${srcPath}/third_party/skia/src/ports/SkOSLibrary_win.cpp",
			"${srcPath}/third_party/skia/src/ports/SkFontHost_fontconfig.cpp",
			"${srcPath}/third_party/skia/src/utils/SkThreadUtils_win.cpp",
			"${srcPath}/third_party/skia/src/utils/SkWhitelistChecksums.cpp",
			"${srcPath}/third_party/skia/src/utils/SkWhitelistTypefaces.cpp",
			"${srcPath}/third_party/skia/src/utils/SkBase64.cpp",
			"${srcPath}/third_party/skia/src/utils/SkBitmapSourceDeserializer.cpp",
			"${srcPath}/third_party/skia/src/utils/SkBitSet.cpp",
			"${srcPath}/third_party/skia/src/utils/SkBoundaryPatch.cpp",
			"${srcPath}/third_party/skia/src/utils/SkCamera.cpp",
			"${srcPath}/third_party/skia/src/utils/SkCanvasStack.cpp",
			"${srcPath}/third_party/skia/src/utils/SkCanvasStateUtils.cpp",
			"${srcPath}/third_party/skia/src/utils/SkDashPath.cpp",
			"${srcPath}/third_party/skia/src/utils/SkDumpCanvas.cpp",
			"${srcPath}/third_party/skia/src/utils/SkEventTracer.cpp",
			"${srcPath}/third_party/skia/src/utils/SkFrontBufferedStream.cpp",
			"${srcPath}/third_party/skia/src/utils/SkInterpolator.cpp",
			"${srcPath}/third_party/skia/src/utils/SkLayer.cpp",
			"${srcPath}/third_party/skia/src/utils/SkMatrix22.cpp",
			"${srcPath}/third_party/skia/src/utils/SkMeshUtils.cpp",
			"${srcPath}/third_party/skia/src/utils/SkMultiPictureDocument.cpp",
			"${srcPath}/third_party/skia/src/utils/SkMultiPictureDocumentReader.cpp",
			"${srcPath}/third_party/skia/src/utils/SkNinePatch.cpp",
			"${srcPath}/third_party/skia/src/utils/SkNullCanvas.cpp",
			"${srcPath}/third_party/skia/src/utils/SkNWayCanvas.cpp",
			"${srcPath}/third_party/skia/src/utils/SkOSFile.cpp",
			"${srcPath}/third_party/skia/src/utils/SkPaintFilterCanvas.cpp",
			"${srcPath}/third_party/skia/src/utils/SkParse.cpp",
			"${srcPath}/third_party/skia/src/utils/SkParseColor.cpp",
			"${srcPath}/third_party/skia/src/utils/SkParsePath.cpp",
			"${srcPath}/third_party/skia/src/utils/SkPatchGrid.cpp",
			"${srcPath}/third_party/skia/src/utils/SkPatchUtils.cpp",
			"${srcPath}/third_party/skia/src/utils/SkRGBAToYUV.cpp",
			"${srcPath}/third_party/skia/src/utils/SkRTConf.cpp",
			"${srcPath}/third_party/skia/src/utils/SkTextBox.cpp",
			"${srcPath}/third_party/skia/src/image/SkImage_Generator.cpp",
			"${srcPath}/third_party/skia/src/image/SkImageShader.cpp",
			"${srcPath}/third_party/skia/src/core/SkColorSpace_ICC.cpp",
			"${srcPath}/third_party/skia/src/sfnt/SkOTTable_name.cpp",
			"${srcPath}/third_party/skia/src/sfnt/SkOTUtils.cpp"
		],
		// 
		"cmd":[
			"-Oz",
			"-fno-exceptions",
			"-fvisibility=hidden",
			"--target=x86_64-linux-guneabi", 
			"-std=c++14",
			"-fms-extensions",
			//"-fshort-wchar",
			"-D_GNU_SOURCE",
			"-DUSE_AURA",
			"-DNDEBUG",
			"-DOS_LINUX_FOR_WIN",
			"-DINSIDE_BLINK",
			"-DBLINK_IMPLEMENTATION",
			"-DENABLE_WKE",
			"-D_HAS_CONSTEXPR=0",
			"-D_CRT_SECURE_NO_WARNINGS",
			"-DSK_SUPPORT_LEGACY_CREATESHADER_PTR=1",
			"-DSK_SUPPORT_LEGACY_PICTURE_PTR=1",
			"-DSK_SUPPORT_LEGACY_XFERMODE_PTR=1",
			"-DSK_SUPPORT_LEGACY_TYPEFACE_PTR=1",
			"-DSK_GDI_ALWAYS_USE_TEXTMETRICS_FOR_FONT_METRICS",
			"-DSK_USE_DISCARDABLE_SCALEDIMAGECACHE",
			"-DSK_GAMMA_SRGB",
			"-DSK_GAMMA_CONTRAST=0.5",
			"-DSK_IGNORE_ETC1_SUPPORT=1"
		],
		"objdir":"G:/mycode/miniblink57/out/tmp/skia/linuxreleasex64",
		"outdir":"G:/mycode/miniblink57/out/linuxreleasex64",
		"target":"libskia.a",
		"beginLibs":[
		],
		"linkerCmd":[],
		"endLibs":[
		],
		"linker":"C:/Microsoft/AndroidNDK64/android-ndk-r16b/toolchains/aarch64-linux-android-4.9/prebuilt/windows-x86_64/aarch64-linux-android/bin/ar.exe"
	}
}]