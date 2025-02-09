// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/nfc_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');
  var nfc$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/nfc.mojom', 'nfc.mojom.js');
  }



  function NFCProvider_GetNFCForHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NFCProvider_GetNFCForHost_Params.prototype.initDefaults_ = function() {
    this.hostId = 0;
    this.nfc = new bindings.InterfaceRequest();
  };
  NFCProvider_GetNFCForHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NFCProvider_GetNFCForHost_Params.generate = function(generator_) {
    var generated = new NFCProvider_GetNFCForHost_Params;
    generated.hostId = generator_.generateInt32();
    generated.nfc = generator_.generateInterfaceRequest("device.mojom.NFC", false);
    return generated;
  };

  NFCProvider_GetNFCForHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hostId = mutator_.mutateInt32(this.hostId);
    }
    if (mutator_.chooseMutateField()) {
      this.nfc = mutator_.mutateInterfaceRequest(this.nfc, "device.mojom.NFC", false);
    }
    return this;
  };
  NFCProvider_GetNFCForHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.nfc !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.NFCRequest"]);
    }
    return handles;
  };

  NFCProvider_GetNFCForHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NFCProvider_GetNFCForHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.nfc = handles[idx++];;
    return idx;
  };

  NFCProvider_GetNFCForHost_Params.validate = function(messageValidator, offset) {
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



    // validate NFCProvider_GetNFCForHost_Params.nfc
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NFCProvider_GetNFCForHost_Params.encodedSize = codec.kStructHeaderSize + 8;

  NFCProvider_GetNFCForHost_Params.decode = function(decoder) {
    var packed;
    var val = new NFCProvider_GetNFCForHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.hostId = decoder.decodeStruct(codec.Int32);
    val.nfc = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  NFCProvider_GetNFCForHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NFCProvider_GetNFCForHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.hostId);
    encoder.encodeStruct(codec.InterfaceRequest, val.nfc);
  };
  var kNFCProvider_GetNFCForHost_Name = 38518689;

  function NFCProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NFCProvider,
                                                   handleOrPtrInfo);
  }

  function NFCProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NFCProvider, associatedInterfacePtrInfo);
  }

  NFCProviderAssociatedPtr.prototype =
      Object.create(NFCProviderPtr.prototype);
  NFCProviderAssociatedPtr.prototype.constructor =
      NFCProviderAssociatedPtr;

  function NFCProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  NFCProviderPtr.prototype.getNFCForHost = function() {
    return NFCProviderProxy.prototype.getNFCForHost
        .apply(this.ptr.getProxy(), arguments);
  };

  NFCProviderProxy.prototype.getNFCForHost = function(hostId, nfc) {
    var params_ = new NFCProvider_GetNFCForHost_Params();
    params_.hostId = hostId;
    params_.nfc = nfc;
    var builder = new codec.MessageV0Builder(
        kNFCProvider_GetNFCForHost_Name,
        codec.align(NFCProvider_GetNFCForHost_Params.encodedSize));
    builder.encodeStruct(NFCProvider_GetNFCForHost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NFCProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  NFCProviderStub.prototype.getNFCForHost = function(hostId, nfc) {
    return this.delegate_ && this.delegate_.getNFCForHost && this.delegate_.getNFCForHost(hostId, nfc);
  }

  NFCProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNFCProvider_GetNFCForHost_Name:
      var params = reader.decodeStruct(NFCProvider_GetNFCForHost_Params);
      this.getNFCForHost(params.hostId, params.nfc);
      return true;
    default:
      return false;
    }
  };

  NFCProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNFCProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNFCProvider_GetNFCForHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NFCProvider_GetNFCForHost_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNFCProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NFCProvider = {
    name: 'device.mojom.NFCProvider',
    kVersion: 0,
    ptrClass: NFCProviderPtr,
    proxyClass: NFCProviderProxy,
    stubClass: NFCProviderStub,
    validateRequest: validateNFCProviderRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/nfc_provider.mojom',
    fuzzMethods: {
      getNFCForHost: {
        params: NFCProvider_GetNFCForHost_Params,
      },
    },
  };
  NFCProviderStub.prototype.validator = validateNFCProviderRequest;
  NFCProviderProxy.prototype.validator = null;
  exports.NFCProvider = NFCProvider;
  exports.NFCProviderPtr = NFCProviderPtr;
  exports.NFCProviderAssociatedPtr = NFCProviderAssociatedPtr;
})();