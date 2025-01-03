// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/begin_frame_args.mojom';
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


  var BeginFrameArgsType = {};
  BeginFrameArgsType.INVALID = 0;
  BeginFrameArgsType.NORMAL = BeginFrameArgsType.INVALID + 1;
  BeginFrameArgsType.MISSED = BeginFrameArgsType.NORMAL + 1;
  BeginFrameArgsType.BEGIN_FRAME_ARGS_TYPE_MAX = BeginFrameArgsType.MISSED + 1;

  BeginFrameArgsType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  BeginFrameArgsType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function BeginFrameArgs(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BeginFrameArgs.prototype.initDefaults_ = function() {
    this.frameTime = null;
    this.deadline = null;
    this.interval = null;
    this.sourceId = 0;
    this.sequenceNumber = 0;
    this.type = 0;
    this.onCriticalPath = false;
    this.animateOnly = false;
  };
  BeginFrameArgs.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BeginFrameArgs.generate = function(generator_) {
    var generated = new BeginFrameArgs;
    generated.frameTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.deadline = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.interval = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.sourceId = generator_.generateUint64();
    generated.sequenceNumber = generator_.generateUint64();
    generated.type = generator_.generateEnum(0, 3);
    generated.onCriticalPath = generator_.generateBool();
    generated.animateOnly = generator_.generateBool();
    return generated;
  };

  BeginFrameArgs.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deadline = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interval = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceId = mutator_.mutateUint64(this.sourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.sequenceNumber = mutator_.mutateUint64(this.sequenceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.onCriticalPath = mutator_.mutateBool(this.onCriticalPath);
    }
    if (mutator_.chooseMutateField()) {
      this.animateOnly = mutator_.mutateBool(this.animateOnly);
    }
    return this;
  };
  BeginFrameArgs.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BeginFrameArgs.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BeginFrameArgs.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BeginFrameArgs.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginFrameArgs.frameTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginFrameArgs.deadline
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BeginFrameArgs.interval
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate BeginFrameArgs.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 40, BeginFrameArgsType);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  BeginFrameArgs.encodedSize = codec.kStructHeaderSize + 48;

  BeginFrameArgs.decode = function(decoder) {
    var packed;
    var val = new BeginFrameArgs();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.deadline = decoder.decodeStructPointer(time$.TimeTicks);
    val.interval = decoder.decodeStructPointer(time$.TimeDelta);
    val.sourceId = decoder.decodeStruct(codec.Uint64);
    val.sequenceNumber = decoder.decodeStruct(codec.Uint64);
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.onCriticalPath = (packed >> 0) & 1 ? true : false;
    val.animateOnly = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BeginFrameArgs.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BeginFrameArgs.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.frameTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.deadline);
    encoder.encodeStructPointer(time$.TimeDelta, val.interval);
    encoder.encodeStruct(codec.Uint64, val.sourceId);
    encoder.encodeStruct(codec.Uint64, val.sequenceNumber);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.onCriticalPath & 1) << 0
    packed |= (val.animateOnly & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BeginFrameAck(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BeginFrameAck.prototype.initDefaults_ = function() {
    this.sourceId = 0;
    this.sequenceNumber = 0;
    this.hasDamage = false;
  };
  BeginFrameAck.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BeginFrameAck.generate = function(generator_) {
    var generated = new BeginFrameAck;
    generated.sourceId = generator_.generateUint64();
    generated.sequenceNumber = generator_.generateUint64();
    generated.hasDamage = generator_.generateBool();
    return generated;
  };

  BeginFrameAck.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceId = mutator_.mutateUint64(this.sourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.sequenceNumber = mutator_.mutateUint64(this.sequenceNumber);
    }
    if (mutator_.chooseMutateField()) {
      this.hasDamage = mutator_.mutateBool(this.hasDamage);
    }
    return this;
  };
  BeginFrameAck.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BeginFrameAck.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BeginFrameAck.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BeginFrameAck.validate = function(messageValidator, offset) {
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




    return validator.validationError.NONE;
  };

  BeginFrameAck.encodedSize = codec.kStructHeaderSize + 24;

  BeginFrameAck.decode = function(decoder) {
    var packed;
    var val = new BeginFrameAck();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Uint64);
    val.sequenceNumber = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.hasDamage = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BeginFrameAck.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BeginFrameAck.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sourceId);
    encoder.encodeStruct(codec.Uint64, val.sequenceNumber);
    packed = 0;
    packed |= (val.hasDamage & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.BeginFrameArgsType = BeginFrameArgsType;
  exports.BeginFrameArgs = BeginFrameArgs;
  exports.BeginFrameAck = BeginFrameAck;
})();