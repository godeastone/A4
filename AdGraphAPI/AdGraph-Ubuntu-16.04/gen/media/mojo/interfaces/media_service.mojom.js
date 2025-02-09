// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/media_service.mojom';
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
  var interface_factory$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/interface_factory.mojom', 'interface_factory.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }



  function MediaService_CreateInterfaceFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaService_CreateInterfaceFactory_Params.prototype.initDefaults_ = function() {
    this.factory = new bindings.InterfaceRequest();
    this.hostInterfaces = new interface_provider$.InterfaceProviderPtr();
  };
  MediaService_CreateInterfaceFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaService_CreateInterfaceFactory_Params.generate = function(generator_) {
    var generated = new MediaService_CreateInterfaceFactory_Params;
    generated.factory = generator_.generateInterfaceRequest("media.mojom.InterfaceFactory", false);
    generated.hostInterfaces = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", true);
    return generated;
  };

  MediaService_CreateInterfaceFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.factory = mutator_.mutateInterfaceRequest(this.factory, "media.mojom.InterfaceFactory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.hostInterfaces = mutator_.mutateInterface(this.hostInterfaces, "serviceManager.mojom.InterfaceProvider", true);
    }
    return this;
  };
  MediaService_CreateInterfaceFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.factory !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.InterfaceFactoryRequest"]);
    }
    if (this.hostInterfaces !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  MediaService_CreateInterfaceFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaService_CreateInterfaceFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.factory = handles[idx++];;
    this.hostInterfaces = handles[idx++];;
    return idx;
  };

  MediaService_CreateInterfaceFactory_Params.validate = function(messageValidator, offset) {
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


    // validate MediaService_CreateInterfaceFactory_Params.factory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaService_CreateInterfaceFactory_Params.hostInterfaces
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaService_CreateInterfaceFactory_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaService_CreateInterfaceFactory_Params.decode = function(decoder) {
    var packed;
    var val = new MediaService_CreateInterfaceFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.factory = decoder.decodeStruct(codec.InterfaceRequest);
    val.hostInterfaces = decoder.decodeStruct(new codec.NullableInterface(interface_provider$.InterfaceProviderPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaService_CreateInterfaceFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaService_CreateInterfaceFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.factory);
    encoder.encodeStruct(new codec.NullableInterface(interface_provider$.InterfaceProviderPtr), val.hostInterfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kMediaService_CreateInterfaceFactory_Name = 1138239698;

  function MediaServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaService,
                                                   handleOrPtrInfo);
  }

  function MediaServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaService, associatedInterfacePtrInfo);
  }

  MediaServiceAssociatedPtr.prototype =
      Object.create(MediaServicePtr.prototype);
  MediaServiceAssociatedPtr.prototype.constructor =
      MediaServiceAssociatedPtr;

  function MediaServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaServicePtr.prototype.createInterfaceFactory = function() {
    return MediaServiceProxy.prototype.createInterfaceFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaServiceProxy.prototype.createInterfaceFactory = function(factory, hostInterfaces) {
    var params_ = new MediaService_CreateInterfaceFactory_Params();
    params_.factory = factory;
    params_.hostInterfaces = hostInterfaces;
    var builder = new codec.MessageV0Builder(
        kMediaService_CreateInterfaceFactory_Name,
        codec.align(MediaService_CreateInterfaceFactory_Params.encodedSize));
    builder.encodeStruct(MediaService_CreateInterfaceFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaServiceStub.prototype.createInterfaceFactory = function(factory, hostInterfaces) {
    return this.delegate_ && this.delegate_.createInterfaceFactory && this.delegate_.createInterfaceFactory(factory, hostInterfaces);
  }

  MediaServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaService_CreateInterfaceFactory_Name:
      var params = reader.decodeStruct(MediaService_CreateInterfaceFactory_Params);
      this.createInterfaceFactory(params.factory, params.hostInterfaces);
      return true;
    default:
      return false;
    }
  };

  MediaServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaService_CreateInterfaceFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaService_CreateInterfaceFactory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaService = {
    name: 'media.mojom.MediaService',
    kVersion: 0,
    ptrClass: MediaServicePtr,
    proxyClass: MediaServiceProxy,
    stubClass: MediaServiceStub,
    validateRequest: validateMediaServiceRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/media_service.mojom',
    fuzzMethods: {
      createInterfaceFactory: {
        params: MediaService_CreateInterfaceFactory_Params,
      },
    },
  };
  MediaServiceStub.prototype.validator = validateMediaServiceRequest;
  MediaServiceProxy.prototype.validator = null;
  exports.MediaService = MediaService;
  exports.MediaServicePtr = MediaServicePtr;
  exports.MediaServiceAssociatedPtr = MediaServiceAssociatedPtr;
})();