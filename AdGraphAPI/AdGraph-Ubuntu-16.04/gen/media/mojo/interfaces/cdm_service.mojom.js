// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/cdm_service.mojom';
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
  var content_decryption_module$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/content_decryption_module.mojom', 'content_decryption_module.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }



  function CdmService_LoadCdm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmService_LoadCdm_Params.prototype.initDefaults_ = function() {
    this.cdmPath = null;
  };
  CdmService_LoadCdm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CdmService_LoadCdm_Params.generate = function(generator_) {
    var generated = new CdmService_LoadCdm_Params;
    generated.cdmPath = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    return generated;
  };

  CdmService_LoadCdm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cdmPath = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    return this;
  };
  CdmService_LoadCdm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CdmService_LoadCdm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CdmService_LoadCdm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CdmService_LoadCdm_Params.validate = function(messageValidator, offset) {
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


    // validate CdmService_LoadCdm_Params.cdmPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CdmService_LoadCdm_Params.encodedSize = codec.kStructHeaderSize + 8;

  CdmService_LoadCdm_Params.decode = function(decoder) {
    var packed;
    var val = new CdmService_LoadCdm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cdmPath = decoder.decodeStructPointer(file_path$.FilePath);
    return val;
  };

  CdmService_LoadCdm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmService_LoadCdm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.cdmPath);
  };
  function CdmService_CreateCdmFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CdmService_CreateCdmFactory_Params.prototype.initDefaults_ = function() {
    this.factory = new bindings.InterfaceRequest();
    this.hostInterfaces = new interface_provider$.InterfaceProviderPtr();
  };
  CdmService_CreateCdmFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CdmService_CreateCdmFactory_Params.generate = function(generator_) {
    var generated = new CdmService_CreateCdmFactory_Params;
    generated.factory = generator_.generateInterfaceRequest("media.mojom.CdmFactory", false);
    generated.hostInterfaces = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", true);
    return generated;
  };

  CdmService_CreateCdmFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.factory = mutator_.mutateInterfaceRequest(this.factory, "media.mojom.CdmFactory", false);
    }
    if (mutator_.chooseMutateField()) {
      this.hostInterfaces = mutator_.mutateInterface(this.hostInterfaces, "serviceManager.mojom.InterfaceProvider", true);
    }
    return this;
  };
  CdmService_CreateCdmFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.factory !== null) {
      Array.prototype.push.apply(handles, ["media.mojom.CdmFactoryRequest"]);
    }
    if (this.hostInterfaces !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  CdmService_CreateCdmFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CdmService_CreateCdmFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.factory = handles[idx++];;
    this.hostInterfaces = handles[idx++];;
    return idx;
  };

  CdmService_CreateCdmFactory_Params.validate = function(messageValidator, offset) {
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


    // validate CdmService_CreateCdmFactory_Params.factory
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CdmService_CreateCdmFactory_Params.hostInterfaces
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CdmService_CreateCdmFactory_Params.encodedSize = codec.kStructHeaderSize + 16;

  CdmService_CreateCdmFactory_Params.decode = function(decoder) {
    var packed;
    var val = new CdmService_CreateCdmFactory_Params();
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

  CdmService_CreateCdmFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CdmService_CreateCdmFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.factory);
    encoder.encodeStruct(new codec.NullableInterface(interface_provider$.InterfaceProviderPtr), val.hostInterfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kCdmService_LoadCdm_Name = 4392797;
  var kCdmService_CreateCdmFactory_Name = 811216099;

  function CdmServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CdmService,
                                                   handleOrPtrInfo);
  }

  function CdmServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CdmService, associatedInterfacePtrInfo);
  }

  CdmServiceAssociatedPtr.prototype =
      Object.create(CdmServicePtr.prototype);
  CdmServiceAssociatedPtr.prototype.constructor =
      CdmServiceAssociatedPtr;

  function CdmServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  CdmServicePtr.prototype.loadCdm = function() {
    return CdmServiceProxy.prototype.loadCdm
        .apply(this.ptr.getProxy(), arguments);
  };

  CdmServiceProxy.prototype.loadCdm = function(cdmPath) {
    var params_ = new CdmService_LoadCdm_Params();
    params_.cdmPath = cdmPath;
    var builder = new codec.MessageV0Builder(
        kCdmService_LoadCdm_Name,
        codec.align(CdmService_LoadCdm_Params.encodedSize));
    builder.encodeStruct(CdmService_LoadCdm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CdmServicePtr.prototype.createCdmFactory = function() {
    return CdmServiceProxy.prototype.createCdmFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  CdmServiceProxy.prototype.createCdmFactory = function(factory, hostInterfaces) {
    var params_ = new CdmService_CreateCdmFactory_Params();
    params_.factory = factory;
    params_.hostInterfaces = hostInterfaces;
    var builder = new codec.MessageV0Builder(
        kCdmService_CreateCdmFactory_Name,
        codec.align(CdmService_CreateCdmFactory_Params.encodedSize));
    builder.encodeStruct(CdmService_CreateCdmFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CdmServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  CdmServiceStub.prototype.loadCdm = function(cdmPath) {
    return this.delegate_ && this.delegate_.loadCdm && this.delegate_.loadCdm(cdmPath);
  }
  CdmServiceStub.prototype.createCdmFactory = function(factory, hostInterfaces) {
    return this.delegate_ && this.delegate_.createCdmFactory && this.delegate_.createCdmFactory(factory, hostInterfaces);
  }

  CdmServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCdmService_LoadCdm_Name:
      var params = reader.decodeStruct(CdmService_LoadCdm_Params);
      this.loadCdm(params.cdmPath);
      return true;
    case kCdmService_CreateCdmFactory_Name:
      var params = reader.decodeStruct(CdmService_CreateCdmFactory_Params);
      this.createCdmFactory(params.factory, params.hostInterfaces);
      return true;
    default:
      return false;
    }
  };

  CdmServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCdmServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCdmService_LoadCdm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CdmService_LoadCdm_Params;
      break;
      case kCdmService_CreateCdmFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CdmService_CreateCdmFactory_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCdmServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CdmService = {
    name: 'media.mojom.CdmService',
    kVersion: 0,
    ptrClass: CdmServicePtr,
    proxyClass: CdmServiceProxy,
    stubClass: CdmServiceStub,
    validateRequest: validateCdmServiceRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/cdm_service.mojom',
    fuzzMethods: {
      loadCdm: {
        params: CdmService_LoadCdm_Params,
      },
      createCdmFactory: {
        params: CdmService_CreateCdmFactory_Params,
      },
    },
  };
  CdmServiceStub.prototype.validator = validateCdmServiceRequest;
  CdmServiceProxy.prototype.validator = null;
  exports.CdmService = CdmService;
  exports.CdmServicePtr = CdmServicePtr;
  exports.CdmServiceAssociatedPtr = CdmServiceAssociatedPtr;
})();