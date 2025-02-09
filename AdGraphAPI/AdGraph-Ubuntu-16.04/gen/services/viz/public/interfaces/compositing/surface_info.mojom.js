// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/surface_info.mojom';
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
  var surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_id.mojom', 'surface_id.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function SurfaceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SurfaceInfo.prototype.initDefaults_ = function() {
    this.surfaceId = null;
    this.deviceScaleFactor = 0;
    this.sizeInPixels = null;
  };
  SurfaceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SurfaceInfo.generate = function(generator_) {
    var generated = new SurfaceInfo;
    generated.surfaceId = generator_.generateStruct(viz.mojom.SurfaceId, false);
    generated.deviceScaleFactor = generator_.generateFloat();
    generated.sizeInPixels = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  SurfaceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.surfaceId = mutator_.mutateStruct(viz.mojom.SurfaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceScaleFactor = mutator_.mutateFloat(this.deviceScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.sizeInPixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  SurfaceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SurfaceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SurfaceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SurfaceInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SurfaceInfo.surfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surface_id$.SurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate SurfaceInfo.sizeInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SurfaceInfo.encodedSize = codec.kStructHeaderSize + 24;

  SurfaceInfo.decode = function(decoder) {
    var packed;
    var val = new SurfaceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.surfaceId = decoder.decodeStructPointer(surface_id$.SurfaceId);
    val.deviceScaleFactor = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sizeInPixels = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  SurfaceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SurfaceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surface_id$.SurfaceId, val.surfaceId);
    encoder.encodeStruct(codec.Float, val.deviceScaleFactor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.sizeInPixels);
  };
  exports.SurfaceInfo = SurfaceInfo;
})();