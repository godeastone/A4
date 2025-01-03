// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/ssl_config.mojom';
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


  var SSLVersion = {};
  SSLVersion.kTLS1 = 0;
  SSLVersion.kTLS11 = SSLVersion.kTLS1 + 1;
  SSLVersion.kTLS12 = SSLVersion.kTLS11 + 1;
  SSLVersion.kTLS13 = SSLVersion.kTLS12 + 1;

  SSLVersion.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  SSLVersion.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TLS13Variant = {};
  TLS13Variant.kDraft23 = 0;
  TLS13Variant.kDraft28 = TLS13Variant.kDraft23 + 1;

  TLS13Variant.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  TLS13Variant.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function SSLConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SSLConfig.prototype.initDefaults_ = function() {
    this.revCheckingEnabled = false;
    this.revCheckingRequiredLocalAnchors = false;
    this.sha1LocalAnchorsEnabled = false;
    this.symantecEnforcementDisabled = false;
    this.versionMin = SSLVersion.kTLS1;
    this.versionMax = SSLVersion.kTLS12;
    this.tls13Variant = TLS13Variant.kDraft23;
    this.disabledCipherSuites = null;
  };
  SSLConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SSLConfig.generate = function(generator_) {
    var generated = new SSLConfig;
    generated.revCheckingEnabled = generator_.generateBool();
    generated.revCheckingRequiredLocalAnchors = generator_.generateBool();
    generated.sha1LocalAnchorsEnabled = generator_.generateBool();
    generated.symantecEnforcementDisabled = generator_.generateBool();
    generated.versionMin = generator_.generateEnum(0, 3);
    generated.versionMax = generator_.generateEnum(0, 3);
    generated.tls13Variant = generator_.generateEnum(0, 1);
    generated.disabledCipherSuites = generator_.generateArray(function() {
      return generator_.generateUint16();
    });
    return generated;
  };

  SSLConfig.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.revCheckingEnabled = mutator_.mutateBool(this.revCheckingEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.revCheckingRequiredLocalAnchors = mutator_.mutateBool(this.revCheckingRequiredLocalAnchors);
    }
    if (mutator_.chooseMutateField()) {
      this.sha1LocalAnchorsEnabled = mutator_.mutateBool(this.sha1LocalAnchorsEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.symantecEnforcementDisabled = mutator_.mutateBool(this.symantecEnforcementDisabled);
    }
    if (mutator_.chooseMutateField()) {
      this.versionMin = mutator_.mutateEnum(this.versionMin, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.versionMax = mutator_.mutateEnum(this.versionMax, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.tls13Variant = mutator_.mutateEnum(this.tls13Variant, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.disabledCipherSuites = mutator_.mutateArray(this.disabledCipherSuites, function(val) {
        return mutator_.mutateUint16(val);
      });
    }
    return this;
  };
  SSLConfig.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SSLConfig.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SSLConfig.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SSLConfig.validate = function(messageValidator, offset) {
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






    // validate SSLConfig.versionMin
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, SSLVersion);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SSLConfig.versionMax
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, SSLVersion);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SSLConfig.tls13Variant
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, TLS13Variant);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SSLConfig.disabledCipherSuites
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 2, codec.Uint16, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SSLConfig.encodedSize = codec.kStructHeaderSize + 24;

  SSLConfig.decode = function(decoder) {
    var packed;
    var val = new SSLConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.revCheckingEnabled = (packed >> 0) & 1 ? true : false;
    val.revCheckingRequiredLocalAnchors = (packed >> 1) & 1 ? true : false;
    val.sha1LocalAnchorsEnabled = (packed >> 2) & 1 ? true : false;
    val.symantecEnforcementDisabled = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.versionMin = decoder.decodeStruct(codec.Int32);
    val.versionMax = decoder.decodeStruct(codec.Int32);
    val.tls13Variant = decoder.decodeStruct(codec.Int32);
    val.disabledCipherSuites = decoder.decodeArrayPointer(codec.Uint16);
    return val;
  };

  SSLConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SSLConfig.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.revCheckingEnabled & 1) << 0
    packed |= (val.revCheckingRequiredLocalAnchors & 1) << 1
    packed |= (val.sha1LocalAnchorsEnabled & 1) << 2
    packed |= (val.symantecEnforcementDisabled & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.versionMin);
    encoder.encodeStruct(codec.Int32, val.versionMax);
    encoder.encodeStruct(codec.Int32, val.tls13Variant);
    encoder.encodeArrayPointer(codec.Uint16, val.disabledCipherSuites);
  };
  function SSLConfigClient_OnSSLConfigUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SSLConfigClient_OnSSLConfigUpdated_Params.prototype.initDefaults_ = function() {
    this.sslConfig = null;
  };
  SSLConfigClient_OnSSLConfigUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SSLConfigClient_OnSSLConfigUpdated_Params.generate = function(generator_) {
    var generated = new SSLConfigClient_OnSSLConfigUpdated_Params;
    generated.sslConfig = generator_.generateStruct(network.mojom.SSLConfig, false);
    return generated;
  };

  SSLConfigClient_OnSSLConfigUpdated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sslConfig = mutator_.mutateStruct(network.mojom.SSLConfig, false);
    }
    return this;
  };
  SSLConfigClient_OnSSLConfigUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SSLConfigClient_OnSSLConfigUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SSLConfigClient_OnSSLConfigUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SSLConfigClient_OnSSLConfigUpdated_Params.validate = function(messageValidator, offset) {
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


    // validate SSLConfigClient_OnSSLConfigUpdated_Params.sslConfig
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SSLConfig, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SSLConfigClient_OnSSLConfigUpdated_Params.encodedSize = codec.kStructHeaderSize + 8;

  SSLConfigClient_OnSSLConfigUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new SSLConfigClient_OnSSLConfigUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sslConfig = decoder.decodeStructPointer(SSLConfig);
    return val;
  };

  SSLConfigClient_OnSSLConfigUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SSLConfigClient_OnSSLConfigUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SSLConfig, val.sslConfig);
  };
  var kSSLConfigClient_OnSSLConfigUpdated_Name = 1090996729;

  function SSLConfigClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SSLConfigClient,
                                                   handleOrPtrInfo);
  }

  function SSLConfigClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SSLConfigClient, associatedInterfacePtrInfo);
  }

  SSLConfigClientAssociatedPtr.prototype =
      Object.create(SSLConfigClientPtr.prototype);
  SSLConfigClientAssociatedPtr.prototype.constructor =
      SSLConfigClientAssociatedPtr;

  function SSLConfigClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  SSLConfigClientPtr.prototype.onSSLConfigUpdated = function() {
    return SSLConfigClientProxy.prototype.onSSLConfigUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  SSLConfigClientProxy.prototype.onSSLConfigUpdated = function(sslConfig) {
    var params_ = new SSLConfigClient_OnSSLConfigUpdated_Params();
    params_.sslConfig = sslConfig;
    var builder = new codec.MessageV0Builder(
        kSSLConfigClient_OnSSLConfigUpdated_Name,
        codec.align(SSLConfigClient_OnSSLConfigUpdated_Params.encodedSize));
    builder.encodeStruct(SSLConfigClient_OnSSLConfigUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SSLConfigClientStub(delegate) {
    this.delegate_ = delegate;
  }
  SSLConfigClientStub.prototype.onSSLConfigUpdated = function(sslConfig) {
    return this.delegate_ && this.delegate_.onSSLConfigUpdated && this.delegate_.onSSLConfigUpdated(sslConfig);
  }

  SSLConfigClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSSLConfigClient_OnSSLConfigUpdated_Name:
      var params = reader.decodeStruct(SSLConfigClient_OnSSLConfigUpdated_Params);
      this.onSSLConfigUpdated(params.sslConfig);
      return true;
    default:
      return false;
    }
  };

  SSLConfigClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSSLConfigClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSSLConfigClient_OnSSLConfigUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SSLConfigClient_OnSSLConfigUpdated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSSLConfigClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SSLConfigClient = {
    name: 'network.mojom.SSLConfigClient',
    kVersion: 0,
    ptrClass: SSLConfigClientPtr,
    proxyClass: SSLConfigClientProxy,
    stubClass: SSLConfigClientStub,
    validateRequest: validateSSLConfigClientRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/ssl_config.mojom',
    fuzzMethods: {
      onSSLConfigUpdated: {
        params: SSLConfigClient_OnSSLConfigUpdated_Params,
      },
    },
  };
  SSLConfigClientStub.prototype.validator = validateSSLConfigClientRequest;
  SSLConfigClientProxy.prototype.validator = null;
  exports.SSLVersion = SSLVersion;
  exports.TLS13Variant = TLS13Variant;
  exports.SSLConfig = SSLConfig;
  exports.SSLConfigClient = SSLConfigClient;
  exports.SSLConfigClientPtr = SSLConfigClientPtr;
  exports.SSLConfigClientAssociatedPtr = SSLConfigClientAssociatedPtr;
})();