// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/geolocation_context.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');
  var geolocation$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/geolocation.mojom', 'geolocation.mojom.js');
  }
  var geoposition$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/geoposition.mojom', 'geoposition.mojom.js');
  }



  function GeolocationContext_BindGeolocation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationContext_BindGeolocation_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  GeolocationContext_BindGeolocation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationContext_BindGeolocation_Params.generate = function(generator_) {
    var generated = new GeolocationContext_BindGeolocation_Params;
    generated.request = generator_.generateInterfaceRequest("device.mojom.Geolocation", false);
    return generated;
  };

  GeolocationContext_BindGeolocation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "device.mojom.Geolocation", false);
    }
    return this;
  };
  GeolocationContext_BindGeolocation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.GeolocationRequest"]);
    }
    return handles;
  };

  GeolocationContext_BindGeolocation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationContext_BindGeolocation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  GeolocationContext_BindGeolocation_Params.validate = function(messageValidator, offset) {
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


    // validate GeolocationContext_BindGeolocation_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GeolocationContext_BindGeolocation_Params.encodedSize = codec.kStructHeaderSize + 8;

  GeolocationContext_BindGeolocation_Params.decode = function(decoder) {
    var packed;
    var val = new GeolocationContext_BindGeolocation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GeolocationContext_BindGeolocation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationContext_BindGeolocation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function GeolocationContext_SetOverride_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationContext_SetOverride_Params.prototype.initDefaults_ = function() {
    this.geoposition = null;
  };
  GeolocationContext_SetOverride_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationContext_SetOverride_Params.generate = function(generator_) {
    var generated = new GeolocationContext_SetOverride_Params;
    generated.geoposition = generator_.generateStruct(device.mojom.Geoposition, false);
    return generated;
  };

  GeolocationContext_SetOverride_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.geoposition = mutator_.mutateStruct(device.mojom.Geoposition, false);
    }
    return this;
  };
  GeolocationContext_SetOverride_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GeolocationContext_SetOverride_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationContext_SetOverride_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GeolocationContext_SetOverride_Params.validate = function(messageValidator, offset) {
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


    // validate GeolocationContext_SetOverride_Params.geoposition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geoposition$.Geoposition, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GeolocationContext_SetOverride_Params.encodedSize = codec.kStructHeaderSize + 8;

  GeolocationContext_SetOverride_Params.decode = function(decoder) {
    var packed;
    var val = new GeolocationContext_SetOverride_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.geoposition = decoder.decodeStructPointer(geoposition$.Geoposition);
    return val;
  };

  GeolocationContext_SetOverride_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationContext_SetOverride_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geoposition$.Geoposition, val.geoposition);
  };
  function GeolocationContext_ClearOverride_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GeolocationContext_ClearOverride_Params.prototype.initDefaults_ = function() {
  };
  GeolocationContext_ClearOverride_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GeolocationContext_ClearOverride_Params.generate = function(generator_) {
    var generated = new GeolocationContext_ClearOverride_Params;
    return generated;
  };

  GeolocationContext_ClearOverride_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  GeolocationContext_ClearOverride_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GeolocationContext_ClearOverride_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GeolocationContext_ClearOverride_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GeolocationContext_ClearOverride_Params.validate = function(messageValidator, offset) {
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

  GeolocationContext_ClearOverride_Params.encodedSize = codec.kStructHeaderSize + 0;

  GeolocationContext_ClearOverride_Params.decode = function(decoder) {
    var packed;
    var val = new GeolocationContext_ClearOverride_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  GeolocationContext_ClearOverride_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GeolocationContext_ClearOverride_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kGeolocationContext_BindGeolocation_Name = 1954327777;
  var kGeolocationContext_SetOverride_Name = 198058130;
  var kGeolocationContext_ClearOverride_Name = 566960035;

  function GeolocationContextPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(GeolocationContext,
                                                   handleOrPtrInfo);
  }

  function GeolocationContextAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        GeolocationContext, associatedInterfacePtrInfo);
  }

  GeolocationContextAssociatedPtr.prototype =
      Object.create(GeolocationContextPtr.prototype);
  GeolocationContextAssociatedPtr.prototype.constructor =
      GeolocationContextAssociatedPtr;

  function GeolocationContextProxy(receiver) {
    this.receiver_ = receiver;
  }
  GeolocationContextPtr.prototype.bindGeolocation = function() {
    return GeolocationContextProxy.prototype.bindGeolocation
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationContextProxy.prototype.bindGeolocation = function(request) {
    var params_ = new GeolocationContext_BindGeolocation_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kGeolocationContext_BindGeolocation_Name,
        codec.align(GeolocationContext_BindGeolocation_Params.encodedSize));
    builder.encodeStruct(GeolocationContext_BindGeolocation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GeolocationContextPtr.prototype.setOverride = function() {
    return GeolocationContextProxy.prototype.setOverride
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationContextProxy.prototype.setOverride = function(geoposition) {
    var params_ = new GeolocationContext_SetOverride_Params();
    params_.geoposition = geoposition;
    var builder = new codec.MessageV0Builder(
        kGeolocationContext_SetOverride_Name,
        codec.align(GeolocationContext_SetOverride_Params.encodedSize));
    builder.encodeStruct(GeolocationContext_SetOverride_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  GeolocationContextPtr.prototype.clearOverride = function() {
    return GeolocationContextProxy.prototype.clearOverride
        .apply(this.ptr.getProxy(), arguments);
  };

  GeolocationContextProxy.prototype.clearOverride = function() {
    var params_ = new GeolocationContext_ClearOverride_Params();
    var builder = new codec.MessageV0Builder(
        kGeolocationContext_ClearOverride_Name,
        codec.align(GeolocationContext_ClearOverride_Params.encodedSize));
    builder.encodeStruct(GeolocationContext_ClearOverride_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GeolocationContextStub(delegate) {
    this.delegate_ = delegate;
  }
  GeolocationContextStub.prototype.bindGeolocation = function(request) {
    return this.delegate_ && this.delegate_.bindGeolocation && this.delegate_.bindGeolocation(request);
  }
  GeolocationContextStub.prototype.setOverride = function(geoposition) {
    return this.delegate_ && this.delegate_.setOverride && this.delegate_.setOverride(geoposition);
  }
  GeolocationContextStub.prototype.clearOverride = function() {
    return this.delegate_ && this.delegate_.clearOverride && this.delegate_.clearOverride();
  }

  GeolocationContextStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeolocationContext_BindGeolocation_Name:
      var params = reader.decodeStruct(GeolocationContext_BindGeolocation_Params);
      this.bindGeolocation(params.request);
      return true;
    case kGeolocationContext_SetOverride_Name:
      var params = reader.decodeStruct(GeolocationContext_SetOverride_Params);
      this.setOverride(params.geoposition);
      return true;
    case kGeolocationContext_ClearOverride_Name:
      var params = reader.decodeStruct(GeolocationContext_ClearOverride_Params);
      this.clearOverride();
      return true;
    default:
      return false;
    }
  };

  GeolocationContextStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateGeolocationContextRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGeolocationContext_BindGeolocation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GeolocationContext_BindGeolocation_Params;
      break;
      case kGeolocationContext_SetOverride_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GeolocationContext_SetOverride_Params;
      break;
      case kGeolocationContext_ClearOverride_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = GeolocationContext_ClearOverride_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGeolocationContextResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var GeolocationContext = {
    name: 'device.mojom.GeolocationContext',
    kVersion: 0,
    ptrClass: GeolocationContextPtr,
    proxyClass: GeolocationContextProxy,
    stubClass: GeolocationContextStub,
    validateRequest: validateGeolocationContextRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/geolocation_context.mojom',
    fuzzMethods: {
      bindGeolocation: {
        params: GeolocationContext_BindGeolocation_Params,
      },
      setOverride: {
        params: GeolocationContext_SetOverride_Params,
      },
      clearOverride: {
        params: GeolocationContext_ClearOverride_Params,
      },
    },
  };
  GeolocationContextStub.prototype.validator = validateGeolocationContextRequest;
  GeolocationContextProxy.prototype.validator = null;
  exports.GeolocationContext = GeolocationContext;
  exports.GeolocationContextPtr = GeolocationContextPtr;
  exports.GeolocationContextAssociatedPtr = GeolocationContextAssociatedPtr;
})();