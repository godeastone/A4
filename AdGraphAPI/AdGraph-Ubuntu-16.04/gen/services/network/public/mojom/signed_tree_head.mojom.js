// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/signed_tree_head.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var digitally_signed$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/digitally_signed.mojom', 'digitally_signed.mojom.js');
  }


  var SignedTreeHeadVersion = {};
  SignedTreeHeadVersion.V1 = 0;

  SignedTreeHeadVersion.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  SignedTreeHeadVersion.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SignedTreeHead(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SignedTreeHead.prototype.initDefaults_ = function() {
    this.version = 0;
    this.timestamp = null;
    this.treeSize = 0;
    this.sha256RootHash = null;
    this.signature = null;
    this.logId = null;
  };
  SignedTreeHead.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SignedTreeHead.generate = function(generator_) {
    var generated = new SignedTreeHead;
    generated.version = generator_.generateEnum(0, 0);
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.treeSize = generator_.generateUint64();
    generated.sha256RootHash = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.signature = generator_.generateStruct(network.mojom.DigitallySigned, false);
    generated.logId = generator_.generateString(false);
    return generated;
  };

  SignedTreeHead.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateEnum(this.version, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.treeSize = mutator_.mutateUint64(this.treeSize);
    }
    if (mutator_.chooseMutateField()) {
      this.sha256RootHash = mutator_.mutateArray(this.sha256RootHash, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.signature = mutator_.mutateStruct(network.mojom.DigitallySigned, false);
    }
    if (mutator_.chooseMutateField()) {
      this.logId = mutator_.mutateString(this.logId, false);
    }
    return this;
  };
  SignedTreeHead.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SignedTreeHead.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SignedTreeHead.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SignedTreeHead.validate = function(messageValidator, offset) {
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


    // validate SignedTreeHead.version
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, SignedTreeHeadVersion);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SignedTreeHead.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate SignedTreeHead.sha256RootHash
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, false, [32], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SignedTreeHead.signature
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, digitally_signed$.DigitallySigned, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SignedTreeHead.logId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SignedTreeHead.encodedSize = codec.kStructHeaderSize + 48;

  SignedTreeHead.decode = function(decoder) {
    var packed;
    var val = new SignedTreeHead();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.timestamp = decoder.decodeStructPointer(time$.Time);
    val.treeSize = decoder.decodeStruct(codec.Uint64);
    val.sha256RootHash = decoder.decodeArrayPointer(codec.Uint8);
    val.signature = decoder.decodeStructPointer(digitally_signed$.DigitallySigned);
    val.logId = decoder.decodeStruct(codec.String);
    return val;
  };

  SignedTreeHead.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SignedTreeHead.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.timestamp);
    encoder.encodeStruct(codec.Uint64, val.treeSize);
    encoder.encodeArrayPointer(codec.Uint8, val.sha256RootHash);
    encoder.encodeStructPointer(digitally_signed$.DigitallySigned, val.signature);
    encoder.encodeStruct(codec.String, val.logId);
  };
  exports.SignedTreeHeadVersion = SignedTreeHeadVersion;
  exports.SignedTreeHead = SignedTreeHead;
})();