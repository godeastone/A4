// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/interfaces/jpeg_encode_accelerator.mojom';
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


  var EncodeStatus = {};
  EncodeStatus.ENCODE_OK = 0;
  EncodeStatus.HW_JPEG_ENCODE_NOT_SUPPORTED = EncodeStatus.ENCODE_OK + 1;
  EncodeStatus.THREAD_CREATION_FAILED = EncodeStatus.HW_JPEG_ENCODE_NOT_SUPPORTED + 1;
  EncodeStatus.INVALID_ARGUMENT = EncodeStatus.THREAD_CREATION_FAILED + 1;
  EncodeStatus.INACCESSIBLE_OUTPUT_BUFFER = EncodeStatus.INVALID_ARGUMENT + 1;
  EncodeStatus.PARSE_IMAGE_FAILED = EncodeStatus.INACCESSIBLE_OUTPUT_BUFFER + 1;
  EncodeStatus.PLATFORM_FAILURE = EncodeStatus.PARSE_IMAGE_FAILED + 1;

  EncodeStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  EncodeStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function JpegEncodeAccelerator_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegEncodeAccelerator_Initialize_Params.prototype.initDefaults_ = function() {
  };
  JpegEncodeAccelerator_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegEncodeAccelerator_Initialize_Params.generate = function(generator_) {
    var generated = new JpegEncodeAccelerator_Initialize_Params;
    return generated;
  };

  JpegEncodeAccelerator_Initialize_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  JpegEncodeAccelerator_Initialize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegEncodeAccelerator_Initialize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegEncodeAccelerator_Initialize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegEncodeAccelerator_Initialize_Params.validate = function(messageValidator, offset) {
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

  JpegEncodeAccelerator_Initialize_Params.encodedSize = codec.kStructHeaderSize + 0;

  JpegEncodeAccelerator_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new JpegEncodeAccelerator_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  JpegEncodeAccelerator_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegEncodeAccelerator_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function JpegEncodeAccelerator_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegEncodeAccelerator_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  JpegEncodeAccelerator_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegEncodeAccelerator_Initialize_ResponseParams.generate = function(generator_) {
    var generated = new JpegEncodeAccelerator_Initialize_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  JpegEncodeAccelerator_Initialize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  JpegEncodeAccelerator_Initialize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegEncodeAccelerator_Initialize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegEncodeAccelerator_Initialize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegEncodeAccelerator_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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

  JpegEncodeAccelerator_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  JpegEncodeAccelerator_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new JpegEncodeAccelerator_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  JpegEncodeAccelerator_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegEncodeAccelerator_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function JpegEncodeAccelerator_EncodeWithFD_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegEncodeAccelerator_EncodeWithFD_Params.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.inputFd = null;
    this.inputBufferSize = 0;
    this.codedSizeWidth = 0;
    this.codedSizeHeight = 0;
    this.exifFd = null;
    this.exifBufferSize = 0;
    this.outputFd = null;
    this.outputBufferSize = 0;
  };
  JpegEncodeAccelerator_EncodeWithFD_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegEncodeAccelerator_EncodeWithFD_Params.generate = function(generator_) {
    var generated = new JpegEncodeAccelerator_EncodeWithFD_Params;
    generated.bufferId = generator_.generateInt32();
    generated.inputFd = generator_.generateHandle(false);
    generated.inputBufferSize = generator_.generateUint32();
    generated.codedSizeWidth = generator_.generateInt32();
    generated.codedSizeHeight = generator_.generateInt32();
    generated.exifFd = generator_.generateHandle(false);
    generated.exifBufferSize = generator_.generateUint32();
    generated.outputFd = generator_.generateHandle(false);
    generated.outputBufferSize = generator_.generateUint32();
    return generated;
  };

  JpegEncodeAccelerator_EncodeWithFD_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.inputFd = mutator_.mutateHandle(this.inputFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.inputBufferSize = mutator_.mutateUint32(this.inputBufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSizeWidth = mutator_.mutateInt32(this.codedSizeWidth);
    }
    if (mutator_.chooseMutateField()) {
      this.codedSizeHeight = mutator_.mutateInt32(this.codedSizeHeight);
    }
    if (mutator_.chooseMutateField()) {
      this.exifFd = mutator_.mutateHandle(this.exifFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.exifBufferSize = mutator_.mutateUint32(this.exifBufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.outputFd = mutator_.mutateHandle(this.outputFd, false);
    }
    if (mutator_.chooseMutateField()) {
      this.outputBufferSize = mutator_.mutateUint32(this.outputBufferSize);
    }
    return this;
  };
  JpegEncodeAccelerator_EncodeWithFD_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.inputFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    if (this.exifFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    if (this.outputFd !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  JpegEncodeAccelerator_EncodeWithFD_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegEncodeAccelerator_EncodeWithFD_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.inputFd = handles[idx++];;
    this.exifFd = handles[idx++];;
    this.outputFd = handles[idx++];;
    return idx;
  };

  JpegEncodeAccelerator_EncodeWithFD_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate JpegEncodeAccelerator_EncodeWithFD_Params.inputFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;





    // validate JpegEncodeAccelerator_EncodeWithFD_Params.exifFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 20, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate JpegEncodeAccelerator_EncodeWithFD_Params.outputFd
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 28, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  JpegEncodeAccelerator_EncodeWithFD_Params.encodedSize = codec.kStructHeaderSize + 40;

  JpegEncodeAccelerator_EncodeWithFD_Params.decode = function(decoder) {
    var packed;
    var val = new JpegEncodeAccelerator_EncodeWithFD_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.inputFd = decoder.decodeStruct(codec.Handle);
    val.inputBufferSize = decoder.decodeStruct(codec.Uint32);
    val.codedSizeWidth = decoder.decodeStruct(codec.Int32);
    val.codedSizeHeight = decoder.decodeStruct(codec.Int32);
    val.exifFd = decoder.decodeStruct(codec.Handle);
    val.exifBufferSize = decoder.decodeStruct(codec.Uint32);
    val.outputFd = decoder.decodeStruct(codec.Handle);
    val.outputBufferSize = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  JpegEncodeAccelerator_EncodeWithFD_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegEncodeAccelerator_EncodeWithFD_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(codec.Handle, val.inputFd);
    encoder.encodeStruct(codec.Uint32, val.inputBufferSize);
    encoder.encodeStruct(codec.Int32, val.codedSizeWidth);
    encoder.encodeStruct(codec.Int32, val.codedSizeHeight);
    encoder.encodeStruct(codec.Handle, val.exifFd);
    encoder.encodeStruct(codec.Uint32, val.exifBufferSize);
    encoder.encodeStruct(codec.Handle, val.outputFd);
    encoder.encodeStruct(codec.Uint32, val.outputBufferSize);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function JpegEncodeAccelerator_EncodeWithFD_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.prototype.initDefaults_ = function() {
    this.bufferId = 0;
    this.encodedBufferSize = 0;
    this.status = 0;
  };
  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.generate = function(generator_) {
    var generated = new JpegEncodeAccelerator_EncodeWithFD_ResponseParams;
    generated.bufferId = generator_.generateInt32();
    generated.encodedBufferSize = generator_.generateUint32();
    generated.status = generator_.generateEnum(0, 6);
    return generated;
  };

  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bufferId = mutator_.mutateInt32(this.bufferId);
    }
    if (mutator_.chooseMutateField()) {
      this.encodedBufferSize = mutator_.mutateUint32(this.encodedBufferSize);
    }
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 6);
    }
    return this;
  };
  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.validate = function(messageValidator, offset) {
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




    // validate JpegEncodeAccelerator_EncodeWithFD_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, EncodeStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new JpegEncodeAccelerator_EncodeWithFD_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bufferId = decoder.decodeStruct(codec.Int32);
    val.encodedBufferSize = decoder.decodeStruct(codec.Uint32);
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  JpegEncodeAccelerator_EncodeWithFD_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(JpegEncodeAccelerator_EncodeWithFD_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.bufferId);
    encoder.encodeStruct(codec.Uint32, val.encodedBufferSize);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kJpegEncodeAccelerator_Initialize_Name = 650762961;
  var kJpegEncodeAccelerator_EncodeWithFD_Name = 1924381468;

  function JpegEncodeAcceleratorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(JpegEncodeAccelerator,
                                                   handleOrPtrInfo);
  }

  function JpegEncodeAcceleratorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        JpegEncodeAccelerator, associatedInterfacePtrInfo);
  }

  JpegEncodeAcceleratorAssociatedPtr.prototype =
      Object.create(JpegEncodeAcceleratorPtr.prototype);
  JpegEncodeAcceleratorAssociatedPtr.prototype.constructor =
      JpegEncodeAcceleratorAssociatedPtr;

  function JpegEncodeAcceleratorProxy(receiver) {
    this.receiver_ = receiver;
  }
  JpegEncodeAcceleratorPtr.prototype.initialize = function() {
    return JpegEncodeAcceleratorProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  JpegEncodeAcceleratorProxy.prototype.initialize = function() {
    var params_ = new JpegEncodeAccelerator_Initialize_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kJpegEncodeAccelerator_Initialize_Name,
          codec.align(JpegEncodeAccelerator_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(JpegEncodeAccelerator_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(JpegEncodeAccelerator_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  JpegEncodeAcceleratorPtr.prototype.encodeWithFD = function() {
    return JpegEncodeAcceleratorProxy.prototype.encodeWithFD
        .apply(this.ptr.getProxy(), arguments);
  };

  JpegEncodeAcceleratorProxy.prototype.encodeWithFD = function(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, exifFd, exifBufferSize, outputFd, outputBufferSize) {
    var params_ = new JpegEncodeAccelerator_EncodeWithFD_Params();
    params_.bufferId = bufferId;
    params_.inputFd = inputFd;
    params_.inputBufferSize = inputBufferSize;
    params_.codedSizeWidth = codedSizeWidth;
    params_.codedSizeHeight = codedSizeHeight;
    params_.exifFd = exifFd;
    params_.exifBufferSize = exifBufferSize;
    params_.outputFd = outputFd;
    params_.outputBufferSize = outputBufferSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kJpegEncodeAccelerator_EncodeWithFD_Name,
          codec.align(JpegEncodeAccelerator_EncodeWithFD_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(JpegEncodeAccelerator_EncodeWithFD_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(JpegEncodeAccelerator_EncodeWithFD_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function JpegEncodeAcceleratorStub(delegate) {
    this.delegate_ = delegate;
  }
  JpegEncodeAcceleratorStub.prototype.initialize = function() {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize();
  }
  JpegEncodeAcceleratorStub.prototype.encodeWithFD = function(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, exifFd, exifBufferSize, outputFd, outputBufferSize) {
    return this.delegate_ && this.delegate_.encodeWithFD && this.delegate_.encodeWithFD(bufferId, inputFd, inputBufferSize, codedSizeWidth, codedSizeHeight, exifFd, exifBufferSize, outputFd, outputBufferSize);
  }

  JpegEncodeAcceleratorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  JpegEncodeAcceleratorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kJpegEncodeAccelerator_Initialize_Name:
      var params = reader.decodeStruct(JpegEncodeAccelerator_Initialize_Params);
      this.initialize().then(function(response) {
        var responseParams =
            new JpegEncodeAccelerator_Initialize_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kJpegEncodeAccelerator_Initialize_Name,
            codec.align(JpegEncodeAccelerator_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(JpegEncodeAccelerator_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kJpegEncodeAccelerator_EncodeWithFD_Name:
      var params = reader.decodeStruct(JpegEncodeAccelerator_EncodeWithFD_Params);
      this.encodeWithFD(params.bufferId, params.inputFd, params.inputBufferSize, params.codedSizeWidth, params.codedSizeHeight, params.exifFd, params.exifBufferSize, params.outputFd, params.outputBufferSize).then(function(response) {
        var responseParams =
            new JpegEncodeAccelerator_EncodeWithFD_ResponseParams();
        responseParams.bufferId = response.bufferId;
        responseParams.encodedBufferSize = response.encodedBufferSize;
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kJpegEncodeAccelerator_EncodeWithFD_Name,
            codec.align(JpegEncodeAccelerator_EncodeWithFD_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(JpegEncodeAccelerator_EncodeWithFD_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateJpegEncodeAcceleratorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kJpegEncodeAccelerator_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = JpegEncodeAccelerator_Initialize_Params;
      break;
      case kJpegEncodeAccelerator_EncodeWithFD_Name:
        if (message.expectsResponse())
          paramsClass = JpegEncodeAccelerator_EncodeWithFD_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateJpegEncodeAcceleratorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kJpegEncodeAccelerator_Initialize_Name:
        if (message.isResponse())
          paramsClass = JpegEncodeAccelerator_Initialize_ResponseParams;
        break;
      case kJpegEncodeAccelerator_EncodeWithFD_Name:
        if (message.isResponse())
          paramsClass = JpegEncodeAccelerator_EncodeWithFD_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var JpegEncodeAccelerator = {
    name: 'media.mojom.JpegEncodeAccelerator',
    kVersion: 0,
    ptrClass: JpegEncodeAcceleratorPtr,
    proxyClass: JpegEncodeAcceleratorProxy,
    stubClass: JpegEncodeAcceleratorStub,
    validateRequest: validateJpegEncodeAcceleratorRequest,
    validateResponse: validateJpegEncodeAcceleratorResponse,
    mojomId: 'media/mojo/interfaces/jpeg_encode_accelerator.mojom',
    fuzzMethods: {
      initialize: {
        params: JpegEncodeAccelerator_Initialize_Params,
      },
      encodeWithFD: {
        params: JpegEncodeAccelerator_EncodeWithFD_Params,
      },
    },
  };
  JpegEncodeAcceleratorStub.prototype.validator = validateJpegEncodeAcceleratorRequest;
  JpegEncodeAcceleratorProxy.prototype.validator = validateJpegEncodeAcceleratorResponse;
  exports.EncodeStatus = EncodeStatus;
  exports.JpegEncodeAccelerator = JpegEncodeAccelerator;
  exports.JpegEncodeAcceleratorPtr = JpegEncodeAcceleratorPtr;
  exports.JpegEncodeAcceleratorAssociatedPtr = JpegEncodeAcceleratorAssociatedPtr;
})();