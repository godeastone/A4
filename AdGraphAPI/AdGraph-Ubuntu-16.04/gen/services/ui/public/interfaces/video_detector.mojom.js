// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/video_detector.mojom';
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
  var video_detector_observer$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/video_detector_observer.mojom', '../../../viz/public/interfaces/compositing/video_detector_observer.mojom.js');
  }



  function VideoDetector_AddObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoDetector_AddObserver_Params.prototype.initDefaults_ = function() {
    this.observer = new video_detector_observer$.VideoDetectorObserverPtr();
  };
  VideoDetector_AddObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoDetector_AddObserver_Params.generate = function(generator_) {
    var generated = new VideoDetector_AddObserver_Params;
    generated.observer = generator_.generateInterface("viz.mojom.VideoDetectorObserver", false);
    return generated;
  };

  VideoDetector_AddObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "viz.mojom.VideoDetectorObserver", false);
    }
    return this;
  };
  VideoDetector_AddObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.VideoDetectorObserverPtr"]);
    }
    return handles;
  };

  VideoDetector_AddObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoDetector_AddObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  VideoDetector_AddObserver_Params.validate = function(messageValidator, offset) {
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


    // validate VideoDetector_AddObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoDetector_AddObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  VideoDetector_AddObserver_Params.decode = function(decoder) {
    var packed;
    var val = new VideoDetector_AddObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.Interface(video_detector_observer$.VideoDetectorObserverPtr));
    return val;
  };

  VideoDetector_AddObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoDetector_AddObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(video_detector_observer$.VideoDetectorObserverPtr), val.observer);
  };
  var kVideoDetector_AddObserver_Name = 353635380;

  function VideoDetectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(VideoDetector,
                                                   handleOrPtrInfo);
  }

  function VideoDetectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        VideoDetector, associatedInterfacePtrInfo);
  }

  VideoDetectorAssociatedPtr.prototype =
      Object.create(VideoDetectorPtr.prototype);
  VideoDetectorAssociatedPtr.prototype.constructor =
      VideoDetectorAssociatedPtr;

  function VideoDetectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  VideoDetectorPtr.prototype.addObserver = function() {
    return VideoDetectorProxy.prototype.addObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  VideoDetectorProxy.prototype.addObserver = function(observer) {
    var params_ = new VideoDetector_AddObserver_Params();
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kVideoDetector_AddObserver_Name,
        codec.align(VideoDetector_AddObserver_Params.encodedSize));
    builder.encodeStruct(VideoDetector_AddObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function VideoDetectorStub(delegate) {
    this.delegate_ = delegate;
  }
  VideoDetectorStub.prototype.addObserver = function(observer) {
    return this.delegate_ && this.delegate_.addObserver && this.delegate_.addObserver(observer);
  }

  VideoDetectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kVideoDetector_AddObserver_Name:
      var params = reader.decodeStruct(VideoDetector_AddObserver_Params);
      this.addObserver(params.observer);
      return true;
    default:
      return false;
    }
  };

  VideoDetectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateVideoDetectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kVideoDetector_AddObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = VideoDetector_AddObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateVideoDetectorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var VideoDetector = {
    name: 'ui.mojom.VideoDetector',
    kVersion: 0,
    ptrClass: VideoDetectorPtr,
    proxyClass: VideoDetectorProxy,
    stubClass: VideoDetectorStub,
    validateRequest: validateVideoDetectorRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/video_detector.mojom',
    fuzzMethods: {
      addObserver: {
        params: VideoDetector_AddObserver_Params,
      },
    },
  };
  VideoDetectorStub.prototype.validator = validateVideoDetectorRequest;
  VideoDetectorProxy.prototype.validator = null;
  exports.VideoDetector = VideoDetector;
  exports.VideoDetectorPtr = VideoDetectorPtr;
  exports.VideoDetectorAssociatedPtr = VideoDetectorAssociatedPtr;
})();