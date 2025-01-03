// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_manager_constants.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var display$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display.mojom', '../../../../ui/display/mojo/display.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var kResizeBehaviorNone = 0;
  var kResizeBehaviorCanResize = 1;
  var kResizeBehaviorCanMaximize = 2;
  var kResizeBehaviorCanMinimize = 4;
  var kCursorMultiplierForExternalDisplays = 1.2;
  var WindowManagerErrorCode = {};
  WindowManagerErrorCode.SUCCESS = 0;
  WindowManagerErrorCode.ACCESS_DENIED = WindowManagerErrorCode.SUCCESS + 1;

  WindowManagerErrorCode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  WindowManagerErrorCode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ShowState = {};
  ShowState.DEFAULT = 0;
  ShowState.NORMAL = ShowState.DEFAULT + 1;
  ShowState.MINIMIZED = ShowState.NORMAL + 1;
  ShowState.MAXIMIZED = ShowState.MINIMIZED + 1;
  ShowState.INACTIVE = ShowState.MAXIMIZED + 1;
  ShowState.FULLSCREEN = ShowState.INACTIVE + 1;

  ShowState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  ShowState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var MoveLoopSource = {};
  MoveLoopSource.MOUSE = 0;
  MoveLoopSource.TOUCH = MoveLoopSource.MOUSE + 1;

  MoveLoopSource.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  MoveLoopSource.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var WindowType = {};
  WindowType.WINDOW = 0;
  WindowType.PANEL = WindowType.WINDOW + 1;
  WindowType.WINDOW_FRAMELESS = WindowType.PANEL + 1;
  WindowType.CONTROL = WindowType.WINDOW_FRAMELESS + 1;
  WindowType.POPUP = WindowType.CONTROL + 1;
  WindowType.MENU = WindowType.POPUP + 1;
  WindowType.TOOLTIP = WindowType.MENU + 1;
  WindowType.BUBBLE = WindowType.TOOLTIP + 1;
  WindowType.DRAG = WindowType.BUBBLE + 1;
  WindowType.UNKNOWN = WindowType.DRAG + 1;

  WindowType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    }
    return false;
  };

  WindowType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FrameDecorationValues(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameDecorationValues.prototype.initDefaults_ = function() {
    this.normalClientAreaInsets = null;
    this.maximizedClientAreaInsets = null;
    this.maxTitleBarButtonWidth = 0;
  };
  FrameDecorationValues.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameDecorationValues.generate = function(generator_) {
    var generated = new FrameDecorationValues;
    generated.normalClientAreaInsets = generator_.generateStruct(gfx.mojom.Insets, false);
    generated.maximizedClientAreaInsets = generator_.generateStruct(gfx.mojom.Insets, false);
    generated.maxTitleBarButtonWidth = generator_.generateUint32();
    return generated;
  };

  FrameDecorationValues.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.normalClientAreaInsets = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maximizedClientAreaInsets = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxTitleBarButtonWidth = mutator_.mutateUint32(this.maxTitleBarButtonWidth);
    }
    return this;
  };
  FrameDecorationValues.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameDecorationValues.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameDecorationValues.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameDecorationValues.validate = function(messageValidator, offset) {
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


    // validate FrameDecorationValues.normalClientAreaInsets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameDecorationValues.maximizedClientAreaInsets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FrameDecorationValues.encodedSize = codec.kStructHeaderSize + 24;

  FrameDecorationValues.decode = function(decoder) {
    var packed;
    var val = new FrameDecorationValues();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.normalClientAreaInsets = decoder.decodeStructPointer(geometry$.Insets);
    val.maximizedClientAreaInsets = decoder.decodeStructPointer(geometry$.Insets);
    val.maxTitleBarButtonWidth = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameDecorationValues.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameDecorationValues.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Insets, val.normalClientAreaInsets);
    encoder.encodeStructPointer(geometry$.Insets, val.maximizedClientAreaInsets);
    encoder.encodeStruct(codec.Uint32, val.maxTitleBarButtonWidth);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WsDisplay(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WsDisplay.prototype.initDefaults_ = function() {
    this.display = null;
    this.frameDecorationValues = null;
  };
  WsDisplay.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WsDisplay.generate = function(generator_) {
    var generated = new WsDisplay;
    generated.display = generator_.generateStruct(display.mojom.Display, false);
    generated.frameDecorationValues = generator_.generateStruct(ui.mojom.FrameDecorationValues, false);
    return generated;
  };

  WsDisplay.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateStruct(display.mojom.Display, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameDecorationValues = mutator_.mutateStruct(ui.mojom.FrameDecorationValues, false);
    }
    return this;
  };
  WsDisplay.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WsDisplay.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WsDisplay.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WsDisplay.validate = function(messageValidator, offset) {
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


    // validate WsDisplay.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, display$.Display, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WsDisplay.frameDecorationValues
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, FrameDecorationValues, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WsDisplay.encodedSize = codec.kStructHeaderSize + 16;

  WsDisplay.decode = function(decoder) {
    var packed;
    var val = new WsDisplay();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(display$.Display);
    val.frameDecorationValues = decoder.decodeStructPointer(FrameDecorationValues);
    return val;
  };

  WsDisplay.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WsDisplay.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(display$.Display, val.display);
    encoder.encodeStructPointer(FrameDecorationValues, val.frameDecorationValues);
  };
  function WmViewportMetrics(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WmViewportMetrics.prototype.initDefaults_ = function() {
    this.boundsInPixels = null;
    this.deviceScaleFactor = 0;
    this.uiScaleFactor = 0;
  };
  WmViewportMetrics.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WmViewportMetrics.generate = function(generator_) {
    var generated = new WmViewportMetrics;
    generated.boundsInPixels = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.deviceScaleFactor = generator_.generateFloat();
    generated.uiScaleFactor = generator_.generateFloat();
    return generated;
  };

  WmViewportMetrics.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.boundsInPixels = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.deviceScaleFactor = mutator_.mutateFloat(this.deviceScaleFactor);
    }
    if (mutator_.chooseMutateField()) {
      this.uiScaleFactor = mutator_.mutateFloat(this.uiScaleFactor);
    }
    return this;
  };
  WmViewportMetrics.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WmViewportMetrics.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WmViewportMetrics.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WmViewportMetrics.validate = function(messageValidator, offset) {
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


    // validate WmViewportMetrics.boundsInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WmViewportMetrics.encodedSize = codec.kStructHeaderSize + 16;

  WmViewportMetrics.decode = function(decoder) {
    var packed;
    var val = new WmViewportMetrics();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.boundsInPixels = decoder.decodeStructPointer(geometry$.Rect);
    val.deviceScaleFactor = decoder.decodeStruct(codec.Float);
    val.uiScaleFactor = decoder.decodeStruct(codec.Float);
    return val;
  };

  WmViewportMetrics.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WmViewportMetrics.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.boundsInPixels);
    encoder.encodeStruct(codec.Float, val.deviceScaleFactor);
    encoder.encodeStruct(codec.Float, val.uiScaleFactor);
  };
  function BlockingContainers(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlockingContainers.prototype.initDefaults_ = function() {
    this.systemModalContainerId = 0;
    this.minContainerId = 0;
  };
  BlockingContainers.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlockingContainers.generate = function(generator_) {
    var generated = new BlockingContainers;
    generated.systemModalContainerId = generator_.generateUint64();
    generated.minContainerId = generator_.generateUint64();
    return generated;
  };

  BlockingContainers.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.systemModalContainerId = mutator_.mutateUint64(this.systemModalContainerId);
    }
    if (mutator_.chooseMutateField()) {
      this.minContainerId = mutator_.mutateUint64(this.minContainerId);
    }
    return this;
  };
  BlockingContainers.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlockingContainers.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlockingContainers.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlockingContainers.validate = function(messageValidator, offset) {
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



    return validator.validationError.NONE;
  };

  BlockingContainers.encodedSize = codec.kStructHeaderSize + 16;

  BlockingContainers.decode = function(decoder) {
    var packed;
    var val = new BlockingContainers();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.systemModalContainerId = decoder.decodeStruct(codec.Uint64);
    val.minContainerId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  BlockingContainers.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlockingContainers.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.systemModalContainerId);
    encoder.encodeStruct(codec.Uint64, val.minContainerId);
  };
  exports.kResizeBehaviorNone = kResizeBehaviorNone;
  exports.kResizeBehaviorCanResize = kResizeBehaviorCanResize;
  exports.kResizeBehaviorCanMaximize = kResizeBehaviorCanMaximize;
  exports.kResizeBehaviorCanMinimize = kResizeBehaviorCanMinimize;
  exports.kCursorMultiplierForExternalDisplays = kCursorMultiplierForExternalDisplays;
  exports.WindowManagerErrorCode = WindowManagerErrorCode;
  exports.ShowState = ShowState;
  exports.MoveLoopSource = MoveLoopSource;
  exports.WindowType = WindowType;
  exports.FrameDecorationValues = FrameDecorationValues;
  exports.WsDisplay = WsDisplay;
  exports.WmViewportMetrics = WmViewportMetrics;
  exports.BlockingContainers = BlockingContainers;
})();