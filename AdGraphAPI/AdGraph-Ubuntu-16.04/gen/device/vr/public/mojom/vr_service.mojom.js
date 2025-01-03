// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'device/vr/public/mojom/vr_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var mailbox_holder$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox_holder.mojom', '../../../../gpu/ipc/common/mailbox_holder.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var display$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display.mojom', '../../../../ui/display/mojo/display.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var gpu_fence_handle$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/gpu_fence_handle.mojom', '../../../../ui/gfx/mojo/gpu_fence_handle.mojom.js');
  }
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../../ui/gfx/mojo/transform.mojom.js');
  }


  var XRHandedness = {};
  XRHandedness.NONE = 0;
  XRHandedness.LEFT = 1;
  XRHandedness.RIGHT = 2;

  XRHandedness.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  XRHandedness.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var XRPointerOrigin = {};
  XRPointerOrigin.HEAD = 1;
  XRPointerOrigin.HAND = 2;
  XRPointerOrigin.SCREEN = 3;

  XRPointerOrigin.isKnownEnumValue = function(value) {
    switch (value) {
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  XRPointerOrigin.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var VRDisplayFrameTransportMethod = {};
  VRDisplayFrameTransportMethod.NONE = 0;
  VRDisplayFrameTransportMethod.SUBMIT_AS_TEXTURE_HANDLE = 1;
  VRDisplayFrameTransportMethod.SUBMIT_AS_MAILBOX_HOLDER = 2;
  VRDisplayFrameTransportMethod.DRAW_INTO_TEXTURE_MAILBOX = 3;

  VRDisplayFrameTransportMethod.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  VRDisplayFrameTransportMethod.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var VRDisplayEventReason = {};
  VRDisplayEventReason.NONE = 0;
  VRDisplayEventReason.NAVIGATION = 1;
  VRDisplayEventReason.MOUNTED = 2;
  VRDisplayEventReason.UNMOUNTED = 3;

  VRDisplayEventReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  VRDisplayEventReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function XRInputSourceDescription(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  XRInputSourceDescription.prototype.initDefaults_ = function() {
    this.pointerOrigin = 0;
    this.handedness = 0;
    this.emulatedPosition = false;
    this.pointerOffset = null;
  };
  XRInputSourceDescription.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  XRInputSourceDescription.generate = function(generator_) {
    var generated = new XRInputSourceDescription;
    generated.pointerOrigin = generator_.generateEnum(0, 3);
    generated.handedness = generator_.generateEnum(0, 2);
    generated.emulatedPosition = generator_.generateBool();
    generated.pointerOffset = generator_.generateStruct(gfx.mojom.Transform, true);
    return generated;
  };

  XRInputSourceDescription.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pointerOrigin = mutator_.mutateEnum(this.pointerOrigin, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.handedness = mutator_.mutateEnum(this.handedness, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.emulatedPosition = mutator_.mutateBool(this.emulatedPosition);
    }
    if (mutator_.chooseMutateField()) {
      this.pointerOffset = mutator_.mutateStruct(gfx.mojom.Transform, true);
    }
    return this;
  };
  XRInputSourceDescription.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  XRInputSourceDescription.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  XRInputSourceDescription.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  XRInputSourceDescription.validate = function(messageValidator, offset) {
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


    // validate XRInputSourceDescription.pointerOrigin
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, XRPointerOrigin);
    if (err !== validator.validationError.NONE)
        return err;


    // validate XRInputSourceDescription.handedness
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, XRHandedness);
    if (err !== validator.validationError.NONE)
        return err;



    // validate XRInputSourceDescription.pointerOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  XRInputSourceDescription.encodedSize = codec.kStructHeaderSize + 24;

  XRInputSourceDescription.decode = function(decoder) {
    var packed;
    var val = new XRInputSourceDescription();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pointerOrigin = decoder.decodeStruct(codec.Int32);
    val.handedness = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.emulatedPosition = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.pointerOffset = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  XRInputSourceDescription.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(XRInputSourceDescription.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pointerOrigin);
    encoder.encodeStruct(codec.Int32, val.handedness);
    packed = 0;
    packed |= (val.emulatedPosition & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(transform$.Transform, val.pointerOffset);
  };
  function XRInputSourceState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  XRInputSourceState.prototype.initDefaults_ = function() {
    this.sourceId = 0;
    this.primaryInputPressed = false;
    this.primaryInputClicked = false;
    this.description = null;
    this.grip = null;
  };
  XRInputSourceState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  XRInputSourceState.generate = function(generator_) {
    var generated = new XRInputSourceState;
    generated.sourceId = generator_.generateUint32();
    generated.description = generator_.generateStruct(device.mojom.XRInputSourceDescription, true);
    generated.grip = generator_.generateStruct(gfx.mojom.Transform, true);
    generated.primaryInputPressed = generator_.generateBool();
    generated.primaryInputClicked = generator_.generateBool();
    return generated;
  };

  XRInputSourceState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceId = mutator_.mutateUint32(this.sourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateStruct(device.mojom.XRInputSourceDescription, true);
    }
    if (mutator_.chooseMutateField()) {
      this.grip = mutator_.mutateStruct(gfx.mojom.Transform, true);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryInputPressed = mutator_.mutateBool(this.primaryInputPressed);
    }
    if (mutator_.chooseMutateField()) {
      this.primaryInputClicked = mutator_.mutateBool(this.primaryInputClicked);
    }
    return this;
  };
  XRInputSourceState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  XRInputSourceState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  XRInputSourceState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  XRInputSourceState.validate = function(messageValidator, offset) {
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



    // validate XRInputSourceState.description
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, XRInputSourceDescription, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate XRInputSourceState.grip
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, true);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  XRInputSourceState.encodedSize = codec.kStructHeaderSize + 24;

  XRInputSourceState.decode = function(decoder) {
    var packed;
    var val = new XRInputSourceState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.primaryInputPressed = (packed >> 0) & 1 ? true : false;
    val.primaryInputClicked = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.description = decoder.decodeStructPointer(XRInputSourceDescription);
    val.grip = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  XRInputSourceState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(XRInputSourceState.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.sourceId);
    packed = 0;
    packed |= (val.primaryInputPressed & 1) << 0
    packed |= (val.primaryInputClicked & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(XRInputSourceDescription, val.description);
    encoder.encodeStructPointer(transform$.Transform, val.grip);
  };
  function VRFieldOfView(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRFieldOfView.prototype.initDefaults_ = function() {
    this.upDegrees = 0;
    this.downDegrees = 0;
    this.leftDegrees = 0;
    this.rightDegrees = 0;
  };
  VRFieldOfView.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRFieldOfView.generate = function(generator_) {
    var generated = new VRFieldOfView;
    generated.upDegrees = generator_.generateFloat();
    generated.downDegrees = generator_.generateFloat();
    generated.leftDegrees = generator_.generateFloat();
    generated.rightDegrees = generator_.generateFloat();
    return generated;
  };

  VRFieldOfView.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.upDegrees = mutator_.mutateFloat(this.upDegrees);
    }
    if (mutator_.chooseMutateField()) {
      this.downDegrees = mutator_.mutateFloat(this.downDegrees);
    }
    if (mutator_.chooseMutateField()) {
      this.leftDegrees = mutator_.mutateFloat(this.leftDegrees);
    }
    if (mutator_.chooseMutateField()) {
      this.rightDegrees = mutator_.mutateFloat(this.rightDegrees);
    }
    return this;
  };
  VRFieldOfView.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRFieldOfView.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRFieldOfView.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRFieldOfView.validate = function(messageValidator, offset) {
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

  VRFieldOfView.encodedSize = codec.kStructHeaderSize + 16;

  VRFieldOfView.decode = function(decoder) {
    var packed;
    var val = new VRFieldOfView();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.upDegrees = decoder.decodeStruct(codec.Float);
    val.downDegrees = decoder.decodeStruct(codec.Float);
    val.leftDegrees = decoder.decodeStruct(codec.Float);
    val.rightDegrees = decoder.decodeStruct(codec.Float);
    return val;
  };

  VRFieldOfView.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRFieldOfView.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.upDegrees);
    encoder.encodeStruct(codec.Float, val.downDegrees);
    encoder.encodeStruct(codec.Float, val.leftDegrees);
    encoder.encodeStruct(codec.Float, val.rightDegrees);
  };
  function VRPose(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPose.prototype.initDefaults_ = function() {
    this.orientation = null;
    this.position = null;
    this.angularVelocity = null;
    this.linearVelocity = null;
    this.angularAcceleration = null;
    this.linearAcceleration = null;
    this.inputState = null;
    this.poseReset = false;
  };
  VRPose.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPose.generate = function(generator_) {
    var generated = new VRPose;
    generated.orientation = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.position = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.angularVelocity = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.linearVelocity = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.angularAcceleration = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.linearAcceleration = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.inputState = generator_.generateArray(function() {
      return generator_.generateStruct(device.mojom.XRInputSourceState, false);
    });
    generated.poseReset = generator_.generateBool();
    return generated;
  };

  VRPose.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.orientation = mutator_.mutateArray(this.orientation, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.position = mutator_.mutateArray(this.position, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.angularVelocity = mutator_.mutateArray(this.angularVelocity, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.linearVelocity = mutator_.mutateArray(this.linearVelocity, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.angularAcceleration = mutator_.mutateArray(this.angularAcceleration, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.linearAcceleration = mutator_.mutateArray(this.linearAcceleration, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.inputState = mutator_.mutateArray(this.inputState, function(val) {
        return mutator_.mutateStruct(device.mojom.XRInputSourceState, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.poseReset = mutator_.mutateBool(this.poseReset);
    }
    return this;
  };
  VRPose.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPose.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPose.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPose.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.orientation
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Float, true, [4], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.position
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.angularVelocity
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.linearVelocity
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.angularAcceleration
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.linearAcceleration
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 4, codec.Float, true, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPose.inputState
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(XRInputSourceState), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VRPose.encodedSize = codec.kStructHeaderSize + 64;

  VRPose.decode = function(decoder) {
    var packed;
    var val = new VRPose();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.orientation = decoder.decodeArrayPointer(codec.Float);
    val.position = decoder.decodeArrayPointer(codec.Float);
    val.angularVelocity = decoder.decodeArrayPointer(codec.Float);
    val.linearVelocity = decoder.decodeArrayPointer(codec.Float);
    val.angularAcceleration = decoder.decodeArrayPointer(codec.Float);
    val.linearAcceleration = decoder.decodeArrayPointer(codec.Float);
    val.inputState = decoder.decodeArrayPointer(new codec.PointerTo(XRInputSourceState));
    packed = decoder.readUint8();
    val.poseReset = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRPose.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPose.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Float, val.orientation);
    encoder.encodeArrayPointer(codec.Float, val.position);
    encoder.encodeArrayPointer(codec.Float, val.angularVelocity);
    encoder.encodeArrayPointer(codec.Float, val.linearVelocity);
    encoder.encodeArrayPointer(codec.Float, val.angularAcceleration);
    encoder.encodeArrayPointer(codec.Float, val.linearAcceleration);
    encoder.encodeArrayPointer(new codec.PointerTo(XRInputSourceState), val.inputState);
    packed = 0;
    packed |= (val.poseReset & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRDisplayCapabilities(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayCapabilities.prototype.initDefaults_ = function() {
    this.hasPosition = false;
    this.hasExternalDisplay = false;
    this.canPresent = false;
    this.canProvidePassThroughImages = false;
  };
  VRDisplayCapabilities.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayCapabilities.generate = function(generator_) {
    var generated = new VRDisplayCapabilities;
    generated.hasPosition = generator_.generateBool();
    generated.hasExternalDisplay = generator_.generateBool();
    generated.canPresent = generator_.generateBool();
    generated.canProvidePassThroughImages = generator_.generateBool();
    return generated;
  };

  VRDisplayCapabilities.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hasPosition = mutator_.mutateBool(this.hasPosition);
    }
    if (mutator_.chooseMutateField()) {
      this.hasExternalDisplay = mutator_.mutateBool(this.hasExternalDisplay);
    }
    if (mutator_.chooseMutateField()) {
      this.canPresent = mutator_.mutateBool(this.canPresent);
    }
    if (mutator_.chooseMutateField()) {
      this.canProvidePassThroughImages = mutator_.mutateBool(this.canProvidePassThroughImages);
    }
    return this;
  };
  VRDisplayCapabilities.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayCapabilities.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayCapabilities.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayCapabilities.validate = function(messageValidator, offset) {
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

  VRDisplayCapabilities.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayCapabilities.decode = function(decoder) {
    var packed;
    var val = new VRDisplayCapabilities();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasPosition = (packed >> 0) & 1 ? true : false;
    val.hasExternalDisplay = (packed >> 1) & 1 ? true : false;
    val.canPresent = (packed >> 2) & 1 ? true : false;
    val.canProvidePassThroughImages = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayCapabilities.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayCapabilities.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasPosition & 1) << 0
    packed |= (val.hasExternalDisplay & 1) << 1
    packed |= (val.canPresent & 1) << 2
    packed |= (val.canProvidePassThroughImages & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VREyeParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VREyeParameters.prototype.initDefaults_ = function() {
    this.fieldOfView = null;
    this.offset = null;
    this.renderWidth = 0;
    this.renderHeight = 0;
  };
  VREyeParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VREyeParameters.generate = function(generator_) {
    var generated = new VREyeParameters;
    generated.fieldOfView = generator_.generateStruct(device.mojom.VRFieldOfView, false);
    generated.offset = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.renderWidth = generator_.generateUint32();
    generated.renderHeight = generator_.generateUint32();
    return generated;
  };

  VREyeParameters.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.fieldOfView = mutator_.mutateStruct(device.mojom.VRFieldOfView, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateArray(this.offset, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.renderWidth = mutator_.mutateUint32(this.renderWidth);
    }
    if (mutator_.chooseMutateField()) {
      this.renderHeight = mutator_.mutateUint32(this.renderHeight);
    }
    return this;
  };
  VREyeParameters.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VREyeParameters.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VREyeParameters.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VREyeParameters.validate = function(messageValidator, offset) {
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


    // validate VREyeParameters.fieldOfView
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRFieldOfView, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VREyeParameters.offset
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Float, false, [3], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VREyeParameters.encodedSize = codec.kStructHeaderSize + 24;

  VREyeParameters.decode = function(decoder) {
    var packed;
    var val = new VREyeParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fieldOfView = decoder.decodeStructPointer(VRFieldOfView);
    val.offset = decoder.decodeArrayPointer(codec.Float);
    val.renderWidth = decoder.decodeStruct(codec.Uint32);
    val.renderHeight = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  VREyeParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VREyeParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRFieldOfView, val.fieldOfView);
    encoder.encodeArrayPointer(codec.Float, val.offset);
    encoder.encodeStruct(codec.Uint32, val.renderWidth);
    encoder.encodeStruct(codec.Uint32, val.renderHeight);
  };
  function VRStageParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRStageParameters.prototype.initDefaults_ = function() {
    this.standingTransform = null;
    this.sizeX = 0;
    this.sizeZ = 0;
  };
  VRStageParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRStageParameters.generate = function(generator_) {
    var generated = new VRStageParameters;
    generated.standingTransform = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    generated.sizeX = generator_.generateFloat();
    generated.sizeZ = generator_.generateFloat();
    return generated;
  };

  VRStageParameters.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.standingTransform = mutator_.mutateArray(this.standingTransform, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.sizeX = mutator_.mutateFloat(this.sizeX);
    }
    if (mutator_.chooseMutateField()) {
      this.sizeZ = mutator_.mutateFloat(this.sizeZ);
    }
    return this;
  };
  VRStageParameters.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRStageParameters.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRStageParameters.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRStageParameters.validate = function(messageValidator, offset) {
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


    // validate VRStageParameters.standingTransform
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Float, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VRStageParameters.encodedSize = codec.kStructHeaderSize + 16;

  VRStageParameters.decode = function(decoder) {
    var packed;
    var val = new VRStageParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.standingTransform = decoder.decodeArrayPointer(codec.Float);
    val.sizeX = decoder.decodeStruct(codec.Float);
    val.sizeZ = decoder.decodeStruct(codec.Float);
    return val;
  };

  VRStageParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRStageParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Float, val.standingTransform);
    encoder.encodeStruct(codec.Float, val.sizeX);
    encoder.encodeStruct(codec.Float, val.sizeZ);
  };
  function VRDisplayInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayInfo.prototype.initDefaults_ = function() {
    this.index = 0;
    this.webvrDefaultFramebufferScale = 1.0;
    this.displayName = null;
    this.capabilities = null;
    this.stageParameters = null;
    this.leftEye = null;
    this.rightEye = null;
    this.webxrDefaultFramebufferScale = 1.0;
  };
  VRDisplayInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayInfo.generate = function(generator_) {
    var generated = new VRDisplayInfo;
    generated.index = generator_.generateUint32();
    generated.displayName = generator_.generateString(false);
    generated.capabilities = generator_.generateStruct(device.mojom.VRDisplayCapabilities, false);
    generated.stageParameters = generator_.generateStruct(device.mojom.VRStageParameters, true);
    generated.leftEye = generator_.generateStruct(device.mojom.VREyeParameters, true);
    generated.rightEye = generator_.generateStruct(device.mojom.VREyeParameters, true);
    generated.webvrDefaultFramebufferScale = generator_.generateFloat();
    generated.webxrDefaultFramebufferScale = generator_.generateFloat();
    return generated;
  };

  VRDisplayInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.index = mutator_.mutateUint32(this.index);
    }
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateString(this.displayName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.capabilities = mutator_.mutateStruct(device.mojom.VRDisplayCapabilities, false);
    }
    if (mutator_.chooseMutateField()) {
      this.stageParameters = mutator_.mutateStruct(device.mojom.VRStageParameters, true);
    }
    if (mutator_.chooseMutateField()) {
      this.leftEye = mutator_.mutateStruct(device.mojom.VREyeParameters, true);
    }
    if (mutator_.chooseMutateField()) {
      this.rightEye = mutator_.mutateStruct(device.mojom.VREyeParameters, true);
    }
    if (mutator_.chooseMutateField()) {
      this.webvrDefaultFramebufferScale = mutator_.mutateFloat(this.webvrDefaultFramebufferScale);
    }
    if (mutator_.chooseMutateField()) {
      this.webxrDefaultFramebufferScale = mutator_.mutateFloat(this.webxrDefaultFramebufferScale);
    }
    return this;
  };
  VRDisplayInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate VRDisplayInfo.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRDisplayInfo.capabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, VRDisplayCapabilities, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRDisplayInfo.stageParameters
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, VRStageParameters, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRDisplayInfo.leftEye
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, VREyeParameters, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRDisplayInfo.rightEye
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, VREyeParameters, true);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VRDisplayInfo.encodedSize = codec.kStructHeaderSize + 56;

  VRDisplayInfo.decode = function(decoder) {
    var packed;
    var val = new VRDisplayInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.index = decoder.decodeStruct(codec.Uint32);
    val.webvrDefaultFramebufferScale = decoder.decodeStruct(codec.Float);
    val.displayName = decoder.decodeStruct(codec.String);
    val.capabilities = decoder.decodeStructPointer(VRDisplayCapabilities);
    val.stageParameters = decoder.decodeStructPointer(VRStageParameters);
    val.leftEye = decoder.decodeStructPointer(VREyeParameters);
    val.rightEye = decoder.decodeStructPointer(VREyeParameters);
    val.webxrDefaultFramebufferScale = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.index);
    encoder.encodeStruct(codec.Float, val.webvrDefaultFramebufferScale);
    encoder.encodeStruct(codec.String, val.displayName);
    encoder.encodeStructPointer(VRDisplayCapabilities, val.capabilities);
    encoder.encodeStructPointer(VRStageParameters, val.stageParameters);
    encoder.encodeStructPointer(VREyeParameters, val.leftEye);
    encoder.encodeStructPointer(VREyeParameters, val.rightEye);
    encoder.encodeStruct(codec.Float, val.webxrDefaultFramebufferScale);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRRequestPresentOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRRequestPresentOptions.prototype.initDefaults_ = function() {
    this.preserveDrawingBuffer = false;
    this.webxrInput = false;
    this.sharedBufferDrawSupported = false;
  };
  VRRequestPresentOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRRequestPresentOptions.generate = function(generator_) {
    var generated = new VRRequestPresentOptions;
    generated.preserveDrawingBuffer = generator_.generateBool();
    generated.webxrInput = generator_.generateBool();
    generated.sharedBufferDrawSupported = generator_.generateBool();
    return generated;
  };

  VRRequestPresentOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.preserveDrawingBuffer = mutator_.mutateBool(this.preserveDrawingBuffer);
    }
    if (mutator_.chooseMutateField()) {
      this.webxrInput = mutator_.mutateBool(this.webxrInput);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedBufferDrawSupported = mutator_.mutateBool(this.sharedBufferDrawSupported);
    }
    return this;
  };
  VRRequestPresentOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRRequestPresentOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRRequestPresentOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRRequestPresentOptions.validate = function(messageValidator, offset) {
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

  VRRequestPresentOptions.encodedSize = codec.kStructHeaderSize + 8;

  VRRequestPresentOptions.decode = function(decoder) {
    var packed;
    var val = new VRRequestPresentOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.preserveDrawingBuffer = (packed >> 0) & 1 ? true : false;
    val.webxrInput = (packed >> 1) & 1 ? true : false;
    val.sharedBufferDrawSupported = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRRequestPresentOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRRequestPresentOptions.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.preserveDrawingBuffer & 1) << 0
    packed |= (val.webxrInput & 1) << 1
    packed |= (val.sharedBufferDrawSupported & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRDisplayFrameTransportOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayFrameTransportOptions.prototype.initDefaults_ = function() {
    this.transportMethod = 0;
    this.waitForTransferNotification = false;
    this.waitForRenderNotification = false;
    this.waitForGpuFence = false;
  };
  VRDisplayFrameTransportOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayFrameTransportOptions.generate = function(generator_) {
    var generated = new VRDisplayFrameTransportOptions;
    generated.transportMethod = generator_.generateEnum(0, 3);
    generated.waitForTransferNotification = generator_.generateBool();
    generated.waitForRenderNotification = generator_.generateBool();
    generated.waitForGpuFence = generator_.generateBool();
    return generated;
  };

  VRDisplayFrameTransportOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.transportMethod = mutator_.mutateEnum(this.transportMethod, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.waitForTransferNotification = mutator_.mutateBool(this.waitForTransferNotification);
    }
    if (mutator_.chooseMutateField()) {
      this.waitForRenderNotification = mutator_.mutateBool(this.waitForRenderNotification);
    }
    if (mutator_.chooseMutateField()) {
      this.waitForGpuFence = mutator_.mutateBool(this.waitForGpuFence);
    }
    return this;
  };
  VRDisplayFrameTransportOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayFrameTransportOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayFrameTransportOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayFrameTransportOptions.validate = function(messageValidator, offset) {
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


    // validate VRDisplayFrameTransportOptions.transportMethod
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VRDisplayFrameTransportMethod);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  VRDisplayFrameTransportOptions.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayFrameTransportOptions.decode = function(decoder) {
    var packed;
    var val = new VRDisplayFrameTransportOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.transportMethod = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.waitForTransferNotification = (packed >> 0) & 1 ? true : false;
    val.waitForRenderNotification = (packed >> 1) & 1 ? true : false;
    val.waitForGpuFence = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayFrameTransportOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayFrameTransportOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.transportMethod);
    packed = 0;
    packed |= (val.waitForTransferNotification & 1) << 0
    packed |= (val.waitForRenderNotification & 1) << 1
    packed |= (val.waitForGpuFence & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRMagicWindowFrameData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRMagicWindowFrameData.prototype.initDefaults_ = function() {
    this.pose = null;
    this.bufferHolder = null;
    this.bufferSize = null;
    this.timeDelta = null;
    this.projectionMatrix = null;
  };
  VRMagicWindowFrameData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRMagicWindowFrameData.generate = function(generator_) {
    var generated = new VRMagicWindowFrameData;
    generated.pose = generator_.generateStruct(device.mojom.VRPose, false);
    generated.bufferHolder = generator_.generateStruct(gpu.mojom.MailboxHolder, false);
    generated.bufferSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.timeDelta = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.projectionMatrix = generator_.generateArray(function() {
      return generator_.generateFloat();
    });
    return generated;
  };

  VRMagicWindowFrameData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pose = mutator_.mutateStruct(device.mojom.VRPose, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferHolder = mutator_.mutateStruct(gpu.mojom.MailboxHolder, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.timeDelta = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.projectionMatrix = mutator_.mutateArray(this.projectionMatrix, function(val) {
        return mutator_.mutateFloat(val);
      });
    }
    return this;
  };
  VRMagicWindowFrameData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRMagicWindowFrameData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRMagicWindowFrameData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRMagicWindowFrameData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRMagicWindowFrameData.pose
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRPose, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRMagicWindowFrameData.bufferHolder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, mailbox_holder$.MailboxHolder, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRMagicWindowFrameData.bufferSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRMagicWindowFrameData.timeDelta
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRMagicWindowFrameData.projectionMatrix
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 4, codec.Float, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRMagicWindowFrameData.encodedSize = codec.kStructHeaderSize + 40;

  VRMagicWindowFrameData.decode = function(decoder) {
    var packed;
    var val = new VRMagicWindowFrameData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pose = decoder.decodeStructPointer(VRPose);
    val.bufferHolder = decoder.decodeStructPointer(mailbox_holder$.MailboxHolder);
    val.bufferSize = decoder.decodeStructPointer(geometry$.Size);
    val.timeDelta = decoder.decodeStructPointer(time$.TimeDelta);
    val.projectionMatrix = decoder.decodeArrayPointer(codec.Float);
    return val;
  };

  VRMagicWindowFrameData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRMagicWindowFrameData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRPose, val.pose);
    encoder.encodeStructPointer(mailbox_holder$.MailboxHolder, val.bufferHolder);
    encoder.encodeStructPointer(geometry$.Size, val.bufferSize);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeDelta);
    encoder.encodeArrayPointer(codec.Float, val.projectionMatrix);
  };
  function VRService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = new VRServiceClientPtr();
  };
  VRService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRService_SetClient_Params.generate = function(generator_) {
    var generated = new VRService_SetClient_Params;
    generated.client = generator_.generateInterface("device.mojom.VRServiceClient", false);
    return generated;
  };

  VRService_SetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "device.mojom.VRServiceClient", false);
    }
    return this;
  };
  VRService_SetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.VRServiceClientPtr"]);
    }
    return handles;
  };

  VRService_SetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRService_SetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  VRService_SetClient_Params.validate = function(messageValidator, offset) {
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


    // validate VRService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(VRServiceClientPtr));
    return val;
  };

  VRService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(VRServiceClientPtr), val.client);
  };
  function VRService_SetClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_SetClient_ResponseParams.prototype.initDefaults_ = function() {
  };
  VRService_SetClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRService_SetClient_ResponseParams.generate = function(generator_) {
    var generated = new VRService_SetClient_ResponseParams;
    return generated;
  };

  VRService_SetClient_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VRService_SetClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRService_SetClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRService_SetClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRService_SetClient_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRService_SetClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VRService_SetClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRService_SetClient_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRService_SetClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_SetClient_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VRService_SetListeningForActivate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRService_SetListeningForActivate_Params.prototype.initDefaults_ = function() {
    this.listening = false;
  };
  VRService_SetListeningForActivate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRService_SetListeningForActivate_Params.generate = function(generator_) {
    var generated = new VRService_SetListeningForActivate_Params;
    generated.listening = generator_.generateBool();
    return generated;
  };

  VRService_SetListeningForActivate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.listening = mutator_.mutateBool(this.listening);
    }
    return this;
  };
  VRService_SetListeningForActivate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRService_SetListeningForActivate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRService_SetListeningForActivate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRService_SetListeningForActivate_Params.validate = function(messageValidator, offset) {
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

  VRService_SetListeningForActivate_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRService_SetListeningForActivate_Params.decode = function(decoder) {
    var packed;
    var val = new VRService_SetListeningForActivate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.listening = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRService_SetListeningForActivate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRService_SetListeningForActivate_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.listening & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRServiceClient_OnDisplayConnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRServiceClient_OnDisplayConnected_Params.prototype.initDefaults_ = function() {
    this.magicWindowProvider = new VRMagicWindowProviderPtr();
    this.display = new VRDisplayHostPtr();
    this.request = new bindings.InterfaceRequest();
    this.displayInfo = null;
  };
  VRServiceClient_OnDisplayConnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRServiceClient_OnDisplayConnected_Params.generate = function(generator_) {
    var generated = new VRServiceClient_OnDisplayConnected_Params;
    generated.magicWindowProvider = generator_.generateInterface("device.mojom.VRMagicWindowProvider", false);
    generated.display = generator_.generateInterface("device.mojom.VRDisplayHost", false);
    generated.request = generator_.generateInterfaceRequest("device.mojom.VRDisplayClient", false);
    generated.displayInfo = generator_.generateStruct(device.mojom.VRDisplayInfo, false);
    return generated;
  };

  VRServiceClient_OnDisplayConnected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.magicWindowProvider = mutator_.mutateInterface(this.magicWindowProvider, "device.mojom.VRMagicWindowProvider", false);
    }
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateInterface(this.display, "device.mojom.VRDisplayHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "device.mojom.VRDisplayClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayInfo = mutator_.mutateStruct(device.mojom.VRDisplayInfo, false);
    }
    return this;
  };
  VRServiceClient_OnDisplayConnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.magicWindowProvider !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.VRMagicWindowProviderPtr"]);
    }
    if (this.display !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.VRDisplayHostPtr"]);
    }
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.VRDisplayClientRequest"]);
    }
    return handles;
  };

  VRServiceClient_OnDisplayConnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRServiceClient_OnDisplayConnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.magicWindowProvider = handles[idx++];;
    this.display = handles[idx++];;
    this.request = handles[idx++];;
    return idx;
  };

  VRServiceClient_OnDisplayConnected_Params.validate = function(messageValidator, offset) {
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


    // validate VRServiceClient_OnDisplayConnected_Params.magicWindowProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRServiceClient_OnDisplayConnected_Params.display
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRServiceClient_OnDisplayConnected_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRServiceClient_OnDisplayConnected_Params.displayInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, VRDisplayInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRServiceClient_OnDisplayConnected_Params.encodedSize = codec.kStructHeaderSize + 32;

  VRServiceClient_OnDisplayConnected_Params.decode = function(decoder) {
    var packed;
    var val = new VRServiceClient_OnDisplayConnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.magicWindowProvider = decoder.decodeStruct(new codec.Interface(VRMagicWindowProviderPtr));
    val.display = decoder.decodeStruct(new codec.Interface(VRDisplayHostPtr));
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.displayInfo = decoder.decodeStructPointer(VRDisplayInfo);
    return val;
  };

  VRServiceClient_OnDisplayConnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRServiceClient_OnDisplayConnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(VRMagicWindowProviderPtr), val.magicWindowProvider);
    encoder.encodeStruct(new codec.Interface(VRDisplayHostPtr), val.display);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(VRDisplayInfo, val.displayInfo);
  };
  function VRSubmitFrameClient_OnSubmitFrameTransferred_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.prototype.initDefaults_ = function() {
    this.success = false;
  };
  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.generate = function(generator_) {
    var generated = new VRSubmitFrameClient_OnSubmitFrameTransferred_Params;
    generated.success = generator_.generateBool();
    return generated;
  };

  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.validate = function(messageValidator, offset) {
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

  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.decode = function(decoder) {
    var packed;
    var val = new VRSubmitFrameClient_OnSubmitFrameTransferred_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRSubmitFrameClient_OnSubmitFrameTransferred_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRSubmitFrameClient_OnSubmitFrameTransferred_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRSubmitFrameClient_OnSubmitFrameRendered_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRSubmitFrameClient_OnSubmitFrameRendered_Params.prototype.initDefaults_ = function() {
  };
  VRSubmitFrameClient_OnSubmitFrameRendered_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRSubmitFrameClient_OnSubmitFrameRendered_Params.generate = function(generator_) {
    var generated = new VRSubmitFrameClient_OnSubmitFrameRendered_Params;
    return generated;
  };

  VRSubmitFrameClient_OnSubmitFrameRendered_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRSubmitFrameClient_OnSubmitFrameRendered_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRSubmitFrameClient_OnSubmitFrameRendered_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRSubmitFrameClient_OnSubmitFrameRendered_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRSubmitFrameClient_OnSubmitFrameRendered_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRSubmitFrameClient_OnSubmitFrameRendered_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRSubmitFrameClient_OnSubmitFrameRendered_Params.decode = function(decoder) {
    var packed;
    var val = new VRSubmitFrameClient_OnSubmitFrameRendered_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRSubmitFrameClient_OnSubmitFrameRendered_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRSubmitFrameClient_OnSubmitFrameRendered_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRSubmitFrameClient_OnSubmitFrameGpuFence_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.prototype.initDefaults_ = function() {
    this.gpuFenceHandle = null;
  };
  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.generate = function(generator_) {
    var generated = new VRSubmitFrameClient_OnSubmitFrameGpuFence_Params;
    generated.gpuFenceHandle = generator_.generateStruct(gfx.mojom.GpuFenceHandle, false);
    return generated;
  };

  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gpuFenceHandle = mutator_.mutateStruct(gfx.mojom.GpuFenceHandle, false);
    }
    return this;
  };
  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.gpuFenceHandle !== null) {
      Array.prototype.push.apply(handles, this.gpuFenceHandle.getHandleDeps());
    }
    return handles;
  };

  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.gpuFenceHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.validate = function(messageValidator, offset) {
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


    // validate VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.gpuFenceHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, gpu_fence_handle$.GpuFenceHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.decode = function(decoder) {
    var packed;
    var val = new VRSubmitFrameClient_OnSubmitFrameGpuFence_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gpuFenceHandle = decoder.decodeStructPointer(gpu_fence_handle$.GpuFenceHandle);
    return val;
  };

  VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(gpu_fence_handle$.GpuFenceHandle, val.gpuFenceHandle);
  };
  function VRDisplayHost_RequestPresent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayHost_RequestPresent_Params.prototype.initDefaults_ = function() {
    this.client = new VRSubmitFrameClientPtr();
    this.request = new bindings.InterfaceRequest();
    this.triggeredByDisplayactive = false;
    this.options = null;
  };
  VRDisplayHost_RequestPresent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayHost_RequestPresent_Params.generate = function(generator_) {
    var generated = new VRDisplayHost_RequestPresent_Params;
    generated.client = generator_.generateInterface("device.mojom.VRSubmitFrameClient", false);
    generated.request = generator_.generateInterfaceRequest("device.mojom.VRPresentationProvider", false);
    generated.options = generator_.generateStruct(device.mojom.VRRequestPresentOptions, false);
    generated.triggeredByDisplayactive = generator_.generateBool();
    return generated;
  };

  VRDisplayHost_RequestPresent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "device.mojom.VRSubmitFrameClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "device.mojom.VRPresentationProvider", false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(device.mojom.VRRequestPresentOptions, false);
    }
    if (mutator_.chooseMutateField()) {
      this.triggeredByDisplayactive = mutator_.mutateBool(this.triggeredByDisplayactive);
    }
    return this;
  };
  VRDisplayHost_RequestPresent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.VRSubmitFrameClientPtr"]);
    }
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.VRPresentationProviderRequest"]);
    }
    return handles;
  };

  VRDisplayHost_RequestPresent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayHost_RequestPresent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    this.request = handles[idx++];;
    return idx;
  };

  VRDisplayHost_RequestPresent_Params.validate = function(messageValidator, offset) {
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


    // validate VRDisplayHost_RequestPresent_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRDisplayHost_RequestPresent_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRDisplayHost_RequestPresent_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, VRRequestPresentOptions, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  VRDisplayHost_RequestPresent_Params.encodedSize = codec.kStructHeaderSize + 24;

  VRDisplayHost_RequestPresent_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayHost_RequestPresent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(VRSubmitFrameClientPtr));
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    packed = decoder.readUint8();
    val.triggeredByDisplayactive = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.options = decoder.decodeStructPointer(VRRequestPresentOptions);
    return val;
  };

  VRDisplayHost_RequestPresent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayHost_RequestPresent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(VRSubmitFrameClientPtr), val.client);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    packed = 0;
    packed |= (val.triggeredByDisplayactive & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(VRRequestPresentOptions, val.options);
  };
  function VRDisplayHost_RequestPresent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayHost_RequestPresent_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.transportOptions = null;
  };
  VRDisplayHost_RequestPresent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayHost_RequestPresent_ResponseParams.generate = function(generator_) {
    var generated = new VRDisplayHost_RequestPresent_ResponseParams;
    generated.success = generator_.generateBool();
    generated.transportOptions = generator_.generateStruct(device.mojom.VRDisplayFrameTransportOptions, true);
    return generated;
  };

  VRDisplayHost_RequestPresent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.transportOptions = mutator_.mutateStruct(device.mojom.VRDisplayFrameTransportOptions, true);
    }
    return this;
  };
  VRDisplayHost_RequestPresent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayHost_RequestPresent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayHost_RequestPresent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayHost_RequestPresent_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate VRDisplayHost_RequestPresent_ResponseParams.transportOptions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, VRDisplayFrameTransportOptions, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayHost_RequestPresent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  VRDisplayHost_RequestPresent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRDisplayHost_RequestPresent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.transportOptions = decoder.decodeStructPointer(VRDisplayFrameTransportOptions);
    return val;
  };

  VRDisplayHost_RequestPresent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayHost_RequestPresent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(VRDisplayFrameTransportOptions, val.transportOptions);
  };
  function VRDisplayHost_ExitPresent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayHost_ExitPresent_Params.prototype.initDefaults_ = function() {
  };
  VRDisplayHost_ExitPresent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayHost_ExitPresent_Params.generate = function(generator_) {
    var generated = new VRDisplayHost_ExitPresent_Params;
    return generated;
  };

  VRDisplayHost_ExitPresent_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRDisplayHost_ExitPresent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayHost_ExitPresent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayHost_ExitPresent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayHost_ExitPresent_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayHost_ExitPresent_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRDisplayHost_ExitPresent_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayHost_ExitPresent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRDisplayHost_ExitPresent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayHost_ExitPresent_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRMagicWindowProvider_GetPose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRMagicWindowProvider_GetPose_Params.prototype.initDefaults_ = function() {
  };
  VRMagicWindowProvider_GetPose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRMagicWindowProvider_GetPose_Params.generate = function(generator_) {
    var generated = new VRMagicWindowProvider_GetPose_Params;
    return generated;
  };

  VRMagicWindowProvider_GetPose_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRMagicWindowProvider_GetPose_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRMagicWindowProvider_GetPose_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRMagicWindowProvider_GetPose_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRMagicWindowProvider_GetPose_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRMagicWindowProvider_GetPose_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRMagicWindowProvider_GetPose_Params.decode = function(decoder) {
    var packed;
    var val = new VRMagicWindowProvider_GetPose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRMagicWindowProvider_GetPose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRMagicWindowProvider_GetPose_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRMagicWindowProvider_GetPose_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRMagicWindowProvider_GetPose_ResponseParams.prototype.initDefaults_ = function() {
    this.pose = null;
  };
  VRMagicWindowProvider_GetPose_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRMagicWindowProvider_GetPose_ResponseParams.generate = function(generator_) {
    var generated = new VRMagicWindowProvider_GetPose_ResponseParams;
    generated.pose = generator_.generateStruct(device.mojom.VRPose, true);
    return generated;
  };

  VRMagicWindowProvider_GetPose_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pose = mutator_.mutateStruct(device.mojom.VRPose, true);
    }
    return this;
  };
  VRMagicWindowProvider_GetPose_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRMagicWindowProvider_GetPose_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRMagicWindowProvider_GetPose_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRMagicWindowProvider_GetPose_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VRMagicWindowProvider_GetPose_ResponseParams.pose
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRPose, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRMagicWindowProvider_GetPose_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRMagicWindowProvider_GetPose_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRMagicWindowProvider_GetPose_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pose = decoder.decodeStructPointer(VRPose);
    return val;
  };

  VRMagicWindowProvider_GetPose_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRMagicWindowProvider_GetPose_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRPose, val.pose);
  };
  function VRMagicWindowProvider_GetFrameData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRMagicWindowProvider_GetFrameData_Params.prototype.initDefaults_ = function() {
    this.frameSize = null;
    this.displayRotation = 0;
  };
  VRMagicWindowProvider_GetFrameData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRMagicWindowProvider_GetFrameData_Params.generate = function(generator_) {
    var generated = new VRMagicWindowProvider_GetFrameData_Params;
    generated.frameSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.displayRotation = generator_.generateEnum(0, 3);
    return generated;
  };

  VRMagicWindowProvider_GetFrameData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayRotation = mutator_.mutateEnum(this.displayRotation, 0, 3);
    }
    return this;
  };
  VRMagicWindowProvider_GetFrameData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRMagicWindowProvider_GetFrameData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRMagicWindowProvider_GetFrameData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRMagicWindowProvider_GetFrameData_Params.validate = function(messageValidator, offset) {
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


    // validate VRMagicWindowProvider_GetFrameData_Params.frameSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRMagicWindowProvider_GetFrameData_Params.displayRotation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, display$.Rotation);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRMagicWindowProvider_GetFrameData_Params.encodedSize = codec.kStructHeaderSize + 16;

  VRMagicWindowProvider_GetFrameData_Params.decode = function(decoder) {
    var packed;
    var val = new VRMagicWindowProvider_GetFrameData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSize = decoder.decodeStructPointer(geometry$.Size);
    val.displayRotation = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRMagicWindowProvider_GetFrameData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRMagicWindowProvider_GetFrameData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.frameSize);
    encoder.encodeStruct(codec.Int32, val.displayRotation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRMagicWindowProvider_GetFrameData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRMagicWindowProvider_GetFrameData_ResponseParams.prototype.initDefaults_ = function() {
    this.frameData = null;
  };
  VRMagicWindowProvider_GetFrameData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRMagicWindowProvider_GetFrameData_ResponseParams.generate = function(generator_) {
    var generated = new VRMagicWindowProvider_GetFrameData_ResponseParams;
    generated.frameData = generator_.generateStruct(device.mojom.VRMagicWindowFrameData, true);
    return generated;
  };

  VRMagicWindowProvider_GetFrameData_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameData = mutator_.mutateStruct(device.mojom.VRMagicWindowFrameData, true);
    }
    return this;
  };
  VRMagicWindowProvider_GetFrameData_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRMagicWindowProvider_GetFrameData_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRMagicWindowProvider_GetFrameData_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRMagicWindowProvider_GetFrameData_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VRMagicWindowProvider_GetFrameData_ResponseParams.frameData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRMagicWindowFrameData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRMagicWindowProvider_GetFrameData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRMagicWindowProvider_GetFrameData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRMagicWindowProvider_GetFrameData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameData = decoder.decodeStructPointer(VRMagicWindowFrameData);
    return val;
  };

  VRMagicWindowProvider_GetFrameData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRMagicWindowProvider_GetFrameData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRMagicWindowFrameData, val.frameData);
  };
  function VRPresentationProvider_GetVSync_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_GetVSync_Params.prototype.initDefaults_ = function() {
  };
  VRPresentationProvider_GetVSync_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_GetVSync_Params.generate = function(generator_) {
    var generated = new VRPresentationProvider_GetVSync_Params;
    return generated;
  };

  VRPresentationProvider_GetVSync_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRPresentationProvider_GetVSync_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPresentationProvider_GetVSync_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_GetVSync_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPresentationProvider_GetVSync_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_GetVSync_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRPresentationProvider_GetVSync_Params.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_GetVSync_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRPresentationProvider_GetVSync_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_GetVSync_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRPresentationProvider_GetVSync_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_GetVSync_ResponseParams.prototype.initDefaults_ = function() {
    this.pose = null;
    this.time = null;
    this.frameId = 0;
    this.status = 0;
    this.bufferHolder = null;
  };
  VRPresentationProvider_GetVSync_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_GetVSync_ResponseParams.generate = function(generator_) {
    var generated = new VRPresentationProvider_GetVSync_ResponseParams;
    generated.pose = generator_.generateStruct(device.mojom.VRPose, true);
    generated.time = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.frameId = generator_.generateInt16();
    generated.status = generator_.generateEnum(0, 1);
    generated.bufferHolder = generator_.generateStruct(gpu.mojom.MailboxHolder, true);
    return generated;
  };

  VRPresentationProvider_GetVSync_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pose = mutator_.mutateStruct(device.mojom.VRPose, true);
    }
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameId = mutator_.mutateInt16(this.frameId);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferHolder = mutator_.mutateStruct(gpu.mojom.MailboxHolder, true);
    }
    return this;
  };
  VRPresentationProvider_GetVSync_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPresentationProvider_GetVSync_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_GetVSync_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPresentationProvider_GetVSync_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VRPresentationProvider_GetVSync_ResponseParams.pose
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRPose, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPresentationProvider_GetVSync_ResponseParams.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate VRPresentationProvider_GetVSync_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, VRPresentationProvider.VSyncStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPresentationProvider_GetVSync_ResponseParams.bufferHolder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, mailbox_holder$.MailboxHolder, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_GetVSync_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  VRPresentationProvider_GetVSync_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_GetVSync_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pose = decoder.decodeStructPointer(VRPose);
    val.time = decoder.decodeStructPointer(time$.TimeDelta);
    val.frameId = decoder.decodeStruct(codec.Int16);
    decoder.skip(1);
    decoder.skip(1);
    val.status = decoder.decodeStruct(codec.Int32);
    val.bufferHolder = decoder.decodeStructPointer(mailbox_holder$.MailboxHolder);
    return val;
  };

  VRPresentationProvider_GetVSync_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_GetVSync_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRPose, val.pose);
    encoder.encodeStructPointer(time$.TimeDelta, val.time);
    encoder.encodeStruct(codec.Int16, val.frameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeStructPointer(mailbox_holder$.MailboxHolder, val.bufferHolder);
  };
  function VRPresentationProvider_UpdateLayerBounds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_UpdateLayerBounds_Params.prototype.initDefaults_ = function() {
    this.frameId = 0;
    this.leftBounds = null;
    this.rightBounds = null;
    this.sourceSize = null;
  };
  VRPresentationProvider_UpdateLayerBounds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_UpdateLayerBounds_Params.generate = function(generator_) {
    var generated = new VRPresentationProvider_UpdateLayerBounds_Params;
    generated.frameId = generator_.generateInt16();
    generated.leftBounds = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.rightBounds = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.sourceSize = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  VRPresentationProvider_UpdateLayerBounds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameId = mutator_.mutateInt16(this.frameId);
    }
    if (mutator_.chooseMutateField()) {
      this.leftBounds = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rightBounds = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  VRPresentationProvider_UpdateLayerBounds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPresentationProvider_UpdateLayerBounds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_UpdateLayerBounds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPresentationProvider_UpdateLayerBounds_Params.validate = function(messageValidator, offset) {
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



    // validate VRPresentationProvider_UpdateLayerBounds_Params.leftBounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPresentationProvider_UpdateLayerBounds_Params.rightBounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPresentationProvider_UpdateLayerBounds_Params.sourceSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_UpdateLayerBounds_Params.encodedSize = codec.kStructHeaderSize + 32;

  VRPresentationProvider_UpdateLayerBounds_Params.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_UpdateLayerBounds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameId = decoder.decodeStruct(codec.Int16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.leftBounds = decoder.decodeStructPointer(geometry$.RectF);
    val.rightBounds = decoder.decodeStructPointer(geometry$.RectF);
    val.sourceSize = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  VRPresentationProvider_UpdateLayerBounds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_UpdateLayerBounds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int16, val.frameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.RectF, val.leftBounds);
    encoder.encodeStructPointer(geometry$.RectF, val.rightBounds);
    encoder.encodeStructPointer(geometry$.Size, val.sourceSize);
  };
  function VRPresentationProvider_SubmitFrameMissing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_SubmitFrameMissing_Params.prototype.initDefaults_ = function() {
    this.frameId = 0;
    this.syncToken = null;
  };
  VRPresentationProvider_SubmitFrameMissing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_SubmitFrameMissing_Params.generate = function(generator_) {
    var generated = new VRPresentationProvider_SubmitFrameMissing_Params;
    generated.frameId = generator_.generateInt16();
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    return generated;
  };

  VRPresentationProvider_SubmitFrameMissing_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameId = mutator_.mutateInt16(this.frameId);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    return this;
  };
  VRPresentationProvider_SubmitFrameMissing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPresentationProvider_SubmitFrameMissing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_SubmitFrameMissing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPresentationProvider_SubmitFrameMissing_Params.validate = function(messageValidator, offset) {
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



    // validate VRPresentationProvider_SubmitFrameMissing_Params.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_SubmitFrameMissing_Params.encodedSize = codec.kStructHeaderSize + 16;

  VRPresentationProvider_SubmitFrameMissing_Params.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_SubmitFrameMissing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameId = decoder.decodeStruct(codec.Int16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    return val;
  };

  VRPresentationProvider_SubmitFrameMissing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_SubmitFrameMissing_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int16, val.frameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
  };
  function VRPresentationProvider_SubmitFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_SubmitFrame_Params.prototype.initDefaults_ = function() {
    this.frameId = 0;
    this.mailboxHolder = null;
    this.timeWaited = null;
  };
  VRPresentationProvider_SubmitFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_SubmitFrame_Params.generate = function(generator_) {
    var generated = new VRPresentationProvider_SubmitFrame_Params;
    generated.frameId = generator_.generateInt16();
    generated.mailboxHolder = generator_.generateStruct(gpu.mojom.MailboxHolder, false);
    generated.timeWaited = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  VRPresentationProvider_SubmitFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameId = mutator_.mutateInt16(this.frameId);
    }
    if (mutator_.chooseMutateField()) {
      this.mailboxHolder = mutator_.mutateStruct(gpu.mojom.MailboxHolder, false);
    }
    if (mutator_.chooseMutateField()) {
      this.timeWaited = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  VRPresentationProvider_SubmitFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPresentationProvider_SubmitFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_SubmitFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPresentationProvider_SubmitFrame_Params.validate = function(messageValidator, offset) {
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



    // validate VRPresentationProvider_SubmitFrame_Params.mailboxHolder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, mailbox_holder$.MailboxHolder, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPresentationProvider_SubmitFrame_Params.timeWaited
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_SubmitFrame_Params.encodedSize = codec.kStructHeaderSize + 24;

  VRPresentationProvider_SubmitFrame_Params.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_SubmitFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameId = decoder.decodeStruct(codec.Int16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mailboxHolder = decoder.decodeStructPointer(mailbox_holder$.MailboxHolder);
    val.timeWaited = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  VRPresentationProvider_SubmitFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_SubmitFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int16, val.frameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(mailbox_holder$.MailboxHolder, val.mailboxHolder);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeWaited);
  };
  function VRPresentationProvider_SubmitFrameWithTextureHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.prototype.initDefaults_ = function() {
    this.frameId = 0;
    this.texture = null;
  };
  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.generate = function(generator_) {
    var generated = new VRPresentationProvider_SubmitFrameWithTextureHandle_Params;
    generated.frameId = generator_.generateInt16();
    generated.texture = generator_.generateHandle(false);
    return generated;
  };

  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameId = mutator_.mutateInt16(this.frameId);
    }
    if (mutator_.chooseMutateField()) {
      this.texture = mutator_.mutateHandle(this.texture, false);
    }
    return this;
  };
  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.texture !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.texture = handles[idx++];;
    return idx;
  };

  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.validate = function(messageValidator, offset) {
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



    // validate VRPresentationProvider_SubmitFrameWithTextureHandle_Params.texture
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_SubmitFrameWithTextureHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameId = decoder.decodeStruct(codec.Int16);
    decoder.skip(1);
    decoder.skip(1);
    val.texture = decoder.decodeStruct(codec.Handle);
    return val;
  };

  VRPresentationProvider_SubmitFrameWithTextureHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_SubmitFrameWithTextureHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int16, val.frameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Handle, val.texture);
  };
  function VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.prototype.initDefaults_ = function() {
    this.frameId = 0;
    this.syncToken = null;
    this.timeWaited = null;
  };
  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.generate = function(generator_) {
    var generated = new VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params;
    generated.frameId = generator_.generateInt16();
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    generated.timeWaited = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameId = mutator_.mutateInt16(this.frameId);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.timeWaited = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.validate = function(messageValidator, offset) {
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



    // validate VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.timeWaited
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.encodedSize = codec.kStructHeaderSize + 24;

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.decode = function(decoder) {
    var packed;
    var val = new VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameId = decoder.decodeStruct(codec.Int16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    val.timeWaited = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int16, val.frameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
    encoder.encodeStructPointer(time$.TimeDelta, val.timeWaited);
  };
  function VRDisplayClient_OnChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnChanged_Params.prototype.initDefaults_ = function() {
    this.display = null;
  };
  VRDisplayClient_OnChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnChanged_Params.generate = function(generator_) {
    var generated = new VRDisplayClient_OnChanged_Params;
    generated.display = generator_.generateStruct(device.mojom.VRDisplayInfo, false);
    return generated;
  };

  VRDisplayClient_OnChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateStruct(device.mojom.VRDisplayInfo, false);
    }
    return this;
  };
  VRDisplayClient_OnChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnChanged_Params.validate = function(messageValidator, offset) {
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


    // validate VRDisplayClient_OnChanged_Params.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VRDisplayInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayClient_OnChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayClient_OnChanged_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(VRDisplayInfo);
    return val;
  };

  VRDisplayClient_OnChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VRDisplayInfo, val.display);
  };
  function VRDisplayClient_OnExitPresent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnExitPresent_Params.prototype.initDefaults_ = function() {
  };
  VRDisplayClient_OnExitPresent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnExitPresent_Params.generate = function(generator_) {
    var generated = new VRDisplayClient_OnExitPresent_Params;
    return generated;
  };

  VRDisplayClient_OnExitPresent_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRDisplayClient_OnExitPresent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnExitPresent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnExitPresent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnExitPresent_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayClient_OnExitPresent_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRDisplayClient_OnExitPresent_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnExitPresent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRDisplayClient_OnExitPresent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnExitPresent_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRDisplayClient_OnBlur_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnBlur_Params.prototype.initDefaults_ = function() {
  };
  VRDisplayClient_OnBlur_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnBlur_Params.generate = function(generator_) {
    var generated = new VRDisplayClient_OnBlur_Params;
    return generated;
  };

  VRDisplayClient_OnBlur_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRDisplayClient_OnBlur_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnBlur_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnBlur_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnBlur_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayClient_OnBlur_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRDisplayClient_OnBlur_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnBlur_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRDisplayClient_OnBlur_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnBlur_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRDisplayClient_OnFocus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnFocus_Params.prototype.initDefaults_ = function() {
  };
  VRDisplayClient_OnFocus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnFocus_Params.generate = function(generator_) {
    var generated = new VRDisplayClient_OnFocus_Params;
    return generated;
  };

  VRDisplayClient_OnFocus_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VRDisplayClient_OnFocus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnFocus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnFocus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnFocus_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayClient_OnFocus_Params.encodedSize = codec.kStructHeaderSize + 0;

  VRDisplayClient_OnFocus_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnFocus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VRDisplayClient_OnFocus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnFocus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VRDisplayClient_OnActivate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnActivate_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  VRDisplayClient_OnActivate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnActivate_Params.generate = function(generator_) {
    var generated = new VRDisplayClient_OnActivate_Params;
    generated.reason = generator_.generateEnum(0, 3);
    return generated;
  };

  VRDisplayClient_OnActivate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 3);
    }
    return this;
  };
  VRDisplayClient_OnActivate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnActivate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnActivate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnActivate_Params.validate = function(messageValidator, offset) {
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


    // validate VRDisplayClient_OnActivate_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VRDisplayEventReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayClient_OnActivate_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayClient_OnActivate_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnActivate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayClient_OnActivate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnActivate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRDisplayClient_OnActivate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnActivate_ResponseParams.prototype.initDefaults_ = function() {
    this.willNotPresent = false;
  };
  VRDisplayClient_OnActivate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnActivate_ResponseParams.generate = function(generator_) {
    var generated = new VRDisplayClient_OnActivate_ResponseParams;
    generated.willNotPresent = generator_.generateBool();
    return generated;
  };

  VRDisplayClient_OnActivate_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.willNotPresent = mutator_.mutateBool(this.willNotPresent);
    }
    return this;
  };
  VRDisplayClient_OnActivate_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnActivate_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnActivate_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnActivate_ResponseParams.validate = function(messageValidator, offset) {
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

  VRDisplayClient_OnActivate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayClient_OnActivate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnActivate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.willNotPresent = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayClient_OnActivate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnActivate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.willNotPresent & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VRDisplayClient_OnDeactivate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VRDisplayClient_OnDeactivate_Params.prototype.initDefaults_ = function() {
    this.reason = 0;
  };
  VRDisplayClient_OnDeactivate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VRDisplayClient_OnDeactivate_Params.generate = function(generator_) {
    var generated = new VRDisplayClient_OnDeactivate_Params;
    generated.reason = generator_.generateEnum(0, 3);
    return generated;
  };

  VRDisplayClient_OnDeactivate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 3);
    }
    return this;
  };
  VRDisplayClient_OnDeactivate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VRDisplayClient_OnDeactivate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VRDisplayClient_OnDeactivate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VRDisplayClient_OnDeactivate_Params.validate = function(messageValidator, offset) {
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


    // validate VRDisplayClient_OnDeactivate_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, VRDisplayEventReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VRDisplayClient_OnDeactivate_Params.encodedSize = codec.kStructHeaderSize + 8;

  VRDisplayClient_OnDeactivate_Params.decode = function(decoder) {
    var packed;
    var val = new VRDisplayClient_OnDeactivate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VRDisplayClient_OnDeactivate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VRDisplayClient_OnDeactivate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kVRService_SetClient_Name = 520697140;
  var kVRService_SetListeningForActivate_Name = 685172606;

  function VRServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRService,
                                                   handleOrPtrInfo);
  }

  function VRServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRService, associatedInterfacePtrInfo);
  }

  VRServiceAssociatedPtr.prototype =
      Object.create(VRServicePtr.prototype);
  VRServiceAssociatedPtr.prototype.constructor =
      VRServiceAssociatedPtr;

  function VRServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRServicePtr.prototype.setClient = function() {
    return VRServiceProxy.prototype.setClient
        .apply(this.ptr.getProxy(), arguments);
  };

  VRServiceProxy.prototype.setClient = function(client) {
    var params_ = new VRService_SetClient_Params();
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVRService_SetClient_Name,
          codec.align(VRService_SetClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRService_SetClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRService_SetClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRServicePtr.prototype.setListeningForActivate = function() {
    return VRServiceProxy.prototype.setListeningForActivate
        .apply(this.ptr.getProxy(), arguments);
  };

  VRServiceProxy.prototype.setListeningForActivate = function(listening) {
    var params_ = new VRService_SetListeningForActivate_Params();
    params_.listening = listening;
    var builder = new codec.MessageV0Builder(
        kVRService_SetListeningForActivate_Name,
        codec.align(VRService_SetListeningForActivate_Params.encodedSize));
    builder.encodeStruct(VRService_SetListeningForActivate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  VRServiceStub.prototype.setClient = function(client) {
    return this.delegate_ && this.delegate_.setClient && this.delegate_.setClient(client);
  }
  VRServiceStub.prototype.setListeningForActivate = function(listening) {
    return this.delegate_ && this.delegate_.setListeningForActivate && this.delegate_.setListeningForActivate(listening);
  }

  VRServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRService_SetListeningForActivate_Name:
      var params = reader.decodeStruct(VRService_SetListeningForActivate_Params);
      this.setListeningForActivate(params.listening);
      return true;
    default:
      return false;
    }
  };

  VRServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRService_SetClient_Name:
      var params = reader.decodeStruct(VRService_SetClient_Params);
      this.setClient(params.client).then(function(response) {
        var responseParams =
            new VRService_SetClient_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVRService_SetClient_Name,
            codec.align(VRService_SetClient_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRService_SetClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVRServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRService_SetClient_Name:
        if (message.expectsResponse())
          paramsClass = VRService_SetClient_Params;
      break;
      case kVRService_SetListeningForActivate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRService_SetListeningForActivate_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRService_SetClient_Name:
        if (message.isResponse())
          paramsClass = VRService_SetClient_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRService = {
    name: 'device.mojom.VRService',
    kVersion: 0,
    ptrClass: VRServicePtr,
    proxyClass: VRServiceProxy,
    stubClass: VRServiceStub,
    validateRequest: validateVRServiceRequest,
    validateResponse: validateVRServiceResponse,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      setClient: {
        params: VRService_SetClient_Params,
      },
      setListeningForActivate: {
        params: VRService_SetListeningForActivate_Params,
      },
    },
  };
  VRServiceStub.prototype.validator = validateVRServiceRequest;
  VRServiceProxy.prototype.validator = validateVRServiceResponse;
  var kVRServiceClient_OnDisplayConnected_Name = 854239978;

  function VRServiceClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRServiceClient,
                                                   handleOrPtrInfo);
  }

  function VRServiceClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRServiceClient, associatedInterfacePtrInfo);
  }

  VRServiceClientAssociatedPtr.prototype =
      Object.create(VRServiceClientPtr.prototype);
  VRServiceClientAssociatedPtr.prototype.constructor =
      VRServiceClientAssociatedPtr;

  function VRServiceClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRServiceClientPtr.prototype.onDisplayConnected = function() {
    return VRServiceClientProxy.prototype.onDisplayConnected
        .apply(this.ptr.getProxy(), arguments);
  };

  VRServiceClientProxy.prototype.onDisplayConnected = function(magicWindowProvider, display, request, displayInfo) {
    var params_ = new VRServiceClient_OnDisplayConnected_Params();
    params_.magicWindowProvider = magicWindowProvider;
    params_.display = display;
    params_.request = request;
    params_.displayInfo = displayInfo;
    var builder = new codec.MessageV0Builder(
        kVRServiceClient_OnDisplayConnected_Name,
        codec.align(VRServiceClient_OnDisplayConnected_Params.encodedSize));
    builder.encodeStruct(VRServiceClient_OnDisplayConnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRServiceClientStub(delegate) {
    this.delegate_ = delegate;
  }
  VRServiceClientStub.prototype.onDisplayConnected = function(magicWindowProvider, display, request, displayInfo) {
    return this.delegate_ && this.delegate_.onDisplayConnected && this.delegate_.onDisplayConnected(magicWindowProvider, display, request, displayInfo);
  }

  VRServiceClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRServiceClient_OnDisplayConnected_Name:
      var params = reader.decodeStruct(VRServiceClient_OnDisplayConnected_Params);
      this.onDisplayConnected(params.magicWindowProvider, params.display, params.request, params.displayInfo);
      return true;
    default:
      return false;
    }
  };

  VRServiceClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVRServiceClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRServiceClient_OnDisplayConnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRServiceClient_OnDisplayConnected_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRServiceClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VRServiceClient = {
    name: 'device.mojom.VRServiceClient',
    kVersion: 0,
    ptrClass: VRServiceClientPtr,
    proxyClass: VRServiceClientProxy,
    stubClass: VRServiceClientStub,
    validateRequest: validateVRServiceClientRequest,
    validateResponse: null,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      onDisplayConnected: {
        params: VRServiceClient_OnDisplayConnected_Params,
      },
    },
  };
  VRServiceClientStub.prototype.validator = validateVRServiceClientRequest;
  VRServiceClientProxy.prototype.validator = null;
  var kVRSubmitFrameClient_OnSubmitFrameTransferred_Name = 69231622;
  var kVRSubmitFrameClient_OnSubmitFrameRendered_Name = 834982627;
  var kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name = 190212336;

  function VRSubmitFrameClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRSubmitFrameClient,
                                                   handleOrPtrInfo);
  }

  function VRSubmitFrameClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRSubmitFrameClient, associatedInterfacePtrInfo);
  }

  VRSubmitFrameClientAssociatedPtr.prototype =
      Object.create(VRSubmitFrameClientPtr.prototype);
  VRSubmitFrameClientAssociatedPtr.prototype.constructor =
      VRSubmitFrameClientAssociatedPtr;

  function VRSubmitFrameClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRSubmitFrameClientPtr.prototype.onSubmitFrameTransferred = function() {
    return VRSubmitFrameClientProxy.prototype.onSubmitFrameTransferred
        .apply(this.ptr.getProxy(), arguments);
  };

  VRSubmitFrameClientProxy.prototype.onSubmitFrameTransferred = function(success) {
    var params_ = new VRSubmitFrameClient_OnSubmitFrameTransferred_Params();
    params_.success = success;
    var builder = new codec.MessageV0Builder(
        kVRSubmitFrameClient_OnSubmitFrameTransferred_Name,
        codec.align(VRSubmitFrameClient_OnSubmitFrameTransferred_Params.encodedSize));
    builder.encodeStruct(VRSubmitFrameClient_OnSubmitFrameTransferred_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRSubmitFrameClientPtr.prototype.onSubmitFrameRendered = function() {
    return VRSubmitFrameClientProxy.prototype.onSubmitFrameRendered
        .apply(this.ptr.getProxy(), arguments);
  };

  VRSubmitFrameClientProxy.prototype.onSubmitFrameRendered = function() {
    var params_ = new VRSubmitFrameClient_OnSubmitFrameRendered_Params();
    var builder = new codec.MessageV0Builder(
        kVRSubmitFrameClient_OnSubmitFrameRendered_Name,
        codec.align(VRSubmitFrameClient_OnSubmitFrameRendered_Params.encodedSize));
    builder.encodeStruct(VRSubmitFrameClient_OnSubmitFrameRendered_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRSubmitFrameClientPtr.prototype.onSubmitFrameGpuFence = function() {
    return VRSubmitFrameClientProxy.prototype.onSubmitFrameGpuFence
        .apply(this.ptr.getProxy(), arguments);
  };

  VRSubmitFrameClientProxy.prototype.onSubmitFrameGpuFence = function(gpuFenceHandle) {
    var params_ = new VRSubmitFrameClient_OnSubmitFrameGpuFence_Params();
    params_.gpuFenceHandle = gpuFenceHandle;
    var builder = new codec.MessageV0Builder(
        kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name,
        codec.align(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params.encodedSize));
    builder.encodeStruct(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRSubmitFrameClientStub(delegate) {
    this.delegate_ = delegate;
  }
  VRSubmitFrameClientStub.prototype.onSubmitFrameTransferred = function(success) {
    return this.delegate_ && this.delegate_.onSubmitFrameTransferred && this.delegate_.onSubmitFrameTransferred(success);
  }
  VRSubmitFrameClientStub.prototype.onSubmitFrameRendered = function() {
    return this.delegate_ && this.delegate_.onSubmitFrameRendered && this.delegate_.onSubmitFrameRendered();
  }
  VRSubmitFrameClientStub.prototype.onSubmitFrameGpuFence = function(gpuFenceHandle) {
    return this.delegate_ && this.delegate_.onSubmitFrameGpuFence && this.delegate_.onSubmitFrameGpuFence(gpuFenceHandle);
  }

  VRSubmitFrameClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRSubmitFrameClient_OnSubmitFrameTransferred_Name:
      var params = reader.decodeStruct(VRSubmitFrameClient_OnSubmitFrameTransferred_Params);
      this.onSubmitFrameTransferred(params.success);
      return true;
    case kVRSubmitFrameClient_OnSubmitFrameRendered_Name:
      var params = reader.decodeStruct(VRSubmitFrameClient_OnSubmitFrameRendered_Params);
      this.onSubmitFrameRendered();
      return true;
    case kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name:
      var params = reader.decodeStruct(VRSubmitFrameClient_OnSubmitFrameGpuFence_Params);
      this.onSubmitFrameGpuFence(params.gpuFenceHandle);
      return true;
    default:
      return false;
    }
  };

  VRSubmitFrameClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVRSubmitFrameClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRSubmitFrameClient_OnSubmitFrameTransferred_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRSubmitFrameClient_OnSubmitFrameTransferred_Params;
      break;
      case kVRSubmitFrameClient_OnSubmitFrameRendered_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRSubmitFrameClient_OnSubmitFrameRendered_Params;
      break;
      case kVRSubmitFrameClient_OnSubmitFrameGpuFence_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRSubmitFrameClient_OnSubmitFrameGpuFence_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRSubmitFrameClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VRSubmitFrameClient = {
    name: 'device.mojom.VRSubmitFrameClient',
    kVersion: 0,
    ptrClass: VRSubmitFrameClientPtr,
    proxyClass: VRSubmitFrameClientProxy,
    stubClass: VRSubmitFrameClientStub,
    validateRequest: validateVRSubmitFrameClientRequest,
    validateResponse: null,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      onSubmitFrameTransferred: {
        params: VRSubmitFrameClient_OnSubmitFrameTransferred_Params,
      },
      onSubmitFrameRendered: {
        params: VRSubmitFrameClient_OnSubmitFrameRendered_Params,
      },
      onSubmitFrameGpuFence: {
        params: VRSubmitFrameClient_OnSubmitFrameGpuFence_Params,
      },
    },
  };
  VRSubmitFrameClientStub.prototype.validator = validateVRSubmitFrameClientRequest;
  VRSubmitFrameClientProxy.prototype.validator = null;
  var kVRDisplayHost_RequestPresent_Name = 699199928;
  var kVRDisplayHost_ExitPresent_Name = 1420051041;

  function VRDisplayHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRDisplayHost,
                                                   handleOrPtrInfo);
  }

  function VRDisplayHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRDisplayHost, associatedInterfacePtrInfo);
  }

  VRDisplayHostAssociatedPtr.prototype =
      Object.create(VRDisplayHostPtr.prototype);
  VRDisplayHostAssociatedPtr.prototype.constructor =
      VRDisplayHostAssociatedPtr;

  function VRDisplayHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRDisplayHostPtr.prototype.requestPresent = function() {
    return VRDisplayHostProxy.prototype.requestPresent
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayHostProxy.prototype.requestPresent = function(client, request, options, triggeredByDisplayactive) {
    var params_ = new VRDisplayHost_RequestPresent_Params();
    params_.client = client;
    params_.request = request;
    params_.options = options;
    params_.triggeredByDisplayactive = triggeredByDisplayactive;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVRDisplayHost_RequestPresent_Name,
          codec.align(VRDisplayHost_RequestPresent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRDisplayHost_RequestPresent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRDisplayHost_RequestPresent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRDisplayHostPtr.prototype.exitPresent = function() {
    return VRDisplayHostProxy.prototype.exitPresent
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayHostProxy.prototype.exitPresent = function() {
    var params_ = new VRDisplayHost_ExitPresent_Params();
    var builder = new codec.MessageV0Builder(
        kVRDisplayHost_ExitPresent_Name,
        codec.align(VRDisplayHost_ExitPresent_Params.encodedSize));
    builder.encodeStruct(VRDisplayHost_ExitPresent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRDisplayHostStub(delegate) {
    this.delegate_ = delegate;
  }
  VRDisplayHostStub.prototype.requestPresent = function(client, request, options, triggeredByDisplayactive) {
    return this.delegate_ && this.delegate_.requestPresent && this.delegate_.requestPresent(client, request, options, triggeredByDisplayactive);
  }
  VRDisplayHostStub.prototype.exitPresent = function() {
    return this.delegate_ && this.delegate_.exitPresent && this.delegate_.exitPresent();
  }

  VRDisplayHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRDisplayHost_ExitPresent_Name:
      var params = reader.decodeStruct(VRDisplayHost_ExitPresent_Params);
      this.exitPresent();
      return true;
    default:
      return false;
    }
  };

  VRDisplayHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRDisplayHost_RequestPresent_Name:
      var params = reader.decodeStruct(VRDisplayHost_RequestPresent_Params);
      this.requestPresent(params.client, params.request, params.options, params.triggeredByDisplayactive).then(function(response) {
        var responseParams =
            new VRDisplayHost_RequestPresent_ResponseParams();
        responseParams.success = response.success;
        responseParams.transportOptions = response.transportOptions;
        var builder = new codec.MessageV1Builder(
            kVRDisplayHost_RequestPresent_Name,
            codec.align(VRDisplayHost_RequestPresent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRDisplayHost_RequestPresent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVRDisplayHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRDisplayHost_RequestPresent_Name:
        if (message.expectsResponse())
          paramsClass = VRDisplayHost_RequestPresent_Params;
      break;
      case kVRDisplayHost_ExitPresent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRDisplayHost_ExitPresent_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRDisplayHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRDisplayHost_RequestPresent_Name:
        if (message.isResponse())
          paramsClass = VRDisplayHost_RequestPresent_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRDisplayHost = {
    name: 'device.mojom.VRDisplayHost',
    kVersion: 0,
    ptrClass: VRDisplayHostPtr,
    proxyClass: VRDisplayHostProxy,
    stubClass: VRDisplayHostStub,
    validateRequest: validateVRDisplayHostRequest,
    validateResponse: validateVRDisplayHostResponse,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      requestPresent: {
        params: VRDisplayHost_RequestPresent_Params,
      },
      exitPresent: {
        params: VRDisplayHost_ExitPresent_Params,
      },
    },
  };
  VRDisplayHostStub.prototype.validator = validateVRDisplayHostRequest;
  VRDisplayHostProxy.prototype.validator = validateVRDisplayHostResponse;
  var kVRMagicWindowProvider_GetPose_Name = 1649454886;
  var kVRMagicWindowProvider_GetFrameData_Name = 62983881;

  function VRMagicWindowProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRMagicWindowProvider,
                                                   handleOrPtrInfo);
  }

  function VRMagicWindowProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRMagicWindowProvider, associatedInterfacePtrInfo);
  }

  VRMagicWindowProviderAssociatedPtr.prototype =
      Object.create(VRMagicWindowProviderPtr.prototype);
  VRMagicWindowProviderAssociatedPtr.prototype.constructor =
      VRMagicWindowProviderAssociatedPtr;

  function VRMagicWindowProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRMagicWindowProviderPtr.prototype.getPose = function() {
    return VRMagicWindowProviderProxy.prototype.getPose
        .apply(this.ptr.getProxy(), arguments);
  };

  VRMagicWindowProviderProxy.prototype.getPose = function() {
    var params_ = new VRMagicWindowProvider_GetPose_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVRMagicWindowProvider_GetPose_Name,
          codec.align(VRMagicWindowProvider_GetPose_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRMagicWindowProvider_GetPose_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRMagicWindowProvider_GetPose_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRMagicWindowProviderPtr.prototype.getFrameData = function() {
    return VRMagicWindowProviderProxy.prototype.getFrameData
        .apply(this.ptr.getProxy(), arguments);
  };

  VRMagicWindowProviderProxy.prototype.getFrameData = function(frameSize, displayRotation) {
    var params_ = new VRMagicWindowProvider_GetFrameData_Params();
    params_.frameSize = frameSize;
    params_.displayRotation = displayRotation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVRMagicWindowProvider_GetFrameData_Name,
          codec.align(VRMagicWindowProvider_GetFrameData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRMagicWindowProvider_GetFrameData_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRMagicWindowProvider_GetFrameData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VRMagicWindowProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  VRMagicWindowProviderStub.prototype.getPose = function() {
    return this.delegate_ && this.delegate_.getPose && this.delegate_.getPose();
  }
  VRMagicWindowProviderStub.prototype.getFrameData = function(frameSize, displayRotation) {
    return this.delegate_ && this.delegate_.getFrameData && this.delegate_.getFrameData(frameSize, displayRotation);
  }

  VRMagicWindowProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  VRMagicWindowProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRMagicWindowProvider_GetPose_Name:
      var params = reader.decodeStruct(VRMagicWindowProvider_GetPose_Params);
      this.getPose().then(function(response) {
        var responseParams =
            new VRMagicWindowProvider_GetPose_ResponseParams();
        responseParams.pose = response.pose;
        var builder = new codec.MessageV1Builder(
            kVRMagicWindowProvider_GetPose_Name,
            codec.align(VRMagicWindowProvider_GetPose_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRMagicWindowProvider_GetPose_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVRMagicWindowProvider_GetFrameData_Name:
      var params = reader.decodeStruct(VRMagicWindowProvider_GetFrameData_Params);
      this.getFrameData(params.frameSize, params.displayRotation).then(function(response) {
        var responseParams =
            new VRMagicWindowProvider_GetFrameData_ResponseParams();
        responseParams.frameData = response.frameData;
        var builder = new codec.MessageV1Builder(
            kVRMagicWindowProvider_GetFrameData_Name,
            codec.align(VRMagicWindowProvider_GetFrameData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRMagicWindowProvider_GetFrameData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVRMagicWindowProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRMagicWindowProvider_GetPose_Name:
        if (message.expectsResponse())
          paramsClass = VRMagicWindowProvider_GetPose_Params;
      break;
      case kVRMagicWindowProvider_GetFrameData_Name:
        if (message.expectsResponse())
          paramsClass = VRMagicWindowProvider_GetFrameData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRMagicWindowProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRMagicWindowProvider_GetPose_Name:
        if (message.isResponse())
          paramsClass = VRMagicWindowProvider_GetPose_ResponseParams;
        break;
      case kVRMagicWindowProvider_GetFrameData_Name:
        if (message.isResponse())
          paramsClass = VRMagicWindowProvider_GetFrameData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRMagicWindowProvider = {
    name: 'device.mojom.VRMagicWindowProvider',
    kVersion: 0,
    ptrClass: VRMagicWindowProviderPtr,
    proxyClass: VRMagicWindowProviderProxy,
    stubClass: VRMagicWindowProviderStub,
    validateRequest: validateVRMagicWindowProviderRequest,
    validateResponse: validateVRMagicWindowProviderResponse,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      getPose: {
        params: VRMagicWindowProvider_GetPose_Params,
      },
      getFrameData: {
        params: VRMagicWindowProvider_GetFrameData_Params,
      },
    },
  };
  VRMagicWindowProviderStub.prototype.validator = validateVRMagicWindowProviderRequest;
  VRMagicWindowProviderProxy.prototype.validator = validateVRMagicWindowProviderResponse;
  var kVRPresentationProvider_GetVSync_Name = 1557126507;
  var kVRPresentationProvider_UpdateLayerBounds_Name = 1918344054;
  var kVRPresentationProvider_SubmitFrameMissing_Name = 251029854;
  var kVRPresentationProvider_SubmitFrame_Name = 1536308249;
  var kVRPresentationProvider_SubmitFrameWithTextureHandle_Name = 1275405562;
  var kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name = 424170091;

  function VRPresentationProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRPresentationProvider,
                                                   handleOrPtrInfo);
  }

  function VRPresentationProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRPresentationProvider, associatedInterfacePtrInfo);
  }

  VRPresentationProviderAssociatedPtr.prototype =
      Object.create(VRPresentationProviderPtr.prototype);
  VRPresentationProviderAssociatedPtr.prototype.constructor =
      VRPresentationProviderAssociatedPtr;

  function VRPresentationProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRPresentationProviderPtr.prototype.getVSync = function() {
    return VRPresentationProviderProxy.prototype.getVSync
        .apply(this.ptr.getProxy(), arguments);
  };

  VRPresentationProviderProxy.prototype.getVSync = function() {
    var params_ = new VRPresentationProvider_GetVSync_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVRPresentationProvider_GetVSync_Name,
          codec.align(VRPresentationProvider_GetVSync_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRPresentationProvider_GetVSync_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRPresentationProvider_GetVSync_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRPresentationProviderPtr.prototype.updateLayerBounds = function() {
    return VRPresentationProviderProxy.prototype.updateLayerBounds
        .apply(this.ptr.getProxy(), arguments);
  };

  VRPresentationProviderProxy.prototype.updateLayerBounds = function(frameId, leftBounds, rightBounds, sourceSize) {
    var params_ = new VRPresentationProvider_UpdateLayerBounds_Params();
    params_.frameId = frameId;
    params_.leftBounds = leftBounds;
    params_.rightBounds = rightBounds;
    params_.sourceSize = sourceSize;
    var builder = new codec.MessageV0Builder(
        kVRPresentationProvider_UpdateLayerBounds_Name,
        codec.align(VRPresentationProvider_UpdateLayerBounds_Params.encodedSize));
    builder.encodeStruct(VRPresentationProvider_UpdateLayerBounds_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRPresentationProviderPtr.prototype.submitFrameMissing = function() {
    return VRPresentationProviderProxy.prototype.submitFrameMissing
        .apply(this.ptr.getProxy(), arguments);
  };

  VRPresentationProviderProxy.prototype.submitFrameMissing = function(frameId, syncToken) {
    var params_ = new VRPresentationProvider_SubmitFrameMissing_Params();
    params_.frameId = frameId;
    params_.syncToken = syncToken;
    var builder = new codec.MessageV0Builder(
        kVRPresentationProvider_SubmitFrameMissing_Name,
        codec.align(VRPresentationProvider_SubmitFrameMissing_Params.encodedSize));
    builder.encodeStruct(VRPresentationProvider_SubmitFrameMissing_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRPresentationProviderPtr.prototype.submitFrame = function() {
    return VRPresentationProviderProxy.prototype.submitFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  VRPresentationProviderProxy.prototype.submitFrame = function(frameId, mailboxHolder, timeWaited) {
    var params_ = new VRPresentationProvider_SubmitFrame_Params();
    params_.frameId = frameId;
    params_.mailboxHolder = mailboxHolder;
    params_.timeWaited = timeWaited;
    var builder = new codec.MessageV0Builder(
        kVRPresentationProvider_SubmitFrame_Name,
        codec.align(VRPresentationProvider_SubmitFrame_Params.encodedSize));
    builder.encodeStruct(VRPresentationProvider_SubmitFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRPresentationProviderPtr.prototype.submitFrameWithTextureHandle = function() {
    return VRPresentationProviderProxy.prototype.submitFrameWithTextureHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  VRPresentationProviderProxy.prototype.submitFrameWithTextureHandle = function(frameId, texture) {
    var params_ = new VRPresentationProvider_SubmitFrameWithTextureHandle_Params();
    params_.frameId = frameId;
    params_.texture = texture;
    var builder = new codec.MessageV0Builder(
        kVRPresentationProvider_SubmitFrameWithTextureHandle_Name,
        codec.align(VRPresentationProvider_SubmitFrameWithTextureHandle_Params.encodedSize));
    builder.encodeStruct(VRPresentationProvider_SubmitFrameWithTextureHandle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRPresentationProviderPtr.prototype.submitFrameDrawnIntoTexture = function() {
    return VRPresentationProviderProxy.prototype.submitFrameDrawnIntoTexture
        .apply(this.ptr.getProxy(), arguments);
  };

  VRPresentationProviderProxy.prototype.submitFrameDrawnIntoTexture = function(frameId, syncToken, timeWaited) {
    var params_ = new VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params();
    params_.frameId = frameId;
    params_.syncToken = syncToken;
    params_.timeWaited = timeWaited;
    var builder = new codec.MessageV0Builder(
        kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name,
        codec.align(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params.encodedSize));
    builder.encodeStruct(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRPresentationProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  VRPresentationProviderStub.prototype.getVSync = function() {
    return this.delegate_ && this.delegate_.getVSync && this.delegate_.getVSync();
  }
  VRPresentationProviderStub.prototype.updateLayerBounds = function(frameId, leftBounds, rightBounds, sourceSize) {
    return this.delegate_ && this.delegate_.updateLayerBounds && this.delegate_.updateLayerBounds(frameId, leftBounds, rightBounds, sourceSize);
  }
  VRPresentationProviderStub.prototype.submitFrameMissing = function(frameId, syncToken) {
    return this.delegate_ && this.delegate_.submitFrameMissing && this.delegate_.submitFrameMissing(frameId, syncToken);
  }
  VRPresentationProviderStub.prototype.submitFrame = function(frameId, mailboxHolder, timeWaited) {
    return this.delegate_ && this.delegate_.submitFrame && this.delegate_.submitFrame(frameId, mailboxHolder, timeWaited);
  }
  VRPresentationProviderStub.prototype.submitFrameWithTextureHandle = function(frameId, texture) {
    return this.delegate_ && this.delegate_.submitFrameWithTextureHandle && this.delegate_.submitFrameWithTextureHandle(frameId, texture);
  }
  VRPresentationProviderStub.prototype.submitFrameDrawnIntoTexture = function(frameId, syncToken, timeWaited) {
    return this.delegate_ && this.delegate_.submitFrameDrawnIntoTexture && this.delegate_.submitFrameDrawnIntoTexture(frameId, syncToken, timeWaited);
  }

  VRPresentationProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRPresentationProvider_UpdateLayerBounds_Name:
      var params = reader.decodeStruct(VRPresentationProvider_UpdateLayerBounds_Params);
      this.updateLayerBounds(params.frameId, params.leftBounds, params.rightBounds, params.sourceSize);
      return true;
    case kVRPresentationProvider_SubmitFrameMissing_Name:
      var params = reader.decodeStruct(VRPresentationProvider_SubmitFrameMissing_Params);
      this.submitFrameMissing(params.frameId, params.syncToken);
      return true;
    case kVRPresentationProvider_SubmitFrame_Name:
      var params = reader.decodeStruct(VRPresentationProvider_SubmitFrame_Params);
      this.submitFrame(params.frameId, params.mailboxHolder, params.timeWaited);
      return true;
    case kVRPresentationProvider_SubmitFrameWithTextureHandle_Name:
      var params = reader.decodeStruct(VRPresentationProvider_SubmitFrameWithTextureHandle_Params);
      this.submitFrameWithTextureHandle(params.frameId, params.texture);
      return true;
    case kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name:
      var params = reader.decodeStruct(VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params);
      this.submitFrameDrawnIntoTexture(params.frameId, params.syncToken, params.timeWaited);
      return true;
    default:
      return false;
    }
  };

  VRPresentationProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRPresentationProvider_GetVSync_Name:
      var params = reader.decodeStruct(VRPresentationProvider_GetVSync_Params);
      this.getVSync().then(function(response) {
        var responseParams =
            new VRPresentationProvider_GetVSync_ResponseParams();
        responseParams.pose = response.pose;
        responseParams.time = response.time;
        responseParams.frameId = response.frameId;
        responseParams.status = response.status;
        responseParams.bufferHolder = response.bufferHolder;
        var builder = new codec.MessageV1Builder(
            kVRPresentationProvider_GetVSync_Name,
            codec.align(VRPresentationProvider_GetVSync_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRPresentationProvider_GetVSync_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVRPresentationProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRPresentationProvider_GetVSync_Name:
        if (message.expectsResponse())
          paramsClass = VRPresentationProvider_GetVSync_Params;
      break;
      case kVRPresentationProvider_UpdateLayerBounds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRPresentationProvider_UpdateLayerBounds_Params;
      break;
      case kVRPresentationProvider_SubmitFrameMissing_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRPresentationProvider_SubmitFrameMissing_Params;
      break;
      case kVRPresentationProvider_SubmitFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRPresentationProvider_SubmitFrame_Params;
      break;
      case kVRPresentationProvider_SubmitFrameWithTextureHandle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRPresentationProvider_SubmitFrameWithTextureHandle_Params;
      break;
      case kVRPresentationProvider_SubmitFrameDrawnIntoTexture_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRPresentationProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRPresentationProvider_GetVSync_Name:
        if (message.isResponse())
          paramsClass = VRPresentationProvider_GetVSync_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRPresentationProvider = {
    name: 'device.mojom.VRPresentationProvider',
    kVersion: 0,
    ptrClass: VRPresentationProviderPtr,
    proxyClass: VRPresentationProviderProxy,
    stubClass: VRPresentationProviderStub,
    validateRequest: validateVRPresentationProviderRequest,
    validateResponse: validateVRPresentationProviderResponse,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      getVSync: {
        params: VRPresentationProvider_GetVSync_Params,
      },
      updateLayerBounds: {
        params: VRPresentationProvider_UpdateLayerBounds_Params,
      },
      submitFrameMissing: {
        params: VRPresentationProvider_SubmitFrameMissing_Params,
      },
      submitFrame: {
        params: VRPresentationProvider_SubmitFrame_Params,
      },
      submitFrameWithTextureHandle: {
        params: VRPresentationProvider_SubmitFrameWithTextureHandle_Params,
      },
      submitFrameDrawnIntoTexture: {
        params: VRPresentationProvider_SubmitFrameDrawnIntoTexture_Params,
      },
    },
  };
  VRPresentationProvider.VSyncStatus = {};
  VRPresentationProvider.VSyncStatus.SUCCESS = 0;
  VRPresentationProvider.VSyncStatus.CLOSING = VRPresentationProvider.VSyncStatus.SUCCESS + 1;

  VRPresentationProvider.VSyncStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  VRPresentationProvider.VSyncStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  VRPresentationProviderStub.prototype.validator = validateVRPresentationProviderRequest;
  VRPresentationProviderProxy.prototype.validator = validateVRPresentationProviderResponse;
  var kVRDisplayClient_OnChanged_Name = 23517852;
  var kVRDisplayClient_OnExitPresent_Name = 1418631270;
  var kVRDisplayClient_OnBlur_Name = 518500412;
  var kVRDisplayClient_OnFocus_Name = 1049695990;
  var kVRDisplayClient_OnActivate_Name = 249062929;
  var kVRDisplayClient_OnDeactivate_Name = 1585737892;

  function VRDisplayClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VRDisplayClient,
                                                   handleOrPtrInfo);
  }

  function VRDisplayClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VRDisplayClient, associatedInterfacePtrInfo);
  }

  VRDisplayClientAssociatedPtr.prototype =
      Object.create(VRDisplayClientPtr.prototype);
  VRDisplayClientAssociatedPtr.prototype.constructor =
      VRDisplayClientAssociatedPtr;

  function VRDisplayClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  VRDisplayClientPtr.prototype.onChanged = function() {
    return VRDisplayClientProxy.prototype.onChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayClientProxy.prototype.onChanged = function(display) {
    var params_ = new VRDisplayClient_OnChanged_Params();
    params_.display = display;
    var builder = new codec.MessageV0Builder(
        kVRDisplayClient_OnChanged_Name,
        codec.align(VRDisplayClient_OnChanged_Params.encodedSize));
    builder.encodeStruct(VRDisplayClient_OnChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRDisplayClientPtr.prototype.onExitPresent = function() {
    return VRDisplayClientProxy.prototype.onExitPresent
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayClientProxy.prototype.onExitPresent = function() {
    var params_ = new VRDisplayClient_OnExitPresent_Params();
    var builder = new codec.MessageV0Builder(
        kVRDisplayClient_OnExitPresent_Name,
        codec.align(VRDisplayClient_OnExitPresent_Params.encodedSize));
    builder.encodeStruct(VRDisplayClient_OnExitPresent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRDisplayClientPtr.prototype.onBlur = function() {
    return VRDisplayClientProxy.prototype.onBlur
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayClientProxy.prototype.onBlur = function() {
    var params_ = new VRDisplayClient_OnBlur_Params();
    var builder = new codec.MessageV0Builder(
        kVRDisplayClient_OnBlur_Name,
        codec.align(VRDisplayClient_OnBlur_Params.encodedSize));
    builder.encodeStruct(VRDisplayClient_OnBlur_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRDisplayClientPtr.prototype.onFocus = function() {
    return VRDisplayClientProxy.prototype.onFocus
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayClientProxy.prototype.onFocus = function() {
    var params_ = new VRDisplayClient_OnFocus_Params();
    var builder = new codec.MessageV0Builder(
        kVRDisplayClient_OnFocus_Name,
        codec.align(VRDisplayClient_OnFocus_Params.encodedSize));
    builder.encodeStruct(VRDisplayClient_OnFocus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VRDisplayClientPtr.prototype.onActivate = function() {
    return VRDisplayClientProxy.prototype.onActivate
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayClientProxy.prototype.onActivate = function(reason) {
    var params_ = new VRDisplayClient_OnActivate_Params();
    params_.reason = reason;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVRDisplayClient_OnActivate_Name,
          codec.align(VRDisplayClient_OnActivate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VRDisplayClient_OnActivate_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VRDisplayClient_OnActivate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VRDisplayClientPtr.prototype.onDeactivate = function() {
    return VRDisplayClientProxy.prototype.onDeactivate
        .apply(this.ptr.getProxy(), arguments);
  };

  VRDisplayClientProxy.prototype.onDeactivate = function(reason) {
    var params_ = new VRDisplayClient_OnDeactivate_Params();
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kVRDisplayClient_OnDeactivate_Name,
        codec.align(VRDisplayClient_OnDeactivate_Params.encodedSize));
    builder.encodeStruct(VRDisplayClient_OnDeactivate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VRDisplayClientStub(delegate) {
    this.delegate_ = delegate;
  }
  VRDisplayClientStub.prototype.onChanged = function(display) {
    return this.delegate_ && this.delegate_.onChanged && this.delegate_.onChanged(display);
  }
  VRDisplayClientStub.prototype.onExitPresent = function() {
    return this.delegate_ && this.delegate_.onExitPresent && this.delegate_.onExitPresent();
  }
  VRDisplayClientStub.prototype.onBlur = function() {
    return this.delegate_ && this.delegate_.onBlur && this.delegate_.onBlur();
  }
  VRDisplayClientStub.prototype.onFocus = function() {
    return this.delegate_ && this.delegate_.onFocus && this.delegate_.onFocus();
  }
  VRDisplayClientStub.prototype.onActivate = function(reason) {
    return this.delegate_ && this.delegate_.onActivate && this.delegate_.onActivate(reason);
  }
  VRDisplayClientStub.prototype.onDeactivate = function(reason) {
    return this.delegate_ && this.delegate_.onDeactivate && this.delegate_.onDeactivate(reason);
  }

  VRDisplayClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRDisplayClient_OnChanged_Name:
      var params = reader.decodeStruct(VRDisplayClient_OnChanged_Params);
      this.onChanged(params.display);
      return true;
    case kVRDisplayClient_OnExitPresent_Name:
      var params = reader.decodeStruct(VRDisplayClient_OnExitPresent_Params);
      this.onExitPresent();
      return true;
    case kVRDisplayClient_OnBlur_Name:
      var params = reader.decodeStruct(VRDisplayClient_OnBlur_Params);
      this.onBlur();
      return true;
    case kVRDisplayClient_OnFocus_Name:
      var params = reader.decodeStruct(VRDisplayClient_OnFocus_Params);
      this.onFocus();
      return true;
    case kVRDisplayClient_OnDeactivate_Name:
      var params = reader.decodeStruct(VRDisplayClient_OnDeactivate_Params);
      this.onDeactivate(params.reason);
      return true;
    default:
      return false;
    }
  };

  VRDisplayClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVRDisplayClient_OnActivate_Name:
      var params = reader.decodeStruct(VRDisplayClient_OnActivate_Params);
      this.onActivate(params.reason).then(function(response) {
        var responseParams =
            new VRDisplayClient_OnActivate_ResponseParams();
        responseParams.willNotPresent = response.willNotPresent;
        var builder = new codec.MessageV1Builder(
            kVRDisplayClient_OnActivate_Name,
            codec.align(VRDisplayClient_OnActivate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VRDisplayClient_OnActivate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVRDisplayClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVRDisplayClient_OnChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRDisplayClient_OnChanged_Params;
      break;
      case kVRDisplayClient_OnExitPresent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRDisplayClient_OnExitPresent_Params;
      break;
      case kVRDisplayClient_OnBlur_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRDisplayClient_OnBlur_Params;
      break;
      case kVRDisplayClient_OnFocus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRDisplayClient_OnFocus_Params;
      break;
      case kVRDisplayClient_OnActivate_Name:
        if (message.expectsResponse())
          paramsClass = VRDisplayClient_OnActivate_Params;
      break;
      case kVRDisplayClient_OnDeactivate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VRDisplayClient_OnDeactivate_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVRDisplayClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVRDisplayClient_OnActivate_Name:
        if (message.isResponse())
          paramsClass = VRDisplayClient_OnActivate_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VRDisplayClient = {
    name: 'device.mojom.VRDisplayClient',
    kVersion: 0,
    ptrClass: VRDisplayClientPtr,
    proxyClass: VRDisplayClientProxy,
    stubClass: VRDisplayClientStub,
    validateRequest: validateVRDisplayClientRequest,
    validateResponse: validateVRDisplayClientResponse,
    mojomId: 'device/vr/public/mojom/vr_service.mojom',
    fuzzMethods: {
      onChanged: {
        params: VRDisplayClient_OnChanged_Params,
      },
      onExitPresent: {
        params: VRDisplayClient_OnExitPresent_Params,
      },
      onBlur: {
        params: VRDisplayClient_OnBlur_Params,
      },
      onFocus: {
        params: VRDisplayClient_OnFocus_Params,
      },
      onActivate: {
        params: VRDisplayClient_OnActivate_Params,
      },
      onDeactivate: {
        params: VRDisplayClient_OnDeactivate_Params,
      },
    },
  };
  VRDisplayClientStub.prototype.validator = validateVRDisplayClientRequest;
  VRDisplayClientProxy.prototype.validator = validateVRDisplayClientResponse;
  exports.XRHandedness = XRHandedness;
  exports.XRPointerOrigin = XRPointerOrigin;
  exports.VRDisplayFrameTransportMethod = VRDisplayFrameTransportMethod;
  exports.VRDisplayEventReason = VRDisplayEventReason;
  exports.XRInputSourceDescription = XRInputSourceDescription;
  exports.XRInputSourceState = XRInputSourceState;
  exports.VRFieldOfView = VRFieldOfView;
  exports.VRPose = VRPose;
  exports.VRDisplayCapabilities = VRDisplayCapabilities;
  exports.VREyeParameters = VREyeParameters;
  exports.VRStageParameters = VRStageParameters;
  exports.VRDisplayInfo = VRDisplayInfo;
  exports.VRRequestPresentOptions = VRRequestPresentOptions;
  exports.VRDisplayFrameTransportOptions = VRDisplayFrameTransportOptions;
  exports.VRMagicWindowFrameData = VRMagicWindowFrameData;
  exports.VRService = VRService;
  exports.VRServicePtr = VRServicePtr;
  exports.VRServiceAssociatedPtr = VRServiceAssociatedPtr;
  exports.VRServiceClient = VRServiceClient;
  exports.VRServiceClientPtr = VRServiceClientPtr;
  exports.VRServiceClientAssociatedPtr = VRServiceClientAssociatedPtr;
  exports.VRSubmitFrameClient = VRSubmitFrameClient;
  exports.VRSubmitFrameClientPtr = VRSubmitFrameClientPtr;
  exports.VRSubmitFrameClientAssociatedPtr = VRSubmitFrameClientAssociatedPtr;
  exports.VRDisplayHost = VRDisplayHost;
  exports.VRDisplayHostPtr = VRDisplayHostPtr;
  exports.VRDisplayHostAssociatedPtr = VRDisplayHostAssociatedPtr;
  exports.VRMagicWindowProvider = VRMagicWindowProvider;
  exports.VRMagicWindowProviderPtr = VRMagicWindowProviderPtr;
  exports.VRMagicWindowProviderAssociatedPtr = VRMagicWindowProviderAssociatedPtr;
  exports.VRPresentationProvider = VRPresentationProvider;
  exports.VRPresentationProviderPtr = VRPresentationProviderPtr;
  exports.VRPresentationProviderAssociatedPtr = VRPresentationProviderAssociatedPtr;
  exports.VRDisplayClient = VRDisplayClient;
  exports.VRDisplayClientPtr = VRDisplayClientPtr;
  exports.VRDisplayClientAssociatedPtr = VRDisplayClientAssociatedPtr;
})();