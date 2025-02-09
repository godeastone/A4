// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/content_decryption_module.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('media.mojom');
  var decryptor$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/decryptor.mojom', 'decryptor.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }


  var EmeInitDataType = {};

  EmeInitDataType.isKnownEnumValue = function(value) {
    return false;
  };

  EmeInitDataType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CdmSessionType = {};

  CdmSessionType.isKnownEnumValue = function(value) {
    return false;
  };

  CdmSessionType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CdmMessageType = {};

  CdmMessageType.isKnownEnumValue = function(value) {
    return false;
  };

  CdmMessageType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CdmKeyStatus = {};

  CdmKeyStatus.isKnownEnumValue = function(value) {
    return false;
  };

  CdmKeyStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var HdcpVersion = {};

  HdcpVersion.isKnownEnumValue = function(value) {
    return false;
  };

  HdcpVersion.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CdmConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmConfig.prototype.initDefaults_ = function() {
  };
  CdmConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CdmConfig.generate = function(generator_) {
    var generated = new CdmConfig;
    return generated;
  };

  CdmConfig.prototype.mutate = function(mutator_) {
    return this;
  };
  CdmConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CdmConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CdmConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CdmConfig.validate = function(messageValidator, offset) {
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

  CdmConfig.encodedSize = codec.kStructHeaderSize + 0;

  CdmConfig.decode = function(decoder) {
    var packed;
    var val = new CdmConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CdmConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmConfig.encodedSize);
    encoder.writeUint32(0);
  };
  function CdmPromiseResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  CdmPromiseResult.Exception = {};

  CdmPromiseResult.Exception.isKnownEnumValue = function(value) {
    return false;
  };

  CdmPromiseResult.Exception.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  CdmPromiseResult.prototype.initDefaults_ = function() {
    this.success = false;
    this.exception = 0;
    this.systemCode = 0;
    this.errorMessage = null;
  };
  CdmPromiseResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CdmPromiseResult.generate = function(generator_) {
    var generated = new CdmPromiseResult;
    generated.success = generator_.generateBool();
    generated.exception = generator_.generateEnum();
    generated.systemCode = generator_.generateUint32();
    generated.errorMessage = generator_.generateString(false);
    return generated;
  };

  CdmPromiseResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.exception = mutator_.mutateEnum(this.exception);
    }
    if (mutator_.chooseMutateField()) {
      this.systemCode = mutator_.mutateUint32(this.systemCode);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMessage = mutator_.mutateString(this.errorMessage, false);
    }
    return this;
  };
  CdmPromiseResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CdmPromiseResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CdmPromiseResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CdmPromiseResult.validate = function(messageValidator, offset) {
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



    // validate CdmPromiseResult.exception
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, CdmPromiseResult.Exception);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CdmPromiseResult.errorMessage
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CdmPromiseResult.encodedSize = codec.kStructHeaderSize + 24;

  CdmPromiseResult.decode = function(decoder) {
    var packed;
    var val = new CdmPromiseResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.exception = decoder.decodeStruct(codec.Int32);
    val.systemCode = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMessage = decoder.decodeStruct(codec.String);
    return val;
  };

  CdmPromiseResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmPromiseResult.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.exception);
    encoder.encodeStruct(codec.Uint32, val.systemCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.errorMessage);
  };
  function CdmKeyInformation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmKeyInformation.prototype.initDefaults_ = function() {
    this.keyId = null;
    this.status = 0;
    this.systemCode = 0;
  };
  CdmKeyInformation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CdmKeyInformation.generate = function(generator_) {
    var generated = new CdmKeyInformation;
    generated.keyId = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.status = generator_.generateEnum();
    generated.systemCode = generator_.generateUint32();
    return generated;
  };

  CdmKeyInformation.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyId = mutator_.mutateArray(this.keyId, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status);
    }
    if (mutator_.chooseMutateField()) {
      this.systemCode = mutator_.mutateUint32(this.systemCode);
    }
    return this;
  };
  CdmKeyInformation.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CdmKeyInformation.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CdmKeyInformation.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CdmKeyInformation.validate = function(messageValidator, offset) {
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


    // validate CdmKeyInformation.keyId
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CdmKeyInformation.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, CdmKeyStatus);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CdmKeyInformation.encodedSize = codec.kStructHeaderSize + 16;

  CdmKeyInformation.decode = function(decoder) {
    var packed;
    var val = new CdmKeyInformation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyId = decoder.decodeArrayPointer(codec.Uint8);
    val.status = decoder.decodeStruct(codec.Int32);
    val.systemCode = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  CdmKeyInformation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmKeyInformation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.keyId);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.encodeStruct(codec.Uint32, val.systemCode);
  };
  function ContentDecryptionModule_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = new ContentDecryptionModuleClientPtr();
  };
  ContentDecryptionModule_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_SetClient_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_SetClient_Params;
    generated.client = generator_.generateInterface("media.mojom.ContentDecryptionModuleClient", false);
    return generated;
  };

  ContentDecryptionModule_SetClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "media.mojom.ContentDecryptionModuleClient", false);
    }
    return this;
  };
  ContentDecryptionModule_SetClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.ContentDecryptionModuleClientPtr"]);
    }
    return handles;
  };

  ContentDecryptionModule_SetClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_SetClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  ContentDecryptionModule_SetClient_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(ContentDecryptionModuleClientPtr));
    return val;
  };

  ContentDecryptionModule_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(ContentDecryptionModuleClientPtr), val.client);
  };
  function ContentDecryptionModule_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_Initialize_Params.prototype.initDefaults_ = function() {
    this.keySystem = null;
    this.securityOrigin = null;
    this.cdmConfig = null;
  };
  ContentDecryptionModule_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_Initialize_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_Initialize_Params;
    generated.keySystem = generator_.generateString(false);
    generated.securityOrigin = generator_.generateStruct(url.mojom.Origin, false);
    generated.cdmConfig = generator_.generateStruct(media.mojom.CdmConfig, false);
    return generated;
  };

  ContentDecryptionModule_Initialize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keySystem = mutator_.mutateString(this.keySystem, false);
    }
    if (mutator_.chooseMutateField()) {
      this.securityOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cdmConfig = mutator_.mutateStruct(media.mojom.CdmConfig, false);
    }
    return this;
  };
  ContentDecryptionModule_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_Initialize_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_Initialize_Params.keySystem
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_Initialize_Params.securityOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_Initialize_Params.cdmConfig
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, CdmConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_Initialize_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModule_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keySystem = decoder.decodeStruct(codec.String);
    val.securityOrigin = decoder.decodeStructPointer(origin$.Origin);
    val.cdmConfig = decoder.decodeStructPointer(CdmConfig);
    return val;
  };

  ContentDecryptionModule_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.keySystem);
    encoder.encodeStructPointer(origin$.Origin, val.securityOrigin);
    encoder.encodeStructPointer(CdmConfig, val.cdmConfig);
  };
  function ContentDecryptionModule_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.cdmId = 0;
    this.decryptor = new decryptor$.DecryptorPtr();
  };
  ContentDecryptionModule_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_Initialize_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    generated.cdmId = generator_.generateInt32();
    generated.decryptor = generator_.generateInterface("media.mojom.Decryptor", true);
    return generated;
  };

  ContentDecryptionModule_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cdmId = mutator_.mutateInt32(this.cdmId);
    }
    if (mutator_.chooseMutateField()) {
      this.decryptor = mutator_.mutateInterface(this.decryptor, "media.mojom.Decryptor", true);
    }
    return this;
  };
  ContentDecryptionModule_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.decryptor !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.DecryptorPtr"]);
    }
    return handles;
  };

  ContentDecryptionModule_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.decryptor = handles[idx++];;
    return idx;
  };

  ContentDecryptionModule_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_Initialize_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ContentDecryptionModule_Initialize_ResponseParams.decryptor
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModule_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.cdmId = decoder.decodeStruct(codec.Int32);
    val.decryptor = decoder.decodeStruct(new codec.NullableInterface(decryptor$.DecryptorPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContentDecryptionModule_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.Int32, val.cdmId);
    encoder.encodeStruct(new codec.NullableInterface(decryptor$.DecryptorPtr), val.decryptor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ContentDecryptionModule_SetServerCertificate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_SetServerCertificate_Params.prototype.initDefaults_ = function() {
    this.certificateData = null;
  };
  ContentDecryptionModule_SetServerCertificate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_SetServerCertificate_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_SetServerCertificate_Params;
    generated.certificateData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  ContentDecryptionModule_SetServerCertificate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.certificateData = mutator_.mutateArray(this.certificateData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  ContentDecryptionModule_SetServerCertificate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_SetServerCertificate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_SetServerCertificate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_SetServerCertificate_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_SetServerCertificate_Params.certificateData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_SetServerCertificate_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_SetServerCertificate_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_SetServerCertificate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.certificateData = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModule_SetServerCertificate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_SetServerCertificate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.certificateData);
  };
  function ContentDecryptionModule_SetServerCertificate_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_SetServerCertificate_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_SetServerCertificate_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    return generated;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    return this;
  };
  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_SetServerCertificate_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_SetServerCertificate_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_SetServerCertificate_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_SetServerCertificate_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_SetServerCertificate_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModule_GetStatusForPolicy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_GetStatusForPolicy_Params.prototype.initDefaults_ = function() {
    this.minHdcpVersion = 0;
  };
  ContentDecryptionModule_GetStatusForPolicy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_GetStatusForPolicy_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_GetStatusForPolicy_Params;
    generated.minHdcpVersion = generator_.generateEnum();
    return generated;
  };

  ContentDecryptionModule_GetStatusForPolicy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.minHdcpVersion = mutator_.mutateEnum(this.minHdcpVersion);
    }
    return this;
  };
  ContentDecryptionModule_GetStatusForPolicy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_GetStatusForPolicy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_GetStatusForPolicy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_GetStatusForPolicy_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_GetStatusForPolicy_Params.minHdcpVersion
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, HdcpVersion);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_GetStatusForPolicy_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_GetStatusForPolicy_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_GetStatusForPolicy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.minHdcpVersion = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContentDecryptionModule_GetStatusForPolicy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_GetStatusForPolicy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.minHdcpVersion);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ContentDecryptionModule_GetStatusForPolicy_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.keyStatus = 0;
  };
  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_GetStatusForPolicy_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    generated.keyStatus = generator_.generateEnum();
    return generated;
  };

  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    if (mutator_.chooseMutateField()) {
      this.keyStatus = mutator_.mutateEnum(this.keyStatus);
    }
    return this;
  };
  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_GetStatusForPolicy_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_GetStatusForPolicy_ResponseParams.keyStatus
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, CdmKeyStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_GetStatusForPolicy_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.keyStatus = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ContentDecryptionModule_GetStatusForPolicy_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_GetStatusForPolicy_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.Int32, val.keyStatus);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ContentDecryptionModule_CreateSessionAndGenerateRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.initDefaults_ = function() {
    this.sessionType = 0;
    this.initDataType = 0;
    this.initData = null;
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_CreateSessionAndGenerateRequest_Params;
    generated.sessionType = generator_.generateEnum();
    generated.initDataType = generator_.generateEnum();
    generated.initData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionType = mutator_.mutateEnum(this.sessionType);
    }
    if (mutator_.chooseMutateField()) {
      this.initDataType = mutator_.mutateEnum(this.initDataType);
    }
    if (mutator_.chooseMutateField()) {
      this.initData = mutator_.mutateArray(this.initData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.sessionType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CdmSessionType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.initDataType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, EmeInitDataType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.initData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CreateSessionAndGenerateRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionType = decoder.decodeStruct(codec.Int32);
    val.initDataType = decoder.decodeStruct(codec.Int32);
    val.initData = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sessionType);
    encoder.encodeStruct(codec.Int32, val.initDataType);
    encoder.encodeArrayPointer(codec.Uint8, val.initData);
  };
  function ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.sessionId = null;
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    generated.sessionId = generator_.generateString(false);
    return generated;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    return this;
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.sessionId = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function ContentDecryptionModule_LoadSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_LoadSession_Params.prototype.initDefaults_ = function() {
    this.sessionType = 0;
    this.sessionId = null;
  };
  ContentDecryptionModule_LoadSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_LoadSession_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_LoadSession_Params;
    generated.sessionType = generator_.generateEnum();
    generated.sessionId = generator_.generateString(false);
    return generated;
  };

  ContentDecryptionModule_LoadSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionType = mutator_.mutateEnum(this.sessionType);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    return this;
  };
  ContentDecryptionModule_LoadSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_LoadSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_LoadSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_LoadSession_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_LoadSession_Params.sessionType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CdmSessionType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_LoadSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_LoadSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_LoadSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_LoadSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sessionId = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_LoadSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_LoadSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sessionType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function ContentDecryptionModule_LoadSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_LoadSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.sessionId = null;
  };
  ContentDecryptionModule_LoadSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_LoadSession_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_LoadSession_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    generated.sessionId = generator_.generateString(false);
    return generated;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    return this;
  };
  ContentDecryptionModule_LoadSession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_LoadSession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_LoadSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_LoadSession_ResponseParams.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_LoadSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_LoadSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    val.sessionId = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_LoadSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_LoadSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function ContentDecryptionModule_UpdateSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_UpdateSession_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
    this.response = null;
  };
  ContentDecryptionModule_UpdateSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_UpdateSession_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_UpdateSession_Params;
    generated.sessionId = generator_.generateString(false);
    generated.response = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  ContentDecryptionModule_UpdateSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateArray(this.response, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  ContentDecryptionModule_UpdateSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_UpdateSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_UpdateSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_UpdateSession_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_UpdateSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModule_UpdateSession_Params.response
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_UpdateSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModule_UpdateSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_UpdateSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    val.response = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModule_UpdateSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_UpdateSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
    encoder.encodeArrayPointer(codec.Uint8, val.response);
  };
  function ContentDecryptionModule_UpdateSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_UpdateSession_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_UpdateSession_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    return generated;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    return this;
  };
  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_UpdateSession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_UpdateSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_UpdateSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_UpdateSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_UpdateSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModule_CloseSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CloseSession_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
  };
  ContentDecryptionModule_CloseSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_CloseSession_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_CloseSession_Params;
    generated.sessionId = generator_.generateString(false);
    return generated;
  };

  ContentDecryptionModule_CloseSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    return this;
  };
  ContentDecryptionModule_CloseSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_CloseSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_CloseSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_CloseSession_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_CloseSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CloseSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_CloseSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CloseSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_CloseSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CloseSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function ContentDecryptionModule_CloseSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_CloseSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_CloseSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_CloseSession_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_CloseSession_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    return generated;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    return this;
  };
  ContentDecryptionModule_CloseSession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_CloseSession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_CloseSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_CloseSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_CloseSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_CloseSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_CloseSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModule_RemoveSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_RemoveSession_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
  };
  ContentDecryptionModule_RemoveSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_RemoveSession_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModule_RemoveSession_Params;
    generated.sessionId = generator_.generateString(false);
    return generated;
  };

  ContentDecryptionModule_RemoveSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    return this;
  };
  ContentDecryptionModule_RemoveSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_RemoveSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_RemoveSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_RemoveSession_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_RemoveSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_RemoveSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_RemoveSession_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_RemoveSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModule_RemoveSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_RemoveSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function ContentDecryptionModule_RemoveSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModule_RemoveSession_ResponseParams.generate = function(generator_) {
    var generated = new ContentDecryptionModule_RemoveSession_ResponseParams;
    generated.result = generator_.generateStruct(media.mojom.CdmPromiseResult, false);
    return generated;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(media.mojom.CdmPromiseResult, false);
    }
    return this;
  };
  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModule_RemoveSession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModule_RemoveSession_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CdmPromiseResult, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModule_RemoveSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModule_RemoveSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(CdmPromiseResult);
    return val;
  };

  ContentDecryptionModule_RemoveSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CdmPromiseResult, val.result);
  };
  function ContentDecryptionModuleClient_OnSessionMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
    this.messageType = 0;
    this.message = null;
  };
  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModuleClient_OnSessionMessage_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModuleClient_OnSessionMessage_Params;
    generated.sessionId = generator_.generateString(false);
    generated.messageType = generator_.generateEnum();
    generated.message = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.messageType = mutator_.mutateEnum(this.messageType);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateArray(this.message, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModuleClient_OnSessionMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModuleClient_OnSessionMessage_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModuleClient_OnSessionMessage_Params.messageType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, CdmMessageType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ContentDecryptionModuleClient_OnSessionMessage_Params.message
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModuleClient_OnSessionMessage_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    val.messageType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  ContentDecryptionModuleClient_OnSessionMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
    encoder.encodeStruct(codec.Int32, val.messageType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.message);
  };
  function ContentDecryptionModuleClient_OnSessionClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
  };
  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModuleClient_OnSessionClosed_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModuleClient_OnSessionClosed_Params;
    generated.sessionId = generator_.generateString(false);
    return generated;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    return this;
  };
  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModuleClient_OnSessionClosed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModuleClient_OnSessionClosed_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize = codec.kStructHeaderSize + 8;

  ContentDecryptionModuleClient_OnSessionClosed_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    return val;
  };

  ContentDecryptionModuleClient_OnSessionClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function ContentDecryptionModuleClient_OnSessionKeysChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
    this.hasAdditionalUsableKey = false;
    this.keysInfo = null;
  };
  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModuleClient_OnSessionKeysChange_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModuleClient_OnSessionKeysChange_Params;
    generated.sessionId = generator_.generateString(false);
    generated.hasAdditionalUsableKey = generator_.generateBool();
    generated.keysInfo = generator_.generateArray(function() {
      return generator_.generateStruct(media.mojom.CdmKeyInformation, false);
    });
    return generated;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hasAdditionalUsableKey = mutator_.mutateBool(this.hasAdditionalUsableKey);
    }
    if (mutator_.chooseMutateField()) {
      this.keysInfo = mutator_.mutateArray(this.keysInfo, function(val) {
        return mutator_.mutateStruct(media.mojom.CdmKeyInformation, false);
      });
    }
    return this;
  };
  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModuleClient_OnSessionKeysChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModuleClient_OnSessionKeysChange_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate ContentDecryptionModuleClient_OnSessionKeysChange_Params.keysInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(CdmKeyInformation), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize = codec.kStructHeaderSize + 24;

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionKeysChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.hasAdditionalUsableKey = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.keysInfo = decoder.decodeArrayPointer(new codec.PointerTo(CdmKeyInformation));
    return val;
  };

  ContentDecryptionModuleClient_OnSessionKeysChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
    packed = 0;
    packed |= (val.hasAdditionalUsableKey & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(CdmKeyInformation), val.keysInfo);
  };
  function ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
    this.newExpiryTimeSec = 0;
  };
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.generate = function(generator_) {
    var generated = new ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params;
    generated.sessionId = generator_.generateString(false);
    generated.newExpiryTimeSec = generator_.generateDouble();
    return generated;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sessionId = mutator_.mutateString(this.sessionId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newExpiryTimeSec = mutator_.mutateDouble(this.newExpiryTimeSec);
    }
    return this;
  };
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.validate = function(messageValidator, offset) {
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


    // validate ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize = codec.kStructHeaderSize + 16;

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.decode = function(decoder) {
    var packed;
    var val = new ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId = decoder.decodeStruct(codec.String);
    val.newExpiryTimeSec = decoder.decodeStruct(codec.Double);
    return val;
  };

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
    encoder.encodeStruct(codec.Double, val.newExpiryTimeSec);
  };
  function CdmFactory_CreateCdm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmFactory_CreateCdm_Params.prototype.initDefaults_ = function() {
    this.keySystem = null;
    this.cdm = new bindings.InterfaceRequest();
  };
  CdmFactory_CreateCdm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CdmFactory_CreateCdm_Params.generate = function(generator_) {
    var generated = new CdmFactory_CreateCdm_Params;
    generated.keySystem = generator_.generateString(false);
    generated.cdm = generator_.generateInterfaceRequest("media.mojom.ContentDecryptionModule", false);
    return generated;
  };

  CdmFactory_CreateCdm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keySystem = mutator_.mutateString(this.keySystem, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cdm = mutator_.mutateInterfaceRequest(this.cdm, "media.mojom.ContentDecryptionModule", false);
    }
    return this;
  };
  CdmFactory_CreateCdm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cdm !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.ContentDecryptionModuleRequest"]);
    }
    return handles;
  };

  CdmFactory_CreateCdm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CdmFactory_CreateCdm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cdm = handles[idx++];;
    return idx;
  };

  CdmFactory_CreateCdm_Params.validate = function(messageValidator, offset) {
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


    // validate CdmFactory_CreateCdm_Params.keySystem
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CdmFactory_CreateCdm_Params.cdm
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CdmFactory_CreateCdm_Params.encodedSize = codec.kStructHeaderSize + 16;

  CdmFactory_CreateCdm_Params.decode = function(decoder) {
    var packed;
    var val = new CdmFactory_CreateCdm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keySystem = decoder.decodeStruct(codec.String);
    val.cdm = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CdmFactory_CreateCdm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmFactory_CreateCdm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.keySystem);
    encoder.encodeStruct(codec.InterfaceRequest, val.cdm);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kContentDecryptionModule_SetClient_Name = 292402607;
  var kContentDecryptionModule_Initialize_Name = 1014234118;
  var kContentDecryptionModule_SetServerCertificate_Name = 1162151038;
  var kContentDecryptionModule_GetStatusForPolicy_Name = 630817577;
  var kContentDecryptionModule_CreateSessionAndGenerateRequest_Name = 955257373;
  var kContentDecryptionModule_LoadSession_Name = 2139399771;
  var kContentDecryptionModule_UpdateSession_Name = 1020826625;
  var kContentDecryptionModule_CloseSession_Name = 124145985;
  var kContentDecryptionModule_RemoveSession_Name = 784068128;

  function ContentDecryptionModulePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ContentDecryptionModule,
                                                   handleOrPtrInfo);
  }

  function ContentDecryptionModuleAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ContentDecryptionModule, associatedInterfacePtrInfo);
  }

  ContentDecryptionModuleAssociatedPtr.prototype =
      Object.create(ContentDecryptionModulePtr.prototype);
  ContentDecryptionModuleAssociatedPtr.prototype.constructor =
      ContentDecryptionModuleAssociatedPtr;

  function ContentDecryptionModuleProxy(receiver) {
    this.receiver_ = receiver;
  }
  ContentDecryptionModulePtr.prototype.setClient = function() {
    return ContentDecryptionModuleProxy.prototype.setClient
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.setClient = function(client) {
    var params_ = new ContentDecryptionModule_SetClient_Params();
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kContentDecryptionModule_SetClient_Name,
        codec.align(ContentDecryptionModule_SetClient_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModule_SetClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModulePtr.prototype.initialize = function() {
    return ContentDecryptionModuleProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.initialize = function(keySystem, securityOrigin, cdmConfig) {
    var params_ = new ContentDecryptionModule_Initialize_Params();
    params_.keySystem = keySystem;
    params_.securityOrigin = securityOrigin;
    params_.cdmConfig = cdmConfig;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_Initialize_Name,
          codec.align(ContentDecryptionModule_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.setServerCertificate = function() {
    return ContentDecryptionModuleProxy.prototype.setServerCertificate
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.setServerCertificate = function(certificateData) {
    var params_ = new ContentDecryptionModule_SetServerCertificate_Params();
    params_.certificateData = certificateData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_SetServerCertificate_Name,
          codec.align(ContentDecryptionModule_SetServerCertificate_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_SetServerCertificate_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_SetServerCertificate_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.getStatusForPolicy = function() {
    return ContentDecryptionModuleProxy.prototype.getStatusForPolicy
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.getStatusForPolicy = function(minHdcpVersion) {
    var params_ = new ContentDecryptionModule_GetStatusForPolicy_Params();
    params_.minHdcpVersion = minHdcpVersion;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_GetStatusForPolicy_Name,
          codec.align(ContentDecryptionModule_GetStatusForPolicy_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_GetStatusForPolicy_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_GetStatusForPolicy_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.createSessionAndGenerateRequest = function() {
    return ContentDecryptionModuleProxy.prototype.createSessionAndGenerateRequest
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.createSessionAndGenerateRequest = function(sessionType, initDataType, initData) {
    var params_ = new ContentDecryptionModule_CreateSessionAndGenerateRequest_Params();
    params_.sessionType = sessionType;
    params_.initDataType = initDataType;
    params_.initData = initData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_CreateSessionAndGenerateRequest_Name,
          codec.align(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.loadSession = function() {
    return ContentDecryptionModuleProxy.prototype.loadSession
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.loadSession = function(sessionType, sessionId) {
    var params_ = new ContentDecryptionModule_LoadSession_Params();
    params_.sessionType = sessionType;
    params_.sessionId = sessionId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_LoadSession_Name,
          codec.align(ContentDecryptionModule_LoadSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_LoadSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_LoadSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.updateSession = function() {
    return ContentDecryptionModuleProxy.prototype.updateSession
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.updateSession = function(sessionId, response) {
    var params_ = new ContentDecryptionModule_UpdateSession_Params();
    params_.sessionId = sessionId;
    params_.response = response;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_UpdateSession_Name,
          codec.align(ContentDecryptionModule_UpdateSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_UpdateSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_UpdateSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.closeSession = function() {
    return ContentDecryptionModuleProxy.prototype.closeSession
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.closeSession = function(sessionId) {
    var params_ = new ContentDecryptionModule_CloseSession_Params();
    params_.sessionId = sessionId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_CloseSession_Name,
          codec.align(ContentDecryptionModule_CloseSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_CloseSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_CloseSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ContentDecryptionModulePtr.prototype.removeSession = function() {
    return ContentDecryptionModuleProxy.prototype.removeSession
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleProxy.prototype.removeSession = function(sessionId) {
    var params_ = new ContentDecryptionModule_RemoveSession_Params();
    params_.sessionId = sessionId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kContentDecryptionModule_RemoveSession_Name,
          codec.align(ContentDecryptionModule_RemoveSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ContentDecryptionModule_RemoveSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ContentDecryptionModule_RemoveSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ContentDecryptionModuleStub(delegate) {
    this.delegate_ = delegate;
  }
  ContentDecryptionModuleStub.prototype.setClient = function(client) {
    return this.delegate_ && this.delegate_.setClient && this.delegate_.setClient(client);
  }
  ContentDecryptionModuleStub.prototype.initialize = function(keySystem, securityOrigin, cdmConfig) {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize(keySystem, securityOrigin, cdmConfig);
  }
  ContentDecryptionModuleStub.prototype.setServerCertificate = function(certificateData) {
    return this.delegate_ && this.delegate_.setServerCertificate && this.delegate_.setServerCertificate(certificateData);
  }
  ContentDecryptionModuleStub.prototype.getStatusForPolicy = function(minHdcpVersion) {
    return this.delegate_ && this.delegate_.getStatusForPolicy && this.delegate_.getStatusForPolicy(minHdcpVersion);
  }
  ContentDecryptionModuleStub.prototype.createSessionAndGenerateRequest = function(sessionType, initDataType, initData) {
    return this.delegate_ && this.delegate_.createSessionAndGenerateRequest && this.delegate_.createSessionAndGenerateRequest(sessionType, initDataType, initData);
  }
  ContentDecryptionModuleStub.prototype.loadSession = function(sessionType, sessionId) {
    return this.delegate_ && this.delegate_.loadSession && this.delegate_.loadSession(sessionType, sessionId);
  }
  ContentDecryptionModuleStub.prototype.updateSession = function(sessionId, response) {
    return this.delegate_ && this.delegate_.updateSession && this.delegate_.updateSession(sessionId, response);
  }
  ContentDecryptionModuleStub.prototype.closeSession = function(sessionId) {
    return this.delegate_ && this.delegate_.closeSession && this.delegate_.closeSession(sessionId);
  }
  ContentDecryptionModuleStub.prototype.removeSession = function(sessionId) {
    return this.delegate_ && this.delegate_.removeSession && this.delegate_.removeSession(sessionId);
  }

  ContentDecryptionModuleStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentDecryptionModule_SetClient_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_SetClient_Params);
      this.setClient(params.client);
      return true;
    default:
      return false;
    }
  };

  ContentDecryptionModuleStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentDecryptionModule_Initialize_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_Initialize_Params);
      this.initialize(params.keySystem, params.securityOrigin, params.cdmConfig).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_Initialize_ResponseParams();
        responseParams.result = response.result;
        responseParams.cdmId = response.cdmId;
        responseParams.decryptor = response.decryptor;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_Initialize_Name,
            codec.align(ContentDecryptionModule_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_SetServerCertificate_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_SetServerCertificate_Params);
      this.setServerCertificate(params.certificateData).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_SetServerCertificate_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_SetServerCertificate_Name,
            codec.align(ContentDecryptionModule_SetServerCertificate_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_SetServerCertificate_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_GetStatusForPolicy_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_GetStatusForPolicy_Params);
      this.getStatusForPolicy(params.minHdcpVersion).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_GetStatusForPolicy_ResponseParams();
        responseParams.result = response.result;
        responseParams.keyStatus = response.keyStatus;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_GetStatusForPolicy_Name,
            codec.align(ContentDecryptionModule_GetStatusForPolicy_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_GetStatusForPolicy_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_CreateSessionAndGenerateRequest_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params);
      this.createSessionAndGenerateRequest(params.sessionType, params.initDataType, params.initData).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams();
        responseParams.result = response.result;
        responseParams.sessionId = response.sessionId;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_CreateSessionAndGenerateRequest_Name,
            codec.align(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_LoadSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_LoadSession_Params);
      this.loadSession(params.sessionType, params.sessionId).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_LoadSession_ResponseParams();
        responseParams.result = response.result;
        responseParams.sessionId = response.sessionId;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_LoadSession_Name,
            codec.align(ContentDecryptionModule_LoadSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_LoadSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_UpdateSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_UpdateSession_Params);
      this.updateSession(params.sessionId, params.response).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_UpdateSession_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_UpdateSession_Name,
            codec.align(ContentDecryptionModule_UpdateSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_UpdateSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_CloseSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_CloseSession_Params);
      this.closeSession(params.sessionId).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_CloseSession_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_CloseSession_Name,
            codec.align(ContentDecryptionModule_CloseSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_CloseSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kContentDecryptionModule_RemoveSession_Name:
      var params = reader.decodeStruct(ContentDecryptionModule_RemoveSession_Params);
      this.removeSession(params.sessionId).then(function(response) {
        var responseParams =
            new ContentDecryptionModule_RemoveSession_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kContentDecryptionModule_RemoveSession_Name,
            codec.align(ContentDecryptionModule_RemoveSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ContentDecryptionModule_RemoveSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateContentDecryptionModuleRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentDecryptionModule_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModule_SetClient_Params;
      break;
      case kContentDecryptionModule_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_Initialize_Params;
      break;
      case kContentDecryptionModule_SetServerCertificate_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_SetServerCertificate_Params;
      break;
      case kContentDecryptionModule_GetStatusForPolicy_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_GetStatusForPolicy_Params;
      break;
      case kContentDecryptionModule_CreateSessionAndGenerateRequest_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_CreateSessionAndGenerateRequest_Params;
      break;
      case kContentDecryptionModule_LoadSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_LoadSession_Params;
      break;
      case kContentDecryptionModule_UpdateSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_UpdateSession_Params;
      break;
      case kContentDecryptionModule_CloseSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_CloseSession_Params;
      break;
      case kContentDecryptionModule_RemoveSession_Name:
        if (message.expectsResponse())
          paramsClass = ContentDecryptionModule_RemoveSession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentDecryptionModuleResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kContentDecryptionModule_Initialize_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_Initialize_ResponseParams;
        break;
      case kContentDecryptionModule_SetServerCertificate_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_SetServerCertificate_ResponseParams;
        break;
      case kContentDecryptionModule_GetStatusForPolicy_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_GetStatusForPolicy_ResponseParams;
        break;
      case kContentDecryptionModule_CreateSessionAndGenerateRequest_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams;
        break;
      case kContentDecryptionModule_LoadSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_LoadSession_ResponseParams;
        break;
      case kContentDecryptionModule_UpdateSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_UpdateSession_ResponseParams;
        break;
      case kContentDecryptionModule_CloseSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_CloseSession_ResponseParams;
        break;
      case kContentDecryptionModule_RemoveSession_Name:
        if (message.isResponse())
          paramsClass = ContentDecryptionModule_RemoveSession_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ContentDecryptionModule = {
    name: 'media.mojom.ContentDecryptionModule',
    kVersion: 0,
    ptrClass: ContentDecryptionModulePtr,
    proxyClass: ContentDecryptionModuleProxy,
    stubClass: ContentDecryptionModuleStub,
    validateRequest: validateContentDecryptionModuleRequest,
    validateResponse: validateContentDecryptionModuleResponse,
    mojomId: 'media/mojo/interfaces/content_decryption_module.mojom',
    fuzzMethods: {
      setClient: {
        params: ContentDecryptionModule_SetClient_Params,
      },
      initialize: {
        params: ContentDecryptionModule_Initialize_Params,
      },
      setServerCertificate: {
        params: ContentDecryptionModule_SetServerCertificate_Params,
      },
      getStatusForPolicy: {
        params: ContentDecryptionModule_GetStatusForPolicy_Params,
      },
      createSessionAndGenerateRequest: {
        params: ContentDecryptionModule_CreateSessionAndGenerateRequest_Params,
      },
      loadSession: {
        params: ContentDecryptionModule_LoadSession_Params,
      },
      updateSession: {
        params: ContentDecryptionModule_UpdateSession_Params,
      },
      closeSession: {
        params: ContentDecryptionModule_CloseSession_Params,
      },
      removeSession: {
        params: ContentDecryptionModule_RemoveSession_Params,
      },
    },
  };
  ContentDecryptionModuleStub.prototype.validator = validateContentDecryptionModuleRequest;
  ContentDecryptionModuleProxy.prototype.validator = validateContentDecryptionModuleResponse;
  var kContentDecryptionModuleClient_OnSessionMessage_Name = 1662023783;
  var kContentDecryptionModuleClient_OnSessionClosed_Name = 476449832;
  var kContentDecryptionModuleClient_OnSessionKeysChange_Name = 294335746;
  var kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name = 886706572;

  function ContentDecryptionModuleClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ContentDecryptionModuleClient,
                                                   handleOrPtrInfo);
  }

  function ContentDecryptionModuleClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ContentDecryptionModuleClient, associatedInterfacePtrInfo);
  }

  ContentDecryptionModuleClientAssociatedPtr.prototype =
      Object.create(ContentDecryptionModuleClientPtr.prototype);
  ContentDecryptionModuleClientAssociatedPtr.prototype.constructor =
      ContentDecryptionModuleClientAssociatedPtr;

  function ContentDecryptionModuleClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ContentDecryptionModuleClientPtr.prototype.onSessionMessage = function() {
    return ContentDecryptionModuleClientProxy.prototype.onSessionMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleClientProxy.prototype.onSessionMessage = function(sessionId, messageType, message) {
    var params_ = new ContentDecryptionModuleClient_OnSessionMessage_Params();
    params_.sessionId = sessionId;
    params_.messageType = messageType;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kContentDecryptionModuleClient_OnSessionMessage_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionMessage_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientPtr.prototype.onSessionClosed = function() {
    return ContentDecryptionModuleClientProxy.prototype.onSessionClosed
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleClientProxy.prototype.onSessionClosed = function(sessionId) {
    var params_ = new ContentDecryptionModuleClient_OnSessionClosed_Params();
    params_.sessionId = sessionId;
    var builder = new codec.MessageV0Builder(
        kContentDecryptionModuleClient_OnSessionClosed_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionClosed_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionClosed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientPtr.prototype.onSessionKeysChange = function() {
    return ContentDecryptionModuleClientProxy.prototype.onSessionKeysChange
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleClientProxy.prototype.onSessionKeysChange = function(sessionId, hasAdditionalUsableKey, keysInfo) {
    var params_ = new ContentDecryptionModuleClient_OnSessionKeysChange_Params();
    params_.sessionId = sessionId;
    params_.hasAdditionalUsableKey = hasAdditionalUsableKey;
    params_.keysInfo = keysInfo;
    var builder = new codec.MessageV0Builder(
        kContentDecryptionModuleClient_OnSessionKeysChange_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionKeysChange_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionKeysChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ContentDecryptionModuleClientPtr.prototype.onSessionExpirationUpdate = function() {
    return ContentDecryptionModuleClientProxy.prototype.onSessionExpirationUpdate
        .apply(this.ptr.getProxy(), arguments);
  };

  ContentDecryptionModuleClientProxy.prototype.onSessionExpirationUpdate = function(sessionId, newExpiryTimeSec) {
    var params_ = new ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params();
    params_.sessionId = sessionId;
    params_.newExpiryTimeSec = newExpiryTimeSec;
    var builder = new codec.MessageV0Builder(
        kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name,
        codec.align(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params.encodedSize));
    builder.encodeStruct(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ContentDecryptionModuleClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ContentDecryptionModuleClientStub.prototype.onSessionMessage = function(sessionId, messageType, message) {
    return this.delegate_ && this.delegate_.onSessionMessage && this.delegate_.onSessionMessage(sessionId, messageType, message);
  }
  ContentDecryptionModuleClientStub.prototype.onSessionClosed = function(sessionId) {
    return this.delegate_ && this.delegate_.onSessionClosed && this.delegate_.onSessionClosed(sessionId);
  }
  ContentDecryptionModuleClientStub.prototype.onSessionKeysChange = function(sessionId, hasAdditionalUsableKey, keysInfo) {
    return this.delegate_ && this.delegate_.onSessionKeysChange && this.delegate_.onSessionKeysChange(sessionId, hasAdditionalUsableKey, keysInfo);
  }
  ContentDecryptionModuleClientStub.prototype.onSessionExpirationUpdate = function(sessionId, newExpiryTimeSec) {
    return this.delegate_ && this.delegate_.onSessionExpirationUpdate && this.delegate_.onSessionExpirationUpdate(sessionId, newExpiryTimeSec);
  }

  ContentDecryptionModuleClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kContentDecryptionModuleClient_OnSessionMessage_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionMessage_Params);
      this.onSessionMessage(params.sessionId, params.messageType, params.message);
      return true;
    case kContentDecryptionModuleClient_OnSessionClosed_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionClosed_Params);
      this.onSessionClosed(params.sessionId);
      return true;
    case kContentDecryptionModuleClient_OnSessionKeysChange_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionKeysChange_Params);
      this.onSessionKeysChange(params.sessionId, params.hasAdditionalUsableKey, params.keysInfo);
      return true;
    case kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name:
      var params = reader.decodeStruct(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params);
      this.onSessionExpirationUpdate(params.sessionId, params.newExpiryTimeSec);
      return true;
    default:
      return false;
    }
  };

  ContentDecryptionModuleClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateContentDecryptionModuleClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kContentDecryptionModuleClient_OnSessionMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionMessage_Params;
      break;
      case kContentDecryptionModuleClient_OnSessionClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionClosed_Params;
      break;
      case kContentDecryptionModuleClient_OnSessionKeysChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionKeysChange_Params;
      break;
      case kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateContentDecryptionModuleClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ContentDecryptionModuleClient = {
    name: 'media.mojom.ContentDecryptionModuleClient',
    kVersion: 0,
    ptrClass: ContentDecryptionModuleClientPtr,
    proxyClass: ContentDecryptionModuleClientProxy,
    stubClass: ContentDecryptionModuleClientStub,
    validateRequest: validateContentDecryptionModuleClientRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/content_decryption_module.mojom',
    fuzzMethods: {
      onSessionMessage: {
        params: ContentDecryptionModuleClient_OnSessionMessage_Params,
      },
      onSessionClosed: {
        params: ContentDecryptionModuleClient_OnSessionClosed_Params,
      },
      onSessionKeysChange: {
        params: ContentDecryptionModuleClient_OnSessionKeysChange_Params,
      },
      onSessionExpirationUpdate: {
        params: ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params,
      },
    },
  };
  ContentDecryptionModuleClientStub.prototype.validator = validateContentDecryptionModuleClientRequest;
  ContentDecryptionModuleClientProxy.prototype.validator = null;
  var kCdmFactory_CreateCdm_Name = 1237819256;

  function CdmFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CdmFactory,
                                                   handleOrPtrInfo);
  }

  function CdmFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CdmFactory, associatedInterfacePtrInfo);
  }

  CdmFactoryAssociatedPtr.prototype =
      Object.create(CdmFactoryPtr.prototype);
  CdmFactoryAssociatedPtr.prototype.constructor =
      CdmFactoryAssociatedPtr;

  function CdmFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  CdmFactoryPtr.prototype.createCdm = function() {
    return CdmFactoryProxy.prototype.createCdm
        .apply(this.ptr.getProxy(), arguments);
  };

  CdmFactoryProxy.prototype.createCdm = function(keySystem, cdm) {
    var params_ = new CdmFactory_CreateCdm_Params();
    params_.keySystem = keySystem;
    params_.cdm = cdm;
    var builder = new codec.MessageV0Builder(
        kCdmFactory_CreateCdm_Name,
        codec.align(CdmFactory_CreateCdm_Params.encodedSize));
    builder.encodeStruct(CdmFactory_CreateCdm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CdmFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  CdmFactoryStub.prototype.createCdm = function(keySystem, cdm) {
    return this.delegate_ && this.delegate_.createCdm && this.delegate_.createCdm(keySystem, cdm);
  }

  CdmFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCdmFactory_CreateCdm_Name:
      var params = reader.decodeStruct(CdmFactory_CreateCdm_Params);
      this.createCdm(params.keySystem, params.cdm);
      return true;
    default:
      return false;
    }
  };

  CdmFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCdmFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCdmFactory_CreateCdm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CdmFactory_CreateCdm_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCdmFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CdmFactory = {
    name: 'media.mojom.CdmFactory',
    kVersion: 0,
    ptrClass: CdmFactoryPtr,
    proxyClass: CdmFactoryProxy,
    stubClass: CdmFactoryStub,
    validateRequest: validateCdmFactoryRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/content_decryption_module.mojom',
    fuzzMethods: {
      createCdm: {
        params: CdmFactory_CreateCdm_Params,
      },
    },
  };
  CdmFactoryStub.prototype.validator = validateCdmFactoryRequest;
  CdmFactoryProxy.prototype.validator = null;
  exports.EmeInitDataType = EmeInitDataType;
  exports.CdmSessionType = CdmSessionType;
  exports.CdmMessageType = CdmMessageType;
  exports.CdmKeyStatus = CdmKeyStatus;
  exports.HdcpVersion = HdcpVersion;
  exports.CdmConfig = CdmConfig;
  exports.CdmPromiseResult = CdmPromiseResult;
  exports.CdmKeyInformation = CdmKeyInformation;
  exports.ContentDecryptionModule = ContentDecryptionModule;
  exports.ContentDecryptionModulePtr = ContentDecryptionModulePtr;
  exports.ContentDecryptionModuleAssociatedPtr = ContentDecryptionModuleAssociatedPtr;
  exports.ContentDecryptionModuleClient = ContentDecryptionModuleClient;
  exports.ContentDecryptionModuleClientPtr = ContentDecryptionModuleClientPtr;
  exports.ContentDecryptionModuleClientAssociatedPtr = ContentDecryptionModuleClientAssociatedPtr;
  exports.CdmFactory = CdmFactory;
  exports.CdmFactoryPtr = CdmFactoryPtr;
  exports.CdmFactoryAssociatedPtr = CdmFactoryAssociatedPtr;
})();