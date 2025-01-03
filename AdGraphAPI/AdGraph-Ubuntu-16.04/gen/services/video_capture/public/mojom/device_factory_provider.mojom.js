// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/device_factory_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('videoCapture.mojom');
  var device_factory$ =
      mojo.internal.exposeNamespace('videoCapture.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/video_capture/public/mojom/device_factory.mojom', 'device_factory.mojom.js');
  }



  function DeviceFactoryProvider_ConnectToDeviceFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactoryProvider_ConnectToDeviceFactory_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  DeviceFactoryProvider_ConnectToDeviceFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactoryProvider_ConnectToDeviceFactory_Params.generate = function(generator_) {
    var generated = new DeviceFactoryProvider_ConnectToDeviceFactory_Params;
    generated.request = generator_.generateInterfaceRequest("videoCapture.mojom.DeviceFactory", false);
    return generated;
  };

  DeviceFactoryProvider_ConnectToDeviceFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "videoCapture.mojom.DeviceFactory", false);
    }
    return this;
  };
  DeviceFactoryProvider_ConnectToDeviceFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["videoCapture.mojom.DeviceFactoryRequest"]);
    }
    return handles;
  };

  DeviceFactoryProvider_ConnectToDeviceFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactoryProvider_ConnectToDeviceFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  DeviceFactoryProvider_ConnectToDeviceFactory_Params.validate = function(messageValidator, offset) {
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


    // validate DeviceFactoryProvider_ConnectToDeviceFactory_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceFactoryProvider_ConnectToDeviceFactory_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceFactoryProvider_ConnectToDeviceFactory_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceFactoryProvider_ConnectToDeviceFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceFactoryProvider_ConnectToDeviceFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactoryProvider_ConnectToDeviceFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DeviceFactoryProvider_SetShutdownDelayInSeconds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.prototype.initDefaults_ = function() {
    this.seconds = 0;
  };
  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.generate = function(generator_) {
    var generated = new DeviceFactoryProvider_SetShutdownDelayInSeconds_Params;
    generated.seconds = generator_.generateFloat();
    return generated;
  };

  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.seconds = mutator_.mutateFloat(this.seconds);
    }
    return this;
  };
  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.validate = function(messageValidator, offset) {
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

  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceFactoryProvider_SetShutdownDelayInSeconds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.seconds = decoder.decodeStruct(codec.Float);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.seconds);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kDeviceFactoryProvider_ConnectToDeviceFactory_Name = 1399954202;
  var kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name = 1262044140;

  function DeviceFactoryProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DeviceFactoryProvider,
                                                   handleOrPtrInfo);
  }

  function DeviceFactoryProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DeviceFactoryProvider, associatedInterfacePtrInfo);
  }

  DeviceFactoryProviderAssociatedPtr.prototype =
      Object.create(DeviceFactoryProviderPtr.prototype);
  DeviceFactoryProviderAssociatedPtr.prototype.constructor =
      DeviceFactoryProviderAssociatedPtr;

  function DeviceFactoryProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  DeviceFactoryProviderPtr.prototype.connectToDeviceFactory = function() {
    return DeviceFactoryProviderProxy.prototype.connectToDeviceFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceFactoryProviderProxy.prototype.connectToDeviceFactory = function(request) {
    var params_ = new DeviceFactoryProvider_ConnectToDeviceFactory_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kDeviceFactoryProvider_ConnectToDeviceFactory_Name,
        codec.align(DeviceFactoryProvider_ConnectToDeviceFactory_Params.encodedSize));
    builder.encodeStruct(DeviceFactoryProvider_ConnectToDeviceFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DeviceFactoryProviderPtr.prototype.setShutdownDelayInSeconds = function() {
    return DeviceFactoryProviderProxy.prototype.setShutdownDelayInSeconds
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceFactoryProviderProxy.prototype.setShutdownDelayInSeconds = function(seconds) {
    var params_ = new DeviceFactoryProvider_SetShutdownDelayInSeconds_Params();
    params_.seconds = seconds;
    var builder = new codec.MessageV0Builder(
        kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name,
        codec.align(DeviceFactoryProvider_SetShutdownDelayInSeconds_Params.encodedSize));
    builder.encodeStruct(DeviceFactoryProvider_SetShutdownDelayInSeconds_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DeviceFactoryProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  DeviceFactoryProviderStub.prototype.connectToDeviceFactory = function(request) {
    return this.delegate_ && this.delegate_.connectToDeviceFactory && this.delegate_.connectToDeviceFactory(request);
  }
  DeviceFactoryProviderStub.prototype.setShutdownDelayInSeconds = function(seconds) {
    return this.delegate_ && this.delegate_.setShutdownDelayInSeconds && this.delegate_.setShutdownDelayInSeconds(seconds);
  }

  DeviceFactoryProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceFactoryProvider_ConnectToDeviceFactory_Name:
      var params = reader.decodeStruct(DeviceFactoryProvider_ConnectToDeviceFactory_Params);
      this.connectToDeviceFactory(params.request);
      return true;
    case kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name:
      var params = reader.decodeStruct(DeviceFactoryProvider_SetShutdownDelayInSeconds_Params);
      this.setShutdownDelayInSeconds(params.seconds);
      return true;
    default:
      return false;
    }
  };

  DeviceFactoryProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDeviceFactoryProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDeviceFactoryProvider_ConnectToDeviceFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceFactoryProvider_ConnectToDeviceFactory_Params;
      break;
      case kDeviceFactoryProvider_SetShutdownDelayInSeconds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceFactoryProvider_SetShutdownDelayInSeconds_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceFactoryProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DeviceFactoryProvider = {
    name: 'video_capture.mojom.DeviceFactoryProvider',
    kVersion: 0,
    ptrClass: DeviceFactoryProviderPtr,
    proxyClass: DeviceFactoryProviderProxy,
    stubClass: DeviceFactoryProviderStub,
    validateRequest: validateDeviceFactoryProviderRequest,
    validateResponse: null,
    mojomId: 'services/video_capture/public/mojom/device_factory_provider.mojom',
    fuzzMethods: {
      connectToDeviceFactory: {
        params: DeviceFactoryProvider_ConnectToDeviceFactory_Params,
      },
      setShutdownDelayInSeconds: {
        params: DeviceFactoryProvider_SetShutdownDelayInSeconds_Params,
      },
    },
  };
  DeviceFactoryProviderStub.prototype.validator = validateDeviceFactoryProviderRequest;
  DeviceFactoryProviderProxy.prototype.validator = null;
  exports.DeviceFactoryProvider = DeviceFactoryProvider;
  exports.DeviceFactoryProviderPtr = DeviceFactoryProviderPtr;
  exports.DeviceFactoryProviderAssociatedPtr = DeviceFactoryProviderAssociatedPtr;
})();