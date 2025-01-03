// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_tree_constants.mojom';
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
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var kDropEffectNone = 0;
  var kDropEffectMove = 1;
  var kDropEffectCopy = 2;
  var kDropEffectLink = 4;
  var kEmbedFlagEmbedderInterceptsEvents = 0x01;
  var kEmbedFlagEmbedderControlsVisibility = 0x02;
  var EventResult = {};
  EventResult.HANDLED = 0;
  EventResult.UNHANDLED = EventResult.HANDLED + 1;

  EventResult.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  EventResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var EventTargetingPolicy = {};
  EventTargetingPolicy.TARGET_ONLY = 0;
  EventTargetingPolicy.TARGET_AND_DESCENDANTS = EventTargetingPolicy.TARGET_ONLY + 1;
  EventTargetingPolicy.DESCENDANTS_ONLY = EventTargetingPolicy.TARGET_AND_DESCENDANTS + 1;
  EventTargetingPolicy.NONE = EventTargetingPolicy.DESCENDANTS_ONLY + 1;

  EventTargetingPolicy.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  EventTargetingPolicy.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function WindowData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowData.prototype.initDefaults_ = function() {
    this.parentId = 0;
    this.windowId = 0;
    this.transientParentId = 0;
    this.bounds = null;
    this.properties = null;
    this.visible = false;
  };
  WindowData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowData.generate = function(generator_) {
    var generated = new WindowData;
    generated.parentId = generator_.generateUint64();
    generated.windowId = generator_.generateUint64();
    generated.transientParentId = generator_.generateUint64();
    generated.bounds = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.properties = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateUint8();
        });
      });
    generated.visible = generator_.generateBool();
    return generated;
  };

  WindowData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parentId = mutator_.mutateUint64(this.parentId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.transientParentId = mutator_.mutateUint64(this.transientParentId);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.properties = mutator_.mutateMap(this.properties,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateArray(val, function(val) {
            return mutator_.mutateUint8(val);
          });
        });
    }
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  WindowData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;





    // validate WindowData.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowData.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 32, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowData.encodedSize = codec.kStructHeaderSize + 48;

  WindowData.decode = function(decoder) {
    var packed;
    var val = new WindowData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.parentId = decoder.decodeStruct(codec.Uint64);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.transientParentId = decoder.decodeStruct(codec.Uint64);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.parentId);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.transientParentId);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
    packed = 0;
    packed |= (val.visible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.kDropEffectNone = kDropEffectNone;
  exports.kDropEffectMove = kDropEffectMove;
  exports.kDropEffectCopy = kDropEffectCopy;
  exports.kDropEffectLink = kDropEffectLink;
  exports.kEmbedFlagEmbedderInterceptsEvents = kEmbedFlagEmbedderInterceptsEvents;
  exports.kEmbedFlagEmbedderControlsVisibility = kEmbedFlagEmbedderControlsVisibility;
  exports.EventResult = EventResult;
  exports.EventTargetingPolicy = EventTargetingPolicy;
  exports.WindowData = WindowData;
})();