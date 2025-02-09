// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/media_log.mojom';
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
  var media_types$ =
      mojo.internal.exposeNamespace('media.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'media/mojo/interfaces/media_types.mojom', 'media_types.mojom.js');
  }



  function MediaLog_AddEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaLog_AddEvent_Params.prototype.initDefaults_ = function() {
    this.event = null;
  };
  MediaLog_AddEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaLog_AddEvent_Params.generate = function(generator_) {
    var generated = new MediaLog_AddEvent_Params;
    generated.event = generator_.generateStruct(media.mojom.MediaLogEvent, false);
    return generated;
  };

  MediaLog_AddEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(media.mojom.MediaLogEvent, false);
    }
    return this;
  };
  MediaLog_AddEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaLog_AddEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaLog_AddEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaLog_AddEvent_Params.validate = function(messageValidator, offset) {
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


    // validate MediaLog_AddEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, media_types$.MediaLogEvent, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaLog_AddEvent_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaLog_AddEvent_Params.decode = function(decoder) {
    var packed;
    var val = new MediaLog_AddEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(media_types$.MediaLogEvent);
    return val;
  };

  MediaLog_AddEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaLog_AddEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(media_types$.MediaLogEvent, val.event);
  };
  var kMediaLog_AddEvent_Name = 2033289508;

  function MediaLogPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaLog,
                                                   handleOrPtrInfo);
  }

  function MediaLogAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaLog, associatedInterfacePtrInfo);
  }

  MediaLogAssociatedPtr.prototype =
      Object.create(MediaLogPtr.prototype);
  MediaLogAssociatedPtr.prototype.constructor =
      MediaLogAssociatedPtr;

  function MediaLogProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaLogPtr.prototype.addEvent = function() {
    return MediaLogProxy.prototype.addEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaLogProxy.prototype.addEvent = function(event) {
    var params_ = new MediaLog_AddEvent_Params();
    params_.event = event;
    var builder = new codec.MessageV0Builder(
        kMediaLog_AddEvent_Name,
        codec.align(MediaLog_AddEvent_Params.encodedSize));
    builder.encodeStruct(MediaLog_AddEvent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaLogStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaLogStub.prototype.addEvent = function(event) {
    return this.delegate_ && this.delegate_.addEvent && this.delegate_.addEvent(event);
  }

  MediaLogStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaLog_AddEvent_Name:
      var params = reader.decodeStruct(MediaLog_AddEvent_Params);
      this.addEvent(params.event);
      return true;
    default:
      return false;
    }
  };

  MediaLogStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaLogRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaLog_AddEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaLog_AddEvent_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaLogResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaLog = {
    name: 'media.mojom.MediaLog',
    kVersion: 0,
    ptrClass: MediaLogPtr,
    proxyClass: MediaLogProxy,
    stubClass: MediaLogStub,
    validateRequest: validateMediaLogRequest,
    validateResponse: null,
    mojomId: 'media/mojo/interfaces/media_log.mojom',
    fuzzMethods: {
      addEvent: {
        params: MediaLog_AddEvent_Params,
      },
    },
  };
  MediaLogStub.prototype.validator = validateMediaLogRequest;
  MediaLogProxy.prototype.validator = null;
  exports.MediaLog = MediaLog;
  exports.MediaLogPtr = MediaLogPtr;
  exports.MediaLogAssociatedPtr = MediaLogAssociatedPtr;
})();