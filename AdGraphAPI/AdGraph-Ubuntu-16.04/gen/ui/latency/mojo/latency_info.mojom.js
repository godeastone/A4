// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/latency/mojo/latency_info.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../gfx/geometry/mojo/geometry.mojom.js');
  }


  var LatencyComponentType = {};
  LatencyComponentType.INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT = 0;
  LatencyComponentType.LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT + 1;
  LatencyComponentType.LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT = LatencyComponentType.LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT + 1;
  LatencyComponentType.LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT = LatencyComponentType.LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT + 1;
  LatencyComponentType.LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT = LatencyComponentType.LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT + 1;
  LatencyComponentType.LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT = LatencyComponentType.LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT + 1;
  LatencyComponentType.LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT = LatencyComponentType.LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT + 1;
  LatencyComponentType.LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT = LatencyComponentType.LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT = LatencyComponentType.LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_UI_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_UI_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT + 1;
  LatencyComponentType.TAB_SHOW_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT = LatencyComponentType.TAB_SHOW_COMPONENT + 1;
  LatencyComponentType.DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT = LatencyComponentType.DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL = LatencyComponentType.INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_NO_SWAP_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_NO_SWAP_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT + 1;
  LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT = LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT + 1;
  LatencyComponentType.LATENCY_COMPONENT_TYPE_LAST = LatencyComponentType.INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT;

  LatencyComponentType.isKnownEnumValue = function(value) {
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
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      return true;
    }
    return false;
  };

  LatencyComponentType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SourceEventType = {};
  SourceEventType.UNKNOWN = 0;
  SourceEventType.WHEEL = SourceEventType.UNKNOWN + 1;
  SourceEventType.MOUSE = SourceEventType.WHEEL + 1;
  SourceEventType.TOUCH = SourceEventType.MOUSE + 1;
  SourceEventType.INERTIAL = SourceEventType.TOUCH + 1;
  SourceEventType.KEY_PRESS = SourceEventType.INERTIAL + 1;
  SourceEventType.FRAME = SourceEventType.KEY_PRESS + 1;
  SourceEventType.OTHER = SourceEventType.FRAME + 1;
  SourceEventType.SOURCE_EVENT_TYPE_LAST = SourceEventType.OTHER;

  SourceEventType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  SourceEventType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function LatencyComponentId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LatencyComponentId.prototype.initDefaults_ = function() {
    this.type = 0;
    this.id = 0;
  };
  LatencyComponentId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LatencyComponentId.generate = function(generator_) {
    var generated = new LatencyComponentId;
    generated.type = generator_.generateEnum(0, 26);
    generated.id = generator_.generateInt64();
    return generated;
  };

  LatencyComponentId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 26);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt64(this.id);
    }
    return this;
  };
  LatencyComponentId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LatencyComponentId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LatencyComponentId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LatencyComponentId.validate = function(messageValidator, offset) {
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


    // validate LatencyComponentId.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, LatencyComponentType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  LatencyComponentId.encodedSize = codec.kStructHeaderSize + 16;

  LatencyComponentId.decode = function(decoder) {
    var packed;
    var val = new LatencyComponentId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id = decoder.decodeStruct(codec.Int64);
    return val;
  };

  LatencyComponentId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LatencyComponentId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int64, val.id);
  };
  function LatencyComponent(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LatencyComponent.prototype.initDefaults_ = function() {
    this.eventTime = null;
    this.eventCount = 0;
    this.firstEventTime = null;
    this.lastEventTime = null;
  };
  LatencyComponent.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LatencyComponent.generate = function(generator_) {
    var generated = new LatencyComponent;
    generated.eventTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.eventCount = generator_.generateUint32();
    generated.firstEventTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.lastEventTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  LatencyComponent.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.eventTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.eventCount = mutator_.mutateUint32(this.eventCount);
    }
    if (mutator_.chooseMutateField()) {
      this.firstEventTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastEventTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  LatencyComponent.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LatencyComponent.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LatencyComponent.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LatencyComponent.validate = function(messageValidator, offset) {
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


    // validate LatencyComponent.eventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate LatencyComponent.firstEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LatencyComponent.lastEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LatencyComponent.encodedSize = codec.kStructHeaderSize + 32;

  LatencyComponent.decode = function(decoder) {
    var packed;
    var val = new LatencyComponent();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.eventTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.eventCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.firstEventTime = decoder.decodeStructPointer(time$.TimeTicks);
    val.lastEventTime = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  LatencyComponent.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LatencyComponent.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.eventTime);
    encoder.encodeStruct(codec.Uint32, val.eventCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeTicks, val.firstEventTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.lastEventTime);
  };
  function LatencyComponentPair(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LatencyComponentPair.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
  };
  LatencyComponentPair.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LatencyComponentPair.generate = function(generator_) {
    var generated = new LatencyComponentPair;
    generated.key = generator_.generateStruct(ui.mojom.LatencyComponentId, false);
    generated.value = generator_.generateStruct(ui.mojom.LatencyComponent, false);
    return generated;
  };

  LatencyComponentPair.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateStruct(ui.mojom.LatencyComponentId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(ui.mojom.LatencyComponent, false);
    }
    return this;
  };
  LatencyComponentPair.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LatencyComponentPair.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LatencyComponentPair.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LatencyComponentPair.validate = function(messageValidator, offset) {
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


    // validate LatencyComponentPair.key
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, LatencyComponentId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LatencyComponentPair.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, LatencyComponent, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LatencyComponentPair.encodedSize = codec.kStructHeaderSize + 16;

  LatencyComponentPair.decode = function(decoder) {
    var packed;
    var val = new LatencyComponentPair();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStructPointer(LatencyComponentId);
    val.value = decoder.decodeStructPointer(LatencyComponent);
    return val;
  };

  LatencyComponentPair.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LatencyComponentPair.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(LatencyComponentId, val.key);
    encoder.encodeStructPointer(LatencyComponent, val.value);
  };
  function LatencyInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LatencyInfo.prototype.initDefaults_ = function() {
    this.traceName = null;
    this.latencyComponents = null;
    this.traceId = 0;
    this.snapshots = null;
    this.ukmSourceId = 0;
    this.coalesced = false;
    this.began = false;
    this.terminated = false;
    this.sourceEventType = 0;
  };
  LatencyInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LatencyInfo.generate = function(generator_) {
    var generated = new LatencyInfo;
    generated.traceName = generator_.generateString(false);
    generated.latencyComponents = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.LatencyComponentPair, false);
    });
    generated.traceId = generator_.generateInt64();
    generated.snapshots = generator_.generateMap(
      function() {
        return generator_.generateInt64();
      },
      function() {
        return generator_.generateInt64();
      });
    generated.ukmSourceId = generator_.generateInt64();
    generated.coalesced = generator_.generateBool();
    generated.began = generator_.generateBool();
    generated.terminated = generator_.generateBool();
    generated.sourceEventType = generator_.generateEnum(0, 7);
    return generated;
  };

  LatencyInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.traceName = mutator_.mutateString(this.traceName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.latencyComponents = mutator_.mutateArray(this.latencyComponents, function(val) {
        return mutator_.mutateStruct(ui.mojom.LatencyComponentPair, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.traceId = mutator_.mutateInt64(this.traceId);
    }
    if (mutator_.chooseMutateField()) {
      this.snapshots = mutator_.mutateMap(this.snapshots,
        function(val) {
          return mutator_.mutateInt64(val);
        },
        function(val) {
          return mutator_.mutateInt64(val);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.ukmSourceId = mutator_.mutateInt64(this.ukmSourceId);
    }
    if (mutator_.chooseMutateField()) {
      this.coalesced = mutator_.mutateBool(this.coalesced);
    }
    if (mutator_.chooseMutateField()) {
      this.began = mutator_.mutateBool(this.began);
    }
    if (mutator_.chooseMutateField()) {
      this.terminated = mutator_.mutateBool(this.terminated);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceEventType = mutator_.mutateEnum(this.sourceEventType, 0, 7);
    }
    return this;
  };
  LatencyInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LatencyInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LatencyInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LatencyInfo.validate = function(messageValidator, offset) {
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


    // validate LatencyInfo.traceName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate LatencyInfo.latencyComponents
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(LatencyComponentPair), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate LatencyInfo.snapshots
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 24, false, codec.Int64, codec.Int64, false);
    if (err !== validator.validationError.NONE)
        return err;






    // validate LatencyInfo.sourceEventType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 44, SourceEventType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LatencyInfo.encodedSize = codec.kStructHeaderSize + 48;

  LatencyInfo.decode = function(decoder) {
    var packed;
    var val = new LatencyInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.traceName = decoder.decodeStruct(codec.String);
    val.latencyComponents = decoder.decodeArrayPointer(new codec.PointerTo(LatencyComponentPair));
    val.traceId = decoder.decodeStruct(codec.Int64);
    val.snapshots = decoder.decodeMapPointer(codec.Int64, codec.Int64);
    val.ukmSourceId = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.coalesced = (packed >> 0) & 1 ? true : false;
    val.began = (packed >> 1) & 1 ? true : false;
    val.terminated = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sourceEventType = decoder.decodeStruct(codec.Int32);
    return val;
  };

  LatencyInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LatencyInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.traceName);
    encoder.encodeArrayPointer(new codec.PointerTo(LatencyComponentPair), val.latencyComponents);
    encoder.encodeStruct(codec.Int64, val.traceId);
    encoder.encodeMapPointer(codec.Int64, codec.Int64, val.snapshots);
    encoder.encodeStruct(codec.Int64, val.ukmSourceId);
    packed = 0;
    packed |= (val.coalesced & 1) << 0
    packed |= (val.began & 1) << 1
    packed |= (val.terminated & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.sourceEventType);
  };
  exports.LatencyComponentType = LatencyComponentType;
  exports.SourceEventType = SourceEventType;
  exports.LatencyComponentId = LatencyComponentId;
  exports.LatencyComponent = LatencyComponent;
  exports.LatencyComponentPair = LatencyComponentPair;
  exports.LatencyInfo = LatencyInfo;
})();