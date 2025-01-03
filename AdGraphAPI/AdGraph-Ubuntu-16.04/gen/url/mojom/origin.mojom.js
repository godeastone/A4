// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'url/mojom/origin.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('url.mojom');



  function Origin(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Origin.prototype.initDefaults_ = function() {
    this.scheme = null;
    this.host = null;
    this.port = 0;
    this.unique = false;
  };
  Origin.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Origin.generate = function(generator_) {
    var generated = new Origin;
    generated.scheme = generator_.generateString(false);
    generated.host = generator_.generateString(false);
    generated.port = generator_.generateUint16();
    generated.unique = generator_.generateBool();
    return generated;
  };

  Origin.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scheme = mutator_.mutateString(this.scheme, false);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateString(this.host, false);
    }
    if (mutator_.chooseMutateField()) {
      this.port = mutator_.mutateUint16(this.port);
    }
    if (mutator_.chooseMutateField()) {
      this.unique = mutator_.mutateBool(this.unique);
    }
    return this;
  };
  Origin.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Origin.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Origin.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Origin.validate = function(messageValidator, offset) {
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


    // validate Origin.scheme
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Origin.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  Origin.encodedSize = codec.kStructHeaderSize + 24;

  Origin.decode = function(decoder) {
    var packed;
    var val = new Origin();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scheme = decoder.decodeStruct(codec.String);
    val.host = decoder.decodeStruct(codec.String);
    val.port = decoder.decodeStruct(codec.Uint16);
    packed = decoder.readUint8();
    val.unique = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Origin.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Origin.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.scheme);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeStruct(codec.Uint16, val.port);
    packed = 0;
    packed |= (val.unique & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.Origin = Origin;
})();