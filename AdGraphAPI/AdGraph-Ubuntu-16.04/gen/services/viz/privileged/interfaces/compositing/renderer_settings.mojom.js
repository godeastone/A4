// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/compositing/renderer_settings.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');



  function RendererSettings(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererSettings.prototype.initDefaults_ = function() {
    this.allowAntialiasing = false;
    this.finishRenderingOnResize = false;
    this.forceAntialiasing = false;
    this.forceBlendingWithShaders = false;
    this.tintGlCompositedContent = false;
    this.partialSwapEnabled = false;
    this.releaseOverlayResourcesAfterGpuQuery = false;
    this.shouldClearRootRenderPass = false;
    this.showOverdrawFeedback = false;
    this.enableDrawOcclusion = false;
    this.useSkiaRenderer = false;
    this.useSkiaDeferredDisplayList = false;
    this.allowOverlays = false;
    this.highpThresholdMin = 0;
    this.slowDownCompositingScaleFactor = 0;
  };
  RendererSettings.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererSettings.generate = function(generator_) {
    var generated = new RendererSettings;
    generated.allowAntialiasing = generator_.generateBool();
    generated.finishRenderingOnResize = generator_.generateBool();
    generated.forceAntialiasing = generator_.generateBool();
    generated.forceBlendingWithShaders = generator_.generateBool();
    generated.tintGlCompositedContent = generator_.generateBool();
    generated.highpThresholdMin = generator_.generateInt32();
    generated.partialSwapEnabled = generator_.generateBool();
    generated.releaseOverlayResourcesAfterGpuQuery = generator_.generateBool();
    generated.shouldClearRootRenderPass = generator_.generateBool();
    generated.showOverdrawFeedback = generator_.generateBool();
    generated.enableDrawOcclusion = generator_.generateBool();
    generated.slowDownCompositingScaleFactor = generator_.generateInt32();
    generated.useSkiaRenderer = generator_.generateBool();
    generated.useSkiaDeferredDisplayList = generator_.generateBool();
    generated.allowOverlays = generator_.generateBool();
    return generated;
  };

  RendererSettings.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.allowAntialiasing = mutator_.mutateBool(this.allowAntialiasing);
    }
    if (mutator_.chooseMutateField()) {
      this.finishRenderingOnResize = mutator_.mutateBool(this.finishRenderingOnResize);
    }
    if (mutator_.chooseMutateField()) {
      this.forceAntialiasing = mutator_.mutateBool(this.forceAntialiasing);
    }
    if (mutator_.chooseMutateField()) {
      this.forceBlendingWithShaders = mutator_.mutateBool(this.forceBlendingWithShaders);
    }
    if (mutator_.chooseMutateField()) {
      this.tintGlCompositedContent = mutator_.mutateBool(this.tintGlCompositedContent);
    }
    if (mutator_.chooseMutateField()) {
      this.highpThresholdMin = mutator_.mutateInt32(this.highpThresholdMin);
    }
    if (mutator_.chooseMutateField()) {
      this.partialSwapEnabled = mutator_.mutateBool(this.partialSwapEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.releaseOverlayResourcesAfterGpuQuery = mutator_.mutateBool(this.releaseOverlayResourcesAfterGpuQuery);
    }
    if (mutator_.chooseMutateField()) {
      this.shouldClearRootRenderPass = mutator_.mutateBool(this.shouldClearRootRenderPass);
    }
    if (mutator_.chooseMutateField()) {
      this.showOverdrawFeedback = mutator_.mutateBool(this.showOverdrawFeedback);
    }
    if (mutator_.chooseMutateField()) {
      this.enableDrawOcclusion = mutator_.mutateBool(this.enableDrawOcclusion);
    }
    if (mutator_.chooseMutateField()) {
      this.slowDownCompositingScaleFactor = mutator_.mutateInt32(this.slowDownCompositingScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.useSkiaRenderer = mutator_.mutateBool(this.useSkiaRenderer);
    }
    if (mutator_.chooseMutateField()) {
      this.useSkiaDeferredDisplayList = mutator_.mutateBool(this.useSkiaDeferredDisplayList);
    }
    if (mutator_.chooseMutateField()) {
      this.allowOverlays = mutator_.mutateBool(this.allowOverlays);
    }
    return this;
  };
  RendererSettings.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererSettings.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererSettings.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererSettings.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;
















    return validator.validationError.NONE;
  };

  RendererSettings.encodedSize = codec.kStructHeaderSize + 16;

  RendererSettings.decode = function(decoder) {
    var packed;
    var val = new RendererSettings();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.allowAntialiasing = (packed >> 0) & 1 ? true : false;
    val.finishRenderingOnResize = (packed >> 1) & 1 ? true : false;
    val.forceAntialiasing = (packed >> 2) & 1 ? true : false;
    val.forceBlendingWithShaders = (packed >> 3) & 1 ? true : false;
    val.tintGlCompositedContent = (packed >> 4) & 1 ? true : false;
    val.partialSwapEnabled = (packed >> 5) & 1 ? true : false;
    val.releaseOverlayResourcesAfterGpuQuery = (packed >> 6) & 1 ? true : false;
    val.shouldClearRootRenderPass = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.showOverdrawFeedback = (packed >> 0) & 1 ? true : false;
    val.enableDrawOcclusion = (packed >> 1) & 1 ? true : false;
    val.useSkiaRenderer = (packed >> 2) & 1 ? true : false;
    val.useSkiaDeferredDisplayList = (packed >> 3) & 1 ? true : false;
    val.allowOverlays = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    val.highpThresholdMin = decoder.decodeStruct(codec.Int32);
    val.slowDownCompositingScaleFactor = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererSettings.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererSettings.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.allowAntialiasing & 1) << 0
    packed |= (val.finishRenderingOnResize & 1) << 1
    packed |= (val.forceAntialiasing & 1) << 2
    packed |= (val.forceBlendingWithShaders & 1) << 3
    packed |= (val.tintGlCompositedContent & 1) << 4
    packed |= (val.partialSwapEnabled & 1) << 5
    packed |= (val.releaseOverlayResourcesAfterGpuQuery & 1) << 6
    packed |= (val.shouldClearRootRenderPass & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.showOverdrawFeedback & 1) << 0
    packed |= (val.enableDrawOcclusion & 1) << 1
    packed |= (val.useSkiaRenderer & 1) << 2
    packed |= (val.useSkiaDeferredDisplayList & 1) << 3
    packed |= (val.allowOverlays & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.highpThresholdMin);
    encoder.encodeStruct(codec.Int32, val.slowDownCompositingScaleFactor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.RendererSettings = RendererSettings;
})();