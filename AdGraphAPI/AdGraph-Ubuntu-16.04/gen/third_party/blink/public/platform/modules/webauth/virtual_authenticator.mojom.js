// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('webauth.test.mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }
  var authenticator$ =
      mojo.internal.exposeNamespace('webauth.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/webauth/authenticator.mojom', 'authenticator.mojom.js');
  }


  var ClientToAuthenticatorProtocol = {};
  ClientToAuthenticatorProtocol.U2F = 0;
  ClientToAuthenticatorProtocol.CTAP2 = ClientToAuthenticatorProtocol.U2F + 1;

  ClientToAuthenticatorProtocol.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ClientToAuthenticatorProtocol.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function VirtualAuthenticatorOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorOptions.prototype.initDefaults_ = function() {
    this.protocol = 0;
    this.transport = 0;
    this.attachment = 0;
    this.hasResidentKey = false;
    this.hasUserVerification = false;
  };
  VirtualAuthenticatorOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorOptions.generate = function(generator_) {
    var generated = new VirtualAuthenticatorOptions;
    generated.protocol = generator_.generateEnum(0, 1);
    generated.transport = generator_.generateEnum(0, 2);
    generated.attachment = generator_.generateEnum(0, 2);
    generated.hasResidentKey = generator_.generateBool();
    generated.hasUserVerification = generator_.generateBool();
    return generated;
  };

  VirtualAuthenticatorOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.protocol = mutator_.mutateEnum(this.protocol, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.transport = mutator_.mutateEnum(this.transport, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.attachment = mutator_.mutateEnum(this.attachment, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.hasResidentKey = mutator_.mutateBool(this.hasResidentKey);
    }
    if (mutator_.chooseMutateField()) {
      this.hasUserVerification = mutator_.mutateBool(this.hasUserVerification);
    }
    return this;
  };
  VirtualAuthenticatorOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorOptions.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticatorOptions.protocol
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClientToAuthenticatorProtocol);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VirtualAuthenticatorOptions.transport
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, authenticator$.AuthenticatorTransport);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VirtualAuthenticatorOptions.attachment
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, authenticator$.AuthenticatorAttachment);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  VirtualAuthenticatorOptions.encodedSize = codec.kStructHeaderSize + 16;

  VirtualAuthenticatorOptions.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.protocol = decoder.decodeStruct(codec.Int32);
    val.transport = decoder.decodeStruct(codec.Int32);
    val.attachment = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.hasResidentKey = (packed >> 0) & 1 ? true : false;
    val.hasUserVerification = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VirtualAuthenticatorOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.protocol);
    encoder.encodeStruct(codec.Int32, val.transport);
    encoder.encodeStruct(codec.Int32, val.attachment);
    packed = 0;
    packed |= (val.hasResidentKey & 1) << 0
    packed |= (val.hasUserVerification & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RegisteredKey(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RegisteredKey.prototype.initDefaults_ = function() {
    this.keyHandle = null;
    this.applicationParameter = null;
    this.privateKey = null;
    this.counter = 0;
  };
  RegisteredKey.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RegisteredKey.generate = function(generator_) {
    var generated = new RegisteredKey;
    generated.keyHandle = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.applicationParameter = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.privateKey = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.counter = generator_.generateInt32();
    return generated;
  };

  RegisteredKey.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keyHandle = mutator_.mutateArray(this.keyHandle, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.applicationParameter = mutator_.mutateArray(this.applicationParameter, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.privateKey = mutator_.mutateArray(this.privateKey, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.counter = mutator_.mutateInt32(this.counter);
    }
    return this;
  };
  RegisteredKey.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RegisteredKey.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RegisteredKey.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RegisteredKey.validate = function(messageValidator, offset) {
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


    // validate RegisteredKey.keyHandle
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RegisteredKey.applicationParameter
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RegisteredKey.privateKey
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  RegisteredKey.encodedSize = codec.kStructHeaderSize + 32;

  RegisteredKey.decode = function(decoder) {
    var packed;
    var val = new RegisteredKey();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyHandle = decoder.decodeArrayPointer(codec.Uint8);
    val.applicationParameter = decoder.decodeArrayPointer(codec.Uint8);
    val.privateKey = decoder.decodeArrayPointer(codec.Uint8);
    val.counter = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RegisteredKey.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RegisteredKey.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.keyHandle);
    encoder.encodeArrayPointer(codec.Uint8, val.applicationParameter);
    encoder.encodeArrayPointer(codec.Uint8, val.privateKey);
    encoder.encodeStruct(codec.Int32, val.counter);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VirtualAuthenticator_GetUniqueId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_GetUniqueId_Params.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticator_GetUniqueId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_GetUniqueId_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticator_GetUniqueId_Params;
    return generated;
  };

  VirtualAuthenticator_GetUniqueId_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticator_GetUniqueId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_GetUniqueId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_GetUniqueId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_GetUniqueId_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_GetUniqueId_Params.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticator_GetUniqueId_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_GetUniqueId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticator_GetUniqueId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_GetUniqueId_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticator_GetUniqueId_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_GetUniqueId_ResponseParams.prototype.initDefaults_ = function() {
    this.id = null;
  };
  VirtualAuthenticator_GetUniqueId_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_GetUniqueId_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticator_GetUniqueId_ResponseParams;
    generated.id = generator_.generateString(false);
    return generated;
  };

  VirtualAuthenticator_GetUniqueId_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    return this;
  };
  VirtualAuthenticator_GetUniqueId_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_GetUniqueId_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_GetUniqueId_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_GetUniqueId_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticator_GetUniqueId_ResponseParams.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticator_GetUniqueId_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticator_GetUniqueId_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_GetUniqueId_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    return val;
  };

  VirtualAuthenticator_GetUniqueId_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_GetUniqueId_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
  };
  function VirtualAuthenticator_AddRegistration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_AddRegistration_Params.prototype.initDefaults_ = function() {
    this.key = null;
  };
  VirtualAuthenticator_AddRegistration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_AddRegistration_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticator_AddRegistration_Params;
    generated.key = generator_.generateStruct(webauth.test.mojom.RegisteredKey, false);
    return generated;
  };

  VirtualAuthenticator_AddRegistration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(webauth.test.mojom.RegisteredKey, false);
    }
    return this;
  };
  VirtualAuthenticator_AddRegistration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_AddRegistration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_AddRegistration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_AddRegistration_Params.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticator_AddRegistration_Params.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, RegisteredKey, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticator_AddRegistration_Params.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticator_AddRegistration_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_AddRegistration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStructPointer(RegisteredKey);
    return val;
  };

  VirtualAuthenticator_AddRegistration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_AddRegistration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(RegisteredKey, val.key);
  };
  function VirtualAuthenticator_AddRegistration_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_AddRegistration_ResponseParams.prototype.initDefaults_ = function() {
    this.added = false;
  };
  VirtualAuthenticator_AddRegistration_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_AddRegistration_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticator_AddRegistration_ResponseParams;
    generated.added = generator_.generateBool();
    return generated;
  };

  VirtualAuthenticator_AddRegistration_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.added = mutator_.mutateBool(this.added);
    }
    return this;
  };
  VirtualAuthenticator_AddRegistration_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_AddRegistration_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_AddRegistration_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_AddRegistration_ResponseParams.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_AddRegistration_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticator_AddRegistration_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_AddRegistration_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.added = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VirtualAuthenticator_AddRegistration_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_AddRegistration_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.added & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VirtualAuthenticator_GetRegistrations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_GetRegistrations_Params.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticator_GetRegistrations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_GetRegistrations_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticator_GetRegistrations_Params;
    return generated;
  };

  VirtualAuthenticator_GetRegistrations_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticator_GetRegistrations_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_GetRegistrations_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_GetRegistrations_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_GetRegistrations_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_GetRegistrations_Params.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticator_GetRegistrations_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_GetRegistrations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticator_GetRegistrations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_GetRegistrations_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticator_GetRegistrations_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_GetRegistrations_ResponseParams.prototype.initDefaults_ = function() {
    this.keys = null;
  };
  VirtualAuthenticator_GetRegistrations_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_GetRegistrations_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticator_GetRegistrations_ResponseParams;
    generated.keys = generator_.generateArray(function() {
      return generator_.generateStruct(webauth.test.mojom.RegisteredKey, false);
    });
    return generated;
  };

  VirtualAuthenticator_GetRegistrations_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keys = mutator_.mutateArray(this.keys, function(val) {
        return mutator_.mutateStruct(webauth.test.mojom.RegisteredKey, false);
      });
    }
    return this;
  };
  VirtualAuthenticator_GetRegistrations_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_GetRegistrations_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_GetRegistrations_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_GetRegistrations_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticator_GetRegistrations_ResponseParams.keys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(RegisteredKey), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticator_GetRegistrations_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticator_GetRegistrations_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_GetRegistrations_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keys = decoder.decodeArrayPointer(new codec.PointerTo(RegisteredKey));
    return val;
  };

  VirtualAuthenticator_GetRegistrations_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_GetRegistrations_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(RegisteredKey), val.keys);
  };
  function VirtualAuthenticator_ClearRegistrations_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_ClearRegistrations_Params.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticator_ClearRegistrations_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_ClearRegistrations_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticator_ClearRegistrations_Params;
    return generated;
  };

  VirtualAuthenticator_ClearRegistrations_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticator_ClearRegistrations_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_ClearRegistrations_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_ClearRegistrations_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_ClearRegistrations_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_ClearRegistrations_Params.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticator_ClearRegistrations_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_ClearRegistrations_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticator_ClearRegistrations_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_ClearRegistrations_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticator_ClearRegistrations_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_ClearRegistrations_ResponseParams.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticator_ClearRegistrations_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_ClearRegistrations_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticator_ClearRegistrations_ResponseParams;
    return generated;
  };

  VirtualAuthenticator_ClearRegistrations_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticator_ClearRegistrations_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_ClearRegistrations_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_ClearRegistrations_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_ClearRegistrations_ResponseParams.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_ClearRegistrations_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticator_ClearRegistrations_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_ClearRegistrations_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticator_ClearRegistrations_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_ClearRegistrations_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticator_SetUserPresence_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_SetUserPresence_Params.prototype.initDefaults_ = function() {
    this.present = false;
  };
  VirtualAuthenticator_SetUserPresence_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_SetUserPresence_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticator_SetUserPresence_Params;
    generated.present = generator_.generateBool();
    return generated;
  };

  VirtualAuthenticator_SetUserPresence_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.present = mutator_.mutateBool(this.present);
    }
    return this;
  };
  VirtualAuthenticator_SetUserPresence_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_SetUserPresence_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_SetUserPresence_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_SetUserPresence_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_SetUserPresence_Params.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticator_SetUserPresence_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_SetUserPresence_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.present = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VirtualAuthenticator_SetUserPresence_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_SetUserPresence_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.present & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VirtualAuthenticator_SetUserPresence_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_SetUserPresence_ResponseParams.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticator_SetUserPresence_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_SetUserPresence_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticator_SetUserPresence_ResponseParams;
    return generated;
  };

  VirtualAuthenticator_SetUserPresence_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticator_SetUserPresence_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_SetUserPresence_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_SetUserPresence_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_SetUserPresence_ResponseParams.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_SetUserPresence_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticator_SetUserPresence_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_SetUserPresence_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticator_SetUserPresence_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_SetUserPresence_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticator_GetUserPresence_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_GetUserPresence_Params.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticator_GetUserPresence_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_GetUserPresence_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticator_GetUserPresence_Params;
    return generated;
  };

  VirtualAuthenticator_GetUserPresence_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticator_GetUserPresence_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_GetUserPresence_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_GetUserPresence_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_GetUserPresence_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_GetUserPresence_Params.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticator_GetUserPresence_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_GetUserPresence_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticator_GetUserPresence_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_GetUserPresence_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticator_GetUserPresence_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticator_GetUserPresence_ResponseParams.prototype.initDefaults_ = function() {
    this.present = false;
  };
  VirtualAuthenticator_GetUserPresence_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticator_GetUserPresence_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticator_GetUserPresence_ResponseParams;
    generated.present = generator_.generateBool();
    return generated;
  };

  VirtualAuthenticator_GetUserPresence_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.present = mutator_.mutateBool(this.present);
    }
    return this;
  };
  VirtualAuthenticator_GetUserPresence_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticator_GetUserPresence_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticator_GetUserPresence_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticator_GetUserPresence_ResponseParams.validate = function(messageValidator, offset) {
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

  VirtualAuthenticator_GetUserPresence_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticator_GetUserPresence_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticator_GetUserPresence_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.present = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VirtualAuthenticator_GetUserPresence_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticator_GetUserPresence_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.present & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VirtualAuthenticatorManager_CreateAuthenticator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_CreateAuthenticator_Params.prototype.initDefaults_ = function() {
    this.options = null;
  };
  VirtualAuthenticatorManager_CreateAuthenticator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_CreateAuthenticator_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_CreateAuthenticator_Params;
    generated.options = generator_.generateStruct(webauth.test.mojom.VirtualAuthenticatorOptions, false);
    return generated;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(webauth.test.mojom.VirtualAuthenticatorOptions, false);
    }
    return this;
  };
  VirtualAuthenticatorManager_CreateAuthenticator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_CreateAuthenticator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_Params.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticatorManager_CreateAuthenticator_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, VirtualAuthenticatorOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_Params.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticatorManager_CreateAuthenticator_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_CreateAuthenticator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.options = decoder.decodeStructPointer(VirtualAuthenticatorOptions);
    return val;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_CreateAuthenticator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(VirtualAuthenticatorOptions, val.options);
  };
  function VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.prototype.initDefaults_ = function() {
    this.authenticator = new VirtualAuthenticatorPtr();
  };
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams;
    generated.authenticator = generator_.generateInterface("webauth.test.mojom.VirtualAuthenticator", false);
    return generated;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.authenticator = mutator_.mutateInterface(this.authenticator, "webauth.test.mojom.VirtualAuthenticator", false);
    }
    return this;
  };
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.authenticator !== null) {
      Array.prototype.push.apply(handles, ["webauth.test.mojom.VirtualAuthenticatorPtr"]);
    }
    return handles;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.authenticator = handles[idx++];;
    return idx;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.authenticator
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.authenticator = decoder.decodeStruct(new codec.Interface(VirtualAuthenticatorPtr));
    return val;
  };

  VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(VirtualAuthenticatorPtr), val.authenticator);
  };
  function VirtualAuthenticatorManager_GetAuthenticators_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_GetAuthenticators_Params.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticatorManager_GetAuthenticators_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_GetAuthenticators_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_GetAuthenticators_Params;
    return generated;
  };

  VirtualAuthenticatorManager_GetAuthenticators_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticatorManager_GetAuthenticators_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorManager_GetAuthenticators_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_GetAuthenticators_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorManager_GetAuthenticators_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticatorManager_GetAuthenticators_Params.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticatorManager_GetAuthenticators_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_GetAuthenticators_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticatorManager_GetAuthenticators_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_GetAuthenticators_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticatorManager_GetAuthenticators_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.prototype.initDefaults_ = function() {
    this.authenticators = null;
  };
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_GetAuthenticators_ResponseParams;
    generated.authenticators = generator_.generateArray(function() {
      return generator_.generateInterface("webauth.test.mojom.VirtualAuthenticator", false);
    });
    return generated;
  };

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.authenticators = mutator_.mutateArray(this.authenticators, function(val) {
        return mutator_.mutateInterface(val, "webauth.test.mojom.VirtualAuthenticator", false);
      });
    }
    return this;
  };
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.authenticators !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.authenticators.map(function(val) {
        if (val) {
          return ["webauth.test.mojom.VirtualAuthenticatorPtr"];
        }
        return [];
      })));
    }
    return handles;
  };

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.authenticators.forEach(function(val) {
      val = handles[idx++];;
    });
    return idx;
  };

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.authenticators
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.Interface(VirtualAuthenticatorPtr), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_GetAuthenticators_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.authenticators = decoder.decodeArrayPointer(new codec.Interface(VirtualAuthenticatorPtr));
    return val;
  };

  VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.Interface(VirtualAuthenticatorPtr), val.authenticators);
  };
  function VirtualAuthenticatorManager_RemoveAuthenticator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_RemoveAuthenticator_Params.prototype.initDefaults_ = function() {
    this.id = null;
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_RemoveAuthenticator_Params;
    generated.id = generator_.generateString(false);
    return generated;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    return this;
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_Params.validate = function(messageValidator, offset) {
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


    // validate VirtualAuthenticatorManager_RemoveAuthenticator_Params.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_Params.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticatorManager_RemoveAuthenticator_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_RemoveAuthenticator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.String);
    return val;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_RemoveAuthenticator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.id);
  };
  function VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.prototype.initDefaults_ = function() {
    this.removed = false;
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams;
    generated.removed = generator_.generateBool();
    return generated;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.removed = mutator_.mutateBool(this.removed);
    }
    return this;
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.validate = function(messageValidator, offset) {
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

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.removed = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.removed & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VirtualAuthenticatorManager_ClearAuthenticators_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_ClearAuthenticators_Params.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticatorManager_ClearAuthenticators_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_ClearAuthenticators_Params.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_ClearAuthenticators_Params;
    return generated;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticatorManager_ClearAuthenticators_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_ClearAuthenticators_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_Params.validate = function(messageValidator, offset) {
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

  VirtualAuthenticatorManager_ClearAuthenticators_Params.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticatorManager_ClearAuthenticators_Params.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_ClearAuthenticators_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_ClearAuthenticators_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.prototype.initDefaults_ = function() {
  };
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.generate = function(generator_) {
    var generated = new VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams;
    return generated;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.validate = function(messageValidator, offset) {
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

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kVirtualAuthenticator_GetUniqueId_Name = 189513917;
  var kVirtualAuthenticator_AddRegistration_Name = 443845986;
  var kVirtualAuthenticator_GetRegistrations_Name = 1304560793;
  var kVirtualAuthenticator_ClearRegistrations_Name = 1271279678;
  var kVirtualAuthenticator_SetUserPresence_Name = 382998706;
  var kVirtualAuthenticator_GetUserPresence_Name = 1121913490;

  function VirtualAuthenticatorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VirtualAuthenticator,
                                                   handleOrPtrInfo);
  }

  function VirtualAuthenticatorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VirtualAuthenticator, associatedInterfacePtrInfo);
  }

  VirtualAuthenticatorAssociatedPtr.prototype =
      Object.create(VirtualAuthenticatorPtr.prototype);
  VirtualAuthenticatorAssociatedPtr.prototype.constructor =
      VirtualAuthenticatorAssociatedPtr;

  function VirtualAuthenticatorProxy(receiver) {
    this.receiver_ = receiver;
  }
  VirtualAuthenticatorPtr.prototype.getUniqueId = function() {
    return VirtualAuthenticatorProxy.prototype.getUniqueId
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorProxy.prototype.getUniqueId = function() {
    var params_ = new VirtualAuthenticator_GetUniqueId_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticator_GetUniqueId_Name,
          codec.align(VirtualAuthenticator_GetUniqueId_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticator_GetUniqueId_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticator_GetUniqueId_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorPtr.prototype.addRegistration = function() {
    return VirtualAuthenticatorProxy.prototype.addRegistration
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorProxy.prototype.addRegistration = function(key) {
    var params_ = new VirtualAuthenticator_AddRegistration_Params();
    params_.key = key;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticator_AddRegistration_Name,
          codec.align(VirtualAuthenticator_AddRegistration_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticator_AddRegistration_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticator_AddRegistration_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorPtr.prototype.getRegistrations = function() {
    return VirtualAuthenticatorProxy.prototype.getRegistrations
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorProxy.prototype.getRegistrations = function() {
    var params_ = new VirtualAuthenticator_GetRegistrations_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticator_GetRegistrations_Name,
          codec.align(VirtualAuthenticator_GetRegistrations_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticator_GetRegistrations_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticator_GetRegistrations_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorPtr.prototype.clearRegistrations = function() {
    return VirtualAuthenticatorProxy.prototype.clearRegistrations
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorProxy.prototype.clearRegistrations = function() {
    var params_ = new VirtualAuthenticator_ClearRegistrations_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticator_ClearRegistrations_Name,
          codec.align(VirtualAuthenticator_ClearRegistrations_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticator_ClearRegistrations_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticator_ClearRegistrations_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorPtr.prototype.setUserPresence = function() {
    return VirtualAuthenticatorProxy.prototype.setUserPresence
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorProxy.prototype.setUserPresence = function(present) {
    var params_ = new VirtualAuthenticator_SetUserPresence_Params();
    params_.present = present;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticator_SetUserPresence_Name,
          codec.align(VirtualAuthenticator_SetUserPresence_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticator_SetUserPresence_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticator_SetUserPresence_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorPtr.prototype.getUserPresence = function() {
    return VirtualAuthenticatorProxy.prototype.getUserPresence
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorProxy.prototype.getUserPresence = function() {
    var params_ = new VirtualAuthenticator_GetUserPresence_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticator_GetUserPresence_Name,
          codec.align(VirtualAuthenticator_GetUserPresence_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticator_GetUserPresence_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticator_GetUserPresence_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VirtualAuthenticatorStub(delegate) {
    this.delegate_ = delegate;
  }
  VirtualAuthenticatorStub.prototype.getUniqueId = function() {
    return this.delegate_ && this.delegate_.getUniqueId && this.delegate_.getUniqueId();
  }
  VirtualAuthenticatorStub.prototype.addRegistration = function(key) {
    return this.delegate_ && this.delegate_.addRegistration && this.delegate_.addRegistration(key);
  }
  VirtualAuthenticatorStub.prototype.getRegistrations = function() {
    return this.delegate_ && this.delegate_.getRegistrations && this.delegate_.getRegistrations();
  }
  VirtualAuthenticatorStub.prototype.clearRegistrations = function() {
    return this.delegate_ && this.delegate_.clearRegistrations && this.delegate_.clearRegistrations();
  }
  VirtualAuthenticatorStub.prototype.setUserPresence = function(present) {
    return this.delegate_ && this.delegate_.setUserPresence && this.delegate_.setUserPresence(present);
  }
  VirtualAuthenticatorStub.prototype.getUserPresence = function() {
    return this.delegate_ && this.delegate_.getUserPresence && this.delegate_.getUserPresence();
  }

  VirtualAuthenticatorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  VirtualAuthenticatorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVirtualAuthenticator_GetUniqueId_Name:
      var params = reader.decodeStruct(VirtualAuthenticator_GetUniqueId_Params);
      this.getUniqueId().then(function(response) {
        var responseParams =
            new VirtualAuthenticator_GetUniqueId_ResponseParams();
        responseParams.id = response.id;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticator_GetUniqueId_Name,
            codec.align(VirtualAuthenticator_GetUniqueId_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticator_GetUniqueId_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticator_AddRegistration_Name:
      var params = reader.decodeStruct(VirtualAuthenticator_AddRegistration_Params);
      this.addRegistration(params.key).then(function(response) {
        var responseParams =
            new VirtualAuthenticator_AddRegistration_ResponseParams();
        responseParams.added = response.added;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticator_AddRegistration_Name,
            codec.align(VirtualAuthenticator_AddRegistration_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticator_AddRegistration_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticator_GetRegistrations_Name:
      var params = reader.decodeStruct(VirtualAuthenticator_GetRegistrations_Params);
      this.getRegistrations().then(function(response) {
        var responseParams =
            new VirtualAuthenticator_GetRegistrations_ResponseParams();
        responseParams.keys = response.keys;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticator_GetRegistrations_Name,
            codec.align(VirtualAuthenticator_GetRegistrations_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticator_GetRegistrations_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticator_ClearRegistrations_Name:
      var params = reader.decodeStruct(VirtualAuthenticator_ClearRegistrations_Params);
      this.clearRegistrations().then(function(response) {
        var responseParams =
            new VirtualAuthenticator_ClearRegistrations_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticator_ClearRegistrations_Name,
            codec.align(VirtualAuthenticator_ClearRegistrations_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticator_ClearRegistrations_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticator_SetUserPresence_Name:
      var params = reader.decodeStruct(VirtualAuthenticator_SetUserPresence_Params);
      this.setUserPresence(params.present).then(function(response) {
        var responseParams =
            new VirtualAuthenticator_SetUserPresence_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticator_SetUserPresence_Name,
            codec.align(VirtualAuthenticator_SetUserPresence_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticator_SetUserPresence_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticator_GetUserPresence_Name:
      var params = reader.decodeStruct(VirtualAuthenticator_GetUserPresence_Params);
      this.getUserPresence().then(function(response) {
        var responseParams =
            new VirtualAuthenticator_GetUserPresence_ResponseParams();
        responseParams.present = response.present;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticator_GetUserPresence_Name,
            codec.align(VirtualAuthenticator_GetUserPresence_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticator_GetUserPresence_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVirtualAuthenticatorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVirtualAuthenticator_GetUniqueId_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticator_GetUniqueId_Params;
      break;
      case kVirtualAuthenticator_AddRegistration_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticator_AddRegistration_Params;
      break;
      case kVirtualAuthenticator_GetRegistrations_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticator_GetRegistrations_Params;
      break;
      case kVirtualAuthenticator_ClearRegistrations_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticator_ClearRegistrations_Params;
      break;
      case kVirtualAuthenticator_SetUserPresence_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticator_SetUserPresence_Params;
      break;
      case kVirtualAuthenticator_GetUserPresence_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticator_GetUserPresence_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVirtualAuthenticatorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVirtualAuthenticator_GetUniqueId_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticator_GetUniqueId_ResponseParams;
        break;
      case kVirtualAuthenticator_AddRegistration_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticator_AddRegistration_ResponseParams;
        break;
      case kVirtualAuthenticator_GetRegistrations_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticator_GetRegistrations_ResponseParams;
        break;
      case kVirtualAuthenticator_ClearRegistrations_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticator_ClearRegistrations_ResponseParams;
        break;
      case kVirtualAuthenticator_SetUserPresence_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticator_SetUserPresence_ResponseParams;
        break;
      case kVirtualAuthenticator_GetUserPresence_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticator_GetUserPresence_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VirtualAuthenticator = {
    name: 'webauth.test.mojom.VirtualAuthenticator',
    kVersion: 0,
    ptrClass: VirtualAuthenticatorPtr,
    proxyClass: VirtualAuthenticatorProxy,
    stubClass: VirtualAuthenticatorStub,
    validateRequest: validateVirtualAuthenticatorRequest,
    validateResponse: validateVirtualAuthenticatorResponse,
    mojomId: 'third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom',
    fuzzMethods: {
      getUniqueId: {
        params: VirtualAuthenticator_GetUniqueId_Params,
      },
      addRegistration: {
        params: VirtualAuthenticator_AddRegistration_Params,
      },
      getRegistrations: {
        params: VirtualAuthenticator_GetRegistrations_Params,
      },
      clearRegistrations: {
        params: VirtualAuthenticator_ClearRegistrations_Params,
      },
      setUserPresence: {
        params: VirtualAuthenticator_SetUserPresence_Params,
      },
      getUserPresence: {
        params: VirtualAuthenticator_GetUserPresence_Params,
      },
    },
  };
  VirtualAuthenticatorStub.prototype.validator = validateVirtualAuthenticatorRequest;
  VirtualAuthenticatorProxy.prototype.validator = validateVirtualAuthenticatorResponse;
  var kVirtualAuthenticatorManager_CreateAuthenticator_Name = 336396233;
  var kVirtualAuthenticatorManager_GetAuthenticators_Name = 508722242;
  var kVirtualAuthenticatorManager_RemoveAuthenticator_Name = 323185560;
  var kVirtualAuthenticatorManager_ClearAuthenticators_Name = 1670243577;

  function VirtualAuthenticatorManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VirtualAuthenticatorManager,
                                                   handleOrPtrInfo);
  }

  function VirtualAuthenticatorManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VirtualAuthenticatorManager, associatedInterfacePtrInfo);
  }

  VirtualAuthenticatorManagerAssociatedPtr.prototype =
      Object.create(VirtualAuthenticatorManagerPtr.prototype);
  VirtualAuthenticatorManagerAssociatedPtr.prototype.constructor =
      VirtualAuthenticatorManagerAssociatedPtr;

  function VirtualAuthenticatorManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  VirtualAuthenticatorManagerPtr.prototype.createAuthenticator = function() {
    return VirtualAuthenticatorManagerProxy.prototype.createAuthenticator
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorManagerProxy.prototype.createAuthenticator = function(options) {
    var params_ = new VirtualAuthenticatorManager_CreateAuthenticator_Params();
    params_.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticatorManager_CreateAuthenticator_Name,
          codec.align(VirtualAuthenticatorManager_CreateAuthenticator_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticatorManager_CreateAuthenticator_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorManagerPtr.prototype.getAuthenticators = function() {
    return VirtualAuthenticatorManagerProxy.prototype.getAuthenticators
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorManagerProxy.prototype.getAuthenticators = function() {
    var params_ = new VirtualAuthenticatorManager_GetAuthenticators_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticatorManager_GetAuthenticators_Name,
          codec.align(VirtualAuthenticatorManager_GetAuthenticators_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticatorManager_GetAuthenticators_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorManagerPtr.prototype.removeAuthenticator = function() {
    return VirtualAuthenticatorManagerProxy.prototype.removeAuthenticator
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorManagerProxy.prototype.removeAuthenticator = function(id) {
    var params_ = new VirtualAuthenticatorManager_RemoveAuthenticator_Params();
    params_.id = id;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticatorManager_RemoveAuthenticator_Name,
          codec.align(VirtualAuthenticatorManager_RemoveAuthenticator_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticatorManager_RemoveAuthenticator_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  VirtualAuthenticatorManagerPtr.prototype.clearAuthenticators = function() {
    return VirtualAuthenticatorManagerProxy.prototype.clearAuthenticators
        .apply(this.ptr.getProxy(), arguments);
  };

  VirtualAuthenticatorManagerProxy.prototype.clearAuthenticators = function() {
    var params_ = new VirtualAuthenticatorManager_ClearAuthenticators_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kVirtualAuthenticatorManager_ClearAuthenticators_Name,
          codec.align(VirtualAuthenticatorManager_ClearAuthenticators_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(VirtualAuthenticatorManager_ClearAuthenticators_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function VirtualAuthenticatorManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  VirtualAuthenticatorManagerStub.prototype.createAuthenticator = function(options) {
    return this.delegate_ && this.delegate_.createAuthenticator && this.delegate_.createAuthenticator(options);
  }
  VirtualAuthenticatorManagerStub.prototype.getAuthenticators = function() {
    return this.delegate_ && this.delegate_.getAuthenticators && this.delegate_.getAuthenticators();
  }
  VirtualAuthenticatorManagerStub.prototype.removeAuthenticator = function(id) {
    return this.delegate_ && this.delegate_.removeAuthenticator && this.delegate_.removeAuthenticator(id);
  }
  VirtualAuthenticatorManagerStub.prototype.clearAuthenticators = function() {
    return this.delegate_ && this.delegate_.clearAuthenticators && this.delegate_.clearAuthenticators();
  }

  VirtualAuthenticatorManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  VirtualAuthenticatorManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVirtualAuthenticatorManager_CreateAuthenticator_Name:
      var params = reader.decodeStruct(VirtualAuthenticatorManager_CreateAuthenticator_Params);
      this.createAuthenticator(params.options).then(function(response) {
        var responseParams =
            new VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams();
        responseParams.authenticator = response.authenticator;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticatorManager_CreateAuthenticator_Name,
            codec.align(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticatorManager_GetAuthenticators_Name:
      var params = reader.decodeStruct(VirtualAuthenticatorManager_GetAuthenticators_Params);
      this.getAuthenticators().then(function(response) {
        var responseParams =
            new VirtualAuthenticatorManager_GetAuthenticators_ResponseParams();
        responseParams.authenticators = response.authenticators;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticatorManager_GetAuthenticators_Name,
            codec.align(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticatorManager_GetAuthenticators_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticatorManager_RemoveAuthenticator_Name:
      var params = reader.decodeStruct(VirtualAuthenticatorManager_RemoveAuthenticator_Params);
      this.removeAuthenticator(params.id).then(function(response) {
        var responseParams =
            new VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams();
        responseParams.removed = response.removed;
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticatorManager_RemoveAuthenticator_Name,
            codec.align(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kVirtualAuthenticatorManager_ClearAuthenticators_Name:
      var params = reader.decodeStruct(VirtualAuthenticatorManager_ClearAuthenticators_Params);
      this.clearAuthenticators().then(function(response) {
        var responseParams =
            new VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kVirtualAuthenticatorManager_ClearAuthenticators_Name,
            codec.align(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateVirtualAuthenticatorManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVirtualAuthenticatorManager_CreateAuthenticator_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticatorManager_CreateAuthenticator_Params;
      break;
      case kVirtualAuthenticatorManager_GetAuthenticators_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticatorManager_GetAuthenticators_Params;
      break;
      case kVirtualAuthenticatorManager_RemoveAuthenticator_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticatorManager_RemoveAuthenticator_Params;
      break;
      case kVirtualAuthenticatorManager_ClearAuthenticators_Name:
        if (message.expectsResponse())
          paramsClass = VirtualAuthenticatorManager_ClearAuthenticators_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVirtualAuthenticatorManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kVirtualAuthenticatorManager_CreateAuthenticator_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams;
        break;
      case kVirtualAuthenticatorManager_GetAuthenticators_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticatorManager_GetAuthenticators_ResponseParams;
        break;
      case kVirtualAuthenticatorManager_RemoveAuthenticator_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams;
        break;
      case kVirtualAuthenticatorManager_ClearAuthenticators_Name:
        if (message.isResponse())
          paramsClass = VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var VirtualAuthenticatorManager = {
    name: 'webauth.test.mojom.VirtualAuthenticatorManager',
    kVersion: 0,
    ptrClass: VirtualAuthenticatorManagerPtr,
    proxyClass: VirtualAuthenticatorManagerProxy,
    stubClass: VirtualAuthenticatorManagerStub,
    validateRequest: validateVirtualAuthenticatorManagerRequest,
    validateResponse: validateVirtualAuthenticatorManagerResponse,
    mojomId: 'third_party/blink/public/platform/modules/webauth/virtual_authenticator.mojom',
    fuzzMethods: {
      createAuthenticator: {
        params: VirtualAuthenticatorManager_CreateAuthenticator_Params,
      },
      getAuthenticators: {
        params: VirtualAuthenticatorManager_GetAuthenticators_Params,
      },
      removeAuthenticator: {
        params: VirtualAuthenticatorManager_RemoveAuthenticator_Params,
      },
      clearAuthenticators: {
        params: VirtualAuthenticatorManager_ClearAuthenticators_Params,
      },
    },
  };
  VirtualAuthenticatorManagerStub.prototype.validator = validateVirtualAuthenticatorManagerRequest;
  VirtualAuthenticatorManagerProxy.prototype.validator = validateVirtualAuthenticatorManagerResponse;
  exports.ClientToAuthenticatorProtocol = ClientToAuthenticatorProtocol;
  exports.VirtualAuthenticatorOptions = VirtualAuthenticatorOptions;
  exports.RegisteredKey = RegisteredKey;
  exports.VirtualAuthenticator = VirtualAuthenticator;
  exports.VirtualAuthenticatorPtr = VirtualAuthenticatorPtr;
  exports.VirtualAuthenticatorAssociatedPtr = VirtualAuthenticatorAssociatedPtr;
  exports.VirtualAuthenticatorManager = VirtualAuthenticatorManager;
  exports.VirtualAuthenticatorManagerPtr = VirtualAuthenticatorManagerPtr;
  exports.VirtualAuthenticatorManagerAssociatedPtr = VirtualAuthenticatorManagerAssociatedPtr;
})();