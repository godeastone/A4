// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/shape_detection/public/mojom/textdetection.mojom';
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
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function TextDetectionResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextDetectionResult.prototype.initDefaults_ = function() {
    this.rawValue = null;
    this.boundingBox = null;
    this.cornerPoints = null;
  };
  TextDetectionResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextDetectionResult.generate = function(generator_) {
    var generated = new TextDetectionResult;
    generated.rawValue = generator_.generateString(false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.cornerPoints = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.PointF, false);
    });
    return generated;
  };

  TextDetectionResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rawValue = mutator_.mutateString(this.rawValue, false);
    }
    if (mutator_.chooseMutateField()) {
      this.boundingBox = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cornerPoints = mutator_.mutateArray(this.cornerPoints, function(val) {
        return mutator_.mutateStruct(gfx.mojom.PointF, false);
      });
    }
    return this;
  };
  TextDetectionResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextDetectionResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextDetectionResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextDetectionResult.validate = function(messageValidator, offset) {
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


    // validate TextDetectionResult.rawValue
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextDetectionResult.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TextDetectionResult.cornerPoints
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.PointF), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextDetectionResult.encodedSize = codec.kStructHeaderSize + 24;

  TextDetectionResult.decode = function(decoder) {
    var packed;
    var val = new TextDetectionResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rawValue = decoder.decodeStruct(codec.String);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    val.cornerPoints = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.PointF));
    return val;
  };

  TextDetectionResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextDetectionResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.rawValue);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.PointF), val.cornerPoints);
  };
  function TextDetection_Detect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextDetection_Detect_Params.prototype.initDefaults_ = function() {
    this.bitmapData = null;
  };
  TextDetection_Detect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextDetection_Detect_Params.generate = function(generator_) {
    var generated = new TextDetection_Detect_Params;
    generated.bitmapData = generator_.generateStruct(skia.mojom.Bitmap, false);
    return generated;
  };

  TextDetection_Detect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitmapData = mutator_.mutateStruct(skia.mojom.Bitmap, false);
    }
    return this;
  };
  TextDetection_Detect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bitmapData !== null) {
      Array.prototype.push.apply(handles, this.bitmapData.getHandleDeps());
    }
    return handles;
  };

  TextDetection_Detect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextDetection_Detect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bitmapData.setHandlesInternal_(handles, idx);
    return idx;
  };

  TextDetection_Detect_Params.validate = function(messageValidator, offset) {
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


    // validate TextDetection_Detect_Params.bitmapData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, bitmap$.Bitmap, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextDetection_Detect_Params.encodedSize = codec.kStructHeaderSize + 8;

  TextDetection_Detect_Params.decode = function(decoder) {
    var packed;
    var val = new TextDetection_Detect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitmapData = decoder.decodeStructPointer(bitmap$.Bitmap);
    return val;
  };

  TextDetection_Detect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextDetection_Detect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.bitmapData);
  };
  function TextDetection_Detect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TextDetection_Detect_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  TextDetection_Detect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TextDetection_Detect_ResponseParams.generate = function(generator_) {
    var generated = new TextDetection_Detect_ResponseParams;
    generated.results = generator_.generateArray(function() {
      return generator_.generateStruct(shapeDetection.mojom.TextDetectionResult, false);
    });
    return generated;
  };

  TextDetection_Detect_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateArray(this.results, function(val) {
        return mutator_.mutateStruct(shapeDetection.mojom.TextDetectionResult, false);
      });
    }
    return this;
  };
  TextDetection_Detect_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TextDetection_Detect_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TextDetection_Detect_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TextDetection_Detect_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate TextDetection_Detect_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(TextDetectionResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TextDetection_Detect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  TextDetection_Detect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new TextDetection_Detect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(TextDetectionResult));
    return val;
  };

  TextDetection_Detect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TextDetection_Detect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(TextDetectionResult), val.results);
  };
  var kTextDetection_Detect_Name = 1509758226;

  function TextDetectionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TextDetection,
                                                   handleOrPtrInfo);
  }

  function TextDetectionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TextDetection, associatedInterfacePtrInfo);
  }

  TextDetectionAssociatedPtr.prototype =
      Object.create(TextDetectionPtr.prototype);
  TextDetectionAssociatedPtr.prototype.constructor =
      TextDetectionAssociatedPtr;

  function TextDetectionProxy(receiver) {
    this.receiver_ = receiver;
  }
  TextDetectionPtr.prototype.detect = function() {
    return TextDetectionProxy.prototype.detect
        .apply(this.ptr.getProxy(), arguments);
  };

  TextDetectionProxy.prototype.detect = function(bitmapData) {
    var params_ = new TextDetection_Detect_Params();
    params_.bitmapData = bitmapData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kTextDetection_Detect_Name,
          codec.align(TextDetection_Detect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(TextDetection_Detect_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(TextDetection_Detect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function TextDetectionStub(delegate) {
    this.delegate_ = delegate;
  }
  TextDetectionStub.prototype.detect = function(bitmapData) {
    return this.delegate_ && this.delegate_.detect && this.delegate_.detect(bitmapData);
  }

  TextDetectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TextDetectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTextDetection_Detect_Name:
      var params = reader.decodeStruct(TextDetection_Detect_Params);
      this.detect(params.bitmapData).then(function(response) {
        var responseParams =
            new TextDetection_Detect_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kTextDetection_Detect_Name,
            codec.align(TextDetection_Detect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(TextDetection_Detect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateTextDetectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTextDetection_Detect_Name:
        if (message.expectsResponse())
          paramsClass = TextDetection_Detect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTextDetectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kTextDetection_Detect_Name:
        if (message.isResponse())
          paramsClass = TextDetection_Detect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var TextDetection = {
    name: 'shape_detection.mojom.TextDetection',
    kVersion: 0,
    ptrClass: TextDetectionPtr,
    proxyClass: TextDetectionProxy,
    stubClass: TextDetectionStub,
    validateRequest: validateTextDetectionRequest,
    validateResponse: validateTextDetectionResponse,
    mojomId: 'services/shape_detection/public/mojom/textdetection.mojom',
    fuzzMethods: {
      detect: {
        params: TextDetection_Detect_Params,
      },
    },
  };
  TextDetectionStub.prototype.validator = validateTextDetectionRequest;
  TextDetectionProxy.prototype.validator = validateTextDetectionResponse;
  exports.TextDetectionResult = TextDetectionResult;
  exports.TextDetection = TextDetection;
  exports.TextDetectionPtr = TextDetectionPtr;
  exports.TextDetectionAssociatedPtr = TextDetectionAssociatedPtr;
})();