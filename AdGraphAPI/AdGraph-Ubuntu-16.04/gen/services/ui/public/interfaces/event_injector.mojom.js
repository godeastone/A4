// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/event_injector.mojom';
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
  var event$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event.mojom', '../../../../ui/events/mojo/event.mojom.js');
  }



  function EventInjector_InjectEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EventInjector_InjectEvent_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.event = null;
  };
  EventInjector_InjectEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EventInjector_InjectEvent_Params.generate = function(generator_) {
    var generated = new EventInjector_InjectEvent_Params;
    generated.displayId = generator_.generateInt64();
    generated.event = generator_.generateStruct(ui.mojom.Event, false);
    return generated;
  };

  EventInjector_InjectEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    return this;
  };
  EventInjector_InjectEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EventInjector_InjectEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EventInjector_InjectEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EventInjector_InjectEvent_Params.validate = function(messageValidator, offset) {
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



    // validate EventInjector_InjectEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EventInjector_InjectEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  EventInjector_InjectEvent_Params.decode = function(decoder) {
    var packed;
    var val = new EventInjector_InjectEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  EventInjector_InjectEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EventInjector_InjectEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function EventInjector_InjectEvent_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EventInjector_InjectEvent_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  EventInjector_InjectEvent_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EventInjector_InjectEvent_ResponseParams.generate = function(generator_) {
    var generated = new EventInjector_InjectEvent_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  EventInjector_InjectEvent_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  EventInjector_InjectEvent_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EventInjector_InjectEvent_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EventInjector_InjectEvent_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EventInjector_InjectEvent_ResponseParams.validate = function(messageValidator, offset) {
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

  EventInjector_InjectEvent_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  EventInjector_InjectEvent_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new EventInjector_InjectEvent_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EventInjector_InjectEvent_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EventInjector_InjectEvent_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kEventInjector_InjectEvent_Name = 1112983020;

  function EventInjectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EventInjector,
                                                   handleOrPtrInfo);
  }

  function EventInjectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EventInjector, associatedInterfacePtrInfo);
  }

  EventInjectorAssociatedPtr.prototype =
      Object.create(EventInjectorPtr.prototype);
  EventInjectorAssociatedPtr.prototype.constructor =
      EventInjectorAssociatedPtr;

  function EventInjectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  EventInjectorPtr.prototype.injectEvent = function() {
    return EventInjectorProxy.prototype.injectEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  EventInjectorProxy.prototype.injectEvent = function(displayId, event) {
    var params_ = new EventInjector_InjectEvent_Params();
    params_.displayId = displayId;
    params_.event = event;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kEventInjector_InjectEvent_Name,
          codec.align(EventInjector_InjectEvent_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(EventInjector_InjectEvent_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(EventInjector_InjectEvent_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function EventInjectorStub(delegate) {
    this.delegate_ = delegate;
  }
  EventInjectorStub.prototype.injectEvent = function(displayId, event) {
    return this.delegate_ && this.delegate_.injectEvent && this.delegate_.injectEvent(displayId, event);
  }

  EventInjectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  EventInjectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEventInjector_InjectEvent_Name:
      var params = reader.decodeStruct(EventInjector_InjectEvent_Params);
      this.injectEvent(params.displayId, params.event).then(function(response) {
        var responseParams =
            new EventInjector_InjectEvent_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kEventInjector_InjectEvent_Name,
            codec.align(EventInjector_InjectEvent_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(EventInjector_InjectEvent_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateEventInjectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEventInjector_InjectEvent_Name:
        if (message.expectsResponse())
          paramsClass = EventInjector_InjectEvent_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEventInjectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kEventInjector_InjectEvent_Name:
        if (message.isResponse())
          paramsClass = EventInjector_InjectEvent_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var EventInjector = {
    name: 'ui.mojom.EventInjector',
    kVersion: 0,
    ptrClass: EventInjectorPtr,
    proxyClass: EventInjectorProxy,
    stubClass: EventInjectorStub,
    validateRequest: validateEventInjectorRequest,
    validateResponse: validateEventInjectorResponse,
    mojomId: 'services/ui/public/interfaces/event_injector.mojom',
    fuzzMethods: {
      injectEvent: {
        params: EventInjector_InjectEvent_Params,
      },
    },
  };
  EventInjectorStub.prototype.validator = validateEventInjectorRequest;
  EventInjectorProxy.prototype.validator = validateEventInjectorResponse;
  exports.EventInjector = EventInjector;
  exports.EventInjectorPtr = EventInjectorPtr;
  exports.EventInjectorAssociatedPtr = EventInjectorAssociatedPtr;
})();