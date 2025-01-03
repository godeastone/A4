// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/service_factory.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('serviceManager.mojom');
  var connector$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/connector.mojom', 'connector.mojom.js');
  }
  var service$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/service.mojom', 'service.mojom.js');
  }



  function ServiceFactory_CreateService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceFactory_CreateService_Params.prototype.initDefaults_ = function() {
    this.service = new bindings.InterfaceRequest();
    this.name = null;
    this.pidReceiver = new connector$.PIDReceiverPtr();
  };
  ServiceFactory_CreateService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceFactory_CreateService_Params.generate = function(generator_) {
    var generated = new ServiceFactory_CreateService_Params;
    generated.service = generator_.generateInterfaceRequest("serviceManager.mojom.Service", false);
    generated.name = generator_.generateString(false);
    generated.pidReceiver = generator_.generateInterface("serviceManager.mojom.PIDReceiver", false);
    return generated;
  };

  ServiceFactory_CreateService_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.service = mutator_.mutateInterfaceRequest(this.service, "serviceManager.mojom.Service", false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pidReceiver = mutator_.mutateInterface(this.pidReceiver, "serviceManager.mojom.PIDReceiver", false);
    }
    return this;
  };
  ServiceFactory_CreateService_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.service !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.ServiceRequest"]);
    }
    if (this.pidReceiver !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.PIDReceiverPtr"]);
    }
    return handles;
  };

  ServiceFactory_CreateService_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceFactory_CreateService_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.service = handles[idx++];;
    this.pidReceiver = handles[idx++];;
    return idx;
  };

  ServiceFactory_CreateService_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceFactory_CreateService_Params.service
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceFactory_CreateService_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceFactory_CreateService_Params.pidReceiver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceFactory_CreateService_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceFactory_CreateService_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceFactory_CreateService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.name = decoder.decodeStruct(codec.String);
    val.pidReceiver = decoder.decodeStruct(new codec.Interface(connector$.PIDReceiverPtr));
    return val;
  };

  ServiceFactory_CreateService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceFactory_CreateService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.service);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(new codec.Interface(connector$.PIDReceiverPtr), val.pidReceiver);
  };
  var kServiceFactory_CreateService_Name = 1400788782;

  function ServiceFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceFactory,
                                                   handleOrPtrInfo);
  }

  function ServiceFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceFactory, associatedInterfacePtrInfo);
  }

  ServiceFactoryAssociatedPtr.prototype =
      Object.create(ServiceFactoryPtr.prototype);
  ServiceFactoryAssociatedPtr.prototype.constructor =
      ServiceFactoryAssociatedPtr;

  function ServiceFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceFactoryPtr.prototype.createService = function() {
    return ServiceFactoryProxy.prototype.createService
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceFactoryProxy.prototype.createService = function(service, name, pidReceiver) {
    var params_ = new ServiceFactory_CreateService_Params();
    params_.service = service;
    params_.name = name;
    params_.pidReceiver = pidReceiver;
    var builder = new codec.MessageV0Builder(
        kServiceFactory_CreateService_Name,
        codec.align(ServiceFactory_CreateService_Params.encodedSize));
    builder.encodeStruct(ServiceFactory_CreateService_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceFactoryStub.prototype.createService = function(service, name, pidReceiver) {
    return this.delegate_ && this.delegate_.createService && this.delegate_.createService(service, name, pidReceiver);
  }

  ServiceFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceFactory_CreateService_Name:
      var params = reader.decodeStruct(ServiceFactory_CreateService_Params);
      this.createService(params.service, params.name, params.pidReceiver);
      return true;
    default:
      return false;
    }
  };

  ServiceFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceFactory_CreateService_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceFactory_CreateService_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceFactory = {
    name: 'service_manager.mojom.ServiceFactory',
    kVersion: 0,
    ptrClass: ServiceFactoryPtr,
    proxyClass: ServiceFactoryProxy,
    stubClass: ServiceFactoryStub,
    validateRequest: validateServiceFactoryRequest,
    validateResponse: null,
    mojomId: 'services/service_manager/public/mojom/service_factory.mojom',
    fuzzMethods: {
      createService: {
        params: ServiceFactory_CreateService_Params,
      },
    },
  };
  ServiceFactoryStub.prototype.validator = validateServiceFactoryRequest;
  ServiceFactoryProxy.prototype.validator = null;
  exports.ServiceFactory = ServiceFactory;
  exports.ServiceFactoryPtr = ServiceFactoryPtr;
  exports.ServiceFactoryAssociatedPtr = ServiceFactoryAssociatedPtr;
})();