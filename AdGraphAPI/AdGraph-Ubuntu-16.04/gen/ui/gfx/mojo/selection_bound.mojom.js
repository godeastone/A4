// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/selection_bound.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gfx.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../geometry/mojo/geometry.mojom.js');
  }


  var SelectionBoundType = {};
  SelectionBoundType.LEFT = 0;
  SelectionBoundType.RIGHT = SelectionBoundType.LEFT + 1;
  SelectionBoundType.CENTER = SelectionBoundType.RIGHT + 1;
  SelectionBoundType.EMPTY = SelectionBoundType.CENTER + 1;
  SelectionBoundType.LAST = SelectionBoundType.EMPTY;

  SelectionBoundType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  SelectionBoundType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SelectionBound(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SelectionBound.prototype.initDefaults_ = function() {
    this.type = 0;
    this.visible = false;
    this.edgeTop = null;
    this.edgeBottom = null;
  };
  SelectionBound.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SelectionBound.generate = function(generator_) {
    var generated = new SelectionBound;
    generated.type = generator_.generateEnum(0, 3);
    generated.edgeTop = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.edgeBottom = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.visible = generator_.generateBool();
    return generated;
  };

  SelectionBound.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.edgeTop = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.edgeBottom = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  SelectionBound.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SelectionBound.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SelectionBound.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SelectionBound.validate = function(messageValidator, offset) {
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


    // validate SelectionBound.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, SelectionBoundType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SelectionBound.edgeTop
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SelectionBound.edgeBottom
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  SelectionBound.encodedSize = codec.kStructHeaderSize + 24;

  SelectionBound.decode = function(decoder) {
    var packed;
    var val = new SelectionBound();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.edgeTop = decoder.decodeStructPointer(geometry$.PointF);
    val.edgeBottom = decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  SelectionBound.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SelectionBound.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.visible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.PointF, val.edgeTop);
    encoder.encodeStructPointer(geometry$.PointF, val.edgeBottom);
  };
  exports.SelectionBoundType = SelectionBoundType;
  exports.SelectionBound = SelectionBound;
})();