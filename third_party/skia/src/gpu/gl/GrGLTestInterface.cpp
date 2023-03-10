/*
 * Copyright 2016 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "GrGLTestInterface.h"
#include <functional>

namespace {
template <typename R, typename... A>
std::function<R(A...)> bind_to_member(GrGLTestInterface* interface, R (GrGLTestInterface::*member)(A...))
{
    return [interface, member](A... a) -> R { return (interface->*member)(a...); };
}
} // anonymous namespace

GrGLTestInterface::GrGLTestInterface()
{
    fFunctions.fActiveTexture = bind_to_member(this, &GrGLTestInterface::activeTexture);
    fFunctions.fAttachShader = bind_to_member(this, &GrGLTestInterface::attachShader);
    fFunctions.fBeginQuery = bind_to_member(this, &GrGLTestInterface::beginQuery);
    fFunctions.fBindAttribLocation = bind_to_member(this, &GrGLTestInterface::bindAttribLocation);
    fFunctions.fBindBuffer = bind_to_member(this, &GrGLTestInterface::bindBuffer);
    fFunctions.fBindFramebuffer = bind_to_member(this, &GrGLTestInterface::bindFramebuffer);
    fFunctions.fBindRenderbuffer = bind_to_member(this, &GrGLTestInterface::bindRenderbuffer);
    fFunctions.fBindTexture = bind_to_member(this, &GrGLTestInterface::bindTexture);
    fFunctions.fBindFragDataLocation = bind_to_member(this, &GrGLTestInterface::bindFragDataLocation);
    fFunctions.fBindFragDataLocationIndexed = bind_to_member(this, &GrGLTestInterface::bindFragDataLocationIndexed);
    fFunctions.fBindVertexArray = bind_to_member(this, &GrGLTestInterface::bindVertexArray);
    fFunctions.fBlendBarrier = bind_to_member(this, &GrGLTestInterface::blendBarrier);
    fFunctions.fBlendColor = bind_to_member(this, &GrGLTestInterface::blendColor);
    fFunctions.fBlendEquation = bind_to_member(this, &GrGLTestInterface::blendEquation);
    fFunctions.fBlendFunc = bind_to_member(this, &GrGLTestInterface::blendFunc);
    fFunctions.fBlitFramebuffer = bind_to_member(this, &GrGLTestInterface::blitFramebuffer);
    fFunctions.fBufferData = bind_to_member(this, &GrGLTestInterface::bufferData);
    fFunctions.fBufferSubData = bind_to_member(this, &GrGLTestInterface::bufferSubData);
    fFunctions.fCheckFramebufferStatus = bind_to_member(this, &GrGLTestInterface::checkFramebufferStatus);
    fFunctions.fClear = bind_to_member(this, &GrGLTestInterface::clear);
    fFunctions.fClearColor = bind_to_member(this, &GrGLTestInterface::clearColor);
    fFunctions.fClearStencil = bind_to_member(this, &GrGLTestInterface::clearStencil);
    fFunctions.fColorMask = bind_to_member(this, &GrGLTestInterface::colorMask);
    fFunctions.fCompileShader = bind_to_member(this, &GrGLTestInterface::compileShader);
    fFunctions.fCompressedTexImage2D = bind_to_member(this, &GrGLTestInterface::compressedTexImage2D);
    fFunctions.fCompressedTexSubImage2D = bind_to_member(this, &GrGLTestInterface::compressedTexSubImage2D);
    fFunctions.fCopyTexSubImage2D = bind_to_member(this, &GrGLTestInterface::copyTexSubImage2D);
    fFunctions.fCreateProgram = bind_to_member(this, &GrGLTestInterface::createProgram);
    fFunctions.fCreateShader = bind_to_member(this, &GrGLTestInterface::createShader);
    fFunctions.fCullFace = bind_to_member(this, &GrGLTestInterface::cullFace);
    fFunctions.fDeleteBuffers = bind_to_member(this, &GrGLTestInterface::deleteBuffers);
    fFunctions.fDeleteFramebuffers = bind_to_member(this, &GrGLTestInterface::deleteFramebuffers);
    fFunctions.fDeleteProgram = bind_to_member(this, &GrGLTestInterface::deleteProgram);
    fFunctions.fDeleteQueries = bind_to_member(this, &GrGLTestInterface::deleteQueries);
    fFunctions.fDeleteRenderbuffers = bind_to_member(this, &GrGLTestInterface::deleteRenderbuffers);
    fFunctions.fDeleteShader = bind_to_member(this, &GrGLTestInterface::deleteShader);
    fFunctions.fDeleteTextures = bind_to_member(this, &GrGLTestInterface::deleteTextures);
    fFunctions.fDeleteVertexArrays = bind_to_member(this, &GrGLTestInterface::deleteVertexArrays);
    fFunctions.fDepthMask = bind_to_member(this, &GrGLTestInterface::depthMask);
    fFunctions.fDisable = bind_to_member(this, &GrGLTestInterface::disable);
    fFunctions.fDisableVertexAttribArray = bind_to_member(this, &GrGLTestInterface::disableVertexAttribArray);
    fFunctions.fDrawArrays = bind_to_member(this, &GrGLTestInterface::drawArrays);
    fFunctions.fDrawArraysInstanced = bind_to_member(this, &GrGLTestInterface::drawArraysInstanced);
    fFunctions.fDrawArraysIndirect = bind_to_member(this, &GrGLTestInterface::drawArraysIndirect);
    fFunctions.fDrawBuffer = bind_to_member(this, &GrGLTestInterface::drawBuffer);
    fFunctions.fDrawBuffers = bind_to_member(this, &GrGLTestInterface::drawBuffers);
    fFunctions.fDrawElements = bind_to_member(this, &GrGLTestInterface::drawElements);
    fFunctions.fDrawElementsInstanced = bind_to_member(this, &GrGLTestInterface::drawElementsInstanced);
    fFunctions.fDrawElementsIndirect = bind_to_member(this, &GrGLTestInterface::drawElementsIndirect);
    fFunctions.fEnable = bind_to_member(this, &GrGLTestInterface::enable);
    fFunctions.fEnableVertexAttribArray = bind_to_member(this, &GrGLTestInterface::enableVertexAttribArray);
    fFunctions.fEndQuery = bind_to_member(this, &GrGLTestInterface::endQuery);
    fFunctions.fFinish = bind_to_member(this, &GrGLTestInterface::finish);
    fFunctions.fFlush = bind_to_member(this, &GrGLTestInterface::flush);
    fFunctions.fFlushMappedBufferRange = bind_to_member(this, &GrGLTestInterface::flushMappedBufferRange);
    fFunctions.fFramebufferRenderbuffer = bind_to_member(this, &GrGLTestInterface::framebufferRenderbuffer);
    fFunctions.fFramebufferTexture2D = bind_to_member(this, &GrGLTestInterface::framebufferTexture2D);
    fFunctions.fFramebufferTexture2DMultisample = bind_to_member(this, &GrGLTestInterface::framebufferTexture2DMultisample);
    fFunctions.fFrontFace = bind_to_member(this, &GrGLTestInterface::frontFace);
    fFunctions.fGenBuffers = bind_to_member(this, &GrGLTestInterface::genBuffers);
    fFunctions.fGenFramebuffers = bind_to_member(this, &GrGLTestInterface::genFramebuffers);
    fFunctions.fGenerateMipmap = bind_to_member(this, &GrGLTestInterface::generateMipmap);
    fFunctions.fGenQueries = bind_to_member(this, &GrGLTestInterface::genQueries);
    fFunctions.fGenRenderbuffers = bind_to_member(this, &GrGLTestInterface::genRenderbuffers);
    fFunctions.fGenTextures = bind_to_member(this, &GrGLTestInterface::genTextures);
    fFunctions.fGenVertexArrays = bind_to_member(this, &GrGLTestInterface::genVertexArrays);
    fFunctions.fGetBufferParameteriv = bind_to_member(this, &GrGLTestInterface::getBufferParameteriv);
    fFunctions.fGetError = bind_to_member(this, &GrGLTestInterface::getError);
    fFunctions.fGetFramebufferAttachmentParameteriv = bind_to_member(this, &GrGLTestInterface::getFramebufferAttachmentParameteriv);
    fFunctions.fGetIntegerv = bind_to_member(this, &GrGLTestInterface::getIntegerv);
    fFunctions.fGetMultisamplefv = bind_to_member(this, &GrGLTestInterface::getMultisamplefv);
    fFunctions.fGetProgramInfoLog = bind_to_member(this, &GrGLTestInterface::getProgramInfoLog);
    fFunctions.fGetProgramiv = bind_to_member(this, &GrGLTestInterface::getProgramiv);
    fFunctions.fGetQueryiv = bind_to_member(this, &GrGLTestInterface::getQueryiv);
    fFunctions.fGetQueryObjecti64v = bind_to_member(this, &GrGLTestInterface::getQueryObjecti64v);
    fFunctions.fGetQueryObjectiv = bind_to_member(this, &GrGLTestInterface::getQueryObjectiv);
    fFunctions.fGetQueryObjectui64v = bind_to_member(this, &GrGLTestInterface::getQueryObjectui64v);
    fFunctions.fGetQueryObjectuiv = bind_to_member(this, &GrGLTestInterface::getQueryObjectuiv);
    fFunctions.fGetRenderbufferParameteriv = bind_to_member(this, &GrGLTestInterface::getRenderbufferParameteriv);
    fFunctions.fGetShaderInfoLog = bind_to_member(this, &GrGLTestInterface::getShaderInfoLog);
    fFunctions.fGetShaderiv = bind_to_member(this, &GrGLTestInterface::getShaderiv);
    fFunctions.fGetShaderPrecisionFormat = bind_to_member(this, &GrGLTestInterface::getShaderPrecisionFormat);
    fFunctions.fGetString = bind_to_member(this, &GrGLTestInterface::getString);
    fFunctions.fGetStringi = bind_to_member(this, &GrGLTestInterface::getStringi);
    fFunctions.fGetTexLevelParameteriv = bind_to_member(this, &GrGLTestInterface::getTexLevelParameteriv);
    fFunctions.fGetUniformLocation = bind_to_member(this, &GrGLTestInterface::getUniformLocation);
    fFunctions.fInsertEventMarker = bind_to_member(this, &GrGLTestInterface::insertEventMarker);
    fFunctions.fInvalidateBufferData = bind_to_member(this, &GrGLTestInterface::invalidateBufferData);
    fFunctions.fInvalidateBufferSubData = bind_to_member(this, &GrGLTestInterface::invalidateBufferSubData);
    fFunctions.fInvalidateFramebuffer = bind_to_member(this, &GrGLTestInterface::invalidateFramebuffer);
    fFunctions.fInvalidateSubFramebuffer = bind_to_member(this, &GrGLTestInterface::invalidateSubFramebuffer);
    fFunctions.fInvalidateTexImage = bind_to_member(this, &GrGLTestInterface::invalidateTexImage);
    fFunctions.fInvalidateTexSubImage = bind_to_member(this, &GrGLTestInterface::invalidateTexSubImage);
    fFunctions.fIsTexture = bind_to_member(this, &GrGLTestInterface::isTexture);
    fFunctions.fLineWidth = bind_to_member(this, &GrGLTestInterface::lineWidth);
    fFunctions.fLinkProgram = bind_to_member(this, &GrGLTestInterface::linkProgram);
    fFunctions.fMapBuffer = bind_to_member(this, &GrGLTestInterface::mapBuffer);
    fFunctions.fMapBufferRange = bind_to_member(this, &GrGLTestInterface::mapBufferRange);
    fFunctions.fMapBufferSubData = bind_to_member(this, &GrGLTestInterface::mapBufferSubData);
    fFunctions.fMapTexSubImage2D = bind_to_member(this, &GrGLTestInterface::mapTexSubImage2D);
    fFunctions.fMinSampleShading = bind_to_member(this, &GrGLTestInterface::minSampleShading);
    fFunctions.fPixelStorei = bind_to_member(this, &GrGLTestInterface::pixelStorei);
    fFunctions.fPopGroupMarker = bind_to_member(this, &GrGLTestInterface::popGroupMarker);
    fFunctions.fPushGroupMarker = bind_to_member(this, &GrGLTestInterface::pushGroupMarker);
    fFunctions.fQueryCounter = bind_to_member(this, &GrGLTestInterface::queryCounter);
    fFunctions.fRasterSamples = bind_to_member(this, &GrGLTestInterface::rasterSamples);
    fFunctions.fReadBuffer = bind_to_member(this, &GrGLTestInterface::readBuffer);
    fFunctions.fReadPixels = bind_to_member(this, &GrGLTestInterface::readPixels);
    fFunctions.fRenderbufferStorage = bind_to_member(this, &GrGLTestInterface::renderbufferStorage);
    fFunctions.fRenderbufferStorageMultisample = bind_to_member(this, &GrGLTestInterface::renderbufferStorageMultisample);
    fFunctions.fResolveMultisampleFramebuffer = bind_to_member(this, &GrGLTestInterface::resolveMultisampleFramebuffer);
    fFunctions.fScissor = bind_to_member(this, &GrGLTestInterface::scissor);
    fFunctions.fBindUniformLocation = bind_to_member(this, &GrGLTestInterface::bindUniformLocation);
    fFunctions.fShaderSource = bind_to_member(this, &GrGLTestInterface::shaderSource);
    fFunctions.fStencilFunc = bind_to_member(this, &GrGLTestInterface::stencilFunc);
    fFunctions.fStencilFuncSeparate = bind_to_member(this, &GrGLTestInterface::stencilFuncSeparate);
    fFunctions.fStencilMask = bind_to_member(this, &GrGLTestInterface::stencilMask);
    fFunctions.fStencilMaskSeparate = bind_to_member(this, &GrGLTestInterface::stencilMaskSeparate);
    fFunctions.fStencilOp = bind_to_member(this, &GrGLTestInterface::stencilOp);
    fFunctions.fStencilOpSeparate = bind_to_member(this, &GrGLTestInterface::stencilOpSeparate);
    fFunctions.fTexBuffer = bind_to_member(this, &GrGLTestInterface::texBuffer);
    fFunctions.fTexImage2D = bind_to_member(this, &GrGLTestInterface::texImage2D);
    fFunctions.fTexParameteri = bind_to_member(this, &GrGLTestInterface::texParameteri);
    fFunctions.fTexParameteriv = bind_to_member(this, &GrGLTestInterface::texParameteriv);
    fFunctions.fTexStorage2D = bind_to_member(this, &GrGLTestInterface::texStorage2D);
    fFunctions.fDiscardFramebuffer = bind_to_member(this, &GrGLTestInterface::discardFramebuffer);
    fFunctions.fTexSubImage2D = bind_to_member(this, &GrGLTestInterface::texSubImage2D);
    fFunctions.fTextureBarrier = bind_to_member(this, &GrGLTestInterface::textureBarrier);
    fFunctions.fUniform1f = bind_to_member(this, &GrGLTestInterface::uniform1f);
    fFunctions.fUniform1i = bind_to_member(this, &GrGLTestInterface::uniform1i);
    fFunctions.fUniform1fv = bind_to_member(this, &GrGLTestInterface::uniform1fv);
    fFunctions.fUniform1iv = bind_to_member(this, &GrGLTestInterface::uniform1iv);
    fFunctions.fUniform2f = bind_to_member(this, &GrGLTestInterface::uniform2f);
    fFunctions.fUniform2i = bind_to_member(this, &GrGLTestInterface::uniform2i);
    fFunctions.fUniform2fv = bind_to_member(this, &GrGLTestInterface::uniform2fv);
    fFunctions.fUniform2iv = bind_to_member(this, &GrGLTestInterface::uniform2iv);
    fFunctions.fUniform3f = bind_to_member(this, &GrGLTestInterface::uniform3f);
    fFunctions.fUniform3i = bind_to_member(this, &GrGLTestInterface::uniform3i);
    fFunctions.fUniform3fv = bind_to_member(this, &GrGLTestInterface::uniform3fv);
    fFunctions.fUniform3iv = bind_to_member(this, &GrGLTestInterface::uniform3iv);
    fFunctions.fUniform4f = bind_to_member(this, &GrGLTestInterface::uniform4f);
    fFunctions.fUniform4i = bind_to_member(this, &GrGLTestInterface::uniform4i);
    fFunctions.fUniform4fv = bind_to_member(this, &GrGLTestInterface::uniform4fv);
    fFunctions.fUniform4iv = bind_to_member(this, &GrGLTestInterface::uniform4iv);
    fFunctions.fUniformMatrix2fv = bind_to_member(this, &GrGLTestInterface::uniformMatrix2fv);
    fFunctions.fUniformMatrix3fv = bind_to_member(this, &GrGLTestInterface::uniformMatrix3fv);
    fFunctions.fUniformMatrix4fv = bind_to_member(this, &GrGLTestInterface::uniformMatrix4fv);
    fFunctions.fUnmapBuffer = bind_to_member(this, &GrGLTestInterface::unmapBuffer);
    fFunctions.fUnmapBufferSubData = bind_to_member(this, &GrGLTestInterface::unmapBufferSubData);
    fFunctions.fUnmapTexSubImage2D = bind_to_member(this, &GrGLTestInterface::unmapTexSubImage2D);
    fFunctions.fUseProgram = bind_to_member(this, &GrGLTestInterface::useProgram);
    fFunctions.fVertexAttrib1f = bind_to_member(this, &GrGLTestInterface::vertexAttrib1f);
    fFunctions.fVertexAttrib2fv = bind_to_member(this, &GrGLTestInterface::vertexAttrib2fv);
    fFunctions.fVertexAttrib3fv = bind_to_member(this, &GrGLTestInterface::vertexAttrib3fv);
    fFunctions.fVertexAttrib4fv = bind_to_member(this, &GrGLTestInterface::vertexAttrib4fv);
    fFunctions.fVertexAttribDivisor = bind_to_member(this, &GrGLTestInterface::vertexAttribDivisor);
    fFunctions.fVertexAttribIPointer = bind_to_member(this, &GrGLTestInterface::vertexAttribIPointer);
    fFunctions.fVertexAttribPointer = bind_to_member(this, &GrGLTestInterface::vertexAttribPointer);
    fFunctions.fViewport = bind_to_member(this, &GrGLTestInterface::viewport);
    fFunctions.fMatrixLoadf = bind_to_member(this, &GrGLTestInterface::matrixLoadf);
    fFunctions.fMatrixLoadIdentity = bind_to_member(this, &GrGLTestInterface::matrixLoadIdentity);
    fFunctions.fPathCommands = bind_to_member(this, &GrGLTestInterface::pathCommands);
    fFunctions.fPathParameteri = bind_to_member(this, &GrGLTestInterface::pathParameteri);
    fFunctions.fPathParameterf = bind_to_member(this, &GrGLTestInterface::pathParameterf);
    fFunctions.fGenPaths = bind_to_member(this, &GrGLTestInterface::genPaths);
    fFunctions.fDeletePaths = bind_to_member(this, &GrGLTestInterface::deletePaths);
    fFunctions.fIsPath = bind_to_member(this, &GrGLTestInterface::isPath);
    fFunctions.fPathStencilFunc = bind_to_member(this, &GrGLTestInterface::pathStencilFunc);
    fFunctions.fStencilFillPath = bind_to_member(this, &GrGLTestInterface::stencilFillPath);
    fFunctions.fStencilStrokePath = bind_to_member(this, &GrGLTestInterface::stencilStrokePath);
    fFunctions.fStencilFillPathInstanced = bind_to_member(this, &GrGLTestInterface::stencilFillPathInstanced);
    fFunctions.fStencilStrokePathInstanced = bind_to_member(this, &GrGLTestInterface::stencilStrokePathInstanced);
    fFunctions.fCoverFillPath = bind_to_member(this, &GrGLTestInterface::coverFillPath);
    fFunctions.fCoverStrokePath = bind_to_member(this, &GrGLTestInterface::coverStrokePath);
    fFunctions.fCoverFillPathInstanced = bind_to_member(this, &GrGLTestInterface::coverFillPathInstanced);
    fFunctions.fCoverStrokePathInstanced = bind_to_member(this, &GrGLTestInterface::coverStrokePathInstanced);
    fFunctions.fStencilThenCoverFillPath = bind_to_member(this, &GrGLTestInterface::stencilThenCoverFillPath);
    fFunctions.fStencilThenCoverStrokePath = bind_to_member(this, &GrGLTestInterface::stencilThenCoverStrokePath);
    fFunctions.fStencilThenCoverFillPathInstanced = bind_to_member(this, &GrGLTestInterface::stencilThenCoverFillPathInstanced);
    fFunctions.fStencilThenCoverStrokePathInstanced = bind_to_member(this, &GrGLTestInterface::stencilThenCoverStrokePathInstanced);
    fFunctions.fProgramPathFragmentInputGen = bind_to_member(this, &GrGLTestInterface::programPathFragmentInputGen);
    fFunctions.fBindFragmentInputLocation = bind_to_member(this, &GrGLTestInterface::bindFragmentInputLocation);
    fFunctions.fGetProgramResourceLocation = bind_to_member(this, &GrGLTestInterface::getProgramResourceLocation);
    fFunctions.fCoverageModulation = bind_to_member(this, &GrGLTestInterface::coverageModulation);
    fFunctions.fMultiDrawArraysIndirect = bind_to_member(this, &GrGLTestInterface::multiDrawArraysIndirect);
    fFunctions.fMultiDrawElementsIndirect = bind_to_member(this, &GrGLTestInterface::multiDrawElementsIndirect);
    fFunctions.fGetTextureHandle = bind_to_member(this, &GrGLTestInterface::getTextureHandle);
    fFunctions.fGetTextureSamplerHandle = bind_to_member(this, &GrGLTestInterface::getTextureSamplerHandle);
    fFunctions.fMakeTextureHandleResident = bind_to_member(this, &GrGLTestInterface::makeTextureHandleResident);
    fFunctions.fMakeTextureHandleNonResident = bind_to_member(this, &GrGLTestInterface::makeTextureHandleNonResident);
    fFunctions.fGetImageHandle = bind_to_member(this, &GrGLTestInterface::getImageHandle);
    fFunctions.fMakeImageHandleResident = bind_to_member(this, &GrGLTestInterface::makeImageHandleResident);
    fFunctions.fMakeImageHandleNonResident = bind_to_member(this, &GrGLTestInterface::makeImageHandleNonResident);
    fFunctions.fIsTextureHandleResident = bind_to_member(this, &GrGLTestInterface::isTextureHandleResident);
    fFunctions.fIsImageHandleResident = bind_to_member(this, &GrGLTestInterface::isImageHandleResident);
    fFunctions.fUniformHandleui64 = bind_to_member(this, &GrGLTestInterface::uniformHandleui64);
    fFunctions.fUniformHandleui64v = bind_to_member(this, &GrGLTestInterface::uniformHandleui64v);
    fFunctions.fProgramUniformHandleui64 = bind_to_member(this, &GrGLTestInterface::programUniformHandleui64);
    fFunctions.fProgramUniformHandleui64v = bind_to_member(this, &GrGLTestInterface::programUniformHandleui64v);
    fFunctions.fTextureParameteri = bind_to_member(this, &GrGLTestInterface::textureParameteri);
    fFunctions.fTextureParameteriv = bind_to_member(this, &GrGLTestInterface::textureParameteriv);
    fFunctions.fTextureParameterf = bind_to_member(this, &GrGLTestInterface::textureParameterf);
    fFunctions.fTextureParameterfv = bind_to_member(this, &GrGLTestInterface::textureParameterfv);
    fFunctions.fTextureImage1D = bind_to_member(this, &GrGLTestInterface::textureImage1D);
    fFunctions.fTextureImage2D = bind_to_member(this, &GrGLTestInterface::textureImage2D);
    fFunctions.fTextureSubImage1D = bind_to_member(this, &GrGLTestInterface::textureSubImage1D);
    fFunctions.fTextureSubImage2D = bind_to_member(this, &GrGLTestInterface::textureSubImage2D);
    fFunctions.fCopyTextureImage1D = bind_to_member(this, &GrGLTestInterface::copyTextureImage1D);
    fFunctions.fCopyTextureImage2D = bind_to_member(this, &GrGLTestInterface::copyTextureImage2D);
    fFunctions.fCopyTextureSubImage1D = bind_to_member(this, &GrGLTestInterface::copyTextureSubImage1D);
    fFunctions.fCopyTextureSubImage2D = bind_to_member(this, &GrGLTestInterface::copyTextureSubImage2D);
    fFunctions.fGetTextureImage = bind_to_member(this, &GrGLTestInterface::getTextureImage);
    fFunctions.fGetTextureParameterfv = bind_to_member(this, &GrGLTestInterface::getTextureParameterfv);
    fFunctions.fGetTextureParameteriv = bind_to_member(this, &GrGLTestInterface::getTextureParameteriv);
    fFunctions.fGetTextureLevelParameterfv = bind_to_member(this, &GrGLTestInterface::getTextureLevelParameterfv);
    fFunctions.fGetTextureLevelParameteriv = bind_to_member(this, &GrGLTestInterface::getTextureLevelParameteriv);
    fFunctions.fTextureImage3D = bind_to_member(this, &GrGLTestInterface::textureImage3D);
    fFunctions.fTextureSubImage3D = bind_to_member(this, &GrGLTestInterface::textureSubImage3D);
    fFunctions.fCopyTextureSubImage3D = bind_to_member(this, &GrGLTestInterface::copyTextureSubImage3D);
    fFunctions.fCompressedTextureImage3D = bind_to_member(this, &GrGLTestInterface::compressedTextureImage3D);
    fFunctions.fCompressedTextureImage2D = bind_to_member(this, &GrGLTestInterface::compressedTextureImage2D);
    fFunctions.fCompressedTextureImage1D = bind_to_member(this, &GrGLTestInterface::compressedTextureImage1D);
    fFunctions.fCompressedTextureSubImage3D = bind_to_member(this, &GrGLTestInterface::compressedTextureSubImage3D);
    fFunctions.fCompressedTextureSubImage2D = bind_to_member(this, &GrGLTestInterface::compressedTextureSubImage2D);
    fFunctions.fCompressedTextureSubImage1D = bind_to_member(this, &GrGLTestInterface::compressedTextureSubImage1D);
    fFunctions.fGetCompressedTextureImage = bind_to_member(this, &GrGLTestInterface::getCompressedTextureImage);
    fFunctions.fNamedBufferData = bind_to_member(this, &GrGLTestInterface::namedBufferData);
    fFunctions.fNamedBufferSubData = bind_to_member(this, &GrGLTestInterface::namedBufferSubData);
    fFunctions.fMapNamedBuffer = bind_to_member(this, &GrGLTestInterface::mapNamedBuffer);
    fFunctions.fUnmapNamedBuffer = bind_to_member(this, &GrGLTestInterface::unmapNamedBuffer);
    fFunctions.fGetNamedBufferParameteriv = bind_to_member(this, &GrGLTestInterface::getNamedBufferParameteriv);
    fFunctions.fGetNamedBufferPointerv = bind_to_member(this, &GrGLTestInterface::getNamedBufferPointerv);
    fFunctions.fGetNamedBufferSubData = bind_to_member(this, &GrGLTestInterface::getNamedBufferSubData);
    fFunctions.fProgramUniform1f = bind_to_member(this, &GrGLTestInterface::programUniform1f);
    fFunctions.fProgramUniform2f = bind_to_member(this, &GrGLTestInterface::programUniform2f);
    fFunctions.fProgramUniform3f = bind_to_member(this, &GrGLTestInterface::programUniform3f);
    fFunctions.fProgramUniform4f = bind_to_member(this, &GrGLTestInterface::programUniform4f);
    fFunctions.fProgramUniform1i = bind_to_member(this, &GrGLTestInterface::programUniform1i);
    fFunctions.fProgramUniform2i = bind_to_member(this, &GrGLTestInterface::programUniform2i);
    fFunctions.fProgramUniform3i = bind_to_member(this, &GrGLTestInterface::programUniform3i);
    fFunctions.fProgramUniform4i = bind_to_member(this, &GrGLTestInterface::programUniform4i);
    fFunctions.fProgramUniform1fv = bind_to_member(this, &GrGLTestInterface::programUniform1fv);
    fFunctions.fProgramUniform2fv = bind_to_member(this, &GrGLTestInterface::programUniform2fv);
    fFunctions.fProgramUniform3fv = bind_to_member(this, &GrGLTestInterface::programUniform3fv);
    fFunctions.fProgramUniform4fv = bind_to_member(this, &GrGLTestInterface::programUniform4fv);
    fFunctions.fProgramUniform1iv = bind_to_member(this, &GrGLTestInterface::programUniform1iv);
    fFunctions.fProgramUniform2iv = bind_to_member(this, &GrGLTestInterface::programUniform2iv);
    fFunctions.fProgramUniform3iv = bind_to_member(this, &GrGLTestInterface::programUniform3iv);
    fFunctions.fProgramUniform4iv = bind_to_member(this, &GrGLTestInterface::programUniform4iv);
    fFunctions.fProgramUniformMatrix2fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix2fv);
    fFunctions.fProgramUniformMatrix3fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix3fv);
    fFunctions.fProgramUniformMatrix4fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix4fv);
    fFunctions.fProgramUniformMatrix2x3fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix2x3fv);
    fFunctions.fProgramUniformMatrix3x2fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix3x2fv);
    fFunctions.fProgramUniformMatrix2x4fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix2x4fv);
    fFunctions.fProgramUniformMatrix4x2fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix4x2fv);
    fFunctions.fProgramUniformMatrix3x4fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix3x4fv);
    fFunctions.fProgramUniformMatrix4x3fv = bind_to_member(this, &GrGLTestInterface::programUniformMatrix4x3fv);
    fFunctions.fNamedRenderbufferStorage = bind_to_member(this, &GrGLTestInterface::namedRenderbufferStorage);
    fFunctions.fGetNamedRenderbufferParameteriv = bind_to_member(this, &GrGLTestInterface::getNamedRenderbufferParameteriv);
    fFunctions.fNamedRenderbufferStorageMultisample = bind_to_member(this, &GrGLTestInterface::namedRenderbufferStorageMultisample);
    fFunctions.fCheckNamedFramebufferStatus = bind_to_member(this, &GrGLTestInterface::checkNamedFramebufferStatus);
    fFunctions.fNamedFramebufferTexture1D = bind_to_member(this, &GrGLTestInterface::namedFramebufferTexture1D);
    fFunctions.fNamedFramebufferTexture2D = bind_to_member(this, &GrGLTestInterface::namedFramebufferTexture2D);
    fFunctions.fNamedFramebufferTexture3D = bind_to_member(this, &GrGLTestInterface::namedFramebufferTexture3D);
    fFunctions.fNamedFramebufferRenderbuffer = bind_to_member(this, &GrGLTestInterface::namedFramebufferRenderbuffer);
    fFunctions.fGetNamedFramebufferAttachmentParameteriv = bind_to_member(this, &GrGLTestInterface::getNamedFramebufferAttachmentParameteriv);
    fFunctions.fGenerateTextureMipmap = bind_to_member(this, &GrGLTestInterface::generateTextureMipmap);
    fFunctions.fFramebufferDrawBuffer = bind_to_member(this, &GrGLTestInterface::framebufferDrawBuffer);
    fFunctions.fFramebufferDrawBuffers = bind_to_member(this, &GrGLTestInterface::framebufferDrawBuffers);
    fFunctions.fFramebufferReadBuffer = bind_to_member(this, &GrGLTestInterface::framebufferReadBuffer);
    fFunctions.fGetFramebufferParameteriv = bind_to_member(this, &GrGLTestInterface::getFramebufferParameteriv);
    fFunctions.fNamedCopyBufferSubData = bind_to_member(this, &GrGLTestInterface::namedCopyBufferSubData);
    fFunctions.fVertexArrayVertexOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayVertexOffset);
    fFunctions.fVertexArrayColorOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayColorOffset);
    fFunctions.fVertexArrayEdgeFlagOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayEdgeFlagOffset);
    fFunctions.fVertexArrayIndexOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayIndexOffset);
    fFunctions.fVertexArrayNormalOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayNormalOffset);
    fFunctions.fVertexArrayTexCoordOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayTexCoordOffset);
    fFunctions.fVertexArrayMultiTexCoordOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayMultiTexCoordOffset);
    fFunctions.fVertexArrayFogCoordOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayFogCoordOffset);
    fFunctions.fVertexArraySecondaryColorOffset = bind_to_member(this, &GrGLTestInterface::vertexArraySecondaryColorOffset);
    fFunctions.fVertexArrayVertexAttribOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayVertexAttribOffset);
    fFunctions.fVertexArrayVertexAttribIOffset = bind_to_member(this, &GrGLTestInterface::vertexArrayVertexAttribIOffset);
    fFunctions.fEnableVertexArray = bind_to_member(this, &GrGLTestInterface::enableVertexArray);
    fFunctions.fDisableVertexArray = bind_to_member(this, &GrGLTestInterface::disableVertexArray);
    fFunctions.fEnableVertexArrayAttrib = bind_to_member(this, &GrGLTestInterface::enableVertexArrayAttrib);
    fFunctions.fDisableVertexArrayAttrib = bind_to_member(this, &GrGLTestInterface::disableVertexArrayAttrib);
    fFunctions.fGetVertexArrayIntegerv = bind_to_member(this, &GrGLTestInterface::getVertexArrayIntegerv);
    fFunctions.fGetVertexArrayPointerv = bind_to_member(this, &GrGLTestInterface::getVertexArrayPointerv);
    fFunctions.fGetVertexArrayIntegeri_v = bind_to_member(this, &GrGLTestInterface::getVertexArrayIntegeri_v);
    fFunctions.fGetVertexArrayPointeri_v = bind_to_member(this, &GrGLTestInterface::getVertexArrayPointeri_v);
    fFunctions.fMapNamedBufferRange = bind_to_member(this, &GrGLTestInterface::mapNamedBufferRange);
    fFunctions.fFlushMappedNamedBufferRange = bind_to_member(this, &GrGLTestInterface::flushMappedNamedBufferRange);
    fFunctions.fTextureBuffer = bind_to_member(this, &GrGLTestInterface::textureBuffer);
    fFunctions.fDebugMessageControl = bind_to_member(this, &GrGLTestInterface::debugMessageControl);
    fFunctions.fDebugMessageInsert = bind_to_member(this, &GrGLTestInterface::debugMessageInsert);
    fFunctions.fDebugMessageCallback = bind_to_member(this, &GrGLTestInterface::debugMessageCallback);
    fFunctions.fGetDebugMessageLog = bind_to_member(this, &GrGLTestInterface::getDebugMessageLog);
    fFunctions.fPushDebugGroup = bind_to_member(this, &GrGLTestInterface::pushDebugGroup);
    fFunctions.fPopDebugGroup = bind_to_member(this, &GrGLTestInterface::popDebugGroup);
    fFunctions.fObjectLabel = bind_to_member(this, &GrGLTestInterface::objectLabel);
}
