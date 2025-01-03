// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/service.mojom';
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
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', 'interface_provider.mojom.js');
  }
  var interface_provider_spec$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider_spec.mojom', 'interface_provider_spec.mojom.js');
  }
  var service_control$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/service_control.mojom', 'service_control.mojom.js');
  }



  function BindSourceInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BindSourceInfo.prototype.initDefaults_ = function() {
    this.identity = null;
    this.requiredCapabilities = null;
  };
  BindSourceInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BindSourceInfo.generate = function(generator_) {
    var generated = new BindSourceInfo;
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.requiredCapabilities = generator_.generateStruct(serviceManager.mojom.CapabilitySet, false);
    return generated;
  };

  BindSourceInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requiredCapabilities = mutator_.mutateStruct(serviceManager.mojom.CapabilitySet, false);
    }
    return this;
  };
  BindSourceInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BindSourceInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BindSourceInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BindSourceInfo.validate = function(messageValidator, offset) {
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


    // validate BindSourceInfo.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BindSourceInfo.requiredCapabilities
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, interface_provider_spec$.CapabilitySet, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BindSourceInfo.encodedSize = codec.kStructHeaderSize + 16;

  BindSourceInfo.decode = function(decoder) {
    var packed;
    var val = new BindSourceInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    val.requiredCapabilities = decoder.decodeStructPointer(interface_provider_spec$.CapabilitySet);
    return val;
  };

  BindSourceInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BindSourceInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
    encoder.encodeStructPointer(interface_provider_spec$.CapabilitySet, val.requiredCapabilities);
  };
  function Service_OnStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnStart_Params.prototype.initDefaults_ = function() {
    this.identity = null;
  };
  Service_OnStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Service_OnStart_Params.generate = function(generator_) {
    var generated = new Service_OnStart_Params;
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  Service_OnStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  Service_OnStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Service_OnStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Service_OnStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Service_OnStart_Params.validate = function(messageValidator, offset) {
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


    // validate Service_OnStart_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, connector$.Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  Service_OnStart_Params.decode = function(decoder) {
    var packed;
    var val = new Service_OnStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(connector$.Identity);
    return val;
  };

  Service_OnStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(connector$.Identity, val.identity);
  };
  function Service_OnStart_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnStart_ResponseParams.prototype.initDefaults_ = function() {
    this.connectorRequest = new bindings.InterfaceRequest();
    this.controlRequest = new associatedBindings.AssociatedInterfaceRequest();
  };
  Service_OnStart_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Service_OnStart_ResponseParams.generate = function(generator_) {
    var generated = new Service_OnStart_ResponseParams;
    generated.connectorRequest = generator_.generateInterfaceRequest("serviceManager.mojom.Connector", true);
    generated.controlRequest = generator_.generateAssociatedInterfaceRequest("serviceManager.mojom.ServiceControl", true);
    return generated;
  };

  Service_OnStart_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.connectorRequest = mutator_.mutateInterfaceRequest(this.connectorRequest, "serviceManager.mojom.Connector", true);
    }
    if (mutator_.chooseMutateField()) {
      this.controlRequest = mutator_.mutateAssociatedInterfaceRequest(this.controlRequest, "serviceManager.mojom.ServiceControl", true);
    }
    return this;
  };
  Service_OnStart_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.connectorRequest !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.ConnectorRequest"]);
    }
    if (this.controlRequest !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.ServiceControlAssociatedRequest"]);
    }
    return handles;
  };

  Service_OnStart_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Service_OnStart_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.connectorRequest = handles[idx++];;
    this.controlRequest = handles[idx++];;
    return idx;
  };

  Service_OnStart_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Service_OnStart_ResponseParams.connectorRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Service_OnStart_ResponseParams.controlRequest
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnStart_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Service_OnStart_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Service_OnStart_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connectorRequest = decoder.decodeStruct(codec.NullableInterfaceRequest);
    val.controlRequest = decoder.decodeStruct(codec.NullableAssociatedInterfaceRequest);
    return val;
  };

  Service_OnStart_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnStart_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.connectorRequest);
    encoder.encodeStruct(codec.NullableAssociatedInterfaceRequest, val.controlRequest);
  };
  function Service_OnBindInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnBindInterface_Params.prototype.initDefaults_ = function() {
    this.source = null;
    this.interfaceName = null;
    this.interfacePipe = null;
  };
  Service_OnBindInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Service_OnBindInterface_Params.generate = function(generator_) {
    var generated = new Service_OnBindInterface_Params;
    generated.source = generator_.generateStruct(serviceManager.mojom.BindSourceInfo, false);
    generated.interfaceName = generator_.generateString(false);
    generated.interfacePipe = generator_.generateMessagePipe(false);
    return generated;
  };

  Service_OnBindInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateStruct(serviceManager.mojom.BindSourceInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceName = mutator_.mutateString(this.interfaceName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interfacePipe = mutator_.mutateMessagePipe(this.interfacePipe, false);
    }
    return this;
  };
  Service_OnBindInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.interfacePipe !== null) {
      Array.prototype.push.apply(handles, ["handle<message_pipe>"]);
    }
    return handles;
  };

  Service_OnBindInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Service_OnBindInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.interfacePipe = handles[idx++];;
    return idx;
  };

  Service_OnBindInterface_Params.validate = function(messageValidator, offset) {
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


    // validate Service_OnBindInterface_Params.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, BindSourceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Service_OnBindInterface_Params.interfaceName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Service_OnBindInterface_Params.interfacePipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnBindInterface_Params.encodedSize = codec.kStructHeaderSize + 24;

  Service_OnBindInterface_Params.decode = function(decoder) {
    var packed;
    var val = new Service_OnBindInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.source = decoder.decodeStructPointer(BindSourceInfo);
    val.interfaceName = decoder.decodeStruct(codec.String);
    val.interfacePipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Service_OnBindInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnBindInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(BindSourceInfo, val.source);
    encoder.encodeStruct(codec.String, val.interfaceName);
    encoder.encodeStruct(codec.Handle, val.interfacePipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Service_OnBindInterface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Service_OnBindInterface_ResponseParams.prototype.initDefaults_ = function() {
  };
  Service_OnBindInterface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Service_OnBindInterface_ResponseParams.generate = function(generator_) {
    var generated = new Service_OnBindInterface_ResponseParams;
    return generated;
  };

  Service_OnBindInterface_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  Service_OnBindInterface_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Service_OnBindInterface_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Service_OnBindInterface_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Service_OnBindInterface_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Service_OnBindInterface_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Service_OnBindInterface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Service_OnBindInterface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Service_OnBindInterface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Service_OnBindInterface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kService_OnStart_Name = 1678589443;
  var kService_OnBindInterface_Name = 1252328433;

  function ServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Service,
                                                   handleOrPtrInfo);
  }

  function ServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Service, associatedInterfacePtrInfo);
  }

  ServiceAssociatedPtr.prototype =
      Object.create(ServicePtr.prototype);
  ServiceAssociatedPtr.prototype.constructor =
      ServiceAssociatedPtr;

  function ServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServicePtr.prototype.onStart = function() {
    return ServiceProxy.prototype.onStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceProxy.prototype.onStart = function(identity) {
    var params_ = new Service_OnStart_Params();
    params_.identity = identity;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kService_OnStart_Name,
          codec.align(Service_OnStart_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(Service_OnStart_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Service_OnStart_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ServicePtr.prototype.onBindInterface = function() {
    return ServiceProxy.prototype.onBindInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceProxy.prototype.onBindInterface = function(source, interfaceName, interfacePipe) {
    var params_ = new Service_OnBindInterface_Params();
    params_.source = source;
    params_.interfaceName = interfaceName;
    params_.interfacePipe = interfacePipe;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kService_OnBindInterface_Name,
          codec.align(Service_OnBindInterface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Service_OnBindInterface_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Service_OnBindInterface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceStub.prototype.onStart = function(identity) {
    return this.delegate_ && this.delegate_.onStart && this.delegate_.onStart(identity);
  }
  ServiceStub.prototype.onBindInterface = function(source, interfaceName, interfacePipe) {
    return this.delegate_ && this.delegate_.onBindInterface && this.delegate_.onBindInterface(source, interfaceName, interfacePipe);
  }

  ServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kService_OnStart_Name:
      var params = reader.decodeStruct(Service_OnStart_Params);
      this.onStart(params.identity).then(function(response) {
        var responseParams =
            new Service_OnStart_ResponseParams();
        responseParams.connectorRequest = response.connectorRequest;
        responseParams.controlRequest = response.controlRequest;
        var builder = new codec.MessageV2Builder(
            kService_OnStart_Name,
            codec.align(Service_OnStart_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(Service_OnStart_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kService_OnBindInterface_Name:
      var params = reader.decodeStruct(Service_OnBindInterface_Params);
      this.onBindInterface(params.source, params.interfaceName, params.interfacePipe).then(function(response) {
        var responseParams =
            new Service_OnBindInterface_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kService_OnBindInterface_Name,
            codec.align(Service_OnBindInterface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Service_OnBindInterface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kService_OnStart_Name:
        if (message.expectsResponse())
          paramsClass = Service_OnStart_Params;
      break;
      case kService_OnBindInterface_Name:
        if (message.expectsResponse())
          paramsClass = Service_OnBindInterface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kService_OnStart_Name:
        if (message.isResponse())
          paramsClass = Service_OnStart_ResponseParams;
        break;
      case kService_OnBindInterface_Name:
        if (message.isResponse())
          paramsClass = Service_OnBindInterface_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Service = {
    name: 'service_manager.mojom.Service',
    kVersion: 0,
    ptrClass: ServicePtr,
    proxyClass: ServiceProxy,
    stubClass: ServiceStub,
    validateRequest: validateServiceRequest,
    validateResponse: validateServiceResponse,
    mojomId: 'services/service_manager/public/mojom/service.mojom',
    fuzzMethods: {
      onStart: {
        params: Service_OnStart_Params,
      },
      onBindInterface: {
        params: Service_OnBindInterface_Params,
      },
    },
  };
  ServiceStub.prototype.validator = validateServiceRequest;
  ServiceProxy.prototype.validator = validateServiceResponse;
  exports.BindSourceInfo = BindSourceInfo;
  exports.Service = Service;
  exports.ServicePtr = ServicePtr;
  exports.ServiceAssociatedPtr = ServiceAssociatedPtr;
})();