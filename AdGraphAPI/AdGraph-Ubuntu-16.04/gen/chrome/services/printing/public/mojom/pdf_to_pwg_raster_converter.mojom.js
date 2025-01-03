// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('printing.mojom');
  var pdf_render_settings$ =
      mojo.internal.exposeNamespace('printing.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'chrome/services/printing/public/mojom/pdf_render_settings.mojom', 'pdf_render_settings.mojom.js');
  }
  var shared_memory$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/shared_memory.mojom', '../../../../../mojo/public/mojom/base/shared_memory.mojom.js');
  }



  function PwgRasterSettings(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  PwgRasterSettings.TransformType = {};
  PwgRasterSettings.TransformType.TRANSFORM_NORMAL = 0;
  PwgRasterSettings.TransformType.TRANSFORM_ROTATE_180 = PwgRasterSettings.TransformType.TRANSFORM_NORMAL + 1;
  PwgRasterSettings.TransformType.TRANSFORM_FLIP_HORIZONTAL = PwgRasterSettings.TransformType.TRANSFORM_ROTATE_180 + 1;
  PwgRasterSettings.TransformType.TRANSFORM_FLIP_VERTICAL = PwgRasterSettings.TransformType.TRANSFORM_FLIP_HORIZONTAL + 1;

  PwgRasterSettings.TransformType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  PwgRasterSettings.TransformType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  PwgRasterSettings.prototype.initDefaults_ = function() {
    this.oddPageTransform = 0;
    this.rotateAllPages = false;
    this.reversePageOrder = false;
    this.useColor = false;
  };
  PwgRasterSettings.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PwgRasterSettings.generate = function(generator_) {
    var generated = new PwgRasterSettings;
    generated.oddPageTransform = generator_.generateEnum(0, 3);
    generated.rotateAllPages = generator_.generateBool();
    generated.reversePageOrder = generator_.generateBool();
    generated.useColor = generator_.generateBool();
    return generated;
  };

  PwgRasterSettings.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.oddPageTransform = mutator_.mutateEnum(this.oddPageTransform, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.rotateAllPages = mutator_.mutateBool(this.rotateAllPages);
    }
    if (mutator_.chooseMutateField()) {
      this.reversePageOrder = mutator_.mutateBool(this.reversePageOrder);
    }
    if (mutator_.chooseMutateField()) {
      this.useColor = mutator_.mutateBool(this.useColor);
    }
    return this;
  };
  PwgRasterSettings.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PwgRasterSettings.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PwgRasterSettings.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PwgRasterSettings.validate = function(messageValidator, offset) {
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


    // validate PwgRasterSettings.oddPageTransform
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PwgRasterSettings.TransformType);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  PwgRasterSettings.encodedSize = codec.kStructHeaderSize + 8;

  PwgRasterSettings.decode = function(decoder) {
    var packed;
    var val = new PwgRasterSettings();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.oddPageTransform = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.rotateAllPages = (packed >> 0) & 1 ? true : false;
    val.reversePageOrder = (packed >> 1) & 1 ? true : false;
    val.useColor = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PwgRasterSettings.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PwgRasterSettings.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.oddPageTransform);
    packed = 0;
    packed |= (val.rotateAllPages & 1) << 0
    packed |= (val.reversePageOrder & 1) << 1
    packed |= (val.useColor & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PdfToPwgRasterConverter_Convert_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfToPwgRasterConverter_Convert_Params.prototype.initDefaults_ = function() {
    this.pdfRegion = null;
    this.pdfSettings = null;
    this.pwgRasterSettings = null;
  };
  PdfToPwgRasterConverter_Convert_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfToPwgRasterConverter_Convert_Params.generate = function(generator_) {
    var generated = new PdfToPwgRasterConverter_Convert_Params;
    generated.pdfRegion = generator_.generateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, false);
    generated.pdfSettings = generator_.generateStruct(printing.mojom.PdfRenderSettings, false);
    generated.pwgRasterSettings = generator_.generateStruct(printing.mojom.PwgRasterSettings, false);
    return generated;
  };

  PdfToPwgRasterConverter_Convert_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pdfRegion = mutator_.mutateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pdfSettings = mutator_.mutateStruct(printing.mojom.PdfRenderSettings, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pwgRasterSettings = mutator_.mutateStruct(printing.mojom.PwgRasterSettings, false);
    }
    return this;
  };
  PdfToPwgRasterConverter_Convert_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pdfRegion !== null) {
      Array.prototype.push.apply(handles, this.pdfRegion.getHandleDeps());
    }
    return handles;
  };

  PdfToPwgRasterConverter_Convert_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfToPwgRasterConverter_Convert_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.pdfRegion.setHandlesInternal_(handles, idx);
    return idx;
  };

  PdfToPwgRasterConverter_Convert_Params.validate = function(messageValidator, offset) {
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


    // validate PdfToPwgRasterConverter_Convert_Params.pdfRegion
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, shared_memory$.ReadOnlySharedMemoryRegion, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfToPwgRasterConverter_Convert_Params.pdfSettings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, pdf_render_settings$.PdfRenderSettings, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfToPwgRasterConverter_Convert_Params.pwgRasterSettings
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, PwgRasterSettings, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfToPwgRasterConverter_Convert_Params.encodedSize = codec.kStructHeaderSize + 24;

  PdfToPwgRasterConverter_Convert_Params.decode = function(decoder) {
    var packed;
    var val = new PdfToPwgRasterConverter_Convert_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pdfRegion = decoder.decodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion);
    val.pdfSettings = decoder.decodeStructPointer(pdf_render_settings$.PdfRenderSettings);
    val.pwgRasterSettings = decoder.decodeStructPointer(PwgRasterSettings);
    return val;
  };

  PdfToPwgRasterConverter_Convert_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfToPwgRasterConverter_Convert_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion, val.pdfRegion);
    encoder.encodeStructPointer(pdf_render_settings$.PdfRenderSettings, val.pdfSettings);
    encoder.encodeStructPointer(PwgRasterSettings, val.pwgRasterSettings);
  };
  function PdfToPwgRasterConverter_Convert_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PdfToPwgRasterConverter_Convert_ResponseParams.prototype.initDefaults_ = function() {
    this.pwgRasterRegion = null;
    this.pageCount = 0;
  };
  PdfToPwgRasterConverter_Convert_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfToPwgRasterConverter_Convert_ResponseParams.generate = function(generator_) {
    var generated = new PdfToPwgRasterConverter_Convert_ResponseParams;
    generated.pwgRasterRegion = generator_.generateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, true);
    generated.pageCount = generator_.generateUint32();
    return generated;
  };

  PdfToPwgRasterConverter_Convert_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pwgRasterRegion = mutator_.mutateStruct(mojoBase.mojom.ReadOnlySharedMemoryRegion, true);
    }
    if (mutator_.chooseMutateField()) {
      this.pageCount = mutator_.mutateUint32(this.pageCount);
    }
    return this;
  };
  PdfToPwgRasterConverter_Convert_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pwgRasterRegion !== null) {
      Array.prototype.push.apply(handles, this.pwgRasterRegion.getHandleDeps());
    }
    return handles;
  };

  PdfToPwgRasterConverter_Convert_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfToPwgRasterConverter_Convert_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.pwgRasterRegion.setHandlesInternal_(handles, idx);
    return idx;
  };

  PdfToPwgRasterConverter_Convert_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PdfToPwgRasterConverter_Convert_ResponseParams.pwgRasterRegion
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, shared_memory$.ReadOnlySharedMemoryRegion, true);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PdfToPwgRasterConverter_Convert_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PdfToPwgRasterConverter_Convert_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PdfToPwgRasterConverter_Convert_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pwgRasterRegion = decoder.decodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion);
    val.pageCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PdfToPwgRasterConverter_Convert_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfToPwgRasterConverter_Convert_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(shared_memory$.ReadOnlySharedMemoryRegion, val.pwgRasterRegion);
    encoder.encodeStruct(codec.Uint32, val.pageCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPdfToPwgRasterConverter_Convert_Name = 1616665990;

  function PdfToPwgRasterConverterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PdfToPwgRasterConverter,
                                                   handleOrPtrInfo);
  }

  function PdfToPwgRasterConverterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PdfToPwgRasterConverter, associatedInterfacePtrInfo);
  }

  PdfToPwgRasterConverterAssociatedPtr.prototype =
      Object.create(PdfToPwgRasterConverterPtr.prototype);
  PdfToPwgRasterConverterAssociatedPtr.prototype.constructor =
      PdfToPwgRasterConverterAssociatedPtr;

  function PdfToPwgRasterConverterProxy(receiver) {
    this.receiver_ = receiver;
  }
  PdfToPwgRasterConverterPtr.prototype.convert = function() {
    return PdfToPwgRasterConverterProxy.prototype.convert
        .apply(this.ptr.getProxy(), arguments);
  };

  PdfToPwgRasterConverterProxy.prototype.convert = function(pdfRegion, pdfSettings, pwgRasterSettings) {
    var params_ = new PdfToPwgRasterConverter_Convert_Params();
    params_.pdfRegion = pdfRegion;
    params_.pdfSettings = pdfSettings;
    params_.pwgRasterSettings = pwgRasterSettings;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPdfToPwgRasterConverter_Convert_Name,
          codec.align(PdfToPwgRasterConverter_Convert_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PdfToPwgRasterConverter_Convert_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PdfToPwgRasterConverter_Convert_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function PdfToPwgRasterConverterStub(delegate) {
    this.delegate_ = delegate;
  }
  PdfToPwgRasterConverterStub.prototype.convert = function(pdfRegion, pdfSettings, pwgRasterSettings) {
    return this.delegate_ && this.delegate_.convert && this.delegate_.convert(pdfRegion, pdfSettings, pwgRasterSettings);
  }

  PdfToPwgRasterConverterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  PdfToPwgRasterConverterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPdfToPwgRasterConverter_Convert_Name:
      var params = reader.decodeStruct(PdfToPwgRasterConverter_Convert_Params);
      this.convert(params.pdfRegion, params.pdfSettings, params.pwgRasterSettings).then(function(response) {
        var responseParams =
            new PdfToPwgRasterConverter_Convert_ResponseParams();
        responseParams.pwgRasterRegion = response.pwgRasterRegion;
        responseParams.pageCount = response.pageCount;
        var builder = new codec.MessageV1Builder(
            kPdfToPwgRasterConverter_Convert_Name,
            codec.align(PdfToPwgRasterConverter_Convert_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PdfToPwgRasterConverter_Convert_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePdfToPwgRasterConverterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPdfToPwgRasterConverter_Convert_Name:
        if (message.expectsResponse())
          paramsClass = PdfToPwgRasterConverter_Convert_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePdfToPwgRasterConverterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPdfToPwgRasterConverter_Convert_Name:
        if (message.isResponse())
          paramsClass = PdfToPwgRasterConverter_Convert_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PdfToPwgRasterConverter = {
    name: 'printing.mojom.PdfToPwgRasterConverter',
    kVersion: 0,
    ptrClass: PdfToPwgRasterConverterPtr,
    proxyClass: PdfToPwgRasterConverterProxy,
    stubClass: PdfToPwgRasterConverterStub,
    validateRequest: validatePdfToPwgRasterConverterRequest,
    validateResponse: validatePdfToPwgRasterConverterResponse,
    mojomId: 'chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter.mojom',
    fuzzMethods: {
      convert: {
        params: PdfToPwgRasterConverter_Convert_Params,
      },
    },
  };
  PdfToPwgRasterConverterStub.prototype.validator = validatePdfToPwgRasterConverterRequest;
  PdfToPwgRasterConverterProxy.prototype.validator = validatePdfToPwgRasterConverterResponse;
  exports.PwgRasterSettings = PwgRasterSettings;
  exports.PdfToPwgRasterConverter = PdfToPwgRasterConverter;
  exports.PdfToPwgRasterConverterPtr = PdfToPwgRasterConverterPtr;
  exports.PdfToPwgRasterConverterAssociatedPtr = PdfToPwgRasterConverterAssociatedPtr;
})();