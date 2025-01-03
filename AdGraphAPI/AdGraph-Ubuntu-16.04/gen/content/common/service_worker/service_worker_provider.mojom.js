// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/service_worker_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var service_worker_container$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_container.mojom', 'service_worker_container.mojom.js');
  }
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', '../../../services/network/public/mojom/url_loader_factory.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }
  var service_worker_provider_type$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom.js');
  }
  var service_worker_registration$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_registration.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.js');
  }


  var kNavigation_ServiceWorkerSpec = "navigation:service_worker";

  function ServiceWorkerProviderInfoForSharedWorker(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerProviderInfoForSharedWorker.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.hostPtrInfo = new associatedBindings.AssociatedInterfacePtrInfo();
    this.clientRequest = new associatedBindings.AssociatedInterfaceRequest();
  };
  ServiceWorkerProviderInfoForSharedWorker.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerProviderInfoForSharedWorker.generate = function(generator_) {
    var generated = new ServiceWorkerProviderInfoForSharedWorker;
    generated.providerId = generator_.generateInt32();
    generated.hostPtrInfo = generator_.generateAssociatedInterface("content.mojom.ServiceWorkerContainerHost", false);
    generated.clientRequest = generator_.generateAssociatedInterfaceRequest("content.mojom.ServiceWorkerContainer", false);
    return generated;
  };

  ServiceWorkerProviderInfoForSharedWorker.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateInt32(this.providerId);
    }
    if (mutator_.chooseMutateField()) {
      this.hostPtrInfo = mutator_.mutateAssociatedInterface(this.hostPtrInfo, "content.mojom.ServiceWorkerContainerHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientRequest = mutator_.mutateAssociatedInterfaceRequest(this.clientRequest, "content.mojom.ServiceWorkerContainer", false);
    }
    return this;
  };
  ServiceWorkerProviderInfoForSharedWorker.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hostPtrInfo !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerHostAssociatedPtr"]);
    }
    if (this.clientRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerAssociatedRequest"]);
    }
    return handles;
  };

  ServiceWorkerProviderInfoForSharedWorker.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerProviderInfoForSharedWorker.prototype.setHandlesInternal_ = function(handles, idx) {
    this.hostPtrInfo = handles[idx++];;
    this.clientRequest = handles[idx++];;
    return idx;
  };

  ServiceWorkerProviderInfoForSharedWorker.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerProviderInfoForSharedWorker.hostPtrInfo
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerProviderInfoForSharedWorker.clientRequest
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerProviderInfoForSharedWorker.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerProviderInfoForSharedWorker.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerProviderInfoForSharedWorker();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    val.hostPtrInfo = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.clientRequest = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    return val;
  };

  ServiceWorkerProviderInfoForSharedWorker.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerProviderInfoForSharedWorker.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.hostPtrInfo);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.clientRequest);
  };
  function ServiceWorkerProviderInfoForStartWorker(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerProviderInfoForStartWorker.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.hostPtrInfo = new associatedBindings.AssociatedInterfacePtrInfo();
    this.clientRequest = new associatedBindings.AssociatedInterfaceRequest();
    this.scriptLoaderFactoryPtrInfo = new associatedBindings.AssociatedInterfacePtrInfo();
    this.interfaceProvider = new interface_provider$.InterfaceProviderPtr();
  };
  ServiceWorkerProviderInfoForStartWorker.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerProviderInfoForStartWorker.generate = function(generator_) {
    var generated = new ServiceWorkerProviderInfoForStartWorker;
    generated.providerId = generator_.generateInt32();
    generated.hostPtrInfo = generator_.generateAssociatedInterface("content.mojom.ServiceWorkerContainerHost", false);
    generated.clientRequest = generator_.generateAssociatedInterfaceRequest("content.mojom.ServiceWorkerContainer", false);
    generated.scriptLoaderFactoryPtrInfo = generator_.generateAssociatedInterface("network.mojom.URLLoaderFactory", true);
    generated.interfaceProvider = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", false);
    return generated;
  };

  ServiceWorkerProviderInfoForStartWorker.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateInt32(this.providerId);
    }
    if (mutator_.chooseMutateField()) {
      this.hostPtrInfo = mutator_.mutateAssociatedInterface(this.hostPtrInfo, "content.mojom.ServiceWorkerContainerHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientRequest = mutator_.mutateAssociatedInterfaceRequest(this.clientRequest, "content.mojom.ServiceWorkerContainer", false);
    }
    if (mutator_.chooseMutateField()) {
      this.scriptLoaderFactoryPtrInfo = mutator_.mutateAssociatedInterface(this.scriptLoaderFactoryPtrInfo, "network.mojom.URLLoaderFactory", true);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceProvider = mutator_.mutateInterface(this.interfaceProvider, "serviceManager.mojom.InterfaceProvider", false);
    }
    return this;
  };
  ServiceWorkerProviderInfoForStartWorker.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hostPtrInfo !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerHostAssociatedPtr"]);
    }
    if (this.clientRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerAssociatedRequest"]);
    }
    if (this.scriptLoaderFactoryPtrInfo !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryAssociatedPtr"]);
    }
    if (this.interfaceProvider !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  ServiceWorkerProviderInfoForStartWorker.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerProviderInfoForStartWorker.prototype.setHandlesInternal_ = function(handles, idx) {
    this.hostPtrInfo = handles[idx++];;
    this.clientRequest = handles[idx++];;
    this.scriptLoaderFactoryPtrInfo = handles[idx++];;
    this.interfaceProvider = handles[idx++];;
    return idx;
  };

  ServiceWorkerProviderInfoForStartWorker.validate = function(messageValidator, offset) {
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



    // validate ServiceWorkerProviderInfoForStartWorker.hostPtrInfo
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerProviderInfoForStartWorker.clientRequest
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerProviderInfoForStartWorker.scriptLoaderFactoryPtrInfo
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerProviderInfoForStartWorker.interfaceProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerProviderInfoForStartWorker.encodedSize = codec.kStructHeaderSize + 32;

  ServiceWorkerProviderInfoForStartWorker.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerProviderInfoForStartWorker();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    val.hostPtrInfo = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    val.clientRequest = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.scriptLoaderFactoryPtrInfo = decoder.decodeStruct(codec.NullableAssociatedInterfacePtrInfo);
    val.interfaceProvider = decoder.decodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr));
    return val;
  };

  ServiceWorkerProviderInfoForStartWorker.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerProviderInfoForStartWorker.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.hostPtrInfo);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.clientRequest);
    encoder.encodeStruct(codec.NullableAssociatedInterfacePtrInfo, val.scriptLoaderFactoryPtrInfo);
    encoder.encodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr), val.interfaceProvider);
  };
  function ServiceWorkerProviderHostInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerProviderHostInfo.prototype.initDefaults_ = function() {
    this.providerId = 0;
    this.routeId = 0;
    this.type = 0;
    this.isParentFrameSecure = false;
    this.hostRequest = new associatedBindings.AssociatedInterfaceRequest();
    this.clientPtrInfo = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  ServiceWorkerProviderHostInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerProviderHostInfo.generate = function(generator_) {
    var generated = new ServiceWorkerProviderHostInfo;
    generated.providerId = generator_.generateInt32();
    generated.routeId = generator_.generateInt32();
    generated.type = generator_.generateEnum(0, 3);
    generated.isParentFrameSecure = generator_.generateBool();
    generated.hostRequest = generator_.generateAssociatedInterfaceRequest("content.mojom.ServiceWorkerContainerHost", false);
    generated.clientPtrInfo = generator_.generateAssociatedInterface("content.mojom.ServiceWorkerContainer", false);
    return generated;
  };

  ServiceWorkerProviderHostInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerId = mutator_.mutateInt32(this.providerId);
    }
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateInt32(this.routeId);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.isParentFrameSecure = mutator_.mutateBool(this.isParentFrameSecure);
    }
    if (mutator_.chooseMutateField()) {
      this.hostRequest = mutator_.mutateAssociatedInterfaceRequest(this.hostRequest, "content.mojom.ServiceWorkerContainerHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.clientPtrInfo = mutator_.mutateAssociatedInterface(this.clientPtrInfo, "content.mojom.ServiceWorkerContainer", false);
    }
    return this;
  };
  ServiceWorkerProviderHostInfo.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.hostRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerHostAssociatedRequest"]);
    }
    if (this.clientPtrInfo !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerContainerAssociatedPtr"]);
    }
    return handles;
  };

  ServiceWorkerProviderHostInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerProviderHostInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    this.hostRequest = handles[idx++];;
    this.clientPtrInfo = handles[idx++];;
    return idx;
  };

  ServiceWorkerProviderHostInfo.validate = function(messageValidator, offset) {
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




    // validate ServiceWorkerProviderHostInfo.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, service_worker_provider_type$.ServiceWorkerProviderType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ServiceWorkerProviderHostInfo.hostRequest
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerProviderHostInfo.clientPtrInfo
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 20, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerProviderHostInfo.encodedSize = codec.kStructHeaderSize + 32;

  ServiceWorkerProviderHostInfo.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerProviderHostInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerId = decoder.decodeStruct(codec.Int32);
    val.routeId = decoder.decodeStruct(codec.Int32);
    val.type = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isParentFrameSecure = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.hostRequest = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.clientPtrInfo = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ServiceWorkerProviderHostInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerProviderHostInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.providerId);
    encoder.encodeStruct(codec.Int32, val.routeId);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.isParentFrameSecure & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.hostRequest);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.clientPtrInfo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ServiceWorkerWorkerClient_SetControllerServiceWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.prototype.initDefaults_ = function() {
    this.controllerVersionId = 0;
  };
  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.generate = function(generator_) {
    var generated = new ServiceWorkerWorkerClient_SetControllerServiceWorker_Params;
    generated.controllerVersionId = generator_.generateInt64();
    return generated;
  };

  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.controllerVersionId = mutator_.mutateInt64(this.controllerVersionId);
    }
    return this;
  };
  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.validate = function(messageValidator, offset) {
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

  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerWorkerClient_SetControllerServiceWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.controllerVersionId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.controllerVersionId);
  };
  var kServiceWorkerWorkerClient_SetControllerServiceWorker_Name = 269298233;

  function ServiceWorkerWorkerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerWorkerClient,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerWorkerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerWorkerClient, associatedInterfacePtrInfo);
  }

  ServiceWorkerWorkerClientAssociatedPtr.prototype =
      Object.create(ServiceWorkerWorkerClientPtr.prototype);
  ServiceWorkerWorkerClientAssociatedPtr.prototype.constructor =
      ServiceWorkerWorkerClientAssociatedPtr;

  function ServiceWorkerWorkerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerWorkerClientPtr.prototype.setControllerServiceWorker = function() {
    return ServiceWorkerWorkerClientProxy.prototype.setControllerServiceWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerWorkerClientProxy.prototype.setControllerServiceWorker = function(controllerVersionId) {
    var params_ = new ServiceWorkerWorkerClient_SetControllerServiceWorker_Params();
    params_.controllerVersionId = controllerVersionId;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerWorkerClient_SetControllerServiceWorker_Name,
        codec.align(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerWorkerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerWorkerClientStub.prototype.setControllerServiceWorker = function(controllerVersionId) {
    return this.delegate_ && this.delegate_.setControllerServiceWorker && this.delegate_.setControllerServiceWorker(controllerVersionId);
  }

  ServiceWorkerWorkerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerWorkerClient_SetControllerServiceWorker_Name:
      var params = reader.decodeStruct(ServiceWorkerWorkerClient_SetControllerServiceWorker_Params);
      this.setControllerServiceWorker(params.controllerVersionId);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerWorkerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceWorkerWorkerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerWorkerClient_SetControllerServiceWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerWorkerClient_SetControllerServiceWorker_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerWorkerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceWorkerWorkerClient = {
    name: 'content.mojom.ServiceWorkerWorkerClient',
    kVersion: 0,
    ptrClass: ServiceWorkerWorkerClientPtr,
    proxyClass: ServiceWorkerWorkerClientProxy,
    stubClass: ServiceWorkerWorkerClientStub,
    validateRequest: validateServiceWorkerWorkerClientRequest,
    validateResponse: null,
    mojomId: 'content/common/service_worker/service_worker_provider.mojom',
    fuzzMethods: {
      setControllerServiceWorker: {
        params: ServiceWorkerWorkerClient_SetControllerServiceWorker_Params,
      },
    },
  };
  ServiceWorkerWorkerClientStub.prototype.validator = validateServiceWorkerWorkerClientRequest;
  ServiceWorkerWorkerClientProxy.prototype.validator = null;
  exports.kNavigation_ServiceWorkerSpec = kNavigation_ServiceWorkerSpec;
  exports.ServiceWorkerProviderInfoForSharedWorker = ServiceWorkerProviderInfoForSharedWorker;
  exports.ServiceWorkerProviderInfoForStartWorker = ServiceWorkerProviderInfoForStartWorker;
  exports.ServiceWorkerProviderHostInfo = ServiceWorkerProviderHostInfo;
  exports.ServiceWorkerWorkerClient = ServiceWorkerWorkerClient;
  exports.ServiceWorkerWorkerClientPtr = ServiceWorkerWorkerClientPtr;
  exports.ServiceWorkerWorkerClientAssociatedPtr = ServiceWorkerWorkerClientAssociatedPtr;
})();