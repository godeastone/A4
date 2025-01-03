// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/service_worker.mojom';
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
        'content/common/service_worker/service_worker_provider.mojom', 'service_worker_provider.mojom.js');
  }



  function ServiceWorkerDispatcherHost_OnProviderCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerDispatcherHost_OnProviderCreated_Params.prototype.initDefaults_ = function() {
    this.providerInfo = null;
  };
  ServiceWorkerDispatcherHost_OnProviderCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ServiceWorkerDispatcherHost_OnProviderCreated_Params.generate = function(generator_) {
    var generated = new ServiceWorkerDispatcherHost_OnProviderCreated_Params;
    generated.providerInfo = generator_.generateStruct(content.mojom.ServiceWorkerProviderHostInfo, false);
    return generated;
  };

  ServiceWorkerDispatcherHost_OnProviderCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.providerInfo = mutator_.mutateStruct(content.mojom.ServiceWorkerProviderHostInfo, false);
    }
    return this;
  };
  ServiceWorkerDispatcherHost_OnProviderCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.providerInfo !== null) {
      Array.prototype.push.apply(handles, this.providerInfo.getHandleDeps());
    }
    return handles;
  };

  ServiceWorkerDispatcherHost_OnProviderCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ServiceWorkerDispatcherHost_OnProviderCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.providerInfo.setHandlesInternal_(handles, idx);
    return idx;
  };

  ServiceWorkerDispatcherHost_OnProviderCreated_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerDispatcherHost_OnProviderCreated_Params.providerInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, service_worker_provider$.ServiceWorkerProviderHostInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerDispatcherHost_OnProviderCreated_Params.encodedSize = codec.kStructHeaderSize + 8;

  ServiceWorkerDispatcherHost_OnProviderCreated_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerDispatcherHost_OnProviderCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.providerInfo = decoder.decodeStructPointer(service_worker_provider$.ServiceWorkerProviderHostInfo);
    return val;
  };

  ServiceWorkerDispatcherHost_OnProviderCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerDispatcherHost_OnProviderCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(service_worker_provider$.ServiceWorkerProviderHostInfo, val.providerInfo);
  };
  var kServiceWorkerDispatcherHost_OnProviderCreated_Name = 643183917;

  function ServiceWorkerDispatcherHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerDispatcherHost,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerDispatcherHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerDispatcherHost, associatedInterfacePtrInfo);
  }

  ServiceWorkerDispatcherHostAssociatedPtr.prototype =
      Object.create(ServiceWorkerDispatcherHostPtr.prototype);
  ServiceWorkerDispatcherHostAssociatedPtr.prototype.constructor =
      ServiceWorkerDispatcherHostAssociatedPtr;

  function ServiceWorkerDispatcherHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerDispatcherHostPtr.prototype.onProviderCreated = function() {
    return ServiceWorkerDispatcherHostProxy.prototype.onProviderCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerDispatcherHostProxy.prototype.onProviderCreated = function(providerInfo) {
    var params_ = new ServiceWorkerDispatcherHost_OnProviderCreated_Params();
    params_.providerInfo = providerInfo;
    var builder = new codec.MessageV2Builder(
        kServiceWorkerDispatcherHost_OnProviderCreated_Name,
        codec.align(ServiceWorkerDispatcherHost_OnProviderCreated_Params.encodedSize));
    builder.setPayload(ServiceWorkerDispatcherHost_OnProviderCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerDispatcherHostStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerDispatcherHostStub.prototype.onProviderCreated = function(providerInfo) {
    return this.delegate_ && this.delegate_.onProviderCreated && this.delegate_.onProviderCreated(providerInfo);
  }

  ServiceWorkerDispatcherHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerDispatcherHost_OnProviderCreated_Name:
      var params = reader.decodeStruct(ServiceWorkerDispatcherHost_OnProviderCreated_Params);
      this.onProviderCreated(params.providerInfo);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerDispatcherHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceWorkerDispatcherHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerDispatcherHost_OnProviderCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerDispatcherHost_OnProviderCreated_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerDispatcherHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceWorkerDispatcherHost = {
    name: 'content.mojom.ServiceWorkerDispatcherHost',
    kVersion: 0,
    ptrClass: ServiceWorkerDispatcherHostPtr,
    proxyClass: ServiceWorkerDispatcherHostProxy,
    stubClass: ServiceWorkerDispatcherHostStub,
    validateRequest: validateServiceWorkerDispatcherHostRequest,
    validateResponse: null,
    mojomId: 'content/common/service_worker/service_worker.mojom',
    fuzzMethods: {
      onProviderCreated: {
        params: ServiceWorkerDispatcherHost_OnProviderCreated_Params,
      },
    },
  };
  ServiceWorkerDispatcherHostStub.prototype.validator = validateServiceWorkerDispatcherHostRequest;
  ServiceWorkerDispatcherHostProxy.prototype.validator = null;
  exports.ServiceWorkerDispatcherHost = ServiceWorkerDispatcherHost;
  exports.ServiceWorkerDispatcherHostPtr = ServiceWorkerDispatcherHostPtr;
  exports.ServiceWorkerDispatcherHostAssociatedPtr = ServiceWorkerDispatcherHostAssociatedPtr;
})();