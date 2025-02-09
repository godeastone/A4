// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/shape_detection/public/mojom/facedetection_provider.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('shapeDetection.mojom');
  var facedetection$ =
      mojo.internal.exposeNamespace('shapeDetection.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/shape_detection/public/mojom/facedetection.mojom', 'facedetection.mojom.js');
  }



  function FaceDetectionProvider_CreateFaceDetection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FaceDetectionProvider_CreateFaceDetection_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
    this.options = null;
  };
  FaceDetectionProvider_CreateFaceDetection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FaceDetectionProvider_CreateFaceDetection_Params.generate = function(generator_) {
    var generated = new FaceDetectionProvider_CreateFaceDetection_Params;
    generated.request = generator_.generateInterfaceRequest("shapeDetection.mojom.FaceDetection", false);
    generated.options = generator_.generateStruct(shapeDetection.mojom.FaceDetectorOptions, false);
    return generated;
  };

  FaceDetectionProvider_CreateFaceDetection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "shapeDetection.mojom.FaceDetection", false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(shapeDetection.mojom.FaceDetectorOptions, false);
    }
    return this;
  };
  FaceDetectionProvider_CreateFaceDetection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["shapeDetection.mojom.FaceDetectionRequest"]);
    }
    return handles;
  };

  FaceDetectionProvider_CreateFaceDetection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FaceDetectionProvider_CreateFaceDetection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  FaceDetectionProvider_CreateFaceDetection_Params.validate = function(messageValidator, offset) {
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


    // validate FaceDetectionProvider_CreateFaceDetection_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FaceDetectionProvider_CreateFaceDetection_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, facedetection$.FaceDetectorOptions, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FaceDetectionProvider_CreateFaceDetection_Params.encodedSize = codec.kStructHeaderSize + 16;

  FaceDetectionProvider_CreateFaceDetection_Params.decode = function(decoder) {
    var packed;
    var val = new FaceDetectionProvider_CreateFaceDetection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.options = decoder.decodeStructPointer(facedetection$.FaceDetectorOptions);
    return val;
  };

  FaceDetectionProvider_CreateFaceDetection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FaceDetectionProvider_CreateFaceDetection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(facedetection$.FaceDetectorOptions, val.options);
  };
  var kFaceDetectionProvider_CreateFaceDetection_Name = 460161407;

  function FaceDetectionProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FaceDetectionProvider,
                                                   handleOrPtrInfo);
  }

  function FaceDetectionProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FaceDetectionProvider, associatedInterfacePtrInfo);
  }

  FaceDetectionProviderAssociatedPtr.prototype =
      Object.create(FaceDetectionProviderPtr.prototype);
  FaceDetectionProviderAssociatedPtr.prototype.constructor =
      FaceDetectionProviderAssociatedPtr;

  function FaceDetectionProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  FaceDetectionProviderPtr.prototype.createFaceDetection = function() {
    return FaceDetectionProviderProxy.prototype.createFaceDetection
        .apply(this.ptr.getProxy(), arguments);
  };

  FaceDetectionProviderProxy.prototype.createFaceDetection = function(request, options) {
    var params_ = new FaceDetectionProvider_CreateFaceDetection_Params();
    params_.request = request;
    params_.options = options;
    var builder = new codec.MessageV0Builder(
        kFaceDetectionProvider_CreateFaceDetection_Name,
        codec.align(FaceDetectionProvider_CreateFaceDetection_Params.encodedSize));
    builder.encodeStruct(FaceDetectionProvider_CreateFaceDetection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FaceDetectionProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  FaceDetectionProviderStub.prototype.createFaceDetection = function(request, options) {
    return this.delegate_ && this.delegate_.createFaceDetection && this.delegate_.createFaceDetection(request, options);
  }

  FaceDetectionProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFaceDetectionProvider_CreateFaceDetection_Name:
      var params = reader.decodeStruct(FaceDetectionProvider_CreateFaceDetection_Params);
      this.createFaceDetection(params.request, params.options);
      return true;
    default:
      return false;
    }
  };

  FaceDetectionProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFaceDetectionProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFaceDetectionProvider_CreateFaceDetection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FaceDetectionProvider_CreateFaceDetection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFaceDetectionProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FaceDetectionProvider = {
    name: 'shape_detection.mojom.FaceDetectionProvider',
    kVersion: 0,
    ptrClass: FaceDetectionProviderPtr,
    proxyClass: FaceDetectionProviderProxy,
    stubClass: FaceDetectionProviderStub,
    validateRequest: validateFaceDetectionProviderRequest,
    validateResponse: null,
    mojomId: 'services/shape_detection/public/mojom/facedetection_provider.mojom',
    fuzzMethods: {
      createFaceDetection: {
        params: FaceDetectionProvider_CreateFaceDetection_Params,
      },
    },
  };
  FaceDetectionProviderStub.prototype.validator = validateFaceDetectionProviderRequest;
  FaceDetectionProviderProxy.prototype.validator = null;
  exports.FaceDetectionProvider = FaceDetectionProvider;
  exports.FaceDetectionProviderPtr = FaceDetectionProviderPtr;
  exports.FaceDetectionProviderAssociatedPtr = FaceDetectionProviderAssociatedPtr;
})();