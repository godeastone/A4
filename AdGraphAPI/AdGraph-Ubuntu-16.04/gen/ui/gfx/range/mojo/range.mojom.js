// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/range/mojo/range.mojom';
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
  function RangeF(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RangeF.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
  };
  RangeF.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RangeF.generate = function(generator_) {
    var generated = new RangeF;
    generated.start = generator_.generateFloat();
    generated.end = generator_.generateFloat();
    return generated;
  };

  RangeF.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.start = mutator_.mutateFloat(this.start);
    }
    if (mutator_.chooseMutateField()) {
      this.end = mutator_.mutateFloat(this.end);
    }
    return this;
  };
  RangeF.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RangeF.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RangeF.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RangeF.validate = function(messageValidator, offset) {
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

  RangeF.encodedSize = codec.kStructHeaderSize + 8;

  RangeF.decode = function(decoder) {
    var packed;
    var val = new RangeF();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Float);
    val.end = decoder.decodeStruct(codec.Float);
    return val;
  };

  RangeF.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RangeF.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.start);
    encoder.encodeStruct(codec.Float, val.end);
  };
  exports.Range = Range;
  exports.RangeF = RangeF;
})();