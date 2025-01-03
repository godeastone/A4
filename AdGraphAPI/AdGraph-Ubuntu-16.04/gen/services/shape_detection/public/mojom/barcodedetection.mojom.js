// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/shape_detection/public/mojom/barcodedetection.mojom';
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



  function BarcodeDetectionResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BarcodeDetectionResult.prototype.initDefaults_ = function() {
    this.rawValue = null;
    this.boundingBox = null;
    this.cornerPoints = null;
  };
  BarcodeDetectionResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BarcodeDetectionResult.generate = function(generator_) {
    var generated = new BarcodeDetectionResult;
    generated.rawValue = generator_.generateString(false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.cornerPoints = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.PointF, false);
    });
    return generated;
  };

  BarcodeDetectionResult.prototype.mutate = function(mutator_) {
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
  BarcodeDetectionResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BarcodeDetectionResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BarcodeDetectionResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BarcodeDetectionResult.validate = function(messageValidator, offset) {
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


    // validate BarcodeDetectionResult.rawValue
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BarcodeDetectionResult.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BarcodeDetectionResult.cornerPoints
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.PointF), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BarcodeDetectionResult.encodedSize = codec.kStructHeaderSize + 24;

  BarcodeDetectionResult.decode = function(decoder) {
    var packed;
    var val = new BarcodeDetectionResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rawValue = decoder.decodeStruct(codec.String);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    val.cornerPoints = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.PointF));
    return val;
  };

  BarcodeDetectionResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BarcodeDetectionResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.rawValue);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.PointF), val.cornerPoints);
  };
  function BarcodeDetection_Detect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BarcodeDetection_Detect_Params.prototype.initDefaults_ = function() {
    this.bitmapData = null;
  };
  BarcodeDetection_Detect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BarcodeDetection_Detect_Params.generate = function(generator_) {
    var generated = new BarcodeDetection_Detect_Params;
    generated.bitmapData = generator_.generateStruct(skia.mojom.Bitmap, false);
    return generated;
  };

  BarcodeDetection_Detect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitmapData = mutator_.mutateStruct(skia.mojom.Bitmap, false);
    }
    return this;
  };
  BarcodeDetection_Detect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bitmapData !== null) {
      Array.prototype.push.apply(handles, this.bitmapData.getHandleDeps());
    }
    return handles;
  };

  BarcodeDetection_Detect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BarcodeDetection_Detect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bitmapData.setHandlesInternal_(handles, idx);
    return idx;
  };

  BarcodeDetection_Detect_Params.validate = function(messageValidator, offset) {
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


    // validate BarcodeDetection_Detect_Params.bitmapData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, bitmap$.Bitmap, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BarcodeDetection_Detect_Params.encodedSize = codec.kStructHeaderSize + 8;

  BarcodeDetection_Detect_Params.decode = function(decoder) {
    var packed;
    var val = new BarcodeDetection_Detect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitmapData = decoder.decodeStructPointer(bitmap$.Bitmap);
    return val;
  };

  BarcodeDetection_Detect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BarcodeDetection_Detect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.bitmapData);
  };
  function BarcodeDetection_Detect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BarcodeDetection_Detect_ResponseParams.prototype.initDefaults_ = function() {
    this.results = null;
  };
  BarcodeDetection_Detect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BarcodeDetection_Detect_ResponseParams.generate = function(generator_) {
    var generated = new BarcodeDetection_Detect_ResponseParams;
    generated.results = generator_.generateArray(function() {
      return generator_.generateStruct(shapeDetection.mojom.BarcodeDetectionResult, false);
    });
    return generated;
  };

  BarcodeDetection_Detect_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.results = mutator_.mutateArray(this.results, function(val) {
        return mutator_.mutateStruct(shapeDetection.mojom.BarcodeDetectionResult, false);
      });
    }
    return this;
  };
  BarcodeDetection_Detect_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BarcodeDetection_Detect_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BarcodeDetection_Detect_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BarcodeDetection_Detect_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BarcodeDetection_Detect_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(BarcodeDetectionResult), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BarcodeDetection_Detect_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BarcodeDetection_Detect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BarcodeDetection_Detect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(BarcodeDetectionResult));
    return val;
  };

  BarcodeDetection_Detect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BarcodeDetection_Detect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(BarcodeDetectionResult), val.results);
  };
  var kBarcodeDetection_Detect_Name = 477447929;

  function BarcodeDetectionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BarcodeDetection,
                                                   handleOrPtrInfo);
  }

  function BarcodeDetectionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BarcodeDetection, associatedInterfacePtrInfo);
  }

  BarcodeDetectionAssociatedPtr.prototype =
      Object.create(BarcodeDetectionPtr.prototype);
  BarcodeDetectionAssociatedPtr.prototype.constructor =
      BarcodeDetectionAssociatedPtr;

  function BarcodeDetectionProxy(receiver) {
    this.receiver_ = receiver;
  }
  BarcodeDetectionPtr.prototype.detect = function() {
    return BarcodeDetectionProxy.prototype.detect
        .apply(this.ptr.getProxy(), arguments);
  };

  BarcodeDetectionProxy.prototype.detect = function(bitmapData) {
    var params_ = new BarcodeDetection_Detect_Params();
    params_.bitmapData = bitmapData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBarcodeDetection_Detect_Name,
          codec.align(BarcodeDetection_Detect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BarcodeDetection_Detect_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BarcodeDetection_Detect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BarcodeDetectionStub(delegate) {
    this.delegate_ = delegate;
  }
  BarcodeDetectionStub.prototype.detect = function(bitmapData) {
    return this.delegate_ && this.delegate_.detect && this.delegate_.detect(bitmapData);
  }

  BarcodeDetectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BarcodeDetectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBarcodeDetection_Detect_Name:
      var params = reader.decodeStruct(BarcodeDetection_Detect_Params);
      this.detect(params.bitmapData).then(function(response) {
        var responseParams =
            new BarcodeDetection_Detect_ResponseParams();
        responseParams.results = response.results;
        var builder = new codec.MessageV1Builder(
            kBarcodeDetection_Detect_Name,
            codec.align(BarcodeDetection_Detect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BarcodeDetection_Detect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBarcodeDetectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBarcodeDetection_Detect_Name:
        if (message.expectsResponse())
          paramsClass = BarcodeDetection_Detect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBarcodeDetectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBarcodeDetection_Detect_Name:
        if (message.isResponse())
          paramsClass = BarcodeDetection_Detect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BarcodeDetection = {
    name: 'shape_detection.mojom.BarcodeDetection',
    kVersion: 0,
    ptrClass: BarcodeDetectionPtr,
    proxyClass: BarcodeDetectionProxy,
    stubClass: BarcodeDetectionStub,
    validateRequest: validateBarcodeDetectionRequest,
    validateResponse: validateBarcodeDetectionResponse,
    mojomId: 'services/shape_detection/public/mojom/barcodedetection.mojom',
    fuzzMethods: {
      detect: {
        params: BarcodeDetection_Detect_Params,
      },
    },
  };
  BarcodeDetectionStub.prototype.validator = validateBarcodeDetectionRequest;
  BarcodeDetectionProxy.prototype.validator = validateBarcodeDetectionResponse;
  exports.BarcodeDetectionResult = BarcodeDetectionResult;
  exports.BarcodeDetection = BarcodeDetection;
  exports.BarcodeDetectionPtr = BarcodeDetectionPtr;
  exports.BarcodeDetectionAssociatedPtr = BarcodeDetectionAssociatedPtr;
})();