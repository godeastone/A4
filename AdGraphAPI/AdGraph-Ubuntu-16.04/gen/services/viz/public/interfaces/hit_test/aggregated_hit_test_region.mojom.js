// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom';
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
        'services/viz/public/interfaces/compositing/frame_sink_id.mojom', '../compositing/frame_sink_id.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../../../ui/gfx/mojo/transform.mojom.js');
  }



  function AggregatedHitTestRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AggregatedHitTestRegion.prototype.initDefaults_ = function() {
    this.frameSinkId = null;
    this.flags = 0;
    this.childCount = 0;
    this.rect = null;
    this.transform = null;
  };
  AggregatedHitTestRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AggregatedHitTestRegion.generate = function(generator_) {
    var generated = new AggregatedHitTestRegion;
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.flags = generator_.generateUint32();
    generated.rect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.childCount = generator_.generateUint32();
    generated.transform = generator_.generateStruct(gfx.mojom.Transform, false);
    return generated;
  };

  AggregatedHitTestRegion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateUint32(this.flags);
    }
    if (mutator_.chooseMutateField()) {
      this.rect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.childCount = mutator_.mutateUint32(this.childCount);
    }
    if (mutator_.chooseMutateField()) {
      this.transform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    return this;
  };
  AggregatedHitTestRegion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AggregatedHitTestRegion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AggregatedHitTestRegion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AggregatedHitTestRegion.validate = function(messageValidator, offset) {
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


    // validate AggregatedHitTestRegion.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate AggregatedHitTestRegion.rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate AggregatedHitTestRegion.transform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AggregatedHitTestRegion.encodedSize = codec.kStructHeaderSize + 32;

  AggregatedHitTestRegion.decode = function(decoder) {
    var packed;
    var val = new AggregatedHitTestRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.flags = decoder.decodeStruct(codec.Uint32);
    val.childCount = decoder.decodeStruct(codec.Uint32);
    val.rect = decoder.decodeStructPointer(geometry$.Rect);
    val.transform = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  AggregatedHitTestRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AggregatedHitTestRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStruct(codec.Uint32, val.flags);
    encoder.encodeStruct(codec.Uint32, val.childCount);
    encoder.encodeStructPointer(geometry$.Rect, val.rect);
    encoder.encodeStructPointer(transform$.Transform, val.transform);
  };
  exports.AggregatedHitTestRegion = AggregatedHitTestRegion;
})();