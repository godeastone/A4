// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/color_chooser/color_chooser.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');



  function ColorSuggestion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ColorSuggestion.prototype.initDefaults_ = function() {
    this.color = 0;
    this.label = null;
  };
  ColorSuggestion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ColorSuggestion.generate = function(generator_) {
    var generated = new ColorSuggestion;
    generated.color = generator_.generateUint32();
    generated.label = generator_.generateString(false);
    return generated;
  };

  ColorSuggestion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.color = mutator_.mutateUint32(this.color);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    return this;
  };
  ColorSuggestion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ColorSuggestion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ColorSuggestion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ColorSuggestion.validate = function(messageValidator, offset) {
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



    // validate ColorSuggestion.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ColorSuggestion.encodedSize = codec.kStructHeaderSize + 16;

  ColorSuggestion.decode = function(decoder) {
    var packed;
    var val = new ColorSuggestion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.color = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.label = decoder.decodeStruct(codec.String);
    return val;
  };

  ColorSuggestion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ColorSuggestion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.color);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.label);
  };
  function ColorChooserFactory_OpenColorChooser_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ColorChooserFactory_OpenColorChooser_Params.prototype.initDefaults_ = function() {
    this.chooser = new bindings.InterfaceRequest();
    this.client = new ColorChooserClientPtr();
    this.color = 0;
    this.suggestions = null;
  };
  ColorChooserFactory_OpenColorChooser_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ColorChooserFactory_OpenColorChooser_Params.generate = function(generator_) {
    var generated = new ColorChooserFactory_OpenColorChooser_Params;
    generated.chooser = generator_.generateInterfaceRequest("blink.mojom.ColorChooser", false);
    generated.client = generator_.generateInterface("blink.mojom.ColorChooserClient", false);
    generated.color = generator_.generateUint32();
    generated.suggestions = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ColorSuggestion, false);
    });
    return generated;
  };

  ColorChooserFactory_OpenColorChooser_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.chooser = mutator_.mutateInterfaceRequest(this.chooser, "blink.mojom.ColorChooser", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "blink.mojom.ColorChooserClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.color = mutator_.mutateUint32(this.color);
    }
    if (mutator_.chooseMutateField()) {
      this.suggestions = mutator_.mutateArray(this.suggestions, function(val) {
        return mutator_.mutateStruct(blink.mojom.ColorSuggestion, false);
      });
    }
    return this;
  };
  ColorChooserFactory_OpenColorChooser_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.chooser !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ColorChooserRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ColorChooserClientPtr"]);
    }
    return handles;
  };

  ColorChooserFactory_OpenColorChooser_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ColorChooserFactory_OpenColorChooser_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.chooser = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  ColorChooserFactory_OpenColorChooser_Params.validate = function(messageValidator, offset) {
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


    // validate ColorChooserFactory_OpenColorChooser_Params.chooser
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ColorChooserFactory_OpenColorChooser_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ColorChooserFactory_OpenColorChooser_Params.suggestions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(ColorSuggestion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ColorChooserFactory_OpenColorChooser_Params.encodedSize = codec.kStructHeaderSize + 24;

  ColorChooserFactory_OpenColorChooser_Params.decode = function(decoder) {
    var packed;
    var val = new ColorChooserFactory_OpenColorChooser_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.chooser = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(ColorChooserClientPtr));
    val.color = decoder.decodeStruct(codec.Uint32);
    val.suggestions = decoder.decodeArrayPointer(new codec.PointerTo(ColorSuggestion));
    return val;
  };

  ColorChooserFactory_OpenColorChooser_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ColorChooserFactory_OpenColorChooser_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.chooser);
    encoder.encodeStruct(new codec.Interface(ColorChooserClientPtr), val.client);
    encoder.encodeStruct(codec.Uint32, val.color);
    encoder.encodeArrayPointer(new codec.PointerTo(ColorSuggestion), val.suggestions);
  };
  function ColorChooser_SetSelectedColor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ColorChooser_SetSelectedColor_Params.prototype.initDefaults_ = function() {
    this.color = 0;
  };
  ColorChooser_SetSelectedColor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ColorChooser_SetSelectedColor_Params.generate = function(generator_) {
    var generated = new ColorChooser_SetSelectedColor_Params;
    generated.color = generator_.generateUint32();
    return generated;
  };

  ColorChooser_SetSelectedColor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.color = mutator_.mutateUint32(this.color);
    }
    return this;
  };
  ColorChooser_SetSelectedColor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ColorChooser_SetSelectedColor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ColorChooser_SetSelectedColor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ColorChooser_SetSelectedColor_Params.validate = function(messageValidator, offset) {
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

  ColorChooser_SetSelectedColor_Params.encodedSize = codec.kStructHeaderSize + 8;

  ColorChooser_SetSelectedColor_Params.decode = function(decoder) {
    var packed;
    var val = new ColorChooser_SetSelectedColor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.color = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ColorChooser_SetSelectedColor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ColorChooser_SetSelectedColor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.color);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ColorChooserClient_DidChooseColor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ColorChooserClient_DidChooseColor_Params.prototype.initDefaults_ = function() {
    this.color = 0;
  };
  ColorChooserClient_DidChooseColor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ColorChooserClient_DidChooseColor_Params.generate = function(generator_) {
    var generated = new ColorChooserClient_DidChooseColor_Params;
    generated.color = generator_.generateUint32();
    return generated;
  };

  ColorChooserClient_DidChooseColor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.color = mutator_.mutateUint32(this.color);
    }
    return this;
  };
  ColorChooserClient_DidChooseColor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ColorChooserClient_DidChooseColor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ColorChooserClient_DidChooseColor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ColorChooserClient_DidChooseColor_Params.validate = function(messageValidator, offset) {
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

  ColorChooserClient_DidChooseColor_Params.encodedSize = codec.kStructHeaderSize + 8;

  ColorChooserClient_DidChooseColor_Params.decode = function(decoder) {
    var packed;
    var val = new ColorChooserClient_DidChooseColor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.color = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ColorChooserClient_DidChooseColor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ColorChooserClient_DidChooseColor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.color);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kColorChooserFactory_OpenColorChooser_Name = 1320915149;

  function ColorChooserFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ColorChooserFactory,
                                                   handleOrPtrInfo);
  }

  function ColorChooserFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ColorChooserFactory, associatedInterfacePtrInfo);
  }

  ColorChooserFactoryAssociatedPtr.prototype =
      Object.create(ColorChooserFactoryPtr.prototype);
  ColorChooserFactoryAssociatedPtr.prototype.constructor =
      ColorChooserFactoryAssociatedPtr;

  function ColorChooserFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  ColorChooserFactoryPtr.prototype.openColorChooser = function() {
    return ColorChooserFactoryProxy.prototype.openColorChooser
        .apply(this.ptr.getProxy(), arguments);
  };

  ColorChooserFactoryProxy.prototype.openColorChooser = function(chooser, client, color, suggestions) {
    var params_ = new ColorChooserFactory_OpenColorChooser_Params();
    params_.chooser = chooser;
    params_.client = client;
    params_.color = color;
    params_.suggestions = suggestions;
    var builder = new codec.MessageV0Builder(
        kColorChooserFactory_OpenColorChooser_Name,
        codec.align(ColorChooserFactory_OpenColorChooser_Params.encodedSize));
    builder.encodeStruct(ColorChooserFactory_OpenColorChooser_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ColorChooserFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  ColorChooserFactoryStub.prototype.openColorChooser = function(chooser, client, color, suggestions) {
    return this.delegate_ && this.delegate_.openColorChooser && this.delegate_.openColorChooser(chooser, client, color, suggestions);
  }

  ColorChooserFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kColorChooserFactory_OpenColorChooser_Name:
      var params = reader.decodeStruct(ColorChooserFactory_OpenColorChooser_Params);
      this.openColorChooser(params.chooser, params.client, params.color, params.suggestions);
      return true;
    default:
      return false;
    }
  };

  ColorChooserFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateColorChooserFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kColorChooserFactory_OpenColorChooser_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ColorChooserFactory_OpenColorChooser_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateColorChooserFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ColorChooserFactory = {
    name: 'blink.mojom.ColorChooserFactory',
    kVersion: 0,
    ptrClass: ColorChooserFactoryPtr,
    proxyClass: ColorChooserFactoryProxy,
    stubClass: ColorChooserFactoryStub,
    validateRequest: validateColorChooserFactoryRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/color_chooser/color_chooser.mojom',
    fuzzMethods: {
      openColorChooser: {
        params: ColorChooserFactory_OpenColorChooser_Params,
      },
    },
  };
  ColorChooserFactoryStub.prototype.validator = validateColorChooserFactoryRequest;
  ColorChooserFactoryProxy.prototype.validator = null;
  var kColorChooser_SetSelectedColor_Name = 1204626698;

  function ColorChooserPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ColorChooser,
                                                   handleOrPtrInfo);
  }

  function ColorChooserAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ColorChooser, associatedInterfacePtrInfo);
  }

  ColorChooserAssociatedPtr.prototype =
      Object.create(ColorChooserPtr.prototype);
  ColorChooserAssociatedPtr.prototype.constructor =
      ColorChooserAssociatedPtr;

  function ColorChooserProxy(receiver) {
    this.receiver_ = receiver;
  }
  ColorChooserPtr.prototype.setSelectedColor = function() {
    return ColorChooserProxy.prototype.setSelectedColor
        .apply(this.ptr.getProxy(), arguments);
  };

  ColorChooserProxy.prototype.setSelectedColor = function(color) {
    var params_ = new ColorChooser_SetSelectedColor_Params();
    params_.color = color;
    var builder = new codec.MessageV0Builder(
        kColorChooser_SetSelectedColor_Name,
        codec.align(ColorChooser_SetSelectedColor_Params.encodedSize));
    builder.encodeStruct(ColorChooser_SetSelectedColor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ColorChooserStub(delegate) {
    this.delegate_ = delegate;
  }
  ColorChooserStub.prototype.setSelectedColor = function(color) {
    return this.delegate_ && this.delegate_.setSelectedColor && this.delegate_.setSelectedColor(color);
  }

  ColorChooserStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kColorChooser_SetSelectedColor_Name:
      var params = reader.decodeStruct(ColorChooser_SetSelectedColor_Params);
      this.setSelectedColor(params.color);
      return true;
    default:
      return false;
    }
  };

  ColorChooserStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateColorChooserRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kColorChooser_SetSelectedColor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ColorChooser_SetSelectedColor_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateColorChooserResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ColorChooser = {
    name: 'blink.mojom.ColorChooser',
    kVersion: 0,
    ptrClass: ColorChooserPtr,
    proxyClass: ColorChooserProxy,
    stubClass: ColorChooserStub,
    validateRequest: validateColorChooserRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/color_chooser/color_chooser.mojom',
    fuzzMethods: {
      setSelectedColor: {
        params: ColorChooser_SetSelectedColor_Params,
      },
    },
  };
  ColorChooserStub.prototype.validator = validateColorChooserRequest;
  ColorChooserProxy.prototype.validator = null;
  var kColorChooserClient_DidChooseColor_Name = 2007647802;

  function ColorChooserClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ColorChooserClient,
                                                   handleOrPtrInfo);
  }

  function ColorChooserClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ColorChooserClient, associatedInterfacePtrInfo);
  }

  ColorChooserClientAssociatedPtr.prototype =
      Object.create(ColorChooserClientPtr.prototype);
  ColorChooserClientAssociatedPtr.prototype.constructor =
      ColorChooserClientAssociatedPtr;

  function ColorChooserClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ColorChooserClientPtr.prototype.didChooseColor = function() {
    return ColorChooserClientProxy.prototype.didChooseColor
        .apply(this.ptr.getProxy(), arguments);
  };

  ColorChooserClientProxy.prototype.didChooseColor = function(color) {
    var params_ = new ColorChooserClient_DidChooseColor_Params();
    params_.color = color;
    var builder = new codec.MessageV0Builder(
        kColorChooserClient_DidChooseColor_Name,
        codec.align(ColorChooserClient_DidChooseColor_Params.encodedSize));
    builder.encodeStruct(ColorChooserClient_DidChooseColor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ColorChooserClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ColorChooserClientStub.prototype.didChooseColor = function(color) {
    return this.delegate_ && this.delegate_.didChooseColor && this.delegate_.didChooseColor(color);
  }

  ColorChooserClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kColorChooserClient_DidChooseColor_Name:
      var params = reader.decodeStruct(ColorChooserClient_DidChooseColor_Params);
      this.didChooseColor(params.color);
      return true;
    default:
      return false;
    }
  };

  ColorChooserClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateColorChooserClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kColorChooserClient_DidChooseColor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ColorChooserClient_DidChooseColor_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateColorChooserClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ColorChooserClient = {
    name: 'blink.mojom.ColorChooserClient',
    kVersion: 0,
    ptrClass: ColorChooserClientPtr,
    proxyClass: ColorChooserClientProxy,
    stubClass: ColorChooserClientStub,
    validateRequest: validateColorChooserClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/color_chooser/color_chooser.mojom',
    fuzzMethods: {
      didChooseColor: {
        params: ColorChooserClient_DidChooseColor_Params,
      },
    },
  };
  ColorChooserClientStub.prototype.validator = validateColorChooserClientRequest;
  ColorChooserClientProxy.prototype.validator = null;
  exports.ColorSuggestion = ColorSuggestion;
  exports.ColorChooserFactory = ColorChooserFactory;
  exports.ColorChooserFactoryPtr = ColorChooserFactoryPtr;
  exports.ColorChooserFactoryAssociatedPtr = ColorChooserFactoryAssociatedPtr;
  exports.ColorChooser = ColorChooser;
  exports.ColorChooserPtr = ColorChooserPtr;
  exports.ColorChooserAssociatedPtr = ColorChooserAssociatedPtr;
  exports.ColorChooserClient = ColorChooserClient;
  exports.ColorChooserClientPtr = ColorChooserClientPtr;
  exports.ColorChooserClientAssociatedPtr = ColorChooserClientAssociatedPtr;
})();