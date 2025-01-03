// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/hit_test/hit_test_region_list.mojom';
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
  var surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_id.mojom', '../compositing/surface_id.mojom.js');
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



  function HitTestRegion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HitTestRegion.prototype.initDefaults_ = function() {
    this.flags = 0;
    this.frameSinkId = null;
    this.rect = null;
    this.transform = null;
  };
  HitTestRegion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HitTestRegion.generate = function(generator_) {
    var generated = new HitTestRegion;
    generated.flags = generator_.generateUint32();
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.rect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.transform = generator_.generateStruct(gfx.mojom.Transform, false);
    return generated;
  };

  HitTestRegion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateUint32(this.flags);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.transform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    return this;
  };
  HitTestRegion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HitTestRegion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HitTestRegion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HitTestRegion.validate = function(messageValidator, offset) {
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



    // validate HitTestRegion.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HitTestRegion.rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HitTestRegion.transform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HitTestRegion.encodedSize = codec.kStructHeaderSize + 32;

  HitTestRegion.decode = function(decoder) {
    var packed;
    var val = new HitTestRegion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.rect = decoder.decodeStructPointer(geometry$.Rect);
    val.transform = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  HitTestRegion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HitTestRegion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeStructPointer(geometry$.Rect, val.rect);
    encoder.encodeStructPointer(transform$.Transform, val.transform);
  };
  function HitTestRegionList(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HitTestRegionList.prototype.initDefaults_ = function() {
    this.flags = 0;
    this.bounds = null;
    this.transform = null;
    this.regions = null;
  };
  HitTestRegionList.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HitTestRegionList.generate = function(generator_) {
    var generated = new HitTestRegionList;
    generated.flags = generator_.generateUint32();
    generated.bounds = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.transform = generator_.generateStruct(gfx.mojom.Transform, false);
    generated.regions = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.HitTestRegion, false);
    });
    return generated;
  };

  HitTestRegionList.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateUint32(this.flags);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.transform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    if (mutator_.chooseMutateField()) {
      this.regions = mutator_.mutateArray(this.regions, function(val) {
        return mutator_.mutateStruct(viz.mojom.HitTestRegion, false);
      });
    }
    return this;
  };
  HitTestRegionList.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HitTestRegionList.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HitTestRegionList.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HitTestRegionList.validate = function(messageValidator, offset) {
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



    // validate HitTestRegionList.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HitTestRegionList.transform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate HitTestRegionList.regions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(HitTestRegion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HitTestRegionList.encodedSize = codec.kStructHeaderSize + 32;

  HitTestRegionList.decode = function(decoder) {
    var packed;
    var val = new HitTestRegionList();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    val.transform = decoder.decodeStructPointer(transform$.Transform);
    val.regions = decoder.decodeArrayPointer(new codec.PointerTo(HitTestRegion));
    return val;
  };

  HitTestRegionList.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HitTestRegionList.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
    encoder.encodeStructPointer(transform$.Transform, val.transform);
    encoder.encodeArrayPointer(new codec.PointerTo(HitTestRegion), val.regions);
  };
  exports.HitTestRegion = HitTestRegion;
  exports.HitTestRegionList = HitTestRegionList;
})();