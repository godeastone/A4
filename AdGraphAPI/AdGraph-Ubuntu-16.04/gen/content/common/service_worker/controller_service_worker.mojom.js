// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/service_worker/controller_service_worker.mojom';
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
  var dispatch_fetch_event_params$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/dispatch_fetch_event_params.mojom', 'dispatch_fetch_event_params.mojom.js');
  }
  var service_worker_event_dispatcher$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_event_dispatcher.mojom', 'service_worker_event_dispatcher.mojom.js');
  }
  var service_worker_fetch_response_callback$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/service_worker_fetch_response_callback.mojom', 'service_worker_fetch_response_callback.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', '../../../services/network/public/mojom/url_loader.mojom.js');
  }
  var service_worker_event_status$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.js');
  }
  var service_worker_object$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_object.mojom', '../../../third_party/blink/public/mojom/service_worker/service_worker_object.mojom.js');
  }
  var fetch_api_request$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom', '../../../third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom.js');
  }



  function ControllerServiceWorkerInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ControllerServiceWorkerInfo.prototype.initDefaults_ = function() {
    this.endpoint = new ControllerServiceWorkerPtr();
    this.clientId = null;
    this.objectInfo = null;
  };
  ControllerServiceWorkerInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ControllerServiceWorkerInfo.generate = function(generator_) {
    var generated = new ControllerServiceWorkerInfo;
    generated.endpoint = generator_.generateInterface("content.mojom.ControllerServiceWorker", true);
    generated.clientId = generator_.generateString(false);
    generated.objectInfo = generator_.generateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    return generated;
  };

  ControllerServiceWorkerInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.endpoint = mutator_.mutateInterface(this.endpoint, "content.mojom.ControllerServiceWorker", true);
    }
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateString(this.clientId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.objectInfo = mutator_.mutateStruct(blink.mojom.ServiceWorkerObjectInfo, true);
    }
    return this;
  };
  ControllerServiceWorkerInfo.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.endpoint !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ControllerServiceWorkerPtr"]);
    }
    if (this.objectInfo !== null) {
      Array.prototype.push.apply(handles, this.objectInfo.getHandleDeps());
    }
    return handles;
  };

  ControllerServiceWorkerInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ControllerServiceWorkerInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    this.endpoint = handles[idx++];;
    idx = this.objectInfo.setHandlesInternal_(handles, idx);
    return idx;
  };

  ControllerServiceWorkerInfo.validate = function(messageValidator, offset) {
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


    // validate ControllerServiceWorkerInfo.endpoint
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ControllerServiceWorkerInfo.clientId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ControllerServiceWorkerInfo.objectInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, service_worker_object$.ServiceWorkerObjectInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ControllerServiceWorkerInfo.encodedSize = codec.kStructHeaderSize + 24;

  ControllerServiceWorkerInfo.decode = function(decoder) {
    var packed;
    var val = new ControllerServiceWorkerInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.endpoint = decoder.decodeStruct(new codec.NullableInterface(ControllerServiceWorkerPtr));
    val.clientId = decoder.decodeStruct(codec.String);
    val.objectInfo = decoder.decodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo);
    return val;
  };

  ControllerServiceWorkerInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ControllerServiceWorkerInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.NullableInterface(ControllerServiceWorkerPtr), val.endpoint);
    encoder.encodeStruct(codec.String, val.clientId);
    encoder.encodeStructPointer(service_worker_object$.ServiceWorkerObjectInfo, val.objectInfo);
  };
  function ControllerServiceWorker_DispatchFetchEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ControllerServiceWorker_DispatchFetchEvent_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.responseCallback = new service_worker_fetch_response_callback$.ServiceWorkerFetchResponseCallbackPtr();
  };
  ControllerServiceWorker_DispatchFetchEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ControllerServiceWorker_DispatchFetchEvent_Params.generate = function(generator_) {
    var generated = new ControllerServiceWorker_DispatchFetchEvent_Params;
    generated.params = generator_.generateStruct(content.mojom.DispatchFetchEventParams, false);
    generated.responseCallback = generator_.generateInterface("content.mojom.ServiceWorkerFetchResponseCallback", false);
    return generated;
  };

  ControllerServiceWorker_DispatchFetchEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.DispatchFetchEventParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.responseCallback = mutator_.mutateInterface(this.responseCallback, "content.mojom.ServiceWorkerFetchResponseCallback", false);
    }
    return this;
  };
  ControllerServiceWorker_DispatchFetchEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    if (this.responseCallback !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ServiceWorkerFetchResponseCallbackPtr"]);
    }
    return handles;
  };

  ControllerServiceWorker_DispatchFetchEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ControllerServiceWorker_DispatchFetchEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    this.responseCallback = handles[idx++];;
    return idx;
  };

  ControllerServiceWorker_DispatchFetchEvent_Params.validate = function(messageValidator, offset) {
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


    // validate ControllerServiceWorker_DispatchFetchEvent_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, dispatch_fetch_event_params$.DispatchFetchEventParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ControllerServiceWorker_DispatchFetchEvent_Params.responseCallback
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ControllerServiceWorker_DispatchFetchEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  ControllerServiceWorker_DispatchFetchEvent_Params.decode = function(decoder) {
    var packed;
    var val = new ControllerServiceWorker_DispatchFetchEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(dispatch_fetch_event_params$.DispatchFetchEventParams);
    val.responseCallback = decoder.decodeStruct(new codec.Interface(service_worker_fetch_response_callback$.ServiceWorkerFetchResponseCallbackPtr));
    return val;
  };

  ControllerServiceWorker_DispatchFetchEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ControllerServiceWorker_DispatchFetchEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(dispatch_fetch_event_params$.DispatchFetchEventParams, val.params);
    encoder.encodeStruct(new codec.Interface(service_worker_fetch_response_callback$.ServiceWorkerFetchResponseCallbackPtr), val.responseCallback);
  };
  function ControllerServiceWorker_DispatchFetchEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.dispatchEventTime = null;
  };
  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.generate = function(generator_) {
    var generated = new ControllerServiceWorker_DispatchFetchEvent_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.dispatchEventTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    return generated;
  };

  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.dispatchEventTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    return this;
  };
  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ControllerServiceWorker_DispatchFetchEvent_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, service_worker_event_status$.ServiceWorkerEventStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ControllerServiceWorker_DispatchFetchEvent_ResponseParams.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ControllerServiceWorker_DispatchFetchEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.dispatchEventTime = decoder.decodeStructPointer(time$.Time);
    return val;
  };

  ControllerServiceWorker_DispatchFetchEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ControllerServiceWorker_DispatchFetchEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.Time, val.dispatchEventTime);
  };
  function ControllerServiceWorker_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ControllerServiceWorker_Clone_Params.prototype.initDefaults_ = function() {
    this.controller = new bindings.InterfaceRequest();
  };
  ControllerServiceWorker_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ControllerServiceWorker_Clone_Params.generate = function(generator_) {
    var generated = new ControllerServiceWorker_Clone_Params;
    generated.controller = generator_.generateInterfaceRequest("content.mojom.ControllerServiceWorker", false);
    return generated;
  };

  ControllerServiceWorker_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.controller = mutator_.mutateInterfaceRequest(this.controller, "content.mojom.ControllerServiceWorker", false);
    }
    return this;
  };
  ControllerServiceWorker_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controller !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.ControllerServiceWorkerRequest"]);
    }
    return handles;
  };

  ControllerServiceWorker_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ControllerServiceWorker_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.controller = handles[idx++];;
    return idx;
  };

  ControllerServiceWorker_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate ControllerServiceWorker_Clone_Params.controller
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ControllerServiceWorker_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  ControllerServiceWorker_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new ControllerServiceWorker_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.controller = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ControllerServiceWorker_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ControllerServiceWorker_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.controller);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kControllerServiceWorker_DispatchFetchEvent_Name = 1975801641;
  var kControllerServiceWorker_Clone_Name = 1202040573;

  function ControllerServiceWorkerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ControllerServiceWorker,
                                                   handleOrPtrInfo);
  }

  function ControllerServiceWorkerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ControllerServiceWorker, associatedInterfacePtrInfo);
  }

  ControllerServiceWorkerAssociatedPtr.prototype =
      Object.create(ControllerServiceWorkerPtr.prototype);
  ControllerServiceWorkerAssociatedPtr.prototype.constructor =
      ControllerServiceWorkerAssociatedPtr;

  function ControllerServiceWorkerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ControllerServiceWorkerPtr.prototype.dispatchFetchEvent = function() {
    return ControllerServiceWorkerProxy.prototype.dispatchFetchEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  ControllerServiceWorkerProxy.prototype.dispatchFetchEvent = function(params, responseCallback) {
    var params_ = new ControllerServiceWorker_DispatchFetchEvent_Params();
    params_.params = params;
    params_.responseCallback = responseCallback;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kControllerServiceWorker_DispatchFetchEvent_Name,
          codec.align(ControllerServiceWorker_DispatchFetchEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ControllerServiceWorker_DispatchFetchEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ControllerServiceWorker_DispatchFetchEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ControllerServiceWorkerPtr.prototype.clone = function() {
    return ControllerServiceWorkerProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  ControllerServiceWorkerProxy.prototype.clone = function(controller) {
    var params_ = new ControllerServiceWorker_Clone_Params();
    params_.controller = controller;
    var builder = new codec.MessageV0Builder(
        kControllerServiceWorker_Clone_Name,
        codec.align(ControllerServiceWorker_Clone_Params.encodedSize));
    builder.encodeStruct(ControllerServiceWorker_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ControllerServiceWorkerStub(delegate) {
    this.delegate_ = delegate;
  }
  ControllerServiceWorkerStub.prototype.dispatchFetchEvent = function(params, responseCallback) {
    return this.delegate_ && this.delegate_.dispatchFetchEvent && this.delegate_.dispatchFetchEvent(params, responseCallback);
  }
  ControllerServiceWorkerStub.prototype.clone = function(controller) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(controller);
  }

  ControllerServiceWorkerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kControllerServiceWorker_Clone_Name:
      var params = reader.decodeStruct(ControllerServiceWorker_Clone_Params);
      this.clone(params.controller);
      return true;
    default:
      return false;
    }
  };

  ControllerServiceWorkerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kControllerServiceWorker_DispatchFetchEvent_Name:
      var params = reader.decodeStruct(ControllerServiceWorker_DispatchFetchEvent_Params);
      this.dispatchFetchEvent(params.params, params.responseCallback).then(function(response) {
        var responseParams =
            new ControllerServiceWorker_DispatchFetchEvent_ResponseParams();
        responseParams.status = response.status;
        responseParams.dispatchEventTime = response.dispatchEventTime;
        var builder = new codec.MessageV1Builder(
            kControllerServiceWorker_DispatchFetchEvent_Name,
            codec.align(ControllerServiceWorker_DispatchFetchEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ControllerServiceWorker_DispatchFetchEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateControllerServiceWorkerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kControllerServiceWorker_DispatchFetchEvent_Name:
        if (message.expectsResponse())
          paramsClass = ControllerServiceWorker_DispatchFetchEvent_Params;
      break;
      case kControllerServiceWorker_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ControllerServiceWorker_Clone_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateControllerServiceWorkerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kControllerServiceWorker_DispatchFetchEvent_Name:
        if (message.isResponse())
          paramsClass = ControllerServiceWorker_DispatchFetchEvent_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ControllerServiceWorker = {
    name: 'content.mojom.ControllerServiceWorker',
    kVersion: 0,
    ptrClass: ControllerServiceWorkerPtr,
    proxyClass: ControllerServiceWorkerProxy,
    stubClass: ControllerServiceWorkerStub,
    validateRequest: validateControllerServiceWorkerRequest,
    validateResponse: validateControllerServiceWorkerResponse,
    mojomId: 'content/common/service_worker/controller_service_worker.mojom',
    fuzzMethods: {
      dispatchFetchEvent: {
        params: ControllerServiceWorker_DispatchFetchEvent_Params,
      },
      clone: {
        params: ControllerServiceWorker_Clone_Params,
      },
    },
  };
  ControllerServiceWorkerStub.prototype.validator = validateControllerServiceWorkerRequest;
  ControllerServiceWorkerProxy.prototype.validator = validateControllerServiceWorkerResponse;
  exports.ControllerServiceWorkerInfo = ControllerServiceWorkerInfo;
  exports.ControllerServiceWorker = ControllerServiceWorker;
  exports.ControllerServiceWorkerPtr = ControllerServiceWorkerPtr;
  exports.ControllerServiceWorkerAssociatedPtr = ControllerServiceWorkerAssociatedPtr;
})();