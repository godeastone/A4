// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/mailbox.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gpu.mojom');



  function Mailbox(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Mailbox.prototype.initDefaults_ = function() {
    this.name = null;
  };
  Mailbox.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Mailbox.generate = function(generator_) {
    var generated = new Mailbox;
    generated.name = generator_.generateArray(function() {
      return generator_.generateInt8();
    });
    return generated;
  };

  Mailbox.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateArray(this.name, function(val) {
        return mutator_.mutateInt8(val);
      });
    }
    return this;
  };
  Mailbox.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Mailbox.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Mailbox.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Mailbox.validate = function(messageValidator, offset) {
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


    // validate Mailbox.name
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Int8, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Mailbox.encodedSize = codec.kStructHeaderSize + 8;

  Mailbox.decode = function(decoder) {
    var packed;
    var val = new Mailbox();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeArrayPointer(codec.Int8);
    return val;
  };

  Mailbox.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Mailbox.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int8, val.name);
  };
  exports.Mailbox = Mailbox;
})();