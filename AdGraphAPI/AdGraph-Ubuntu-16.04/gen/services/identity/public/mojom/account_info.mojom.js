// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/identity/public/mojom/account_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('identity.mojom');



  function AccountInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AccountInfo.prototype.initDefaults_ = function() {
    this.accountId = null;
    this.gaia = null;
    this.email = null;
    this.fullName = null;
    this.givenName = null;
    this.hostedDomain = null;
    this.locale = null;
    this.pictureUrl = null;
    this.isChildAccount = false;
  };
  AccountInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AccountInfo.generate = function(generator_) {
    var generated = new AccountInfo;
    generated.accountId = generator_.generateString(false);
    generated.gaia = generator_.generateString(false);
    generated.email = generator_.generateString(false);
    generated.fullName = generator_.generateString(false);
    generated.givenName = generator_.generateString(false);
    generated.hostedDomain = generator_.generateString(false);
    generated.locale = generator_.generateString(false);
    generated.pictureUrl = generator_.generateString(false);
    generated.isChildAccount = generator_.generateBool();
    return generated;
  };

  AccountInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accountId = mutator_.mutateString(this.accountId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.gaia = mutator_.mutateString(this.gaia, false);
    }
    if (mutator_.chooseMutateField()) {
      this.email = mutator_.mutateString(this.email, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fullName = mutator_.mutateString(this.fullName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.givenName = mutator_.mutateString(this.givenName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hostedDomain = mutator_.mutateString(this.hostedDomain, false);
    }
    if (mutator_.chooseMutateField()) {
      this.locale = mutator_.mutateString(this.locale, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pictureUrl = mutator_.mutateString(this.pictureUrl, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isChildAccount = mutator_.mutateBool(this.isChildAccount);
    }
    return this;
  };
  AccountInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AccountInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AccountInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AccountInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 80}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.accountId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.gaia
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.email
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.fullName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.givenName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.hostedDomain
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.locale
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AccountInfo.pictureUrl
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AccountInfo.encodedSize = codec.kStructHeaderSize + 72;

  AccountInfo.decode = function(decoder) {
    var packed;
    var val = new AccountInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accountId = decoder.decodeStruct(codec.String);
    val.gaia = decoder.decodeStruct(codec.String);
    val.email = decoder.decodeStruct(codec.String);
    val.fullName = decoder.decodeStruct(codec.String);
    val.givenName = decoder.decodeStruct(codec.String);
    val.hostedDomain = decoder.decodeStruct(codec.String);
    val.locale = decoder.decodeStruct(codec.String);
    val.pictureUrl = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.isChildAccount = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AccountInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AccountInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.accountId);
    encoder.encodeStruct(codec.String, val.gaia);
    encoder.encodeStruct(codec.String, val.email);
    encoder.encodeStruct(codec.String, val.fullName);
    encoder.encodeStruct(codec.String, val.givenName);
    encoder.encodeStruct(codec.String, val.hostedDomain);
    encoder.encodeStruct(codec.String, val.locale);
    encoder.encodeStruct(codec.String, val.pictureUrl);
    packed = 0;
    packed |= (val.isChildAccount & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.AccountInfo = AccountInfo;
})();