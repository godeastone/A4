// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/identity/public/mojom/identity_manager.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var account$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/account.mojom', 'account.mojom.js');
  }
  var account_info$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/account_info.mojom', 'account_info.mojom.js');
  }
  var account_state$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/account_state.mojom', 'account_state.mojom.js');
  }
  var google_service_auth_error$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/google_service_auth_error.mojom', 'google_service_auth_error.mojom.js');
  }
  var scope_set$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/scope_set.mojom', 'scope_set.mojom.js');
  }



  function IdentityManager_GetPrimaryAccountInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetPrimaryAccountInfo_Params.prototype.initDefaults_ = function() {
  };
  IdentityManager_GetPrimaryAccountInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetPrimaryAccountInfo_Params.generate = function(generator_) {
    var generated = new IdentityManager_GetPrimaryAccountInfo_Params;
    return generated;
  };

  IdentityManager_GetPrimaryAccountInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  IdentityManager_GetPrimaryAccountInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetPrimaryAccountInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetPrimaryAccountInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetPrimaryAccountInfo_Params.validate = function(messageValidator, offset) {
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

  IdentityManager_GetPrimaryAccountInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  IdentityManager_GetPrimaryAccountInfo_Params.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetPrimaryAccountInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  IdentityManager_GetPrimaryAccountInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetPrimaryAccountInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function IdentityManager_GetPrimaryAccountInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetPrimaryAccountInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.accountInfo = null;
    this.accountState = null;
  };
  IdentityManager_GetPrimaryAccountInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetPrimaryAccountInfo_ResponseParams.generate = function(generator_) {
    var generated = new IdentityManager_GetPrimaryAccountInfo_ResponseParams;
    generated.accountInfo = generator_.generateStruct(identity.mojom.AccountInfo, true);
    generated.accountState = generator_.generateStruct(identity.mojom.AccountState, false);
    return generated;
  };

  IdentityManager_GetPrimaryAccountInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accountInfo = mutator_.mutateStruct(identity.mojom.AccountInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.accountState = mutator_.mutateStruct(identity.mojom.AccountState, false);
    }
    return this;
  };
  IdentityManager_GetPrimaryAccountInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetPrimaryAccountInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetPrimaryAccountInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetPrimaryAccountInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetPrimaryAccountInfo_ResponseParams.accountInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, account_info$.AccountInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetPrimaryAccountInfo_ResponseParams.accountState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, account_state$.AccountState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetPrimaryAccountInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  IdentityManager_GetPrimaryAccountInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetPrimaryAccountInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accountInfo = decoder.decodeStructPointer(account_info$.AccountInfo);
    val.accountState = decoder.decodeStructPointer(account_state$.AccountState);
    return val;
  };

  IdentityManager_GetPrimaryAccountInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetPrimaryAccountInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(account_info$.AccountInfo, val.accountInfo);
    encoder.encodeStructPointer(account_state$.AccountState, val.accountState);
  };
  function IdentityManager_GetPrimaryAccountWhenAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetPrimaryAccountWhenAvailable_Params.prototype.initDefaults_ = function() {
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_Params.generate = function(generator_) {
    var generated = new IdentityManager_GetPrimaryAccountWhenAvailable_Params;
    return generated;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_Params.validate = function(messageValidator, offset) {
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

  IdentityManager_GetPrimaryAccountWhenAvailable_Params.encodedSize = codec.kStructHeaderSize + 0;

  IdentityManager_GetPrimaryAccountWhenAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetPrimaryAccountWhenAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetPrimaryAccountWhenAvailable_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.prototype.initDefaults_ = function() {
    this.accountInfo = null;
    this.accountState = null;
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.generate = function(generator_) {
    var generated = new IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams;
    generated.accountInfo = generator_.generateStruct(identity.mojom.AccountInfo, false);
    generated.accountState = generator_.generateStruct(identity.mojom.AccountState, false);
    return generated;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accountInfo = mutator_.mutateStruct(identity.mojom.AccountInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.accountState = mutator_.mutateStruct(identity.mojom.AccountState, false);
    }
    return this;
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.accountInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, account_info$.AccountInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.accountState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, account_state$.AccountState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accountInfo = decoder.decodeStructPointer(account_info$.AccountInfo);
    val.accountState = decoder.decodeStructPointer(account_state$.AccountState);
    return val;
  };

  IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(account_info$.AccountInfo, val.accountInfo);
    encoder.encodeStructPointer(account_state$.AccountState, val.accountState);
  };
  function IdentityManager_GetAccountInfoFromGaiaId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetAccountInfoFromGaiaId_Params.prototype.initDefaults_ = function() {
    this.gaiaId = null;
  };
  IdentityManager_GetAccountInfoFromGaiaId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetAccountInfoFromGaiaId_Params.generate = function(generator_) {
    var generated = new IdentityManager_GetAccountInfoFromGaiaId_Params;
    generated.gaiaId = generator_.generateString(false);
    return generated;
  };

  IdentityManager_GetAccountInfoFromGaiaId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.gaiaId = mutator_.mutateString(this.gaiaId, false);
    }
    return this;
  };
  IdentityManager_GetAccountInfoFromGaiaId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetAccountInfoFromGaiaId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetAccountInfoFromGaiaId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetAccountInfoFromGaiaId_Params.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetAccountInfoFromGaiaId_Params.gaiaId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetAccountInfoFromGaiaId_Params.encodedSize = codec.kStructHeaderSize + 8;

  IdentityManager_GetAccountInfoFromGaiaId_Params.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetAccountInfoFromGaiaId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gaiaId = decoder.decodeStruct(codec.String);
    return val;
  };

  IdentityManager_GetAccountInfoFromGaiaId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetAccountInfoFromGaiaId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.gaiaId);
  };
  function IdentityManager_GetAccountInfoFromGaiaId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.prototype.initDefaults_ = function() {
    this.accountInfo = null;
    this.accountState = null;
  };
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.generate = function(generator_) {
    var generated = new IdentityManager_GetAccountInfoFromGaiaId_ResponseParams;
    generated.accountInfo = generator_.generateStruct(identity.mojom.AccountInfo, true);
    generated.accountState = generator_.generateStruct(identity.mojom.AccountState, false);
    return generated;
  };

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accountInfo = mutator_.mutateStruct(identity.mojom.AccountInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.accountState = mutator_.mutateStruct(identity.mojom.AccountState, false);
    }
    return this;
  };
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.accountInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, account_info$.AccountInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.accountState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, account_state$.AccountState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetAccountInfoFromGaiaId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accountInfo = decoder.decodeStructPointer(account_info$.AccountInfo);
    val.accountState = decoder.decodeStructPointer(account_state$.AccountState);
    return val;
  };

  IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(account_info$.AccountInfo, val.accountInfo);
    encoder.encodeStructPointer(account_state$.AccountState, val.accountState);
  };
  function IdentityManager_GetAccounts_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetAccounts_Params.prototype.initDefaults_ = function() {
  };
  IdentityManager_GetAccounts_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetAccounts_Params.generate = function(generator_) {
    var generated = new IdentityManager_GetAccounts_Params;
    return generated;
  };

  IdentityManager_GetAccounts_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  IdentityManager_GetAccounts_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetAccounts_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetAccounts_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetAccounts_Params.validate = function(messageValidator, offset) {
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

  IdentityManager_GetAccounts_Params.encodedSize = codec.kStructHeaderSize + 0;

  IdentityManager_GetAccounts_Params.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetAccounts_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  IdentityManager_GetAccounts_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetAccounts_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function IdentityManager_GetAccounts_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetAccounts_ResponseParams.prototype.initDefaults_ = function() {
    this.accounts = null;
  };
  IdentityManager_GetAccounts_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetAccounts_ResponseParams.generate = function(generator_) {
    var generated = new IdentityManager_GetAccounts_ResponseParams;
    generated.accounts = generator_.generateArray(function() {
      return generator_.generateStruct(identity.mojom.Account, false);
    });
    return generated;
  };

  IdentityManager_GetAccounts_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accounts = mutator_.mutateArray(this.accounts, function(val) {
        return mutator_.mutateStruct(identity.mojom.Account, false);
      });
    }
    return this;
  };
  IdentityManager_GetAccounts_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetAccounts_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetAccounts_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetAccounts_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetAccounts_ResponseParams.accounts
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(account$.Account), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetAccounts_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  IdentityManager_GetAccounts_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetAccounts_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accounts = decoder.decodeArrayPointer(new codec.PointerTo(account$.Account));
    return val;
  };

  IdentityManager_GetAccounts_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetAccounts_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(account$.Account), val.accounts);
  };
  function IdentityManager_GetAccessToken_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetAccessToken_Params.prototype.initDefaults_ = function() {
    this.accountId = null;
    this.scopes = null;
    this.consumerId = null;
  };
  IdentityManager_GetAccessToken_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetAccessToken_Params.generate = function(generator_) {
    var generated = new IdentityManager_GetAccessToken_Params;
    generated.accountId = generator_.generateString(false);
    generated.scopes = generator_.generateStruct(identity.mojom.ScopeSet, false);
    generated.consumerId = generator_.generateString(false);
    return generated;
  };

  IdentityManager_GetAccessToken_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accountId = mutator_.mutateString(this.accountId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scopes = mutator_.mutateStruct(identity.mojom.ScopeSet, false);
    }
    if (mutator_.chooseMutateField()) {
      this.consumerId = mutator_.mutateString(this.consumerId, false);
    }
    return this;
  };
  IdentityManager_GetAccessToken_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetAccessToken_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetAccessToken_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetAccessToken_Params.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetAccessToken_Params.accountId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetAccessToken_Params.scopes
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, scope_set$.ScopeSet, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetAccessToken_Params.consumerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetAccessToken_Params.encodedSize = codec.kStructHeaderSize + 24;

  IdentityManager_GetAccessToken_Params.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetAccessToken_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accountId = decoder.decodeStruct(codec.String);
    val.scopes = decoder.decodeStructPointer(scope_set$.ScopeSet);
    val.consumerId = decoder.decodeStruct(codec.String);
    return val;
  };

  IdentityManager_GetAccessToken_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetAccessToken_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.accountId);
    encoder.encodeStructPointer(scope_set$.ScopeSet, val.scopes);
    encoder.encodeStruct(codec.String, val.consumerId);
  };
  function IdentityManager_GetAccessToken_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IdentityManager_GetAccessToken_ResponseParams.prototype.initDefaults_ = function() {
    this.token = null;
    this.expirationTime = null;
    this.error = null;
  };
  IdentityManager_GetAccessToken_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IdentityManager_GetAccessToken_ResponseParams.generate = function(generator_) {
    var generated = new IdentityManager_GetAccessToken_ResponseParams;
    generated.token = generator_.generateString(true);
    generated.expirationTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.error = generator_.generateStruct(identity.mojom.GoogleServiceAuthError, false);
    return generated;
  };

  IdentityManager_GetAccessToken_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateString(this.token, true);
    }
    if (mutator_.chooseMutateField()) {
      this.expirationTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateStruct(identity.mojom.GoogleServiceAuthError, false);
    }
    return this;
  };
  IdentityManager_GetAccessToken_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IdentityManager_GetAccessToken_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IdentityManager_GetAccessToken_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IdentityManager_GetAccessToken_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate IdentityManager_GetAccessToken_ResponseParams.token
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetAccessToken_ResponseParams.expirationTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IdentityManager_GetAccessToken_ResponseParams.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, google_service_auth_error$.GoogleServiceAuthError, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IdentityManager_GetAccessToken_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  IdentityManager_GetAccessToken_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new IdentityManager_GetAccessToken_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStruct(codec.NullableString);
    val.expirationTime = decoder.decodeStructPointer(time$.Time);
    val.error = decoder.decodeStructPointer(google_service_auth_error$.GoogleServiceAuthError);
    return val;
  };

  IdentityManager_GetAccessToken_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IdentityManager_GetAccessToken_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.token);
    encoder.encodeStructPointer(time$.Time, val.expirationTime);
    encoder.encodeStructPointer(google_service_auth_error$.GoogleServiceAuthError, val.error);
  };
  var kIdentityManager_GetPrimaryAccountInfo_Name = 1055857850;
  var kIdentityManager_GetPrimaryAccountWhenAvailable_Name = 809043706;
  var kIdentityManager_GetAccountInfoFromGaiaId_Name = 1569544951;
  var kIdentityManager_GetAccounts_Name = 1530225581;
  var kIdentityManager_GetAccessToken_Name = 2044115150;

  function IdentityManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(IdentityManager,
                                                   handleOrPtrInfo);
  }

  function IdentityManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        IdentityManager, associatedInterfacePtrInfo);
  }

  IdentityManagerAssociatedPtr.prototype =
      Object.create(IdentityManagerPtr.prototype);
  IdentityManagerAssociatedPtr.prototype.constructor =
      IdentityManagerAssociatedPtr;

  function IdentityManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  IdentityManagerPtr.prototype.getPrimaryAccountInfo = function() {
    return IdentityManagerProxy.prototype.getPrimaryAccountInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  IdentityManagerProxy.prototype.getPrimaryAccountInfo = function() {
    var params_ = new IdentityManager_GetPrimaryAccountInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kIdentityManager_GetPrimaryAccountInfo_Name,
          codec.align(IdentityManager_GetPrimaryAccountInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(IdentityManager_GetPrimaryAccountInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(IdentityManager_GetPrimaryAccountInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  IdentityManagerPtr.prototype.getPrimaryAccountWhenAvailable = function() {
    return IdentityManagerProxy.prototype.getPrimaryAccountWhenAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  IdentityManagerProxy.prototype.getPrimaryAccountWhenAvailable = function() {
    var params_ = new IdentityManager_GetPrimaryAccountWhenAvailable_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kIdentityManager_GetPrimaryAccountWhenAvailable_Name,
          codec.align(IdentityManager_GetPrimaryAccountWhenAvailable_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(IdentityManager_GetPrimaryAccountWhenAvailable_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  IdentityManagerPtr.prototype.getAccountInfoFromGaiaId = function() {
    return IdentityManagerProxy.prototype.getAccountInfoFromGaiaId
        .apply(this.ptr.getProxy(), arguments);
  };

  IdentityManagerProxy.prototype.getAccountInfoFromGaiaId = function(gaiaId) {
    var params_ = new IdentityManager_GetAccountInfoFromGaiaId_Params();
    params_.gaiaId = gaiaId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kIdentityManager_GetAccountInfoFromGaiaId_Name,
          codec.align(IdentityManager_GetAccountInfoFromGaiaId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(IdentityManager_GetAccountInfoFromGaiaId_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  IdentityManagerPtr.prototype.getAccounts = function() {
    return IdentityManagerProxy.prototype.getAccounts
        .apply(this.ptr.getProxy(), arguments);
  };

  IdentityManagerProxy.prototype.getAccounts = function() {
    var params_ = new IdentityManager_GetAccounts_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kIdentityManager_GetAccounts_Name,
          codec.align(IdentityManager_GetAccounts_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(IdentityManager_GetAccounts_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(IdentityManager_GetAccounts_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  IdentityManagerPtr.prototype.getAccessToken = function() {
    return IdentityManagerProxy.prototype.getAccessToken
        .apply(this.ptr.getProxy(), arguments);
  };

  IdentityManagerProxy.prototype.getAccessToken = function(accountId, scopes, consumerId) {
    var params_ = new IdentityManager_GetAccessToken_Params();
    params_.accountId = accountId;
    params_.scopes = scopes;
    params_.consumerId = consumerId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kIdentityManager_GetAccessToken_Name,
          codec.align(IdentityManager_GetAccessToken_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(IdentityManager_GetAccessToken_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(IdentityManager_GetAccessToken_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function IdentityManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  IdentityManagerStub.prototype.getPrimaryAccountInfo = function() {
    return this.delegate_ && this.delegate_.getPrimaryAccountInfo && this.delegate_.getPrimaryAccountInfo();
  }
  IdentityManagerStub.prototype.getPrimaryAccountWhenAvailable = function() {
    return this.delegate_ && this.delegate_.getPrimaryAccountWhenAvailable && this.delegate_.getPrimaryAccountWhenAvailable();
  }
  IdentityManagerStub.prototype.getAccountInfoFromGaiaId = function(gaiaId) {
    return this.delegate_ && this.delegate_.getAccountInfoFromGaiaId && this.delegate_.getAccountInfoFromGaiaId(gaiaId);
  }
  IdentityManagerStub.prototype.getAccounts = function() {
    return this.delegate_ && this.delegate_.getAccounts && this.delegate_.getAccounts();
  }
  IdentityManagerStub.prototype.getAccessToken = function(accountId, scopes, consumerId) {
    return this.delegate_ && this.delegate_.getAccessToken && this.delegate_.getAccessToken(accountId, scopes, consumerId);
  }

  IdentityManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  IdentityManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIdentityManager_GetPrimaryAccountInfo_Name:
      var params = reader.decodeStruct(IdentityManager_GetPrimaryAccountInfo_Params);
      this.getPrimaryAccountInfo().then(function(response) {
        var responseParams =
            new IdentityManager_GetPrimaryAccountInfo_ResponseParams();
        responseParams.accountInfo = response.accountInfo;
        responseParams.accountState = response.accountState;
        var builder = new codec.MessageV1Builder(
            kIdentityManager_GetPrimaryAccountInfo_Name,
            codec.align(IdentityManager_GetPrimaryAccountInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(IdentityManager_GetPrimaryAccountInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kIdentityManager_GetPrimaryAccountWhenAvailable_Name:
      var params = reader.decodeStruct(IdentityManager_GetPrimaryAccountWhenAvailable_Params);
      this.getPrimaryAccountWhenAvailable().then(function(response) {
        var responseParams =
            new IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams();
        responseParams.accountInfo = response.accountInfo;
        responseParams.accountState = response.accountState;
        var builder = new codec.MessageV1Builder(
            kIdentityManager_GetPrimaryAccountWhenAvailable_Name,
            codec.align(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kIdentityManager_GetAccountInfoFromGaiaId_Name:
      var params = reader.decodeStruct(IdentityManager_GetAccountInfoFromGaiaId_Params);
      this.getAccountInfoFromGaiaId(params.gaiaId).then(function(response) {
        var responseParams =
            new IdentityManager_GetAccountInfoFromGaiaId_ResponseParams();
        responseParams.accountInfo = response.accountInfo;
        responseParams.accountState = response.accountState;
        var builder = new codec.MessageV1Builder(
            kIdentityManager_GetAccountInfoFromGaiaId_Name,
            codec.align(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(IdentityManager_GetAccountInfoFromGaiaId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kIdentityManager_GetAccounts_Name:
      var params = reader.decodeStruct(IdentityManager_GetAccounts_Params);
      this.getAccounts().then(function(response) {
        var responseParams =
            new IdentityManager_GetAccounts_ResponseParams();
        responseParams.accounts = response.accounts;
        var builder = new codec.MessageV1Builder(
            kIdentityManager_GetAccounts_Name,
            codec.align(IdentityManager_GetAccounts_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(IdentityManager_GetAccounts_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kIdentityManager_GetAccessToken_Name:
      var params = reader.decodeStruct(IdentityManager_GetAccessToken_Params);
      this.getAccessToken(params.accountId, params.scopes, params.consumerId).then(function(response) {
        var responseParams =
            new IdentityManager_GetAccessToken_ResponseParams();
        responseParams.token = response.token;
        responseParams.expirationTime = response.expirationTime;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kIdentityManager_GetAccessToken_Name,
            codec.align(IdentityManager_GetAccessToken_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(IdentityManager_GetAccessToken_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateIdentityManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIdentityManager_GetPrimaryAccountInfo_Name:
        if (message.expectsResponse())
          paramsClass = IdentityManager_GetPrimaryAccountInfo_Params;
      break;
      case kIdentityManager_GetPrimaryAccountWhenAvailable_Name:
        if (message.expectsResponse())
          paramsClass = IdentityManager_GetPrimaryAccountWhenAvailable_Params;
      break;
      case kIdentityManager_GetAccountInfoFromGaiaId_Name:
        if (message.expectsResponse())
          paramsClass = IdentityManager_GetAccountInfoFromGaiaId_Params;
      break;
      case kIdentityManager_GetAccounts_Name:
        if (message.expectsResponse())
          paramsClass = IdentityManager_GetAccounts_Params;
      break;
      case kIdentityManager_GetAccessToken_Name:
        if (message.expectsResponse())
          paramsClass = IdentityManager_GetAccessToken_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIdentityManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kIdentityManager_GetPrimaryAccountInfo_Name:
        if (message.isResponse())
          paramsClass = IdentityManager_GetPrimaryAccountInfo_ResponseParams;
        break;
      case kIdentityManager_GetPrimaryAccountWhenAvailable_Name:
        if (message.isResponse())
          paramsClass = IdentityManager_GetPrimaryAccountWhenAvailable_ResponseParams;
        break;
      case kIdentityManager_GetAccountInfoFromGaiaId_Name:
        if (message.isResponse())
          paramsClass = IdentityManager_GetAccountInfoFromGaiaId_ResponseParams;
        break;
      case kIdentityManager_GetAccounts_Name:
        if (message.isResponse())
          paramsClass = IdentityManager_GetAccounts_ResponseParams;
        break;
      case kIdentityManager_GetAccessToken_Name:
        if (message.isResponse())
          paramsClass = IdentityManager_GetAccessToken_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var IdentityManager = {
    name: 'identity.mojom.IdentityManager',
    kVersion: 0,
    ptrClass: IdentityManagerPtr,
    proxyClass: IdentityManagerProxy,
    stubClass: IdentityManagerStub,
    validateRequest: validateIdentityManagerRequest,
    validateResponse: validateIdentityManagerResponse,
    mojomId: 'services/identity/public/mojom/identity_manager.mojom',
    fuzzMethods: {
      getPrimaryAccountInfo: {
        params: IdentityManager_GetPrimaryAccountInfo_Params,
      },
      getPrimaryAccountWhenAvailable: {
        params: IdentityManager_GetPrimaryAccountWhenAvailable_Params,
      },
      getAccountInfoFromGaiaId: {
        params: IdentityManager_GetAccountInfoFromGaiaId_Params,
      },
      getAccounts: {
        params: IdentityManager_GetAccounts_Params,
      },
      getAccessToken: {
        params: IdentityManager_GetAccessToken_Params,
      },
    },
  };
  IdentityManagerStub.prototype.validator = validateIdentityManagerRequest;
  IdentityManagerProxy.prototype.validator = validateIdentityManagerResponse;
  exports.IdentityManager = IdentityManager;
  exports.IdentityManagerPtr = IdentityManagerPtr;
  exports.IdentityManagerAssociatedPtr = IdentityManagerAssociatedPtr;
})();