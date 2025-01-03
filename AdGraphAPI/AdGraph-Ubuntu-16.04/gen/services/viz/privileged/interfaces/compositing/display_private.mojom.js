// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/compositing/display_private.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var ca_layer_params$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/ca_layer_params.mojom', '../../../../../ui/gfx/mojo/ca_layer_params.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', '../../../../../ui/gfx/mojo/color_space.mojom.js');
  }
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../../../ui/gfx/mojo/transform.mojom.js');
  }
  var latency_info$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/latency/mojo/latency_info.mojom', '../../../../../ui/latency/mojo/latency_info.mojom.js');
  }
  var layered_window_updater$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/privileged/interfaces/compositing/layered_window_updater.mojom', 'layered_window_updater.mojom.js');
  }



  function DisplayPrivate_SetDisplayVisible_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayPrivate_SetDisplayVisible_Params.prototype.initDefaults_ = function() {
    this.visible = false;
  };
  DisplayPrivate_SetDisplayVisible_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayPrivate_SetDisplayVisible_Params.generate = function(generator_) {
    var generated = new DisplayPrivate_SetDisplayVisible_Params;
    generated.visible = generator_.generateBool();
    return generated;
  };

  DisplayPrivate_SetDisplayVisible_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  DisplayPrivate_SetDisplayVisible_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayPrivate_SetDisplayVisible_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayPrivate_SetDisplayVisible_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayPrivate_SetDisplayVisible_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DisplayPrivate_SetDisplayVisible_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayPrivate_SetDisplayVisible_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayPrivate_SetDisplayVisible_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DisplayPrivate_SetDisplayVisible_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayPrivate_SetDisplayVisible_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.visible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DisplayPrivate_SetDisplayColorMatrix_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayPrivate_SetDisplayColorMatrix_Params.prototype.initDefaults_ = function() {
    this.colorMatrix = null;
  };
  DisplayPrivate_SetDisplayColorMatrix_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayPrivate_SetDisplayColorMatrix_Params.generate = function(generator_) {
    var generated = new DisplayPrivate_SetDisplayColorMatrix_Params;
    generated.colorMatrix = generator_.generateStruct(gfx.mojom.Transform, false);
    return generated;
  };

  DisplayPrivate_SetDisplayColorMatrix_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.colorMatrix = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    return this;
  };
  DisplayPrivate_SetDisplayColorMatrix_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayPrivate_SetDisplayColorMatrix_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayPrivate_SetDisplayColorMatrix_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayPrivate_SetDisplayColorMatrix_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayPrivate_SetDisplayColorMatrix_Params.colorMatrix
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayPrivate_SetDisplayColorMatrix_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayPrivate_SetDisplayColorMatrix_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayPrivate_SetDisplayColorMatrix_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.colorMatrix = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  DisplayPrivate_SetDisplayColorMatrix_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayPrivate_SetDisplayColorMatrix_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(transform$.Transform, val.colorMatrix);
  };
  function DisplayPrivate_SetDisplayColorSpace_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayPrivate_SetDisplayColorSpace_Params.prototype.initDefaults_ = function() {
    this.blendingColorSpace = null;
    this.deviceColorSpace = null;
  };
  DisplayPrivate_SetDisplayColorSpace_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayPrivate_SetDisplayColorSpace_Params.generate = function(generator_) {
    var generated = new DisplayPrivate_SetDisplayColorSpace_Params;
    generated.blendingColorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    generated.deviceColorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    return generated;
  };

  DisplayPrivate_SetDisplayColorSpace_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blendingColorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceColorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    return this;
  };
  DisplayPrivate_SetDisplayColorSpace_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayPrivate_SetDisplayColorSpace_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayPrivate_SetDisplayColorSpace_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayPrivate_SetDisplayColorSpace_Params.validate = function(messageValidator, offset) {
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


    // validate DisplayPrivate_SetDisplayColorSpace_Params.blendingColorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayPrivate_SetDisplayColorSpace_Params.deviceColorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayPrivate_SetDisplayColorSpace_Params.encodedSize = codec.kStructHeaderSize + 16;

  DisplayPrivate_SetDisplayColorSpace_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayPrivate_SetDisplayColorSpace_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blendingColorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    val.deviceColorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    return val;
  };

  DisplayPrivate_SetDisplayColorSpace_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayPrivate_SetDisplayColorSpace_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.blendingColorSpace);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.deviceColorSpace);
  };
  function DisplayPrivate_SetOutputIsSecure_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayPrivate_SetOutputIsSecure_Params.prototype.initDefaults_ = function() {
    this.secure = false;
  };
  DisplayPrivate_SetOutputIsSecure_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayPrivate_SetOutputIsSecure_Params.generate = function(generator_) {
    var generated = new DisplayPrivate_SetOutputIsSecure_Params;
    generated.secure = generator_.generateBool();
    return generated;
  };

  DisplayPrivate_SetOutputIsSecure_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.secure = mutator_.mutateBool(this.secure);
    }
    return this;
  };
  DisplayPrivate_SetOutputIsSecure_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayPrivate_SetOutputIsSecure_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayPrivate_SetOutputIsSecure_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayPrivate_SetOutputIsSecure_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  DisplayPrivate_SetOutputIsSecure_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayPrivate_SetOutputIsSecure_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayPrivate_SetOutputIsSecure_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.secure = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DisplayPrivate_SetOutputIsSecure_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayPrivate_SetOutputIsSecure_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.secure & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DisplayPrivate_SetAuthoritativeVSyncInterval_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.prototype.initDefaults_ = function() {
    this.interval = null;
  };
  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.generate = function(generator_) {
    var generated = new DisplayPrivate_SetAuthoritativeVSyncInterval_Params;
    generated.interval = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interval = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayPrivate_SetAuthoritativeVSyncInterval_Params.interval
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayPrivate_SetAuthoritativeVSyncInterval_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interval = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  DisplayPrivate_SetAuthoritativeVSyncInterval_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayPrivate_SetAuthoritativeVSyncInterval_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.interval);
  };
  function DisplayPrivate_SetDisplayVSyncParameters_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayPrivate_SetDisplayVSyncParameters_Params.prototype.initDefaults_ = function() {
    this.timebase = null;
    this.interval = null;
  };
  DisplayPrivate_SetDisplayVSyncParameters_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayPrivate_SetDisplayVSyncParameters_Params.generate = function(generator_) {
    var generated = new DisplayPrivate_SetDisplayVSyncParameters_Params;
    generated.timebase = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.interval = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  DisplayPrivate_SetDisplayVSyncParameters_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.timebase = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interval = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  DisplayPrivate_SetDisplayVSyncParameters_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayPrivate_SetDisplayVSyncParameters_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayPrivate_SetDisplayVSyncParameters_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayPrivate_SetDisplayVSyncParameters_Params.validate = function(messageValidator, offset) {
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


    // validate DisplayPrivate_SetDisplayVSyncParameters_Params.timebase
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayPrivate_SetDisplayVSyncParameters_Params.interval
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayPrivate_SetDisplayVSyncParameters_Params.encodedSize = codec.kStructHeaderSize + 16;

  DisplayPrivate_SetDisplayVSyncParameters_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayPrivate_SetDisplayVSyncParameters_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.timebase = decoder.decodeStructPointer(time$.TimeTicks);
    val.interval = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  DisplayPrivate_SetDisplayVSyncParameters_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayPrivate_SetDisplayVSyncParameters_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.timebase);
    encoder.encodeStructPointer(time$.TimeDelta, val.interval);
  };
  function DisplayClient_OnDisplayReceivedCALayerParams_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayClient_OnDisplayReceivedCALayerParams_Params.prototype.initDefaults_ = function() {
    this.caLayerParams = null;
  };
  DisplayClient_OnDisplayReceivedCALayerParams_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayClient_OnDisplayReceivedCALayerParams_Params.generate = function(generator_) {
    var generated = new DisplayClient_OnDisplayReceivedCALayerParams_Params;
    generated.caLayerParams = generator_.generateStruct(gfx.mojom.CALayerParams, false);
    return generated;
  };

  DisplayClient_OnDisplayReceivedCALayerParams_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.caLayerParams = mutator_.mutateStruct(gfx.mojom.CALayerParams, false);
    }
    return this;
  };
  DisplayClient_OnDisplayReceivedCALayerParams_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.caLayerParams !== null) {
      Array.prototype.push.apply(handles, this.caLayerParams.getHandleDeps());
    }
    return handles;
  };

  DisplayClient_OnDisplayReceivedCALayerParams_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayClient_OnDisplayReceivedCALayerParams_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.caLayerParams.setHandlesInternal_(handles, idx);
    return idx;
  };

  DisplayClient_OnDisplayReceivedCALayerParams_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayClient_OnDisplayReceivedCALayerParams_Params.caLayerParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ca_layer_params$.CALayerParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayClient_OnDisplayReceivedCALayerParams_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayClient_OnDisplayReceivedCALayerParams_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayClient_OnDisplayReceivedCALayerParams_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.caLayerParams = decoder.decodeStructPointer(ca_layer_params$.CALayerParams);
    return val;
  };

  DisplayClient_OnDisplayReceivedCALayerParams_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayClient_OnDisplayReceivedCALayerParams_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ca_layer_params$.CALayerParams, val.caLayerParams);
  };
  function DisplayClient_DidSwapAfterSnapshotRequestReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.prototype.initDefaults_ = function() {
    this.latencyInfo = null;
  };
  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.generate = function(generator_) {
    var generated = new DisplayClient_DidSwapAfterSnapshotRequestReceived_Params;
    generated.latencyInfo = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.LatencyInfo, false);
    });
    return generated;
  };

  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.latencyInfo = mutator_.mutateArray(this.latencyInfo, function(val) {
        return mutator_.mutateStruct(ui.mojom.LatencyInfo, false);
      });
    }
    return this;
  };
  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.latencyInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(latency_info$.LatencyInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayClient_DidSwapAfterSnapshotRequestReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.latencyInfo = decoder.decodeArrayPointer(new codec.PointerTo(latency_info$.LatencyInfo));
    return val;
  };

  DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(latency_info$.LatencyInfo), val.latencyInfo);
  };
  function DisplayClient_CreateLayeredWindowUpdater_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayClient_CreateLayeredWindowUpdater_Params.prototype.initDefaults_ = function() {
    this.layeredWindowUpdater = new bindings.InterfaceRequest();
  };
  DisplayClient_CreateLayeredWindowUpdater_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DisplayClient_CreateLayeredWindowUpdater_Params.generate = function(generator_) {
    var generated = new DisplayClient_CreateLayeredWindowUpdater_Params;
    generated.layeredWindowUpdater = generator_.generateInterfaceRequest("viz.mojom.LayeredWindowUpdater", false);
    return generated;
  };

  DisplayClient_CreateLayeredWindowUpdater_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.layeredWindowUpdater = mutator_.mutateInterfaceRequest(this.layeredWindowUpdater, "viz.mojom.LayeredWindowUpdater", false);
    }
    return this;
  };
  DisplayClient_CreateLayeredWindowUpdater_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.layeredWindowUpdater !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.LayeredWindowUpdaterRequest"]);
    }
    return handles;
  };

  DisplayClient_CreateLayeredWindowUpdater_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DisplayClient_CreateLayeredWindowUpdater_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.layeredWindowUpdater = handles[idx++];;
    return idx;
  };

  DisplayClient_CreateLayeredWindowUpdater_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DisplayClient_CreateLayeredWindowUpdater_Params.layeredWindowUpdater
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayClient_CreateLayeredWindowUpdater_Params.encodedSize = codec.kStructHeaderSize + 8;

  DisplayClient_CreateLayeredWindowUpdater_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayClient_CreateLayeredWindowUpdater_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.layeredWindowUpdater = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DisplayClient_CreateLayeredWindowUpdater_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayClient_CreateLayeredWindowUpdater_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.layeredWindowUpdater);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDisplayPrivate_SetDisplayVisible_Name = 1024347767;
  var kDisplayPrivate_SetDisplayColorMatrix_Name = 184884121;
  var kDisplayPrivate_SetDisplayColorSpace_Name = 1387133283;
  var kDisplayPrivate_SetOutputIsSecure_Name = 1048001517;
  var kDisplayPrivate_SetAuthoritativeVSyncInterval_Name = 1934321452;
  var kDisplayPrivate_SetDisplayVSyncParameters_Name = 2066486583;

  function DisplayPrivatePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DisplayPrivate,
                                                   handleOrPtrInfo);
  }

  function DisplayPrivateAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DisplayPrivate, associatedInterfacePtrInfo);
  }

  DisplayPrivateAssociatedPtr.prototype =
      Object.create(DisplayPrivatePtr.prototype);
  DisplayPrivateAssociatedPtr.prototype.constructor =
      DisplayPrivateAssociatedPtr;

  function DisplayPrivateProxy(receiver) {
    this.receiver_ = receiver;
  }
  DisplayPrivatePtr.prototype.setDisplayVisible = function() {
    return DisplayPrivateProxy.prototype.setDisplayVisible
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayPrivateProxy.prototype.setDisplayVisible = function(visible) {
    var params_ = new DisplayPrivate_SetDisplayVisible_Params();
    params_.visible = visible;
    var builder = new codec.MessageV0Builder(
        kDisplayPrivate_SetDisplayVisible_Name,
        codec.align(DisplayPrivate_SetDisplayVisible_Params.encodedSize));
    builder.encodeStruct(DisplayPrivate_SetDisplayVisible_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayPrivatePtr.prototype.setDisplayColorMatrix = function() {
    return DisplayPrivateProxy.prototype.setDisplayColorMatrix
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayPrivateProxy.prototype.setDisplayColorMatrix = function(colorMatrix) {
    var params_ = new DisplayPrivate_SetDisplayColorMatrix_Params();
    params_.colorMatrix = colorMatrix;
    var builder = new codec.MessageV0Builder(
        kDisplayPrivate_SetDisplayColorMatrix_Name,
        codec.align(DisplayPrivate_SetDisplayColorMatrix_Params.encodedSize));
    builder.encodeStruct(DisplayPrivate_SetDisplayColorMatrix_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayPrivatePtr.prototype.setDisplayColorSpace = function() {
    return DisplayPrivateProxy.prototype.setDisplayColorSpace
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayPrivateProxy.prototype.setDisplayColorSpace = function(blendingColorSpace, deviceColorSpace) {
    var params_ = new DisplayPrivate_SetDisplayColorSpace_Params();
    params_.blendingColorSpace = blendingColorSpace;
    params_.deviceColorSpace = deviceColorSpace;
    var builder = new codec.MessageV0Builder(
        kDisplayPrivate_SetDisplayColorSpace_Name,
        codec.align(DisplayPrivate_SetDisplayColorSpace_Params.encodedSize));
    builder.encodeStruct(DisplayPrivate_SetDisplayColorSpace_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayPrivatePtr.prototype.setOutputIsSecure = function() {
    return DisplayPrivateProxy.prototype.setOutputIsSecure
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayPrivateProxy.prototype.setOutputIsSecure = function(secure) {
    var params_ = new DisplayPrivate_SetOutputIsSecure_Params();
    params_.secure = secure;
    var builder = new codec.MessageV0Builder(
        kDisplayPrivate_SetOutputIsSecure_Name,
        codec.align(DisplayPrivate_SetOutputIsSecure_Params.encodedSize));
    builder.encodeStruct(DisplayPrivate_SetOutputIsSecure_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayPrivatePtr.prototype.setAuthoritativeVSyncInterval = function() {
    return DisplayPrivateProxy.prototype.setAuthoritativeVSyncInterval
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayPrivateProxy.prototype.setAuthoritativeVSyncInterval = function(interval) {
    var params_ = new DisplayPrivate_SetAuthoritativeVSyncInterval_Params();
    params_.interval = interval;
    var builder = new codec.MessageV0Builder(
        kDisplayPrivate_SetAuthoritativeVSyncInterval_Name,
        codec.align(DisplayPrivate_SetAuthoritativeVSyncInterval_Params.encodedSize));
    builder.encodeStruct(DisplayPrivate_SetAuthoritativeVSyncInterval_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayPrivatePtr.prototype.setDisplayVSyncParameters = function() {
    return DisplayPrivateProxy.prototype.setDisplayVSyncParameters
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayPrivateProxy.prototype.setDisplayVSyncParameters = function(timebase, interval) {
    var params_ = new DisplayPrivate_SetDisplayVSyncParameters_Params();
    params_.timebase = timebase;
    params_.interval = interval;
    var builder = new codec.MessageV0Builder(
        kDisplayPrivate_SetDisplayVSyncParameters_Name,
        codec.align(DisplayPrivate_SetDisplayVSyncParameters_Params.encodedSize));
    builder.encodeStruct(DisplayPrivate_SetDisplayVSyncParameters_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DisplayPrivateStub(delegate) {
    this.delegate_ = delegate;
  }
  DisplayPrivateStub.prototype.setDisplayVisible = function(visible) {
    return this.delegate_ && this.delegate_.setDisplayVisible && this.delegate_.setDisplayVisible(visible);
  }
  DisplayPrivateStub.prototype.setDisplayColorMatrix = function(colorMatrix) {
    return this.delegate_ && this.delegate_.setDisplayColorMatrix && this.delegate_.setDisplayColorMatrix(colorMatrix);
  }
  DisplayPrivateStub.prototype.setDisplayColorSpace = function(blendingColorSpace, deviceColorSpace) {
    return this.delegate_ && this.delegate_.setDisplayColorSpace && this.delegate_.setDisplayColorSpace(blendingColorSpace, deviceColorSpace);
  }
  DisplayPrivateStub.prototype.setOutputIsSecure = function(secure) {
    return this.delegate_ && this.delegate_.setOutputIsSecure && this.delegate_.setOutputIsSecure(secure);
  }
  DisplayPrivateStub.prototype.setAuthoritativeVSyncInterval = function(interval) {
    return this.delegate_ && this.delegate_.setAuthoritativeVSyncInterval && this.delegate_.setAuthoritativeVSyncInterval(interval);
  }
  DisplayPrivateStub.prototype.setDisplayVSyncParameters = function(timebase, interval) {
    return this.delegate_ && this.delegate_.setDisplayVSyncParameters && this.delegate_.setDisplayVSyncParameters(timebase, interval);
  }

  DisplayPrivateStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayPrivate_SetDisplayVisible_Name:
      var params = reader.decodeStruct(DisplayPrivate_SetDisplayVisible_Params);
      this.setDisplayVisible(params.visible);
      return true;
    case kDisplayPrivate_SetDisplayColorMatrix_Name:
      var params = reader.decodeStruct(DisplayPrivate_SetDisplayColorMatrix_Params);
      this.setDisplayColorMatrix(params.colorMatrix);
      return true;
    case kDisplayPrivate_SetDisplayColorSpace_Name:
      var params = reader.decodeStruct(DisplayPrivate_SetDisplayColorSpace_Params);
      this.setDisplayColorSpace(params.blendingColorSpace, params.deviceColorSpace);
      return true;
    case kDisplayPrivate_SetOutputIsSecure_Name:
      var params = reader.decodeStruct(DisplayPrivate_SetOutputIsSecure_Params);
      this.setOutputIsSecure(params.secure);
      return true;
    case kDisplayPrivate_SetAuthoritativeVSyncInterval_Name:
      var params = reader.decodeStruct(DisplayPrivate_SetAuthoritativeVSyncInterval_Params);
      this.setAuthoritativeVSyncInterval(params.interval);
      return true;
    case kDisplayPrivate_SetDisplayVSyncParameters_Name:
      var params = reader.decodeStruct(DisplayPrivate_SetDisplayVSyncParameters_Params);
      this.setDisplayVSyncParameters(params.timebase, params.interval);
      return true;
    default:
      return false;
    }
  };

  DisplayPrivateStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDisplayPrivateRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplayPrivate_SetDisplayVisible_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayPrivate_SetDisplayVisible_Params;
      break;
      case kDisplayPrivate_SetDisplayColorMatrix_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayPrivate_SetDisplayColorMatrix_Params;
      break;
      case kDisplayPrivate_SetDisplayColorSpace_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayPrivate_SetDisplayColorSpace_Params;
      break;
      case kDisplayPrivate_SetOutputIsSecure_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayPrivate_SetOutputIsSecure_Params;
      break;
      case kDisplayPrivate_SetAuthoritativeVSyncInterval_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayPrivate_SetAuthoritativeVSyncInterval_Params;
      break;
      case kDisplayPrivate_SetDisplayVSyncParameters_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayPrivate_SetDisplayVSyncParameters_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayPrivateResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DisplayPrivate = {
    name: 'viz.mojom.DisplayPrivate',
    kVersion: 0,
    ptrClass: DisplayPrivatePtr,
    proxyClass: DisplayPrivateProxy,
    stubClass: DisplayPrivateStub,
    validateRequest: validateDisplayPrivateRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/display_private.mojom',
    fuzzMethods: {
      setDisplayVisible: {
        params: DisplayPrivate_SetDisplayVisible_Params,
      },
      setDisplayColorMatrix: {
        params: DisplayPrivate_SetDisplayColorMatrix_Params,
      },
      setDisplayColorSpace: {
        params: DisplayPrivate_SetDisplayColorSpace_Params,
      },
      setOutputIsSecure: {
        params: DisplayPrivate_SetOutputIsSecure_Params,
      },
      setAuthoritativeVSyncInterval: {
        params: DisplayPrivate_SetAuthoritativeVSyncInterval_Params,
      },
      setDisplayVSyncParameters: {
        params: DisplayPrivate_SetDisplayVSyncParameters_Params,
      },
    },
  };
  DisplayPrivateStub.prototype.validator = validateDisplayPrivateRequest;
  DisplayPrivateProxy.prototype.validator = null;
  var kDisplayClient_OnDisplayReceivedCALayerParams_Name = 1840974551;
  var kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name = 165752090;
  var kDisplayClient_CreateLayeredWindowUpdater_Name = 1768644852;

  function DisplayClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DisplayClient,
                                                   handleOrPtrInfo);
  }

  function DisplayClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DisplayClient, associatedInterfacePtrInfo);
  }

  DisplayClientAssociatedPtr.prototype =
      Object.create(DisplayClientPtr.prototype);
  DisplayClientAssociatedPtr.prototype.constructor =
      DisplayClientAssociatedPtr;

  function DisplayClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  DisplayClientPtr.prototype.onDisplayReceivedCALayerParams = function() {
    return DisplayClientProxy.prototype.onDisplayReceivedCALayerParams
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayClientProxy.prototype.onDisplayReceivedCALayerParams = function(caLayerParams) {
    var params_ = new DisplayClient_OnDisplayReceivedCALayerParams_Params();
    params_.caLayerParams = caLayerParams;
    var builder = new codec.MessageV0Builder(
        kDisplayClient_OnDisplayReceivedCALayerParams_Name,
        codec.align(DisplayClient_OnDisplayReceivedCALayerParams_Params.encodedSize));
    builder.encodeStruct(DisplayClient_OnDisplayReceivedCALayerParams_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayClientPtr.prototype.didSwapAfterSnapshotRequestReceived = function() {
    return DisplayClientProxy.prototype.didSwapAfterSnapshotRequestReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayClientProxy.prototype.didSwapAfterSnapshotRequestReceived = function(latencyInfo) {
    var params_ = new DisplayClient_DidSwapAfterSnapshotRequestReceived_Params();
    params_.latencyInfo = latencyInfo;
    var builder = new codec.MessageV0Builder(
        kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name,
        codec.align(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params.encodedSize));
    builder.encodeStruct(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DisplayClientPtr.prototype.createLayeredWindowUpdater = function() {
    return DisplayClientProxy.prototype.createLayeredWindowUpdater
        .apply(this.ptr.getProxy(), arguments);
  };

  DisplayClientProxy.prototype.createLayeredWindowUpdater = function(layeredWindowUpdater) {
    var params_ = new DisplayClient_CreateLayeredWindowUpdater_Params();
    params_.layeredWindowUpdater = layeredWindowUpdater;
    var builder = new codec.MessageV0Builder(
        kDisplayClient_CreateLayeredWindowUpdater_Name,
        codec.align(DisplayClient_CreateLayeredWindowUpdater_Params.encodedSize));
    builder.encodeStruct(DisplayClient_CreateLayeredWindowUpdater_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DisplayClientStub(delegate) {
    this.delegate_ = delegate;
  }
  DisplayClientStub.prototype.onDisplayReceivedCALayerParams = function(caLayerParams) {
    return this.delegate_ && this.delegate_.onDisplayReceivedCALayerParams && this.delegate_.onDisplayReceivedCALayerParams(caLayerParams);
  }
  DisplayClientStub.prototype.didSwapAfterSnapshotRequestReceived = function(latencyInfo) {
    return this.delegate_ && this.delegate_.didSwapAfterSnapshotRequestReceived && this.delegate_.didSwapAfterSnapshotRequestReceived(latencyInfo);
  }
  DisplayClientStub.prototype.createLayeredWindowUpdater = function(layeredWindowUpdater) {
    return this.delegate_ && this.delegate_.createLayeredWindowUpdater && this.delegate_.createLayeredWindowUpdater(layeredWindowUpdater);
  }

  DisplayClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayClient_OnDisplayReceivedCALayerParams_Name:
      var params = reader.decodeStruct(DisplayClient_OnDisplayReceivedCALayerParams_Params);
      this.onDisplayReceivedCALayerParams(params.caLayerParams);
      return true;
    case kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name:
      var params = reader.decodeStruct(DisplayClient_DidSwapAfterSnapshotRequestReceived_Params);
      this.didSwapAfterSnapshotRequestReceived(params.latencyInfo);
      return true;
    case kDisplayClient_CreateLayeredWindowUpdater_Name:
      var params = reader.decodeStruct(DisplayClient_CreateLayeredWindowUpdater_Params);
      this.createLayeredWindowUpdater(params.layeredWindowUpdater);
      return true;
    default:
      return false;
    }
  };

  DisplayClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDisplayClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplayClient_OnDisplayReceivedCALayerParams_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayClient_OnDisplayReceivedCALayerParams_Params;
      break;
      case kDisplayClient_DidSwapAfterSnapshotRequestReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayClient_DidSwapAfterSnapshotRequestReceived_Params;
      break;
      case kDisplayClient_CreateLayeredWindowUpdater_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayClient_CreateLayeredWindowUpdater_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DisplayClient = {
    name: 'viz.mojom.DisplayClient',
    kVersion: 0,
    ptrClass: DisplayClientPtr,
    proxyClass: DisplayClientProxy,
    stubClass: DisplayClientStub,
    validateRequest: validateDisplayClientRequest,
    validateResponse: null,
    mojomId: 'services/viz/privileged/interfaces/compositing/display_private.mojom',
    fuzzMethods: {
      onDisplayReceivedCALayerParams: {
        params: DisplayClient_OnDisplayReceivedCALayerParams_Params,
      },
      didSwapAfterSnapshotRequestReceived: {
        params: DisplayClient_DidSwapAfterSnapshotRequestReceived_Params,
      },
      createLayeredWindowUpdater: {
        params: DisplayClient_CreateLayeredWindowUpdater_Params,
      },
    },
  };
  DisplayClientStub.prototype.validator = validateDisplayClientRequest;
  DisplayClientProxy.prototype.validator = null;
  exports.DisplayPrivate = DisplayPrivate;
  exports.DisplayPrivatePtr = DisplayPrivatePtr;
  exports.DisplayPrivateAssociatedPtr = DisplayPrivateAssociatedPtr;
  exports.DisplayClient = DisplayClient;
  exports.DisplayClientPtr = DisplayClientPtr;
  exports.DisplayClientAssociatedPtr = DisplayClientAssociatedPtr;
})();