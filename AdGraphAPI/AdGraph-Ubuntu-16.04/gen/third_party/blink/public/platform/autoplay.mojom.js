// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/autoplay.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../url/mojom/origin.mojom.js');
  }


  var kAutoplayFlagNone = 0x00000;
  var kAutoplayFlagHighMediaEngagement = 0x00001;
  var kAutoplayFlagForceAllow = 0x00002;

  function AutoplayConfigurationClient_AddAutoplayFlags_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutoplayConfigurationClient_AddAutoplayFlags_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.flags = 0;
  };
  AutoplayConfigurationClient_AddAutoplayFlags_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutoplayConfigurationClient_AddAutoplayFlags_Params.generate = function(generator_) {
    var generated = new AutoplayConfigurationClient_AddAutoplayFlags_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.flags = generator_.generateInt32();
    return generated;
  };

  AutoplayConfigurationClient_AddAutoplayFlags_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateInt32(this.flags);
    }
    return this;
  };
  AutoplayConfigurationClient_AddAutoplayFlags_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutoplayConfigurationClient_AddAutoplayFlags_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutoplayConfigurationClient_AddAutoplayFlags_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutoplayConfigurationClient_AddAutoplayFlags_Params.validate = function(messageValidator, offset) {
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


    // validate AutoplayConfigurationClient_AddAutoplayFlags_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AutoplayConfigurationClient_AddAutoplayFlags_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutoplayConfigurationClient_AddAutoplayFlags_Params.decode = function(decoder) {
    var packed;
    var val = new AutoplayConfigurationClient_AddAutoplayFlags_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.flags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AutoplayConfigurationClient_AddAutoplayFlags_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutoplayConfigurationClient_AddAutoplayFlags_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.Int32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kAutoplayConfigurationClient_AddAutoplayFlags_Name = 686154509;

  function AutoplayConfigurationClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AutoplayConfigurationClient,
                                                   handleOrPtrInfo);
  }

  function AutoplayConfigurationClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AutoplayConfigurationClient, associatedInterfacePtrInfo);
  }

  AutoplayConfigurationClientAssociatedPtr.prototype =
      Object.create(AutoplayConfigurationClientPtr.prototype);
  AutoplayConfigurationClientAssociatedPtr.prototype.constructor =
      AutoplayConfigurationClientAssociatedPtr;

  function AutoplayConfigurationClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  AutoplayConfigurationClientPtr.prototype.addAutoplayFlags = function() {
    return AutoplayConfigurationClientProxy.prototype.addAutoplayFlags
        .apply(this.ptr.getProxy(), arguments);
  };

  AutoplayConfigurationClientProxy.prototype.addAutoplayFlags = function(origin, flags) {
    var params_ = new AutoplayConfigurationClient_AddAutoplayFlags_Params();
    params_.origin = origin;
    params_.flags = flags;
    var builder = new codec.MessageV0Builder(
        kAutoplayConfigurationClient_AddAutoplayFlags_Name,
        codec.align(AutoplayConfigurationClient_AddAutoplayFlags_Params.encodedSize));
    builder.encodeStruct(AutoplayConfigurationClient_AddAutoplayFlags_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AutoplayConfigurationClientStub(delegate) {
    this.delegate_ = delegate;
  }
  AutoplayConfigurationClientStub.prototype.addAutoplayFlags = function(origin, flags) {
    return this.delegate_ && this.delegate_.addAutoplayFlags && this.delegate_.addAutoplayFlags(origin, flags);
  }

  AutoplayConfigurationClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAutoplayConfigurationClient_AddAutoplayFlags_Name:
      var params = reader.decodeStruct(AutoplayConfigurationClient_AddAutoplayFlags_Params);
      this.addAutoplayFlags(params.origin, params.flags);
      return true;
    default:
      return false;
    }
  };

  AutoplayConfigurationClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAutoplayConfigurationClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAutoplayConfigurationClient_AddAutoplayFlags_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutoplayConfigurationClient_AddAutoplayFlags_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAutoplayConfigurationClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AutoplayConfigurationClient = {
    name: 'blink.mojom.AutoplayConfigurationClient',
    kVersion: 0,
    ptrClass: AutoplayConfigurationClientPtr,
    proxyClass: AutoplayConfigurationClientProxy,
    stubClass: AutoplayConfigurationClientStub,
    validateRequest: validateAutoplayConfigurationClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/autoplay.mojom',
    fuzzMethods: {
      addAutoplayFlags: {
        params: AutoplayConfigurationClient_AddAutoplayFlags_Params,
      },
    },
  };
  AutoplayConfigurationClientStub.prototype.validator = validateAutoplayConfigurationClientRequest;
  AutoplayConfigurationClientProxy.prototype.validator = null;
  exports.kAutoplayFlagNone = kAutoplayFlagNone;
  exports.kAutoplayFlagHighMediaEngagement = kAutoplayFlagHighMediaEngagement;
  exports.kAutoplayFlagForceAllow = kAutoplayFlagForceAllow;
  exports.AutoplayConfigurationClient = AutoplayConfigurationClient;
  exports.AutoplayConfigurationClientPtr = AutoplayConfigurationClientPtr;
  exports.AutoplayConfigurationClientAssociatedPtr = AutoplayConfigurationClientAssociatedPtr;
})();