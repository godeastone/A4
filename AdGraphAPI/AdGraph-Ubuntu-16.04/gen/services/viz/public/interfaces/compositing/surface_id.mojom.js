// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/surface_id.mojom';
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
  var frame_sink_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/frame_sink_id.mojom', 'frame_sink_id.mojom.js');
  }
  var local_surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/local_surface_id.mojom', 'local_surface_id.mojom.js');
  }



  function SurfaceId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SurfaceId.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.localSurfaceId = null;
  };
  SurfaceId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SurfaceId.generate = function(generator_) {
    var generated = new SurfaceId;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, false);
    return generated;
  };

  SurfaceId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, false);
    }
    return this;
  };
  SurfaceId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SurfaceId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SurfaceId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SurfaceId.validate = function(messageValidator, offset) {
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


    // validate SurfaceId.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SurfaceId.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, local_surface_id$.LocalSurfaceId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SurfaceId.encodedSize = codec.kStructHeaderSize + 16;

  SurfaceId.decode = function(decoder) {
    var packed;
    var val = new SurfaceId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    return val;
  };

  SurfaceId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SurfaceId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
  };
  exports.SurfaceId = SurfaceId;
})();