// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/digitally_signed.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');


  var HashAlgorithm = {};
  HashAlgorithm.HASH_ALGO_NONE = 0;
  HashAlgorithm.HASH_ALGO_MD5 = 1;
  HashAlgorithm.HASH_ALGO_SHA1 = 2;
  HashAlgorithm.HASH_ALGO_SHA224 = 3;
  HashAlgorithm.HASH_ALGO_SHA256 = 4;
  HashAlgorithm.HASH_ALGO_SHA384 = 5;
  HashAlgorithm.HASH_ALGO_SHA512 = 6;

  HashAlgorithm.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  HashAlgorithm.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SignatureAlgorithm = {};
  SignatureAlgorithm.SIG_ALGO_ANONYMOUS = 0;
  SignatureAlgorithm.SIG_ALGO_RSA = 1;
  SignatureAlgorithm.SIG_ALGO_DSA = 2;
  SignatureAlgorithm.SIG_ALGO_ECDSA = 3;

  SignatureAlgorithm.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  SignatureAlgorithm.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function DigitallySigned(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DigitallySigned.prototype.initDefaults_ = function() {
    this.hashAlgorithm = 0;
    this.signatureAlgorithm = 0;
    this.signature = null;
  };
  DigitallySigned.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DigitallySigned.generate = function(generator_) {
    var generated = new DigitallySigned;
    generated.hashAlgorithm = generator_.generateEnum(0, 6);
    generated.signatureAlgorithm = generator_.generateEnum(0, 3);
    generated.signature = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  DigitallySigned.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hashAlgorithm = mutator_.mutateEnum(this.hashAlgorithm, 0, 6);
    }
    if (mutator_.chooseMutateField()) {
      this.signatureAlgorithm = mutator_.mutateEnum(this.signatureAlgorithm, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.signature = mutator_.mutateArray(this.signature, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  DigitallySigned.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DigitallySigned.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DigitallySigned.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DigitallySigned.validate = function(messageValidator, offset) {
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


    // validate DigitallySigned.hashAlgorithm
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, HashAlgorithm);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DigitallySigned.signatureAlgorithm
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SignatureAlgorithm);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DigitallySigned.signature
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DigitallySigned.encodedSize = codec.kStructHeaderSize + 16;

  DigitallySigned.decode = function(decoder) {
    var packed;
    var val = new DigitallySigned();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hashAlgorithm = decoder.decodeStruct(codec.Int32);
    val.signatureAlgorithm = decoder.decodeStruct(codec.Int32);
    val.signature = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  DigitallySigned.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DigitallySigned.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hashAlgorithm);
    encoder.encodeStruct(codec.Int32, val.signatureAlgorithm);
    encoder.encodeArrayPointer(codec.Uint8, val.signature);
  };
  exports.HashAlgorithm = HashAlgorithm;
  exports.SignatureAlgorithm = SignatureAlgorithm;
  exports.DigitallySigned = DigitallySigned;
})();