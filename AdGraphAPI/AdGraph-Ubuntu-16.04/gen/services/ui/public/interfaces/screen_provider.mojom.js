// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/screen_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var window_manager_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_manager_constants.mojom', 'window_manager_constants.mojom.js');
  }



  function ScreenProviderObserver_OnDisplaysChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenProviderObserver_OnDisplaysChanged_Params.prototype.initDefaults_ = function() {
    this.displays = null;
    this.primaryDisplayId = 0;
    this.internalDisplayId = 0;
  };
  ScreenProviderObserver_OnDisplaysChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenProviderObserver_OnDisplaysChanged_Params.generate = function(generator_) {
    var generated = new ScreenProviderObserver_OnDisplaysChanged_Params;
    generated.displays = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.WsDisplay, false);
    });
    generated.primaryDisplayId = generator_.generateInt64();
    generated.internalDisplayId = generator_.generateInt64();
    return generated;
  };

  ScreenProviderObserver_OnDisplaysChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displays = mutator_.mutateArray(this.displays, function(val) {
        return mutator_.mutateStruct(ui.mojom.WsDisplay, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.primaryDisplayId = mutator_.mutateInt64(this.primaryDisplayId);
    }
    if (mutator_.chooseMutateField()) {
      this.internalDisplayId = mutator_.mutateInt64(this.internalDisplayId);
    }
    return this;
  };
  ScreenProviderObserver_OnDisplaysChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScreenProviderObserver_OnDisplaysChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenProviderObserver_OnDisplaysChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScreenProviderObserver_OnDisplaysChanged_Params.validate = function(messageValidator, offset) {
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


    // validate ScreenProviderObserver_OnDisplaysChanged_Params.displays
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(window_manager_constants$.WsDisplay), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ScreenProviderObserver_OnDisplaysChanged_Params.encodedSize = codec.kStructHeaderSize + 24;

  ScreenProviderObserver_OnDisplaysChanged_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenProviderObserver_OnDisplaysChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displays = decoder.decodeArrayPointer(new codec.PointerTo(window_manager_constants$.WsDisplay));
    val.primaryDisplayId = decoder.decodeStruct(codec.Int64);
    val.internalDisplayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  ScreenProviderObserver_OnDisplaysChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenProviderObserver_OnDisplaysChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(window_manager_constants$.WsDisplay), val.displays);
    encoder.encodeStruct(codec.Int64, val.primaryDisplayId);
    encoder.encodeStruct(codec.Int64, val.internalDisplayId);
  };
  function ScreenProvider_AddObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScreenProvider_AddObserver_Params.prototype.initDefaults_ = function() {
    this.observer = new ScreenProviderObserverPtr();
  };
  ScreenProvider_AddObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScreenProvider_AddObserver_Params.generate = function(generator_) {
    var generated = new ScreenProvider_AddObserver_Params;
    generated.observer = generator_.generateInterface("ui.mojom.ScreenProviderObserver", false);
    return generated;
  };

  ScreenProvider_AddObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "ui.mojom.ScreenProviderObserver", false);
    }
    return this;
  };
  ScreenProvider_AddObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.ScreenProviderObserverPtr"]);
    }
    return handles;
  };

  ScreenProvider_AddObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScreenProvider_AddObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  ScreenProvider_AddObserver_Params.validate = function(messageValidator, offset) {
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


    // validate ScreenProvider_AddObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScreenProvider_AddObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  ScreenProvider_AddObserver_Params.decode = function(decoder) {
    var packed;
    var val = new ScreenProvider_AddObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.Interface(ScreenProviderObserverPtr));
    return val;
  };

  ScreenProvider_AddObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScreenProvider_AddObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(ScreenProviderObserverPtr), val.observer);
  };
  var kScreenProviderObserver_OnDisplaysChanged_Name = 788496451;

  function ScreenProviderObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ScreenProviderObserver,
                                                   handleOrPtrInfo);
  }

  function ScreenProviderObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ScreenProviderObserver, associatedInterfacePtrInfo);
  }

  ScreenProviderObserverAssociatedPtr.prototype =
      Object.create(ScreenProviderObserverPtr.prototype);
  ScreenProviderObserverAssociatedPtr.prototype.constructor =
      ScreenProviderObserverAssociatedPtr;

  function ScreenProviderObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ScreenProviderObserverPtr.prototype.onDisplaysChanged = function() {
    return ScreenProviderObserverProxy.prototype.onDisplaysChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenProviderObserverProxy.prototype.onDisplaysChanged = function(displays, primaryDisplayId, internalDisplayId) {
    var params_ = new ScreenProviderObserver_OnDisplaysChanged_Params();
    params_.displays = displays;
    params_.primaryDisplayId = primaryDisplayId;
    params_.internalDisplayId = internalDisplayId;
    var builder = new codec.MessageV0Builder(
        kScreenProviderObserver_OnDisplaysChanged_Name,
        codec.align(ScreenProviderObserver_OnDisplaysChanged_Params.encodedSize));
    builder.encodeStruct(ScreenProviderObserver_OnDisplaysChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ScreenProviderObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  ScreenProviderObserverStub.prototype.onDisplaysChanged = function(displays, primaryDisplayId, internalDisplayId) {
    return this.delegate_ && this.delegate_.onDisplaysChanged && this.delegate_.onDisplaysChanged(displays, primaryDisplayId, internalDisplayId);
  }

  ScreenProviderObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kScreenProviderObserver_OnDisplaysChanged_Name:
      var params = reader.decodeStruct(ScreenProviderObserver_OnDisplaysChanged_Params);
      this.onDisplaysChanged(params.displays, params.primaryDisplayId, params.internalDisplayId);
      return true;
    default:
      return false;
    }
  };

  ScreenProviderObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateScreenProviderObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kScreenProviderObserver_OnDisplaysChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ScreenProviderObserver_OnDisplaysChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateScreenProviderObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ScreenProviderObserver = {
    name: 'ui.mojom.ScreenProviderObserver',
    kVersion: 0,
    ptrClass: ScreenProviderObserverPtr,
    proxyClass: ScreenProviderObserverProxy,
    stubClass: ScreenProviderObserverStub,
    validateRequest: validateScreenProviderObserverRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/screen_provider.mojom',
    fuzzMethods: {
      onDisplaysChanged: {
        params: ScreenProviderObserver_OnDisplaysChanged_Params,
      },
    },
  };
  ScreenProviderObserverStub.prototype.validator = validateScreenProviderObserverRequest;
  ScreenProviderObserverProxy.prototype.validator = null;
  var kScreenProvider_AddObserver_Name = 819003364;

  function ScreenProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ScreenProvider,
                                                   handleOrPtrInfo);
  }

  function ScreenProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ScreenProvider, associatedInterfacePtrInfo);
  }

  ScreenProviderAssociatedPtr.prototype =
      Object.create(ScreenProviderPtr.prototype);
  ScreenProviderAssociatedPtr.prototype.constructor =
      ScreenProviderAssociatedPtr;

  function ScreenProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  ScreenProviderPtr.prototype.addObserver = function() {
    return ScreenProviderProxy.prototype.addObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  ScreenProviderProxy.prototype.addObserver = function(observer) {
    var params_ = new ScreenProvider_AddObserver_Params();
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kScreenProvider_AddObserver_Name,
        codec.align(ScreenProvider_AddObserver_Params.encodedSize));
    builder.encodeStruct(ScreenProvider_AddObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ScreenProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  ScreenProviderStub.prototype.addObserver = function(observer) {
    return this.delegate_ && this.delegate_.addObserver && this.delegate_.addObserver(observer);
  }

  ScreenProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kScreenProvider_AddObserver_Name:
      var params = reader.decodeStruct(ScreenProvider_AddObserver_Params);
      this.addObserver(params.observer);
      return true;
    default:
      return false;
    }
  };

  ScreenProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateScreenProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kScreenProvider_AddObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ScreenProvider_AddObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateScreenProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ScreenProvider = {
    name: 'ui.mojom.ScreenProvider',
    kVersion: 0,
    ptrClass: ScreenProviderPtr,
    proxyClass: ScreenProviderProxy,
    stubClass: ScreenProviderStub,
    validateRequest: validateScreenProviderRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/screen_provider.mojom',
    fuzzMethods: {
      addObserver: {
        params: ScreenProvider_AddObserver_Params,
      },
    },
  };
  ScreenProviderStub.prototype.validator = validateScreenProviderRequest;
  ScreenProviderProxy.prototype.validator = null;
  exports.ScreenProviderObserver = ScreenProviderObserver;
  exports.ScreenProviderObserverPtr = ScreenProviderObserverPtr;
  exports.ScreenProviderObserverAssociatedPtr = ScreenProviderObserverAssociatedPtr;
  exports.ScreenProvider = ScreenProvider;
  exports.ScreenProviderPtr = ScreenProviderPtr;
  exports.ScreenProviderAssociatedPtr = ScreenProviderAssociatedPtr;
})();