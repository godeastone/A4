// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/loader/prefetch_url_loader_service.mojom';
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
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', '../../../../../services/network/public/mojom/url_loader_factory.mojom.js');
  }



  function PrefetchURLLoaderService_GetFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefetchURLLoaderService_GetFactory_Params.prototype.initDefaults_ = function() {
    this.factory = new bindings.InterfaceRequest();
  };
  PrefetchURLLoaderService_GetFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefetchURLLoaderService_GetFactory_Params.generate = function(generator_) {
    var generated = new PrefetchURLLoaderService_GetFactory_Params;
    generated.factory = generator_.generateInterfaceRequest("network.mojom.URLLoaderFactory", false);
    return generated;
  };

  PrefetchURLLoaderService_GetFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.factory = mutator_.mutateInterfaceRequest(this.factory, "network.mojom.URLLoaderFactory", false);
    }
    return this;
  };
  PrefetchURLLoaderService_GetFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.factory !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryRequest"]);
    }
    return handles;
  };

  PrefetchURLLoaderService_GetFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefetchURLLoaderService_GetFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.factory = handles[idx++];;
    return idx;
  };

  PrefetchURLLoaderService_GetFactory_Params.validate = function(messageValidator, offset) {
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


    // validate PrefetchURLLoaderService_GetFactory_Params.factory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrefetchURLLoaderService_GetFactory_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrefetchURLLoaderService_GetFactory_Params.decode = function(decoder) {
    var packed;
    var val = new PrefetchURLLoaderService_GetFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.factory = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrefetchURLLoaderService_GetFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefetchURLLoaderService_GetFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.factory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPrefetchURLLoaderService_GetFactory_Name = 1954404621;

  function PrefetchURLLoaderServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PrefetchURLLoaderService,
                                                   handleOrPtrInfo);
  }

  function PrefetchURLLoaderServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PrefetchURLLoaderService, associatedInterfacePtrInfo);
  }

  PrefetchURLLoaderServiceAssociatedPtr.prototype =
      Object.create(PrefetchURLLoaderServicePtr.prototype);
  PrefetchURLLoaderServiceAssociatedPtr.prototype.constructor =
      PrefetchURLLoaderServiceAssociatedPtr;

  function PrefetchURLLoaderServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  PrefetchURLLoaderServicePtr.prototype.getFactory = function() {
    return PrefetchURLLoaderServiceProxy.prototype.getFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  PrefetchURLLoaderServiceProxy.prototype.getFactory = function(factory) {
    var params_ = new PrefetchURLLoaderService_GetFactory_Params();
    params_.factory = factory;
    var builder = new codec.MessageV0Builder(
        kPrefetchURLLoaderService_GetFactory_Name,
        codec.align(PrefetchURLLoaderService_GetFactory_Params.encodedSize));
    builder.encodeStruct(PrefetchURLLoaderService_GetFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PrefetchURLLoaderServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  PrefetchURLLoaderServiceStub.prototype.getFactory = function(factory) {
    return this.delegate_ && this.delegate_.getFactory && this.delegate_.getFactory(factory);
  }

  PrefetchURLLoaderServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPrefetchURLLoaderService_GetFactory_Name:
      var params = reader.decodeStruct(PrefetchURLLoaderService_GetFactory_Params);
      this.getFactory(params.factory);
      return true;
    default:
      return false;
    }
  };

  PrefetchURLLoaderServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePrefetchURLLoaderServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPrefetchURLLoaderService_GetFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrefetchURLLoaderService_GetFactory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePrefetchURLLoaderServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PrefetchURLLoaderService = {
    name: 'blink.mojom.PrefetchURLLoaderService',
    kVersion: 0,
    ptrClass: PrefetchURLLoaderServicePtr,
    proxyClass: PrefetchURLLoaderServiceProxy,
    stubClass: PrefetchURLLoaderServiceStub,
    validateRequest: validatePrefetchURLLoaderServiceRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/loader/prefetch_url_loader_service.mojom',
    fuzzMethods: {
      getFactory: {
        params: PrefetchURLLoaderService_GetFactory_Params,
      },
    },
  };
  PrefetchURLLoaderServiceStub.prototype.validator = validatePrefetchURLLoaderServiceRequest;
  PrefetchURLLoaderServiceProxy.prototype.validator = null;
  exports.PrefetchURLLoaderService = PrefetchURLLoaderService;
  exports.PrefetchURLLoaderServicePtr = PrefetchURLLoaderServicePtr;
  exports.PrefetchURLLoaderServiceAssociatedPtr = PrefetchURLLoaderServiceAssociatedPtr;
})();