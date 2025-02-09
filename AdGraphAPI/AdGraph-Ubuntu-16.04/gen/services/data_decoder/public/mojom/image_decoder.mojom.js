// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/data_decoder/public/mojom/image_decoder.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('dataDecoder.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
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


  var ImageCodec = {};
  ImageCodec.DEFAULT = 0;
  ImageCodec.ROBUST_JPEG = ImageCodec.DEFAULT + 1;
  ImageCodec.ROBUST_PNG = ImageCodec.ROBUST_JPEG + 1;

  ImageCodec.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ImageCodec.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function AnimationFrame(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AnimationFrame.prototype.initDefaults_ = function() {
    this.bitmap = null;
    this.duration = null;
  };
  AnimationFrame.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AnimationFrame.generate = function(generator_) {
    var generated = new AnimationFrame;
    generated.bitmap = generator_.generateStruct(skia.mojom.InlineBitmap, false);
    generated.duration = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  AnimationFrame.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bitmap = mutator_.mutateStruct(skia.mojom.InlineBitmap, false);
    }
    if (mutator_.chooseMutateField()) {
      this.duration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  AnimationFrame.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AnimationFrame.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AnimationFrame.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AnimationFrame.validate = function(messageValidator, offset) {
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


    // validate AnimationFrame.bitmap
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, bitmap$.InlineBitmap, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AnimationFrame.duration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AnimationFrame.encodedSize = codec.kStructHeaderSize + 16;

  AnimationFrame.decode = function(decoder) {
    var packed;
    var val = new AnimationFrame();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bitmap = decoder.decodeStructPointer(bitmap$.InlineBitmap);
    val.duration = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  AnimationFrame.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AnimationFrame.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(bitmap$.InlineBitmap, val.bitmap);
    encoder.encodeStructPointer(time$.TimeDelta, val.duration);
  };
  function ImageDecoder_DecodeImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDecoder_DecodeImage_Params.prototype.initDefaults_ = function() {
    this.encodedData = null;
    this.codec = 0;
    this.shrinkToFit = false;
    this.maxSizeInBytes = 0;
    this.desiredImageFrameSize = null;
  };
  ImageDecoder_DecodeImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageDecoder_DecodeImage_Params.generate = function(generator_) {
    var generated = new ImageDecoder_DecodeImage_Params;
    generated.encodedData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.codec = generator_.generateEnum(0, 2);
    generated.shrinkToFit = generator_.generateBool();
    generated.maxSizeInBytes = generator_.generateInt64();
    generated.desiredImageFrameSize = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  ImageDecoder_DecodeImage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.encodedData = mutator_.mutateArray(this.encodedData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.codec = mutator_.mutateEnum(this.codec, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.shrinkToFit = mutator_.mutateBool(this.shrinkToFit);
    }
    if (mutator_.chooseMutateField()) {
      this.maxSizeInBytes = mutator_.mutateInt64(this.maxSizeInBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.desiredImageFrameSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  ImageDecoder_DecodeImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImageDecoder_DecodeImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageDecoder_DecodeImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImageDecoder_DecodeImage_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ImageDecoder_DecodeImage_Params.encodedData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ImageDecoder_DecodeImage_Params.codec
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ImageCodec);
    if (err !== validator.validationError.NONE)
        return err;




    // validate ImageDecoder_DecodeImage_Params.desiredImageFrameSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDecoder_DecodeImage_Params.encodedSize = codec.kStructHeaderSize + 32;

  ImageDecoder_DecodeImage_Params.decode = function(decoder) {
    var packed;
    var val = new ImageDecoder_DecodeImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.encodedData = decoder.decodeArrayPointer(codec.Uint8);
    val.codec = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.shrinkToFit = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxSizeInBytes = decoder.decodeStruct(codec.Int64);
    val.desiredImageFrameSize = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  ImageDecoder_DecodeImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDecoder_DecodeImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.encodedData);
    encoder.encodeStruct(codec.Int32, val.codec);
    packed = 0;
    packed |= (val.shrinkToFit & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.maxSizeInBytes);
    encoder.encodeStructPointer(geometry$.Size, val.desiredImageFrameSize);
  };
  function ImageDecoder_DecodeImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDecoder_DecodeImage_ResponseParams.prototype.initDefaults_ = function() {
    this.decodedImage = null;
  };
  ImageDecoder_DecodeImage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageDecoder_DecodeImage_ResponseParams.generate = function(generator_) {
    var generated = new ImageDecoder_DecodeImage_ResponseParams;
    generated.decodedImage = generator_.generateStruct(skia.mojom.Bitmap, true);
    return generated;
  };

  ImageDecoder_DecodeImage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.decodedImage = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    return this;
  };
  ImageDecoder_DecodeImage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.decodedImage !== null) {
      Array.prototype.push.apply(handles, this.decodedImage.getHandleDeps());
    }
    return handles;
  };

  ImageDecoder_DecodeImage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageDecoder_DecodeImage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.decodedImage.setHandlesInternal_(handles, idx);
    return idx;
  };

  ImageDecoder_DecodeImage_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ImageDecoder_DecodeImage_ResponseParams.decodedImage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDecoder_DecodeImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageDecoder_DecodeImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageDecoder_DecodeImage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.decodedImage = decoder.decodeStructPointer(bitmap$.Bitmap);
    return val;
  };

  ImageDecoder_DecodeImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDecoder_DecodeImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.decodedImage);
  };
  function ImageDecoder_DecodeAnimation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDecoder_DecodeAnimation_Params.prototype.initDefaults_ = function() {
    this.encodedData = null;
    this.shrinkToFit = false;
    this.maxSizeInBytes = 0;
  };
  ImageDecoder_DecodeAnimation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageDecoder_DecodeAnimation_Params.generate = function(generator_) {
    var generated = new ImageDecoder_DecodeAnimation_Params;
    generated.encodedData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.shrinkToFit = generator_.generateBool();
    generated.maxSizeInBytes = generator_.generateInt64();
    return generated;
  };

  ImageDecoder_DecodeAnimation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.encodedData = mutator_.mutateArray(this.encodedData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.shrinkToFit = mutator_.mutateBool(this.shrinkToFit);
    }
    if (mutator_.chooseMutateField()) {
      this.maxSizeInBytes = mutator_.mutateInt64(this.maxSizeInBytes);
    }
    return this;
  };
  ImageDecoder_DecodeAnimation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImageDecoder_DecodeAnimation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageDecoder_DecodeAnimation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImageDecoder_DecodeAnimation_Params.validate = function(messageValidator, offset) {
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


    // validate ImageDecoder_DecodeAnimation_Params.encodedData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ImageDecoder_DecodeAnimation_Params.encodedSize = codec.kStructHeaderSize + 24;

  ImageDecoder_DecodeAnimation_Params.decode = function(decoder) {
    var packed;
    var val = new ImageDecoder_DecodeAnimation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.encodedData = decoder.decodeArrayPointer(codec.Uint8);
    packed = decoder.readUint8();
    val.shrinkToFit = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxSizeInBytes = decoder.decodeStruct(codec.Int64);
    return val;
  };

  ImageDecoder_DecodeAnimation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDecoder_DecodeAnimation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.encodedData);
    packed = 0;
    packed |= (val.shrinkToFit & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.maxSizeInBytes);
  };
  function ImageDecoder_DecodeAnimation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDecoder_DecodeAnimation_ResponseParams.prototype.initDefaults_ = function() {
    this.decodedImage = null;
  };
  ImageDecoder_DecodeAnimation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageDecoder_DecodeAnimation_ResponseParams.generate = function(generator_) {
    var generated = new ImageDecoder_DecodeAnimation_ResponseParams;
    generated.decodedImage = generator_.generateArray(function() {
      return generator_.generateStruct(dataDecoder.mojom.AnimationFrame, false);
    });
    return generated;
  };

  ImageDecoder_DecodeAnimation_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.decodedImage = mutator_.mutateArray(this.decodedImage, function(val) {
        return mutator_.mutateStruct(dataDecoder.mojom.AnimationFrame, false);
      });
    }
    return this;
  };
  ImageDecoder_DecodeAnimation_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImageDecoder_DecodeAnimation_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageDecoder_DecodeAnimation_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImageDecoder_DecodeAnimation_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ImageDecoder_DecodeAnimation_ResponseParams.decodedImage
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(AnimationFrame), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDecoder_DecodeAnimation_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ImageDecoder_DecodeAnimation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageDecoder_DecodeAnimation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.decodedImage = decoder.decodeArrayPointer(new codec.PointerTo(AnimationFrame));
    return val;
  };

  ImageDecoder_DecodeAnimation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDecoder_DecodeAnimation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(AnimationFrame), val.decodedImage);
  };
  var kImageDecoder_DecodeImage_Name = 1627806450;
  var kImageDecoder_DecodeAnimation_Name = 1414322001;

  function ImageDecoderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ImageDecoder,
                                                   handleOrPtrInfo);
  }

  function ImageDecoderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ImageDecoder, associatedInterfacePtrInfo);
  }

  ImageDecoderAssociatedPtr.prototype =
      Object.create(ImageDecoderPtr.prototype);
  ImageDecoderAssociatedPtr.prototype.constructor =
      ImageDecoderAssociatedPtr;

  function ImageDecoderProxy(receiver) {
    this.receiver_ = receiver;
  }
  ImageDecoderPtr.prototype.decodeImage = function() {
    return ImageDecoderProxy.prototype.decodeImage
        .apply(this.ptr.getProxy(), arguments);
  };

  ImageDecoderProxy.prototype.decodeImage = function(encodedData, codec, shrinkToFit, maxSizeInBytes, desiredImageFrameSize) {
    var params_ = new ImageDecoder_DecodeImage_Params();
    params_.encodedData = encodedData;
    params_.codec = codec;
    params_.shrinkToFit = shrinkToFit;
    params_.maxSizeInBytes = maxSizeInBytes;
    params_.desiredImageFrameSize = desiredImageFrameSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kImageDecoder_DecodeImage_Name,
          codec.align(ImageDecoder_DecodeImage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageDecoder_DecodeImage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageDecoder_DecodeImage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ImageDecoderPtr.prototype.decodeAnimation = function() {
    return ImageDecoderProxy.prototype.decodeAnimation
        .apply(this.ptr.getProxy(), arguments);
  };

  ImageDecoderProxy.prototype.decodeAnimation = function(encodedData, shrinkToFit, maxSizeInBytes) {
    var params_ = new ImageDecoder_DecodeAnimation_Params();
    params_.encodedData = encodedData;
    params_.shrinkToFit = shrinkToFit;
    params_.maxSizeInBytes = maxSizeInBytes;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kImageDecoder_DecodeAnimation_Name,
          codec.align(ImageDecoder_DecodeAnimation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageDecoder_DecodeAnimation_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageDecoder_DecodeAnimation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ImageDecoderStub(delegate) {
    this.delegate_ = delegate;
  }
  ImageDecoderStub.prototype.decodeImage = function(encodedData, codec, shrinkToFit, maxSizeInBytes, desiredImageFrameSize) {
    return this.delegate_ && this.delegate_.decodeImage && this.delegate_.decodeImage(encodedData, codec, shrinkToFit, maxSizeInBytes, desiredImageFrameSize);
  }
  ImageDecoderStub.prototype.decodeAnimation = function(encodedData, shrinkToFit, maxSizeInBytes) {
    return this.delegate_ && this.delegate_.decodeAnimation && this.delegate_.decodeAnimation(encodedData, shrinkToFit, maxSizeInBytes);
  }

  ImageDecoderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ImageDecoderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kImageDecoder_DecodeImage_Name:
      var params = reader.decodeStruct(ImageDecoder_DecodeImage_Params);
      this.decodeImage(params.encodedData, params.codec, params.shrinkToFit, params.maxSizeInBytes, params.desiredImageFrameSize).then(function(response) {
        var responseParams =
            new ImageDecoder_DecodeImage_ResponseParams();
        responseParams.decodedImage = response.decodedImage;
        var builder = new codec.MessageV1Builder(
            kImageDecoder_DecodeImage_Name,
            codec.align(ImageDecoder_DecodeImage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageDecoder_DecodeImage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kImageDecoder_DecodeAnimation_Name:
      var params = reader.decodeStruct(ImageDecoder_DecodeAnimation_Params);
      this.decodeAnimation(params.encodedData, params.shrinkToFit, params.maxSizeInBytes).then(function(response) {
        var responseParams =
            new ImageDecoder_DecodeAnimation_ResponseParams();
        responseParams.decodedImage = response.decodedImage;
        var builder = new codec.MessageV1Builder(
            kImageDecoder_DecodeAnimation_Name,
            codec.align(ImageDecoder_DecodeAnimation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageDecoder_DecodeAnimation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateImageDecoderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kImageDecoder_DecodeImage_Name:
        if (message.expectsResponse())
          paramsClass = ImageDecoder_DecodeImage_Params;
      break;
      case kImageDecoder_DecodeAnimation_Name:
        if (message.expectsResponse())
          paramsClass = ImageDecoder_DecodeAnimation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateImageDecoderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kImageDecoder_DecodeImage_Name:
        if (message.isResponse())
          paramsClass = ImageDecoder_DecodeImage_ResponseParams;
        break;
      case kImageDecoder_DecodeAnimation_Name:
        if (message.isResponse())
          paramsClass = ImageDecoder_DecodeAnimation_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ImageDecoder = {
    name: 'data_decoder.mojom.ImageDecoder',
    kVersion: 0,
    ptrClass: ImageDecoderPtr,
    proxyClass: ImageDecoderProxy,
    stubClass: ImageDecoderStub,
    validateRequest: validateImageDecoderRequest,
    validateResponse: validateImageDecoderResponse,
    mojomId: 'services/data_decoder/public/mojom/image_decoder.mojom',
    fuzzMethods: {
      decodeImage: {
        params: ImageDecoder_DecodeImage_Params,
      },
      decodeAnimation: {
        params: ImageDecoder_DecodeAnimation_Params,
      },
    },
  };
  ImageDecoderStub.prototype.validator = validateImageDecoderRequest;
  ImageDecoderProxy.prototype.validator = validateImageDecoderResponse;
  exports.ImageCodec = ImageCodec;
  exports.AnimationFrame = AnimationFrame;
  exports.ImageDecoder = ImageDecoder;
  exports.ImageDecoderPtr = ImageDecoderPtr;
  exports.ImageDecoderAssociatedPtr = ImageDecoderAssociatedPtr;
})();