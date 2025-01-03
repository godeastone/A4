// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/key_system_support.mojom';
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
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', 'media_types.mojom.js');
  }



  function KeySystemSupport_IsKeySystemSupported_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeySystemSupport_IsKeySystemSupported_Params.prototype.initDefaults_ = function() {
    this.keySystem = null;
  };
  KeySystemSupport_IsKeySystemSupported_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeySystemSupport_IsKeySystemSupported_Params.generate = function(generator_) {
    var generated = new KeySystemSupport_IsKeySystemSupported_Params;
    generated.keySystem = generator_.generateString(false);
    return generated;
  };

  KeySystemSupport_IsKeySystemSupported_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keySystem = mutator_.mutateString(this.keySystem, false);
    }
    return this;
  };
  KeySystemSupport_IsKeySystemSupported_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeySystemSupport_IsKeySystemSupported_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeySystemSupport_IsKeySystemSupported_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeySystemSupport_IsKeySystemSupported_Params.validate = function(messageValidator, offset) {
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


    // validate KeySystemSupport_IsKeySystemSupported_Params.keySystem
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeySystemSupport_IsKeySystemSupported_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeySystemSupport_IsKeySystemSupported_Params.decode = function(decoder) {
    var packed;
    var val = new KeySystemSupport_IsKeySystemSupported_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keySystem = decoder.decodeStruct(codec.String);
    return val;
  };

  KeySystemSupport_IsKeySystemSupported_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeySystemSupport_IsKeySystemSupported_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.keySystem);
  };
  function KeySystemSupport_IsKeySystemSupported_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeySystemSupport_IsKeySystemSupported_ResponseParams.prototype.initDefaults_ = function() {
    this.isSupported = false;
    this.supportsPersistentLicense = false;
    this.supportedVideoCodecs = null;
    this.supportedEncryptionSchemes = null;
  };
  KeySystemSupport_IsKeySystemSupported_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  KeySystemSupport_IsKeySystemSupported_ResponseParams.generate = function(generator_) {
    var generated = new KeySystemSupport_IsKeySystemSupported_ResponseParams;
    generated.isSupported = generator_.generateBool();
    generated.supportedVideoCodecs = generator_.generateArray(function() {
      return generator_.generateEnum();
    });
    generated.supportsPersistentLicense = generator_.generateBool();
    generated.supportedEncryptionSchemes = generator_.generateArray(function() {
      return generator_.generateEnum();
    });
    return generated;
  };

  KeySystemSupport_IsKeySystemSupported_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isSupported = mutator_.mutateBool(this.isSupported);
    }
    if (mutator_.chooseMutateField()) {
      this.supportedVideoCodecs = mutator_.mutateArray(this.supportedVideoCodecs, function(val) {
        return mutator_.mutateEnum(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.supportsPersistentLicense = mutator_.mutateBool(this.supportsPersistentLicense);
    }
    if (mutator_.chooseMutateField()) {
      this.supportedEncryptionSchemes = mutator_.mutateArray(this.supportedEncryptionSchemes, function(val) {
        return mutator_.mutateEnum(val);
      });
    }
    return this;
  };
  KeySystemSupport_IsKeySystemSupported_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  KeySystemSupport_IsKeySystemSupported_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  KeySystemSupport_IsKeySystemSupported_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  KeySystemSupport_IsKeySystemSupported_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate KeySystemSupport_IsKeySystemSupported_ResponseParams.supportedVideoCodecs
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, new codec.Enum(media_types$.VideoCodec), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate KeySystemSupport_IsKeySystemSupported_ResponseParams.supportedEncryptionSchemes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 4, new codec.Enum(media_types$.EncryptionMode), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeySystemSupport_IsKeySystemSupported_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  KeySystemSupport_IsKeySystemSupported_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new KeySystemSupport_IsKeySystemSupported_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isSupported = (packed >> 0) & 1 ? true : false;
    val.supportsPersistentLicense = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.supportedVideoCodecs = decoder.decodeArrayPointer(new codec.Enum(media_types$.VideoCodec));
    val.supportedEncryptionSchemes = decoder.decodeArrayPointer(new codec.Enum(media_types$.EncryptionMode));
    return val;
  };

  KeySystemSupport_IsKeySystemSupported_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeySystemSupport_IsKeySystemSupported_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isSupported & 1) << 0
    packed |= (val.supportsPersistentLicense & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.Enum(media_types$.VideoCodec), val.supportedVideoCodecs);
    encoder.encodeArrayPointer(new codec.Enum(media_types$.EncryptionMode), val.supportedEncryptionSchemes);
  };
  var kKeySystemSupport_IsKeySystemSupported_Name = 1867052781;

  function KeySystemSupportPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(KeySystemSupport,
                                                   handleOrPtrInfo);
  }

  function KeySystemSupportAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        KeySystemSupport, associatedInterfacePtrInfo);
  }

  KeySystemSupportAssociatedPtr.prototype =
      Object.create(KeySystemSupportPtr.prototype);
  KeySystemSupportAssociatedPtr.prototype.constructor =
      KeySystemSupportAssociatedPtr;

  function KeySystemSupportProxy(receiver) {
    this.receiver_ = receiver;
  }
  KeySystemSupportPtr.prototype.isKeySystemSupported = function() {
    return KeySystemSupportProxy.prototype.isKeySystemSupported
        .apply(this.ptr.getProxy(), arguments);
  };

  KeySystemSupportProxy.prototype.isKeySystemSupported = function(keySystem) {
    var params_ = new KeySystemSupport_IsKeySystemSupported_Params();
    params_.keySystem = keySystem;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kKeySystemSupport_IsKeySystemSupported_Name,
          codec.align(KeySystemSupport_IsKeySystemSupported_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(KeySystemSupport_IsKeySystemSupported_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(KeySystemSupport_IsKeySystemSupported_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function KeySystemSupportStub(delegate) {
    this.delegate_ = delegate;
  }
  KeySystemSupportStub.prototype.isKeySystemSupported = function(keySystem) {
    return this.delegate_ && this.delegate_.isKeySystemSupported && this.delegate_.isKeySystemSupported(keySystem);
  }

  KeySystemSupportStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  KeySystemSupportStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kKeySystemSupport_IsKeySystemSupported_Name:
      var params = reader.decodeStruct(KeySystemSupport_IsKeySystemSupported_Params);
      this.isKeySystemSupported(params.keySystem).then(function(response) {
        var responseParams =
            new KeySystemSupport_IsKeySystemSupported_ResponseParams();
        responseParams.isSupported = response.isSupported;
        responseParams.supportedVideoCodecs = response.supportedVideoCodecs;
        responseParams.supportsPersistentLicense = response.supportsPersistentLicense;
        responseParams.supportedEncryptionSchemes = response.supportedEncryptionSchemes;
        var builder = new codec.MessageV1Builder(
            kKeySystemSupport_IsKeySystemSupported_Name,
            codec.align(KeySystemSupport_IsKeySystemSupported_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(KeySystemSupport_IsKeySystemSupported_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateKeySystemSupportRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kKeySystemSupport_IsKeySystemSupported_Name:
        if (message.expectsResponse())
          paramsClass = KeySystemSupport_IsKeySystemSupported_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateKeySystemSupportResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kKeySystemSupport_IsKeySystemSupported_Name:
        if (message.isResponse())
          paramsClass = KeySystemSupport_IsKeySystemSupported_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var KeySystemSupport = {
    name: 'media.mojom.KeySystemSupport',
    kVersion: 0,
    ptrClass: KeySystemSupportPtr,
    proxyClass: KeySystemSupportProxy,
    stubClass: KeySystemSupportStub,
    validateRequest: validateKeySystemSupportRequest,
    validateResponse: validateKeySystemSupportResponse,
    mojomId: 'media/mojo/interfaces/key_system_support.mojom',
    fuzzMethods: {
      isKeySystemSupported: {
        params: KeySystemSupport_IsKeySystemSupported_Params,
      },
    },
  };
  KeySystemSupportStub.prototype.validator = validateKeySystemSupportRequest;
  KeySystemSupportProxy.prototype.validator = validateKeySystemSupportResponse;
  exports.KeySystemSupport = KeySystemSupport;
  exports.KeySystemSupportPtr = KeySystemSupportPtr;
  exports.KeySystemSupportAssociatedPtr = KeySystemSupportAssociatedPtr;
})();