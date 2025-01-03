// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/gpu_preferences.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gpu.mojom');
  var buffer_types$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/buffer_types.mojom', '../../../ui/gfx/mojo/buffer_types.mojom.js');
  }


  var VpxDecodeVendors = {};
  VpxDecodeVendors.VPX_VENDOR_NONE = 0;
  VpxDecodeVendors.VPX_VENDOR_MICROSOFT = 1;
  VpxDecodeVendors.VPX_VENDOR_AMD = 2;
  VpxDecodeVendors.VPX_VENDOR_ALL = 3;

  VpxDecodeVendors.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  VpxDecodeVendors.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function GpuPreferences(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuPreferences.prototype.initDefaults_ = function() {
    this.singleProcess = false;
    this.inProcessGpu = false;
    this.disableAcceleratedVideoDecode = false;
    this.disableAcceleratedVideoEncode = false;
    this.gpuStartupDialog = false;
    this.disableGpuWatchdog = false;
    this.gpuSandboxStartEarly = false;
    this.enableLowLatencyDxva = false;
    this.enableZeroCopyDxgiVideo = false;
    this.enableNv12DxgiVideo = false;
    this.enableMediaFoundationVeaOnWindows7 = false;
    this.disableSoftwareRasterizer = false;
    this.logGpuControlListDecisions = false;
    this.compileShaderAlwaysSucceeds = false;
    this.disableGlErrorLimit = false;
    this.disableGlslTranslator = false;
    this.disableShaderNameHashing = false;
    this.enableGpuCommandLogging = false;
    this.enableGpuDebugging = false;
    this.enableGpuServiceLoggingGpu = false;
    this.enableGpuDriverDebugLogging = false;
    this.disableGpuProgramCache = false;
    this.enforceGlMinimums = false;
    this.disableGpuShaderDiskCache = false;
    this.enableThreadedTextureMailboxes = false;
    this.glShaderIntermOutput = false;
    this.emulateShaderPrecision = false;
    this.enableGpuServiceLogging = false;
    this.enableGpuServiceTracing = false;
    this.usePassthroughCmdDecoder = false;
    this.disableBiplanarGpuMemoryBuffersForVideoFrames = false;
    this.disableGpuDriverBugWorkarounds = false;
    this.enableAcceleratedVpxDecode = 0;
    this.forceGpuMemAvailable = 0;
    this.gpuProgramCacheSize = 0;
    this.textureTargetExceptionList = null;
    this.ignoreGpuBlacklist = false;
    this.enableOopRasterization = false;
    this.useGpuFencesForOverlayPlanes = false;
  };
  GpuPreferences.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuPreferences.generate = function(generator_) {
    var generated = new GpuPreferences;
    generated.singleProcess = generator_.generateBool();
    generated.inProcessGpu = generator_.generateBool();
    generated.disableAcceleratedVideoDecode = generator_.generateBool();
    generated.disableAcceleratedVideoEncode = generator_.generateBool();
    generated.gpuStartupDialog = generator_.generateBool();
    generated.disableGpuWatchdog = generator_.generateBool();
    generated.gpuSandboxStartEarly = generator_.generateBool();
    generated.enableAcceleratedVpxDecode = generator_.generateEnum(0, 3);
    generated.enableLowLatencyDxva = generator_.generateBool();
    generated.enableZeroCopyDxgiVideo = generator_.generateBool();
    generated.enableNv12DxgiVideo = generator_.generateBool();
    generated.enableMediaFoundationVeaOnWindows7 = generator_.generateBool();
    generated.disableSoftwareRasterizer = generator_.generateBool();
    generated.logGpuControlListDecisions = generator_.generateBool();
    generated.compileShaderAlwaysSucceeds = generator_.generateBool();
    generated.disableGlErrorLimit = generator_.generateBool();
    generated.disableGlslTranslator = generator_.generateBool();
    generated.disableShaderNameHashing = generator_.generateBool();
    generated.enableGpuCommandLogging = generator_.generateBool();
    generated.enableGpuDebugging = generator_.generateBool();
    generated.enableGpuServiceLoggingGpu = generator_.generateBool();
    generated.enableGpuDriverDebugLogging = generator_.generateBool();
    generated.disableGpuProgramCache = generator_.generateBool();
    generated.enforceGlMinimums = generator_.generateBool();
    generated.forceGpuMemAvailable = generator_.generateUint32();
    generated.gpuProgramCacheSize = generator_.generateUint32();
    generated.disableGpuShaderDiskCache = generator_.generateBool();
    generated.enableThreadedTextureMailboxes = generator_.generateBool();
    generated.glShaderIntermOutput = generator_.generateBool();
    generated.emulateShaderPrecision = generator_.generateBool();
    generated.enableGpuServiceLogging = generator_.generateBool();
    generated.enableGpuServiceTracing = generator_.generateBool();
    generated.usePassthroughCmdDecoder = generator_.generateBool();
    generated.disableBiplanarGpuMemoryBuffersForVideoFrames = generator_.generateBool();
    generated.textureTargetExceptionList = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.BufferUsageAndFormat, false);
    });
    generated.disableGpuDriverBugWorkarounds = generator_.generateBool();
    generated.ignoreGpuBlacklist = generator_.generateBool();
    generated.enableOopRasterization = generator_.generateBool();
    generated.useGpuFencesForOverlayPlanes = generator_.generateBool();
    return generated;
  };

  GpuPreferences.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.singleProcess = mutator_.mutateBool(this.singleProcess);
    }
    if (mutator_.chooseMutateField()) {
      this.inProcessGpu = mutator_.mutateBool(this.inProcessGpu);
    }
    if (mutator_.chooseMutateField()) {
      this.disableAcceleratedVideoDecode = mutator_.mutateBool(this.disableAcceleratedVideoDecode);
    }
    if (mutator_.chooseMutateField()) {
      this.disableAcceleratedVideoEncode = mutator_.mutateBool(this.disableAcceleratedVideoEncode);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuStartupDialog = mutator_.mutateBool(this.gpuStartupDialog);
    }
    if (mutator_.chooseMutateField()) {
      this.disableGpuWatchdog = mutator_.mutateBool(this.disableGpuWatchdog);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuSandboxStartEarly = mutator_.mutateBool(this.gpuSandboxStartEarly);
    }
    if (mutator_.chooseMutateField()) {
      this.enableAcceleratedVpxDecode = mutator_.mutateEnum(this.enableAcceleratedVpxDecode, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.enableLowLatencyDxva = mutator_.mutateBool(this.enableLowLatencyDxva);
    }
    if (mutator_.chooseMutateField()) {
      this.enableZeroCopyDxgiVideo = mutator_.mutateBool(this.enableZeroCopyDxgiVideo);
    }
    if (mutator_.chooseMutateField()) {
      this.enableNv12DxgiVideo = mutator_.mutateBool(this.enableNv12DxgiVideo);
    }
    if (mutator_.chooseMutateField()) {
      this.enableMediaFoundationVeaOnWindows7 = mutator_.mutateBool(this.enableMediaFoundationVeaOnWindows7);
    }
    if (mutator_.chooseMutateField()) {
      this.disableSoftwareRasterizer = mutator_.mutateBool(this.disableSoftwareRasterizer);
    }
    if (mutator_.chooseMutateField()) {
      this.logGpuControlListDecisions = mutator_.mutateBool(this.logGpuControlListDecisions);
    }
    if (mutator_.chooseMutateField()) {
      this.compileShaderAlwaysSucceeds = mutator_.mutateBool(this.compileShaderAlwaysSucceeds);
    }
    if (mutator_.chooseMutateField()) {
      this.disableGlErrorLimit = mutator_.mutateBool(this.disableGlErrorLimit);
    }
    if (mutator_.chooseMutateField()) {
      this.disableGlslTranslator = mutator_.mutateBool(this.disableGlslTranslator);
    }
    if (mutator_.chooseMutateField()) {
      this.disableShaderNameHashing = mutator_.mutateBool(this.disableShaderNameHashing);
    }
    if (mutator_.chooseMutateField()) {
      this.enableGpuCommandLogging = mutator_.mutateBool(this.enableGpuCommandLogging);
    }
    if (mutator_.chooseMutateField()) {
      this.enableGpuDebugging = mutator_.mutateBool(this.enableGpuDebugging);
    }
    if (mutator_.chooseMutateField()) {
      this.enableGpuServiceLoggingGpu = mutator_.mutateBool(this.enableGpuServiceLoggingGpu);
    }
    if (mutator_.chooseMutateField()) {
      this.enableGpuDriverDebugLogging = mutator_.mutateBool(this.enableGpuDriverDebugLogging);
    }
    if (mutator_.chooseMutateField()) {
      this.disableGpuProgramCache = mutator_.mutateBool(this.disableGpuProgramCache);
    }
    if (mutator_.chooseMutateField()) {
      this.enforceGlMinimums = mutator_.mutateBool(this.enforceGlMinimums);
    }
    if (mutator_.chooseMutateField()) {
      this.forceGpuMemAvailable = mutator_.mutateUint32(this.forceGpuMemAvailable);
    }
    if (mutator_.chooseMutateField()) {
      this.gpuProgramCacheSize = mutator_.mutateUint32(this.gpuProgramCacheSize);
    }
    if (mutator_.chooseMutateField()) {
      this.disableGpuShaderDiskCache = mutator_.mutateBool(this.disableGpuShaderDiskCache);
    }
    if (mutator_.chooseMutateField()) {
      this.enableThreadedTextureMailboxes = mutator_.mutateBool(this.enableThreadedTextureMailboxes);
    }
    if (mutator_.chooseMutateField()) {
      this.glShaderIntermOutput = mutator_.mutateBool(this.glShaderIntermOutput);
    }
    if (mutator_.chooseMutateField()) {
      this.emulateShaderPrecision = mutator_.mutateBool(this.emulateShaderPrecision);
    }
    if (mutator_.chooseMutateField()) {
      this.enableGpuServiceLogging = mutator_.mutateBool(this.enableGpuServiceLogging);
    }
    if (mutator_.chooseMutateField()) {
      this.enableGpuServiceTracing = mutator_.mutateBool(this.enableGpuServiceTracing);
    }
    if (mutator_.chooseMutateField()) {
      this.usePassthroughCmdDecoder = mutator_.mutateBool(this.usePassthroughCmdDecoder);
    }
    if (mutator_.chooseMutateField()) {
      this.disableBiplanarGpuMemoryBuffersForVideoFrames = mutator_.mutateBool(this.disableBiplanarGpuMemoryBuffersForVideoFrames);
    }
    if (mutator_.chooseMutateField()) {
      this.textureTargetExceptionList = mutator_.mutateArray(this.textureTargetExceptionList, function(val) {
        return mutator_.mutateStruct(gfx.mojom.BufferUsageAndFormat, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.disableGpuDriverBugWorkarounds = mutator_.mutateBool(this.disableGpuDriverBugWorkarounds);
    }
    if (mutator_.chooseMutateField()) {
      this.ignoreGpuBlacklist = mutator_.mutateBool(this.ignoreGpuBlacklist);
    }
    if (mutator_.chooseMutateField()) {
      this.enableOopRasterization = mutator_.mutateBool(this.enableOopRasterization);
    }
    if (mutator_.chooseMutateField()) {
      this.useGpuFencesForOverlayPlanes = mutator_.mutateBool(this.useGpuFencesForOverlayPlanes);
    }
    return this;
  };
  GpuPreferences.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuPreferences.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuPreferences.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuPreferences.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;









    // validate GpuPreferences.enableAcceleratedVpxDecode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, VpxDecodeVendors);
    if (err !== validator.validationError.NONE)
        return err;




























    // validate GpuPreferences.textureTargetExceptionList
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(buffer_types$.BufferUsageAndFormat), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  GpuPreferences.encodedSize = codec.kStructHeaderSize + 32;

  GpuPreferences.decode = function(decoder) {
    var packed;
    var val = new GpuPreferences();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.singleProcess = (packed >> 0) & 1 ? true : false;
    val.inProcessGpu = (packed >> 1) & 1 ? true : false;
    val.disableAcceleratedVideoDecode = (packed >> 2) & 1 ? true : false;
    val.disableAcceleratedVideoEncode = (packed >> 3) & 1 ? true : false;
    val.gpuStartupDialog = (packed >> 4) & 1 ? true : false;
    val.disableGpuWatchdog = (packed >> 5) & 1 ? true : false;
    val.gpuSandboxStartEarly = (packed >> 6) & 1 ? true : false;
    val.enableLowLatencyDxva = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.enableZeroCopyDxgiVideo = (packed >> 0) & 1 ? true : false;
    val.enableNv12DxgiVideo = (packed >> 1) & 1 ? true : false;
    val.enableMediaFoundationVeaOnWindows7 = (packed >> 2) & 1 ? true : false;
    val.disableSoftwareRasterizer = (packed >> 3) & 1 ? true : false;
    val.logGpuControlListDecisions = (packed >> 4) & 1 ? true : false;
    val.compileShaderAlwaysSucceeds = (packed >> 5) & 1 ? true : false;
    val.disableGlErrorLimit = (packed >> 6) & 1 ? true : false;
    val.disableGlslTranslator = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.disableShaderNameHashing = (packed >> 0) & 1 ? true : false;
    val.enableGpuCommandLogging = (packed >> 1) & 1 ? true : false;
    val.enableGpuDebugging = (packed >> 2) & 1 ? true : false;
    val.enableGpuServiceLoggingGpu = (packed >> 3) & 1 ? true : false;
    val.enableGpuDriverDebugLogging = (packed >> 4) & 1 ? true : false;
    val.disableGpuProgramCache = (packed >> 5) & 1 ? true : false;
    val.enforceGlMinimums = (packed >> 6) & 1 ? true : false;
    val.disableGpuShaderDiskCache = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.enableThreadedTextureMailboxes = (packed >> 0) & 1 ? true : false;
    val.glShaderIntermOutput = (packed >> 1) & 1 ? true : false;
    val.emulateShaderPrecision = (packed >> 2) & 1 ? true : false;
    val.enableGpuServiceLogging = (packed >> 3) & 1 ? true : false;
    val.enableGpuServiceTracing = (packed >> 4) & 1 ? true : false;
    val.usePassthroughCmdDecoder = (packed >> 5) & 1 ? true : false;
    val.disableBiplanarGpuMemoryBuffersForVideoFrames = (packed >> 6) & 1 ? true : false;
    val.disableGpuDriverBugWorkarounds = (packed >> 7) & 1 ? true : false;
    val.enableAcceleratedVpxDecode = decoder.decodeStruct(codec.Int32);
    val.forceGpuMemAvailable = decoder.decodeStruct(codec.Uint32);
    val.gpuProgramCacheSize = decoder.decodeStruct(codec.Uint32);
    val.textureTargetExceptionList = decoder.decodeArrayPointer(new codec.PointerTo(buffer_types$.BufferUsageAndFormat));
    packed = decoder.readUint8();
    val.ignoreGpuBlacklist = (packed >> 0) & 1 ? true : false;
    val.enableOopRasterization = (packed >> 1) & 1 ? true : false;
    val.useGpuFencesForOverlayPlanes = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuPreferences.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuPreferences.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.singleProcess & 1) << 0
    packed |= (val.inProcessGpu & 1) << 1
    packed |= (val.disableAcceleratedVideoDecode & 1) << 2
    packed |= (val.disableAcceleratedVideoEncode & 1) << 3
    packed |= (val.gpuStartupDialog & 1) << 4
    packed |= (val.disableGpuWatchdog & 1) << 5
    packed |= (val.gpuSandboxStartEarly & 1) << 6
    packed |= (val.enableLowLatencyDxva & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.enableZeroCopyDxgiVideo & 1) << 0
    packed |= (val.enableNv12DxgiVideo & 1) << 1
    packed |= (val.enableMediaFoundationVeaOnWindows7 & 1) << 2
    packed |= (val.disableSoftwareRasterizer & 1) << 3
    packed |= (val.logGpuControlListDecisions & 1) << 4
    packed |= (val.compileShaderAlwaysSucceeds & 1) << 5
    packed |= (val.disableGlErrorLimit & 1) << 6
    packed |= (val.disableGlslTranslator & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.disableShaderNameHashing & 1) << 0
    packed |= (val.enableGpuCommandLogging & 1) << 1
    packed |= (val.enableGpuDebugging & 1) << 2
    packed |= (val.enableGpuServiceLoggingGpu & 1) << 3
    packed |= (val.enableGpuDriverDebugLogging & 1) << 4
    packed |= (val.disableGpuProgramCache & 1) << 5
    packed |= (val.enforceGlMinimums & 1) << 6
    packed |= (val.disableGpuShaderDiskCache & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.enableThreadedTextureMailboxes & 1) << 0
    packed |= (val.glShaderIntermOutput & 1) << 1
    packed |= (val.emulateShaderPrecision & 1) << 2
    packed |= (val.enableGpuServiceLogging & 1) << 3
    packed |= (val.enableGpuServiceTracing & 1) << 4
    packed |= (val.usePassthroughCmdDecoder & 1) << 5
    packed |= (val.disableBiplanarGpuMemoryBuffersForVideoFrames & 1) << 6
    packed |= (val.disableGpuDriverBugWorkarounds & 1) << 7
    encoder.writeUint8(packed);
    encoder.encodeStruct(codec.Int32, val.enableAcceleratedVpxDecode);
    encoder.encodeStruct(codec.Uint32, val.forceGpuMemAvailable);
    encoder.encodeStruct(codec.Uint32, val.gpuProgramCacheSize);
    encoder.encodeArrayPointer(new codec.PointerTo(buffer_types$.BufferUsageAndFormat), val.textureTargetExceptionList);
    packed = 0;
    packed |= (val.ignoreGpuBlacklist & 1) << 0
    packed |= (val.enableOopRasterization & 1) << 1
    packed |= (val.useGpuFencesForOverlayPlanes & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.VpxDecodeVendors = VpxDecodeVendors;
  exports.GpuPreferences = GpuPreferences;
})();