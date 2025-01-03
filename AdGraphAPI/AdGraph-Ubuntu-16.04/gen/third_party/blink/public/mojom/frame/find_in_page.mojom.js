// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/frame/find_in_page.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var StopFindAction = {};
  StopFindAction.kStopFindActionClearSelection = 0;
  StopFindAction.kStopFindActionKeepSelection = StopFindAction.kStopFindActionClearSelection + 1;
  StopFindAction.kStopFindActionActivateSelection = StopFindAction.kStopFindActionKeepSelection + 1;

  StopFindAction.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  StopFindAction.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FindInPage_StopFinding_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_StopFinding_Params.prototype.initDefaults_ = function() {
    this.action = 0;
  };
  FindInPage_StopFinding_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_StopFinding_Params.generate = function(generator_) {
    var generated = new FindInPage_StopFinding_Params;
    generated.action = generator_.generateEnum(0, 2);
    return generated;
  };

  FindInPage_StopFinding_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateEnum(this.action, 0, 2);
    }
    return this;
  };
  FindInPage_StopFinding_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_StopFinding_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_StopFinding_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_StopFinding_Params.validate = function(messageValidator, offset) {
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


    // validate FindInPage_StopFinding_Params.action
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, StopFindAction);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FindInPage_StopFinding_Params.encodedSize = codec.kStructHeaderSize + 8;

  FindInPage_StopFinding_Params.decode = function(decoder) {
    var packed;
    var val = new FindInPage_StopFinding_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.action = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FindInPage_StopFinding_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_StopFinding_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.action);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FindInPage_ClearActiveFindMatch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_ClearActiveFindMatch_Params.prototype.initDefaults_ = function() {
  };
  FindInPage_ClearActiveFindMatch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_ClearActiveFindMatch_Params.generate = function(generator_) {
    var generated = new FindInPage_ClearActiveFindMatch_Params;
    return generated;
  };

  FindInPage_ClearActiveFindMatch_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FindInPage_ClearActiveFindMatch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_ClearActiveFindMatch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_ClearActiveFindMatch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_ClearActiveFindMatch_Params.validate = function(messageValidator, offset) {
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

  FindInPage_ClearActiveFindMatch_Params.encodedSize = codec.kStructHeaderSize + 0;

  FindInPage_ClearActiveFindMatch_Params.decode = function(decoder) {
    var packed;
    var val = new FindInPage_ClearActiveFindMatch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FindInPage_ClearActiveFindMatch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_ClearActiveFindMatch_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FindInPage_GetNearestFindResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_GetNearestFindResult_Params.prototype.initDefaults_ = function() {
    this.point = null;
  };
  FindInPage_GetNearestFindResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_GetNearestFindResult_Params.generate = function(generator_) {
    var generated = new FindInPage_GetNearestFindResult_Params;
    generated.point = generator_.generateStruct(gfx.mojom.PointF, false);
    return generated;
  };

  FindInPage_GetNearestFindResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.point = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    return this;
  };
  FindInPage_GetNearestFindResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_GetNearestFindResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_GetNearestFindResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_GetNearestFindResult_Params.validate = function(messageValidator, offset) {
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


    // validate FindInPage_GetNearestFindResult_Params.point
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FindInPage_GetNearestFindResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  FindInPage_GetNearestFindResult_Params.decode = function(decoder) {
    var packed;
    var val = new FindInPage_GetNearestFindResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.point = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  FindInPage_GetNearestFindResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_GetNearestFindResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.point);
  };
  function FindInPage_GetNearestFindResult_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_GetNearestFindResult_ResponseParams.prototype.initDefaults_ = function() {
    this.distance = 0;
  };
  FindInPage_GetNearestFindResult_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_GetNearestFindResult_ResponseParams.generate = function(generator_) {
    var generated = new FindInPage_GetNearestFindResult_ResponseParams;
    generated.distance = generator_.generateFloat();
    return generated;
  };

  FindInPage_GetNearestFindResult_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.distance = mutator_.mutateFloat(this.distance);
    }
    return this;
  };
  FindInPage_GetNearestFindResult_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_GetNearestFindResult_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_GetNearestFindResult_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_GetNearestFindResult_ResponseParams.validate = function(messageValidator, offset) {
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

  FindInPage_GetNearestFindResult_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FindInPage_GetNearestFindResult_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FindInPage_GetNearestFindResult_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.distance = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FindInPage_GetNearestFindResult_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_GetNearestFindResult_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.distance);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FindInPage_ActivateNearestFindResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_ActivateNearestFindResult_Params.prototype.initDefaults_ = function() {
    this.point = null;
  };
  FindInPage_ActivateNearestFindResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_ActivateNearestFindResult_Params.generate = function(generator_) {
    var generated = new FindInPage_ActivateNearestFindResult_Params;
    generated.point = generator_.generateStruct(gfx.mojom.PointF, false);
    return generated;
  };

  FindInPage_ActivateNearestFindResult_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.point = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    return this;
  };
  FindInPage_ActivateNearestFindResult_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_ActivateNearestFindResult_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_ActivateNearestFindResult_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_ActivateNearestFindResult_Params.validate = function(messageValidator, offset) {
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


    // validate FindInPage_ActivateNearestFindResult_Params.point
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FindInPage_ActivateNearestFindResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  FindInPage_ActivateNearestFindResult_Params.decode = function(decoder) {
    var packed;
    var val = new FindInPage_ActivateNearestFindResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.point = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  FindInPage_ActivateNearestFindResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_ActivateNearestFindResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.point);
  };
  function FindInPage_ActivateNearestFindResult_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_ActivateNearestFindResult_ResponseParams.prototype.initDefaults_ = function() {
    this.activeMatchRect = null;
    this.numberOfMatches = 0;
    this.activeMatchOrdinal = 0;
    this.finalUpdate = false;
  };
  FindInPage_ActivateNearestFindResult_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_ActivateNearestFindResult_ResponseParams.generate = function(generator_) {
    var generated = new FindInPage_ActivateNearestFindResult_ResponseParams;
    generated.activeMatchRect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.numberOfMatches = generator_.generateInt32();
    generated.activeMatchOrdinal = generator_.generateInt32();
    generated.finalUpdate = generator_.generateBool();
    return generated;
  };

  FindInPage_ActivateNearestFindResult_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.activeMatchRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.numberOfMatches = mutator_.mutateInt32(this.numberOfMatches);
    }
    if (mutator_.chooseMutateField()) {
      this.activeMatchOrdinal = mutator_.mutateInt32(this.activeMatchOrdinal);
    }
    if (mutator_.chooseMutateField()) {
      this.finalUpdate = mutator_.mutateBool(this.finalUpdate);
    }
    return this;
  };
  FindInPage_ActivateNearestFindResult_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_ActivateNearestFindResult_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_ActivateNearestFindResult_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_ActivateNearestFindResult_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FindInPage_ActivateNearestFindResult_ResponseParams.activeMatchRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  FindInPage_ActivateNearestFindResult_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  FindInPage_ActivateNearestFindResult_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FindInPage_ActivateNearestFindResult_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.activeMatchRect = decoder.decodeStructPointer(geometry$.Rect);
    val.numberOfMatches = decoder.decodeStruct(codec.Int32);
    val.activeMatchOrdinal = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.finalUpdate = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FindInPage_ActivateNearestFindResult_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_ActivateNearestFindResult_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.activeMatchRect);
    encoder.encodeStruct(codec.Int32, val.numberOfMatches);
    encoder.encodeStruct(codec.Int32, val.activeMatchOrdinal);
    packed = 0;
    packed |= (val.finalUpdate & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FindInPage_FindMatchRects_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_FindMatchRects_Params.prototype.initDefaults_ = function() {
    this.currentVersion = 0;
  };
  FindInPage_FindMatchRects_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_FindMatchRects_Params.generate = function(generator_) {
    var generated = new FindInPage_FindMatchRects_Params;
    generated.currentVersion = generator_.generateInt32();
    return generated;
  };

  FindInPage_FindMatchRects_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.currentVersion = mutator_.mutateInt32(this.currentVersion);
    }
    return this;
  };
  FindInPage_FindMatchRects_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_FindMatchRects_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_FindMatchRects_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_FindMatchRects_Params.validate = function(messageValidator, offset) {
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

  FindInPage_FindMatchRects_Params.encodedSize = codec.kStructHeaderSize + 8;

  FindInPage_FindMatchRects_Params.decode = function(decoder) {
    var packed;
    var val = new FindInPage_FindMatchRects_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.currentVersion = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FindInPage_FindMatchRects_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_FindMatchRects_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.currentVersion);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FindInPage_FindMatchRects_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FindInPage_FindMatchRects_ResponseParams.prototype.initDefaults_ = function() {
    this.version = 0;
    this.rects = null;
    this.activeMatchRect = null;
  };
  FindInPage_FindMatchRects_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FindInPage_FindMatchRects_ResponseParams.generate = function(generator_) {
    var generated = new FindInPage_FindMatchRects_ResponseParams;
    generated.version = generator_.generateInt32();
    generated.rects = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.RectF, false);
    });
    generated.activeMatchRect = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  FindInPage_FindMatchRects_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateInt32(this.version);
    }
    if (mutator_.chooseMutateField()) {
      this.rects = mutator_.mutateArray(this.rects, function(val) {
        return mutator_.mutateStruct(gfx.mojom.RectF, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.activeMatchRect = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  FindInPage_FindMatchRects_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FindInPage_FindMatchRects_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FindInPage_FindMatchRects_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FindInPage_FindMatchRects_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate FindInPage_FindMatchRects_ResponseParams.rects
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(geometry$.RectF), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FindInPage_FindMatchRects_ResponseParams.activeMatchRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FindInPage_FindMatchRects_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  FindInPage_FindMatchRects_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FindInPage_FindMatchRects_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.rects = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.RectF));
    val.activeMatchRect = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  FindInPage_FindMatchRects_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FindInPage_FindMatchRects_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.RectF), val.rects);
    encoder.encodeStructPointer(geometry$.RectF, val.activeMatchRect);
  };
  var kFindInPage_StopFinding_Name = 1757485129;
  var kFindInPage_ClearActiveFindMatch_Name = 1345545298;
  var kFindInPage_GetNearestFindResult_Name = 737178442;
  var kFindInPage_ActivateNearestFindResult_Name = 1376483731;
  var kFindInPage_FindMatchRects_Name = 608986599;

  function FindInPagePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FindInPage,
                                                   handleOrPtrInfo);
  }

  function FindInPageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FindInPage, associatedInterfacePtrInfo);
  }

  FindInPageAssociatedPtr.prototype =
      Object.create(FindInPagePtr.prototype);
  FindInPageAssociatedPtr.prototype.constructor =
      FindInPageAssociatedPtr;

  function FindInPageProxy(receiver) {
    this.receiver_ = receiver;
  }
  FindInPagePtr.prototype.stopFinding = function() {
    return FindInPageProxy.prototype.stopFinding
        .apply(this.ptr.getProxy(), arguments);
  };

  FindInPageProxy.prototype.stopFinding = function(action) {
    var params_ = new FindInPage_StopFinding_Params();
    params_.action = action;
    var builder = new codec.MessageV0Builder(
        kFindInPage_StopFinding_Name,
        codec.align(FindInPage_StopFinding_Params.encodedSize));
    builder.encodeStruct(FindInPage_StopFinding_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FindInPagePtr.prototype.clearActiveFindMatch = function() {
    return FindInPageProxy.prototype.clearActiveFindMatch
        .apply(this.ptr.getProxy(), arguments);
  };

  FindInPageProxy.prototype.clearActiveFindMatch = function() {
    var params_ = new FindInPage_ClearActiveFindMatch_Params();
    var builder = new codec.MessageV0Builder(
        kFindInPage_ClearActiveFindMatch_Name,
        codec.align(FindInPage_ClearActiveFindMatch_Params.encodedSize));
    builder.encodeStruct(FindInPage_ClearActiveFindMatch_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FindInPagePtr.prototype.getNearestFindResult = function() {
    return FindInPageProxy.prototype.getNearestFindResult
        .apply(this.ptr.getProxy(), arguments);
  };

  FindInPageProxy.prototype.getNearestFindResult = function(point) {
    var params_ = new FindInPage_GetNearestFindResult_Params();
    params_.point = point;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFindInPage_GetNearestFindResult_Name,
          codec.align(FindInPage_GetNearestFindResult_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FindInPage_GetNearestFindResult_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FindInPage_GetNearestFindResult_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FindInPagePtr.prototype.activateNearestFindResult = function() {
    return FindInPageProxy.prototype.activateNearestFindResult
        .apply(this.ptr.getProxy(), arguments);
  };

  FindInPageProxy.prototype.activateNearestFindResult = function(point) {
    var params_ = new FindInPage_ActivateNearestFindResult_Params();
    params_.point = point;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFindInPage_ActivateNearestFindResult_Name,
          codec.align(FindInPage_ActivateNearestFindResult_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FindInPage_ActivateNearestFindResult_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FindInPage_ActivateNearestFindResult_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FindInPagePtr.prototype.findMatchRects = function() {
    return FindInPageProxy.prototype.findMatchRects
        .apply(this.ptr.getProxy(), arguments);
  };

  FindInPageProxy.prototype.findMatchRects = function(currentVersion) {
    var params_ = new FindInPage_FindMatchRects_Params();
    params_.currentVersion = currentVersion;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFindInPage_FindMatchRects_Name,
          codec.align(FindInPage_FindMatchRects_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FindInPage_FindMatchRects_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FindInPage_FindMatchRects_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FindInPageStub(delegate) {
    this.delegate_ = delegate;
  }
  FindInPageStub.prototype.stopFinding = function(action) {
    return this.delegate_ && this.delegate_.stopFinding && this.delegate_.stopFinding(action);
  }
  FindInPageStub.prototype.clearActiveFindMatch = function() {
    return this.delegate_ && this.delegate_.clearActiveFindMatch && this.delegate_.clearActiveFindMatch();
  }
  FindInPageStub.prototype.getNearestFindResult = function(point) {
    return this.delegate_ && this.delegate_.getNearestFindResult && this.delegate_.getNearestFindResult(point);
  }
  FindInPageStub.prototype.activateNearestFindResult = function(point) {
    return this.delegate_ && this.delegate_.activateNearestFindResult && this.delegate_.activateNearestFindResult(point);
  }
  FindInPageStub.prototype.findMatchRects = function(currentVersion) {
    return this.delegate_ && this.delegate_.findMatchRects && this.delegate_.findMatchRects(currentVersion);
  }

  FindInPageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFindInPage_StopFinding_Name:
      var params = reader.decodeStruct(FindInPage_StopFinding_Params);
      this.stopFinding(params.action);
      return true;
    case kFindInPage_ClearActiveFindMatch_Name:
      var params = reader.decodeStruct(FindInPage_ClearActiveFindMatch_Params);
      this.clearActiveFindMatch();
      return true;
    default:
      return false;
    }
  };

  FindInPageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFindInPage_GetNearestFindResult_Name:
      var params = reader.decodeStruct(FindInPage_GetNearestFindResult_Params);
      this.getNearestFindResult(params.point).then(function(response) {
        var responseParams =
            new FindInPage_GetNearestFindResult_ResponseParams();
        responseParams.distance = response.distance;
        var builder = new codec.MessageV1Builder(
            kFindInPage_GetNearestFindResult_Name,
            codec.align(FindInPage_GetNearestFindResult_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FindInPage_GetNearestFindResult_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFindInPage_ActivateNearestFindResult_Name:
      var params = reader.decodeStruct(FindInPage_ActivateNearestFindResult_Params);
      this.activateNearestFindResult(params.point).then(function(response) {
        var responseParams =
            new FindInPage_ActivateNearestFindResult_ResponseParams();
        responseParams.activeMatchRect = response.activeMatchRect;
        responseParams.numberOfMatches = response.numberOfMatches;
        responseParams.activeMatchOrdinal = response.activeMatchOrdinal;
        responseParams.finalUpdate = response.finalUpdate;
        var builder = new codec.MessageV1Builder(
            kFindInPage_ActivateNearestFindResult_Name,
            codec.align(FindInPage_ActivateNearestFindResult_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FindInPage_ActivateNearestFindResult_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFindInPage_FindMatchRects_Name:
      var params = reader.decodeStruct(FindInPage_FindMatchRects_Params);
      this.findMatchRects(params.currentVersion).then(function(response) {
        var responseParams =
            new FindInPage_FindMatchRects_ResponseParams();
        responseParams.version = response.version;
        responseParams.rects = response.rects;
        responseParams.activeMatchRect = response.activeMatchRect;
        var builder = new codec.MessageV1Builder(
            kFindInPage_FindMatchRects_Name,
            codec.align(FindInPage_FindMatchRects_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FindInPage_FindMatchRects_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFindInPageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFindInPage_StopFinding_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FindInPage_StopFinding_Params;
      break;
      case kFindInPage_ClearActiveFindMatch_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FindInPage_ClearActiveFindMatch_Params;
      break;
      case kFindInPage_GetNearestFindResult_Name:
        if (message.expectsResponse())
          paramsClass = FindInPage_GetNearestFindResult_Params;
      break;
      case kFindInPage_ActivateNearestFindResult_Name:
        if (message.expectsResponse())
          paramsClass = FindInPage_ActivateNearestFindResult_Params;
      break;
      case kFindInPage_FindMatchRects_Name:
        if (message.expectsResponse())
          paramsClass = FindInPage_FindMatchRects_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFindInPageResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFindInPage_GetNearestFindResult_Name:
        if (message.isResponse())
          paramsClass = FindInPage_GetNearestFindResult_ResponseParams;
        break;
      case kFindInPage_ActivateNearestFindResult_Name:
        if (message.isResponse())
          paramsClass = FindInPage_ActivateNearestFindResult_ResponseParams;
        break;
      case kFindInPage_FindMatchRects_Name:
        if (message.isResponse())
          paramsClass = FindInPage_FindMatchRects_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FindInPage = {
    name: 'blink.mojom.FindInPage',
    kVersion: 0,
    ptrClass: FindInPagePtr,
    proxyClass: FindInPageProxy,
    stubClass: FindInPageStub,
    validateRequest: validateFindInPageRequest,
    validateResponse: validateFindInPageResponse,
    mojomId: 'third_party/blink/public/mojom/frame/find_in_page.mojom',
    fuzzMethods: {
      stopFinding: {
        params: FindInPage_StopFinding_Params,
      },
      clearActiveFindMatch: {
        params: FindInPage_ClearActiveFindMatch_Params,
      },
      getNearestFindResult: {
        params: FindInPage_GetNearestFindResult_Params,
      },
      activateNearestFindResult: {
        params: FindInPage_ActivateNearestFindResult_Params,
      },
      findMatchRects: {
        params: FindInPage_FindMatchRects_Params,
      },
    },
  };
  FindInPageStub.prototype.validator = validateFindInPageRequest;
  FindInPageProxy.prototype.validator = validateFindInPageResponse;
  exports.StopFindAction = StopFindAction;
  exports.FindInPage = FindInPage;
  exports.FindInPagePtr = FindInPagePtr;
  exports.FindInPageAssociatedPtr = FindInPageAssociatedPtr;
})();