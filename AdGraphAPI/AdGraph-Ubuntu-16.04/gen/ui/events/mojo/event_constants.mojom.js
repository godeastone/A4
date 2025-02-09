// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/events/mojo/event_constants.mojom';
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


  var kEventFlagNone = 0x00000;
  var kEventFlagIsSynthesized = 0x00001;
  var kEventFlagShiftDown = 0x00002;
  var kEventFlagControlDown = 0x00004;
  var kEventFlagAltDown = 0x00008;
  var kEventFlagCommandDown = 0x00010;
  var kEventFlagAltgrDown = 0x00020;
  var kEventFlagMod3Down = 0x00040;
  var kEventFlagNumLockOn = 0x00080;
  var kEventFlagCapsLockOn = 0x00100;
  var kEventFlagScrollLockOn = 0x00200;
  var kEventFlagLeftMouseButton = 0x00400;
  var kEventFlagMiddleMouseButton = 0x00800;
  var kEventFlagRightMouseButton = 0x01000;
  var kEventFlagBackMouseButton = 0x02000;
  var kEventFlagForwardMouseButton = 0x04000;
  var kMouseEventFlagIsDoubleClick = 0x08000;
  var kMouseEventFlagIsTripleClick = 0x10000;
  var kMouseEventFlagIsNonClient = 0x20000;
  var AcceleratorPhase = {};
  AcceleratorPhase.PRE_TARGET = 0;
  AcceleratorPhase.POST_TARGET = AcceleratorPhase.PRE_TARGET + 1;

  AcceleratorPhase.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  AcceleratorPhase.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var EventType = {};
  EventType.UNKNOWN = 0;
  EventType.KEY_PRESSED = EventType.UNKNOWN + 1;
  EventType.KEY_RELEASED = EventType.KEY_PRESSED + 1;
  EventType.POINTER_DOWN = EventType.KEY_RELEASED + 1;
  EventType.POINTER_MOVED = EventType.POINTER_DOWN + 1;
  EventType.POINTER_UP = EventType.POINTER_MOVED + 1;
  EventType.POINTER_CANCELLED = EventType.POINTER_UP + 1;
  EventType.POINTER_ENTERED = EventType.POINTER_CANCELLED + 1;
  EventType.POINTER_EXITED = EventType.POINTER_ENTERED + 1;
  EventType.POINTER_WHEEL_CHANGED = EventType.POINTER_EXITED + 1;
  EventType.POINTER_CAPTURE_CHANGED = EventType.POINTER_WHEEL_CHANGED + 1;
  EventType.GESTURE_TAP = EventType.POINTER_CAPTURE_CHANGED + 1;
  EventType.SCROLL = EventType.GESTURE_TAP + 1;
  EventType.SCROLL_FLING_START = EventType.SCROLL + 1;
  EventType.SCROLL_FLING_CANCEL = EventType.SCROLL_FLING_START + 1;

  EventType.isKnownEnumValue = function(value) {
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
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
      return true;
    }
    return false;
  };

  EventType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PointerKind = {};
  PointerKind.MOUSE = 0;
  PointerKind.PEN = PointerKind.MOUSE + 1;
  PointerKind.TOUCH = PointerKind.PEN + 1;
  PointerKind.ERASER = PointerKind.TOUCH + 1;

  PointerKind.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  PointerKind.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var WheelMode = {};
  WheelMode.PIXEL = 0;
  WheelMode.LINE = WheelMode.PIXEL + 1;
  WheelMode.PAGE = WheelMode.LINE + 1;
  WheelMode.SCALING = WheelMode.PAGE + 1;

  WheelMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  WheelMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ScrollEventPhase = {};
  ScrollEventPhase.kNone = 0;
  ScrollEventPhase.kBegan = ScrollEventPhase.kNone + 1;
  ScrollEventPhase.kUpdate = ScrollEventPhase.kBegan + 1;
  ScrollEventPhase.kEnd = ScrollEventPhase.kUpdate + 1;

  ScrollEventPhase.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  ScrollEventPhase.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var EventMomentumPhase = {};
  EventMomentumPhase.NONE = 0;
  EventMomentumPhase.BEGAN = EventMomentumPhase.NONE + 1;
  EventMomentumPhase.MAY_BEGIN = EventMomentumPhase.BEGAN + 1;
  EventMomentumPhase.INERTIAL_UPDATE = EventMomentumPhase.MAY_BEGIN + 1;
  EventMomentumPhase.END = EventMomentumPhase.INERTIAL_UPDATE + 1;

  EventMomentumPhase.isKnownEnumValue = function(value) {
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

  EventMomentumPhase.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.kEventFlagNone = kEventFlagNone;
  exports.kEventFlagIsSynthesized = kEventFlagIsSynthesized;
  exports.kEventFlagShiftDown = kEventFlagShiftDown;
  exports.kEventFlagControlDown = kEventFlagControlDown;
  exports.kEventFlagAltDown = kEventFlagAltDown;
  exports.kEventFlagCommandDown = kEventFlagCommandDown;
  exports.kEventFlagAltgrDown = kEventFlagAltgrDown;
  exports.kEventFlagMod3Down = kEventFlagMod3Down;
  exports.kEventFlagNumLockOn = kEventFlagNumLockOn;
  exports.kEventFlagCapsLockOn = kEventFlagCapsLockOn;
  exports.kEventFlagScrollLockOn = kEventFlagScrollLockOn;
  exports.kEventFlagLeftMouseButton = kEventFlagLeftMouseButton;
  exports.kEventFlagMiddleMouseButton = kEventFlagMiddleMouseButton;
  exports.kEventFlagRightMouseButton = kEventFlagRightMouseButton;
  exports.kEventFlagBackMouseButton = kEventFlagBackMouseButton;
  exports.kEventFlagForwardMouseButton = kEventFlagForwardMouseButton;
  exports.kMouseEventFlagIsDoubleClick = kMouseEventFlagIsDoubleClick;
  exports.kMouseEventFlagIsTripleClick = kMouseEventFlagIsTripleClick;
  exports.kMouseEventFlagIsNonClient = kMouseEventFlagIsNonClient;
  exports.AcceleratorPhase = AcceleratorPhase;
  exports.EventType = EventType;
  exports.PointerKind = PointerKind;
  exports.WheelMode = WheelMode;
  exports.ScrollEventPhase = ScrollEventPhase;
  exports.EventMomentumPhase = EventMomentumPhase;
})();