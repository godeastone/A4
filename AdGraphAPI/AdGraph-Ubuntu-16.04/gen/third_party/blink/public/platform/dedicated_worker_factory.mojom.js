// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/dedicated_worker_factory.mojom';
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
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../url/mojom/origin.mojom.js');
  }


  var kNavigation_DedicatedWorkerSpec = "navigation:dedicated_worker";

  function DedicatedWorkerFactory_CreateDedicatedWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DedicatedWorkerFactory_CreateDedicatedWorker_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.workerInterfaceProvider = new bindings.InterfaceRequest();
  };
  DedicatedWorkerFactory_CreateDedicatedWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DedicatedWorkerFactory_CreateDedicatedWorker_Params.generate = function(generator_) {
    var generated = new DedicatedWorkerFactory_CreateDedicatedWorker_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.workerInterfaceProvider = generator_.generateInterfaceRequest("serviceManager.mojom.InterfaceProvider", false);
    return generated;
  };

  DedicatedWorkerFactory_CreateDedicatedWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.workerInterfaceProvider = mutator_.mutateInterfaceRequest(this.workerInterfaceProvider, "serviceManager.mojom.InterfaceProvider", false);
    }
    return this;
  };
  DedicatedWorkerFactory_CreateDedicatedWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.workerInterfaceProvider !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderRequest"]);
    }
    return handles;
  };

  DedicatedWorkerFactory_CreateDedicatedWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DedicatedWorkerFactory_CreateDedicatedWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.workerInterfaceProvider = handles[idx++];;
    return idx;
  };

  DedicatedWorkerFactory_CreateDedicatedWorker_Params.validate = function(messageValidator, offset) {
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


    // validate DedicatedWorkerFactory_CreateDedicatedWorker_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate DedicatedWorkerFactory_CreateDedicatedWorker_Params.workerInterfaceProvider
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DedicatedWorkerFactory_CreateDedicatedWorker_Params.encodedSize = codec.kStructHeaderSize + 16;

  DedicatedWorkerFactory_CreateDedicatedWorker_Params.decode = function(decoder) {
    var packed;
    var val = new DedicatedWorkerFactory_CreateDedicatedWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.workerInterfaceProvider = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DedicatedWorkerFactory_CreateDedicatedWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DedicatedWorkerFactory_CreateDedicatedWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.InterfaceRequest, val.workerInterfaceProvider);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDedicatedWorkerFactory_CreateDedicatedWorker_Name = 1109159859;

  function DedicatedWorkerFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DedicatedWorkerFactory,
                                                   handleOrPtrInfo);
  }

  function DedicatedWorkerFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DedicatedWorkerFactory, associatedInterfacePtrInfo);
  }

  DedicatedWorkerFactoryAssociatedPtr.prototype =
      Object.create(DedicatedWorkerFactoryPtr.prototype);
  DedicatedWorkerFactoryAssociatedPtr.prototype.constructor =
      DedicatedWorkerFactoryAssociatedPtr;

  function DedicatedWorkerFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  DedicatedWorkerFactoryPtr.prototype.createDedicatedWorker = function() {
    return DedicatedWorkerFactoryProxy.prototype.createDedicatedWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  DedicatedWorkerFactoryProxy.prototype.createDedicatedWorker = function(origin, workerInterfaceProvider) {
    var params_ = new DedicatedWorkerFactory_CreateDedicatedWorker_Params();
    params_.origin = origin;
    params_.workerInterfaceProvider = workerInterfaceProvider;
    var builder = new codec.MessageV0Builder(
        kDedicatedWorkerFactory_CreateDedicatedWorker_Name,
        codec.align(DedicatedWorkerFactory_CreateDedicatedWorker_Params.encodedSize));
    builder.encodeStruct(DedicatedWorkerFactory_CreateDedicatedWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DedicatedWorkerFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  DedicatedWorkerFactoryStub.prototype.createDedicatedWorker = function(origin, workerInterfaceProvider) {
    return this.delegate_ && this.delegate_.createDedicatedWorker && this.delegate_.createDedicatedWorker(origin, workerInterfaceProvider);
  }

  DedicatedWorkerFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDedicatedWorkerFactory_CreateDedicatedWorker_Name:
      var params = reader.decodeStruct(DedicatedWorkerFactory_CreateDedicatedWorker_Params);
      this.createDedicatedWorker(params.origin, params.workerInterfaceProvider);
      return true;
    default:
      return false;
    }
  };

  DedicatedWorkerFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDedicatedWorkerFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDedicatedWorkerFactory_CreateDedicatedWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DedicatedWorkerFactory_CreateDedicatedWorker_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDedicatedWorkerFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DedicatedWorkerFactory = {
    name: 'blink.mojom.DedicatedWorkerFactory',
    kVersion: 0,
    ptrClass: DedicatedWorkerFactoryPtr,
    proxyClass: DedicatedWorkerFactoryProxy,
    stubClass: DedicatedWorkerFactoryStub,
    validateRequest: validateDedicatedWorkerFactoryRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/dedicated_worker_factory.mojom',
    fuzzMethods: {
      createDedicatedWorker: {
        params: DedicatedWorkerFactory_CreateDedicatedWorker_Params,
      },
    },
  };
  DedicatedWorkerFactoryStub.prototype.validator = validateDedicatedWorkerFactoryRequest;
  DedicatedWorkerFactoryProxy.prototype.validator = null;
  exports.kNavigation_DedicatedWorkerSpec = kNavigation_DedicatedWorkerSpec;
  exports.DedicatedWorkerFactory = DedicatedWorkerFactory;
  exports.DedicatedWorkerFactoryPtr = DedicatedWorkerFactoryPtr;
  exports.DedicatedWorkerFactoryAssociatedPtr = DedicatedWorkerFactoryAssociatedPtr;
})();