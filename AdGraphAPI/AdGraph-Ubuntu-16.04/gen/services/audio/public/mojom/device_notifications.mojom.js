// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/audio/public/mojom/device_notifications.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('audio.mojom');



  function DeviceListener_DevicesChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceListener_DevicesChanged_Params.prototype.initDefaults_ = function() {
  };
  DeviceListener_DevicesChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceListener_DevicesChanged_Params.generate = function(generator_) {
    var generated = new DeviceListener_DevicesChanged_Params;
    return generated;
  };

  DeviceListener_DevicesChanged_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DeviceListener_DevicesChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DeviceListener_DevicesChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceListener_DevicesChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DeviceListener_DevicesChanged_Params.validate = function(messageValidator, offset) {
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

  DeviceListener_DevicesChanged_Params.encodedSize = codec.kStructHeaderSize + 0;

  DeviceListener_DevicesChanged_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceListener_DevicesChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DeviceListener_DevicesChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceListener_DevicesChanged_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DeviceNotifier_RegisterListener_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DeviceNotifier_RegisterListener_Params.prototype.initDefaults_ = function() {
    this.listener = new DeviceListenerPtr();
  };
  DeviceNotifier_RegisterListener_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DeviceNotifier_RegisterListener_Params.generate = function(generator_) {
    var generated = new DeviceNotifier_RegisterListener_Params;
    generated.listener = generator_.generateInterface("audio.mojom.DeviceListener", false);
    return generated;
  };

  DeviceNotifier_RegisterListener_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.listener = mutator_.mutateInterface(this.listener, "audio.mojom.DeviceListener", false);
    }
    return this;
  };
  DeviceNotifier_RegisterListener_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.listener !== null) {
      Array.prototype.push.apply(handles, ["audio.mojom.DeviceListenerPtr"]);
    }
    return handles;
  };

  DeviceNotifier_RegisterListener_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DeviceNotifier_RegisterListener_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.listener = handles[idx++];;
    return idx;
  };

  DeviceNotifier_RegisterListener_Params.validate = function(messageValidator, offset) {
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


    // validate DeviceNotifier_RegisterListener_Params.listener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DeviceNotifier_RegisterListener_Params.encodedSize = codec.kStructHeaderSize + 8;

  DeviceNotifier_RegisterListener_Params.decode = function(decoder) {
    var packed;
    var val = new DeviceNotifier_RegisterListener_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.listener = decoder.decodeStruct(new codec.Interface(DeviceListenerPtr));
    return val;
  };

  DeviceNotifier_RegisterListener_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DeviceNotifier_RegisterListener_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(DeviceListenerPtr), val.listener);
  };
  var kDeviceListener_DevicesChanged_Name = 620730891;

  function DeviceListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DeviceListener,
                                                   handleOrPtrInfo);
  }

  function DeviceListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DeviceListener, associatedInterfacePtrInfo);
  }

  DeviceListenerAssociatedPtr.prototype =
      Object.create(DeviceListenerPtr.prototype);
  DeviceListenerAssociatedPtr.prototype.constructor =
      DeviceListenerAssociatedPtr;

  function DeviceListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  DeviceListenerPtr.prototype.devicesChanged = function() {
    return DeviceListenerProxy.prototype.devicesChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceListenerProxy.prototype.devicesChanged = function() {
    var params_ = new DeviceListener_DevicesChanged_Params();
    var builder = new codec.MessageV0Builder(
        kDeviceListener_DevicesChanged_Name,
        codec.align(DeviceListener_DevicesChanged_Params.encodedSize));
    builder.encodeStruct(DeviceListener_DevicesChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DeviceListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  DeviceListenerStub.prototype.devicesChanged = function() {
    return this.delegate_ && this.delegate_.devicesChanged && this.delegate_.devicesChanged();
  }

  DeviceListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceListener_DevicesChanged_Name:
      var params = reader.decodeStruct(DeviceListener_DevicesChanged_Params);
      this.devicesChanged();
      return true;
    default:
      return false;
    }
  };

  DeviceListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDeviceListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDeviceListener_DevicesChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceListener_DevicesChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DeviceListener = {
    name: 'audio.mojom.DeviceListener',
    kVersion: 0,
    ptrClass: DeviceListenerPtr,
    proxyClass: DeviceListenerProxy,
    stubClass: DeviceListenerStub,
    validateRequest: validateDeviceListenerRequest,
    validateResponse: null,
    mojomId: 'services/audio/public/mojom/device_notifications.mojom',
    fuzzMethods: {
      devicesChanged: {
        params: DeviceListener_DevicesChanged_Params,
      },
    },
  };
  DeviceListenerStub.prototype.validator = validateDeviceListenerRequest;
  DeviceListenerProxy.prototype.validator = null;
  var kDeviceNotifier_RegisterListener_Name = 723746560;

  function DeviceNotifierPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DeviceNotifier,
                                                   handleOrPtrInfo);
  }

  function DeviceNotifierAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DeviceNotifier, associatedInterfacePtrInfo);
  }

  DeviceNotifierAssociatedPtr.prototype =
      Object.create(DeviceNotifierPtr.prototype);
  DeviceNotifierAssociatedPtr.prototype.constructor =
      DeviceNotifierAssociatedPtr;

  function DeviceNotifierProxy(receiver) {
    this.receiver_ = receiver;
  }
  DeviceNotifierPtr.prototype.registerListener = function() {
    return DeviceNotifierProxy.prototype.registerListener
        .apply(this.ptr.getProxy(), arguments);
  };

  DeviceNotifierProxy.prototype.registerListener = function(listener) {
    var params_ = new DeviceNotifier_RegisterListener_Params();
    params_.listener = listener;
    var builder = new codec.MessageV0Builder(
        kDeviceNotifier_RegisterListener_Name,
        codec.align(DeviceNotifier_RegisterListener_Params.encodedSize));
    builder.encodeStruct(DeviceNotifier_RegisterListener_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DeviceNotifierStub(delegate) {
    this.delegate_ = delegate;
  }
  DeviceNotifierStub.prototype.registerListener = function(listener) {
    return this.delegate_ && this.delegate_.registerListener && this.delegate_.registerListener(listener);
  }

  DeviceNotifierStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDeviceNotifier_RegisterListener_Name:
      var params = reader.decodeStruct(DeviceNotifier_RegisterListener_Params);
      this.registerListener(params.listener);
      return true;
    default:
      return false;
    }
  };

  DeviceNotifierStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDeviceNotifierRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDeviceNotifier_RegisterListener_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DeviceNotifier_RegisterListener_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDeviceNotifierResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DeviceNotifier = {
    name: 'audio.mojom.DeviceNotifier',
    kVersion: 0,
    ptrClass: DeviceNotifierPtr,
    proxyClass: DeviceNotifierProxy,
    stubClass: DeviceNotifierStub,
    validateRequest: validateDeviceNotifierRequest,
    validateResponse: null,
    mojomId: 'services/audio/public/mojom/device_notifications.mojom',
    fuzzMethods: {
      registerListener: {
        params: DeviceNotifier_RegisterListener_Params,
      },
    },
  };
  DeviceNotifierStub.prototype.validator = validateDeviceNotifierRequest;
  DeviceNotifierProxy.prototype.validator = null;
  exports.DeviceListener = DeviceListener;
  exports.DeviceListenerPtr = DeviceListenerPtr;
  exports.DeviceListenerAssociatedPtr = DeviceListenerAssociatedPtr;
  exports.DeviceNotifier = DeviceNotifier;
  exports.DeviceNotifierPtr = DeviceNotifierPtr;
  exports.DeviceNotifierAssociatedPtr = DeviceNotifierAssociatedPtr;
})();