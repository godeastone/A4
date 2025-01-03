// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/webauth/authenticator.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('webauth.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var AuthenticatorStatus = {};
  AuthenticatorStatus.SUCCESS = 0;
  AuthenticatorStatus.PENDING_REQUEST = AuthenticatorStatus.SUCCESS + 1;
  AuthenticatorStatus.NOT_ALLOWED_ERROR = AuthenticatorStatus.PENDING_REQUEST + 1;
  AuthenticatorStatus.AUTHENTICATOR_CRITERIA_UNSUPPORTED = AuthenticatorStatus.NOT_ALLOWED_ERROR + 1;
  AuthenticatorStatus.ALGORITHM_UNSUPPORTED = AuthenticatorStatus.AUTHENTICATOR_CRITERIA_UNSUPPORTED + 1;
  AuthenticatorStatus.EMPTY_ALLOW_CREDENTIALS = AuthenticatorStatus.ALGORITHM_UNSUPPORTED + 1;
  AuthenticatorStatus.USER_VERIFICATION_UNSUPPORTED = AuthenticatorStatus.EMPTY_ALLOW_CREDENTIALS + 1;
  AuthenticatorStatus.INVALID_DOMAIN = AuthenticatorStatus.USER_VERIFICATION_UNSUPPORTED + 1;
  AuthenticatorStatus.CREDENTIAL_EXCLUDED = AuthenticatorStatus.INVALID_DOMAIN + 1;
  AuthenticatorStatus.CREDENTIAL_NOT_RECOGNIZED = AuthenticatorStatus.CREDENTIAL_EXCLUDED + 1;
  AuthenticatorStatus.NOT_IMPLEMENTED = AuthenticatorStatus.CREDENTIAL_NOT_RECOGNIZED + 1;
  AuthenticatorStatus.NOT_FOCUSED = AuthenticatorStatus.NOT_IMPLEMENTED + 1;
  AuthenticatorStatus.UNKNOWN_ERROR = AuthenticatorStatus.NOT_FOCUSED + 1;

  AuthenticatorStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      return true;
    }
    return false;
  };

  AuthenticatorStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var UserVerificationRequirement = {};
  UserVerificationRequirement.PREFERRED = 0;
  UserVerificationRequirement.REQUIRED = UserVerificationRequirement.PREFERRED + 1;
  UserVerificationRequirement.DISCOURAGED = UserVerificationRequirement.REQUIRED + 1;

  UserVerificationRequirement.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  UserVerificationRequirement.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AttestationConveyancePreference = {};
  AttestationConveyancePreference.NONE = 0;
  AttestationConveyancePreference.INDIRECT = AttestationConveyancePreference.NONE + 1;
  AttestationConveyancePreference.DIRECT = AttestationConveyancePreference.INDIRECT + 1;

  AttestationConveyancePreference.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  AttestationConveyancePreference.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AuthenticatorAttachment = {};
  AuthenticatorAttachment.NO_PREFERENCE = 0;
  AuthenticatorAttachment.PLATFORM = AuthenticatorAttachment.NO_PREFERENCE + 1;
  AuthenticatorAttachment.CROSS_PLATFORM = AuthenticatorAttachment.PLATFORM + 1;

  AuthenticatorAttachment.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  AuthenticatorAttachment.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PublicKeyCredentialType = {};
  PublicKeyCredentialType.PUBLIC_KEY = 0;

  PublicKeyCredentialType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  PublicKeyCredentialType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AuthenticatorTransport = {};
  AuthenticatorTransport.USB = 0;
  AuthenticatorTransport.NFC = AuthenticatorTransport.USB + 1;
  AuthenticatorTransport.BLE = AuthenticatorTransport.NFC + 1;

  AuthenticatorTransport.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  AuthenticatorTransport.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CommonCredentialInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CommonCredentialInfo.prototype.initDefaults_ = function() {
    this.id = null;
    this.rawId = null;
    this.clientDataJson = null;
  };
  CommonCredentialInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CommonCredentialInfo.generate = function(generator_) {
    var generated = new CommonCredentialInfo;
    generated.id = generator_.generateString(false);
    generated.rawId = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.clientDataJson = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  CommonCredentialInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rawId = mutator_.mutateArray(this.rawId, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.clientDataJson = mutator_.mutateArray(this.clientDataJson, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  CommonCredentialInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CommonCredentialInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CommonCredentialInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CommonCredentialInfo.validate = function(messageValidator, offset) {
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


    // validate CommonCredentialInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CommonCredentialInfo.rawId
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CommonCredentialInfo.clientDataJson
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CommonCredentialInfo.encodedSize = codec.kStructHeaderSize + 24;

  CommonCredentialInfo.decode = function(decoder) {
    var packed;
    var val = new CommonCredentialInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.rawId = decoder.decodeArrayPointer(codec.Uint8);
    val.clientDataJson = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  CommonCredentialInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CommonCredentialInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeArrayPointer(codec.Uint8, val.rawId);
    encoder.encodeArrayPointer(codec.Uint8, val.clientDataJson);
  };
  function MakeCredentialAuthenticatorResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MakeCredentialAuthenticatorResponse.prototype.initDefaults_ = function() {
    this.info = null;
    this.attestationObject = null;
  };
  MakeCredentialAuthenticatorResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MakeCredentialAuthenticatorResponse.generate = function(generator_) {
    var generated = new MakeCredentialAuthenticatorResponse;
    generated.info = generator_.generateStruct(webauth.mojom.CommonCredentialInfo, false);
    generated.attestationObject = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  MakeCredentialAuthenticatorResponse.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(webauth.mojom.CommonCredentialInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.attestationObject = mutator_.mutateArray(this.attestationObject, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  MakeCredentialAuthenticatorResponse.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MakeCredentialAuthenticatorResponse.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MakeCredentialAuthenticatorResponse.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MakeCredentialAuthenticatorResponse.validate = function(messageValidator, offset) {
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


    // validate MakeCredentialAuthenticatorResponse.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CommonCredentialInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MakeCredentialAuthenticatorResponse.attestationObject
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MakeCredentialAuthenticatorResponse.encodedSize = codec.kStructHeaderSize + 16;

  MakeCredentialAuthenticatorResponse.decode = function(decoder) {
    var packed;
    var val = new MakeCredentialAuthenticatorResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(CommonCredentialInfo);
    val.attestationObject = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  MakeCredentialAuthenticatorResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MakeCredentialAuthenticatorResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CommonCredentialInfo, val.info);
    encoder.encodeArrayPointer(codec.Uint8, val.attestationObject);
  };
  function GetAssertionAuthenticatorResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GetAssertionAuthenticatorResponse.prototype.initDefaults_ = function() {
    this.info = null;
    this.authenticatorData = null;
    this.signature = null;
    this.userHandle = null;
    this.echoAppidExtension = false;
  };
  GetAssertionAuthenticatorResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GetAssertionAuthenticatorResponse.generate = function(generator_) {
    var generated = new GetAssertionAuthenticatorResponse;
    generated.info = generator_.generateStruct(webauth.mojom.CommonCredentialInfo, false);
    generated.authenticatorData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.signature = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.userHandle = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.echoAppidExtension = generator_.generateBool();
    return generated;
  };

  GetAssertionAuthenticatorResponse.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(webauth.mojom.CommonCredentialInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.authenticatorData = mutator_.mutateArray(this.authenticatorData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.signature = mutator_.mutateArray(this.signature, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.userHandle = mutator_.mutateArray(this.userHandle, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.echoAppidExtension = mutator_.mutateBool(this.echoAppidExtension);
    }
    return this;
  };
  GetAssertionAuthenticatorResponse.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GetAssertionAuthenticatorResponse.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GetAssertionAuthenticatorResponse.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GetAssertionAuthenticatorResponse.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GetAssertionAuthenticatorResponse.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CommonCredentialInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GetAssertionAuthenticatorResponse.authenticatorData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GetAssertionAuthenticatorResponse.signature
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GetAssertionAuthenticatorResponse.userHandle
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  GetAssertionAuthenticatorResponse.encodedSize = codec.kStructHeaderSize + 40;

  GetAssertionAuthenticatorResponse.decode = function(decoder) {
    var packed;
    var val = new GetAssertionAuthenticatorResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(CommonCredentialInfo);
    val.authenticatorData = decoder.decodeArrayPointer(codec.Uint8);
    val.signature = decoder.decodeArrayPointer(codec.Uint8);
    val.userHandle = decoder.decodeArrayPointer(codec.Uint8);
    packed = decoder.readUint8();
    val.echoAppidExtension = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GetAssertionAuthenticatorResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GetAssertionAuthenticatorResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CommonCredentialInfo, val.info);
    encoder.encodeArrayPointer(codec.Uint8, val.authenticatorData);
    encoder.encodeArrayPointer(codec.Uint8, val.signature);
    encoder.encodeArrayPointer(codec.Uint8, val.userHandle);
    packed = 0;
    packed |= (val.echoAppidExtension & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PublicKeyCredentialRpEntity(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicKeyCredentialRpEntity.prototype.initDefaults_ = function() {
    this.id = null;
    this.name = null;
    this.icon = null;
  };
  PublicKeyCredentialRpEntity.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicKeyCredentialRpEntity.generate = function(generator_) {
    var generated = new PublicKeyCredentialRpEntity;
    generated.id = generator_.generateString(false);
    generated.name = generator_.generateString(false);
    generated.icon = generator_.generateStruct(url.mojom.Url, true);
    return generated;
  };

  PublicKeyCredentialRpEntity.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.icon = mutator_.mutateStruct(url.mojom.Url, true);
    }
    return this;
  };
  PublicKeyCredentialRpEntity.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PublicKeyCredentialRpEntity.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicKeyCredentialRpEntity.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PublicKeyCredentialRpEntity.validate = function(messageValidator, offset) {
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


    // validate PublicKeyCredentialRpEntity.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRpEntity.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRpEntity.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PublicKeyCredentialRpEntity.encodedSize = codec.kStructHeaderSize + 24;

  PublicKeyCredentialRpEntity.decode = function(decoder) {
    var packed;
    var val = new PublicKeyCredentialRpEntity();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    val.name = decoder.decodeStruct(codec.String);
    val.icon = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PublicKeyCredentialRpEntity.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicKeyCredentialRpEntity.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStructPointer(url$.Url, val.icon);
  };
  function PublicKeyCredentialUserEntity(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicKeyCredentialUserEntity.prototype.initDefaults_ = function() {
    this.id = null;
    this.name = null;
    this.icon = null;
    this.displayName = null;
  };
  PublicKeyCredentialUserEntity.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicKeyCredentialUserEntity.generate = function(generator_) {
    var generated = new PublicKeyCredentialUserEntity;
    generated.id = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.name = generator_.generateString(false);
    generated.icon = generator_.generateStruct(url.mojom.Url, true);
    generated.displayName = generator_.generateString(false);
    return generated;
  };

  PublicKeyCredentialUserEntity.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateArray(this.id, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.icon = mutator_.mutateStruct(url.mojom.Url, true);
    }
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateString(this.displayName, false);
    }
    return this;
  };
  PublicKeyCredentialUserEntity.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PublicKeyCredentialUserEntity.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicKeyCredentialUserEntity.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PublicKeyCredentialUserEntity.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialUserEntity.id
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialUserEntity.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialUserEntity.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialUserEntity.displayName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PublicKeyCredentialUserEntity.encodedSize = codec.kStructHeaderSize + 32;

  PublicKeyCredentialUserEntity.decode = function(decoder) {
    var packed;
    var val = new PublicKeyCredentialUserEntity();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeArrayPointer(codec.Uint8);
    val.name = decoder.decodeStruct(codec.String);
    val.icon = decoder.decodeStructPointer(url$.Url);
    val.displayName = decoder.decodeStruct(codec.String);
    return val;
  };

  PublicKeyCredentialUserEntity.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicKeyCredentialUserEntity.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.id);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStructPointer(url$.Url, val.icon);
    encoder.encodeStruct(codec.String, val.displayName);
  };
  function PublicKeyCredentialParameters(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicKeyCredentialParameters.prototype.initDefaults_ = function() {
    this.type = 0;
    this.algorithmIdentifier = 0;
  };
  PublicKeyCredentialParameters.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicKeyCredentialParameters.generate = function(generator_) {
    var generated = new PublicKeyCredentialParameters;
    generated.type = generator_.generateEnum(0, 0);
    generated.algorithmIdentifier = generator_.generateInt32();
    return generated;
  };

  PublicKeyCredentialParameters.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.algorithmIdentifier = mutator_.mutateInt32(this.algorithmIdentifier);
    }
    return this;
  };
  PublicKeyCredentialParameters.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PublicKeyCredentialParameters.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicKeyCredentialParameters.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PublicKeyCredentialParameters.validate = function(messageValidator, offset) {
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


    // validate PublicKeyCredentialParameters.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PublicKeyCredentialType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PublicKeyCredentialParameters.encodedSize = codec.kStructHeaderSize + 8;

  PublicKeyCredentialParameters.decode = function(decoder) {
    var packed;
    var val = new PublicKeyCredentialParameters();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.algorithmIdentifier = decoder.decodeStruct(codec.Int32);
    return val;
  };

  PublicKeyCredentialParameters.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicKeyCredentialParameters.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Int32, val.algorithmIdentifier);
  };
  function CableAuthentication(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CableAuthentication.prototype.initDefaults_ = function() {
    this.version = 0;
    this.clientEid = null;
    this.authenticatorEid = null;
    this.sessionPreKey = null;
  };
  CableAuthentication.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CableAuthentication.generate = function(generator_) {
    var generated = new CableAuthentication;
    generated.version = generator_.generateInt32();
    generated.clientEid = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.authenticatorEid = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.sessionPreKey = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  CableAuthentication.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateInt32(this.version);
    }
    if (mutator_.chooseMutateField()) {
      this.clientEid = mutator_.mutateArray(this.clientEid, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.authenticatorEid = mutator_.mutateArray(this.authenticatorEid, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.sessionPreKey = mutator_.mutateArray(this.sessionPreKey, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  CableAuthentication.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CableAuthentication.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CableAuthentication.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CableAuthentication.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CableAuthentication.clientEid
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CableAuthentication.authenticatorEid
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CableAuthentication.sessionPreKey
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, false, [32], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CableAuthentication.encodedSize = codec.kStructHeaderSize + 32;

  CableAuthentication.decode = function(decoder) {
    var packed;
    var val = new CableAuthentication();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.clientEid = decoder.decodeArrayPointer(codec.Uint8);
    val.authenticatorEid = decoder.decodeArrayPointer(codec.Uint8);
    val.sessionPreKey = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  CableAuthentication.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CableAuthentication.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.clientEid);
    encoder.encodeArrayPointer(codec.Uint8, val.authenticatorEid);
    encoder.encodeArrayPointer(codec.Uint8, val.sessionPreKey);
  };
  function CableRegistration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CableRegistration.prototype.initDefaults_ = function() {
    this.version = 0;
    this.relyingPartyPublicKey = null;
  };
  CableRegistration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CableRegistration.generate = function(generator_) {
    var generated = new CableRegistration;
    generated.version = generator_.generateInt32();
    generated.relyingPartyPublicKey = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  CableRegistration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateInt32(this.version);
    }
    if (mutator_.chooseMutateField()) {
      this.relyingPartyPublicKey = mutator_.mutateArray(this.relyingPartyPublicKey, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  CableRegistration.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CableRegistration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CableRegistration.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CableRegistration.validate = function(messageValidator, offset) {
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



    // validate CableRegistration.relyingPartyPublicKey
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [65], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CableRegistration.encodedSize = codec.kStructHeaderSize + 16;

  CableRegistration.decode = function(decoder) {
    var packed;
    var val = new CableRegistration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.relyingPartyPublicKey = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  CableRegistration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CableRegistration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.relyingPartyPublicKey);
  };
  function PublicKeyCredentialRequestOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicKeyCredentialRequestOptions.prototype.initDefaults_ = function() {
    this.challenge = null;
    this.adjustedTimeout = null;
    this.relyingPartyId = null;
    this.allowCredentials = null;
    this.userVerification = 0;
    this.appid = null;
    this.cableAuthenticationData = null;
  };
  PublicKeyCredentialRequestOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicKeyCredentialRequestOptions.generate = function(generator_) {
    var generated = new PublicKeyCredentialRequestOptions;
    generated.challenge = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.adjustedTimeout = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.relyingPartyId = generator_.generateString(false);
    generated.allowCredentials = generator_.generateArray(function() {
      return generator_.generateStruct(webauth.mojom.PublicKeyCredentialDescriptor, false);
    });
    generated.userVerification = generator_.generateEnum(0, 2);
    generated.appid = generator_.generateString(true);
    generated.cableAuthenticationData = generator_.generateArray(function() {
      return generator_.generateStruct(webauth.mojom.CableAuthentication, false);
    });
    return generated;
  };

  PublicKeyCredentialRequestOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.challenge = mutator_.mutateArray(this.challenge, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.adjustedTimeout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.relyingPartyId = mutator_.mutateString(this.relyingPartyId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.allowCredentials = mutator_.mutateArray(this.allowCredentials, function(val) {
        return mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialDescriptor, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.userVerification = mutator_.mutateEnum(this.userVerification, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.appid = mutator_.mutateString(this.appid, true);
    }
    if (mutator_.chooseMutateField()) {
      this.cableAuthenticationData = mutator_.mutateArray(this.cableAuthenticationData, function(val) {
        return mutator_.mutateStruct(webauth.mojom.CableAuthentication, false);
      });
    }
    return this;
  };
  PublicKeyCredentialRequestOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PublicKeyCredentialRequestOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicKeyCredentialRequestOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PublicKeyCredentialRequestOptions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.challenge
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.adjustedTimeout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.relyingPartyId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.allowCredentials
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(PublicKeyCredentialDescriptor), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.userVerification
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, UserVerificationRequirement);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.appid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialRequestOptions.cableAuthenticationData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(CableAuthentication), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PublicKeyCredentialRequestOptions.encodedSize = codec.kStructHeaderSize + 56;

  PublicKeyCredentialRequestOptions.decode = function(decoder) {
    var packed;
    var val = new PublicKeyCredentialRequestOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.challenge = decoder.decodeArrayPointer(codec.Uint8);
    val.adjustedTimeout = decoder.decodeStructPointer(time$.TimeDelta);
    val.relyingPartyId = decoder.decodeStruct(codec.String);
    val.allowCredentials = decoder.decodeArrayPointer(new codec.PointerTo(PublicKeyCredentialDescriptor));
    val.userVerification = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.appid = decoder.decodeStruct(codec.NullableString);
    val.cableAuthenticationData = decoder.decodeArrayPointer(new codec.PointerTo(CableAuthentication));
    return val;
  };

  PublicKeyCredentialRequestOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicKeyCredentialRequestOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.challenge);
    encoder.encodeStructPointer(time$.TimeDelta, val.adjustedTimeout);
    encoder.encodeStruct(codec.String, val.relyingPartyId);
    encoder.encodeArrayPointer(new codec.PointerTo(PublicKeyCredentialDescriptor), val.allowCredentials);
    encoder.encodeStruct(codec.Int32, val.userVerification);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.appid);
    encoder.encodeArrayPointer(new codec.PointerTo(CableAuthentication), val.cableAuthenticationData);
  };
  function AuthenticatorSelectionCriteria(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AuthenticatorSelectionCriteria.prototype.initDefaults_ = function() {
    this.authenticatorAttachment = 0;
    this.requireResidentKey = false;
    this.userVerification = 0;
  };
  AuthenticatorSelectionCriteria.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AuthenticatorSelectionCriteria.generate = function(generator_) {
    var generated = new AuthenticatorSelectionCriteria;
    generated.authenticatorAttachment = generator_.generateEnum(0, 2);
    generated.requireResidentKey = generator_.generateBool();
    generated.userVerification = generator_.generateEnum(0, 2);
    return generated;
  };

  AuthenticatorSelectionCriteria.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.authenticatorAttachment = mutator_.mutateEnum(this.authenticatorAttachment, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.requireResidentKey = mutator_.mutateBool(this.requireResidentKey);
    }
    if (mutator_.chooseMutateField()) {
      this.userVerification = mutator_.mutateEnum(this.userVerification, 0, 2);
    }
    return this;
  };
  AuthenticatorSelectionCriteria.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AuthenticatorSelectionCriteria.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AuthenticatorSelectionCriteria.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AuthenticatorSelectionCriteria.validate = function(messageValidator, offset) {
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


    // validate AuthenticatorSelectionCriteria.authenticatorAttachment
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, AuthenticatorAttachment);
    if (err !== validator.validationError.NONE)
        return err;



    // validate AuthenticatorSelectionCriteria.userVerification
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, UserVerificationRequirement);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AuthenticatorSelectionCriteria.encodedSize = codec.kStructHeaderSize + 16;

  AuthenticatorSelectionCriteria.decode = function(decoder) {
    var packed;
    var val = new AuthenticatorSelectionCriteria();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.authenticatorAttachment = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.requireResidentKey = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.userVerification = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AuthenticatorSelectionCriteria.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AuthenticatorSelectionCriteria.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.authenticatorAttachment);
    packed = 0;
    packed |= (val.requireResidentKey & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.userVerification);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PublicKeyCredentialCreationOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicKeyCredentialCreationOptions.prototype.initDefaults_ = function() {
    this.relyingParty = null;
    this.user = null;
    this.challenge = null;
    this.publicKeyParameters = null;
    this.adjustedTimeout = null;
    this.excludeCredentials = null;
    this.authenticatorSelection = null;
    this.attestation = 0;
    this.cableRegistrationData = null;
  };
  PublicKeyCredentialCreationOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicKeyCredentialCreationOptions.generate = function(generator_) {
    var generated = new PublicKeyCredentialCreationOptions;
    generated.relyingParty = generator_.generateStruct(webauth.mojom.PublicKeyCredentialRpEntity, false);
    generated.user = generator_.generateStruct(webauth.mojom.PublicKeyCredentialUserEntity, false);
    generated.challenge = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.publicKeyParameters = generator_.generateArray(function() {
      return generator_.generateStruct(webauth.mojom.PublicKeyCredentialParameters, false);
    });
    generated.adjustedTimeout = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.excludeCredentials = generator_.generateArray(function() {
      return generator_.generateStruct(webauth.mojom.PublicKeyCredentialDescriptor, false);
    });
    generated.authenticatorSelection = generator_.generateStruct(webauth.mojom.AuthenticatorSelectionCriteria, true);
    generated.attestation = generator_.generateEnum(0, 2);
    generated.cableRegistrationData = generator_.generateStruct(webauth.mojom.CableRegistration, true);
    return generated;
  };

  PublicKeyCredentialCreationOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.relyingParty = mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialRpEntity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.user = mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialUserEntity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.challenge = mutator_.mutateArray(this.challenge, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.publicKeyParameters = mutator_.mutateArray(this.publicKeyParameters, function(val) {
        return mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialParameters, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.adjustedTimeout = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.excludeCredentials = mutator_.mutateArray(this.excludeCredentials, function(val) {
        return mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialDescriptor, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.authenticatorSelection = mutator_.mutateStruct(webauth.mojom.AuthenticatorSelectionCriteria, true);
    }
    if (mutator_.chooseMutateField()) {
      this.attestation = mutator_.mutateEnum(this.attestation, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.cableRegistrationData = mutator_.mutateStruct(webauth.mojom.CableRegistration, true);
    }
    return this;
  };
  PublicKeyCredentialCreationOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PublicKeyCredentialCreationOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicKeyCredentialCreationOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PublicKeyCredentialCreationOptions.validate = function(messageValidator, offset) {
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


    // validate PublicKeyCredentialCreationOptions.relyingParty
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PublicKeyCredentialRpEntity, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.user
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PublicKeyCredentialUserEntity, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.challenge
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.publicKeyParameters
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(PublicKeyCredentialParameters), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.adjustedTimeout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.excludeCredentials
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(PublicKeyCredentialDescriptor), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.authenticatorSelection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, AuthenticatorSelectionCriteria, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.attestation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 56, AttestationConveyancePreference);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialCreationOptions.cableRegistrationData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, CableRegistration, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PublicKeyCredentialCreationOptions.encodedSize = codec.kStructHeaderSize + 72;

  PublicKeyCredentialCreationOptions.decode = function(decoder) {
    var packed;
    var val = new PublicKeyCredentialCreationOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.relyingParty = decoder.decodeStructPointer(PublicKeyCredentialRpEntity);
    val.user = decoder.decodeStructPointer(PublicKeyCredentialUserEntity);
    val.challenge = decoder.decodeArrayPointer(codec.Uint8);
    val.publicKeyParameters = decoder.decodeArrayPointer(new codec.PointerTo(PublicKeyCredentialParameters));
    val.adjustedTimeout = decoder.decodeStructPointer(time$.TimeDelta);
    val.excludeCredentials = decoder.decodeArrayPointer(new codec.PointerTo(PublicKeyCredentialDescriptor));
    val.authenticatorSelection = decoder.decodeStructPointer(AuthenticatorSelectionCriteria);
    val.attestation = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.cableRegistrationData = decoder.decodeStructPointer(CableRegistration);
    return val;
  };

  PublicKeyCredentialCreationOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicKeyCredentialCreationOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PublicKeyCredentialRpEntity, val.relyingParty);
    encoder.encodeStructPointer(PublicKeyCredentialUserEntity, val.user);
    encoder.encodeArrayPointer(codec.Uint8, val.challenge);
    encoder.encodeArrayPointer(new codec.PointerTo(PublicKeyCredentialParameters), val.publicKeyParameters);
    encoder.encodeStructPointer(time$.TimeDelta, val.adjustedTimeout);
    encoder.encodeArrayPointer(new codec.PointerTo(PublicKeyCredentialDescriptor), val.excludeCredentials);
    encoder.encodeStructPointer(AuthenticatorSelectionCriteria, val.authenticatorSelection);
    encoder.encodeStruct(codec.Int32, val.attestation);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(CableRegistration, val.cableRegistrationData);
  };
  function PublicKeyCredentialDescriptor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicKeyCredentialDescriptor.prototype.initDefaults_ = function() {
    this.type = 0;
    this.id = null;
    this.transports = null;
  };
  PublicKeyCredentialDescriptor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicKeyCredentialDescriptor.generate = function(generator_) {
    var generated = new PublicKeyCredentialDescriptor;
    generated.type = generator_.generateEnum(0, 0);
    generated.id = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.transports = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2);
    });
    return generated;
  };

  PublicKeyCredentialDescriptor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 0);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateArray(this.id, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.transports = mutator_.mutateArray(this.transports, function(val) {
        return mutator_.mutateEnum(val, 0, 2);
      });
    }
    return this;
  };
  PublicKeyCredentialDescriptor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PublicKeyCredentialDescriptor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicKeyCredentialDescriptor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PublicKeyCredentialDescriptor.validate = function(messageValidator, offset) {
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


    // validate PublicKeyCredentialDescriptor.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PublicKeyCredentialType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialDescriptor.id
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicKeyCredentialDescriptor.transports
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, new codec.Enum(AuthenticatorTransport), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PublicKeyCredentialDescriptor.encodedSize = codec.kStructHeaderSize + 24;

  PublicKeyCredentialDescriptor.decode = function(decoder) {
    var packed;
    var val = new PublicKeyCredentialDescriptor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeArrayPointer(codec.Uint8);
    val.transports = decoder.decodeArrayPointer(new codec.Enum(AuthenticatorTransport));
    return val;
  };

  PublicKeyCredentialDescriptor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicKeyCredentialDescriptor.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.id);
    encoder.encodeArrayPointer(new codec.Enum(AuthenticatorTransport), val.transports);
  };
  function Authenticator_MakeCredential_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Authenticator_MakeCredential_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  Authenticator_MakeCredential_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Authenticator_MakeCredential_Params.generate = function(generator_) {
    var generated = new Authenticator_MakeCredential_Params;
    generated.options = generator_.generateStruct(webauth.mojom.PublicKeyCredentialCreationOptions, false);
    return generated;
  };

  Authenticator_MakeCredential_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialCreationOptions, false);
    }
    return this;
  };
  Authenticator_MakeCredential_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Authenticator_MakeCredential_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Authenticator_MakeCredential_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Authenticator_MakeCredential_Params.validate = function(messageValidator, offset) {
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


    // validate Authenticator_MakeCredential_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PublicKeyCredentialCreationOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Authenticator_MakeCredential_Params.encodedSize = codec.kStructHeaderSize + 8;

  Authenticator_MakeCredential_Params.decode = function(decoder) {
    var packed;
    var val = new Authenticator_MakeCredential_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(PublicKeyCredentialCreationOptions);
    return val;
  };

  Authenticator_MakeCredential_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Authenticator_MakeCredential_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PublicKeyCredentialCreationOptions, val.options);
  };
  function Authenticator_MakeCredential_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Authenticator_MakeCredential_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.credential = null;
  };
  Authenticator_MakeCredential_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Authenticator_MakeCredential_ResponseParams.generate = function(generator_) {
    var generated = new Authenticator_MakeCredential_ResponseParams;
    generated.status = generator_.generateEnum(0, 12);
    generated.credential = generator_.generateStruct(webauth.mojom.MakeCredentialAuthenticatorResponse, true);
    return generated;
  };

  Authenticator_MakeCredential_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 12);
    }
    if (mutator_.chooseMutateField()) {
      this.credential = mutator_.mutateStruct(webauth.mojom.MakeCredentialAuthenticatorResponse, true);
    }
    return this;
  };
  Authenticator_MakeCredential_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Authenticator_MakeCredential_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Authenticator_MakeCredential_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Authenticator_MakeCredential_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Authenticator_MakeCredential_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, AuthenticatorStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Authenticator_MakeCredential_ResponseParams.credential
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, MakeCredentialAuthenticatorResponse, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Authenticator_MakeCredential_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Authenticator_MakeCredential_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Authenticator_MakeCredential_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.credential = decoder.decodeStructPointer(MakeCredentialAuthenticatorResponse);
    return val;
  };

  Authenticator_MakeCredential_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Authenticator_MakeCredential_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(MakeCredentialAuthenticatorResponse, val.credential);
  };
  function Authenticator_GetAssertion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Authenticator_GetAssertion_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  Authenticator_GetAssertion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Authenticator_GetAssertion_Params.generate = function(generator_) {
    var generated = new Authenticator_GetAssertion_Params;
    generated.options = generator_.generateStruct(webauth.mojom.PublicKeyCredentialRequestOptions, false);
    return generated;
  };

  Authenticator_GetAssertion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(webauth.mojom.PublicKeyCredentialRequestOptions, false);
    }
    return this;
  };
  Authenticator_GetAssertion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Authenticator_GetAssertion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Authenticator_GetAssertion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Authenticator_GetAssertion_Params.validate = function(messageValidator, offset) {
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


    // validate Authenticator_GetAssertion_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PublicKeyCredentialRequestOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Authenticator_GetAssertion_Params.encodedSize = codec.kStructHeaderSize + 8;

  Authenticator_GetAssertion_Params.decode = function(decoder) {
    var packed;
    var val = new Authenticator_GetAssertion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(PublicKeyCredentialRequestOptions);
    return val;
  };

  Authenticator_GetAssertion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Authenticator_GetAssertion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PublicKeyCredentialRequestOptions, val.options);
  };
  function Authenticator_GetAssertion_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Authenticator_GetAssertion_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.credential = null;
  };
  Authenticator_GetAssertion_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Authenticator_GetAssertion_ResponseParams.generate = function(generator_) {
    var generated = new Authenticator_GetAssertion_ResponseParams;
    generated.status = generator_.generateEnum(0, 12);
    generated.credential = generator_.generateStruct(webauth.mojom.GetAssertionAuthenticatorResponse, true);
    return generated;
  };

  Authenticator_GetAssertion_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 12);
    }
    if (mutator_.chooseMutateField()) {
      this.credential = mutator_.mutateStruct(webauth.mojom.GetAssertionAuthenticatorResponse, true);
    }
    return this;
  };
  Authenticator_GetAssertion_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Authenticator_GetAssertion_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Authenticator_GetAssertion_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Authenticator_GetAssertion_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Authenticator_GetAssertion_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, AuthenticatorStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Authenticator_GetAssertion_ResponseParams.credential
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GetAssertionAuthenticatorResponse, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Authenticator_GetAssertion_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Authenticator_GetAssertion_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Authenticator_GetAssertion_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.credential = decoder.decodeStructPointer(GetAssertionAuthenticatorResponse);
    return val;
  };

  Authenticator_GetAssertion_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Authenticator_GetAssertion_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(GetAssertionAuthenticatorResponse, val.credential);
  };
  var kAuthenticator_MakeCredential_Name = 1186258052;
  var kAuthenticator_GetAssertion_Name = 1372252603;

  function AuthenticatorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Authenticator,
                                                   handleOrPtrInfo);
  }

  function AuthenticatorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Authenticator, associatedInterfacePtrInfo);
  }

  AuthenticatorAssociatedPtr.prototype =
      Object.create(AuthenticatorPtr.prototype);
  AuthenticatorAssociatedPtr.prototype.constructor =
      AuthenticatorAssociatedPtr;

  function AuthenticatorProxy(receiver) {
    this.receiver_ = receiver;
  }
  AuthenticatorPtr.prototype.makeCredential = function() {
    return AuthenticatorProxy.prototype.makeCredential
        .apply(this.ptr.getProxy(), arguments);
  };

  AuthenticatorProxy.prototype.makeCredential = function(options) {
    var params_ = new Authenticator_MakeCredential_Params();
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAuthenticator_MakeCredential_Name,
          codec.align(Authenticator_MakeCredential_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Authenticator_MakeCredential_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Authenticator_MakeCredential_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  AuthenticatorPtr.prototype.getAssertion = function() {
    return AuthenticatorProxy.prototype.getAssertion
        .apply(this.ptr.getProxy(), arguments);
  };

  AuthenticatorProxy.prototype.getAssertion = function(options) {
    var params_ = new Authenticator_GetAssertion_Params();
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kAuthenticator_GetAssertion_Name,
          codec.align(Authenticator_GetAssertion_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Authenticator_GetAssertion_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Authenticator_GetAssertion_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function AuthenticatorStub(delegate) {
    this.delegate_ = delegate;
  }
  AuthenticatorStub.prototype.makeCredential = function(options) {
    return this.delegate_ && this.delegate_.makeCredential && this.delegate_.makeCredential(options);
  }
  AuthenticatorStub.prototype.getAssertion = function(options) {
    return this.delegate_ && this.delegate_.getAssertion && this.delegate_.getAssertion(options);
  }

  AuthenticatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  AuthenticatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAuthenticator_MakeCredential_Name:
      var params = reader.decodeStruct(Authenticator_MakeCredential_Params);
      this.makeCredential(params.options).then(function(response) {
        var responseParams =
            new Authenticator_MakeCredential_ResponseParams();
        responseParams.status = response.status;
        responseParams.credential = response.credential;
        var builder = new codec.MessageV1Builder(
            kAuthenticator_MakeCredential_Name,
            codec.align(Authenticator_MakeCredential_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Authenticator_MakeCredential_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kAuthenticator_GetAssertion_Name:
      var params = reader.decodeStruct(Authenticator_GetAssertion_Params);
      this.getAssertion(params.options).then(function(response) {
        var responseParams =
            new Authenticator_GetAssertion_ResponseParams();
        responseParams.status = response.status;
        responseParams.credential = response.credential;
        var builder = new codec.MessageV1Builder(
            kAuthenticator_GetAssertion_Name,
            codec.align(Authenticator_GetAssertion_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Authenticator_GetAssertion_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateAuthenticatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAuthenticator_MakeCredential_Name:
        if (message.expectsResponse())
          paramsClass = Authenticator_MakeCredential_Params;
      break;
      case kAuthenticator_GetAssertion_Name:
        if (message.expectsResponse())
          paramsClass = Authenticator_GetAssertion_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAuthenticatorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kAuthenticator_MakeCredential_Name:
        if (message.isResponse())
          paramsClass = Authenticator_MakeCredential_ResponseParams;
        break;
      case kAuthenticator_GetAssertion_Name:
        if (message.isResponse())
          paramsClass = Authenticator_GetAssertion_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Authenticator = {
    name: 'webauth.mojom.Authenticator',
    kVersion: 0,
    ptrClass: AuthenticatorPtr,
    proxyClass: AuthenticatorProxy,
    stubClass: AuthenticatorStub,
    validateRequest: validateAuthenticatorRequest,
    validateResponse: validateAuthenticatorResponse,
    mojomId: 'third_party/blink/public/platform/modules/webauth/authenticator.mojom',
    fuzzMethods: {
      makeCredential: {
        params: Authenticator_MakeCredential_Params,
      },
      getAssertion: {
        params: Authenticator_GetAssertion_Params,
      },
    },
  };
  AuthenticatorStub.prototype.validator = validateAuthenticatorRequest;
  AuthenticatorProxy.prototype.validator = validateAuthenticatorResponse;
  exports.AuthenticatorStatus = AuthenticatorStatus;
  exports.UserVerificationRequirement = UserVerificationRequirement;
  exports.AttestationConveyancePreference = AttestationConveyancePreference;
  exports.AuthenticatorAttachment = AuthenticatorAttachment;
  exports.PublicKeyCredentialType = PublicKeyCredentialType;
  exports.AuthenticatorTransport = AuthenticatorTransport;
  exports.CommonCredentialInfo = CommonCredentialInfo;
  exports.MakeCredentialAuthenticatorResponse = MakeCredentialAuthenticatorResponse;
  exports.GetAssertionAuthenticatorResponse = GetAssertionAuthenticatorResponse;
  exports.PublicKeyCredentialRpEntity = PublicKeyCredentialRpEntity;
  exports.PublicKeyCredentialUserEntity = PublicKeyCredentialUserEntity;
  exports.PublicKeyCredentialParameters = PublicKeyCredentialParameters;
  exports.CableAuthentication = CableAuthentication;
  exports.CableRegistration = CableRegistration;
  exports.PublicKeyCredentialRequestOptions = PublicKeyCredentialRequestOptions;
  exports.AuthenticatorSelectionCriteria = AuthenticatorSelectionCriteria;
  exports.PublicKeyCredentialCreationOptions = PublicKeyCredentialCreationOptions;
  exports.PublicKeyCredentialDescriptor = PublicKeyCredentialDescriptor;
  exports.Authenticator = Authenticator;
  exports.AuthenticatorPtr = AuthenticatorPtr;
  exports.AuthenticatorAssociatedPtr = AuthenticatorAssociatedPtr;
})();