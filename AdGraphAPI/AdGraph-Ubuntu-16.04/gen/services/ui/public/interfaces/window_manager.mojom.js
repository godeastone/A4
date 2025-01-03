// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_manager.mojom';
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
  var surface_handle$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/surface_handle.mojom', '../../../../gpu/ipc/common/surface_handle.mojom.js');
  }
  var cursor$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/cursor/cursor.mojom', 'cursor/cursor.mojom.js');
  }
  var event_matcher$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/event_matcher.mojom', 'event_matcher.mojom.js');
  }
  var window_manager_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_manager_constants.mojom', 'window_manager_constants.mojom.js');
  }
  var window_tree_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_tree_constants.mojom', 'window_tree_constants.mojom.js');
  }
  var frame_sink_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/frame_sink_id.mojom', '../../../viz/public/interfaces/compositing/frame_sink_id.mojom.js');
  }
  var local_surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/local_surface_id.mojom', '../../../viz/public/interfaces/compositing/local_surface_id.mojom.js');
  }
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var ui_base_types$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/base/mojo/ui_base_types.mojom', '../../../../ui/base/mojo/ui_base_types.mojom.js');
  }
  var display1$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display.mojom', '../../../../ui/display/mojo/display.mojom.js');
  }
  var event$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event.mojom', '../../../../ui/events/mojo/event.mojom.js');
  }
  var event_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/events/mojo/event_constants.mojom', '../../../../ui/events/mojo/event_constants.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var display1$ =
      mojo.internal.exposeNamespace('display.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/display/mojo/display.mojom', '../../../../ui/display/mojo/display.mojom.js');
  }



  function WmAccelerator(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WmAccelerator.prototype.initDefaults_ = function() {
    this.id = 0;
    this.eventMatcher = null;
  };
  WmAccelerator.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WmAccelerator.generate = function(generator_) {
    var generated = new WmAccelerator;
    generated.id = generator_.generateUint32();
    generated.eventMatcher = generator_.generateStruct(ui.mojom.EventMatcher, false);
    return generated;
  };

  WmAccelerator.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.eventMatcher = mutator_.mutateStruct(ui.mojom.EventMatcher, false);
    }
    return this;
  };
  WmAccelerator.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WmAccelerator.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WmAccelerator.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WmAccelerator.validate = function(messageValidator, offset) {
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



    // validate WmAccelerator.eventMatcher
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event_matcher$.EventMatcher, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WmAccelerator.encodedSize = codec.kStructHeaderSize + 16;

  WmAccelerator.decode = function(decoder) {
    var packed;
    var val = new WmAccelerator();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.eventMatcher = decoder.decodeStructPointer(event_matcher$.EventMatcher);
    return val;
  };

  WmAccelerator.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WmAccelerator.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(event_matcher$.EventMatcher, val.eventMatcher);
  };
  function WindowManager_OnConnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_OnConnect_Params.prototype.initDefaults_ = function() {
  };
  WindowManager_OnConnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_OnConnect_Params.generate = function(generator_) {
    var generated = new WindowManager_OnConnect_Params;
    return generated;
  };

  WindowManager_OnConnect_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowManager_OnConnect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_OnConnect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_OnConnect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_OnConnect_Params.validate = function(messageValidator, offset) {
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

  WindowManager_OnConnect_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowManager_OnConnect_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_OnConnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowManager_OnConnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_OnConnect_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowManager_WmOnAcceleratedWidgetForDisplay_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
    this.surfaceHandle = null;
  };
  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.generate = function(generator_) {
    var generated = new WindowManager_WmOnAcceleratedWidgetForDisplay_Params;
    generated.displayId = generator_.generateInt64();
    generated.surfaceHandle = generator_.generateStruct(gpu.mojom.SurfaceHandle, false);
    return generated;
  };

  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.surfaceHandle = mutator_.mutateStruct(gpu.mojom.SurfaceHandle, false);
    }
    return this;
  };
  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManager_WmOnAcceleratedWidgetForDisplay_Params.surfaceHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, surface_handle$.SurfaceHandle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmOnAcceleratedWidgetForDisplay_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.surfaceHandle = decoder.decodeStructPointer(surface_handle$.SurfaceHandle);
    return val;
  };

  WindowManager_WmOnAcceleratedWidgetForDisplay_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmOnAcceleratedWidgetForDisplay_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(surface_handle$.SurfaceHandle, val.surfaceHandle);
  };
  function WindowManager_WmNewDisplayAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmNewDisplayAdded_Params.prototype.initDefaults_ = function() {
    this.display = null;
    this.root = null;
    this.parentDrawn = false;
    this.localSurfaceId = null;
  };
  WindowManager_WmNewDisplayAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmNewDisplayAdded_Params.generate = function(generator_) {
    var generated = new WindowManager_WmNewDisplayAdded_Params;
    generated.display = generator_.generateStruct(display.mojom.Display, false);
    generated.root = generator_.generateStruct(ui.mojom.WindowData, false);
    generated.parentDrawn = generator_.generateBool();
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    return generated;
  };

  WindowManager_WmNewDisplayAdded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateStruct(display.mojom.Display, false);
    }
    if (mutator_.chooseMutateField()) {
      this.root = mutator_.mutateStruct(ui.mojom.WindowData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.parentDrawn = mutator_.mutateBool(this.parentDrawn);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    return this;
  };
  WindowManager_WmNewDisplayAdded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmNewDisplayAdded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmNewDisplayAdded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmNewDisplayAdded_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManager_WmNewDisplayAdded_Params.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, display1$.Display, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmNewDisplayAdded_Params.root
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, window_tree_constants$.WindowData, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate WindowManager_WmNewDisplayAdded_Params.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmNewDisplayAdded_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowManager_WmNewDisplayAdded_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmNewDisplayAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(display1$.Display);
    val.root = decoder.decodeStructPointer(window_tree_constants$.WindowData);
    packed = decoder.readUint8();
    val.parentDrawn = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    return val;
  };

  WindowManager_WmNewDisplayAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmNewDisplayAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(display1$.Display, val.display);
    encoder.encodeStructPointer(window_tree_constants$.WindowData, val.root);
    packed = 0;
    packed |= (val.parentDrawn & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
  };
  function WindowManager_WmDisplayRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmDisplayRemoved_Params.prototype.initDefaults_ = function() {
    this.displayId = 0;
  };
  WindowManager_WmDisplayRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmDisplayRemoved_Params.generate = function(generator_) {
    var generated = new WindowManager_WmDisplayRemoved_Params;
    generated.displayId = generator_.generateInt64();
    return generated;
  };

  WindowManager_WmDisplayRemoved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    return this;
  };
  WindowManager_WmDisplayRemoved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmDisplayRemoved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmDisplayRemoved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmDisplayRemoved_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmDisplayRemoved_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmDisplayRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmDisplayRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WindowManager_WmDisplayRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmDisplayRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId);
  };
  function WindowManager_WmDisplayModified_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmDisplayModified_Params.prototype.initDefaults_ = function() {
    this.display = null;
  };
  WindowManager_WmDisplayModified_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmDisplayModified_Params.generate = function(generator_) {
    var generated = new WindowManager_WmDisplayModified_Params;
    generated.display = generator_.generateStruct(display.mojom.Display, false);
    return generated;
  };

  WindowManager_WmDisplayModified_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateStruct(display.mojom.Display, false);
    }
    return this;
  };
  WindowManager_WmDisplayModified_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmDisplayModified_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmDisplayModified_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmDisplayModified_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManager_WmDisplayModified_Params.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, display1$.Display, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmDisplayModified_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmDisplayModified_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmDisplayModified_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(display1$.Display);
    return val;
  };

  WindowManager_WmDisplayModified_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmDisplayModified_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(display1$.Display, val.display);
  };
  function WindowManager_WmSetBounds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmSetBounds_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.bounds = null;
  };
  WindowManager_WmSetBounds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmSetBounds_Params.generate = function(generator_) {
    var generated = new WindowManager_WmSetBounds_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.bounds = generator_.generateStruct(gfx.mojom.Rect, false);
    return generated;
  };

  WindowManager_WmSetBounds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    return this;
  };
  WindowManager_WmSetBounds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmSetBounds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmSetBounds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmSetBounds_Params.validate = function(messageValidator, offset) {
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




    // validate WindowManager_WmSetBounds_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmSetBounds_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmSetBounds_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmSetBounds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  WindowManager_WmSetBounds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmSetBounds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
  };
  function WindowManager_WmSetProperty_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmSetProperty_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.name = null;
    this.value = null;
  };
  WindowManager_WmSetProperty_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmSetProperty_Params.generate = function(generator_) {
    var generated = new WindowManager_WmSetProperty_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.name = generator_.generateString(false);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WindowManager_WmSetProperty_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateArray(this.value, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WindowManager_WmSetProperty_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmSetProperty_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmSetProperty_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmSetProperty_Params.validate = function(messageValidator, offset) {
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




    // validate WindowManager_WmSetProperty_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmSetProperty_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmSetProperty_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowManager_WmSetProperty_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmSetProperty_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.name = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WindowManager_WmSetProperty_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmSetProperty_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeArrayPointer(codec.Uint8, val.value);
  };
  function WindowManager_WmSetModalType_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmSetModalType_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.type = 0;
  };
  WindowManager_WmSetModalType_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmSetModalType_Params.generate = function(generator_) {
    var generated = new WindowManager_WmSetModalType_Params;
    generated.windowId = generator_.generateUint64();
    generated.type = generator_.generateEnum(0, 3);
    return generated;
  };

  WindowManager_WmSetModalType_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    return this;
  };
  WindowManager_WmSetModalType_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmSetModalType_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmSetModalType_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmSetModalType_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManager_WmSetModalType_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ui_base_types$.ModalType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmSetModalType_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmSetModalType_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmSetModalType_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmSetModalType_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmSetModalType_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmSetCanFocus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmSetCanFocus_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.canFocus = false;
  };
  WindowManager_WmSetCanFocus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmSetCanFocus_Params.generate = function(generator_) {
    var generated = new WindowManager_WmSetCanFocus_Params;
    generated.windowId = generator_.generateUint64();
    generated.canFocus = generator_.generateBool();
    return generated;
  };

  WindowManager_WmSetCanFocus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.canFocus = mutator_.mutateBool(this.canFocus);
    }
    return this;
  };
  WindowManager_WmSetCanFocus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmSetCanFocus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmSetCanFocus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmSetCanFocus_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmSetCanFocus_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmSetCanFocus_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmSetCanFocus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.canFocus = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmSetCanFocus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmSetCanFocus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    packed = 0;
    packed |= (val.canFocus & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmCreateTopLevelWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmCreateTopLevelWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.frameSinkId = null;
    this.properties = null;
  };
  WindowManager_WmCreateTopLevelWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmCreateTopLevelWindow_Params.generate = function(generator_) {
    var generated = new WindowManager_WmCreateTopLevelWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    generated.properties = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateUint8();
        });
      });
    return generated;
  };

  WindowManager_WmCreateTopLevelWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
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
    return this;
  };
  WindowManager_WmCreateTopLevelWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmCreateTopLevelWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmCreateTopLevelWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmCreateTopLevelWindow_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManager_WmCreateTopLevelWindow_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmCreateTopLevelWindow_Params.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmCreateTopLevelWindow_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmCreateTopLevelWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmCreateTopLevelWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  WindowManager_WmCreateTopLevelWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmCreateTopLevelWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
  };
  function WindowManager_WmClientJankinessChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmClientJankinessChanged_Params.prototype.initDefaults_ = function() {
    this.clientId = 0;
    this.janky = false;
  };
  WindowManager_WmClientJankinessChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmClientJankinessChanged_Params.generate = function(generator_) {
    var generated = new WindowManager_WmClientJankinessChanged_Params;
    generated.clientId = generator_.generateUint32();
    generated.janky = generator_.generateBool();
    return generated;
  };

  WindowManager_WmClientJankinessChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientId = mutator_.mutateUint32(this.clientId);
    }
    if (mutator_.chooseMutateField()) {
      this.janky = mutator_.mutateBool(this.janky);
    }
    return this;
  };
  WindowManager_WmClientJankinessChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmClientJankinessChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmClientJankinessChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmClientJankinessChanged_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmClientJankinessChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmClientJankinessChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmClientJankinessChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.janky = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmClientJankinessChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmClientJankinessChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.clientId);
    packed = 0;
    packed |= (val.janky & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmBuildDragImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmBuildDragImage_Params.prototype.initDefaults_ = function() {
    this.screenLocation = null;
    this.dragImage = null;
    this.dragImageOffset = null;
    this.source = 0;
  };
  WindowManager_WmBuildDragImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmBuildDragImage_Params.generate = function(generator_) {
    var generated = new WindowManager_WmBuildDragImage_Params;
    generated.screenLocation = generator_.generateStruct(gfx.mojom.Point, false);
    generated.dragImage = generator_.generateStruct(skia.mojom.Bitmap, true);
    generated.dragImageOffset = generator_.generateStruct(gfx.mojom.Vector2d, false);
    generated.source = generator_.generateEnum(0, 3);
    return generated;
  };

  WindowManager_WmBuildDragImage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.screenLocation = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dragImage = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    if (mutator_.chooseMutateField()) {
      this.dragImageOffset = mutator_.mutateStruct(gfx.mojom.Vector2d, false);
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateEnum(this.source, 0, 3);
    }
    return this;
  };
  WindowManager_WmBuildDragImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dragImage !== null) {
      Array.prototype.push.apply(handles, this.dragImage.getHandleDeps());
    }
    return handles;
  };

  WindowManager_WmBuildDragImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmBuildDragImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.dragImage.setHandlesInternal_(handles, idx);
    return idx;
  };

  WindowManager_WmBuildDragImage_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManager_WmBuildDragImage_Params.screenLocation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmBuildDragImage_Params.dragImage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmBuildDragImage_Params.dragImageOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Vector2d, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmBuildDragImage_Params.source
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, event_constants$.PointerKind);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmBuildDragImage_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowManager_WmBuildDragImage_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmBuildDragImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.screenLocation = decoder.decodeStructPointer(geometry$.Point);
    val.dragImage = decoder.decodeStructPointer(bitmap$.Bitmap);
    val.dragImageOffset = decoder.decodeStructPointer(geometry$.Vector2d);
    val.source = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmBuildDragImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmBuildDragImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.screenLocation);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.dragImage);
    encoder.encodeStructPointer(geometry$.Vector2d, val.dragImageOffset);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmMoveDragImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmMoveDragImage_Params.prototype.initDefaults_ = function() {
    this.screenLocation = null;
  };
  WindowManager_WmMoveDragImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmMoveDragImage_Params.generate = function(generator_) {
    var generated = new WindowManager_WmMoveDragImage_Params;
    generated.screenLocation = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  WindowManager_WmMoveDragImage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.screenLocation = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  WindowManager_WmMoveDragImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmMoveDragImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmMoveDragImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmMoveDragImage_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManager_WmMoveDragImage_Params.screenLocation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmMoveDragImage_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmMoveDragImage_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmMoveDragImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.screenLocation = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowManager_WmMoveDragImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmMoveDragImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.screenLocation);
  };
  function WindowManager_WmMoveDragImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmMoveDragImage_ResponseParams.prototype.initDefaults_ = function() {
  };
  WindowManager_WmMoveDragImage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmMoveDragImage_ResponseParams.generate = function(generator_) {
    var generated = new WindowManager_WmMoveDragImage_ResponseParams;
    return generated;
  };

  WindowManager_WmMoveDragImage_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowManager_WmMoveDragImage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmMoveDragImage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmMoveDragImage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmMoveDragImage_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowManager_WmMoveDragImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  WindowManager_WmMoveDragImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmMoveDragImage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowManager_WmMoveDragImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmMoveDragImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowManager_WmDestroyDragImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmDestroyDragImage_Params.prototype.initDefaults_ = function() {
  };
  WindowManager_WmDestroyDragImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmDestroyDragImage_Params.generate = function(generator_) {
    var generated = new WindowManager_WmDestroyDragImage_Params;
    return generated;
  };

  WindowManager_WmDestroyDragImage_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowManager_WmDestroyDragImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmDestroyDragImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmDestroyDragImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmDestroyDragImage_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmDestroyDragImage_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowManager_WmDestroyDragImage_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmDestroyDragImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowManager_WmDestroyDragImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmDestroyDragImage_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowManager_WmPerformMoveLoop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmPerformMoveLoop_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.source = 0;
    this.windowId = 0;
    this.cursorLocation = null;
  };
  WindowManager_WmPerformMoveLoop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmPerformMoveLoop_Params.generate = function(generator_) {
    var generated = new WindowManager_WmPerformMoveLoop_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.source = generator_.generateEnum(0, 1);
    generated.cursorLocation = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  WindowManager_WmPerformMoveLoop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateEnum(this.source, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.cursorLocation = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  WindowManager_WmPerformMoveLoop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmPerformMoveLoop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmPerformMoveLoop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmPerformMoveLoop_Params.validate = function(messageValidator, offset) {
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




    // validate WindowManager_WmPerformMoveLoop_Params.source
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, window_manager_constants$.MoveLoopSource);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManager_WmPerformMoveLoop_Params.cursorLocation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmPerformMoveLoop_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmPerformMoveLoop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmPerformMoveLoop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    val.source = decoder.decodeStruct(codec.Int32);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.cursorLocation = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowManager_WmPerformMoveLoop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmPerformMoveLoop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Point, val.cursorLocation);
  };
  function WindowManager_WmCancelMoveLoop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmCancelMoveLoop_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
  };
  WindowManager_WmCancelMoveLoop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmCancelMoveLoop_Params.generate = function(generator_) {
    var generated = new WindowManager_WmCancelMoveLoop_Params;
    generated.changeId = generator_.generateUint32();
    return generated;
  };

  WindowManager_WmCancelMoveLoop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    return this;
  };
  WindowManager_WmCancelMoveLoop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmCancelMoveLoop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmCancelMoveLoop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmCancelMoveLoop_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmCancelMoveLoop_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmCancelMoveLoop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmCancelMoveLoop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_WmCancelMoveLoop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmCancelMoveLoop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_WmDeactivateWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmDeactivateWindow_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowManager_WmDeactivateWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmDeactivateWindow_Params.generate = function(generator_) {
    var generated = new WindowManager_WmDeactivateWindow_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManager_WmDeactivateWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManager_WmDeactivateWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmDeactivateWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmDeactivateWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmDeactivateWindow_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmDeactivateWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_WmDeactivateWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmDeactivateWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManager_WmDeactivateWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmDeactivateWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManager_WmStackAbove_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmStackAbove_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.aboveId = 0;
    this.belowId = 0;
  };
  WindowManager_WmStackAbove_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmStackAbove_Params.generate = function(generator_) {
    var generated = new WindowManager_WmStackAbove_Params;
    generated.changeId = generator_.generateUint32();
    generated.aboveId = generator_.generateUint64();
    generated.belowId = generator_.generateUint64();
    return generated;
  };

  WindowManager_WmStackAbove_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.aboveId = mutator_.mutateUint64(this.aboveId);
    }
    if (mutator_.chooseMutateField()) {
      this.belowId = mutator_.mutateUint64(this.belowId);
    }
    return this;
  };
  WindowManager_WmStackAbove_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmStackAbove_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmStackAbove_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmStackAbove_Params.validate = function(messageValidator, offset) {
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




    return validator.validationError.NONE;
  };

  WindowManager_WmStackAbove_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManager_WmStackAbove_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmStackAbove_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.aboveId = decoder.decodeStruct(codec.Uint64);
    val.belowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManager_WmStackAbove_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmStackAbove_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.aboveId);
    encoder.encodeStruct(codec.Uint64, val.belowId);
  };
  function WindowManager_WmStackAtTop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmStackAtTop_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowManager_WmStackAtTop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmStackAtTop_Params.generate = function(generator_) {
    var generated = new WindowManager_WmStackAtTop_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManager_WmStackAtTop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManager_WmStackAtTop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmStackAtTop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmStackAtTop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmStackAtTop_Params.validate = function(messageValidator, offset) {
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

  WindowManager_WmStackAtTop_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmStackAtTop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmStackAtTop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManager_WmStackAtTop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmStackAtTop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManager_WmPerformWmAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_WmPerformWmAction_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.action = null;
  };
  WindowManager_WmPerformWmAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_WmPerformWmAction_Params.generate = function(generator_) {
    var generated = new WindowManager_WmPerformWmAction_Params;
    generated.windowId = generator_.generateUint64();
    generated.action = generator_.generateString(false);
    return generated;
  };

  WindowManager_WmPerformWmAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateString(this.action, false);
    }
    return this;
  };
  WindowManager_WmPerformWmAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_WmPerformWmAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_WmPerformWmAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_WmPerformWmAction_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManager_WmPerformWmAction_Params.action
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_WmPerformWmAction_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_WmPerformWmAction_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_WmPerformWmAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.action = decoder.decodeStruct(codec.String);
    return val;
  };

  WindowManager_WmPerformWmAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_WmPerformWmAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.String, val.action);
  };
  function WindowManager_OnAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_OnAccelerator_Params.prototype.initDefaults_ = function() {
    this.ackId = 0;
    this.acceleratorId = 0;
    this.event = null;
  };
  WindowManager_OnAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_OnAccelerator_Params.generate = function(generator_) {
    var generated = new WindowManager_OnAccelerator_Params;
    generated.ackId = generator_.generateUint32();
    generated.acceleratorId = generator_.generateUint32();
    generated.event = generator_.generateStruct(ui.mojom.Event, false);
    return generated;
  };

  WindowManager_OnAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ackId = mutator_.mutateUint32(this.ackId);
    }
    if (mutator_.chooseMutateField()) {
      this.acceleratorId = mutator_.mutateUint32(this.acceleratorId);
    }
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    return this;
  };
  WindowManager_OnAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_OnAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_OnAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_OnAccelerator_Params.validate = function(messageValidator, offset) {
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




    // validate WindowManager_OnAccelerator_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManager_OnAccelerator_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManager_OnAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_OnAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ackId = decoder.decodeStruct(codec.Uint32);
    val.acceleratorId = decoder.decodeStruct(codec.Uint32);
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  WindowManager_OnAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_OnAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.ackId);
    encoder.encodeStruct(codec.Uint32, val.acceleratorId);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function WindowManager_OnCursorTouchVisibleChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_OnCursorTouchVisibleChanged_Params.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  WindowManager_OnCursorTouchVisibleChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_OnCursorTouchVisibleChanged_Params.generate = function(generator_) {
    var generated = new WindowManager_OnCursorTouchVisibleChanged_Params;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  WindowManager_OnCursorTouchVisibleChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  WindowManager_OnCursorTouchVisibleChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_OnCursorTouchVisibleChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_OnCursorTouchVisibleChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_OnCursorTouchVisibleChanged_Params.validate = function(messageValidator, offset) {
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

  WindowManager_OnCursorTouchVisibleChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_OnCursorTouchVisibleChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_OnCursorTouchVisibleChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManager_OnCursorTouchVisibleChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_OnCursorTouchVisibleChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManager_OnEventBlockedByModalWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManager_OnEventBlockedByModalWindow_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowManager_OnEventBlockedByModalWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManager_OnEventBlockedByModalWindow_Params.generate = function(generator_) {
    var generated = new WindowManager_OnEventBlockedByModalWindow_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManager_OnEventBlockedByModalWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManager_OnEventBlockedByModalWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManager_OnEventBlockedByModalWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManager_OnEventBlockedByModalWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManager_OnEventBlockedByModalWindow_Params.validate = function(messageValidator, offset) {
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

  WindowManager_OnEventBlockedByModalWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManager_OnEventBlockedByModalWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManager_OnEventBlockedByModalWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManager_OnEventBlockedByModalWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManager_OnEventBlockedByModalWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManagerClient_AddActivationParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_AddActivationParent_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowManagerClient_AddActivationParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_AddActivationParent_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_AddActivationParent_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManagerClient_AddActivationParent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManagerClient_AddActivationParent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_AddActivationParent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_AddActivationParent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_AddActivationParent_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_AddActivationParent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_AddActivationParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_AddActivationParent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManagerClient_AddActivationParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_AddActivationParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManagerClient_RemoveActivationParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_RemoveActivationParent_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowManagerClient_RemoveActivationParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_RemoveActivationParent_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_RemoveActivationParent_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManagerClient_RemoveActivationParent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManagerClient_RemoveActivationParent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_RemoveActivationParent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_RemoveActivationParent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_RemoveActivationParent_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_RemoveActivationParent_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_RemoveActivationParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_RemoveActivationParent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManagerClient_RemoveActivationParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_RemoveActivationParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManagerClient_SetExtendedHitRegionForChildren_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetExtendedHitRegionForChildren_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.mouseInsets = null;
    this.touchInsets = null;
  };
  WindowManagerClient_SetExtendedHitRegionForChildren_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetExtendedHitRegionForChildren_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_SetExtendedHitRegionForChildren_Params;
    generated.windowId = generator_.generateUint64();
    generated.mouseInsets = generator_.generateStruct(gfx.mojom.Insets, false);
    generated.touchInsets = generator_.generateStruct(gfx.mojom.Insets, false);
    return generated;
  };

  WindowManagerClient_SetExtendedHitRegionForChildren_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.mouseInsets = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    if (mutator_.chooseMutateField()) {
      this.touchInsets = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    return this;
  };
  WindowManagerClient_SetExtendedHitRegionForChildren_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetExtendedHitRegionForChildren_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetExtendedHitRegionForChildren_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetExtendedHitRegionForChildren_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManagerClient_SetExtendedHitRegionForChildren_Params.mouseInsets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManagerClient_SetExtendedHitRegionForChildren_Params.touchInsets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_SetExtendedHitRegionForChildren_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowManagerClient_SetExtendedHitRegionForChildren_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetExtendedHitRegionForChildren_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.mouseInsets = decoder.decodeStructPointer(geometry$.Insets);
    val.touchInsets = decoder.decodeStructPointer(geometry$.Insets);
    return val;
  };

  WindowManagerClient_SetExtendedHitRegionForChildren_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetExtendedHitRegionForChildren_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Insets, val.mouseInsets);
    encoder.encodeStructPointer(geometry$.Insets, val.touchInsets);
  };
  function WindowManagerClient_AddAccelerators_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_AddAccelerators_Params.prototype.initDefaults_ = function() {
    this.accelerators = null;
  };
  WindowManagerClient_AddAccelerators_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_AddAccelerators_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_AddAccelerators_Params;
    generated.accelerators = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.WmAccelerator, false);
    });
    return generated;
  };

  WindowManagerClient_AddAccelerators_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.accelerators = mutator_.mutateArray(this.accelerators, function(val) {
        return mutator_.mutateStruct(ui.mojom.WmAccelerator, false);
      });
    }
    return this;
  };
  WindowManagerClient_AddAccelerators_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_AddAccelerators_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_AddAccelerators_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_AddAccelerators_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_AddAccelerators_Params.accelerators
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(WmAccelerator), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_AddAccelerators_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_AddAccelerators_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_AddAccelerators_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.accelerators = decoder.decodeArrayPointer(new codec.PointerTo(WmAccelerator));
    return val;
  };

  WindowManagerClient_AddAccelerators_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_AddAccelerators_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(WmAccelerator), val.accelerators);
  };
  function WindowManagerClient_AddAccelerators_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_AddAccelerators_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowManagerClient_AddAccelerators_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_AddAccelerators_ResponseParams.generate = function(generator_) {
    var generated = new WindowManagerClient_AddAccelerators_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_AddAccelerators_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowManagerClient_AddAccelerators_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_AddAccelerators_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_AddAccelerators_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_AddAccelerators_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowManagerClient_AddAccelerators_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_AddAccelerators_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_AddAccelerators_ResponseParams();
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

  WindowManagerClient_AddAccelerators_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_AddAccelerators_ResponseParams.encodedSize);
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
  function WindowManagerClient_RemoveAccelerator_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_RemoveAccelerator_Params.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  WindowManagerClient_RemoveAccelerator_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_RemoveAccelerator_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_RemoveAccelerator_Params;
    generated.id = generator_.generateUint32();
    return generated;
  };

  WindowManagerClient_RemoveAccelerator_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    return this;
  };
  WindowManagerClient_RemoveAccelerator_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_RemoveAccelerator_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_RemoveAccelerator_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_RemoveAccelerator_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_RemoveAccelerator_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_RemoveAccelerator_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_RemoveAccelerator_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_RemoveAccelerator_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_RemoveAccelerator_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_SetKeyEventsThatDontHideCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.prototype.initDefaults_ = function() {
    this.dontHideCursorList = null;
  };
  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_SetKeyEventsThatDontHideCursor_Params;
    generated.dontHideCursorList = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.EventMatcher, false);
    });
    return generated;
  };

  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dontHideCursorList = mutator_.mutateArray(this.dontHideCursorList, function(val) {
        return mutator_.mutateStruct(ui.mojom.EventMatcher, false);
      });
    }
    return this;
  };
  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.dontHideCursorList
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(event_matcher$.EventMatcher), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetKeyEventsThatDontHideCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dontHideCursorList = decoder.decodeArrayPointer(new codec.PointerTo(event_matcher$.EventMatcher));
    return val;
  };

  WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(event_matcher$.EventMatcher), val.dontHideCursorList);
  };
  function WindowManagerClient_SetDisplayRoot_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetDisplayRoot_Params.prototype.initDefaults_ = function() {
    this.display = null;
    this.viewportMetrics = null;
    this.isPrimaryDisplay = false;
    this.windowId = 0;
    this.mirrors = null;
  };
  WindowManagerClient_SetDisplayRoot_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetDisplayRoot_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_SetDisplayRoot_Params;
    generated.display = generator_.generateStruct(display.mojom.Display, false);
    generated.viewportMetrics = generator_.generateStruct(ui.mojom.WmViewportMetrics, false);
    generated.isPrimaryDisplay = generator_.generateBool();
    generated.windowId = generator_.generateUint64();
    generated.mirrors = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.Display, false);
    });
    return generated;
  };

  WindowManagerClient_SetDisplayRoot_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateStruct(display.mojom.Display, false);
    }
    if (mutator_.chooseMutateField()) {
      this.viewportMetrics = mutator_.mutateStruct(ui.mojom.WmViewportMetrics, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isPrimaryDisplay = mutator_.mutateBool(this.isPrimaryDisplay);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.mirrors = mutator_.mutateArray(this.mirrors, function(val) {
        return mutator_.mutateStruct(display.mojom.Display, false);
      });
    }
    return this;
  };
  WindowManagerClient_SetDisplayRoot_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetDisplayRoot_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetDisplayRoot_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetDisplayRoot_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_SetDisplayRoot_Params.display
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, display1$.Display, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManagerClient_SetDisplayRoot_Params.viewportMetrics
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, window_manager_constants$.WmViewportMetrics, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate WindowManagerClient_SetDisplayRoot_Params.mirrors
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(display1$.Display), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_SetDisplayRoot_Params.encodedSize = codec.kStructHeaderSize + 40;

  WindowManagerClient_SetDisplayRoot_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetDisplayRoot_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.display = decoder.decodeStructPointer(display1$.Display);
    val.viewportMetrics = decoder.decodeStructPointer(window_manager_constants$.WmViewportMetrics);
    packed = decoder.readUint8();
    val.isPrimaryDisplay = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.mirrors = decoder.decodeArrayPointer(new codec.PointerTo(display1$.Display));
    return val;
  };

  WindowManagerClient_SetDisplayRoot_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetDisplayRoot_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(display1$.Display, val.display);
    encoder.encodeStructPointer(window_manager_constants$.WmViewportMetrics, val.viewportMetrics);
    packed = 0;
    packed |= (val.isPrimaryDisplay & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeArrayPointer(new codec.PointerTo(display1$.Display), val.mirrors);
  };
  function WindowManagerClient_SetDisplayRoot_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetDisplayRoot_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowManagerClient_SetDisplayRoot_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetDisplayRoot_ResponseParams.generate = function(generator_) {
    var generated = new WindowManagerClient_SetDisplayRoot_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_SetDisplayRoot_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowManagerClient_SetDisplayRoot_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetDisplayRoot_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetDisplayRoot_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetDisplayRoot_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowManagerClient_SetDisplayRoot_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_SetDisplayRoot_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetDisplayRoot_ResponseParams();
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

  WindowManagerClient_SetDisplayRoot_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetDisplayRoot_ResponseParams.encodedSize);
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
  function WindowManagerClient_SetDisplayConfiguration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetDisplayConfiguration_Params.prototype.initDefaults_ = function() {
    this.displays = null;
    this.viewportMetrics = null;
    this.primaryDisplayId = 0;
    this.internalDisplayId = 0;
    this.mirrors = null;
  };
  WindowManagerClient_SetDisplayConfiguration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetDisplayConfiguration_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_SetDisplayConfiguration_Params;
    generated.displays = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.Display, false);
    });
    generated.viewportMetrics = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.WmViewportMetrics, false);
    });
    generated.primaryDisplayId = generator_.generateInt64();
    generated.internalDisplayId = generator_.generateInt64();
    generated.mirrors = generator_.generateArray(function() {
      return generator_.generateStruct(display.mojom.Display, false);
    });
    return generated;
  };

  WindowManagerClient_SetDisplayConfiguration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displays = mutator_.mutateArray(this.displays, function(val) {
        return mutator_.mutateStruct(display.mojom.Display, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.viewportMetrics = mutator_.mutateArray(this.viewportMetrics, function(val) {
        return mutator_.mutateStruct(ui.mojom.WmViewportMetrics, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.primaryDisplayId = mutator_.mutateInt64(this.primaryDisplayId);
    }
    if (mutator_.chooseMutateField()) {
      this.internalDisplayId = mutator_.mutateInt64(this.internalDisplayId);
    }
    if (mutator_.chooseMutateField()) {
      this.mirrors = mutator_.mutateArray(this.mirrors, function(val) {
        return mutator_.mutateStruct(display.mojom.Display, false);
      });
    }
    return this;
  };
  WindowManagerClient_SetDisplayConfiguration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetDisplayConfiguration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetDisplayConfiguration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetDisplayConfiguration_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_SetDisplayConfiguration_Params.displays
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(display1$.Display), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManagerClient_SetDisplayConfiguration_Params.viewportMetrics
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(window_manager_constants$.WmViewportMetrics), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;




    // validate WindowManagerClient_SetDisplayConfiguration_Params.mirrors
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(display1$.Display), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_SetDisplayConfiguration_Params.encodedSize = codec.kStructHeaderSize + 40;

  WindowManagerClient_SetDisplayConfiguration_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetDisplayConfiguration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displays = decoder.decodeArrayPointer(new codec.PointerTo(display1$.Display));
    val.viewportMetrics = decoder.decodeArrayPointer(new codec.PointerTo(window_manager_constants$.WmViewportMetrics));
    val.primaryDisplayId = decoder.decodeStruct(codec.Int64);
    val.internalDisplayId = decoder.decodeStruct(codec.Int64);
    val.mirrors = decoder.decodeArrayPointer(new codec.PointerTo(display1$.Display));
    return val;
  };

  WindowManagerClient_SetDisplayConfiguration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetDisplayConfiguration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(display1$.Display), val.displays);
    encoder.encodeArrayPointer(new codec.PointerTo(window_manager_constants$.WmViewportMetrics), val.viewportMetrics);
    encoder.encodeStruct(codec.Int64, val.primaryDisplayId);
    encoder.encodeStruct(codec.Int64, val.internalDisplayId);
    encoder.encodeArrayPointer(new codec.PointerTo(display1$.Display), val.mirrors);
  };
  function WindowManagerClient_SetDisplayConfiguration_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetDisplayConfiguration_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowManagerClient_SetDisplayConfiguration_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetDisplayConfiguration_ResponseParams.generate = function(generator_) {
    var generated = new WindowManagerClient_SetDisplayConfiguration_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_SetDisplayConfiguration_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowManagerClient_SetDisplayConfiguration_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetDisplayConfiguration_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetDisplayConfiguration_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetDisplayConfiguration_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowManagerClient_SetDisplayConfiguration_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_SetDisplayConfiguration_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetDisplayConfiguration_ResponseParams();
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

  WindowManagerClient_SetDisplayConfiguration_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetDisplayConfiguration_ResponseParams.encodedSize);
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
  function WindowManagerClient_SwapDisplayRoots_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SwapDisplayRoots_Params.prototype.initDefaults_ = function() {
    this.displayId1 = 0;
    this.displayId2 = 0;
  };
  WindowManagerClient_SwapDisplayRoots_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SwapDisplayRoots_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_SwapDisplayRoots_Params;
    generated.displayId1 = generator_.generateInt64();
    generated.displayId2 = generator_.generateInt64();
    return generated;
  };

  WindowManagerClient_SwapDisplayRoots_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayId1 = mutator_.mutateInt64(this.displayId1);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId2 = mutator_.mutateInt64(this.displayId2);
    }
    return this;
  };
  WindowManagerClient_SwapDisplayRoots_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SwapDisplayRoots_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SwapDisplayRoots_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SwapDisplayRoots_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_SwapDisplayRoots_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_SwapDisplayRoots_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SwapDisplayRoots_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayId1 = decoder.decodeStruct(codec.Int64);
    val.displayId2 = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WindowManagerClient_SwapDisplayRoots_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SwapDisplayRoots_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.displayId1);
    encoder.encodeStruct(codec.Int64, val.displayId2);
  };
  function WindowManagerClient_SwapDisplayRoots_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SwapDisplayRoots_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowManagerClient_SwapDisplayRoots_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SwapDisplayRoots_ResponseParams.generate = function(generator_) {
    var generated = new WindowManagerClient_SwapDisplayRoots_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_SwapDisplayRoots_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowManagerClient_SwapDisplayRoots_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SwapDisplayRoots_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SwapDisplayRoots_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SwapDisplayRoots_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowManagerClient_SwapDisplayRoots_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_SwapDisplayRoots_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SwapDisplayRoots_ResponseParams();
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

  WindowManagerClient_SwapDisplayRoots_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SwapDisplayRoots_ResponseParams.encodedSize);
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
  function WindowManagerClient_SetBlockingContainers_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetBlockingContainers_Params.prototype.initDefaults_ = function() {
    this.blockingContainers = null;
  };
  WindowManagerClient_SetBlockingContainers_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetBlockingContainers_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_SetBlockingContainers_Params;
    generated.blockingContainers = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.BlockingContainers, false);
    });
    return generated;
  };

  WindowManagerClient_SetBlockingContainers_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blockingContainers = mutator_.mutateArray(this.blockingContainers, function(val) {
        return mutator_.mutateStruct(ui.mojom.BlockingContainers, false);
      });
    }
    return this;
  };
  WindowManagerClient_SetBlockingContainers_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetBlockingContainers_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetBlockingContainers_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetBlockingContainers_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_SetBlockingContainers_Params.blockingContainers
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(window_manager_constants$.BlockingContainers), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_SetBlockingContainers_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_SetBlockingContainers_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetBlockingContainers_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blockingContainers = decoder.decodeArrayPointer(new codec.PointerTo(window_manager_constants$.BlockingContainers));
    return val;
  };

  WindowManagerClient_SetBlockingContainers_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetBlockingContainers_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(window_manager_constants$.BlockingContainers), val.blockingContainers);
  };
  function WindowManagerClient_SetBlockingContainers_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_SetBlockingContainers_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowManagerClient_SetBlockingContainers_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_SetBlockingContainers_ResponseParams.generate = function(generator_) {
    var generated = new WindowManagerClient_SetBlockingContainers_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_SetBlockingContainers_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowManagerClient_SetBlockingContainers_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_SetBlockingContainers_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_SetBlockingContainers_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_SetBlockingContainers_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowManagerClient_SetBlockingContainers_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_SetBlockingContainers_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_SetBlockingContainers_ResponseParams();
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

  WindowManagerClient_SetBlockingContainers_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_SetBlockingContainers_ResponseParams.encodedSize);
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
  function WindowManagerClient_WmResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmResponse_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.response = false;
  };
  WindowManagerClient_WmResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmResponse_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmResponse_Params;
    generated.changeId = generator_.generateUint32();
    generated.response = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_WmResponse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.response = mutator_.mutateBool(this.response);
    }
    return this;
  };
  WindowManagerClient_WmResponse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmResponse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmResponse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmResponse_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmResponse_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.response = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_WmResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    packed = 0;
    packed |= (val.response & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_WmSetBoundsResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetBoundsResponse_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
  };
  WindowManagerClient_WmSetBoundsResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetBoundsResponse_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetBoundsResponse_Params;
    generated.changeId = generator_.generateUint32();
    return generated;
  };

  WindowManagerClient_WmSetBoundsResponse_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    return this;
  };
  WindowManagerClient_WmSetBoundsResponse_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmSetBoundsResponse_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetBoundsResponse_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmSetBoundsResponse_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmSetBoundsResponse_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetBoundsResponse_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetBoundsResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_WmSetBoundsResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetBoundsResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_WmRequestClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmRequestClose_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowManagerClient_WmRequestClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmRequestClose_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmRequestClose_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManagerClient_WmRequestClose_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManagerClient_WmRequestClose_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmRequestClose_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmRequestClose_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmRequestClose_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmRequestClose_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmRequestClose_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmRequestClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManagerClient_WmRequestClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmRequestClose_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManagerClient_WmSetFrameDecorationValues_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.initDefaults_ = function() {
    this.values = null;
  };
  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetFrameDecorationValues_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetFrameDecorationValues_Params;
    generated.values = generator_.generateStruct(ui.mojom.FrameDecorationValues, false);
    return generated;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateStruct(ui.mojom.FrameDecorationValues, false);
    }
    return this;
  };
  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetFrameDecorationValues_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_WmSetFrameDecorationValues_Params.values
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, window_manager_constants$.FrameDecorationValues, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetFrameDecorationValues_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetFrameDecorationValues_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.values = decoder.decodeStructPointer(window_manager_constants$.FrameDecorationValues);
    return val;
  };

  WindowManagerClient_WmSetFrameDecorationValues_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(window_manager_constants$.FrameDecorationValues, val.values);
  };
  function WindowManagerClient_WmSetNonClientCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetNonClientCursor_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.cursor = null;
  };
  WindowManagerClient_WmSetNonClientCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetNonClientCursor_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetNonClientCursor_Params;
    generated.windowId = generator_.generateUint64();
    generated.cursor = generator_.generateStruct(ui.mojom.CursorData, false);
    return generated;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.cursor = mutator_.mutateStruct(ui.mojom.CursorData, false);
    }
    return this;
  };
  WindowManagerClient_WmSetNonClientCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursor !== null) {
      Array.prototype.push.apply(handles, this.cursor.getHandleDeps());
    }
    return handles;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetNonClientCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.cursor.setHandlesInternal_(handles, idx);
    return idx;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManagerClient_WmSetNonClientCursor_Params.cursor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, cursor$.CursorData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_WmSetNonClientCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetNonClientCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.cursor = decoder.decodeStructPointer(cursor$.CursorData);
    return val;
  };

  WindowManagerClient_WmSetNonClientCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetNonClientCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(cursor$.CursorData, val.cursor);
  };
  function WindowManagerClient_WmLockCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmLockCursor_Params.prototype.initDefaults_ = function() {
  };
  WindowManagerClient_WmLockCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmLockCursor_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmLockCursor_Params;
    return generated;
  };

  WindowManagerClient_WmLockCursor_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowManagerClient_WmLockCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmLockCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmLockCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmLockCursor_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmLockCursor_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowManagerClient_WmLockCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmLockCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowManagerClient_WmLockCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmLockCursor_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowManagerClient_WmUnlockCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmUnlockCursor_Params.prototype.initDefaults_ = function() {
  };
  WindowManagerClient_WmUnlockCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmUnlockCursor_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmUnlockCursor_Params;
    return generated;
  };

  WindowManagerClient_WmUnlockCursor_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowManagerClient_WmUnlockCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmUnlockCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmUnlockCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmUnlockCursor_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmUnlockCursor_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowManagerClient_WmUnlockCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmUnlockCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowManagerClient_WmUnlockCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmUnlockCursor_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowManagerClient_WmSetCursorVisible_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetCursorVisible_Params.prototype.initDefaults_ = function() {
    this.visible = false;
  };
  WindowManagerClient_WmSetCursorVisible_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetCursorVisible_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetCursorVisible_Params;
    generated.visible = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_WmSetCursorVisible_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  WindowManagerClient_WmSetCursorVisible_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmSetCursorVisible_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetCursorVisible_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmSetCursorVisible_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmSetCursorVisible_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetCursorVisible_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetCursorVisible_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
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

  WindowManagerClient_WmSetCursorVisible_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetCursorVisible_Params.encodedSize);
    encoder.writeUint32(0);
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
  function WindowManagerClient_WmSetCursorSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetCursorSize_Params.prototype.initDefaults_ = function() {
    this.cursorSize = 0;
  };
  WindowManagerClient_WmSetCursorSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetCursorSize_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetCursorSize_Params;
    generated.cursorSize = generator_.generateEnum(0, 1);
    return generated;
  };

  WindowManagerClient_WmSetCursorSize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cursorSize = mutator_.mutateEnum(this.cursorSize, 0, 1);
    }
    return this;
  };
  WindowManagerClient_WmSetCursorSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmSetCursorSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetCursorSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmSetCursorSize_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_WmSetCursorSize_Params.cursorSize
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, cursor$.CursorSize);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_WmSetCursorSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetCursorSize_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetCursorSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cursorSize = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_WmSetCursorSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetCursorSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.cursorSize);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_WmSetGlobalOverrideCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetGlobalOverrideCursor_Params.prototype.initDefaults_ = function() {
    this.cursor = null;
  };
  WindowManagerClient_WmSetGlobalOverrideCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetGlobalOverrideCursor_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetGlobalOverrideCursor_Params;
    generated.cursor = generator_.generateStruct(ui.mojom.CursorData, true);
    return generated;
  };

  WindowManagerClient_WmSetGlobalOverrideCursor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cursor = mutator_.mutateStruct(ui.mojom.CursorData, true);
    }
    return this;
  };
  WindowManagerClient_WmSetGlobalOverrideCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursor !== null) {
      Array.prototype.push.apply(handles, this.cursor.getHandleDeps());
    }
    return handles;
  };

  WindowManagerClient_WmSetGlobalOverrideCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetGlobalOverrideCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.cursor.setHandlesInternal_(handles, idx);
    return idx;
  };

  WindowManagerClient_WmSetGlobalOverrideCursor_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_WmSetGlobalOverrideCursor_Params.cursor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, cursor$.CursorData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_WmSetGlobalOverrideCursor_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetGlobalOverrideCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetGlobalOverrideCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cursor = decoder.decodeStructPointer(cursor$.CursorData);
    return val;
  };

  WindowManagerClient_WmSetGlobalOverrideCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetGlobalOverrideCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(cursor$.CursorData, val.cursor);
  };
  function WindowManagerClient_WmMoveCursorToDisplayLocation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.prototype.initDefaults_ = function() {
    this.displayPixels = null;
    this.displayId = 0;
  };
  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmMoveCursorToDisplayLocation_Params;
    generated.displayPixels = generator_.generateStruct(gfx.mojom.Point, false);
    generated.displayId = generator_.generateInt64();
    return generated;
  };

  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.displayPixels = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    return this;
  };
  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_WmMoveCursorToDisplayLocation_Params.displayPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmMoveCursorToDisplayLocation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.displayPixels = decoder.decodeStructPointer(geometry$.Point);
    val.displayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WindowManagerClient_WmMoveCursorToDisplayLocation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmMoveCursorToDisplayLocation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Point, val.displayPixels);
    encoder.encodeStruct(codec.Int64, val.displayId);
  };
  function WindowManagerClient_WmConfineCursorToBounds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmConfineCursorToBounds_Params.prototype.initDefaults_ = function() {
    this.boundsInPixels = null;
    this.displayId = 0;
  };
  WindowManagerClient_WmConfineCursorToBounds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmConfineCursorToBounds_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmConfineCursorToBounds_Params;
    generated.boundsInPixels = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.displayId = generator_.generateInt64();
    return generated;
  };

  WindowManagerClient_WmConfineCursorToBounds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.boundsInPixels = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    return this;
  };
  WindowManagerClient_WmConfineCursorToBounds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmConfineCursorToBounds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmConfineCursorToBounds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmConfineCursorToBounds_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerClient_WmConfineCursorToBounds_Params.boundsInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerClient_WmConfineCursorToBounds_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_WmConfineCursorToBounds_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmConfineCursorToBounds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.boundsInPixels = decoder.decodeStructPointer(geometry$.Rect);
    val.displayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WindowManagerClient_WmConfineCursorToBounds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmConfineCursorToBounds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.boundsInPixels);
    encoder.encodeStruct(codec.Int64, val.displayId);
  };
  function WindowManagerClient_WmSetCursorTouchVisible_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_WmSetCursorTouchVisible_Params.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  WindowManagerClient_WmSetCursorTouchVisible_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_WmSetCursorTouchVisible_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_WmSetCursorTouchVisible_Params;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  WindowManagerClient_WmSetCursorTouchVisible_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  WindowManagerClient_WmSetCursorTouchVisible_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_WmSetCursorTouchVisible_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_WmSetCursorTouchVisible_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_WmSetCursorTouchVisible_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_WmSetCursorTouchVisible_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowManagerClient_WmSetCursorTouchVisible_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_WmSetCursorTouchVisible_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerClient_WmSetCursorTouchVisible_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_WmSetCursorTouchVisible_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowManagerClient_OnWmCreatedTopLevelWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_OnWmCreatedTopLevelWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.validate = function(messageValidator, offset) {
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

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_OnWmCreatedTopLevelWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowManagerClient_OnAcceleratorAck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerClient_OnAcceleratorAck_Params.prototype.initDefaults_ = function() {
    this.ackId = 0;
    this.eventResult = 0;
    this.properties = null;
  };
  WindowManagerClient_OnAcceleratorAck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerClient_OnAcceleratorAck_Params.generate = function(generator_) {
    var generated = new WindowManagerClient_OnAcceleratorAck_Params;
    generated.ackId = generator_.generateUint32();
    generated.eventResult = generator_.generateEnum(0, 1);
    generated.properties = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateUint8();
        });
      });
    return generated;
  };

  WindowManagerClient_OnAcceleratorAck_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ackId = mutator_.mutateUint32(this.ackId);
    }
    if (mutator_.chooseMutateField()) {
      this.eventResult = mutator_.mutateEnum(this.eventResult, 0, 1);
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
    return this;
  };
  WindowManagerClient_OnAcceleratorAck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowManagerClient_OnAcceleratorAck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerClient_OnAcceleratorAck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowManagerClient_OnAcceleratorAck_Params.validate = function(messageValidator, offset) {
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



    // validate WindowManagerClient_OnAcceleratorAck_Params.eventResult
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, window_tree_constants$.EventResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManagerClient_OnAcceleratorAck_Params.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowManagerClient_OnAcceleratorAck_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerClient_OnAcceleratorAck_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerClient_OnAcceleratorAck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ackId = decoder.decodeStruct(codec.Uint32);
    val.eventResult = decoder.decodeStruct(codec.Int32);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  WindowManagerClient_OnAcceleratorAck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerClient_OnAcceleratorAck_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.ackId);
    encoder.encodeStruct(codec.Int32, val.eventResult);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
  };
  var kWindowManager_OnConnect_Name = 155966734;
  var kWindowManager_WmOnAcceleratedWidgetForDisplay_Name = 379262682;
  var kWindowManager_WmNewDisplayAdded_Name = 1371233460;
  var kWindowManager_WmDisplayRemoved_Name = 266024843;
  var kWindowManager_WmDisplayModified_Name = 1670869534;
  var kWindowManager_WmSetBounds_Name = 2075775565;
  var kWindowManager_WmSetProperty_Name = 2137484337;
  var kWindowManager_WmSetModalType_Name = 2116162797;
  var kWindowManager_WmSetCanFocus_Name = 1183829530;
  var kWindowManager_WmCreateTopLevelWindow_Name = 1090176416;
  var kWindowManager_WmClientJankinessChanged_Name = 1644488597;
  var kWindowManager_WmBuildDragImage_Name = 1723855485;
  var kWindowManager_WmMoveDragImage_Name = 1798369334;
  var kWindowManager_WmDestroyDragImage_Name = 1995237306;
  var kWindowManager_WmPerformMoveLoop_Name = 1472516588;
  var kWindowManager_WmCancelMoveLoop_Name = 1755456907;
  var kWindowManager_WmDeactivateWindow_Name = 2044599900;
  var kWindowManager_WmStackAbove_Name = 460550951;
  var kWindowManager_WmStackAtTop_Name = 399100876;
  var kWindowManager_WmPerformWmAction_Name = 2033494031;
  var kWindowManager_OnAccelerator_Name = 1035909111;
  var kWindowManager_OnCursorTouchVisibleChanged_Name = 318314671;
  var kWindowManager_OnEventBlockedByModalWindow_Name = 94246619;

  function WindowManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowManager,
                                                   handleOrPtrInfo);
  }

  function WindowManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowManager, associatedInterfacePtrInfo);
  }

  WindowManagerAssociatedPtr.prototype =
      Object.create(WindowManagerPtr.prototype);
  WindowManagerAssociatedPtr.prototype.constructor =
      WindowManagerAssociatedPtr;

  function WindowManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowManagerPtr.prototype.onConnect = function() {
    return WindowManagerProxy.prototype.onConnect
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.onConnect = function() {
    var params_ = new WindowManager_OnConnect_Params();
    var builder = new codec.MessageV0Builder(
        kWindowManager_OnConnect_Name,
        codec.align(WindowManager_OnConnect_Params.encodedSize));
    builder.encodeStruct(WindowManager_OnConnect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmOnAcceleratedWidgetForDisplay = function() {
    return WindowManagerProxy.prototype.wmOnAcceleratedWidgetForDisplay
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmOnAcceleratedWidgetForDisplay = function(displayId, surfaceHandle) {
    var params_ = new WindowManager_WmOnAcceleratedWidgetForDisplay_Params();
    params_.displayId = displayId;
    params_.surfaceHandle = surfaceHandle;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmOnAcceleratedWidgetForDisplay_Name,
        codec.align(WindowManager_WmOnAcceleratedWidgetForDisplay_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmOnAcceleratedWidgetForDisplay_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmNewDisplayAdded = function() {
    return WindowManagerProxy.prototype.wmNewDisplayAdded
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmNewDisplayAdded = function(display, root, parentDrawn, localSurfaceId) {
    var params_ = new WindowManager_WmNewDisplayAdded_Params();
    params_.display = display;
    params_.root = root;
    params_.parentDrawn = parentDrawn;
    params_.localSurfaceId = localSurfaceId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmNewDisplayAdded_Name,
        codec.align(WindowManager_WmNewDisplayAdded_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmNewDisplayAdded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmDisplayRemoved = function() {
    return WindowManagerProxy.prototype.wmDisplayRemoved
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmDisplayRemoved = function(displayId) {
    var params_ = new WindowManager_WmDisplayRemoved_Params();
    params_.displayId = displayId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmDisplayRemoved_Name,
        codec.align(WindowManager_WmDisplayRemoved_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmDisplayRemoved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmDisplayModified = function() {
    return WindowManagerProxy.prototype.wmDisplayModified
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmDisplayModified = function(display) {
    var params_ = new WindowManager_WmDisplayModified_Params();
    params_.display = display;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmDisplayModified_Name,
        codec.align(WindowManager_WmDisplayModified_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmDisplayModified_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmSetBounds = function() {
    return WindowManagerProxy.prototype.wmSetBounds
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmSetBounds = function(changeId, windowId, bounds) {
    var params_ = new WindowManager_WmSetBounds_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.bounds = bounds;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmSetBounds_Name,
        codec.align(WindowManager_WmSetBounds_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmSetBounds_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmSetProperty = function() {
    return WindowManagerProxy.prototype.wmSetProperty
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmSetProperty = function(changeId, windowId, name, value) {
    var params_ = new WindowManager_WmSetProperty_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.name = name;
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmSetProperty_Name,
        codec.align(WindowManager_WmSetProperty_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmSetProperty_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmSetModalType = function() {
    return WindowManagerProxy.prototype.wmSetModalType
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmSetModalType = function(windowId, type) {
    var params_ = new WindowManager_WmSetModalType_Params();
    params_.windowId = windowId;
    params_.type = type;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmSetModalType_Name,
        codec.align(WindowManager_WmSetModalType_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmSetModalType_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmSetCanFocus = function() {
    return WindowManagerProxy.prototype.wmSetCanFocus
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmSetCanFocus = function(windowId, canFocus) {
    var params_ = new WindowManager_WmSetCanFocus_Params();
    params_.windowId = windowId;
    params_.canFocus = canFocus;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmSetCanFocus_Name,
        codec.align(WindowManager_WmSetCanFocus_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmSetCanFocus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmCreateTopLevelWindow = function() {
    return WindowManagerProxy.prototype.wmCreateTopLevelWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmCreateTopLevelWindow = function(changeId, frameSinkId, properties) {
    var params_ = new WindowManager_WmCreateTopLevelWindow_Params();
    params_.changeId = changeId;
    params_.frameSinkId = frameSinkId;
    params_.properties = properties;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmCreateTopLevelWindow_Name,
        codec.align(WindowManager_WmCreateTopLevelWindow_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmCreateTopLevelWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmClientJankinessChanged = function() {
    return WindowManagerProxy.prototype.wmClientJankinessChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmClientJankinessChanged = function(clientId, janky) {
    var params_ = new WindowManager_WmClientJankinessChanged_Params();
    params_.clientId = clientId;
    params_.janky = janky;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmClientJankinessChanged_Name,
        codec.align(WindowManager_WmClientJankinessChanged_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmClientJankinessChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmBuildDragImage = function() {
    return WindowManagerProxy.prototype.wmBuildDragImage
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmBuildDragImage = function(screenLocation, dragImage, dragImageOffset, source) {
    var params_ = new WindowManager_WmBuildDragImage_Params();
    params_.screenLocation = screenLocation;
    params_.dragImage = dragImage;
    params_.dragImageOffset = dragImageOffset;
    params_.source = source;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmBuildDragImage_Name,
        codec.align(WindowManager_WmBuildDragImage_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmBuildDragImage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmMoveDragImage = function() {
    return WindowManagerProxy.prototype.wmMoveDragImage
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmMoveDragImage = function(screenLocation) {
    var params_ = new WindowManager_WmMoveDragImage_Params();
    params_.screenLocation = screenLocation;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowManager_WmMoveDragImage_Name,
          codec.align(WindowManager_WmMoveDragImage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManager_WmMoveDragImage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManager_WmMoveDragImage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerPtr.prototype.wmDestroyDragImage = function() {
    return WindowManagerProxy.prototype.wmDestroyDragImage
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmDestroyDragImage = function() {
    var params_ = new WindowManager_WmDestroyDragImage_Params();
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmDestroyDragImage_Name,
        codec.align(WindowManager_WmDestroyDragImage_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmDestroyDragImage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmPerformMoveLoop = function() {
    return WindowManagerProxy.prototype.wmPerformMoveLoop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmPerformMoveLoop = function(changeId, windowId, source, cursorLocation) {
    var params_ = new WindowManager_WmPerformMoveLoop_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.source = source;
    params_.cursorLocation = cursorLocation;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmPerformMoveLoop_Name,
        codec.align(WindowManager_WmPerformMoveLoop_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmPerformMoveLoop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmCancelMoveLoop = function() {
    return WindowManagerProxy.prototype.wmCancelMoveLoop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmCancelMoveLoop = function(changeId) {
    var params_ = new WindowManager_WmCancelMoveLoop_Params();
    params_.changeId = changeId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmCancelMoveLoop_Name,
        codec.align(WindowManager_WmCancelMoveLoop_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmCancelMoveLoop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmDeactivateWindow = function() {
    return WindowManagerProxy.prototype.wmDeactivateWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmDeactivateWindow = function(windowId) {
    var params_ = new WindowManager_WmDeactivateWindow_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmDeactivateWindow_Name,
        codec.align(WindowManager_WmDeactivateWindow_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmDeactivateWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmStackAbove = function() {
    return WindowManagerProxy.prototype.wmStackAbove
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmStackAbove = function(changeId, aboveId, belowId) {
    var params_ = new WindowManager_WmStackAbove_Params();
    params_.changeId = changeId;
    params_.aboveId = aboveId;
    params_.belowId = belowId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmStackAbove_Name,
        codec.align(WindowManager_WmStackAbove_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmStackAbove_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmStackAtTop = function() {
    return WindowManagerProxy.prototype.wmStackAtTop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmStackAtTop = function(changeId, windowId) {
    var params_ = new WindowManager_WmStackAtTop_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmStackAtTop_Name,
        codec.align(WindowManager_WmStackAtTop_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmStackAtTop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.wmPerformWmAction = function() {
    return WindowManagerProxy.prototype.wmPerformWmAction
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.wmPerformWmAction = function(windowId, action) {
    var params_ = new WindowManager_WmPerformWmAction_Params();
    params_.windowId = windowId;
    params_.action = action;
    var builder = new codec.MessageV0Builder(
        kWindowManager_WmPerformWmAction_Name,
        codec.align(WindowManager_WmPerformWmAction_Params.encodedSize));
    builder.encodeStruct(WindowManager_WmPerformWmAction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.onAccelerator = function() {
    return WindowManagerProxy.prototype.onAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.onAccelerator = function(ackId, acceleratorId, event) {
    var params_ = new WindowManager_OnAccelerator_Params();
    params_.ackId = ackId;
    params_.acceleratorId = acceleratorId;
    params_.event = event;
    var builder = new codec.MessageV0Builder(
        kWindowManager_OnAccelerator_Name,
        codec.align(WindowManager_OnAccelerator_Params.encodedSize));
    builder.encodeStruct(WindowManager_OnAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.onCursorTouchVisibleChanged = function() {
    return WindowManagerProxy.prototype.onCursorTouchVisibleChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.onCursorTouchVisibleChanged = function(enabled) {
    var params_ = new WindowManager_OnCursorTouchVisibleChanged_Params();
    params_.enabled = enabled;
    var builder = new codec.MessageV0Builder(
        kWindowManager_OnCursorTouchVisibleChanged_Name,
        codec.align(WindowManager_OnCursorTouchVisibleChanged_Params.encodedSize));
    builder.encodeStruct(WindowManager_OnCursorTouchVisibleChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerPtr.prototype.onEventBlockedByModalWindow = function() {
    return WindowManagerProxy.prototype.onEventBlockedByModalWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerProxy.prototype.onEventBlockedByModalWindow = function(windowId) {
    var params_ = new WindowManager_OnEventBlockedByModalWindow_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManager_OnEventBlockedByModalWindow_Name,
        codec.align(WindowManager_OnEventBlockedByModalWindow_Params.encodedSize));
    builder.encodeStruct(WindowManager_OnEventBlockedByModalWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowManagerStub.prototype.onConnect = function() {
    return this.delegate_ && this.delegate_.onConnect && this.delegate_.onConnect();
  }
  WindowManagerStub.prototype.wmOnAcceleratedWidgetForDisplay = function(displayId, surfaceHandle) {
    return this.delegate_ && this.delegate_.wmOnAcceleratedWidgetForDisplay && this.delegate_.wmOnAcceleratedWidgetForDisplay(displayId, surfaceHandle);
  }
  WindowManagerStub.prototype.wmNewDisplayAdded = function(display, root, parentDrawn, localSurfaceId) {
    return this.delegate_ && this.delegate_.wmNewDisplayAdded && this.delegate_.wmNewDisplayAdded(display, root, parentDrawn, localSurfaceId);
  }
  WindowManagerStub.prototype.wmDisplayRemoved = function(displayId) {
    return this.delegate_ && this.delegate_.wmDisplayRemoved && this.delegate_.wmDisplayRemoved(displayId);
  }
  WindowManagerStub.prototype.wmDisplayModified = function(display) {
    return this.delegate_ && this.delegate_.wmDisplayModified && this.delegate_.wmDisplayModified(display);
  }
  WindowManagerStub.prototype.wmSetBounds = function(changeId, windowId, bounds) {
    return this.delegate_ && this.delegate_.wmSetBounds && this.delegate_.wmSetBounds(changeId, windowId, bounds);
  }
  WindowManagerStub.prototype.wmSetProperty = function(changeId, windowId, name, value) {
    return this.delegate_ && this.delegate_.wmSetProperty && this.delegate_.wmSetProperty(changeId, windowId, name, value);
  }
  WindowManagerStub.prototype.wmSetModalType = function(windowId, type) {
    return this.delegate_ && this.delegate_.wmSetModalType && this.delegate_.wmSetModalType(windowId, type);
  }
  WindowManagerStub.prototype.wmSetCanFocus = function(windowId, canFocus) {
    return this.delegate_ && this.delegate_.wmSetCanFocus && this.delegate_.wmSetCanFocus(windowId, canFocus);
  }
  WindowManagerStub.prototype.wmCreateTopLevelWindow = function(changeId, frameSinkId, properties) {
    return this.delegate_ && this.delegate_.wmCreateTopLevelWindow && this.delegate_.wmCreateTopLevelWindow(changeId, frameSinkId, properties);
  }
  WindowManagerStub.prototype.wmClientJankinessChanged = function(clientId, janky) {
    return this.delegate_ && this.delegate_.wmClientJankinessChanged && this.delegate_.wmClientJankinessChanged(clientId, janky);
  }
  WindowManagerStub.prototype.wmBuildDragImage = function(screenLocation, dragImage, dragImageOffset, source) {
    return this.delegate_ && this.delegate_.wmBuildDragImage && this.delegate_.wmBuildDragImage(screenLocation, dragImage, dragImageOffset, source);
  }
  WindowManagerStub.prototype.wmMoveDragImage = function(screenLocation) {
    return this.delegate_ && this.delegate_.wmMoveDragImage && this.delegate_.wmMoveDragImage(screenLocation);
  }
  WindowManagerStub.prototype.wmDestroyDragImage = function() {
    return this.delegate_ && this.delegate_.wmDestroyDragImage && this.delegate_.wmDestroyDragImage();
  }
  WindowManagerStub.prototype.wmPerformMoveLoop = function(changeId, windowId, source, cursorLocation) {
    return this.delegate_ && this.delegate_.wmPerformMoveLoop && this.delegate_.wmPerformMoveLoop(changeId, windowId, source, cursorLocation);
  }
  WindowManagerStub.prototype.wmCancelMoveLoop = function(changeId) {
    return this.delegate_ && this.delegate_.wmCancelMoveLoop && this.delegate_.wmCancelMoveLoop(changeId);
  }
  WindowManagerStub.prototype.wmDeactivateWindow = function(windowId) {
    return this.delegate_ && this.delegate_.wmDeactivateWindow && this.delegate_.wmDeactivateWindow(windowId);
  }
  WindowManagerStub.prototype.wmStackAbove = function(changeId, aboveId, belowId) {
    return this.delegate_ && this.delegate_.wmStackAbove && this.delegate_.wmStackAbove(changeId, aboveId, belowId);
  }
  WindowManagerStub.prototype.wmStackAtTop = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.wmStackAtTop && this.delegate_.wmStackAtTop(changeId, windowId);
  }
  WindowManagerStub.prototype.wmPerformWmAction = function(windowId, action) {
    return this.delegate_ && this.delegate_.wmPerformWmAction && this.delegate_.wmPerformWmAction(windowId, action);
  }
  WindowManagerStub.prototype.onAccelerator = function(ackId, acceleratorId, event) {
    return this.delegate_ && this.delegate_.onAccelerator && this.delegate_.onAccelerator(ackId, acceleratorId, event);
  }
  WindowManagerStub.prototype.onCursorTouchVisibleChanged = function(enabled) {
    return this.delegate_ && this.delegate_.onCursorTouchVisibleChanged && this.delegate_.onCursorTouchVisibleChanged(enabled);
  }
  WindowManagerStub.prototype.onEventBlockedByModalWindow = function(windowId) {
    return this.delegate_ && this.delegate_.onEventBlockedByModalWindow && this.delegate_.onEventBlockedByModalWindow(windowId);
  }

  WindowManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManager_OnConnect_Name:
      var params = reader.decodeStruct(WindowManager_OnConnect_Params);
      this.onConnect();
      return true;
    case kWindowManager_WmOnAcceleratedWidgetForDisplay_Name:
      var params = reader.decodeStruct(WindowManager_WmOnAcceleratedWidgetForDisplay_Params);
      this.wmOnAcceleratedWidgetForDisplay(params.displayId, params.surfaceHandle);
      return true;
    case kWindowManager_WmNewDisplayAdded_Name:
      var params = reader.decodeStruct(WindowManager_WmNewDisplayAdded_Params);
      this.wmNewDisplayAdded(params.display, params.root, params.parentDrawn, params.localSurfaceId);
      return true;
    case kWindowManager_WmDisplayRemoved_Name:
      var params = reader.decodeStruct(WindowManager_WmDisplayRemoved_Params);
      this.wmDisplayRemoved(params.displayId);
      return true;
    case kWindowManager_WmDisplayModified_Name:
      var params = reader.decodeStruct(WindowManager_WmDisplayModified_Params);
      this.wmDisplayModified(params.display);
      return true;
    case kWindowManager_WmSetBounds_Name:
      var params = reader.decodeStruct(WindowManager_WmSetBounds_Params);
      this.wmSetBounds(params.changeId, params.windowId, params.bounds);
      return true;
    case kWindowManager_WmSetProperty_Name:
      var params = reader.decodeStruct(WindowManager_WmSetProperty_Params);
      this.wmSetProperty(params.changeId, params.windowId, params.name, params.value);
      return true;
    case kWindowManager_WmSetModalType_Name:
      var params = reader.decodeStruct(WindowManager_WmSetModalType_Params);
      this.wmSetModalType(params.windowId, params.type);
      return true;
    case kWindowManager_WmSetCanFocus_Name:
      var params = reader.decodeStruct(WindowManager_WmSetCanFocus_Params);
      this.wmSetCanFocus(params.windowId, params.canFocus);
      return true;
    case kWindowManager_WmCreateTopLevelWindow_Name:
      var params = reader.decodeStruct(WindowManager_WmCreateTopLevelWindow_Params);
      this.wmCreateTopLevelWindow(params.changeId, params.frameSinkId, params.properties);
      return true;
    case kWindowManager_WmClientJankinessChanged_Name:
      var params = reader.decodeStruct(WindowManager_WmClientJankinessChanged_Params);
      this.wmClientJankinessChanged(params.clientId, params.janky);
      return true;
    case kWindowManager_WmBuildDragImage_Name:
      var params = reader.decodeStruct(WindowManager_WmBuildDragImage_Params);
      this.wmBuildDragImage(params.screenLocation, params.dragImage, params.dragImageOffset, params.source);
      return true;
    case kWindowManager_WmDestroyDragImage_Name:
      var params = reader.decodeStruct(WindowManager_WmDestroyDragImage_Params);
      this.wmDestroyDragImage();
      return true;
    case kWindowManager_WmPerformMoveLoop_Name:
      var params = reader.decodeStruct(WindowManager_WmPerformMoveLoop_Params);
      this.wmPerformMoveLoop(params.changeId, params.windowId, params.source, params.cursorLocation);
      return true;
    case kWindowManager_WmCancelMoveLoop_Name:
      var params = reader.decodeStruct(WindowManager_WmCancelMoveLoop_Params);
      this.wmCancelMoveLoop(params.changeId);
      return true;
    case kWindowManager_WmDeactivateWindow_Name:
      var params = reader.decodeStruct(WindowManager_WmDeactivateWindow_Params);
      this.wmDeactivateWindow(params.windowId);
      return true;
    case kWindowManager_WmStackAbove_Name:
      var params = reader.decodeStruct(WindowManager_WmStackAbove_Params);
      this.wmStackAbove(params.changeId, params.aboveId, params.belowId);
      return true;
    case kWindowManager_WmStackAtTop_Name:
      var params = reader.decodeStruct(WindowManager_WmStackAtTop_Params);
      this.wmStackAtTop(params.changeId, params.windowId);
      return true;
    case kWindowManager_WmPerformWmAction_Name:
      var params = reader.decodeStruct(WindowManager_WmPerformWmAction_Params);
      this.wmPerformWmAction(params.windowId, params.action);
      return true;
    case kWindowManager_OnAccelerator_Name:
      var params = reader.decodeStruct(WindowManager_OnAccelerator_Params);
      this.onAccelerator(params.ackId, params.acceleratorId, params.event);
      return true;
    case kWindowManager_OnCursorTouchVisibleChanged_Name:
      var params = reader.decodeStruct(WindowManager_OnCursorTouchVisibleChanged_Params);
      this.onCursorTouchVisibleChanged(params.enabled);
      return true;
    case kWindowManager_OnEventBlockedByModalWindow_Name:
      var params = reader.decodeStruct(WindowManager_OnEventBlockedByModalWindow_Params);
      this.onEventBlockedByModalWindow(params.windowId);
      return true;
    default:
      return false;
    }
  };

  WindowManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManager_WmMoveDragImage_Name:
      var params = reader.decodeStruct(WindowManager_WmMoveDragImage_Params);
      this.wmMoveDragImage(params.screenLocation).then(function(response) {
        var responseParams =
            new WindowManager_WmMoveDragImage_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kWindowManager_WmMoveDragImage_Name,
            codec.align(WindowManager_WmMoveDragImage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManager_WmMoveDragImage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWindowManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowManager_OnConnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_OnConnect_Params;
      break;
      case kWindowManager_WmOnAcceleratedWidgetForDisplay_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmOnAcceleratedWidgetForDisplay_Params;
      break;
      case kWindowManager_WmNewDisplayAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmNewDisplayAdded_Params;
      break;
      case kWindowManager_WmDisplayRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmDisplayRemoved_Params;
      break;
      case kWindowManager_WmDisplayModified_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmDisplayModified_Params;
      break;
      case kWindowManager_WmSetBounds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmSetBounds_Params;
      break;
      case kWindowManager_WmSetProperty_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmSetProperty_Params;
      break;
      case kWindowManager_WmSetModalType_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmSetModalType_Params;
      break;
      case kWindowManager_WmSetCanFocus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmSetCanFocus_Params;
      break;
      case kWindowManager_WmCreateTopLevelWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmCreateTopLevelWindow_Params;
      break;
      case kWindowManager_WmClientJankinessChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmClientJankinessChanged_Params;
      break;
      case kWindowManager_WmBuildDragImage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmBuildDragImage_Params;
      break;
      case kWindowManager_WmMoveDragImage_Name:
        if (message.expectsResponse())
          paramsClass = WindowManager_WmMoveDragImage_Params;
      break;
      case kWindowManager_WmDestroyDragImage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmDestroyDragImage_Params;
      break;
      case kWindowManager_WmPerformMoveLoop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmPerformMoveLoop_Params;
      break;
      case kWindowManager_WmCancelMoveLoop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmCancelMoveLoop_Params;
      break;
      case kWindowManager_WmDeactivateWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmDeactivateWindow_Params;
      break;
      case kWindowManager_WmStackAbove_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmStackAbove_Params;
      break;
      case kWindowManager_WmStackAtTop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmStackAtTop_Params;
      break;
      case kWindowManager_WmPerformWmAction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_WmPerformWmAction_Params;
      break;
      case kWindowManager_OnAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_OnAccelerator_Params;
      break;
      case kWindowManager_OnCursorTouchVisibleChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_OnCursorTouchVisibleChanged_Params;
      break;
      case kWindowManager_OnEventBlockedByModalWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManager_OnEventBlockedByModalWindow_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWindowManager_WmMoveDragImage_Name:
        if (message.isResponse())
          paramsClass = WindowManager_WmMoveDragImage_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WindowManager = {
    name: 'ui.mojom.WindowManager',
    kVersion: 0,
    ptrClass: WindowManagerPtr,
    proxyClass: WindowManagerProxy,
    stubClass: WindowManagerStub,
    validateRequest: validateWindowManagerRequest,
    validateResponse: validateWindowManagerResponse,
    mojomId: 'services/ui/public/interfaces/window_manager.mojom',
    fuzzMethods: {
      onConnect: {
        params: WindowManager_OnConnect_Params,
      },
      wmOnAcceleratedWidgetForDisplay: {
        params: WindowManager_WmOnAcceleratedWidgetForDisplay_Params,
      },
      wmNewDisplayAdded: {
        params: WindowManager_WmNewDisplayAdded_Params,
      },
      wmDisplayRemoved: {
        params: WindowManager_WmDisplayRemoved_Params,
      },
      wmDisplayModified: {
        params: WindowManager_WmDisplayModified_Params,
      },
      wmSetBounds: {
        params: WindowManager_WmSetBounds_Params,
      },
      wmSetProperty: {
        params: WindowManager_WmSetProperty_Params,
      },
      wmSetModalType: {
        params: WindowManager_WmSetModalType_Params,
      },
      wmSetCanFocus: {
        params: WindowManager_WmSetCanFocus_Params,
      },
      wmCreateTopLevelWindow: {
        params: WindowManager_WmCreateTopLevelWindow_Params,
      },
      wmClientJankinessChanged: {
        params: WindowManager_WmClientJankinessChanged_Params,
      },
      wmBuildDragImage: {
        params: WindowManager_WmBuildDragImage_Params,
      },
      wmMoveDragImage: {
        params: WindowManager_WmMoveDragImage_Params,
      },
      wmDestroyDragImage: {
        params: WindowManager_WmDestroyDragImage_Params,
      },
      wmPerformMoveLoop: {
        params: WindowManager_WmPerformMoveLoop_Params,
      },
      wmCancelMoveLoop: {
        params: WindowManager_WmCancelMoveLoop_Params,
      },
      wmDeactivateWindow: {
        params: WindowManager_WmDeactivateWindow_Params,
      },
      wmStackAbove: {
        params: WindowManager_WmStackAbove_Params,
      },
      wmStackAtTop: {
        params: WindowManager_WmStackAtTop_Params,
      },
      wmPerformWmAction: {
        params: WindowManager_WmPerformWmAction_Params,
      },
      onAccelerator: {
        params: WindowManager_OnAccelerator_Params,
      },
      onCursorTouchVisibleChanged: {
        params: WindowManager_OnCursorTouchVisibleChanged_Params,
      },
      onEventBlockedByModalWindow: {
        params: WindowManager_OnEventBlockedByModalWindow_Params,
      },
    },
  };
  WindowManager.kFocusable_InitProperty = "init:focusable",
  WindowManager.kTranslucent_InitProperty = "init:translucent",
  WindowManager.kBounds_InitProperty = "init:bounds",
  WindowManager.kContainerId_InitProperty = "init:container_id",
  WindowManager.kDisableImmersive_InitProperty = "init:disable_immersive",
  WindowManager.kDisplayId_InitProperty = "init:display_id",
  WindowManager.kRemoveStandardFrame_InitProperty = "init:remove-standard-frame",
  WindowManager.kActiveFrameColor_InitProperty = "init:active-frame-color",
  WindowManager.kInactiveFrameColor_InitProperty = "init:inactive-frame-color",
  WindowManager.kWindowIgnoredByShelf_InitProperty = "init:window-ignored-by-shelf",
  WindowManager.kWindowType_InitProperty = "init:window-type",
  WindowManager.kAlwaysOnTop_Property = "prop:always_on_top",
  WindowManager.kAppIcon_Property = "prop:app-icon",
  WindowManager.kDrawAttention_Property = "prop:draw-attention",
  WindowManager.kExcludeFromMru_Property = "prop:exclude_from_mru",
  WindowManager.kImmersiveFullscreen_Property = "prop:immersive-fullscreen",
  WindowManager.kMinimumSize_Property = "prop:minimum-size",
  WindowManager.kName_Property = "prop:name",
  WindowManager.kPanelAttached_Property = "prop:panel-attached",
  WindowManager.kPreferredSize_Property = "prop:preferred-size",
  WindowManager.kRenderParentTitleArea_Property = "render-parent-non-client-area",
  WindowManager.kResizeBehavior_Property = "prop:resize-behavior",
  WindowManager.kRestoreBounds_Property = "prop:restore-bounds",
  WindowManager.kShadowElevation_Property = "prop:shadow-elevation",
  WindowManager.kShelfID_Property = "prop:shelf-id",
  WindowManager.kShelfItemType_Property = "prop:shelf-item-type",
  WindowManager.kShowState_Property = "prop:show-state",
  WindowManager.kWindowCornerRadius_Property = "prop:window-corner-radius",
  WindowManager.kWindowIcon_Property = "prop:window-icon",
  WindowManager.kWindowTitle_Property = "prop:window-title",
  WindowManager.kWindowTitleShown_Property = "prop:window-title-shown",
  WindowManagerStub.prototype.validator = validateWindowManagerRequest;
  WindowManagerProxy.prototype.validator = validateWindowManagerResponse;
  var kWindowManagerClient_AddActivationParent_Name = 587269451;
  var kWindowManagerClient_RemoveActivationParent_Name = 1977105230;
  var kWindowManagerClient_SetExtendedHitRegionForChildren_Name = 1519506693;
  var kWindowManagerClient_AddAccelerators_Name = 768212718;
  var kWindowManagerClient_RemoveAccelerator_Name = 559329449;
  var kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name = 637403525;
  var kWindowManagerClient_SetDisplayRoot_Name = 394486537;
  var kWindowManagerClient_SetDisplayConfiguration_Name = 1640783283;
  var kWindowManagerClient_SwapDisplayRoots_Name = 767411020;
  var kWindowManagerClient_SetBlockingContainers_Name = 1063373745;
  var kWindowManagerClient_WmResponse_Name = 694829916;
  var kWindowManagerClient_WmSetBoundsResponse_Name = 977822476;
  var kWindowManagerClient_WmRequestClose_Name = 329889435;
  var kWindowManagerClient_WmSetFrameDecorationValues_Name = 375345558;
  var kWindowManagerClient_WmSetNonClientCursor_Name = 1364964034;
  var kWindowManagerClient_WmLockCursor_Name = 98126924;
  var kWindowManagerClient_WmUnlockCursor_Name = 1935985294;
  var kWindowManagerClient_WmSetCursorVisible_Name = 1700640294;
  var kWindowManagerClient_WmSetCursorSize_Name = 305292746;
  var kWindowManagerClient_WmSetGlobalOverrideCursor_Name = 745951893;
  var kWindowManagerClient_WmMoveCursorToDisplayLocation_Name = 1139329913;
  var kWindowManagerClient_WmConfineCursorToBounds_Name = 1387581665;
  var kWindowManagerClient_WmSetCursorTouchVisible_Name = 1857444411;
  var kWindowManagerClient_OnWmCreatedTopLevelWindow_Name = 57667451;
  var kWindowManagerClient_OnAcceleratorAck_Name = 90379662;

  function WindowManagerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowManagerClient,
                                                   handleOrPtrInfo);
  }

  function WindowManagerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowManagerClient, associatedInterfacePtrInfo);
  }

  WindowManagerClientAssociatedPtr.prototype =
      Object.create(WindowManagerClientPtr.prototype);
  WindowManagerClientAssociatedPtr.prototype.constructor =
      WindowManagerClientAssociatedPtr;

  function WindowManagerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowManagerClientPtr.prototype.addActivationParent = function() {
    return WindowManagerClientProxy.prototype.addActivationParent
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.addActivationParent = function(windowId) {
    var params_ = new WindowManagerClient_AddActivationParent_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_AddActivationParent_Name,
        codec.align(WindowManagerClient_AddActivationParent_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_AddActivationParent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.removeActivationParent = function() {
    return WindowManagerClientProxy.prototype.removeActivationParent
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.removeActivationParent = function(windowId) {
    var params_ = new WindowManagerClient_RemoveActivationParent_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_RemoveActivationParent_Name,
        codec.align(WindowManagerClient_RemoveActivationParent_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_RemoveActivationParent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.setExtendedHitRegionForChildren = function() {
    return WindowManagerClientProxy.prototype.setExtendedHitRegionForChildren
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.setExtendedHitRegionForChildren = function(windowId, mouseInsets, touchInsets) {
    var params_ = new WindowManagerClient_SetExtendedHitRegionForChildren_Params();
    params_.windowId = windowId;
    params_.mouseInsets = mouseInsets;
    params_.touchInsets = touchInsets;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_SetExtendedHitRegionForChildren_Name,
        codec.align(WindowManagerClient_SetExtendedHitRegionForChildren_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_SetExtendedHitRegionForChildren_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.addAccelerators = function() {
    return WindowManagerClientProxy.prototype.addAccelerators
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.addAccelerators = function(accelerators) {
    var params_ = new WindowManagerClient_AddAccelerators_Params();
    params_.accelerators = accelerators;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowManagerClient_AddAccelerators_Name,
          codec.align(WindowManagerClient_AddAccelerators_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManagerClient_AddAccelerators_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManagerClient_AddAccelerators_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerClientPtr.prototype.removeAccelerator = function() {
    return WindowManagerClientProxy.prototype.removeAccelerator
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.removeAccelerator = function(id) {
    var params_ = new WindowManagerClient_RemoveAccelerator_Params();
    params_.id = id;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_RemoveAccelerator_Name,
        codec.align(WindowManagerClient_RemoveAccelerator_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_RemoveAccelerator_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.setKeyEventsThatDontHideCursor = function() {
    return WindowManagerClientProxy.prototype.setKeyEventsThatDontHideCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.setKeyEventsThatDontHideCursor = function(dontHideCursorList) {
    var params_ = new WindowManagerClient_SetKeyEventsThatDontHideCursor_Params();
    params_.dontHideCursorList = dontHideCursorList;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name,
        codec.align(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.setDisplayRoot = function() {
    return WindowManagerClientProxy.prototype.setDisplayRoot
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.setDisplayRoot = function(display, viewportMetrics, isPrimaryDisplay, windowId, mirrors) {
    var params_ = new WindowManagerClient_SetDisplayRoot_Params();
    params_.display = display;
    params_.viewportMetrics = viewportMetrics;
    params_.isPrimaryDisplay = isPrimaryDisplay;
    params_.windowId = windowId;
    params_.mirrors = mirrors;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowManagerClient_SetDisplayRoot_Name,
          codec.align(WindowManagerClient_SetDisplayRoot_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManagerClient_SetDisplayRoot_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManagerClient_SetDisplayRoot_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerClientPtr.prototype.setDisplayConfiguration = function() {
    return WindowManagerClientProxy.prototype.setDisplayConfiguration
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.setDisplayConfiguration = function(displays, viewportMetrics, primaryDisplayId, internalDisplayId, mirrors) {
    var params_ = new WindowManagerClient_SetDisplayConfiguration_Params();
    params_.displays = displays;
    params_.viewportMetrics = viewportMetrics;
    params_.primaryDisplayId = primaryDisplayId;
    params_.internalDisplayId = internalDisplayId;
    params_.mirrors = mirrors;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowManagerClient_SetDisplayConfiguration_Name,
          codec.align(WindowManagerClient_SetDisplayConfiguration_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManagerClient_SetDisplayConfiguration_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManagerClient_SetDisplayConfiguration_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerClientPtr.prototype.swapDisplayRoots = function() {
    return WindowManagerClientProxy.prototype.swapDisplayRoots
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.swapDisplayRoots = function(displayId1, displayId2) {
    var params_ = new WindowManagerClient_SwapDisplayRoots_Params();
    params_.displayId1 = displayId1;
    params_.displayId2 = displayId2;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowManagerClient_SwapDisplayRoots_Name,
          codec.align(WindowManagerClient_SwapDisplayRoots_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManagerClient_SwapDisplayRoots_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManagerClient_SwapDisplayRoots_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerClientPtr.prototype.setBlockingContainers = function() {
    return WindowManagerClientProxy.prototype.setBlockingContainers
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.setBlockingContainers = function(blockingContainers) {
    var params_ = new WindowManagerClient_SetBlockingContainers_Params();
    params_.blockingContainers = blockingContainers;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowManagerClient_SetBlockingContainers_Name,
          codec.align(WindowManagerClient_SetBlockingContainers_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowManagerClient_SetBlockingContainers_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowManagerClient_SetBlockingContainers_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowManagerClientPtr.prototype.wmResponse = function() {
    return WindowManagerClientProxy.prototype.wmResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmResponse = function(changeId, response) {
    var params_ = new WindowManagerClient_WmResponse_Params();
    params_.changeId = changeId;
    params_.response = response;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmResponse_Name,
        codec.align(WindowManagerClient_WmResponse_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetBoundsResponse = function() {
    return WindowManagerClientProxy.prototype.wmSetBoundsResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetBoundsResponse = function(changeId) {
    var params_ = new WindowManagerClient_WmSetBoundsResponse_Params();
    params_.changeId = changeId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetBoundsResponse_Name,
        codec.align(WindowManagerClient_WmSetBoundsResponse_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetBoundsResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmRequestClose = function() {
    return WindowManagerClientProxy.prototype.wmRequestClose
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmRequestClose = function(windowId) {
    var params_ = new WindowManagerClient_WmRequestClose_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmRequestClose_Name,
        codec.align(WindowManagerClient_WmRequestClose_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmRequestClose_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetFrameDecorationValues = function() {
    return WindowManagerClientProxy.prototype.wmSetFrameDecorationValues
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetFrameDecorationValues = function(values) {
    var params_ = new WindowManagerClient_WmSetFrameDecorationValues_Params();
    params_.values = values;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetFrameDecorationValues_Name,
        codec.align(WindowManagerClient_WmSetFrameDecorationValues_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetFrameDecorationValues_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetNonClientCursor = function() {
    return WindowManagerClientProxy.prototype.wmSetNonClientCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetNonClientCursor = function(windowId, cursor) {
    var params_ = new WindowManagerClient_WmSetNonClientCursor_Params();
    params_.windowId = windowId;
    params_.cursor = cursor;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetNonClientCursor_Name,
        codec.align(WindowManagerClient_WmSetNonClientCursor_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetNonClientCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmLockCursor = function() {
    return WindowManagerClientProxy.prototype.wmLockCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmLockCursor = function() {
    var params_ = new WindowManagerClient_WmLockCursor_Params();
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmLockCursor_Name,
        codec.align(WindowManagerClient_WmLockCursor_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmLockCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmUnlockCursor = function() {
    return WindowManagerClientProxy.prototype.wmUnlockCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmUnlockCursor = function() {
    var params_ = new WindowManagerClient_WmUnlockCursor_Params();
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmUnlockCursor_Name,
        codec.align(WindowManagerClient_WmUnlockCursor_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmUnlockCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetCursorVisible = function() {
    return WindowManagerClientProxy.prototype.wmSetCursorVisible
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetCursorVisible = function(visible) {
    var params_ = new WindowManagerClient_WmSetCursorVisible_Params();
    params_.visible = visible;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetCursorVisible_Name,
        codec.align(WindowManagerClient_WmSetCursorVisible_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetCursorVisible_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetCursorSize = function() {
    return WindowManagerClientProxy.prototype.wmSetCursorSize
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetCursorSize = function(cursorSize) {
    var params_ = new WindowManagerClient_WmSetCursorSize_Params();
    params_.cursorSize = cursorSize;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetCursorSize_Name,
        codec.align(WindowManagerClient_WmSetCursorSize_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetCursorSize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetGlobalOverrideCursor = function() {
    return WindowManagerClientProxy.prototype.wmSetGlobalOverrideCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetGlobalOverrideCursor = function(cursor) {
    var params_ = new WindowManagerClient_WmSetGlobalOverrideCursor_Params();
    params_.cursor = cursor;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetGlobalOverrideCursor_Name,
        codec.align(WindowManagerClient_WmSetGlobalOverrideCursor_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetGlobalOverrideCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmMoveCursorToDisplayLocation = function() {
    return WindowManagerClientProxy.prototype.wmMoveCursorToDisplayLocation
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmMoveCursorToDisplayLocation = function(displayPixels, displayId) {
    var params_ = new WindowManagerClient_WmMoveCursorToDisplayLocation_Params();
    params_.displayPixels = displayPixels;
    params_.displayId = displayId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmMoveCursorToDisplayLocation_Name,
        codec.align(WindowManagerClient_WmMoveCursorToDisplayLocation_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmMoveCursorToDisplayLocation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmConfineCursorToBounds = function() {
    return WindowManagerClientProxy.prototype.wmConfineCursorToBounds
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmConfineCursorToBounds = function(boundsInPixels, displayId) {
    var params_ = new WindowManagerClient_WmConfineCursorToBounds_Params();
    params_.boundsInPixels = boundsInPixels;
    params_.displayId = displayId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmConfineCursorToBounds_Name,
        codec.align(WindowManagerClient_WmConfineCursorToBounds_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmConfineCursorToBounds_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.wmSetCursorTouchVisible = function() {
    return WindowManagerClientProxy.prototype.wmSetCursorTouchVisible
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.wmSetCursorTouchVisible = function(enabled) {
    var params_ = new WindowManagerClient_WmSetCursorTouchVisible_Params();
    params_.enabled = enabled;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_WmSetCursorTouchVisible_Name,
        codec.align(WindowManagerClient_WmSetCursorTouchVisible_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_WmSetCursorTouchVisible_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.onWmCreatedTopLevelWindow = function() {
    return WindowManagerClientProxy.prototype.onWmCreatedTopLevelWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.onWmCreatedTopLevelWindow = function(changeId, windowId) {
    var params_ = new WindowManagerClient_OnWmCreatedTopLevelWindow_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_OnWmCreatedTopLevelWindow_Name,
        codec.align(WindowManagerClient_OnWmCreatedTopLevelWindow_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_OnWmCreatedTopLevelWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowManagerClientPtr.prototype.onAcceleratorAck = function() {
    return WindowManagerClientProxy.prototype.onAcceleratorAck
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerClientProxy.prototype.onAcceleratorAck = function(ackId, eventResult, properties) {
    var params_ = new WindowManagerClient_OnAcceleratorAck_Params();
    params_.ackId = ackId;
    params_.eventResult = eventResult;
    params_.properties = properties;
    var builder = new codec.MessageV0Builder(
        kWindowManagerClient_OnAcceleratorAck_Name,
        codec.align(WindowManagerClient_OnAcceleratorAck_Params.encodedSize));
    builder.encodeStruct(WindowManagerClient_OnAcceleratorAck_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowManagerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowManagerClientStub.prototype.addActivationParent = function(windowId) {
    return this.delegate_ && this.delegate_.addActivationParent && this.delegate_.addActivationParent(windowId);
  }
  WindowManagerClientStub.prototype.removeActivationParent = function(windowId) {
    return this.delegate_ && this.delegate_.removeActivationParent && this.delegate_.removeActivationParent(windowId);
  }
  WindowManagerClientStub.prototype.setExtendedHitRegionForChildren = function(windowId, mouseInsets, touchInsets) {
    return this.delegate_ && this.delegate_.setExtendedHitRegionForChildren && this.delegate_.setExtendedHitRegionForChildren(windowId, mouseInsets, touchInsets);
  }
  WindowManagerClientStub.prototype.addAccelerators = function(accelerators) {
    return this.delegate_ && this.delegate_.addAccelerators && this.delegate_.addAccelerators(accelerators);
  }
  WindowManagerClientStub.prototype.removeAccelerator = function(id) {
    return this.delegate_ && this.delegate_.removeAccelerator && this.delegate_.removeAccelerator(id);
  }
  WindowManagerClientStub.prototype.setKeyEventsThatDontHideCursor = function(dontHideCursorList) {
    return this.delegate_ && this.delegate_.setKeyEventsThatDontHideCursor && this.delegate_.setKeyEventsThatDontHideCursor(dontHideCursorList);
  }
  WindowManagerClientStub.prototype.setDisplayRoot = function(display, viewportMetrics, isPrimaryDisplay, windowId, mirrors) {
    return this.delegate_ && this.delegate_.setDisplayRoot && this.delegate_.setDisplayRoot(display, viewportMetrics, isPrimaryDisplay, windowId, mirrors);
  }
  WindowManagerClientStub.prototype.setDisplayConfiguration = function(displays, viewportMetrics, primaryDisplayId, internalDisplayId, mirrors) {
    return this.delegate_ && this.delegate_.setDisplayConfiguration && this.delegate_.setDisplayConfiguration(displays, viewportMetrics, primaryDisplayId, internalDisplayId, mirrors);
  }
  WindowManagerClientStub.prototype.swapDisplayRoots = function(displayId1, displayId2) {
    return this.delegate_ && this.delegate_.swapDisplayRoots && this.delegate_.swapDisplayRoots(displayId1, displayId2);
  }
  WindowManagerClientStub.prototype.setBlockingContainers = function(blockingContainers) {
    return this.delegate_ && this.delegate_.setBlockingContainers && this.delegate_.setBlockingContainers(blockingContainers);
  }
  WindowManagerClientStub.prototype.wmResponse = function(changeId, response) {
    return this.delegate_ && this.delegate_.wmResponse && this.delegate_.wmResponse(changeId, response);
  }
  WindowManagerClientStub.prototype.wmSetBoundsResponse = function(changeId) {
    return this.delegate_ && this.delegate_.wmSetBoundsResponse && this.delegate_.wmSetBoundsResponse(changeId);
  }
  WindowManagerClientStub.prototype.wmRequestClose = function(windowId) {
    return this.delegate_ && this.delegate_.wmRequestClose && this.delegate_.wmRequestClose(windowId);
  }
  WindowManagerClientStub.prototype.wmSetFrameDecorationValues = function(values) {
    return this.delegate_ && this.delegate_.wmSetFrameDecorationValues && this.delegate_.wmSetFrameDecorationValues(values);
  }
  WindowManagerClientStub.prototype.wmSetNonClientCursor = function(windowId, cursor) {
    return this.delegate_ && this.delegate_.wmSetNonClientCursor && this.delegate_.wmSetNonClientCursor(windowId, cursor);
  }
  WindowManagerClientStub.prototype.wmLockCursor = function() {
    return this.delegate_ && this.delegate_.wmLockCursor && this.delegate_.wmLockCursor();
  }
  WindowManagerClientStub.prototype.wmUnlockCursor = function() {
    return this.delegate_ && this.delegate_.wmUnlockCursor && this.delegate_.wmUnlockCursor();
  }
  WindowManagerClientStub.prototype.wmSetCursorVisible = function(visible) {
    return this.delegate_ && this.delegate_.wmSetCursorVisible && this.delegate_.wmSetCursorVisible(visible);
  }
  WindowManagerClientStub.prototype.wmSetCursorSize = function(cursorSize) {
    return this.delegate_ && this.delegate_.wmSetCursorSize && this.delegate_.wmSetCursorSize(cursorSize);
  }
  WindowManagerClientStub.prototype.wmSetGlobalOverrideCursor = function(cursor) {
    return this.delegate_ && this.delegate_.wmSetGlobalOverrideCursor && this.delegate_.wmSetGlobalOverrideCursor(cursor);
  }
  WindowManagerClientStub.prototype.wmMoveCursorToDisplayLocation = function(displayPixels, displayId) {
    return this.delegate_ && this.delegate_.wmMoveCursorToDisplayLocation && this.delegate_.wmMoveCursorToDisplayLocation(displayPixels, displayId);
  }
  WindowManagerClientStub.prototype.wmConfineCursorToBounds = function(boundsInPixels, displayId) {
    return this.delegate_ && this.delegate_.wmConfineCursorToBounds && this.delegate_.wmConfineCursorToBounds(boundsInPixels, displayId);
  }
  WindowManagerClientStub.prototype.wmSetCursorTouchVisible = function(enabled) {
    return this.delegate_ && this.delegate_.wmSetCursorTouchVisible && this.delegate_.wmSetCursorTouchVisible(enabled);
  }
  WindowManagerClientStub.prototype.onWmCreatedTopLevelWindow = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.onWmCreatedTopLevelWindow && this.delegate_.onWmCreatedTopLevelWindow(changeId, windowId);
  }
  WindowManagerClientStub.prototype.onAcceleratorAck = function(ackId, eventResult, properties) {
    return this.delegate_ && this.delegate_.onAcceleratorAck && this.delegate_.onAcceleratorAck(ackId, eventResult, properties);
  }

  WindowManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManagerClient_AddActivationParent_Name:
      var params = reader.decodeStruct(WindowManagerClient_AddActivationParent_Params);
      this.addActivationParent(params.windowId);
      return true;
    case kWindowManagerClient_RemoveActivationParent_Name:
      var params = reader.decodeStruct(WindowManagerClient_RemoveActivationParent_Params);
      this.removeActivationParent(params.windowId);
      return true;
    case kWindowManagerClient_SetExtendedHitRegionForChildren_Name:
      var params = reader.decodeStruct(WindowManagerClient_SetExtendedHitRegionForChildren_Params);
      this.setExtendedHitRegionForChildren(params.windowId, params.mouseInsets, params.touchInsets);
      return true;
    case kWindowManagerClient_RemoveAccelerator_Name:
      var params = reader.decodeStruct(WindowManagerClient_RemoveAccelerator_Params);
      this.removeAccelerator(params.id);
      return true;
    case kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name:
      var params = reader.decodeStruct(WindowManagerClient_SetKeyEventsThatDontHideCursor_Params);
      this.setKeyEventsThatDontHideCursor(params.dontHideCursorList);
      return true;
    case kWindowManagerClient_WmResponse_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmResponse_Params);
      this.wmResponse(params.changeId, params.response);
      return true;
    case kWindowManagerClient_WmSetBoundsResponse_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetBoundsResponse_Params);
      this.wmSetBoundsResponse(params.changeId);
      return true;
    case kWindowManagerClient_WmRequestClose_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmRequestClose_Params);
      this.wmRequestClose(params.windowId);
      return true;
    case kWindowManagerClient_WmSetFrameDecorationValues_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetFrameDecorationValues_Params);
      this.wmSetFrameDecorationValues(params.values);
      return true;
    case kWindowManagerClient_WmSetNonClientCursor_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetNonClientCursor_Params);
      this.wmSetNonClientCursor(params.windowId, params.cursor);
      return true;
    case kWindowManagerClient_WmLockCursor_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmLockCursor_Params);
      this.wmLockCursor();
      return true;
    case kWindowManagerClient_WmUnlockCursor_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmUnlockCursor_Params);
      this.wmUnlockCursor();
      return true;
    case kWindowManagerClient_WmSetCursorVisible_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetCursorVisible_Params);
      this.wmSetCursorVisible(params.visible);
      return true;
    case kWindowManagerClient_WmSetCursorSize_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetCursorSize_Params);
      this.wmSetCursorSize(params.cursorSize);
      return true;
    case kWindowManagerClient_WmSetGlobalOverrideCursor_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetGlobalOverrideCursor_Params);
      this.wmSetGlobalOverrideCursor(params.cursor);
      return true;
    case kWindowManagerClient_WmMoveCursorToDisplayLocation_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmMoveCursorToDisplayLocation_Params);
      this.wmMoveCursorToDisplayLocation(params.displayPixels, params.displayId);
      return true;
    case kWindowManagerClient_WmConfineCursorToBounds_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmConfineCursorToBounds_Params);
      this.wmConfineCursorToBounds(params.boundsInPixels, params.displayId);
      return true;
    case kWindowManagerClient_WmSetCursorTouchVisible_Name:
      var params = reader.decodeStruct(WindowManagerClient_WmSetCursorTouchVisible_Params);
      this.wmSetCursorTouchVisible(params.enabled);
      return true;
    case kWindowManagerClient_OnWmCreatedTopLevelWindow_Name:
      var params = reader.decodeStruct(WindowManagerClient_OnWmCreatedTopLevelWindow_Params);
      this.onWmCreatedTopLevelWindow(params.changeId, params.windowId);
      return true;
    case kWindowManagerClient_OnAcceleratorAck_Name:
      var params = reader.decodeStruct(WindowManagerClient_OnAcceleratorAck_Params);
      this.onAcceleratorAck(params.ackId, params.eventResult, params.properties);
      return true;
    default:
      return false;
    }
  };

  WindowManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManagerClient_AddAccelerators_Name:
      var params = reader.decodeStruct(WindowManagerClient_AddAccelerators_Params);
      this.addAccelerators(params.accelerators).then(function(response) {
        var responseParams =
            new WindowManagerClient_AddAccelerators_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowManagerClient_AddAccelerators_Name,
            codec.align(WindowManagerClient_AddAccelerators_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManagerClient_AddAccelerators_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowManagerClient_SetDisplayRoot_Name:
      var params = reader.decodeStruct(WindowManagerClient_SetDisplayRoot_Params);
      this.setDisplayRoot(params.display, params.viewportMetrics, params.isPrimaryDisplay, params.windowId, params.mirrors).then(function(response) {
        var responseParams =
            new WindowManagerClient_SetDisplayRoot_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowManagerClient_SetDisplayRoot_Name,
            codec.align(WindowManagerClient_SetDisplayRoot_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManagerClient_SetDisplayRoot_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowManagerClient_SetDisplayConfiguration_Name:
      var params = reader.decodeStruct(WindowManagerClient_SetDisplayConfiguration_Params);
      this.setDisplayConfiguration(params.displays, params.viewportMetrics, params.primaryDisplayId, params.internalDisplayId, params.mirrors).then(function(response) {
        var responseParams =
            new WindowManagerClient_SetDisplayConfiguration_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowManagerClient_SetDisplayConfiguration_Name,
            codec.align(WindowManagerClient_SetDisplayConfiguration_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManagerClient_SetDisplayConfiguration_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowManagerClient_SwapDisplayRoots_Name:
      var params = reader.decodeStruct(WindowManagerClient_SwapDisplayRoots_Params);
      this.swapDisplayRoots(params.displayId1, params.displayId2).then(function(response) {
        var responseParams =
            new WindowManagerClient_SwapDisplayRoots_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowManagerClient_SwapDisplayRoots_Name,
            codec.align(WindowManagerClient_SwapDisplayRoots_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManagerClient_SwapDisplayRoots_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowManagerClient_SetBlockingContainers_Name:
      var params = reader.decodeStruct(WindowManagerClient_SetBlockingContainers_Params);
      this.setBlockingContainers(params.blockingContainers).then(function(response) {
        var responseParams =
            new WindowManagerClient_SetBlockingContainers_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowManagerClient_SetBlockingContainers_Name,
            codec.align(WindowManagerClient_SetBlockingContainers_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowManagerClient_SetBlockingContainers_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWindowManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowManagerClient_AddActivationParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_AddActivationParent_Params;
      break;
      case kWindowManagerClient_RemoveActivationParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_RemoveActivationParent_Params;
      break;
      case kWindowManagerClient_SetExtendedHitRegionForChildren_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_SetExtendedHitRegionForChildren_Params;
      break;
      case kWindowManagerClient_AddAccelerators_Name:
        if (message.expectsResponse())
          paramsClass = WindowManagerClient_AddAccelerators_Params;
      break;
      case kWindowManagerClient_RemoveAccelerator_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_RemoveAccelerator_Params;
      break;
      case kWindowManagerClient_SetKeyEventsThatDontHideCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_SetKeyEventsThatDontHideCursor_Params;
      break;
      case kWindowManagerClient_SetDisplayRoot_Name:
        if (message.expectsResponse())
          paramsClass = WindowManagerClient_SetDisplayRoot_Params;
      break;
      case kWindowManagerClient_SetDisplayConfiguration_Name:
        if (message.expectsResponse())
          paramsClass = WindowManagerClient_SetDisplayConfiguration_Params;
      break;
      case kWindowManagerClient_SwapDisplayRoots_Name:
        if (message.expectsResponse())
          paramsClass = WindowManagerClient_SwapDisplayRoots_Params;
      break;
      case kWindowManagerClient_SetBlockingContainers_Name:
        if (message.expectsResponse())
          paramsClass = WindowManagerClient_SetBlockingContainers_Params;
      break;
      case kWindowManagerClient_WmResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmResponse_Params;
      break;
      case kWindowManagerClient_WmSetBoundsResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetBoundsResponse_Params;
      break;
      case kWindowManagerClient_WmRequestClose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmRequestClose_Params;
      break;
      case kWindowManagerClient_WmSetFrameDecorationValues_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetFrameDecorationValues_Params;
      break;
      case kWindowManagerClient_WmSetNonClientCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetNonClientCursor_Params;
      break;
      case kWindowManagerClient_WmLockCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmLockCursor_Params;
      break;
      case kWindowManagerClient_WmUnlockCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmUnlockCursor_Params;
      break;
      case kWindowManagerClient_WmSetCursorVisible_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetCursorVisible_Params;
      break;
      case kWindowManagerClient_WmSetCursorSize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetCursorSize_Params;
      break;
      case kWindowManagerClient_WmSetGlobalOverrideCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetGlobalOverrideCursor_Params;
      break;
      case kWindowManagerClient_WmMoveCursorToDisplayLocation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmMoveCursorToDisplayLocation_Params;
      break;
      case kWindowManagerClient_WmConfineCursorToBounds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmConfineCursorToBounds_Params;
      break;
      case kWindowManagerClient_WmSetCursorTouchVisible_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_WmSetCursorTouchVisible_Params;
      break;
      case kWindowManagerClient_OnWmCreatedTopLevelWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_OnWmCreatedTopLevelWindow_Params;
      break;
      case kWindowManagerClient_OnAcceleratorAck_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerClient_OnAcceleratorAck_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowManagerClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWindowManagerClient_AddAccelerators_Name:
        if (message.isResponse())
          paramsClass = WindowManagerClient_AddAccelerators_ResponseParams;
        break;
      case kWindowManagerClient_SetDisplayRoot_Name:
        if (message.isResponse())
          paramsClass = WindowManagerClient_SetDisplayRoot_ResponseParams;
        break;
      case kWindowManagerClient_SetDisplayConfiguration_Name:
        if (message.isResponse())
          paramsClass = WindowManagerClient_SetDisplayConfiguration_ResponseParams;
        break;
      case kWindowManagerClient_SwapDisplayRoots_Name:
        if (message.isResponse())
          paramsClass = WindowManagerClient_SwapDisplayRoots_ResponseParams;
        break;
      case kWindowManagerClient_SetBlockingContainers_Name:
        if (message.isResponse())
          paramsClass = WindowManagerClient_SetBlockingContainers_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WindowManagerClient = {
    name: 'ui.mojom.WindowManagerClient',
    kVersion: 0,
    ptrClass: WindowManagerClientPtr,
    proxyClass: WindowManagerClientProxy,
    stubClass: WindowManagerClientStub,
    validateRequest: validateWindowManagerClientRequest,
    validateResponse: validateWindowManagerClientResponse,
    mojomId: 'services/ui/public/interfaces/window_manager.mojom',
    fuzzMethods: {
      addActivationParent: {
        params: WindowManagerClient_AddActivationParent_Params,
      },
      removeActivationParent: {
        params: WindowManagerClient_RemoveActivationParent_Params,
      },
      setExtendedHitRegionForChildren: {
        params: WindowManagerClient_SetExtendedHitRegionForChildren_Params,
      },
      addAccelerators: {
        params: WindowManagerClient_AddAccelerators_Params,
      },
      removeAccelerator: {
        params: WindowManagerClient_RemoveAccelerator_Params,
      },
      setKeyEventsThatDontHideCursor: {
        params: WindowManagerClient_SetKeyEventsThatDontHideCursor_Params,
      },
      setDisplayRoot: {
        params: WindowManagerClient_SetDisplayRoot_Params,
      },
      setDisplayConfiguration: {
        params: WindowManagerClient_SetDisplayConfiguration_Params,
      },
      swapDisplayRoots: {
        params: WindowManagerClient_SwapDisplayRoots_Params,
      },
      setBlockingContainers: {
        params: WindowManagerClient_SetBlockingContainers_Params,
      },
      wmResponse: {
        params: WindowManagerClient_WmResponse_Params,
      },
      wmSetBoundsResponse: {
        params: WindowManagerClient_WmSetBoundsResponse_Params,
      },
      wmRequestClose: {
        params: WindowManagerClient_WmRequestClose_Params,
      },
      wmSetFrameDecorationValues: {
        params: WindowManagerClient_WmSetFrameDecorationValues_Params,
      },
      wmSetNonClientCursor: {
        params: WindowManagerClient_WmSetNonClientCursor_Params,
      },
      wmLockCursor: {
        params: WindowManagerClient_WmLockCursor_Params,
      },
      wmUnlockCursor: {
        params: WindowManagerClient_WmUnlockCursor_Params,
      },
      wmSetCursorVisible: {
        params: WindowManagerClient_WmSetCursorVisible_Params,
      },
      wmSetCursorSize: {
        params: WindowManagerClient_WmSetCursorSize_Params,
      },
      wmSetGlobalOverrideCursor: {
        params: WindowManagerClient_WmSetGlobalOverrideCursor_Params,
      },
      wmMoveCursorToDisplayLocation: {
        params: WindowManagerClient_WmMoveCursorToDisplayLocation_Params,
      },
      wmConfineCursorToBounds: {
        params: WindowManagerClient_WmConfineCursorToBounds_Params,
      },
      wmSetCursorTouchVisible: {
        params: WindowManagerClient_WmSetCursorTouchVisible_Params,
      },
      onWmCreatedTopLevelWindow: {
        params: WindowManagerClient_OnWmCreatedTopLevelWindow_Params,
      },
      onAcceleratorAck: {
        params: WindowManagerClient_OnAcceleratorAck_Params,
      },
    },
  };
  WindowManagerClientStub.prototype.validator = validateWindowManagerClientRequest;
  WindowManagerClientProxy.prototype.validator = validateWindowManagerClientResponse;
  exports.WmAccelerator = WmAccelerator;
  exports.WindowManager = WindowManager;
  exports.WindowManagerPtr = WindowManagerPtr;
  exports.WindowManagerAssociatedPtr = WindowManagerAssociatedPtr;
  exports.WindowManagerClient = WindowManagerClient;
  exports.WindowManagerClientPtr = WindowManagerClientPtr;
  exports.WindowManagerClientAssociatedPtr = WindowManagerClientAssociatedPtr;
})();