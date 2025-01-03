// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/gfx.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('arc.mojom');



  function Rect(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Rect.prototype.initDefaults_ = function() {
    this.left = 0;
    this.top = 0;
    this.right = 0;
    this.bottom = 0;
  };
  Rect.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Rect.generate = function(generator_) {
    var generated = new Rect;
    generated.left = generator_.generateInt32();
    generated.top = generator_.generateInt32();
    generated.right = generator_.generateInt32();
    generated.bottom = generator_.generateInt32();
    return generated;
  };

  Rect.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.left = mutator_.mutateInt32(this.left);
    }
    if (mutator_.chooseMutateField()) {
      this.top = mutator_.mutateInt32(this.top);
    }
    if (mutator_.chooseMutateField()) {
      this.right = mutator_.mutateInt32(this.right);
    }
    if (mutator_.chooseMutateField()) {
      this.bottom = mutator_.mutateInt32(this.bottom);
    }
    return this;
  };
  Rect.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Rect.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Rect.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Rect.validate = function(messageValidator, offset) {
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

  Rect.encodedSize = codec.kStructHeaderSize + 16;

  Rect.decode = function(decoder) {
    var packed;
    var val = new Rect();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.left = decoder.decodeStruct(codec.Int32);
    val.top = decoder.decodeStruct(codec.Int32);
    val.right = decoder.decodeStruct(codec.Int32);
    val.bottom = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Rect.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Rect.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.left);
    encoder.encodeStruct(codec.Int32, val.top);
    encoder.encodeStruct(codec.Int32, val.right);
    encoder.encodeStruct(codec.Int32, val.bottom);
  };
  function Range(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Range.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
  };
  Range.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Range.generate = function(generator_) {
    var generated = new Range;
    generated.start = generator_.generateUint32();
    generated.end = generator_.generateUint32();
    return generated;
  };

  Range.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateUint32(this.start);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateUint32(this.end);
    }
    return this;
  };
  Range.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Range.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Range.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Range.validate = function(messageValidator, offset) {
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

  Range.encodedSize = codec.kStructHeaderSize + 8;

  Range.decode = function(decoder) {
    var packed;
    var val = new Range();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Uint32);
    val.end = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  Range.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Range.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.start);
    encoder.encodeStruct(codec.Uint32, val.end);
  };
  exports.Rect = Rect;
  exports.Range = Range;
})();