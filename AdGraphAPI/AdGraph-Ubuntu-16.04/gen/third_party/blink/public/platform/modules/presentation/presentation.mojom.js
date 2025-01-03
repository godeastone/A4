// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/presentation/presentation.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var ScreenAvailability = {};
  ScreenAvailability.UNKNOWN = 0;
  ScreenAvailability.UNAVAILABLE = ScreenAvailability.UNKNOWN + 1;
  ScreenAvailability.SOURCE_NOT_SUPPORTED = ScreenAvailability.UNAVAILABLE + 1;
  ScreenAvailability.DISABLED = ScreenAvailability.SOURCE_NOT_SUPPORTED + 1;
  ScreenAvailability.AVAILABLE = ScreenAvailability.DISABLED + 1;

  ScreenAvailability.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  ScreenAvailability.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PresentationConnectionState = {};
  PresentationConnectionState.CONNECTING = 0;
  PresentationConnectionState.CONNECTED = PresentationConnectionState.CONNECTING + 1;
  PresentationConnectionState.CLOSED = PresentationConnectionState.CONNECTED + 1;
  PresentationConnectionState.TERMINATED = PresentationConnectionState.CLOSED + 1;

  PresentationConnectionState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  PresentationConnectionState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PresentationConnectionCloseReason = {};
  PresentationConnectionCloseReason.CONNECTION_ERROR = 0;
  PresentationConnectionCloseReason.CLOSED = PresentationConnectionCloseReason.CONNECTION_ERROR + 1;
  PresentationConnectionCloseReason.WENT_AWAY = PresentationConnectionCloseReason.CLOSED + 1;

  PresentationConnectionCloseReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PresentationConnectionCloseReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PresentationErrorType = {};
  PresentationErrorType.NO_AVAILABLE_SCREENS = 0;
  PresentationErrorType.PRESENTATION_REQUEST_CANCELLED = PresentationErrorType.NO_AVAILABLE_SCREENS + 1;
  PresentationErrorType.NO_PRESENTATION_FOUND = PresentationErrorType.PRESENTATION_REQUEST_CANCELLED + 1;
  PresentationErrorType.PREVIOUS_START_IN_PROGRESS = PresentationErrorType.NO_PRESENTATION_FOUND + 1;
  PresentationErrorType.UNKNOWN = PresentationErrorType.PREVIOUS_START_IN_PROGRESS + 1;

  PresentationErrorType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  PresentationErrorType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function PresentationInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationInfo.prototype.initDefaults_ = function() {
    this.url = null;
    this.id = null;
  };
  PresentationInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationInfo.generate = function(generator_) {
    var generated = new PresentationInfo;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.id = generator_.generateString(false);
    return generated;
  };

  PresentationInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    return this;
  };
  PresentationInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationInfo.validate = function(messageValidator, offset) {
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


    // validate PresentationInfo.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationInfo.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationInfo.encodedSize = codec.kStructHeaderSize + 16;

  PresentationInfo.decode = function(decoder) {
    var packed;
    var val = new PresentationInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.id = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.String, val.id);
  };
  function PresentationError(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationError.prototype.initDefaults_ = function() {
    this.errorType = 0;
    this.message = null;
  };
  PresentationError.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationError.generate = function(generator_) {
    var generated = new PresentationError;
    generated.errorType = generator_.generateEnum(0, 4);
    generated.message = generator_.generateString(false);
    return generated;
  };

  PresentationError.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.errorType = mutator_.mutateEnum(this.errorType, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  PresentationError.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationError.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationError.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationError.validate = function(messageValidator, offset) {
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


    // validate PresentationError.errorType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PresentationErrorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationError.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationError.encodedSize = codec.kStructHeaderSize + 16;

  PresentationError.decode = function(decoder) {
    var packed;
    var val = new PresentationError();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.errorType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationError.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationError.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.errorType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function PresentationConnection_OnMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationConnection_OnMessage_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  PresentationConnection_OnMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationConnection_OnMessage_Params.generate = function(generator_) {
    var generated = new PresentationConnection_OnMessage_Params;
    generated.message = generator_.generateUnion(blink.mojom.PresentationConnectionMessage, false);
    return generated;
  };

  PresentationConnection_OnMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateUnion(blink.mojom.PresentationConnectionMessage, false);
    }
    return this;
  };
  PresentationConnection_OnMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationConnection_OnMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationConnection_OnMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationConnection_OnMessage_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationConnection_OnMessage_Params.message
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, PresentationConnectionMessage, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationConnection_OnMessage_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationConnection_OnMessage_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationConnection_OnMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(PresentationConnectionMessage);
    return val;
  };

  PresentationConnection_OnMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationConnection_OnMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(PresentationConnectionMessage, val.message);
  };
  function PresentationConnection_OnMessage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationConnection_OnMessage_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  PresentationConnection_OnMessage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationConnection_OnMessage_ResponseParams.generate = function(generator_) {
    var generated = new PresentationConnection_OnMessage_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  PresentationConnection_OnMessage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  PresentationConnection_OnMessage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationConnection_OnMessage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationConnection_OnMessage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationConnection_OnMessage_ResponseParams.validate = function(messageValidator, offset) {
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

  PresentationConnection_OnMessage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PresentationConnection_OnMessage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PresentationConnection_OnMessage_ResponseParams();
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

  PresentationConnection_OnMessage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationConnection_OnMessage_ResponseParams.encodedSize);
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
  function PresentationConnection_DidChangeState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationConnection_DidChangeState_Params.prototype.initDefaults_ = function() {
    this.state = 0;
  };
  PresentationConnection_DidChangeState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationConnection_DidChangeState_Params.generate = function(generator_) {
    var generated = new PresentationConnection_DidChangeState_Params;
    generated.state = generator_.generateEnum(0, 3);
    return generated;
  };

  PresentationConnection_DidChangeState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state, 0, 3);
    }
    return this;
  };
  PresentationConnection_DidChangeState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationConnection_DidChangeState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationConnection_DidChangeState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationConnection_DidChangeState_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationConnection_DidChangeState_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PresentationConnectionState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationConnection_DidChangeState_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationConnection_DidChangeState_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationConnection_DidChangeState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.state = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationConnection_DidChangeState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationConnection_DidChangeState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.state);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationConnection_RequestClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationConnection_RequestClose_Params.prototype.initDefaults_ = function() {
  };
  PresentationConnection_RequestClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationConnection_RequestClose_Params.generate = function(generator_) {
    var generated = new PresentationConnection_RequestClose_Params;
    return generated;
  };

  PresentationConnection_RequestClose_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PresentationConnection_RequestClose_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationConnection_RequestClose_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationConnection_RequestClose_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationConnection_RequestClose_Params.validate = function(messageValidator, offset) {
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

  PresentationConnection_RequestClose_Params.encodedSize = codec.kStructHeaderSize + 0;

  PresentationConnection_RequestClose_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationConnection_RequestClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PresentationConnection_RequestClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationConnection_RequestClose_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PresentationService_SetController_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SetController_Params.prototype.initDefaults_ = function() {
    this.controller = new PresentationControllerPtr();
  };
  PresentationService_SetController_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_SetController_Params.generate = function(generator_) {
    var generated = new PresentationService_SetController_Params;
    generated.controller = generator_.generateInterface("blink.mojom.PresentationController", false);
    return generated;
  };

  PresentationService_SetController_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.controller = mutator_.mutateInterface(this.controller, "blink.mojom.PresentationController", false);
    }
    return this;
  };
  PresentationService_SetController_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controller !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PresentationControllerPtr"]);
    }
    return handles;
  };

  PresentationService_SetController_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_SetController_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.controller = handles[idx++];;
    return idx;
  };

  PresentationService_SetController_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_SetController_Params.controller
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SetController_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_SetController_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SetController_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.controller = decoder.decodeStruct(new codec.Interface(PresentationControllerPtr));
    return val;
  };

  PresentationService_SetController_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SetController_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PresentationControllerPtr), val.controller);
  };
  function PresentationService_SetReceiver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SetReceiver_Params.prototype.initDefaults_ = function() {
    this.receiver = new PresentationReceiverPtr();
  };
  PresentationService_SetReceiver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_SetReceiver_Params.generate = function(generator_) {
    var generated = new PresentationService_SetReceiver_Params;
    generated.receiver = generator_.generateInterface("blink.mojom.PresentationReceiver", false);
    return generated;
  };

  PresentationService_SetReceiver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.receiver = mutator_.mutateInterface(this.receiver, "blink.mojom.PresentationReceiver", false);
    }
    return this;
  };
  PresentationService_SetReceiver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.receiver !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PresentationReceiverPtr"]);
    }
    return handles;
  };

  PresentationService_SetReceiver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_SetReceiver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.receiver = handles[idx++];;
    return idx;
  };

  PresentationService_SetReceiver_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_SetReceiver_Params.receiver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SetReceiver_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_SetReceiver_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SetReceiver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.receiver = decoder.decodeStruct(new codec.Interface(PresentationReceiverPtr));
    return val;
  };

  PresentationService_SetReceiver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SetReceiver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PresentationReceiverPtr), val.receiver);
  };
  function PresentationService_SetDefaultPresentationUrls_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SetDefaultPresentationUrls_Params.prototype.initDefaults_ = function() {
    this.presentationUrls = null;
  };
  PresentationService_SetDefaultPresentationUrls_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_SetDefaultPresentationUrls_Params.generate = function(generator_) {
    var generated = new PresentationService_SetDefaultPresentationUrls_Params;
    generated.presentationUrls = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Url, false);
    });
    return generated;
  };

  PresentationService_SetDefaultPresentationUrls_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationUrls = mutator_.mutateArray(this.presentationUrls, function(val) {
        return mutator_.mutateStruct(url.mojom.Url, false);
      });
    }
    return this;
  };
  PresentationService_SetDefaultPresentationUrls_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_SetDefaultPresentationUrls_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_SetDefaultPresentationUrls_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_SetDefaultPresentationUrls_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_SetDefaultPresentationUrls_Params.presentationUrls
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SetDefaultPresentationUrls_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_SetDefaultPresentationUrls_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SetDefaultPresentationUrls_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationUrls = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    return val;
  };

  PresentationService_SetDefaultPresentationUrls_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SetDefaultPresentationUrls_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.presentationUrls);
  };
  function PresentationService_ListenForScreenAvailability_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_ListenForScreenAvailability_Params.prototype.initDefaults_ = function() {
    this.availabilityUrl = null;
  };
  PresentationService_ListenForScreenAvailability_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_ListenForScreenAvailability_Params.generate = function(generator_) {
    var generated = new PresentationService_ListenForScreenAvailability_Params;
    generated.availabilityUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PresentationService_ListenForScreenAvailability_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.availabilityUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PresentationService_ListenForScreenAvailability_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_ListenForScreenAvailability_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_ListenForScreenAvailability_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_ListenForScreenAvailability_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_ListenForScreenAvailability_Params.availabilityUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_ListenForScreenAvailability_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_ListenForScreenAvailability_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_ListenForScreenAvailability_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.availabilityUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PresentationService_ListenForScreenAvailability_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_ListenForScreenAvailability_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.availabilityUrl);
  };
  function PresentationService_StopListeningForScreenAvailability_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_StopListeningForScreenAvailability_Params.prototype.initDefaults_ = function() {
    this.availabilityUrl = null;
  };
  PresentationService_StopListeningForScreenAvailability_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_StopListeningForScreenAvailability_Params.generate = function(generator_) {
    var generated = new PresentationService_StopListeningForScreenAvailability_Params;
    generated.availabilityUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PresentationService_StopListeningForScreenAvailability_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.availabilityUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PresentationService_StopListeningForScreenAvailability_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_StopListeningForScreenAvailability_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_StopListeningForScreenAvailability_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_StopListeningForScreenAvailability_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_StopListeningForScreenAvailability_Params.availabilityUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_StopListeningForScreenAvailability_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_StopListeningForScreenAvailability_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_StopListeningForScreenAvailability_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.availabilityUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PresentationService_StopListeningForScreenAvailability_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_StopListeningForScreenAvailability_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.availabilityUrl);
  };
  function PresentationService_StartPresentation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_StartPresentation_Params.prototype.initDefaults_ = function() {
    this.presentationUrls = null;
  };
  PresentationService_StartPresentation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_StartPresentation_Params.generate = function(generator_) {
    var generated = new PresentationService_StartPresentation_Params;
    generated.presentationUrls = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Url, false);
    });
    return generated;
  };

  PresentationService_StartPresentation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationUrls = mutator_.mutateArray(this.presentationUrls, function(val) {
        return mutator_.mutateStruct(url.mojom.Url, false);
      });
    }
    return this;
  };
  PresentationService_StartPresentation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_StartPresentation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_StartPresentation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_StartPresentation_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_StartPresentation_Params.presentationUrls
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_StartPresentation_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationService_StartPresentation_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_StartPresentation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationUrls = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    return val;
  };

  PresentationService_StartPresentation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_StartPresentation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.presentationUrls);
  };
  function PresentationService_StartPresentation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_StartPresentation_ResponseParams.prototype.initDefaults_ = function() {
    this.presentationInfo = null;
    this.error = null;
  };
  PresentationService_StartPresentation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_StartPresentation_ResponseParams.generate = function(generator_) {
    var generated = new PresentationService_StartPresentation_ResponseParams;
    generated.presentationInfo = generator_.generateStruct(blink.mojom.PresentationInfo, true);
    generated.error = generator_.generateStruct(blink.mojom.PresentationError, true);
    return generated;
  };

  PresentationService_StartPresentation_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationInfo = mutator_.mutateStruct(blink.mojom.PresentationInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateStruct(blink.mojom.PresentationError, true);
    }
    return this;
  };
  PresentationService_StartPresentation_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_StartPresentation_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_StartPresentation_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_StartPresentation_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PresentationService_StartPresentation_ResponseParams.presentationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_StartPresentation_ResponseParams.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PresentationError, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_StartPresentation_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_StartPresentation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PresentationService_StartPresentation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationInfo = decoder.decodeStructPointer(PresentationInfo);
    val.error = decoder.decodeStructPointer(PresentationError);
    return val;
  };

  PresentationService_StartPresentation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_StartPresentation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.presentationInfo);
    encoder.encodeStructPointer(PresentationError, val.error);
  };
  function PresentationService_ReconnectPresentation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_ReconnectPresentation_Params.prototype.initDefaults_ = function() {
    this.presentationUrls = null;
    this.presentationId = null;
  };
  PresentationService_ReconnectPresentation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_ReconnectPresentation_Params.generate = function(generator_) {
    var generated = new PresentationService_ReconnectPresentation_Params;
    generated.presentationUrls = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Url, false);
    });
    generated.presentationId = generator_.generateString(false);
    return generated;
  };

  PresentationService_ReconnectPresentation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationUrls = mutator_.mutateArray(this.presentationUrls, function(val) {
        return mutator_.mutateStruct(url.mojom.Url, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.presentationId = mutator_.mutateString(this.presentationId, false);
    }
    return this;
  };
  PresentationService_ReconnectPresentation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_ReconnectPresentation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_ReconnectPresentation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_ReconnectPresentation_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_ReconnectPresentation_Params.presentationUrls
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_ReconnectPresentation_Params.presentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_ReconnectPresentation_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_ReconnectPresentation_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_ReconnectPresentation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationUrls = decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    val.presentationId = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_ReconnectPresentation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_ReconnectPresentation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.presentationUrls);
    encoder.encodeStruct(codec.String, val.presentationId);
  };
  function PresentationService_ReconnectPresentation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_ReconnectPresentation_ResponseParams.prototype.initDefaults_ = function() {
    this.presentationInfo = null;
    this.error = null;
  };
  PresentationService_ReconnectPresentation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_ReconnectPresentation_ResponseParams.generate = function(generator_) {
    var generated = new PresentationService_ReconnectPresentation_ResponseParams;
    generated.presentationInfo = generator_.generateStruct(blink.mojom.PresentationInfo, true);
    generated.error = generator_.generateStruct(blink.mojom.PresentationError, true);
    return generated;
  };

  PresentationService_ReconnectPresentation_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationInfo = mutator_.mutateStruct(blink.mojom.PresentationInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateStruct(blink.mojom.PresentationError, true);
    }
    return this;
  };
  PresentationService_ReconnectPresentation_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_ReconnectPresentation_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_ReconnectPresentation_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_ReconnectPresentation_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PresentationService_ReconnectPresentation_ResponseParams.presentationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_ReconnectPresentation_ResponseParams.error
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, PresentationError, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_ReconnectPresentation_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_ReconnectPresentation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PresentationService_ReconnectPresentation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationInfo = decoder.decodeStructPointer(PresentationInfo);
    val.error = decoder.decodeStructPointer(PresentationError);
    return val;
  };

  PresentationService_ReconnectPresentation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_ReconnectPresentation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.presentationInfo);
    encoder.encodeStructPointer(PresentationError, val.error);
  };
  function PresentationService_SetPresentationConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_SetPresentationConnection_Params.prototype.initDefaults_ = function() {
    this.presentationInfo = null;
    this.controllerConnectionPtr = new PresentationConnectionPtr();
    this.receiverConnectionRequest = new bindings.InterfaceRequest();
  };
  PresentationService_SetPresentationConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_SetPresentationConnection_Params.generate = function(generator_) {
    var generated = new PresentationService_SetPresentationConnection_Params;
    generated.presentationInfo = generator_.generateStruct(blink.mojom.PresentationInfo, false);
    generated.controllerConnectionPtr = generator_.generateInterface("blink.mojom.PresentationConnection", false);
    generated.receiverConnectionRequest = generator_.generateInterfaceRequest("blink.mojom.PresentationConnection", false);
    return generated;
  };

  PresentationService_SetPresentationConnection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationInfo = mutator_.mutateStruct(blink.mojom.PresentationInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.controllerConnectionPtr = mutator_.mutateInterface(this.controllerConnectionPtr, "blink.mojom.PresentationConnection", false);
    }
    if (mutator_.chooseMutateField()) {
      this.receiverConnectionRequest = mutator_.mutateInterfaceRequest(this.receiverConnectionRequest, "blink.mojom.PresentationConnection", false);
    }
    return this;
  };
  PresentationService_SetPresentationConnection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controllerConnectionPtr !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PresentationConnectionPtr"]);
    }
    if (this.receiverConnectionRequest !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PresentationConnectionRequest"]);
    }
    return handles;
  };

  PresentationService_SetPresentationConnection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_SetPresentationConnection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.controllerConnectionPtr = handles[idx++];;
    this.receiverConnectionRequest = handles[idx++];;
    return idx;
  };

  PresentationService_SetPresentationConnection_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_SetPresentationConnection_Params.presentationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_SetPresentationConnection_Params.controllerConnectionPtr
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_SetPresentationConnection_Params.receiverConnectionRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_SetPresentationConnection_Params.encodedSize = codec.kStructHeaderSize + 24;

  PresentationService_SetPresentationConnection_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_SetPresentationConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationInfo = decoder.decodeStructPointer(PresentationInfo);
    val.controllerConnectionPtr = decoder.decodeStruct(new codec.Interface(PresentationConnectionPtr));
    val.receiverConnectionRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationService_SetPresentationConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_SetPresentationConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.presentationInfo);
    encoder.encodeStruct(new codec.Interface(PresentationConnectionPtr), val.controllerConnectionPtr);
    encoder.encodeStruct(codec.InterfaceRequest, val.receiverConnectionRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationService_CloseConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_CloseConnection_Params.prototype.initDefaults_ = function() {
    this.presentationUrl = null;
    this.presentationId = null;
  };
  PresentationService_CloseConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_CloseConnection_Params.generate = function(generator_) {
    var generated = new PresentationService_CloseConnection_Params;
    generated.presentationUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.presentationId = generator_.generateString(false);
    return generated;
  };

  PresentationService_CloseConnection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.presentationId = mutator_.mutateString(this.presentationId, false);
    }
    return this;
  };
  PresentationService_CloseConnection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_CloseConnection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_CloseConnection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_CloseConnection_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_CloseConnection_Params.presentationUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_CloseConnection_Params.presentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_CloseConnection_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_CloseConnection_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_CloseConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationUrl = decoder.decodeStructPointer(url$.Url);
    val.presentationId = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_CloseConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_CloseConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.presentationUrl);
    encoder.encodeStruct(codec.String, val.presentationId);
  };
  function PresentationService_Terminate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationService_Terminate_Params.prototype.initDefaults_ = function() {
    this.presentationUrl = null;
    this.presentationId = null;
  };
  PresentationService_Terminate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationService_Terminate_Params.generate = function(generator_) {
    var generated = new PresentationService_Terminate_Params;
    generated.presentationUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.presentationId = generator_.generateString(false);
    return generated;
  };

  PresentationService_Terminate_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.presentationId = mutator_.mutateString(this.presentationId, false);
    }
    return this;
  };
  PresentationService_Terminate_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationService_Terminate_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationService_Terminate_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationService_Terminate_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationService_Terminate_Params.presentationUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationService_Terminate_Params.presentationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationService_Terminate_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationService_Terminate_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationService_Terminate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationUrl = decoder.decodeStructPointer(url$.Url);
    val.presentationId = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationService_Terminate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationService_Terminate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.presentationUrl);
    encoder.encodeStruct(codec.String, val.presentationId);
  };
  function PresentationController_OnScreenAvailabilityUpdated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationController_OnScreenAvailabilityUpdated_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.availability = 0;
  };
  PresentationController_OnScreenAvailabilityUpdated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationController_OnScreenAvailabilityUpdated_Params.generate = function(generator_) {
    var generated = new PresentationController_OnScreenAvailabilityUpdated_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.availability = generator_.generateEnum(0, 4);
    return generated;
  };

  PresentationController_OnScreenAvailabilityUpdated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.availability = mutator_.mutateEnum(this.availability, 0, 4);
    }
    return this;
  };
  PresentationController_OnScreenAvailabilityUpdated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationController_OnScreenAvailabilityUpdated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationController_OnScreenAvailabilityUpdated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationController_OnScreenAvailabilityUpdated_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationController_OnScreenAvailabilityUpdated_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationController_OnScreenAvailabilityUpdated_Params.availability
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ScreenAvailability);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationController_OnScreenAvailabilityUpdated_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationController_OnScreenAvailabilityUpdated_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationController_OnScreenAvailabilityUpdated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.availability = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationController_OnScreenAvailabilityUpdated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationController_OnScreenAvailabilityUpdated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int32, val.availability);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationController_OnDefaultPresentationStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationController_OnDefaultPresentationStarted_Params.prototype.initDefaults_ = function() {
    this.presentationInfo = null;
  };
  PresentationController_OnDefaultPresentationStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationController_OnDefaultPresentationStarted_Params.generate = function(generator_) {
    var generated = new PresentationController_OnDefaultPresentationStarted_Params;
    generated.presentationInfo = generator_.generateStruct(blink.mojom.PresentationInfo, false);
    return generated;
  };

  PresentationController_OnDefaultPresentationStarted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationInfo = mutator_.mutateStruct(blink.mojom.PresentationInfo, false);
    }
    return this;
  };
  PresentationController_OnDefaultPresentationStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationController_OnDefaultPresentationStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationController_OnDefaultPresentationStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationController_OnDefaultPresentationStarted_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationController_OnDefaultPresentationStarted_Params.presentationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationController_OnDefaultPresentationStarted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PresentationController_OnDefaultPresentationStarted_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationController_OnDefaultPresentationStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationInfo = decoder.decodeStructPointer(PresentationInfo);
    return val;
  };

  PresentationController_OnDefaultPresentationStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationController_OnDefaultPresentationStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.presentationInfo);
  };
  function PresentationController_OnConnectionStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationController_OnConnectionStateChanged_Params.prototype.initDefaults_ = function() {
    this.presentationInfo = null;
    this.newState = 0;
  };
  PresentationController_OnConnectionStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationController_OnConnectionStateChanged_Params.generate = function(generator_) {
    var generated = new PresentationController_OnConnectionStateChanged_Params;
    generated.presentationInfo = generator_.generateStruct(blink.mojom.PresentationInfo, false);
    generated.newState = generator_.generateEnum(0, 3);
    return generated;
  };

  PresentationController_OnConnectionStateChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationInfo = mutator_.mutateStruct(blink.mojom.PresentationInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newState = mutator_.mutateEnum(this.newState, 0, 3);
    }
    return this;
  };
  PresentationController_OnConnectionStateChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationController_OnConnectionStateChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationController_OnConnectionStateChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationController_OnConnectionStateChanged_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationController_OnConnectionStateChanged_Params.presentationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationController_OnConnectionStateChanged_Params.newState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, PresentationConnectionState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationController_OnConnectionStateChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  PresentationController_OnConnectionStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationController_OnConnectionStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationInfo = decoder.decodeStructPointer(PresentationInfo);
    val.newState = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationController_OnConnectionStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationController_OnConnectionStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.presentationInfo);
    encoder.encodeStruct(codec.Int32, val.newState);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PresentationController_OnConnectionClosed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationController_OnConnectionClosed_Params.prototype.initDefaults_ = function() {
    this.presentationInfo = null;
    this.reason = 0;
    this.message = null;
  };
  PresentationController_OnConnectionClosed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationController_OnConnectionClosed_Params.generate = function(generator_) {
    var generated = new PresentationController_OnConnectionClosed_Params;
    generated.presentationInfo = generator_.generateStruct(blink.mojom.PresentationInfo, false);
    generated.reason = generator_.generateEnum(0, 2);
    generated.message = generator_.generateString(false);
    return generated;
  };

  PresentationController_OnConnectionClosed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.presentationInfo = mutator_.mutateStruct(blink.mojom.PresentationInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  PresentationController_OnConnectionClosed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PresentationController_OnConnectionClosed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationController_OnConnectionClosed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PresentationController_OnConnectionClosed_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationController_OnConnectionClosed_Params.presentationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationController_OnConnectionClosed_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, PresentationConnectionCloseReason);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationController_OnConnectionClosed_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationController_OnConnectionClosed_Params.encodedSize = codec.kStructHeaderSize + 24;

  PresentationController_OnConnectionClosed_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationController_OnConnectionClosed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.presentationInfo = decoder.decodeStructPointer(PresentationInfo);
    val.reason = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  PresentationController_OnConnectionClosed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationController_OnConnectionClosed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.presentationInfo);
    encoder.encodeStruct(codec.Int32, val.reason);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.message);
  };
  function PresentationReceiver_OnReceiverConnectionAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PresentationReceiver_OnReceiverConnectionAvailable_Params.prototype.initDefaults_ = function() {
    this.info = null;
    this.controllerConnection = new PresentationConnectionPtr();
    this.receiverConnectionRequest = new bindings.InterfaceRequest();
  };
  PresentationReceiver_OnReceiverConnectionAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PresentationReceiver_OnReceiverConnectionAvailable_Params.generate = function(generator_) {
    var generated = new PresentationReceiver_OnReceiverConnectionAvailable_Params;
    generated.info = generator_.generateStruct(blink.mojom.PresentationInfo, false);
    generated.controllerConnection = generator_.generateInterface("blink.mojom.PresentationConnection", false);
    generated.receiverConnectionRequest = generator_.generateInterfaceRequest("blink.mojom.PresentationConnection", false);
    return generated;
  };

  PresentationReceiver_OnReceiverConnectionAvailable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(blink.mojom.PresentationInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.controllerConnection = mutator_.mutateInterface(this.controllerConnection, "blink.mojom.PresentationConnection", false);
    }
    if (mutator_.chooseMutateField()) {
      this.receiverConnectionRequest = mutator_.mutateInterfaceRequest(this.receiverConnectionRequest, "blink.mojom.PresentationConnection", false);
    }
    return this;
  };
  PresentationReceiver_OnReceiverConnectionAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.controllerConnection !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PresentationConnectionPtr"]);
    }
    if (this.receiverConnectionRequest !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PresentationConnectionRequest"]);
    }
    return handles;
  };

  PresentationReceiver_OnReceiverConnectionAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PresentationReceiver_OnReceiverConnectionAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.controllerConnection = handles[idx++];;
    this.receiverConnectionRequest = handles[idx++];;
    return idx;
  };

  PresentationReceiver_OnReceiverConnectionAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate PresentationReceiver_OnReceiverConnectionAvailable_Params.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PresentationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationReceiver_OnReceiverConnectionAvailable_Params.controllerConnection
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PresentationReceiver_OnReceiverConnectionAvailable_Params.receiverConnectionRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PresentationReceiver_OnReceiverConnectionAvailable_Params.encodedSize = codec.kStructHeaderSize + 24;

  PresentationReceiver_OnReceiverConnectionAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new PresentationReceiver_OnReceiverConnectionAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(PresentationInfo);
    val.controllerConnection = decoder.decodeStruct(new codec.Interface(PresentationConnectionPtr));
    val.receiverConnectionRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PresentationReceiver_OnReceiverConnectionAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PresentationReceiver_OnReceiverConnectionAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PresentationInfo, val.info);
    encoder.encodeStruct(new codec.Interface(PresentationConnectionPtr), val.controllerConnection);
    encoder.encodeStruct(codec.InterfaceRequest, val.receiverConnectionRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PresentationConnectionMessage(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  PresentationConnectionMessage.Tags = {
    message: 0,
    data: 1,
  };

  PresentationConnectionMessage.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  PresentationConnectionMessage.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "message",
        "data",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a PresentationConnectionMessage member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  PresentationConnectionMessage.generate = function(generator_) {
    var generated = new PresentationConnectionMessage;
    var generators = [
      {
        field: "message",

        generator: function() { return generator_.generateString(false); },
      },
      {
        field: "data",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateUint8();
        }); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  PresentationConnectionMessage.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "message",

        mutator: function() { return mutator_.mutateString(this.message, false); },
      },
      {
        field: "data",

        mutator: function() { return mutator_.mutateArray(this.data, function(val) {
          return mutator_.mutateUint8(val);
        }); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  PresentationConnectionMessage.prototype.getHandleDeps = function() {
    return [];
  }
  PresentationConnectionMessage.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(PresentationConnectionMessage.prototype, "message", {
    get: function() {
      if (this.$tag != PresentationConnectionMessage.Tags.message) {
        throw new ReferenceError(
            "PresentationConnectionMessage.message is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = PresentationConnectionMessage.Tags.message;
      this.$data = value;
    }
  });
  Object.defineProperty(PresentationConnectionMessage.prototype, "data", {
    get: function() {
      if (this.$tag != PresentationConnectionMessage.Tags.data) {
        throw new ReferenceError(
            "PresentationConnectionMessage.data is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = PresentationConnectionMessage.Tags.data;
      this.$data = value;
    }
  });


    PresentationConnectionMessage.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case PresentationConnectionMessage.Tags.message:
          encoder.encodeStruct(codec.String, val.message);
          break;
        case PresentationConnectionMessage.Tags.data:
          encoder.encodeArrayPointer(codec.Uint8, val.data);
          break;
      }
      encoder.align();
    };


    PresentationConnectionMessage.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new PresentationConnectionMessage();
      var tag = decoder.readUint32();
      switch (tag) {
        case PresentationConnectionMessage.Tags.message:
          result.message = decoder.decodeStruct(codec.String);
          break;
        case PresentationConnectionMessage.Tags.data:
          result.data = decoder.decodeArrayPointer(codec.Uint8);
          break;
      }
      decoder.align();

      return result;
    };


    PresentationConnectionMessage.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case PresentationConnectionMessage.Tags.message:
          

    // validate PresentationConnectionMessage.message
    err = messageValidator.validateStringPointer(data_offset, false)
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case PresentationConnectionMessage.Tags.data:
          

    // validate PresentationConnectionMessage.data
    err = messageValidator.validateArrayPointer(data_offset, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  PresentationConnectionMessage.encodedSize = 16;
  var kPresentationConnection_OnMessage_Name = 1728286552;
  var kPresentationConnection_DidChangeState_Name = 230222281;
  var kPresentationConnection_RequestClose_Name = 1734248562;

  function PresentationConnectionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PresentationConnection,
                                                   handleOrPtrInfo);
  }

  function PresentationConnectionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PresentationConnection, associatedInterfacePtrInfo);
  }

  PresentationConnectionAssociatedPtr.prototype =
      Object.create(PresentationConnectionPtr.prototype);
  PresentationConnectionAssociatedPtr.prototype.constructor =
      PresentationConnectionAssociatedPtr;

  function PresentationConnectionProxy(receiver) {
    this.receiver_ = receiver;
  }
  PresentationConnectionPtr.prototype.onMessage = function() {
    return PresentationConnectionProxy.prototype.onMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationConnectionProxy.prototype.onMessage = function(message) {
    var params_ = new PresentationConnection_OnMessage_Params();
    params_.message = message;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPresentationConnection_OnMessage_Name,
          codec.align(PresentationConnection_OnMessage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PresentationConnection_OnMessage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PresentationConnection_OnMessage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PresentationConnectionPtr.prototype.didChangeState = function() {
    return PresentationConnectionProxy.prototype.didChangeState
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationConnectionProxy.prototype.didChangeState = function(state) {
    var params_ = new PresentationConnection_DidChangeState_Params();
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kPresentationConnection_DidChangeState_Name,
        codec.align(PresentationConnection_DidChangeState_Params.encodedSize));
    builder.encodeStruct(PresentationConnection_DidChangeState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationConnectionPtr.prototype.requestClose = function() {
    return PresentationConnectionProxy.prototype.requestClose
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationConnectionProxy.prototype.requestClose = function() {
    var params_ = new PresentationConnection_RequestClose_Params();
    var builder = new codec.MessageV0Builder(
        kPresentationConnection_RequestClose_Name,
        codec.align(PresentationConnection_RequestClose_Params.encodedSize));
    builder.encodeStruct(PresentationConnection_RequestClose_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PresentationConnectionStub(delegate) {
    this.delegate_ = delegate;
  }
  PresentationConnectionStub.prototype.onMessage = function(message) {
    return this.delegate_ && this.delegate_.onMessage && this.delegate_.onMessage(message);
  }
  PresentationConnectionStub.prototype.didChangeState = function(state) {
    return this.delegate_ && this.delegate_.didChangeState && this.delegate_.didChangeState(state);
  }
  PresentationConnectionStub.prototype.requestClose = function() {
    return this.delegate_ && this.delegate_.requestClose && this.delegate_.requestClose();
  }

  PresentationConnectionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationConnection_DidChangeState_Name:
      var params = reader.decodeStruct(PresentationConnection_DidChangeState_Params);
      this.didChangeState(params.state);
      return true;
    case kPresentationConnection_RequestClose_Name:
      var params = reader.decodeStruct(PresentationConnection_RequestClose_Params);
      this.requestClose();
      return true;
    default:
      return false;
    }
  };

  PresentationConnectionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationConnection_OnMessage_Name:
      var params = reader.decodeStruct(PresentationConnection_OnMessage_Params);
      this.onMessage(params.message).then(function(response) {
        var responseParams =
            new PresentationConnection_OnMessage_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kPresentationConnection_OnMessage_Name,
            codec.align(PresentationConnection_OnMessage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PresentationConnection_OnMessage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePresentationConnectionRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPresentationConnection_OnMessage_Name:
        if (message.expectsResponse())
          paramsClass = PresentationConnection_OnMessage_Params;
      break;
      case kPresentationConnection_DidChangeState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationConnection_DidChangeState_Params;
      break;
      case kPresentationConnection_RequestClose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationConnection_RequestClose_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePresentationConnectionResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPresentationConnection_OnMessage_Name:
        if (message.isResponse())
          paramsClass = PresentationConnection_OnMessage_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PresentationConnection = {
    name: 'blink.mojom.PresentationConnection',
    kVersion: 0,
    ptrClass: PresentationConnectionPtr,
    proxyClass: PresentationConnectionProxy,
    stubClass: PresentationConnectionStub,
    validateRequest: validatePresentationConnectionRequest,
    validateResponse: validatePresentationConnectionResponse,
    mojomId: 'third_party/blink/public/platform/modules/presentation/presentation.mojom',
    fuzzMethods: {
      onMessage: {
        params: PresentationConnection_OnMessage_Params,
      },
      didChangeState: {
        params: PresentationConnection_DidChangeState_Params,
      },
      requestClose: {
        params: PresentationConnection_RequestClose_Params,
      },
    },
  };
  PresentationConnectionStub.prototype.validator = validatePresentationConnectionRequest;
  PresentationConnectionProxy.prototype.validator = validatePresentationConnectionResponse;
  var kPresentationService_SetController_Name = 1760921362;
  var kPresentationService_SetReceiver_Name = 1682785299;
  var kPresentationService_SetDefaultPresentationUrls_Name = 1438315289;
  var kPresentationService_ListenForScreenAvailability_Name = 355460945;
  var kPresentationService_StopListeningForScreenAvailability_Name = 1399830856;
  var kPresentationService_StartPresentation_Name = 1970147745;
  var kPresentationService_ReconnectPresentation_Name = 542766042;
  var kPresentationService_SetPresentationConnection_Name = 1690979415;
  var kPresentationService_CloseConnection_Name = 330640710;
  var kPresentationService_Terminate_Name = 181047064;

  function PresentationServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PresentationService,
                                                   handleOrPtrInfo);
  }

  function PresentationServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PresentationService, associatedInterfacePtrInfo);
  }

  PresentationServiceAssociatedPtr.prototype =
      Object.create(PresentationServicePtr.prototype);
  PresentationServiceAssociatedPtr.prototype.constructor =
      PresentationServiceAssociatedPtr;

  function PresentationServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  PresentationServicePtr.prototype.setController = function() {
    return PresentationServiceProxy.prototype.setController
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.setController = function(controller) {
    var params_ = new PresentationService_SetController_Params();
    params_.controller = controller;
    var builder = new codec.MessageV0Builder(
        kPresentationService_SetController_Name,
        codec.align(PresentationService_SetController_Params.encodedSize));
    builder.encodeStruct(PresentationService_SetController_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.setReceiver = function() {
    return PresentationServiceProxy.prototype.setReceiver
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.setReceiver = function(receiver) {
    var params_ = new PresentationService_SetReceiver_Params();
    params_.receiver = receiver;
    var builder = new codec.MessageV0Builder(
        kPresentationService_SetReceiver_Name,
        codec.align(PresentationService_SetReceiver_Params.encodedSize));
    builder.encodeStruct(PresentationService_SetReceiver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.setDefaultPresentationUrls = function() {
    return PresentationServiceProxy.prototype.setDefaultPresentationUrls
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.setDefaultPresentationUrls = function(presentationUrls) {
    var params_ = new PresentationService_SetDefaultPresentationUrls_Params();
    params_.presentationUrls = presentationUrls;
    var builder = new codec.MessageV0Builder(
        kPresentationService_SetDefaultPresentationUrls_Name,
        codec.align(PresentationService_SetDefaultPresentationUrls_Params.encodedSize));
    builder.encodeStruct(PresentationService_SetDefaultPresentationUrls_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.listenForScreenAvailability = function() {
    return PresentationServiceProxy.prototype.listenForScreenAvailability
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.listenForScreenAvailability = function(availabilityUrl) {
    var params_ = new PresentationService_ListenForScreenAvailability_Params();
    params_.availabilityUrl = availabilityUrl;
    var builder = new codec.MessageV0Builder(
        kPresentationService_ListenForScreenAvailability_Name,
        codec.align(PresentationService_ListenForScreenAvailability_Params.encodedSize));
    builder.encodeStruct(PresentationService_ListenForScreenAvailability_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.stopListeningForScreenAvailability = function() {
    return PresentationServiceProxy.prototype.stopListeningForScreenAvailability
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.stopListeningForScreenAvailability = function(availabilityUrl) {
    var params_ = new PresentationService_StopListeningForScreenAvailability_Params();
    params_.availabilityUrl = availabilityUrl;
    var builder = new codec.MessageV0Builder(
        kPresentationService_StopListeningForScreenAvailability_Name,
        codec.align(PresentationService_StopListeningForScreenAvailability_Params.encodedSize));
    builder.encodeStruct(PresentationService_StopListeningForScreenAvailability_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.startPresentation = function() {
    return PresentationServiceProxy.prototype.startPresentation
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.startPresentation = function(presentationUrls) {
    var params_ = new PresentationService_StartPresentation_Params();
    params_.presentationUrls = presentationUrls;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPresentationService_StartPresentation_Name,
          codec.align(PresentationService_StartPresentation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PresentationService_StartPresentation_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PresentationService_StartPresentation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PresentationServicePtr.prototype.reconnectPresentation = function() {
    return PresentationServiceProxy.prototype.reconnectPresentation
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.reconnectPresentation = function(presentationUrls, presentationId) {
    var params_ = new PresentationService_ReconnectPresentation_Params();
    params_.presentationUrls = presentationUrls;
    params_.presentationId = presentationId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPresentationService_ReconnectPresentation_Name,
          codec.align(PresentationService_ReconnectPresentation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PresentationService_ReconnectPresentation_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PresentationService_ReconnectPresentation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PresentationServicePtr.prototype.setPresentationConnection = function() {
    return PresentationServiceProxy.prototype.setPresentationConnection
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.setPresentationConnection = function(presentationInfo, controllerConnectionPtr, receiverConnectionRequest) {
    var params_ = new PresentationService_SetPresentationConnection_Params();
    params_.presentationInfo = presentationInfo;
    params_.controllerConnectionPtr = controllerConnectionPtr;
    params_.receiverConnectionRequest = receiverConnectionRequest;
    var builder = new codec.MessageV0Builder(
        kPresentationService_SetPresentationConnection_Name,
        codec.align(PresentationService_SetPresentationConnection_Params.encodedSize));
    builder.encodeStruct(PresentationService_SetPresentationConnection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.closeConnection = function() {
    return PresentationServiceProxy.prototype.closeConnection
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.closeConnection = function(presentationUrl, presentationId) {
    var params_ = new PresentationService_CloseConnection_Params();
    params_.presentationUrl = presentationUrl;
    params_.presentationId = presentationId;
    var builder = new codec.MessageV0Builder(
        kPresentationService_CloseConnection_Name,
        codec.align(PresentationService_CloseConnection_Params.encodedSize));
    builder.encodeStruct(PresentationService_CloseConnection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationServicePtr.prototype.terminate = function() {
    return PresentationServiceProxy.prototype.terminate
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationServiceProxy.prototype.terminate = function(presentationUrl, presentationId) {
    var params_ = new PresentationService_Terminate_Params();
    params_.presentationUrl = presentationUrl;
    params_.presentationId = presentationId;
    var builder = new codec.MessageV0Builder(
        kPresentationService_Terminate_Name,
        codec.align(PresentationService_Terminate_Params.encodedSize));
    builder.encodeStruct(PresentationService_Terminate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PresentationServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  PresentationServiceStub.prototype.setController = function(controller) {
    return this.delegate_ && this.delegate_.setController && this.delegate_.setController(controller);
  }
  PresentationServiceStub.prototype.setReceiver = function(receiver) {
    return this.delegate_ && this.delegate_.setReceiver && this.delegate_.setReceiver(receiver);
  }
  PresentationServiceStub.prototype.setDefaultPresentationUrls = function(presentationUrls) {
    return this.delegate_ && this.delegate_.setDefaultPresentationUrls && this.delegate_.setDefaultPresentationUrls(presentationUrls);
  }
  PresentationServiceStub.prototype.listenForScreenAvailability = function(availabilityUrl) {
    return this.delegate_ && this.delegate_.listenForScreenAvailability && this.delegate_.listenForScreenAvailability(availabilityUrl);
  }
  PresentationServiceStub.prototype.stopListeningForScreenAvailability = function(availabilityUrl) {
    return this.delegate_ && this.delegate_.stopListeningForScreenAvailability && this.delegate_.stopListeningForScreenAvailability(availabilityUrl);
  }
  PresentationServiceStub.prototype.startPresentation = function(presentationUrls) {
    return this.delegate_ && this.delegate_.startPresentation && this.delegate_.startPresentation(presentationUrls);
  }
  PresentationServiceStub.prototype.reconnectPresentation = function(presentationUrls, presentationId) {
    return this.delegate_ && this.delegate_.reconnectPresentation && this.delegate_.reconnectPresentation(presentationUrls, presentationId);
  }
  PresentationServiceStub.prototype.setPresentationConnection = function(presentationInfo, controllerConnectionPtr, receiverConnectionRequest) {
    return this.delegate_ && this.delegate_.setPresentationConnection && this.delegate_.setPresentationConnection(presentationInfo, controllerConnectionPtr, receiverConnectionRequest);
  }
  PresentationServiceStub.prototype.closeConnection = function(presentationUrl, presentationId) {
    return this.delegate_ && this.delegate_.closeConnection && this.delegate_.closeConnection(presentationUrl, presentationId);
  }
  PresentationServiceStub.prototype.terminate = function(presentationUrl, presentationId) {
    return this.delegate_ && this.delegate_.terminate && this.delegate_.terminate(presentationUrl, presentationId);
  }

  PresentationServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationService_SetController_Name:
      var params = reader.decodeStruct(PresentationService_SetController_Params);
      this.setController(params.controller);
      return true;
    case kPresentationService_SetReceiver_Name:
      var params = reader.decodeStruct(PresentationService_SetReceiver_Params);
      this.setReceiver(params.receiver);
      return true;
    case kPresentationService_SetDefaultPresentationUrls_Name:
      var params = reader.decodeStruct(PresentationService_SetDefaultPresentationUrls_Params);
      this.setDefaultPresentationUrls(params.presentationUrls);
      return true;
    case kPresentationService_ListenForScreenAvailability_Name:
      var params = reader.decodeStruct(PresentationService_ListenForScreenAvailability_Params);
      this.listenForScreenAvailability(params.availabilityUrl);
      return true;
    case kPresentationService_StopListeningForScreenAvailability_Name:
      var params = reader.decodeStruct(PresentationService_StopListeningForScreenAvailability_Params);
      this.stopListeningForScreenAvailability(params.availabilityUrl);
      return true;
    case kPresentationService_SetPresentationConnection_Name:
      var params = reader.decodeStruct(PresentationService_SetPresentationConnection_Params);
      this.setPresentationConnection(params.presentationInfo, params.controllerConnectionPtr, params.receiverConnectionRequest);
      return true;
    case kPresentationService_CloseConnection_Name:
      var params = reader.decodeStruct(PresentationService_CloseConnection_Params);
      this.closeConnection(params.presentationUrl, params.presentationId);
      return true;
    case kPresentationService_Terminate_Name:
      var params = reader.decodeStruct(PresentationService_Terminate_Params);
      this.terminate(params.presentationUrl, params.presentationId);
      return true;
    default:
      return false;
    }
  };

  PresentationServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationService_StartPresentation_Name:
      var params = reader.decodeStruct(PresentationService_StartPresentation_Params);
      this.startPresentation(params.presentationUrls).then(function(response) {
        var responseParams =
            new PresentationService_StartPresentation_ResponseParams();
        responseParams.presentationInfo = response.presentationInfo;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kPresentationService_StartPresentation_Name,
            codec.align(PresentationService_StartPresentation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PresentationService_StartPresentation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPresentationService_ReconnectPresentation_Name:
      var params = reader.decodeStruct(PresentationService_ReconnectPresentation_Params);
      this.reconnectPresentation(params.presentationUrls, params.presentationId).then(function(response) {
        var responseParams =
            new PresentationService_ReconnectPresentation_ResponseParams();
        responseParams.presentationInfo = response.presentationInfo;
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kPresentationService_ReconnectPresentation_Name,
            codec.align(PresentationService_ReconnectPresentation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PresentationService_ReconnectPresentation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePresentationServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPresentationService_SetController_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_SetController_Params;
      break;
      case kPresentationService_SetReceiver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_SetReceiver_Params;
      break;
      case kPresentationService_SetDefaultPresentationUrls_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_SetDefaultPresentationUrls_Params;
      break;
      case kPresentationService_ListenForScreenAvailability_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_ListenForScreenAvailability_Params;
      break;
      case kPresentationService_StopListeningForScreenAvailability_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_StopListeningForScreenAvailability_Params;
      break;
      case kPresentationService_StartPresentation_Name:
        if (message.expectsResponse())
          paramsClass = PresentationService_StartPresentation_Params;
      break;
      case kPresentationService_ReconnectPresentation_Name:
        if (message.expectsResponse())
          paramsClass = PresentationService_ReconnectPresentation_Params;
      break;
      case kPresentationService_SetPresentationConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_SetPresentationConnection_Params;
      break;
      case kPresentationService_CloseConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_CloseConnection_Params;
      break;
      case kPresentationService_Terminate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationService_Terminate_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePresentationServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPresentationService_StartPresentation_Name:
        if (message.isResponse())
          paramsClass = PresentationService_StartPresentation_ResponseParams;
        break;
      case kPresentationService_ReconnectPresentation_Name:
        if (message.isResponse())
          paramsClass = PresentationService_ReconnectPresentation_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PresentationService = {
    name: 'blink.mojom.PresentationService',
    kVersion: 0,
    ptrClass: PresentationServicePtr,
    proxyClass: PresentationServiceProxy,
    stubClass: PresentationServiceStub,
    validateRequest: validatePresentationServiceRequest,
    validateResponse: validatePresentationServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/presentation/presentation.mojom',
    fuzzMethods: {
      setController: {
        params: PresentationService_SetController_Params,
      },
      setReceiver: {
        params: PresentationService_SetReceiver_Params,
      },
      setDefaultPresentationUrls: {
        params: PresentationService_SetDefaultPresentationUrls_Params,
      },
      listenForScreenAvailability: {
        params: PresentationService_ListenForScreenAvailability_Params,
      },
      stopListeningForScreenAvailability: {
        params: PresentationService_StopListeningForScreenAvailability_Params,
      },
      startPresentation: {
        params: PresentationService_StartPresentation_Params,
      },
      reconnectPresentation: {
        params: PresentationService_ReconnectPresentation_Params,
      },
      setPresentationConnection: {
        params: PresentationService_SetPresentationConnection_Params,
      },
      closeConnection: {
        params: PresentationService_CloseConnection_Params,
      },
      terminate: {
        params: PresentationService_Terminate_Params,
      },
    },
  };
  PresentationServiceStub.prototype.validator = validatePresentationServiceRequest;
  PresentationServiceProxy.prototype.validator = validatePresentationServiceResponse;
  var kPresentationController_OnScreenAvailabilityUpdated_Name = 1012555054;
  var kPresentationController_OnDefaultPresentationStarted_Name = 1012413515;
  var kPresentationController_OnConnectionStateChanged_Name = 105840109;
  var kPresentationController_OnConnectionClosed_Name = 2096317412;

  function PresentationControllerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PresentationController,
                                                   handleOrPtrInfo);
  }

  function PresentationControllerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PresentationController, associatedInterfacePtrInfo);
  }

  PresentationControllerAssociatedPtr.prototype =
      Object.create(PresentationControllerPtr.prototype);
  PresentationControllerAssociatedPtr.prototype.constructor =
      PresentationControllerAssociatedPtr;

  function PresentationControllerProxy(receiver) {
    this.receiver_ = receiver;
  }
  PresentationControllerPtr.prototype.onScreenAvailabilityUpdated = function() {
    return PresentationControllerProxy.prototype.onScreenAvailabilityUpdated
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationControllerProxy.prototype.onScreenAvailabilityUpdated = function(url, availability) {
    var params_ = new PresentationController_OnScreenAvailabilityUpdated_Params();
    params_.url = url;
    params_.availability = availability;
    var builder = new codec.MessageV0Builder(
        kPresentationController_OnScreenAvailabilityUpdated_Name,
        codec.align(PresentationController_OnScreenAvailabilityUpdated_Params.encodedSize));
    builder.encodeStruct(PresentationController_OnScreenAvailabilityUpdated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationControllerPtr.prototype.onDefaultPresentationStarted = function() {
    return PresentationControllerProxy.prototype.onDefaultPresentationStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationControllerProxy.prototype.onDefaultPresentationStarted = function(presentationInfo) {
    var params_ = new PresentationController_OnDefaultPresentationStarted_Params();
    params_.presentationInfo = presentationInfo;
    var builder = new codec.MessageV0Builder(
        kPresentationController_OnDefaultPresentationStarted_Name,
        codec.align(PresentationController_OnDefaultPresentationStarted_Params.encodedSize));
    builder.encodeStruct(PresentationController_OnDefaultPresentationStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationControllerPtr.prototype.onConnectionStateChanged = function() {
    return PresentationControllerProxy.prototype.onConnectionStateChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationControllerProxy.prototype.onConnectionStateChanged = function(presentationInfo, newState) {
    var params_ = new PresentationController_OnConnectionStateChanged_Params();
    params_.presentationInfo = presentationInfo;
    params_.newState = newState;
    var builder = new codec.MessageV0Builder(
        kPresentationController_OnConnectionStateChanged_Name,
        codec.align(PresentationController_OnConnectionStateChanged_Params.encodedSize));
    builder.encodeStruct(PresentationController_OnConnectionStateChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PresentationControllerPtr.prototype.onConnectionClosed = function() {
    return PresentationControllerProxy.prototype.onConnectionClosed
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationControllerProxy.prototype.onConnectionClosed = function(presentationInfo, reason, message) {
    var params_ = new PresentationController_OnConnectionClosed_Params();
    params_.presentationInfo = presentationInfo;
    params_.reason = reason;
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kPresentationController_OnConnectionClosed_Name,
        codec.align(PresentationController_OnConnectionClosed_Params.encodedSize));
    builder.encodeStruct(PresentationController_OnConnectionClosed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PresentationControllerStub(delegate) {
    this.delegate_ = delegate;
  }
  PresentationControllerStub.prototype.onScreenAvailabilityUpdated = function(url, availability) {
    return this.delegate_ && this.delegate_.onScreenAvailabilityUpdated && this.delegate_.onScreenAvailabilityUpdated(url, availability);
  }
  PresentationControllerStub.prototype.onDefaultPresentationStarted = function(presentationInfo) {
    return this.delegate_ && this.delegate_.onDefaultPresentationStarted && this.delegate_.onDefaultPresentationStarted(presentationInfo);
  }
  PresentationControllerStub.prototype.onConnectionStateChanged = function(presentationInfo, newState) {
    return this.delegate_ && this.delegate_.onConnectionStateChanged && this.delegate_.onConnectionStateChanged(presentationInfo, newState);
  }
  PresentationControllerStub.prototype.onConnectionClosed = function(presentationInfo, reason, message) {
    return this.delegate_ && this.delegate_.onConnectionClosed && this.delegate_.onConnectionClosed(presentationInfo, reason, message);
  }

  PresentationControllerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationController_OnScreenAvailabilityUpdated_Name:
      var params = reader.decodeStruct(PresentationController_OnScreenAvailabilityUpdated_Params);
      this.onScreenAvailabilityUpdated(params.url, params.availability);
      return true;
    case kPresentationController_OnDefaultPresentationStarted_Name:
      var params = reader.decodeStruct(PresentationController_OnDefaultPresentationStarted_Params);
      this.onDefaultPresentationStarted(params.presentationInfo);
      return true;
    case kPresentationController_OnConnectionStateChanged_Name:
      var params = reader.decodeStruct(PresentationController_OnConnectionStateChanged_Params);
      this.onConnectionStateChanged(params.presentationInfo, params.newState);
      return true;
    case kPresentationController_OnConnectionClosed_Name:
      var params = reader.decodeStruct(PresentationController_OnConnectionClosed_Params);
      this.onConnectionClosed(params.presentationInfo, params.reason, params.message);
      return true;
    default:
      return false;
    }
  };

  PresentationControllerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePresentationControllerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPresentationController_OnScreenAvailabilityUpdated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationController_OnScreenAvailabilityUpdated_Params;
      break;
      case kPresentationController_OnDefaultPresentationStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationController_OnDefaultPresentationStarted_Params;
      break;
      case kPresentationController_OnConnectionStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationController_OnConnectionStateChanged_Params;
      break;
      case kPresentationController_OnConnectionClosed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationController_OnConnectionClosed_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePresentationControllerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PresentationController = {
    name: 'blink.mojom.PresentationController',
    kVersion: 0,
    ptrClass: PresentationControllerPtr,
    proxyClass: PresentationControllerProxy,
    stubClass: PresentationControllerStub,
    validateRequest: validatePresentationControllerRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/presentation/presentation.mojom',
    fuzzMethods: {
      onScreenAvailabilityUpdated: {
        params: PresentationController_OnScreenAvailabilityUpdated_Params,
      },
      onDefaultPresentationStarted: {
        params: PresentationController_OnDefaultPresentationStarted_Params,
      },
      onConnectionStateChanged: {
        params: PresentationController_OnConnectionStateChanged_Params,
      },
      onConnectionClosed: {
        params: PresentationController_OnConnectionClosed_Params,
      },
    },
  };
  PresentationControllerStub.prototype.validator = validatePresentationControllerRequest;
  PresentationControllerProxy.prototype.validator = null;
  var kPresentationReceiver_OnReceiverConnectionAvailable_Name = 1018610472;

  function PresentationReceiverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PresentationReceiver,
                                                   handleOrPtrInfo);
  }

  function PresentationReceiverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PresentationReceiver, associatedInterfacePtrInfo);
  }

  PresentationReceiverAssociatedPtr.prototype =
      Object.create(PresentationReceiverPtr.prototype);
  PresentationReceiverAssociatedPtr.prototype.constructor =
      PresentationReceiverAssociatedPtr;

  function PresentationReceiverProxy(receiver) {
    this.receiver_ = receiver;
  }
  PresentationReceiverPtr.prototype.onReceiverConnectionAvailable = function() {
    return PresentationReceiverProxy.prototype.onReceiverConnectionAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  PresentationReceiverProxy.prototype.onReceiverConnectionAvailable = function(info, controllerConnection, receiverConnectionRequest) {
    var params_ = new PresentationReceiver_OnReceiverConnectionAvailable_Params();
    params_.info = info;
    params_.controllerConnection = controllerConnection;
    params_.receiverConnectionRequest = receiverConnectionRequest;
    var builder = new codec.MessageV0Builder(
        kPresentationReceiver_OnReceiverConnectionAvailable_Name,
        codec.align(PresentationReceiver_OnReceiverConnectionAvailable_Params.encodedSize));
    builder.encodeStruct(PresentationReceiver_OnReceiverConnectionAvailable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PresentationReceiverStub(delegate) {
    this.delegate_ = delegate;
  }
  PresentationReceiverStub.prototype.onReceiverConnectionAvailable = function(info, controllerConnection, receiverConnectionRequest) {
    return this.delegate_ && this.delegate_.onReceiverConnectionAvailable && this.delegate_.onReceiverConnectionAvailable(info, controllerConnection, receiverConnectionRequest);
  }

  PresentationReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPresentationReceiver_OnReceiverConnectionAvailable_Name:
      var params = reader.decodeStruct(PresentationReceiver_OnReceiverConnectionAvailable_Params);
      this.onReceiverConnectionAvailable(params.info, params.controllerConnection, params.receiverConnectionRequest);
      return true;
    default:
      return false;
    }
  };

  PresentationReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePresentationReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPresentationReceiver_OnReceiverConnectionAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PresentationReceiver_OnReceiverConnectionAvailable_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePresentationReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PresentationReceiver = {
    name: 'blink.mojom.PresentationReceiver',
    kVersion: 0,
    ptrClass: PresentationReceiverPtr,
    proxyClass: PresentationReceiverProxy,
    stubClass: PresentationReceiverStub,
    validateRequest: validatePresentationReceiverRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/presentation/presentation.mojom',
    fuzzMethods: {
      onReceiverConnectionAvailable: {
        params: PresentationReceiver_OnReceiverConnectionAvailable_Params,
      },
    },
  };
  PresentationReceiverStub.prototype.validator = validatePresentationReceiverRequest;
  PresentationReceiverProxy.prototype.validator = null;
  exports.ScreenAvailability = ScreenAvailability;
  exports.PresentationConnectionState = PresentationConnectionState;
  exports.PresentationConnectionCloseReason = PresentationConnectionCloseReason;
  exports.PresentationErrorType = PresentationErrorType;
  exports.PresentationInfo = PresentationInfo;
  exports.PresentationError = PresentationError;
  exports.PresentationConnectionMessage = PresentationConnectionMessage;
  exports.PresentationConnection = PresentationConnection;
  exports.PresentationConnectionPtr = PresentationConnectionPtr;
  exports.PresentationConnectionAssociatedPtr = PresentationConnectionAssociatedPtr;
  exports.PresentationService = PresentationService;
  exports.PresentationServicePtr = PresentationServicePtr;
  exports.PresentationServiceAssociatedPtr = PresentationServiceAssociatedPtr;
  exports.PresentationController = PresentationController;
  exports.PresentationControllerPtr = PresentationControllerPtr;
  exports.PresentationControllerAssociatedPtr = PresentationControllerAssociatedPtr;
  exports.PresentationReceiver = PresentationReceiver;
  exports.PresentationReceiverPtr = PresentationReceiverPtr;
  exports.PresentationReceiverAssociatedPtr = PresentationReceiverAssociatedPtr;
})();