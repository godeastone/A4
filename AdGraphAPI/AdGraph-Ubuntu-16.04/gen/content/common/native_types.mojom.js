// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/native_types.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');


  var ScrollbarButtonsPlacement = {};

  ScrollbarButtonsPlacement.isKnownEnumValue = function(value) {
    return false;
  };

  ScrollbarButtonsPlacement.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ScrollerStyle = {};

  ScrollerStyle.isKnownEnumValue = function(value) {
    return false;
  };

  ScrollerStyle.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var V8CacheOptions = {};

  V8CacheOptions.isKnownEnumValue = function(value) {
    return false;
  };

  V8CacheOptions.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var NetworkConnectionType = {};

  NetworkConnectionType.isKnownEnumValue = function(value) {
    return false;
  };

  NetworkConnectionType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var WebPopupType = {};

  WebPopupType.isKnownEnumValue = function(value) {
    return false;
  };

  WebPopupType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Button = {};

  Button.isKnownEnumValue = function(value) {
    return false;
  };

  Button.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PointerType = {};

  PointerType.isKnownEnumValue = function(value) {
    return false;
  };

  PointerType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var InputEventAckState = {};

  InputEventAckState.isKnownEnumValue = function(value) {
    return false;
  };

  InputEventAckState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var InputEventAckSource = {};

  InputEventAckSource.isKnownEnumValue = function(value) {
    return false;
  };

  InputEventAckSource.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var EventType = {};

  EventType.isKnownEnumValue = function(value) {
    return false;
  };

  EventType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Cancelability = {};

  Cancelability.isKnownEnumValue = function(value) {
    return false;
  };

  Cancelability.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GestureDevice = {};

  GestureDevice.isKnownEnumValue = function(value) {
    return false;
  };

  GestureDevice.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ScrollUnits = {};

  ScrollUnits.isKnownEnumValue = function(value) {
    return false;
  };

  ScrollUnits.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var InertialPhaseState = {};

  InertialPhaseState.isKnownEnumValue = function(value) {
    return false;
  };

  InertialPhaseState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TouchState = {};

  TouchState.isKnownEnumValue = function(value) {
    return false;
  };

  TouchState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var TouchAction = {};

  TouchAction.isKnownEnumValue = function(value) {
    return false;
  };

  TouchAction.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FrameOwnerProperties(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameOwnerProperties.prototype.initDefaults_ = function() {
  };
  FrameOwnerProperties.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameOwnerProperties.generate = function(generator_) {
    var generated = new FrameOwnerProperties;
    return generated;
  };

  FrameOwnerProperties.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameOwnerProperties.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameOwnerProperties.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameOwnerProperties.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameOwnerProperties.validate = function(messageValidator, offset) {
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

  FrameOwnerProperties.encodedSize = codec.kStructHeaderSize + 0;

  FrameOwnerProperties.decode = function(decoder) {
    var packed;
    var val = new FrameOwnerProperties();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameOwnerProperties.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameOwnerProperties.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameReplicationState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameReplicationState.prototype.initDefaults_ = function() {
  };
  FrameReplicationState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameReplicationState.generate = function(generator_) {
    var generated = new FrameReplicationState;
    return generated;
  };

  FrameReplicationState.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameReplicationState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameReplicationState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameReplicationState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameReplicationState.validate = function(messageValidator, offset) {
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

  FrameReplicationState.encodedSize = codec.kStructHeaderSize + 0;

  FrameReplicationState.decode = function(decoder) {
    var packed;
    var val = new FrameReplicationState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameReplicationState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameReplicationState.encodedSize);
    encoder.writeUint32(0);
  };
  function RendererPreferences(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererPreferences.prototype.initDefaults_ = function() {
  };
  RendererPreferences.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererPreferences.generate = function(generator_) {
    var generated = new RendererPreferences;
    return generated;
  };

  RendererPreferences.prototype.mutate = function(mutator_) {
    return this;
  };
  RendererPreferences.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererPreferences.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererPreferences.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererPreferences.validate = function(messageValidator, offset) {
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

  RendererPreferences.encodedSize = codec.kStructHeaderSize + 0;

  RendererPreferences.decode = function(decoder) {
    var packed;
    var val = new RendererPreferences();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererPreferences.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererPreferences.encodedSize);
    encoder.writeUint32(0);
  };
  function VisualProperties(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VisualProperties.prototype.initDefaults_ = function() {
  };
  VisualProperties.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VisualProperties.generate = function(generator_) {
    var generated = new VisualProperties;
    return generated;
  };

  VisualProperties.prototype.mutate = function(mutator_) {
    return this;
  };
  VisualProperties.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VisualProperties.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VisualProperties.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VisualProperties.validate = function(messageValidator, offset) {
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

  VisualProperties.encodedSize = codec.kStructHeaderSize + 0;

  VisualProperties.decode = function(decoder) {
    var packed;
    var val = new VisualProperties();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  VisualProperties.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VisualProperties.encodedSize);
    encoder.writeUint32(0);
  };
  function WebPreferences(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebPreferences.prototype.initDefaults_ = function() {
  };
  WebPreferences.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebPreferences.generate = function(generator_) {
    var generated = new WebPreferences;
    return generated;
  };

  WebPreferences.prototype.mutate = function(mutator_) {
    return this;
  };
  WebPreferences.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebPreferences.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebPreferences.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebPreferences.validate = function(messageValidator, offset) {
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

  WebPreferences.encodedSize = codec.kStructHeaderSize + 0;

  WebPreferences.decode = function(decoder) {
    var packed;
    var val = new WebPreferences();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebPreferences.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebPreferences.encodedSize);
    encoder.writeUint32(0);
  };
  function EditCommand(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EditCommand.prototype.initDefaults_ = function() {
  };
  EditCommand.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EditCommand.generate = function(generator_) {
    var generated = new EditCommand;
    return generated;
  };

  EditCommand.prototype.mutate = function(mutator_) {
    return this;
  };
  EditCommand.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EditCommand.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EditCommand.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EditCommand.validate = function(messageValidator, offset) {
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

  EditCommand.encodedSize = codec.kStructHeaderSize + 0;

  EditCommand.decode = function(decoder) {
    var packed;
    var val = new EditCommand();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  EditCommand.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EditCommand.encodedSize);
    encoder.writeUint32(0);
  };
  function DidOverscrollParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DidOverscrollParams.prototype.initDefaults_ = function() {
  };
  DidOverscrollParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DidOverscrollParams.generate = function(generator_) {
    var generated = new DidOverscrollParams;
    return generated;
  };

  DidOverscrollParams.prototype.mutate = function(mutator_) {
    return this;
  };
  DidOverscrollParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DidOverscrollParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DidOverscrollParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DidOverscrollParams.validate = function(messageValidator, offset) {
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

  DidOverscrollParams.encodedSize = codec.kStructHeaderSize + 0;

  DidOverscrollParams.decode = function(decoder) {
    var packed;
    var val = new DidOverscrollParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DidOverscrollParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DidOverscrollParams.encodedSize);
    encoder.writeUint32(0);
  };
  function SyntheticSmoothDrag(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyntheticSmoothDrag.prototype.initDefaults_ = function() {
  };
  SyntheticSmoothDrag.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyntheticSmoothDrag.generate = function(generator_) {
    var generated = new SyntheticSmoothDrag;
    return generated;
  };

  SyntheticSmoothDrag.prototype.mutate = function(mutator_) {
    return this;
  };
  SyntheticSmoothDrag.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyntheticSmoothDrag.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyntheticSmoothDrag.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyntheticSmoothDrag.validate = function(messageValidator, offset) {
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

  SyntheticSmoothDrag.encodedSize = codec.kStructHeaderSize + 0;

  SyntheticSmoothDrag.decode = function(decoder) {
    var packed;
    var val = new SyntheticSmoothDrag();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyntheticSmoothDrag.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyntheticSmoothDrag.encodedSize);
    encoder.writeUint32(0);
  };
  function SyntheticSmoothScroll(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyntheticSmoothScroll.prototype.initDefaults_ = function() {
  };
  SyntheticSmoothScroll.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyntheticSmoothScroll.generate = function(generator_) {
    var generated = new SyntheticSmoothScroll;
    return generated;
  };

  SyntheticSmoothScroll.prototype.mutate = function(mutator_) {
    return this;
  };
  SyntheticSmoothScroll.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyntheticSmoothScroll.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyntheticSmoothScroll.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyntheticSmoothScroll.validate = function(messageValidator, offset) {
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

  SyntheticSmoothScroll.encodedSize = codec.kStructHeaderSize + 0;

  SyntheticSmoothScroll.decode = function(decoder) {
    var packed;
    var val = new SyntheticSmoothScroll();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyntheticSmoothScroll.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyntheticSmoothScroll.encodedSize);
    encoder.writeUint32(0);
  };
  function SyntheticPinch(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyntheticPinch.prototype.initDefaults_ = function() {
  };
  SyntheticPinch.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyntheticPinch.generate = function(generator_) {
    var generated = new SyntheticPinch;
    return generated;
  };

  SyntheticPinch.prototype.mutate = function(mutator_) {
    return this;
  };
  SyntheticPinch.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyntheticPinch.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyntheticPinch.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyntheticPinch.validate = function(messageValidator, offset) {
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

  SyntheticPinch.encodedSize = codec.kStructHeaderSize + 0;

  SyntheticPinch.decode = function(decoder) {
    var packed;
    var val = new SyntheticPinch();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyntheticPinch.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyntheticPinch.encodedSize);
    encoder.writeUint32(0);
  };
  function SyntheticTap(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyntheticTap.prototype.initDefaults_ = function() {
  };
  SyntheticTap.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyntheticTap.generate = function(generator_) {
    var generated = new SyntheticTap;
    return generated;
  };

  SyntheticTap.prototype.mutate = function(mutator_) {
    return this;
  };
  SyntheticTap.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyntheticTap.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyntheticTap.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyntheticTap.validate = function(messageValidator, offset) {
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

  SyntheticTap.encodedSize = codec.kStructHeaderSize + 0;

  SyntheticTap.decode = function(decoder) {
    var packed;
    var val = new SyntheticTap();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyntheticTap.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyntheticTap.encodedSize);
    encoder.writeUint32(0);
  };
  function SyntheticPointerAction(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SyntheticPointerAction.prototype.initDefaults_ = function() {
  };
  SyntheticPointerAction.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SyntheticPointerAction.generate = function(generator_) {
    var generated = new SyntheticPointerAction;
    return generated;
  };

  SyntheticPointerAction.prototype.mutate = function(mutator_) {
    return this;
  };
  SyntheticPointerAction.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SyntheticPointerAction.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SyntheticPointerAction.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SyntheticPointerAction.validate = function(messageValidator, offset) {
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

  SyntheticPointerAction.encodedSize = codec.kStructHeaderSize + 0;

  SyntheticPointerAction.decode = function(decoder) {
    var packed;
    var val = new SyntheticPointerAction();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SyntheticPointerAction.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SyntheticPointerAction.encodedSize);
    encoder.writeUint32(0);
  };
  exports.ScrollbarButtonsPlacement = ScrollbarButtonsPlacement;
  exports.ScrollerStyle = ScrollerStyle;
  exports.V8CacheOptions = V8CacheOptions;
  exports.NetworkConnectionType = NetworkConnectionType;
  exports.WebPopupType = WebPopupType;
  exports.Button = Button;
  exports.PointerType = PointerType;
  exports.InputEventAckState = InputEventAckState;
  exports.InputEventAckSource = InputEventAckSource;
  exports.EventType = EventType;
  exports.Cancelability = Cancelability;
  exports.GestureDevice = GestureDevice;
  exports.ScrollUnits = ScrollUnits;
  exports.InertialPhaseState = InertialPhaseState;
  exports.TouchState = TouchState;
  exports.TouchAction = TouchAction;
  exports.FrameOwnerProperties = FrameOwnerProperties;
  exports.FrameReplicationState = FrameReplicationState;
  exports.RendererPreferences = RendererPreferences;
  exports.VisualProperties = VisualProperties;
  exports.WebPreferences = WebPreferences;
  exports.EditCommand = EditCommand;
  exports.DidOverscrollParams = DidOverscrollParams;
  exports.SyntheticSmoothDrag = SyntheticSmoothDrag;
  exports.SyntheticSmoothScroll = SyntheticSmoothScroll;
  exports.SyntheticPinch = SyntheticPinch;
  exports.SyntheticTap = SyntheticTap;
  exports.SyntheticPointerAction = SyntheticPointerAction;
})();