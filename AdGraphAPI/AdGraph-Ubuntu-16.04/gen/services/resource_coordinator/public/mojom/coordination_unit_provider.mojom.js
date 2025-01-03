// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/coordination_unit_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  var coordination_unit$ =
      mojo.internal.exposeNamespace('resourceCoordinator.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/resource_coordinator/public/mojom/coordination_unit.mojom', 'coordination_unit.mojom.js');
  }



  function CoordinationUnitProvider_CreateFrameCoordinationUnit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.id = null;
  };
  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.generate = function(generator_) {
    var generated = new CoordinationUnitProvider_CreateFrameCoordinationUnit_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.FrameCoordinationUnit", false);
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.FrameCoordinationUnit", false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.FrameCoordinationUnitRequest"]);
    }
    return handles;
  };

  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.validate = function(messageValidator, offset) {
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


    // validate CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, coordination_unit$.CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.encodedSize = codec.kStructHeaderSize + 16;

  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitProvider_CreateFrameCoordinationUnit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeStructPointer(coordination_unit$.CoordinationUnitID);
    return val;
  };

  CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(coordination_unit$.CoordinationUnitID, val.id);
  };
  function CoordinationUnitProvider_CreatePageCoordinationUnit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.id = null;
  };
  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.generate = function(generator_) {
    var generated = new CoordinationUnitProvider_CreatePageCoordinationUnit_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.PageCoordinationUnit", false);
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.PageCoordinationUnit", false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.PageCoordinationUnitRequest"]);
    }
    return handles;
  };

  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.validate = function(messageValidator, offset) {
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


    // validate CoordinationUnitProvider_CreatePageCoordinationUnit_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CoordinationUnitProvider_CreatePageCoordinationUnit_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, coordination_unit$.CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.encodedSize = codec.kStructHeaderSize + 16;

  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitProvider_CreatePageCoordinationUnit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeStructPointer(coordination_unit$.CoordinationUnitID);
    return val;
  };

  CoordinationUnitProvider_CreatePageCoordinationUnit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitProvider_CreatePageCoordinationUnit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(coordination_unit$.CoordinationUnitID, val.id);
  };
  function CoordinationUnitProvider_CreateProcessCoordinationUnit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.id = null;
  };
  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.generate = function(generator_) {
    var generated = new CoordinationUnitProvider_CreateProcessCoordinationUnit_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.ProcessCoordinationUnit", false);
    generated.id = generator_.generateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    return generated;
  };

  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.ProcessCoordinationUnit", false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(resourceCoordinator.mojom.CoordinationUnitID, false);
    }
    return this;
  };
  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.ProcessCoordinationUnitRequest"]);
    }
    return handles;
  };

  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.validate = function(messageValidator, offset) {
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


    // validate CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, coordination_unit$.CoordinationUnitID, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.encodedSize = codec.kStructHeaderSize + 16;

  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitProvider_CreateProcessCoordinationUnit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeStructPointer(coordination_unit$.CoordinationUnitID);
    return val;
  };

  CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(coordination_unit$.CoordinationUnitID, val.id);
  };
  function CoordinationUnitProvider_GetSystemCoordinationUnit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.generate = function(generator_) {
    var generated = new CoordinationUnitProvider_GetSystemCoordinationUnit_Params;
    generated.request = generator_.generateInterfaceRequest("resourceCoordinator.mojom.SystemCoordinationUnit", false);
    return generated;
  };

  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "resourceCoordinator.mojom.SystemCoordinationUnit", false);
    }
    return this;
  };
  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["resourceCoordinator.mojom.SystemCoordinationUnitRequest"]);
    }
    return handles;
  };

  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.validate = function(messageValidator, offset) {
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


    // validate CoordinationUnitProvider_GetSystemCoordinationUnit_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.encodedSize = codec.kStructHeaderSize + 8;

  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.decode = function(decoder) {
    var packed;
    var val = new CoordinationUnitProvider_GetSystemCoordinationUnit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CoordinationUnitProvider_GetSystemCoordinationUnit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CoordinationUnitProvider_GetSystemCoordinationUnit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name = 2048965610;
  var kCoordinationUnitProvider_CreatePageCoordinationUnit_Name = 1948073315;
  var kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name = 1304701292;
  var kCoordinationUnitProvider_GetSystemCoordinationUnit_Name = 1618299542;

  function CoordinationUnitProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CoordinationUnitProvider,
                                                   handleOrPtrInfo);
  }

  function CoordinationUnitProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CoordinationUnitProvider, associatedInterfacePtrInfo);
  }

  CoordinationUnitProviderAssociatedPtr.prototype =
      Object.create(CoordinationUnitProviderPtr.prototype);
  CoordinationUnitProviderAssociatedPtr.prototype.constructor =
      CoordinationUnitProviderAssociatedPtr;

  function CoordinationUnitProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  CoordinationUnitProviderPtr.prototype.createFrameCoordinationUnit = function() {
    return CoordinationUnitProviderProxy.prototype.createFrameCoordinationUnit
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinationUnitProviderProxy.prototype.createFrameCoordinationUnit = function(request, id) {
    var params_ = new CoordinationUnitProvider_CreateFrameCoordinationUnit_Params();
    params_.request = request;
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name,
        codec.align(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params.encodedSize));
    builder.encodeStruct(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CoordinationUnitProviderPtr.prototype.createPageCoordinationUnit = function() {
    return CoordinationUnitProviderProxy.prototype.createPageCoordinationUnit
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinationUnitProviderProxy.prototype.createPageCoordinationUnit = function(request, id) {
    var params_ = new CoordinationUnitProvider_CreatePageCoordinationUnit_Params();
    params_.request = request;
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kCoordinationUnitProvider_CreatePageCoordinationUnit_Name,
        codec.align(CoordinationUnitProvider_CreatePageCoordinationUnit_Params.encodedSize));
    builder.encodeStruct(CoordinationUnitProvider_CreatePageCoordinationUnit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CoordinationUnitProviderPtr.prototype.createProcessCoordinationUnit = function() {
    return CoordinationUnitProviderProxy.prototype.createProcessCoordinationUnit
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinationUnitProviderProxy.prototype.createProcessCoordinationUnit = function(request, id) {
    var params_ = new CoordinationUnitProvider_CreateProcessCoordinationUnit_Params();
    params_.request = request;
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name,
        codec.align(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params.encodedSize));
    builder.encodeStruct(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  CoordinationUnitProviderPtr.prototype.getSystemCoordinationUnit = function() {
    return CoordinationUnitProviderProxy.prototype.getSystemCoordinationUnit
        .apply(this.ptr.getProxy(), arguments);
  };

  CoordinationUnitProviderProxy.prototype.getSystemCoordinationUnit = function(request) {
    var params_ = new CoordinationUnitProvider_GetSystemCoordinationUnit_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kCoordinationUnitProvider_GetSystemCoordinationUnit_Name,
        codec.align(CoordinationUnitProvider_GetSystemCoordinationUnit_Params.encodedSize));
    builder.encodeStruct(CoordinationUnitProvider_GetSystemCoordinationUnit_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CoordinationUnitProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  CoordinationUnitProviderStub.prototype.createFrameCoordinationUnit = function(request, id) {
    return this.delegate_ && this.delegate_.createFrameCoordinationUnit && this.delegate_.createFrameCoordinationUnit(request, id);
  }
  CoordinationUnitProviderStub.prototype.createPageCoordinationUnit = function(request, id) {
    return this.delegate_ && this.delegate_.createPageCoordinationUnit && this.delegate_.createPageCoordinationUnit(request, id);
  }
  CoordinationUnitProviderStub.prototype.createProcessCoordinationUnit = function(request, id) {
    return this.delegate_ && this.delegate_.createProcessCoordinationUnit && this.delegate_.createProcessCoordinationUnit(request, id);
  }
  CoordinationUnitProviderStub.prototype.getSystemCoordinationUnit = function(request) {
    return this.delegate_ && this.delegate_.getSystemCoordinationUnit && this.delegate_.getSystemCoordinationUnit(request);
  }

  CoordinationUnitProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name:
      var params = reader.decodeStruct(CoordinationUnitProvider_CreateFrameCoordinationUnit_Params);
      this.createFrameCoordinationUnit(params.request, params.id);
      return true;
    case kCoordinationUnitProvider_CreatePageCoordinationUnit_Name:
      var params = reader.decodeStruct(CoordinationUnitProvider_CreatePageCoordinationUnit_Params);
      this.createPageCoordinationUnit(params.request, params.id);
      return true;
    case kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name:
      var params = reader.decodeStruct(CoordinationUnitProvider_CreateProcessCoordinationUnit_Params);
      this.createProcessCoordinationUnit(params.request, params.id);
      return true;
    case kCoordinationUnitProvider_GetSystemCoordinationUnit_Name:
      var params = reader.decodeStruct(CoordinationUnitProvider_GetSystemCoordinationUnit_Params);
      this.getSystemCoordinationUnit(params.request);
      return true;
    default:
      return false;
    }
  };

  CoordinationUnitProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCoordinationUnitProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCoordinationUnitProvider_CreateFrameCoordinationUnit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CoordinationUnitProvider_CreateFrameCoordinationUnit_Params;
      break;
      case kCoordinationUnitProvider_CreatePageCoordinationUnit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CoordinationUnitProvider_CreatePageCoordinationUnit_Params;
      break;
      case kCoordinationUnitProvider_CreateProcessCoordinationUnit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CoordinationUnitProvider_CreateProcessCoordinationUnit_Params;
      break;
      case kCoordinationUnitProvider_GetSystemCoordinationUnit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CoordinationUnitProvider_GetSystemCoordinationUnit_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCoordinationUnitProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CoordinationUnitProvider = {
    name: 'resource_coordinator.mojom.CoordinationUnitProvider',
    kVersion: 0,
    ptrClass: CoordinationUnitProviderPtr,
    proxyClass: CoordinationUnitProviderProxy,
    stubClass: CoordinationUnitProviderStub,
    validateRequest: validateCoordinationUnitProviderRequest,
    validateResponse: null,
    mojomId: 'services/resource_coordinator/public/mojom/coordination_unit_provider.mojom',
    fuzzMethods: {
      createFrameCoordinationUnit: {
        params: CoordinationUnitProvider_CreateFrameCoordinationUnit_Params,
      },
      createPageCoordinationUnit: {
        params: CoordinationUnitProvider_CreatePageCoordinationUnit_Params,
      },
      createProcessCoordinationUnit: {
        params: CoordinationUnitProvider_CreateProcessCoordinationUnit_Params,
      },
      getSystemCoordinationUnit: {
        params: CoordinationUnitProvider_GetSystemCoordinationUnit_Params,
      },
    },
  };
  CoordinationUnitProviderStub.prototype.validator = validateCoordinationUnitProviderRequest;
  CoordinationUnitProviderProxy.prototype.validator = null;
  exports.CoordinationUnitProvider = CoordinationUnitProvider;
  exports.CoordinationUnitProviderPtr = CoordinationUnitProviderPtr;
  exports.CoordinationUnitProviderAssociatedPtr = CoordinationUnitProviderAssociatedPtr;
})();