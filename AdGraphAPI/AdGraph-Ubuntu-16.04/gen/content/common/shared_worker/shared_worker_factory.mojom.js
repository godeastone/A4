// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/shared_worker/shared_worker_factory.mojom';
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
  var service_worker_provider$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_provider.mojom', '../service_worker/service_worker_provider.mojom.js');
  }
  var shared_worker$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/shared_worker/shared_worker.mojom', 'shared_worker.mojom.js');
  }
  var shared_worker_host$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/shared_worker/shared_worker_host.mojom', 'shared_worker_host.mojom.js');
  }
  var shared_worker_info$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/shared_worker/shared_worker_info.mojom', 'shared_worker_info.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../mojo/public/mojom/base/unguessable_token.mojom.js');
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
  var worker_content_settings_proxy$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/worker_content_settings_proxy.mojom', '../../../third_party/blink/public/web/worker_content_settings_proxy.mojom.js');
  }


  var kNavigation_SharedWorkerSpec = "navigation:shared_worker";

  function SharedWorkerFactory_CreateSharedWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SharedWorkerFactory_CreateSharedWorker_Params.prototype.initDefaults_ = function() {
    this.info = null;
    this.pauseOnStart = false;
    this.sharedWorker = new bindings.InterfaceRequest();
    this.devtoolsWorkerToken = null;
    this.contentSettings = new worker_content_settings_proxy$.WorkerContentSettingsProxyPtr();
    this.serviceWorkerProviderInfo = null;
    this.scriptLoaderFactoryPtrInfo = new associatedBindings.AssociatedInterfacePtrInfo();
    this.host = new shared_worker_host$.SharedWorkerHostPtr();
    this.interfaceProvider = new interface_provider$.InterfaceProviderPtr();
  };
  SharedWorkerFactory_CreateSharedWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SharedWorkerFactory_CreateSharedWorker_Params.generate = function(generator_) {
    var generated = new SharedWorkerFactory_CreateSharedWorker_Params;
    generated.info = generator_.generateStruct(content.mojom.SharedWorkerInfo, false);
    generated.pauseOnStart = generator_.generateBool();
    generated.devtoolsWorkerToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.contentSettings = generator_.generateInterface("blink.mojom.WorkerContentSettingsProxy", false);
    generated.serviceWorkerProviderInfo = generator_.generateStruct(content.mojom.ServiceWorkerProviderInfoForSharedWorker, true);
    generated.scriptLoaderFactoryPtrInfo = generator_.generateAssociatedInterface("network.mojom.URLLoaderFactory", true);
    generated.host = generator_.generateInterface("content.mojom.SharedWorkerHost", false);
    generated.sharedWorker = generator_.generateInterfaceRequest("content.mojom.SharedWorker", false);
    generated.interfaceProvider = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", false);
    return generated;
  };

  SharedWorkerFactory_CreateSharedWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(content.mojom.SharedWorkerInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pauseOnStart = mutator_.mutateBool(this.pauseOnStart);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsWorkerToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentSettings = mutator_.mutateInterface(this.contentSettings, "blink.mojom.WorkerContentSettingsProxy", false);
    }
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerProviderInfo = mutator_.mutateStruct(content.mojom.ServiceWorkerProviderInfoForSharedWorker, true);
    }
    if (mutator_.chooseMutateField()) {
      this.scriptLoaderFactoryPtrInfo = mutator_.mutateAssociatedInterface(this.scriptLoaderFactoryPtrInfo, "network.mojom.URLLoaderFactory", true);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateInterface(this.host, "content.mojom.SharedWorkerHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedWorker = mutator_.mutateInterfaceRequest(this.sharedWorker, "content.mojom.SharedWorker", false);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceProvider = mutator_.mutateInterface(this.interfaceProvider, "serviceManager.mojom.InterfaceProvider", false);
    }
    return this;
  };
  SharedWorkerFactory_CreateSharedWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.contentSettings !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.WorkerContentSettingsProxyPtr"]);
    }
    if (this.serviceWorkerProviderInfo !== null) {
      Array.prototype.push.apply(handles, this.serviceWorkerProviderInfo.getHandleDeps());
    }
    if (this.scriptLoaderFactoryPtrInfo !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryAssociatedPtr"]);
    }
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SharedWorkerHostPtr"]);
    }
    if (this.sharedWorker !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.SharedWorkerRequest"]);
    }
    if (this.interfaceProvider !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  SharedWorkerFactory_CreateSharedWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SharedWorkerFactory_CreateSharedWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.contentSettings = handles[idx++];;
    idx = this.serviceWorkerProviderInfo.setHandlesInternal_(handles, idx);
    this.scriptLoaderFactoryPtrInfo = handles[idx++];;
    this.host = handles[idx++];;
    this.sharedWorker = handles[idx++];;
    this.interfaceProvider = handles[idx++];;
    return idx;
  };

  SharedWorkerFactory_CreateSharedWorker_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, shared_worker_info$.SharedWorkerInfo, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate SharedWorkerFactory_CreateSharedWorker_Params.devtoolsWorkerToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.contentSettings
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.serviceWorkerProviderInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, service_worker_provider$.ServiceWorkerProviderInfoForSharedWorker, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.scriptLoaderFactoryPtrInfo
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 40, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.host
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 48, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.sharedWorker
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SharedWorkerFactory_CreateSharedWorker_Params.interfaceProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 56, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SharedWorkerFactory_CreateSharedWorker_Params.encodedSize = codec.kStructHeaderSize + 64;

  SharedWorkerFactory_CreateSharedWorker_Params.decode = function(decoder) {
    var packed;
    var val = new SharedWorkerFactory_CreateSharedWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(shared_worker_info$.SharedWorkerInfo);
    packed = decoder.readUint8();
    val.pauseOnStart = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sharedWorker = decoder.decodeStruct(codec.InterfaceRequest);
    val.devtoolsWorkerToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.contentSettings = decoder.decodeStruct(new codec.Interface(worker_content_settings_proxy$.WorkerContentSettingsProxyPtr));
    val.serviceWorkerProviderInfo = decoder.decodeStructPointer(service_worker_provider$.ServiceWorkerProviderInfoForSharedWorker);
    val.scriptLoaderFactoryPtrInfo = decoder.decodeStruct(codec.NullableAssociatedInterfacePtrInfo);
    val.host = decoder.decodeStruct(new codec.Interface(shared_worker_host$.SharedWorkerHostPtr));
    val.interfaceProvider = decoder.decodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr));
    return val;
  };

  SharedWorkerFactory_CreateSharedWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SharedWorkerFactory_CreateSharedWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(shared_worker_info$.SharedWorkerInfo, val.info);
    packed = 0;
    packed |= (val.pauseOnStart & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.InterfaceRequest, val.sharedWorker);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsWorkerToken);
    encoder.encodeStruct(new codec.Interface(worker_content_settings_proxy$.WorkerContentSettingsProxyPtr), val.contentSettings);
    encoder.encodeStructPointer(service_worker_provider$.ServiceWorkerProviderInfoForSharedWorker, val.serviceWorkerProviderInfo);
    encoder.encodeStruct(codec.NullableAssociatedInterfacePtrInfo, val.scriptLoaderFactoryPtrInfo);
    encoder.encodeStruct(new codec.Interface(shared_worker_host$.SharedWorkerHostPtr), val.host);
    encoder.encodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr), val.interfaceProvider);
  };
  var kSharedWorkerFactory_CreateSharedWorker_Name = 925791558;

  function SharedWorkerFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SharedWorkerFactory,
                                                   handleOrPtrInfo);
  }

  function SharedWorkerFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SharedWorkerFactory, associatedInterfacePtrInfo);
  }

  SharedWorkerFactoryAssociatedPtr.prototype =
      Object.create(SharedWorkerFactoryPtr.prototype);
  SharedWorkerFactoryAssociatedPtr.prototype.constructor =
      SharedWorkerFactoryAssociatedPtr;

  function SharedWorkerFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  SharedWorkerFactoryPtr.prototype.createSharedWorker = function() {
    return SharedWorkerFactoryProxy.prototype.createSharedWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  SharedWorkerFactoryProxy.prototype.createSharedWorker = function(info, pauseOnStart, devtoolsWorkerToken, contentSettings, serviceWorkerProviderInfo, scriptLoaderFactoryPtrInfo, host, sharedWorker, interfaceProvider) {
    var params_ = new SharedWorkerFactory_CreateSharedWorker_Params();
    params_.info = info;
    params_.pauseOnStart = pauseOnStart;
    params_.devtoolsWorkerToken = devtoolsWorkerToken;
    params_.contentSettings = contentSettings;
    params_.serviceWorkerProviderInfo = serviceWorkerProviderInfo;
    params_.scriptLoaderFactoryPtrInfo = scriptLoaderFactoryPtrInfo;
    params_.host = host;
    params_.sharedWorker = sharedWorker;
    params_.interfaceProvider = interfaceProvider;
    var builder = new codec.MessageV2Builder(
        kSharedWorkerFactory_CreateSharedWorker_Name,
        codec.align(SharedWorkerFactory_CreateSharedWorker_Params.encodedSize));
    builder.setPayload(SharedWorkerFactory_CreateSharedWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SharedWorkerFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  SharedWorkerFactoryStub.prototype.createSharedWorker = function(info, pauseOnStart, devtoolsWorkerToken, contentSettings, serviceWorkerProviderInfo, scriptLoaderFactoryPtrInfo, host, sharedWorker, interfaceProvider) {
    return this.delegate_ && this.delegate_.createSharedWorker && this.delegate_.createSharedWorker(info, pauseOnStart, devtoolsWorkerToken, contentSettings, serviceWorkerProviderInfo, scriptLoaderFactoryPtrInfo, host, sharedWorker, interfaceProvider);
  }

  SharedWorkerFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSharedWorkerFactory_CreateSharedWorker_Name:
      var params = reader.decodeStruct(SharedWorkerFactory_CreateSharedWorker_Params);
      this.createSharedWorker(params.info, params.pauseOnStart, params.devtoolsWorkerToken, params.contentSettings, params.serviceWorkerProviderInfo, params.scriptLoaderFactoryPtrInfo, params.host, params.sharedWorker, params.interfaceProvider);
      return true;
    default:
      return false;
    }
  };

  SharedWorkerFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSharedWorkerFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSharedWorkerFactory_CreateSharedWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SharedWorkerFactory_CreateSharedWorker_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSharedWorkerFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SharedWorkerFactory = {
    name: 'content.mojom.SharedWorkerFactory',
    kVersion: 0,
    ptrClass: SharedWorkerFactoryPtr,
    proxyClass: SharedWorkerFactoryProxy,
    stubClass: SharedWorkerFactoryStub,
    validateRequest: validateSharedWorkerFactoryRequest,
    validateResponse: null,
    mojomId: 'content/common/shared_worker/shared_worker_factory.mojom',
    fuzzMethods: {
      createSharedWorker: {
        params: SharedWorkerFactory_CreateSharedWorker_Params,
      },
    },
  };
  SharedWorkerFactoryStub.prototype.validator = validateSharedWorkerFactoryRequest;
  SharedWorkerFactoryProxy.prototype.validator = null;
  exports.kNavigation_SharedWorkerSpec = kNavigation_SharedWorkerSpec;
  exports.SharedWorkerFactory = SharedWorkerFactory;
  exports.SharedWorkerFactoryPtr = SharedWorkerFactoryPtr;
  exports.SharedWorkerFactoryAssociatedPtr = SharedWorkerFactoryAssociatedPtr;
})();