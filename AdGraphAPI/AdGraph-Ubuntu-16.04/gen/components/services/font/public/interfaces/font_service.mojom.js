// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/services/font/public/interfaces/font_service.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('fontService.mojom');
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../mojo/public/mojom/base/file.mojom.js');
  }


  var TypefaceSlant = {};
  TypefaceSlant.ROMAN = 0;
  TypefaceSlant.ITALIC = 1;
  TypefaceSlant.OBLIQUE = 2;

  TypefaceSlant.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  TypefaceSlant.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function TypefaceStyle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TypefaceStyle.prototype.initDefaults_ = function() {
    this.weight = 0;
    this.width = 0;
    this.slant = 0;
  };
  TypefaceStyle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TypefaceStyle.generate = function(generator_) {
    var generated = new TypefaceStyle;
    generated.weight = generator_.generateUint16();
    generated.width = generator_.generateUint8();
    generated.slant = generator_.generateEnum(0, 2);
    return generated;
  };

  TypefaceStyle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.weight = mutator_.mutateUint16(this.weight);
    }
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateUint8(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.slant = mutator_.mutateEnum(this.slant, 0, 2);
    }
    return this;
  };
  TypefaceStyle.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TypefaceStyle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TypefaceStyle.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TypefaceStyle.validate = function(messageValidator, offset) {
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




    // validate TypefaceStyle.slant
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, TypefaceSlant);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TypefaceStyle.encodedSize = codec.kStructHeaderSize + 8;

  TypefaceStyle.decode = function(decoder) {
    var packed;
    var val = new TypefaceStyle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.weight = decoder.decodeStruct(codec.Uint16);
    val.width = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    val.slant = decoder.decodeStruct(codec.Int32);
    return val;
  };

  TypefaceStyle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TypefaceStyle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.weight);
    encoder.encodeStruct(codec.Uint8, val.width);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.slant);
  };
  function FontIdentity(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FontIdentity.prototype.initDefaults_ = function() {
    this.id = 0;
    this.ttcIndex = 0;
    this.strRepresentation = null;
  };
  FontIdentity.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FontIdentity.generate = function(generator_) {
    var generated = new FontIdentity;
    generated.id = generator_.generateUint32();
    generated.ttcIndex = generator_.generateInt32();
    generated.strRepresentation = generator_.generateString(false);
    return generated;
  };

  FontIdentity.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.ttcIndex = mutator_.mutateInt32(this.ttcIndex);
    }
    if (mutator_.chooseMutateField()) {
      this.strRepresentation = mutator_.mutateString(this.strRepresentation, false);
    }
    return this;
  };
  FontIdentity.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FontIdentity.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FontIdentity.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FontIdentity.validate = function(messageValidator, offset) {
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




    // validate FontIdentity.strRepresentation
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FontIdentity.encodedSize = codec.kStructHeaderSize + 16;

  FontIdentity.decode = function(decoder) {
    var packed;
    var val = new FontIdentity();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.ttcIndex = decoder.decodeStruct(codec.Int32);
    val.strRepresentation = decoder.decodeStruct(codec.String);
    return val;
  };

  FontIdentity.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FontIdentity.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Int32, val.ttcIndex);
    encoder.encodeStruct(codec.String, val.strRepresentation);
  };
  function FontService_MatchFamilyName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FontService_MatchFamilyName_Params.prototype.initDefaults_ = function() {
    this.familyName = null;
    this.style = null;
  };
  FontService_MatchFamilyName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FontService_MatchFamilyName_Params.generate = function(generator_) {
    var generated = new FontService_MatchFamilyName_Params;
    generated.familyName = generator_.generateString(false);
    generated.style = generator_.generateStruct(fontService.mojom.TypefaceStyle, false);
    return generated;
  };

  FontService_MatchFamilyName_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.familyName = mutator_.mutateString(this.familyName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.style = mutator_.mutateStruct(fontService.mojom.TypefaceStyle, false);
    }
    return this;
  };
  FontService_MatchFamilyName_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FontService_MatchFamilyName_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FontService_MatchFamilyName_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FontService_MatchFamilyName_Params.validate = function(messageValidator, offset) {
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


    // validate FontService_MatchFamilyName_Params.familyName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FontService_MatchFamilyName_Params.style
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, TypefaceStyle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FontService_MatchFamilyName_Params.encodedSize = codec.kStructHeaderSize + 16;

  FontService_MatchFamilyName_Params.decode = function(decoder) {
    var packed;
    var val = new FontService_MatchFamilyName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.familyName = decoder.decodeStruct(codec.String);
    val.style = decoder.decodeStructPointer(TypefaceStyle);
    return val;
  };

  FontService_MatchFamilyName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FontService_MatchFamilyName_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.familyName);
    encoder.encodeStructPointer(TypefaceStyle, val.style);
  };
  function FontService_MatchFamilyName_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FontService_MatchFamilyName_ResponseParams.prototype.initDefaults_ = function() {
    this.identity = null;
    this.familyName = null;
    this.style = null;
  };
  FontService_MatchFamilyName_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FontService_MatchFamilyName_ResponseParams.generate = function(generator_) {
    var generated = new FontService_MatchFamilyName_ResponseParams;
    generated.identity = generator_.generateStruct(fontService.mojom.FontIdentity, true);
    generated.familyName = generator_.generateString(false);
    generated.style = generator_.generateStruct(fontService.mojom.TypefaceStyle, false);
    return generated;
  };

  FontService_MatchFamilyName_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(fontService.mojom.FontIdentity, true);
    }
    if (mutator_.chooseMutateField()) {
      this.familyName = mutator_.mutateString(this.familyName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.style = mutator_.mutateStruct(fontService.mojom.TypefaceStyle, false);
    }
    return this;
  };
  FontService_MatchFamilyName_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FontService_MatchFamilyName_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FontService_MatchFamilyName_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FontService_MatchFamilyName_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FontService_MatchFamilyName_ResponseParams.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, FontIdentity, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FontService_MatchFamilyName_ResponseParams.familyName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FontService_MatchFamilyName_ResponseParams.style
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, TypefaceStyle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FontService_MatchFamilyName_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  FontService_MatchFamilyName_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FontService_MatchFamilyName_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.identity = decoder.decodeStructPointer(FontIdentity);
    val.familyName = decoder.decodeStruct(codec.String);
    val.style = decoder.decodeStructPointer(TypefaceStyle);
    return val;
  };

  FontService_MatchFamilyName_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FontService_MatchFamilyName_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(FontIdentity, val.identity);
    encoder.encodeStruct(codec.String, val.familyName);
    encoder.encodeStructPointer(TypefaceStyle, val.style);
  };
  function FontService_OpenStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FontService_OpenStream_Params.prototype.initDefaults_ = function() {
    this.idNumber = 0;
  };
  FontService_OpenStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FontService_OpenStream_Params.generate = function(generator_) {
    var generated = new FontService_OpenStream_Params;
    generated.idNumber = generator_.generateUint32();
    return generated;
  };

  FontService_OpenStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.idNumber = mutator_.mutateUint32(this.idNumber);
    }
    return this;
  };
  FontService_OpenStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FontService_OpenStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FontService_OpenStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FontService_OpenStream_Params.validate = function(messageValidator, offset) {
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

  FontService_OpenStream_Params.encodedSize = codec.kStructHeaderSize + 8;

  FontService_OpenStream_Params.decode = function(decoder) {
    var packed;
    var val = new FontService_OpenStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.idNumber = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FontService_OpenStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FontService_OpenStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.idNumber);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FontService_OpenStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FontService_OpenStream_ResponseParams.prototype.initDefaults_ = function() {
    this.fontHandle = null;
  };
  FontService_OpenStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FontService_OpenStream_ResponseParams.generate = function(generator_) {
    var generated = new FontService_OpenStream_ResponseParams;
    generated.fontHandle = generator_.generateStruct(mojoBase.mojom.File, true);
    return generated;
  };

  FontService_OpenStream_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.fontHandle = mutator_.mutateStruct(mojoBase.mojom.File, true);
    }
    return this;
  };
  FontService_OpenStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fontHandle !== null) {
      Array.prototype.push.apply(handles, this.fontHandle.getHandleDeps());
    }
    return handles;
  };

  FontService_OpenStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FontService_OpenStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.fontHandle.setHandlesInternal_(handles, idx);
    return idx;
  };

  FontService_OpenStream_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FontService_OpenStream_ResponseParams.fontHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FontService_OpenStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FontService_OpenStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FontService_OpenStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fontHandle = decoder.decodeStructPointer(file$.File);
    return val;
  };

  FontService_OpenStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FontService_OpenStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.fontHandle);
  };
  var kFontService_MatchFamilyName_Name = 1212140759;
  var kFontService_OpenStream_Name = 1598123070;

  function FontServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FontService,
                                                   handleOrPtrInfo);
  }

  function FontServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FontService, associatedInterfacePtrInfo);
  }

  FontServiceAssociatedPtr.prototype =
      Object.create(FontServicePtr.prototype);
  FontServiceAssociatedPtr.prototype.constructor =
      FontServiceAssociatedPtr;

  function FontServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  FontServicePtr.prototype.matchFamilyName = function() {
    return FontServiceProxy.prototype.matchFamilyName
        .apply(this.ptr.getProxy(), arguments);
  };

  FontServiceProxy.prototype.matchFamilyName = function(familyName, style) {
    var params_ = new FontService_MatchFamilyName_Params();
    params_.familyName = familyName;
    params_.style = style;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFontService_MatchFamilyName_Name,
          codec.align(FontService_MatchFamilyName_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FontService_MatchFamilyName_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FontService_MatchFamilyName_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FontServicePtr.prototype.openStream = function() {
    return FontServiceProxy.prototype.openStream
        .apply(this.ptr.getProxy(), arguments);
  };

  FontServiceProxy.prototype.openStream = function(idNumber) {
    var params_ = new FontService_OpenStream_Params();
    params_.idNumber = idNumber;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFontService_OpenStream_Name,
          codec.align(FontService_OpenStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FontService_OpenStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FontService_OpenStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FontServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  FontServiceStub.prototype.matchFamilyName = function(familyName, style) {
    return this.delegate_ && this.delegate_.matchFamilyName && this.delegate_.matchFamilyName(familyName, style);
  }
  FontServiceStub.prototype.openStream = function(idNumber) {
    return this.delegate_ && this.delegate_.openStream && this.delegate_.openStream(idNumber);
  }

  FontServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FontServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFontService_MatchFamilyName_Name:
      var params = reader.decodeStruct(FontService_MatchFamilyName_Params);
      this.matchFamilyName(params.familyName, params.style).then(function(response) {
        var responseParams =
            new FontService_MatchFamilyName_ResponseParams();
        responseParams.identity = response.identity;
        responseParams.familyName = response.familyName;
        responseParams.style = response.style;
        var builder = new codec.MessageV1Builder(
            kFontService_MatchFamilyName_Name,
            codec.align(FontService_MatchFamilyName_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FontService_MatchFamilyName_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFontService_OpenStream_Name:
      var params = reader.decodeStruct(FontService_OpenStream_Params);
      this.openStream(params.idNumber).then(function(response) {
        var responseParams =
            new FontService_OpenStream_ResponseParams();
        responseParams.fontHandle = response.fontHandle;
        var builder = new codec.MessageV1Builder(
            kFontService_OpenStream_Name,
            codec.align(FontService_OpenStream_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FontService_OpenStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFontServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFontService_MatchFamilyName_Name:
        if (message.expectsResponse())
          paramsClass = FontService_MatchFamilyName_Params;
      break;
      case kFontService_OpenStream_Name:
        if (message.expectsResponse())
          paramsClass = FontService_OpenStream_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFontServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFontService_MatchFamilyName_Name:
        if (message.isResponse())
          paramsClass = FontService_MatchFamilyName_ResponseParams;
        break;
      case kFontService_OpenStream_Name:
        if (message.isResponse())
          paramsClass = FontService_OpenStream_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FontService = {
    name: 'font_service.mojom.FontService',
    kVersion: 0,
    ptrClass: FontServicePtr,
    proxyClass: FontServiceProxy,
    stubClass: FontServiceStub,
    validateRequest: validateFontServiceRequest,
    validateResponse: validateFontServiceResponse,
    mojomId: 'components/services/font/public/interfaces/font_service.mojom',
    fuzzMethods: {
      matchFamilyName: {
        params: FontService_MatchFamilyName_Params,
      },
      openStream: {
        params: FontService_OpenStream_Params,
      },
    },
  };
  FontServiceStub.prototype.validator = validateFontServiceRequest;
  FontServiceProxy.prototype.validator = validateFontServiceResponse;
  exports.TypefaceSlant = TypefaceSlant;
  exports.TypefaceStyle = TypefaceStyle;
  exports.FontIdentity = FontIdentity;
  exports.FontService = FontService;
  exports.FontServicePtr = FontServicePtr;
  exports.FontServiceAssociatedPtr = FontServiceAssociatedPtr;
})();