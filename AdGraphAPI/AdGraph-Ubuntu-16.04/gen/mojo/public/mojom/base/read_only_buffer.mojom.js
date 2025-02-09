// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/read_only_buffer.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojoBase.mojom');



  function ReadOnlyBuffer(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReadOnlyBuffer.prototype.initDefaults_ = function() {
    this.buffer = null;
  };
  ReadOnlyBuffer.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ReadOnlyBuffer.generate = function(generator_) {
    var generated = new ReadOnlyBuffer;
    generated.buffer = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  ReadOnlyBuffer.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateArray(this.buffer, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  ReadOnlyBuffer.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ReadOnlyBuffer.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ReadOnlyBuffer.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ReadOnlyBuffer.validate = function(messageValidator, offset) {
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


    // validate ReadOnlyBuffer.buffer
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ReadOnlyBuffer.encodedSize = codec.kStructHeaderSize + 8;

  ReadOnlyBuffer.decode = function(decoder) {
    var packed;
    var val = new ReadOnlyBuffer();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ReadOnlyBuffer.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReadOnlyBuffer.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.buffer);
  };
  exports.ReadOnlyBuffer = ReadOnlyBuffer;
})();