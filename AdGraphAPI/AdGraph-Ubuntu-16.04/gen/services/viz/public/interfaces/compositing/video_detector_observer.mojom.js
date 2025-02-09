// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/video_detector_observer.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');



  function VideoDetectorObserver_OnVideoActivityStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDetectorObserver_OnVideoActivityStarted_Params.prototype.initDefaults_ = function() {
  };
  VideoDetectorObserver_OnVideoActivityStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDetectorObserver_OnVideoActivityStarted_Params.generate = function(generator_) {
    var generated = new VideoDetectorObserver_OnVideoActivityStarted_Params;
    return generated;
  };

  VideoDetectorObserver_OnVideoActivityStarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoDetectorObserver_OnVideoActivityStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDetectorObserver_OnVideoActivityStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDetectorObserver_OnVideoActivityStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDetectorObserver_OnVideoActivityStarted_Params.validate = function(messageValidator, offset) {
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

  VideoDetectorObserver_OnVideoActivityStarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoDetectorObserver_OnVideoActivityStarted_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDetectorObserver_OnVideoActivityStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDetectorObserver_OnVideoActivityStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDetectorObserver_OnVideoActivityStarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function VideoDetectorObserver_OnVideoActivityEnded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDetectorObserver_OnVideoActivityEnded_Params.prototype.initDefaults_ = function() {
  };
  VideoDetectorObserver_OnVideoActivityEnded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDetectorObserver_OnVideoActivityEnded_Params.generate = function(generator_) {
    var generated = new VideoDetectorObserver_OnVideoActivityEnded_Params;
    return generated;
  };

  VideoDetectorObserver_OnVideoActivityEnded_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  VideoDetectorObserver_OnVideoActivityEnded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoDetectorObserver_OnVideoActivityEnded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDetectorObserver_OnVideoActivityEnded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoDetectorObserver_OnVideoActivityEnded_Params.validate = function(messageValidator, offset) {
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

  VideoDetectorObserver_OnVideoActivityEnded_Params.encodedSize = codec.kStructHeaderSize + 0;

  VideoDetectorObserver_OnVideoActivityEnded_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDetectorObserver_OnVideoActivityEnded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VideoDetectorObserver_OnVideoActivityEnded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDetectorObserver_OnVideoActivityEnded_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kVideoDetectorObserver_OnVideoActivityStarted_Name = 540900342;
  var kVideoDetectorObserver_OnVideoActivityEnded_Name = 1405213977;

  function VideoDetectorObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDetectorObserver,
                                                   handleOrPtrInfo);
  }

  function VideoDetectorObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDetectorObserver, associatedInterfacePtrInfo);
  }

  VideoDetectorObserverAssociatedPtr.prototype =
      Object.create(VideoDetectorObserverPtr.prototype);
  VideoDetectorObserverAssociatedPtr.prototype.constructor =
      VideoDetectorObserverAssociatedPtr;

  function VideoDetectorObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDetectorObserverPtr.prototype.onVideoActivityStarted = function() {
    return VideoDetectorObserverProxy.prototype.onVideoActivityStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDetectorObserverProxy.prototype.onVideoActivityStarted = function() {
    var params_ = new VideoDetectorObserver_OnVideoActivityStarted_Params();
    var builder = new codec.MessageV0Builder(
        kVideoDetectorObserver_OnVideoActivityStarted_Name,
        codec.align(VideoDetectorObserver_OnVideoActivityStarted_Params.encodedSize));
    builder.encodeStruct(VideoDetectorObserver_OnVideoActivityStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  VideoDetectorObserverPtr.prototype.onVideoActivityEnded = function() {
    return VideoDetectorObserverProxy.prototype.onVideoActivityEnded
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDetectorObserverProxy.prototype.onVideoActivityEnded = function() {
    var params_ = new VideoDetectorObserver_OnVideoActivityEnded_Params();
    var builder = new codec.MessageV0Builder(
        kVideoDetectorObserver_OnVideoActivityEnded_Name,
        codec.align(VideoDetectorObserver_OnVideoActivityEnded_Params.encodedSize));
    builder.encodeStruct(VideoDetectorObserver_OnVideoActivityEnded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDetectorObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDetectorObserverStub.prototype.onVideoActivityStarted = function() {
    return this.delegate_ && this.delegate_.onVideoActivityStarted && this.delegate_.onVideoActivityStarted();
  }
  VideoDetectorObserverStub.prototype.onVideoActivityEnded = function() {
    return this.delegate_ && this.delegate_.onVideoActivityEnded && this.delegate_.onVideoActivityEnded();
  }

  VideoDetectorObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDetectorObserver_OnVideoActivityStarted_Name:
      var params = reader.decodeStruct(VideoDetectorObserver_OnVideoActivityStarted_Params);
      this.onVideoActivityStarted();
      return true;
    case kVideoDetectorObserver_OnVideoActivityEnded_Name:
      var params = reader.decodeStruct(VideoDetectorObserver_OnVideoActivityEnded_Params);
      this.onVideoActivityEnded();
      return true;
    default:
      return false;
    }
  };

  VideoDetectorObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoDetectorObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDetectorObserver_OnVideoActivityStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDetectorObserver_OnVideoActivityStarted_Params;
      break;
      case kVideoDetectorObserver_OnVideoActivityEnded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDetectorObserver_OnVideoActivityEnded_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDetectorObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoDetectorObserver = {
    name: 'viz.mojom.VideoDetectorObserver',
    kVersion: 0,
    ptrClass: VideoDetectorObserverPtr,
    proxyClass: VideoDetectorObserverProxy,
    stubClass: VideoDetectorObserverStub,
    validateRequest: validateVideoDetectorObserverRequest,
    validateResponse: null,
    mojomId: 'services/viz/public/interfaces/compositing/video_detector_observer.mojom',
    fuzzMethods: {
      onVideoActivityStarted: {
        params: VideoDetectorObserver_OnVideoActivityStarted_Params,
      },
      onVideoActivityEnded: {
        params: VideoDetectorObserver_OnVideoActivityEnded_Params,
      },
    },
  };
  VideoDetectorObserverStub.prototype.validator = validateVideoDetectorObserverRequest;
  VideoDetectorObserverProxy.prototype.validator = null;
  exports.VideoDetectorObserver = VideoDetectorObserver;
  exports.VideoDetectorObserverPtr = VideoDetectorObserverPtr;
  exports.VideoDetectorObserverAssociatedPtr = VideoDetectorObserverAssociatedPtr;
})();