// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_tree.mojom';
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
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../../mojo/public/mojom/base/unguessable_token.mojom.js');
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
  var mus_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/mus_constants.mojom', 'mus_constants.mojom.js');
  }
  var window_manager$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_manager.mojom', 'window_manager.mojom.js');
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
  var compositor_frame_sink$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/compositor_frame_sink.mojom', '../../../viz/public/interfaces/compositing/compositor_frame_sink.mojom.js');
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
  var surface_info$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_info.mojom', '../../../viz/public/interfaces/compositing/surface_info.mojom.js');
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
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../../ui/gfx/mojo/transform.mojom.js');
  }
  var text_input_state$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/platform_window/mojo/text_input_state.mojom', '../../../../ui/platform_window/mojo/text_input_state.mojom.js');
  }



  function WindowTree_NewWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_NewWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.properties = null;
  };
  WindowTree_NewWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_NewWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_NewWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
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

  WindowTree_NewWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
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
  WindowTree_NewWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_NewWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_NewWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_NewWindow_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_NewWindow_Params.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, true, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_NewWindow_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_NewWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_NewWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  WindowTree_NewWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_NewWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
  };
  function WindowTree_NewTopLevelWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_NewTopLevelWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.properties = null;
  };
  WindowTree_NewTopLevelWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_NewTopLevelWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_NewTopLevelWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
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

  WindowTree_NewTopLevelWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
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
  WindowTree_NewTopLevelWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_NewTopLevelWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_NewTopLevelWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_NewTopLevelWindow_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_NewTopLevelWindow_Params.properties
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_NewTopLevelWindow_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_NewTopLevelWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_NewTopLevelWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.properties = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  WindowTree_NewTopLevelWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_NewTopLevelWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.properties);
  };
  function WindowTree_DeleteWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_DeleteWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowTree_DeleteWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_DeleteWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_DeleteWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_DeleteWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_DeleteWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_DeleteWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_DeleteWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_DeleteWindow_Params.validate = function(messageValidator, offset) {
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

  WindowTree_DeleteWindow_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_DeleteWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_DeleteWindow_Params();
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

  WindowTree_DeleteWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_DeleteWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_SetCapture_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetCapture_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowTree_SetCapture_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetCapture_Params.generate = function(generator_) {
    var generated = new WindowTree_SetCapture_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_SetCapture_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_SetCapture_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetCapture_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetCapture_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetCapture_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetCapture_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetCapture_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetCapture_Params();
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

  WindowTree_SetCapture_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetCapture_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_ReleaseCapture_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_ReleaseCapture_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowTree_ReleaseCapture_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_ReleaseCapture_Params.generate = function(generator_) {
    var generated = new WindowTree_ReleaseCapture_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_ReleaseCapture_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_ReleaseCapture_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_ReleaseCapture_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_ReleaseCapture_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_ReleaseCapture_Params.validate = function(messageValidator, offset) {
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

  WindowTree_ReleaseCapture_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_ReleaseCapture_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_ReleaseCapture_Params();
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

  WindowTree_ReleaseCapture_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_ReleaseCapture_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_StartPointerWatcher_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_StartPointerWatcher_Params.prototype.initDefaults_ = function() {
    this.wantMoves = false;
  };
  WindowTree_StartPointerWatcher_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_StartPointerWatcher_Params.generate = function(generator_) {
    var generated = new WindowTree_StartPointerWatcher_Params;
    generated.wantMoves = generator_.generateBool();
    return generated;
  };

  WindowTree_StartPointerWatcher_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.wantMoves = mutator_.mutateBool(this.wantMoves);
    }
    return this;
  };
  WindowTree_StartPointerWatcher_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_StartPointerWatcher_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_StartPointerWatcher_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_StartPointerWatcher_Params.validate = function(messageValidator, offset) {
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

  WindowTree_StartPointerWatcher_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_StartPointerWatcher_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_StartPointerWatcher_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.wantMoves = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_StartPointerWatcher_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_StartPointerWatcher_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.wantMoves & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_StopPointerWatcher_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_StopPointerWatcher_Params.prototype.initDefaults_ = function() {
  };
  WindowTree_StopPointerWatcher_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_StopPointerWatcher_Params.generate = function(generator_) {
    var generated = new WindowTree_StopPointerWatcher_Params;
    return generated;
  };

  WindowTree_StopPointerWatcher_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowTree_StopPointerWatcher_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_StopPointerWatcher_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_StopPointerWatcher_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_StopPointerWatcher_Params.validate = function(messageValidator, offset) {
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

  WindowTree_StopPointerWatcher_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowTree_StopPointerWatcher_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_StopPointerWatcher_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowTree_StopPointerWatcher_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_StopPointerWatcher_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowTree_SetWindowBounds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetWindowBounds_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.bounds = null;
    this.localSurfaceId = null;
  };
  WindowTree_SetWindowBounds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetWindowBounds_Params.generate = function(generator_) {
    var generated = new WindowTree_SetWindowBounds_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.bounds = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    return generated;
  };

  WindowTree_SetWindowBounds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    return this;
  };
  WindowTree_SetWindowBounds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetWindowBounds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetWindowBounds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetWindowBounds_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_SetWindowBounds_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_SetWindowBounds_Params.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetWindowBounds_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowTree_SetWindowBounds_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetWindowBounds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.bounds = decoder.decodeStructPointer(geometry$.Rect);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    return val;
  };

  WindowTree_SetWindowBounds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetWindowBounds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Rect, val.bounds);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
  };
  function WindowTree_SetWindowTransform_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetWindowTransform_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.transform = null;
  };
  WindowTree_SetWindowTransform_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetWindowTransform_Params.generate = function(generator_) {
    var generated = new WindowTree_SetWindowTransform_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.transform = generator_.generateStruct(gfx.mojom.Transform, false);
    return generated;
  };

  WindowTree_SetWindowTransform_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.transform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    return this;
  };
  WindowTree_SetWindowTransform_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetWindowTransform_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetWindowTransform_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetWindowTransform_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_SetWindowTransform_Params.transform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetWindowTransform_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_SetWindowTransform_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetWindowTransform_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.transform = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  WindowTree_SetWindowTransform_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetWindowTransform_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(transform$.Transform, val.transform);
  };
  function WindowTree_SetClientArea_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetClientArea_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.insets = null;
    this.additionalClientAreas = null;
  };
  WindowTree_SetClientArea_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetClientArea_Params.generate = function(generator_) {
    var generated = new WindowTree_SetClientArea_Params;
    generated.windowId = generator_.generateUint64();
    generated.insets = generator_.generateStruct(gfx.mojom.Insets, false);
    generated.additionalClientAreas = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Rect, false);
    });
    return generated;
  };

  WindowTree_SetClientArea_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.insets = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    if (mutator_.chooseMutateField()) {
      this.additionalClientAreas = mutator_.mutateArray(this.additionalClientAreas, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Rect, false);
      });
    }
    return this;
  };
  WindowTree_SetClientArea_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetClientArea_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetClientArea_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetClientArea_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_SetClientArea_Params.insets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_SetClientArea_Params.additionalClientAreas
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Rect), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetClientArea_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_SetClientArea_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetClientArea_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.insets = decoder.decodeStructPointer(geometry$.Insets);
    val.additionalClientAreas = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Rect));
    return val;
  };

  WindowTree_SetClientArea_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetClientArea_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Insets, val.insets);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Rect), val.additionalClientAreas);
  };
  function WindowTree_SetHitTestMask_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetHitTestMask_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.mask = null;
  };
  WindowTree_SetHitTestMask_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetHitTestMask_Params.generate = function(generator_) {
    var generated = new WindowTree_SetHitTestMask_Params;
    generated.windowId = generator_.generateUint64();
    generated.mask = generator_.generateStruct(gfx.mojom.Rect, true);
    return generated;
  };

  WindowTree_SetHitTestMask_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.mask = mutator_.mutateStruct(gfx.mojom.Rect, true);
    }
    return this;
  };
  WindowTree_SetHitTestMask_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetHitTestMask_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetHitTestMask_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetHitTestMask_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_SetHitTestMask_Params.mask
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetHitTestMask_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetHitTestMask_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetHitTestMask_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.mask = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  WindowTree_SetHitTestMask_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetHitTestMask_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Rect, val.mask);
  };
  function WindowTree_SetCanAcceptDrops_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetCanAcceptDrops_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.acceptsDrops = false;
  };
  WindowTree_SetCanAcceptDrops_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetCanAcceptDrops_Params.generate = function(generator_) {
    var generated = new WindowTree_SetCanAcceptDrops_Params;
    generated.windowId = generator_.generateUint64();
    generated.acceptsDrops = generator_.generateBool();
    return generated;
  };

  WindowTree_SetCanAcceptDrops_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.acceptsDrops = mutator_.mutateBool(this.acceptsDrops);
    }
    return this;
  };
  WindowTree_SetCanAcceptDrops_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetCanAcceptDrops_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetCanAcceptDrops_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetCanAcceptDrops_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetCanAcceptDrops_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetCanAcceptDrops_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetCanAcceptDrops_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.acceptsDrops = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_SetCanAcceptDrops_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetCanAcceptDrops_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    packed = 0;
    packed |= (val.acceptsDrops & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_SetWindowVisibility_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetWindowVisibility_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.visible = false;
    this.windowId = 0;
  };
  WindowTree_SetWindowVisibility_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetWindowVisibility_Params.generate = function(generator_) {
    var generated = new WindowTree_SetWindowVisibility_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.visible = generator_.generateBool();
    return generated;
  };

  WindowTree_SetWindowVisibility_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  WindowTree_SetWindowVisibility_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetWindowVisibility_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetWindowVisibility_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetWindowVisibility_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetWindowVisibility_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetWindowVisibility_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetWindowVisibility_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_SetWindowVisibility_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetWindowVisibility_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    packed = 0;
    packed |= (val.visible & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_SetWindowProperty_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetWindowProperty_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.name = null;
    this.value = null;
  };
  WindowTree_SetWindowProperty_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetWindowProperty_Params.generate = function(generator_) {
    var generated = new WindowTree_SetWindowProperty_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.name = generator_.generateString(false);
    generated.value = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WindowTree_SetWindowProperty_Params.prototype.mutate = function(mutator_) {
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
  WindowTree_SetWindowProperty_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetWindowProperty_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetWindowProperty_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetWindowProperty_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_SetWindowProperty_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_SetWindowProperty_Params.value
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetWindowProperty_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowTree_SetWindowProperty_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetWindowProperty_Params();
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

  WindowTree_SetWindowProperty_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetWindowProperty_Params.encodedSize);
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
  function WindowTree_SetWindowOpacity_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetWindowOpacity_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.opacity = 0;
    this.windowId = 0;
  };
  WindowTree_SetWindowOpacity_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetWindowOpacity_Params.generate = function(generator_) {
    var generated = new WindowTree_SetWindowOpacity_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.opacity = generator_.generateFloat();
    return generated;
  };

  WindowTree_SetWindowOpacity_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.opacity = mutator_.mutateFloat(this.opacity);
    }
    return this;
  };
  WindowTree_SetWindowOpacity_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetWindowOpacity_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetWindowOpacity_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetWindowOpacity_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetWindowOpacity_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetWindowOpacity_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetWindowOpacity_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    val.opacity = decoder.decodeStruct(codec.Float);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_SetWindowOpacity_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetWindowOpacity_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.encodeStruct(codec.Float, val.opacity);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_AttachCompositorFrameSink_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_AttachCompositorFrameSink_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.compositorFrameSink = new bindings.InterfaceRequest();
    this.client = new compositor_frame_sink$.CompositorFrameSinkClientPtr();
  };
  WindowTree_AttachCompositorFrameSink_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_AttachCompositorFrameSink_Params.generate = function(generator_) {
    var generated = new WindowTree_AttachCompositorFrameSink_Params;
    generated.windowId = generator_.generateUint64();
    generated.compositorFrameSink = generator_.generateInterfaceRequest("viz.mojom.CompositorFrameSink", false);
    generated.client = generator_.generateInterface("viz.mojom.CompositorFrameSinkClient", false);
    return generated;
  };

  WindowTree_AttachCompositorFrameSink_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.compositorFrameSink = mutator_.mutateInterfaceRequest(this.compositorFrameSink, "viz.mojom.CompositorFrameSink", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "viz.mojom.CompositorFrameSinkClient", false);
    }
    return this;
  };
  WindowTree_AttachCompositorFrameSink_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.compositorFrameSink !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositorFrameSinkClientPtr"]);
    }
    return handles;
  };

  WindowTree_AttachCompositorFrameSink_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_AttachCompositorFrameSink_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.compositorFrameSink = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  WindowTree_AttachCompositorFrameSink_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_AttachCompositorFrameSink_Params.compositorFrameSink
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_AttachCompositorFrameSink_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_AttachCompositorFrameSink_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_AttachCompositorFrameSink_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_AttachCompositorFrameSink_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.compositorFrameSink = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_AttachCompositorFrameSink_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_AttachCompositorFrameSink_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.InterfaceRequest, val.compositorFrameSink);
    encoder.encodeStruct(new codec.Interface(compositor_frame_sink$.CompositorFrameSinkClientPtr), val.client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_AddWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_AddWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.parent = 0;
    this.child = 0;
  };
  WindowTree_AddWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_AddWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_AddWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.parent = generator_.generateUint64();
    generated.child = generator_.generateUint64();
    return generated;
  };

  WindowTree_AddWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.parent = mutator_.mutateUint64(this.parent);
    }
    if (mutator_.chooseMutateField()) {
      this.child = mutator_.mutateUint64(this.child);
    }
    return this;
  };
  WindowTree_AddWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_AddWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_AddWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_AddWindow_Params.validate = function(messageValidator, offset) {
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

  WindowTree_AddWindow_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_AddWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_AddWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.parent = decoder.decodeStruct(codec.Uint64);
    val.child = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_AddWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_AddWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.parent);
    encoder.encodeStruct(codec.Uint64, val.child);
  };
  function WindowTree_RemoveWindowFromParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_RemoveWindowFromParent_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowTree_RemoveWindowFromParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_RemoveWindowFromParent_Params.generate = function(generator_) {
    var generated = new WindowTree_RemoveWindowFromParent_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_RemoveWindowFromParent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_RemoveWindowFromParent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_RemoveWindowFromParent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_RemoveWindowFromParent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_RemoveWindowFromParent_Params.validate = function(messageValidator, offset) {
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

  WindowTree_RemoveWindowFromParent_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_RemoveWindowFromParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_RemoveWindowFromParent_Params();
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

  WindowTree_RemoveWindowFromParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_RemoveWindowFromParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_AddTransientWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_AddTransientWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.transientWindowId = 0;
  };
  WindowTree_AddTransientWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_AddTransientWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_AddTransientWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.transientWindowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_AddTransientWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.transientWindowId = mutator_.mutateUint64(this.transientWindowId);
    }
    return this;
  };
  WindowTree_AddTransientWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_AddTransientWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_AddTransientWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_AddTransientWindow_Params.validate = function(messageValidator, offset) {
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

  WindowTree_AddTransientWindow_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_AddTransientWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_AddTransientWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.transientWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_AddTransientWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_AddTransientWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.transientWindowId);
  };
  function WindowTree_RemoveTransientWindowFromParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_RemoveTransientWindowFromParent_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.transientWindowId = 0;
  };
  WindowTree_RemoveTransientWindowFromParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_RemoveTransientWindowFromParent_Params.generate = function(generator_) {
    var generated = new WindowTree_RemoveTransientWindowFromParent_Params;
    generated.changeId = generator_.generateUint32();
    generated.transientWindowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_RemoveTransientWindowFromParent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.transientWindowId = mutator_.mutateUint64(this.transientWindowId);
    }
    return this;
  };
  WindowTree_RemoveTransientWindowFromParent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_RemoveTransientWindowFromParent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_RemoveTransientWindowFromParent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_RemoveTransientWindowFromParent_Params.validate = function(messageValidator, offset) {
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

  WindowTree_RemoveTransientWindowFromParent_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_RemoveTransientWindowFromParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_RemoveTransientWindowFromParent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.transientWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_RemoveTransientWindowFromParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_RemoveTransientWindowFromParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.transientWindowId);
  };
  function WindowTree_SetModalType_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetModalType_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.type = 0;
    this.windowId = 0;
  };
  WindowTree_SetModalType_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetModalType_Params.generate = function(generator_) {
    var generated = new WindowTree_SetModalType_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.type = generator_.generateEnum(0, 3);
    return generated;
  };

  WindowTree_SetModalType_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 3);
    }
    return this;
  };
  WindowTree_SetModalType_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetModalType_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetModalType_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetModalType_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_SetModalType_Params.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, ui_base_types$.ModalType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetModalType_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetModalType_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetModalType_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    val.type = decoder.decodeStruct(codec.Int32);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_SetModalType_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetModalType_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_SetChildModalParent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetChildModalParent_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.parentWindowId = 0;
  };
  WindowTree_SetChildModalParent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetChildModalParent_Params.generate = function(generator_) {
    var generated = new WindowTree_SetChildModalParent_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.parentWindowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_SetChildModalParent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.parentWindowId = mutator_.mutateUint64(this.parentWindowId);
    }
    return this;
  };
  WindowTree_SetChildModalParent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetChildModalParent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetChildModalParent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetChildModalParent_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetChildModalParent_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_SetChildModalParent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetChildModalParent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.parentWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_SetChildModalParent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetChildModalParent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.parentWindowId);
  };
  function WindowTree_ReorderWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_ReorderWindow_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.direction = 0;
    this.windowId = 0;
    this.relativeWindowId = 0;
  };
  WindowTree_ReorderWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_ReorderWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_ReorderWindow_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.relativeWindowId = generator_.generateUint64();
    generated.direction = generator_.generateEnum(0, 2);
    return generated;
  };

  WindowTree_ReorderWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.relativeWindowId = mutator_.mutateUint64(this.relativeWindowId);
    }
    if (mutator_.chooseMutateField()) {
      this.direction = mutator_.mutateEnum(this.direction, 0, 2);
    }
    return this;
  };
  WindowTree_ReorderWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_ReorderWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_ReorderWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_ReorderWindow_Params.validate = function(messageValidator, offset) {
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





    // validate WindowTree_ReorderWindow_Params.direction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, mus_constants$.OrderDirection);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_ReorderWindow_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_ReorderWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_ReorderWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    val.direction = decoder.decodeStruct(codec.Int32);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.relativeWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_ReorderWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_ReorderWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.encodeStruct(codec.Int32, val.direction);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.relativeWindowId);
  };
  function WindowTree_GetWindowTree_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_GetWindowTree_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowTree_GetWindowTree_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_GetWindowTree_Params.generate = function(generator_) {
    var generated = new WindowTree_GetWindowTree_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_GetWindowTree_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_GetWindowTree_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_GetWindowTree_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_GetWindowTree_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_GetWindowTree_Params.validate = function(messageValidator, offset) {
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

  WindowTree_GetWindowTree_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_GetWindowTree_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_GetWindowTree_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_GetWindowTree_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_GetWindowTree_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_GetWindowTree_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_GetWindowTree_ResponseParams.prototype.initDefaults_ = function() {
    this.windows = null;
  };
  WindowTree_GetWindowTree_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_GetWindowTree_ResponseParams.generate = function(generator_) {
    var generated = new WindowTree_GetWindowTree_ResponseParams;
    generated.windows = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.WindowData, false);
    });
    return generated;
  };

  WindowTree_GetWindowTree_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windows = mutator_.mutateArray(this.windows, function(val) {
        return mutator_.mutateStruct(ui.mojom.WindowData, false);
      });
    }
    return this;
  };
  WindowTree_GetWindowTree_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_GetWindowTree_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_GetWindowTree_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_GetWindowTree_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WindowTree_GetWindowTree_ResponseParams.windows
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(window_tree_constants$.WindowData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_GetWindowTree_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_GetWindowTree_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTree_GetWindowTree_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windows = decoder.decodeArrayPointer(new codec.PointerTo(window_tree_constants$.WindowData));
    return val;
  };

  WindowTree_GetWindowTree_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_GetWindowTree_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(window_tree_constants$.WindowData), val.windows);
  };
  function WindowTree_Embed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_Embed_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.client = new WindowTreeClientPtr();
    this.embedFlags = 0;
  };
  WindowTree_Embed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_Embed_Params.generate = function(generator_) {
    var generated = new WindowTree_Embed_Params;
    generated.windowId = generator_.generateUint64();
    generated.client = generator_.generateInterface("ui.mojom.WindowTreeClient", false);
    generated.embedFlags = generator_.generateUint32();
    return generated;
  };

  WindowTree_Embed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "ui.mojom.WindowTreeClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.embedFlags = mutator_.mutateUint32(this.embedFlags);
    }
    return this;
  };
  WindowTree_Embed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeClientPtr"]);
    }
    return handles;
  };

  WindowTree_Embed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_Embed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  WindowTree_Embed_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_Embed_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowTree_Embed_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_Embed_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_Embed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.client = decoder.decodeStruct(new codec.Interface(WindowTreeClientPtr));
    val.embedFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_Embed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_Embed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(new codec.Interface(WindowTreeClientPtr), val.client);
    encoder.encodeStruct(codec.Uint32, val.embedFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_Embed_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_Embed_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowTree_Embed_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_Embed_ResponseParams.generate = function(generator_) {
    var generated = new WindowTree_Embed_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowTree_Embed_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowTree_Embed_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_Embed_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_Embed_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_Embed_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowTree_Embed_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_Embed_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTree_Embed_ResponseParams();
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

  WindowTree_Embed_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_Embed_ResponseParams.encodedSize);
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
  function WindowTree_ScheduleEmbed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_ScheduleEmbed_Params.prototype.initDefaults_ = function() {
    this.client = new WindowTreeClientPtr();
  };
  WindowTree_ScheduleEmbed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_ScheduleEmbed_Params.generate = function(generator_) {
    var generated = new WindowTree_ScheduleEmbed_Params;
    generated.client = generator_.generateInterface("ui.mojom.WindowTreeClient", false);
    return generated;
  };

  WindowTree_ScheduleEmbed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "ui.mojom.WindowTreeClient", false);
    }
    return this;
  };
  WindowTree_ScheduleEmbed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeClientPtr"]);
    }
    return handles;
  };

  WindowTree_ScheduleEmbed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_ScheduleEmbed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  WindowTree_ScheduleEmbed_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTree_ScheduleEmbed_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_ScheduleEmbed_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_ScheduleEmbed_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_ScheduleEmbed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(WindowTreeClientPtr));
    return val;
  };

  WindowTree_ScheduleEmbed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_ScheduleEmbed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(WindowTreeClientPtr), val.client);
  };
  function WindowTree_ScheduleEmbed_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_ScheduleEmbed_ResponseParams.prototype.initDefaults_ = function() {
    this.token = null;
  };
  WindowTree_ScheduleEmbed_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_ScheduleEmbed_ResponseParams.generate = function(generator_) {
    var generated = new WindowTree_ScheduleEmbed_ResponseParams;
    generated.token = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  WindowTree_ScheduleEmbed_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  WindowTree_ScheduleEmbed_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_ScheduleEmbed_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_ScheduleEmbed_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_ScheduleEmbed_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WindowTree_ScheduleEmbed_ResponseParams.token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_ScheduleEmbed_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_ScheduleEmbed_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTree_ScheduleEmbed_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  WindowTree_ScheduleEmbed_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_ScheduleEmbed_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.token);
  };
  function WindowTree_ScheduleEmbedForExistingClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_ScheduleEmbedForExistingClient_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowTree_ScheduleEmbedForExistingClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_ScheduleEmbedForExistingClient_Params.generate = function(generator_) {
    var generated = new WindowTree_ScheduleEmbedForExistingClient_Params;
    generated.windowId = generator_.generateUint32();
    return generated;
  };

  WindowTree_ScheduleEmbedForExistingClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint32(this.windowId);
    }
    return this;
  };
  WindowTree_ScheduleEmbedForExistingClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_ScheduleEmbedForExistingClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_ScheduleEmbedForExistingClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_ScheduleEmbedForExistingClient_Params.validate = function(messageValidator, offset) {
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

  WindowTree_ScheduleEmbedForExistingClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_ScheduleEmbedForExistingClient_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_ScheduleEmbedForExistingClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_ScheduleEmbedForExistingClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_ScheduleEmbedForExistingClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.windowId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_ScheduleEmbedForExistingClient_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.prototype.initDefaults_ = function() {
    this.token = null;
  };
  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.generate = function(generator_) {
    var generated = new WindowTree_ScheduleEmbedForExistingClient_ResponseParams;
    generated.token = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WindowTree_ScheduleEmbedForExistingClient_ResponseParams.token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTree_ScheduleEmbedForExistingClient_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  WindowTree_ScheduleEmbedForExistingClient_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_ScheduleEmbedForExistingClient_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.token);
  };
  function WindowTree_EmbedUsingToken_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_EmbedUsingToken_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.token = null;
    this.embedFlags = 0;
  };
  WindowTree_EmbedUsingToken_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_EmbedUsingToken_Params.generate = function(generator_) {
    var generated = new WindowTree_EmbedUsingToken_Params;
    generated.windowId = generator_.generateUint64();
    generated.token = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.embedFlags = generator_.generateUint32();
    return generated;
  };

  WindowTree_EmbedUsingToken_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.embedFlags = mutator_.mutateUint32(this.embedFlags);
    }
    return this;
  };
  WindowTree_EmbedUsingToken_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_EmbedUsingToken_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_EmbedUsingToken_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_EmbedUsingToken_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_EmbedUsingToken_Params.token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowTree_EmbedUsingToken_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_EmbedUsingToken_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_EmbedUsingToken_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.token = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.embedFlags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_EmbedUsingToken_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_EmbedUsingToken_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.token);
    encoder.encodeStruct(codec.Uint32, val.embedFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_EmbedUsingToken_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_EmbedUsingToken_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  WindowTree_EmbedUsingToken_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_EmbedUsingToken_ResponseParams.generate = function(generator_) {
    var generated = new WindowTree_EmbedUsingToken_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowTree_EmbedUsingToken_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowTree_EmbedUsingToken_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_EmbedUsingToken_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_EmbedUsingToken_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_EmbedUsingToken_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowTree_EmbedUsingToken_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_EmbedUsingToken_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTree_EmbedUsingToken_ResponseParams();
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

  WindowTree_EmbedUsingToken_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_EmbedUsingToken_ResponseParams.encodedSize);
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
  function WindowTree_SetFocus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetFocus_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowTree_SetFocus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetFocus_Params.generate = function(generator_) {
    var generated = new WindowTree_SetFocus_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_SetFocus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_SetFocus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetFocus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetFocus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetFocus_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetFocus_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetFocus_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetFocus_Params();
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

  WindowTree_SetFocus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetFocus_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_SetCanFocus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetCanFocus_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.canFocus = false;
  };
  WindowTree_SetCanFocus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetCanFocus_Params.generate = function(generator_) {
    var generated = new WindowTree_SetCanFocus_Params;
    generated.windowId = generator_.generateUint64();
    generated.canFocus = generator_.generateBool();
    return generated;
  };

  WindowTree_SetCanFocus_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.canFocus = mutator_.mutateBool(this.canFocus);
    }
    return this;
  };
  WindowTree_SetCanFocus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetCanFocus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetCanFocus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetCanFocus_Params.validate = function(messageValidator, offset) {
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

  WindowTree_SetCanFocus_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetCanFocus_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetCanFocus_Params();
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

  WindowTree_SetCanFocus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetCanFocus_Params.encodedSize);
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
  function WindowTree_SetCursor_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetCursor_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
    this.cursor = null;
  };
  WindowTree_SetCursor_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetCursor_Params.generate = function(generator_) {
    var generated = new WindowTree_SetCursor_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.cursor = generator_.generateStruct(ui.mojom.CursorData, false);
    return generated;
  };

  WindowTree_SetCursor_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.cursor = mutator_.mutateStruct(ui.mojom.CursorData, false);
    }
    return this;
  };
  WindowTree_SetCursor_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursor !== null) {
      Array.prototype.push.apply(handles, this.cursor.getHandleDeps());
    }
    return handles;
  };

  WindowTree_SetCursor_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetCursor_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.cursor.setHandlesInternal_(handles, idx);
    return idx;
  };

  WindowTree_SetCursor_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_SetCursor_Params.cursor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, cursor$.CursorData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetCursor_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_SetCursor_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetCursor_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.cursor = decoder.decodeStructPointer(cursor$.CursorData);
    return val;
  };

  WindowTree_SetCursor_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetCursor_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(cursor$.CursorData, val.cursor);
  };
  function WindowTree_SetWindowTextInputState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetWindowTextInputState_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.state = null;
  };
  WindowTree_SetWindowTextInputState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetWindowTextInputState_Params.generate = function(generator_) {
    var generated = new WindowTree_SetWindowTextInputState_Params;
    generated.windowId = generator_.generateUint64();
    generated.state = generator_.generateStruct(ui.mojom.TextInputState, false);
    return generated;
  };

  WindowTree_SetWindowTextInputState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateStruct(ui.mojom.TextInputState, false);
    }
    return this;
  };
  WindowTree_SetWindowTextInputState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetWindowTextInputState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetWindowTextInputState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetWindowTextInputState_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_SetWindowTextInputState_Params.state
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, text_input_state$.TextInputState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetWindowTextInputState_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetWindowTextInputState_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetWindowTextInputState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.state = decoder.decodeStructPointer(text_input_state$.TextInputState);
    return val;
  };

  WindowTree_SetWindowTextInputState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetWindowTextInputState_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(text_input_state$.TextInputState, val.state);
  };
  function WindowTree_SetImeVisibility_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetImeVisibility_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.visible = false;
    this.state = null;
  };
  WindowTree_SetImeVisibility_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetImeVisibility_Params.generate = function(generator_) {
    var generated = new WindowTree_SetImeVisibility_Params;
    generated.windowId = generator_.generateUint64();
    generated.visible = generator_.generateBool();
    generated.state = generator_.generateStruct(ui.mojom.TextInputState, true);
    return generated;
  };

  WindowTree_SetImeVisibility_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateStruct(ui.mojom.TextInputState, true);
    }
    return this;
  };
  WindowTree_SetImeVisibility_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetImeVisibility_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetImeVisibility_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetImeVisibility_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_SetImeVisibility_Params.state
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, text_input_state$.TextInputState, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetImeVisibility_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_SetImeVisibility_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetImeVisibility_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.visible = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.state = decoder.decodeStructPointer(text_input_state$.TextInputState);
    return val;
  };

  WindowTree_SetImeVisibility_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetImeVisibility_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
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
    encoder.encodeStructPointer(text_input_state$.TextInputState, val.state);
  };
  function WindowTree_SetEventTargetingPolicy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_SetEventTargetingPolicy_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.policy = 0;
  };
  WindowTree_SetEventTargetingPolicy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_SetEventTargetingPolicy_Params.generate = function(generator_) {
    var generated = new WindowTree_SetEventTargetingPolicy_Params;
    generated.windowId = generator_.generateUint64();
    generated.policy = generator_.generateEnum(0, 3);
    return generated;
  };

  WindowTree_SetEventTargetingPolicy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.policy = mutator_.mutateEnum(this.policy, 0, 3);
    }
    return this;
  };
  WindowTree_SetEventTargetingPolicy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_SetEventTargetingPolicy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_SetEventTargetingPolicy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_SetEventTargetingPolicy_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_SetEventTargetingPolicy_Params.policy
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, window_tree_constants$.EventTargetingPolicy);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_SetEventTargetingPolicy_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_SetEventTargetingPolicy_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_SetEventTargetingPolicy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.policy = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_SetEventTargetingPolicy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_SetEventTargetingPolicy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Int32, val.policy);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_OnWindowInputEventAck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_OnWindowInputEventAck_Params.prototype.initDefaults_ = function() {
    this.eventId = 0;
    this.result = 0;
  };
  WindowTree_OnWindowInputEventAck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_OnWindowInputEventAck_Params.generate = function(generator_) {
    var generated = new WindowTree_OnWindowInputEventAck_Params;
    generated.eventId = generator_.generateUint32();
    generated.result = generator_.generateEnum(0, 1);
    return generated;
  };

  WindowTree_OnWindowInputEventAck_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.eventId = mutator_.mutateUint32(this.eventId);
    }
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 1);
    }
    return this;
  };
  WindowTree_OnWindowInputEventAck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_OnWindowInputEventAck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_OnWindowInputEventAck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_OnWindowInputEventAck_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_OnWindowInputEventAck_Params.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, window_tree_constants$.EventResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_OnWindowInputEventAck_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_OnWindowInputEventAck_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_OnWindowInputEventAck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.eventId = decoder.decodeStruct(codec.Uint32);
    val.result = decoder.decodeStruct(codec.Int32);
    return val;
  };

  WindowTree_OnWindowInputEventAck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_OnWindowInputEventAck_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.eventId);
    encoder.encodeStruct(codec.Int32, val.result);
  };
  function WindowTree_DeactivateWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_DeactivateWindow_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowTree_DeactivateWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_DeactivateWindow_Params.generate = function(generator_) {
    var generated = new WindowTree_DeactivateWindow_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_DeactivateWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_DeactivateWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_DeactivateWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_DeactivateWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_DeactivateWindow_Params.validate = function(messageValidator, offset) {
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

  WindowTree_DeactivateWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_DeactivateWindow_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_DeactivateWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_DeactivateWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_DeactivateWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_StackAbove_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_StackAbove_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.aboveId = 0;
    this.belowId = 0;
  };
  WindowTree_StackAbove_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_StackAbove_Params.generate = function(generator_) {
    var generated = new WindowTree_StackAbove_Params;
    generated.changeId = generator_.generateUint32();
    generated.aboveId = generator_.generateUint64();
    generated.belowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_StackAbove_Params.prototype.mutate = function(mutator_) {
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
  WindowTree_StackAbove_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_StackAbove_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_StackAbove_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_StackAbove_Params.validate = function(messageValidator, offset) {
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

  WindowTree_StackAbove_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_StackAbove_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_StackAbove_Params();
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

  WindowTree_StackAbove_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_StackAbove_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.aboveId);
    encoder.encodeStruct(codec.Uint64, val.belowId);
  };
  function WindowTree_StackAtTop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_StackAtTop_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.windowId = 0;
  };
  WindowTree_StackAtTop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_StackAtTop_Params.generate = function(generator_) {
    var generated = new WindowTree_StackAtTop_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_StackAtTop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_StackAtTop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_StackAtTop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_StackAtTop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_StackAtTop_Params.validate = function(messageValidator, offset) {
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

  WindowTree_StackAtTop_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_StackAtTop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_StackAtTop_Params();
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

  WindowTree_StackAtTop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_StackAtTop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_PerformWmAction_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_PerformWmAction_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.action = null;
  };
  WindowTree_PerformWmAction_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_PerformWmAction_Params.generate = function(generator_) {
    var generated = new WindowTree_PerformWmAction_Params;
    generated.windowId = generator_.generateUint64();
    generated.action = generator_.generateString(false);
    return generated;
  };

  WindowTree_PerformWmAction_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateString(this.action, false);
    }
    return this;
  };
  WindowTree_PerformWmAction_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_PerformWmAction_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_PerformWmAction_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_PerformWmAction_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTree_PerformWmAction_Params.action
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_PerformWmAction_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTree_PerformWmAction_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_PerformWmAction_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.action = decoder.decodeStruct(codec.String);
    return val;
  };

  WindowTree_PerformWmAction_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_PerformWmAction_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.String, val.action);
  };
  function WindowTree_GetWindowManagerClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_GetWindowManagerClient_Params.prototype.initDefaults_ = function() {
    this.internal = new associatedBindings.AssociatedInterfaceRequest();
  };
  WindowTree_GetWindowManagerClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_GetWindowManagerClient_Params.generate = function(generator_) {
    var generated = new WindowTree_GetWindowManagerClient_Params;
    generated.internal = generator_.generateAssociatedInterfaceRequest("ui.mojom.WindowManagerClient", false);
    return generated;
  };

  WindowTree_GetWindowManagerClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.internal = mutator_.mutateAssociatedInterfaceRequest(this.internal, "ui.mojom.WindowManagerClient", false);
    }
    return this;
  };
  WindowTree_GetWindowManagerClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.internal !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowManagerClientAssociatedRequest"]);
    }
    return handles;
  };

  WindowTree_GetWindowManagerClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_GetWindowManagerClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.internal = handles[idx++];;
    return idx;
  };

  WindowTree_GetWindowManagerClient_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTree_GetWindowManagerClient_Params.internal
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_GetWindowManagerClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_GetWindowManagerClient_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_GetWindowManagerClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.internal = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_GetWindowManagerClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_GetWindowManagerClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.internal);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_GetCursorLocationMemory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_GetCursorLocationMemory_Params.prototype.initDefaults_ = function() {
  };
  WindowTree_GetCursorLocationMemory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_GetCursorLocationMemory_Params.generate = function(generator_) {
    var generated = new WindowTree_GetCursorLocationMemory_Params;
    return generated;
  };

  WindowTree_GetCursorLocationMemory_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowTree_GetCursorLocationMemory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_GetCursorLocationMemory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_GetCursorLocationMemory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_GetCursorLocationMemory_Params.validate = function(messageValidator, offset) {
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

  WindowTree_GetCursorLocationMemory_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowTree_GetCursorLocationMemory_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_GetCursorLocationMemory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowTree_GetCursorLocationMemory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_GetCursorLocationMemory_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowTree_GetCursorLocationMemory_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_GetCursorLocationMemory_ResponseParams.prototype.initDefaults_ = function() {
    this.cursorBuffer = null;
  };
  WindowTree_GetCursorLocationMemory_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_GetCursorLocationMemory_ResponseParams.generate = function(generator_) {
    var generated = new WindowTree_GetCursorLocationMemory_ResponseParams;
    generated.cursorBuffer = generator_.generateSharedBuffer(false);
    return generated;
  };

  WindowTree_GetCursorLocationMemory_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.cursorBuffer = mutator_.mutateSharedBuffer(this.cursorBuffer, false);
    }
    return this;
  };
  WindowTree_GetCursorLocationMemory_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursorBuffer !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  WindowTree_GetCursorLocationMemory_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_GetCursorLocationMemory_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.cursorBuffer = handles[idx++];;
    return idx;
  };

  WindowTree_GetCursorLocationMemory_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate WindowTree_GetCursorLocationMemory_ResponseParams.cursorBuffer
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_GetCursorLocationMemory_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_GetCursorLocationMemory_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTree_GetCursorLocationMemory_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.cursorBuffer = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_GetCursorLocationMemory_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_GetCursorLocationMemory_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.cursorBuffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_PerformWindowMove_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_PerformWindowMove_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.source = 0;
    this.windowId = 0;
    this.cursor = null;
  };
  WindowTree_PerformWindowMove_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_PerformWindowMove_Params.generate = function(generator_) {
    var generated = new WindowTree_PerformWindowMove_Params;
    generated.changeId = generator_.generateUint32();
    generated.windowId = generator_.generateUint64();
    generated.source = generator_.generateEnum(0, 1);
    generated.cursor = generator_.generateStruct(gfx.mojom.Point, false);
    return generated;
  };

  WindowTree_PerformWindowMove_Params.prototype.mutate = function(mutator_) {
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
      this.cursor = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    return this;
  };
  WindowTree_PerformWindowMove_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_PerformWindowMove_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_PerformWindowMove_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_PerformWindowMove_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTree_PerformWindowMove_Params.source
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, window_manager_constants$.MoveLoopSource);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_PerformWindowMove_Params.cursor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_PerformWindowMove_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTree_PerformWindowMove_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_PerformWindowMove_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    val.source = decoder.decodeStruct(codec.Int32);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.cursor = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowTree_PerformWindowMove_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_PerformWindowMove_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Point, val.cursor);
  };
  function WindowTree_CancelWindowMove_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_CancelWindowMove_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowTree_CancelWindowMove_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_CancelWindowMove_Params.generate = function(generator_) {
    var generated = new WindowTree_CancelWindowMove_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_CancelWindowMove_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_CancelWindowMove_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_CancelWindowMove_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_CancelWindowMove_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_CancelWindowMove_Params.validate = function(messageValidator, offset) {
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

  WindowTree_CancelWindowMove_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_CancelWindowMove_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_CancelWindowMove_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_CancelWindowMove_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_CancelWindowMove_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTree_PerformDragDrop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_PerformDragDrop_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.dragOperation = 0;
    this.sourceWindowId = 0;
    this.screenLocation = null;
    this.dragData = null;
    this.dragImage = null;
    this.dragImageOffset = null;
    this.source = 0;
  };
  WindowTree_PerformDragDrop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_PerformDragDrop_Params.generate = function(generator_) {
    var generated = new WindowTree_PerformDragDrop_Params;
    generated.changeId = generator_.generateUint32();
    generated.sourceWindowId = generator_.generateUint64();
    generated.screenLocation = generator_.generateStruct(gfx.mojom.Point, false);
    generated.dragData = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateUint8();
        });
      });
    generated.dragImage = generator_.generateStruct(skia.mojom.Bitmap, true);
    generated.dragImageOffset = generator_.generateStruct(gfx.mojom.Vector2d, false);
    generated.dragOperation = generator_.generateUint32();
    generated.source = generator_.generateEnum(0, 3);
    return generated;
  };

  WindowTree_PerformDragDrop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceWindowId = mutator_.mutateUint64(this.sourceWindowId);
    }
    if (mutator_.chooseMutateField()) {
      this.screenLocation = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dragData = mutator_.mutateMap(this.dragData,
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
      this.dragImage = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    if (mutator_.chooseMutateField()) {
      this.dragImageOffset = mutator_.mutateStruct(gfx.mojom.Vector2d, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dragOperation = mutator_.mutateUint32(this.dragOperation);
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateEnum(this.source, 0, 3);
    }
    return this;
  };
  WindowTree_PerformDragDrop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.dragImage !== null) {
      Array.prototype.push.apply(handles, this.dragImage.getHandleDeps());
    }
    return handles;
  };

  WindowTree_PerformDragDrop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_PerformDragDrop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.dragImage.setHandlesInternal_(handles, idx);
    return idx;
  };

  WindowTree_PerformDragDrop_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate WindowTree_PerformDragDrop_Params.screenLocation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_PerformDragDrop_Params.dragData
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 24, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_PerformDragDrop_Params.dragImage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTree_PerformDragDrop_Params.dragImageOffset
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, geometry$.Vector2d, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate WindowTree_PerformDragDrop_Params.source
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 48, event_constants$.PointerKind);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTree_PerformDragDrop_Params.encodedSize = codec.kStructHeaderSize + 56;

  WindowTree_PerformDragDrop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_PerformDragDrop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    val.dragOperation = decoder.decodeStruct(codec.Uint32);
    val.sourceWindowId = decoder.decodeStruct(codec.Uint64);
    val.screenLocation = decoder.decodeStructPointer(geometry$.Point);
    val.dragData = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    val.dragImage = decoder.decodeStructPointer(bitmap$.Bitmap);
    val.dragImageOffset = decoder.decodeStructPointer(geometry$.Vector2d);
    val.source = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTree_PerformDragDrop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_PerformDragDrop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    encoder.encodeStruct(codec.Uint32, val.dragOperation);
    encoder.encodeStruct(codec.Uint64, val.sourceWindowId);
    encoder.encodeStructPointer(geometry$.Point, val.screenLocation);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.dragData);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.dragImage);
    encoder.encodeStructPointer(geometry$.Vector2d, val.dragImageOffset);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTree_CancelDragDrop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTree_CancelDragDrop_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowTree_CancelDragDrop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTree_CancelDragDrop_Params.generate = function(generator_) {
    var generated = new WindowTree_CancelDragDrop_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTree_CancelDragDrop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTree_CancelDragDrop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTree_CancelDragDrop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTree_CancelDragDrop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTree_CancelDragDrop_Params.validate = function(messageValidator, offset) {
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

  WindowTree_CancelDragDrop_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTree_CancelDragDrop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTree_CancelDragDrop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTree_CancelDragDrop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTree_CancelDragDrop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTreeClient_OnEmbed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnEmbed_Params.prototype.initDefaults_ = function() {
    this.root = null;
    this.tree = new WindowTreePtr();
    this.displayId = 0;
    this.focusedWindow = 0;
    this.parentDrawn = false;
    this.localSurfaceId = null;
  };
  WindowTreeClient_OnEmbed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnEmbed_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnEmbed_Params;
    generated.root = generator_.generateStruct(ui.mojom.WindowData, false);
    generated.tree = generator_.generateInterface("ui.mojom.WindowTree", true);
    generated.displayId = generator_.generateInt64();
    generated.focusedWindow = generator_.generateUint64();
    generated.parentDrawn = generator_.generateBool();
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    return generated;
  };

  WindowTreeClient_OnEmbed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.root = mutator_.mutateStruct(ui.mojom.WindowData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tree = mutator_.mutateInterface(this.tree, "ui.mojom.WindowTree", true);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.focusedWindow = mutator_.mutateUint64(this.focusedWindow);
    }
    if (mutator_.chooseMutateField()) {
      this.parentDrawn = mutator_.mutateBool(this.parentDrawn);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    return this;
  };
  WindowTreeClient_OnEmbed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.tree !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreePtr"]);
    }
    return handles;
  };

  WindowTreeClient_OnEmbed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnEmbed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.tree = handles[idx++];;
    return idx;
  };

  WindowTreeClient_OnEmbed_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeClient_OnEmbed_Params.root
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, window_tree_constants$.WindowData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnEmbed_Params.tree
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, true);
    if (err !== validator.validationError.NONE)
        return err;





    // validate WindowTreeClient_OnEmbed_Params.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnEmbed_Params.encodedSize = codec.kStructHeaderSize + 48;

  WindowTreeClient_OnEmbed_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnEmbed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.root = decoder.decodeStructPointer(window_tree_constants$.WindowData);
    val.tree = decoder.decodeStruct(new codec.NullableInterface(WindowTreePtr));
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.focusedWindow = decoder.decodeStruct(codec.Uint64);
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

  WindowTreeClient_OnEmbed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnEmbed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(window_tree_constants$.WindowData, val.root);
    encoder.encodeStruct(new codec.NullableInterface(WindowTreePtr), val.tree);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStruct(codec.Uint64, val.focusedWindow);
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
  function WindowTreeClient_OnEmbedFromToken_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnEmbedFromToken_Params.prototype.initDefaults_ = function() {
    this.token = null;
    this.root = null;
    this.displayId = 0;
    this.localSurfaceId = null;
  };
  WindowTreeClient_OnEmbedFromToken_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnEmbedFromToken_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnEmbedFromToken_Params;
    generated.token = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.root = generator_.generateStruct(ui.mojom.WindowData, false);
    generated.displayId = generator_.generateInt64();
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    return generated;
  };

  WindowTreeClient_OnEmbedFromToken_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.root = mutator_.mutateStruct(ui.mojom.WindowData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    return this;
  };
  WindowTreeClient_OnEmbedFromToken_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnEmbedFromToken_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnEmbedFromToken_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnEmbedFromToken_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeClient_OnEmbedFromToken_Params.token
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnEmbedFromToken_Params.root
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, window_tree_constants$.WindowData, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate WindowTreeClient_OnEmbedFromToken_Params.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnEmbedFromToken_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowTreeClient_OnEmbedFromToken_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnEmbedFromToken_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.root = decoder.decodeStructPointer(window_tree_constants$.WindowData);
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    return val;
  };

  WindowTreeClient_OnEmbedFromToken_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnEmbedFromToken_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.token);
    encoder.encodeStructPointer(window_tree_constants$.WindowData, val.root);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
  };
  function WindowTreeClient_OnEmbeddedAppDisconnected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnEmbeddedAppDisconnected_Params.prototype.initDefaults_ = function() {
    this.window = 0;
  };
  WindowTreeClient_OnEmbeddedAppDisconnected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnEmbeddedAppDisconnected_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnEmbeddedAppDisconnected_Params;
    generated.window = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnEmbeddedAppDisconnected_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    return this;
  };
  WindowTreeClient_OnEmbeddedAppDisconnected_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnEmbeddedAppDisconnected_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnEmbeddedAppDisconnected_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnEmbeddedAppDisconnected_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnEmbeddedAppDisconnected_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnEmbeddedAppDisconnected_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnEmbeddedAppDisconnected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnEmbeddedAppDisconnected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnEmbeddedAppDisconnected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
  };
  function WindowTreeClient_OnUnembed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnUnembed_Params.prototype.initDefaults_ = function() {
    this.window = 0;
  };
  WindowTreeClient_OnUnembed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnUnembed_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnUnembed_Params;
    generated.window = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnUnembed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    return this;
  };
  WindowTreeClient_OnUnembed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnUnembed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnUnembed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnUnembed_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnUnembed_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnUnembed_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnUnembed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnUnembed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnUnembed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
  };
  function WindowTreeClient_OnCaptureChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnCaptureChanged_Params.prototype.initDefaults_ = function() {
    this.newCapture = 0;
    this.oldCapture = 0;
  };
  WindowTreeClient_OnCaptureChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnCaptureChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnCaptureChanged_Params;
    generated.newCapture = generator_.generateUint64();
    generated.oldCapture = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnCaptureChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.newCapture = mutator_.mutateUint64(this.newCapture);
    }
    if (mutator_.chooseMutateField()) {
      this.oldCapture = mutator_.mutateUint64(this.oldCapture);
    }
    return this;
  };
  WindowTreeClient_OnCaptureChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnCaptureChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnCaptureChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnCaptureChanged_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnCaptureChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnCaptureChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnCaptureChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.newCapture = decoder.decodeStruct(codec.Uint64);
    val.oldCapture = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnCaptureChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnCaptureChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.newCapture);
    encoder.encodeStruct(codec.Uint64, val.oldCapture);
  };
  function WindowTreeClient_OnFrameSinkIdAllocated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnFrameSinkIdAllocated_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.frameSinkId = null;
  };
  WindowTreeClient_OnFrameSinkIdAllocated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnFrameSinkIdAllocated_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnFrameSinkIdAllocated_Params;
    generated.window = generator_.generateUint64();
    generated.frameSinkId = generator_.generateStruct(viz.mojom.FrameSinkId, false);
    return generated;
  };

  WindowTreeClient_OnFrameSinkIdAllocated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.frameSinkId = mutator_.mutateStruct(viz.mojom.FrameSinkId, false);
    }
    return this;
  };
  WindowTreeClient_OnFrameSinkIdAllocated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnFrameSinkIdAllocated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnFrameSinkIdAllocated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnFrameSinkIdAllocated_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnFrameSinkIdAllocated_Params.frameSinkId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnFrameSinkIdAllocated_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnFrameSinkIdAllocated_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnFrameSinkIdAllocated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.frameSinkId = decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    return val;
  };

  WindowTreeClient_OnFrameSinkIdAllocated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnFrameSinkIdAllocated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.frameSinkId);
  };
  function WindowTreeClient_OnTopLevelCreated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnTopLevelCreated_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.parentDrawn = false;
    this.data = null;
    this.displayId = 0;
    this.localSurfaceId = null;
  };
  WindowTreeClient_OnTopLevelCreated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnTopLevelCreated_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnTopLevelCreated_Params;
    generated.changeId = generator_.generateUint32();
    generated.data = generator_.generateStruct(ui.mojom.WindowData, false);
    generated.displayId = generator_.generateInt64();
    generated.parentDrawn = generator_.generateBool();
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    return generated;
  };

  WindowTreeClient_OnTopLevelCreated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(ui.mojom.WindowData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.parentDrawn = mutator_.mutateBool(this.parentDrawn);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    return this;
  };
  WindowTreeClient_OnTopLevelCreated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnTopLevelCreated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnTopLevelCreated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnTopLevelCreated_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnTopLevelCreated_Params.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, window_tree_constants$.WindowData, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate WindowTreeClient_OnTopLevelCreated_Params.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnTopLevelCreated_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowTreeClient_OnTopLevelCreated_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnTopLevelCreated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.parentDrawn = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeStructPointer(window_tree_constants$.WindowData);
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    return val;
  };

  WindowTreeClient_OnTopLevelCreated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnTopLevelCreated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    packed = 0;
    packed |= (val.parentDrawn & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(window_tree_constants$.WindowData, val.data);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
  };
  function WindowTreeClient_OnWindowBoundsChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowBoundsChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.oldBounds = null;
    this.newBounds = null;
    this.localSurfaceId = null;
  };
  WindowTreeClient_OnWindowBoundsChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowBoundsChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowBoundsChanged_Params;
    generated.window = generator_.generateUint64();
    generated.oldBounds = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.newBounds = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.localSurfaceId = generator_.generateStruct(viz.mojom.LocalSurfaceId, true);
    return generated;
  };

  WindowTreeClient_OnWindowBoundsChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.oldBounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newBounds = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.localSurfaceId = mutator_.mutateStruct(viz.mojom.LocalSurfaceId, true);
    }
    return this;
  };
  WindowTreeClient_OnWindowBoundsChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowBoundsChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowBoundsChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowBoundsChanged_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnWindowBoundsChanged_Params.oldBounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnWindowBoundsChanged_Params.newBounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnWindowBoundsChanged_Params.localSurfaceId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, local_surface_id$.LocalSurfaceId, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowBoundsChanged_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowTreeClient_OnWindowBoundsChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowBoundsChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.oldBounds = decoder.decodeStructPointer(geometry$.Rect);
    val.newBounds = decoder.decodeStructPointer(geometry$.Rect);
    val.localSurfaceId = decoder.decodeStructPointer(local_surface_id$.LocalSurfaceId);
    return val;
  };

  WindowTreeClient_OnWindowBoundsChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowBoundsChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStructPointer(geometry$.Rect, val.oldBounds);
    encoder.encodeStructPointer(geometry$.Rect, val.newBounds);
    encoder.encodeStructPointer(local_surface_id$.LocalSurfaceId, val.localSurfaceId);
  };
  function WindowTreeClient_OnWindowTransformChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowTransformChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.oldTransform = null;
    this.newTransform = null;
  };
  WindowTreeClient_OnWindowTransformChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowTransformChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowTransformChanged_Params;
    generated.window = generator_.generateUint64();
    generated.oldTransform = generator_.generateStruct(gfx.mojom.Transform, false);
    generated.newTransform = generator_.generateStruct(gfx.mojom.Transform, false);
    return generated;
  };

  WindowTreeClient_OnWindowTransformChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.oldTransform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newTransform = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    return this;
  };
  WindowTreeClient_OnWindowTransformChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowTransformChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowTransformChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowTransformChanged_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnWindowTransformChanged_Params.oldTransform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnWindowTransformChanged_Params.newTransform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowTransformChanged_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnWindowTransformChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowTransformChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.oldTransform = decoder.decodeStructPointer(transform$.Transform);
    val.newTransform = decoder.decodeStructPointer(transform$.Transform);
    return val;
  };

  WindowTreeClient_OnWindowTransformChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowTransformChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStructPointer(transform$.Transform, val.oldTransform);
    encoder.encodeStructPointer(transform$.Transform, val.newTransform);
  };
  function WindowTreeClient_OnClientAreaChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnClientAreaChanged_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.newClientArea = null;
    this.newAdditionalClientAreas = null;
  };
  WindowTreeClient_OnClientAreaChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnClientAreaChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnClientAreaChanged_Params;
    generated.windowId = generator_.generateUint64();
    generated.newClientArea = generator_.generateStruct(gfx.mojom.Insets, false);
    generated.newAdditionalClientAreas = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Rect, false);
    });
    return generated;
  };

  WindowTreeClient_OnClientAreaChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.newClientArea = mutator_.mutateStruct(gfx.mojom.Insets, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newAdditionalClientAreas = mutator_.mutateArray(this.newAdditionalClientAreas, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Rect, false);
      });
    }
    return this;
  };
  WindowTreeClient_OnClientAreaChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnClientAreaChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnClientAreaChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnClientAreaChanged_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnClientAreaChanged_Params.newClientArea
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Insets, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnClientAreaChanged_Params.newAdditionalClientAreas
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Rect), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnClientAreaChanged_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnClientAreaChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnClientAreaChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.newClientArea = decoder.decodeStructPointer(geometry$.Insets);
    val.newAdditionalClientAreas = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Rect));
    return val;
  };

  WindowTreeClient_OnClientAreaChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnClientAreaChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(geometry$.Insets, val.newClientArea);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Rect), val.newAdditionalClientAreas);
  };
  function WindowTreeClient_OnTransientWindowAdded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnTransientWindowAdded_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.transientWindowId = 0;
  };
  WindowTreeClient_OnTransientWindowAdded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnTransientWindowAdded_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnTransientWindowAdded_Params;
    generated.windowId = generator_.generateUint64();
    generated.transientWindowId = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnTransientWindowAdded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.transientWindowId = mutator_.mutateUint64(this.transientWindowId);
    }
    return this;
  };
  WindowTreeClient_OnTransientWindowAdded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnTransientWindowAdded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnTransientWindowAdded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnTransientWindowAdded_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnTransientWindowAdded_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnTransientWindowAdded_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnTransientWindowAdded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.transientWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnTransientWindowAdded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnTransientWindowAdded_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.transientWindowId);
  };
  function WindowTreeClient_OnTransientWindowRemoved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnTransientWindowRemoved_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.transientWindowId = 0;
  };
  WindowTreeClient_OnTransientWindowRemoved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnTransientWindowRemoved_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnTransientWindowRemoved_Params;
    generated.windowId = generator_.generateUint64();
    generated.transientWindowId = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnTransientWindowRemoved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.transientWindowId = mutator_.mutateUint64(this.transientWindowId);
    }
    return this;
  };
  WindowTreeClient_OnTransientWindowRemoved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnTransientWindowRemoved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnTransientWindowRemoved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnTransientWindowRemoved_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnTransientWindowRemoved_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnTransientWindowRemoved_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnTransientWindowRemoved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.transientWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnTransientWindowRemoved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnTransientWindowRemoved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.transientWindowId);
  };
  function WindowTreeClient_OnWindowHierarchyChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowHierarchyChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.oldParent = 0;
    this.newParent = 0;
    this.windows = null;
  };
  WindowTreeClient_OnWindowHierarchyChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowHierarchyChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowHierarchyChanged_Params;
    generated.window = generator_.generateUint64();
    generated.oldParent = generator_.generateUint64();
    generated.newParent = generator_.generateUint64();
    generated.windows = generator_.generateArray(function() {
      return generator_.generateStruct(ui.mojom.WindowData, false);
    });
    return generated;
  };

  WindowTreeClient_OnWindowHierarchyChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.oldParent = mutator_.mutateUint64(this.oldParent);
    }
    if (mutator_.chooseMutateField()) {
      this.newParent = mutator_.mutateUint64(this.newParent);
    }
    if (mutator_.chooseMutateField()) {
      this.windows = mutator_.mutateArray(this.windows, function(val) {
        return mutator_.mutateStruct(ui.mojom.WindowData, false);
      });
    }
    return this;
  };
  WindowTreeClient_OnWindowHierarchyChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowHierarchyChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowHierarchyChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowHierarchyChanged_Params.validate = function(messageValidator, offset) {
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





    // validate WindowTreeClient_OnWindowHierarchyChanged_Params.windows
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(window_tree_constants$.WindowData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowHierarchyChanged_Params.encodedSize = codec.kStructHeaderSize + 32;

  WindowTreeClient_OnWindowHierarchyChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowHierarchyChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.oldParent = decoder.decodeStruct(codec.Uint64);
    val.newParent = decoder.decodeStruct(codec.Uint64);
    val.windows = decoder.decodeArrayPointer(new codec.PointerTo(window_tree_constants$.WindowData));
    return val;
  };

  WindowTreeClient_OnWindowHierarchyChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowHierarchyChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.Uint64, val.oldParent);
    encoder.encodeStruct(codec.Uint64, val.newParent);
    encoder.encodeArrayPointer(new codec.PointerTo(window_tree_constants$.WindowData), val.windows);
  };
  function WindowTreeClient_OnWindowReordered_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowReordered_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.relativeWindowId = 0;
    this.direction = 0;
  };
  WindowTreeClient_OnWindowReordered_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowReordered_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowReordered_Params;
    generated.windowId = generator_.generateUint64();
    generated.relativeWindowId = generator_.generateUint64();
    generated.direction = generator_.generateEnum(0, 2);
    return generated;
  };

  WindowTreeClient_OnWindowReordered_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.relativeWindowId = mutator_.mutateUint64(this.relativeWindowId);
    }
    if (mutator_.chooseMutateField()) {
      this.direction = mutator_.mutateEnum(this.direction, 0, 2);
    }
    return this;
  };
  WindowTreeClient_OnWindowReordered_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowReordered_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowReordered_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowReordered_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTreeClient_OnWindowReordered_Params.direction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, mus_constants$.OrderDirection);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowReordered_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnWindowReordered_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowReordered_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.relativeWindowId = decoder.decodeStruct(codec.Uint64);
    val.direction = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnWindowReordered_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowReordered_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Uint64, val.relativeWindowId);
    encoder.encodeStruct(codec.Int32, val.direction);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_OnWindowDeleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowDeleted_Params.prototype.initDefaults_ = function() {
    this.window = 0;
  };
  WindowTreeClient_OnWindowDeleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowDeleted_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowDeleted_Params;
    generated.window = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnWindowDeleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    return this;
  };
  WindowTreeClient_OnWindowDeleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowDeleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowDeleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowDeleted_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnWindowDeleted_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnWindowDeleted_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowDeleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnWindowDeleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowDeleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
  };
  function WindowTreeClient_OnWindowVisibilityChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowVisibilityChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.visible = false;
  };
  WindowTreeClient_OnWindowVisibilityChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowVisibilityChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowVisibilityChanged_Params;
    generated.window = generator_.generateUint64();
    generated.visible = generator_.generateBool();
    return generated;
  };

  WindowTreeClient_OnWindowVisibilityChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.visible = mutator_.mutateBool(this.visible);
    }
    return this;
  };
  WindowTreeClient_OnWindowVisibilityChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowVisibilityChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowVisibilityChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowVisibilityChanged_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnWindowVisibilityChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnWindowVisibilityChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowVisibilityChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
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

  WindowTreeClient_OnWindowVisibilityChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowVisibilityChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
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
  function WindowTreeClient_OnWindowOpacityChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowOpacityChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.oldOpacity = 0;
    this.newOpacity = 0;
  };
  WindowTreeClient_OnWindowOpacityChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowOpacityChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowOpacityChanged_Params;
    generated.window = generator_.generateUint64();
    generated.oldOpacity = generator_.generateFloat();
    generated.newOpacity = generator_.generateFloat();
    return generated;
  };

  WindowTreeClient_OnWindowOpacityChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.oldOpacity = mutator_.mutateFloat(this.oldOpacity);
    }
    if (mutator_.chooseMutateField()) {
      this.newOpacity = mutator_.mutateFloat(this.newOpacity);
    }
    return this;
  };
  WindowTreeClient_OnWindowOpacityChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowOpacityChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowOpacityChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowOpacityChanged_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnWindowOpacityChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnWindowOpacityChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowOpacityChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.oldOpacity = decoder.decodeStruct(codec.Float);
    val.newOpacity = decoder.decodeStruct(codec.Float);
    return val;
  };

  WindowTreeClient_OnWindowOpacityChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowOpacityChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.Float, val.oldOpacity);
    encoder.encodeStruct(codec.Float, val.newOpacity);
  };
  function WindowTreeClient_OnWindowParentDrawnStateChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.drawn = false;
  };
  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowParentDrawnStateChanged_Params;
    generated.window = generator_.generateUint64();
    generated.drawn = generator_.generateBool();
    return generated;
  };

  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.drawn = mutator_.mutateBool(this.drawn);
    }
    return this;
  };
  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowParentDrawnStateChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.drawn = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnWindowParentDrawnStateChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowParentDrawnStateChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    packed = 0;
    packed |= (val.drawn & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_OnWindowSharedPropertyChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowSharedPropertyChanged_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.name = null;
    this.newData = null;
  };
  WindowTreeClient_OnWindowSharedPropertyChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowSharedPropertyChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowSharedPropertyChanged_Params;
    generated.window = generator_.generateUint64();
    generated.name = generator_.generateString(false);
    generated.newData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  WindowTreeClient_OnWindowSharedPropertyChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newData = mutator_.mutateArray(this.newData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  WindowTreeClient_OnWindowSharedPropertyChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowSharedPropertyChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowSharedPropertyChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowSharedPropertyChanged_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnWindowSharedPropertyChanged_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnWindowSharedPropertyChanged_Params.newData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowSharedPropertyChanged_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnWindowSharedPropertyChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowSharedPropertyChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.name = decoder.decodeStruct(codec.String);
    val.newData = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  WindowTreeClient_OnWindowSharedPropertyChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowSharedPropertyChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeArrayPointer(codec.Uint8, val.newData);
  };
  function WindowTreeClient_OnWindowInputEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowInputEvent_Params.prototype.initDefaults_ = function() {
    this.eventId = 0;
    this.matchesPointerWatcher = false;
    this.window = 0;
    this.displayId = 0;
    this.displayRootWindow = 0;
    this.eventLocationInScreenPixelLayout = null;
    this.event = null;
  };
  WindowTreeClient_OnWindowInputEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowInputEvent_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowInputEvent_Params;
    generated.eventId = generator_.generateUint32();
    generated.window = generator_.generateUint64();
    generated.displayId = generator_.generateInt64();
    generated.displayRootWindow = generator_.generateUint64();
    generated.eventLocationInScreenPixelLayout = generator_.generateStruct(gfx.mojom.PointF, false);
    generated.event = generator_.generateStruct(ui.mojom.Event, false);
    generated.matchesPointerWatcher = generator_.generateBool();
    return generated;
  };

  WindowTreeClient_OnWindowInputEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.eventId = mutator_.mutateUint32(this.eventId);
    }
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    if (mutator_.chooseMutateField()) {
      this.displayRootWindow = mutator_.mutateUint64(this.displayRootWindow);
    }
    if (mutator_.chooseMutateField()) {
      this.eventLocationInScreenPixelLayout = mutator_.mutateStruct(gfx.mojom.PointF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    if (mutator_.chooseMutateField()) {
      this.matchesPointerWatcher = mutator_.mutateBool(this.matchesPointerWatcher);
    }
    return this;
  };
  WindowTreeClient_OnWindowInputEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowInputEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowInputEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowInputEvent_Params.validate = function(messageValidator, offset) {
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






    // validate WindowTreeClient_OnWindowInputEvent_Params.eventLocationInScreenPixelLayout
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeClient_OnWindowInputEvent_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowInputEvent_Params.encodedSize = codec.kStructHeaderSize + 48;

  WindowTreeClient_OnWindowInputEvent_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowInputEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.eventId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.matchesPointerWatcher = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.window = decoder.decodeStruct(codec.Uint64);
    val.displayId = decoder.decodeStruct(codec.Int64);
    val.displayRootWindow = decoder.decodeStruct(codec.Uint64);
    val.eventLocationInScreenPixelLayout = decoder.decodeStructPointer(geometry$.PointF);
    val.event = decoder.decodeStructPointer(event$.Event);
    return val;
  };

  WindowTreeClient_OnWindowInputEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowInputEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.eventId);
    packed = 0;
    packed |= (val.matchesPointerWatcher & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.Int64, val.displayId);
    encoder.encodeStruct(codec.Uint64, val.displayRootWindow);
    encoder.encodeStructPointer(geometry$.PointF, val.eventLocationInScreenPixelLayout);
    encoder.encodeStructPointer(event$.Event, val.event);
  };
  function WindowTreeClient_OnPointerEventObserved_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnPointerEventObserved_Params.prototype.initDefaults_ = function() {
    this.event = null;
    this.windowId = 0;
    this.displayId = 0;
  };
  WindowTreeClient_OnPointerEventObserved_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnPointerEventObserved_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnPointerEventObserved_Params;
    generated.event = generator_.generateStruct(ui.mojom.Event, false);
    generated.windowId = generator_.generateUint64();
    generated.displayId = generator_.generateInt64();
    return generated;
  };

  WindowTreeClient_OnPointerEventObserved_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateStruct(ui.mojom.Event, false);
    }
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.displayId = mutator_.mutateInt64(this.displayId);
    }
    return this;
  };
  WindowTreeClient_OnPointerEventObserved_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnPointerEventObserved_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnPointerEventObserved_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnPointerEventObserved_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeClient_OnPointerEventObserved_Params.event
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, event$.Event, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  WindowTreeClient_OnPointerEventObserved_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnPointerEventObserved_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnPointerEventObserved_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.event = decoder.decodeStructPointer(event$.Event);
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.displayId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WindowTreeClient_OnPointerEventObserved_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnPointerEventObserved_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(event$.Event, val.event);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStruct(codec.Int64, val.displayId);
  };
  function WindowTreeClient_OnWindowFocused_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowFocused_Params.prototype.initDefaults_ = function() {
    this.focusedWindowId = 0;
  };
  WindowTreeClient_OnWindowFocused_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowFocused_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowFocused_Params;
    generated.focusedWindowId = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnWindowFocused_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.focusedWindowId = mutator_.mutateUint64(this.focusedWindowId);
    }
    return this;
  };
  WindowTreeClient_OnWindowFocused_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowFocused_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowFocused_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowFocused_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnWindowFocused_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnWindowFocused_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowFocused_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.focusedWindowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnWindowFocused_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowFocused_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.focusedWindowId);
  };
  function WindowTreeClient_OnWindowCursorChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowCursorChanged_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.cursor = null;
  };
  WindowTreeClient_OnWindowCursorChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowCursorChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowCursorChanged_Params;
    generated.windowId = generator_.generateUint64();
    generated.cursor = generator_.generateStruct(ui.mojom.CursorData, false);
    return generated;
  };

  WindowTreeClient_OnWindowCursorChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.cursor = mutator_.mutateStruct(ui.mojom.CursorData, false);
    }
    return this;
  };
  WindowTreeClient_OnWindowCursorChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.cursor !== null) {
      Array.prototype.push.apply(handles, this.cursor.getHandleDeps());
    }
    return handles;
  };

  WindowTreeClient_OnWindowCursorChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowCursorChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.cursor.setHandlesInternal_(handles, idx);
    return idx;
  };

  WindowTreeClient_OnWindowCursorChanged_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnWindowCursorChanged_Params.cursor
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, cursor$.CursorData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowCursorChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnWindowCursorChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowCursorChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.cursor = decoder.decodeStructPointer(cursor$.CursorData);
    return val;
  };

  WindowTreeClient_OnWindowCursorChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowCursorChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(cursor$.CursorData, val.cursor);
  };
  function WindowTreeClient_OnWindowSurfaceChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnWindowSurfaceChanged_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
    this.surfaceInfo = null;
  };
  WindowTreeClient_OnWindowSurfaceChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnWindowSurfaceChanged_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnWindowSurfaceChanged_Params;
    generated.windowId = generator_.generateUint64();
    generated.surfaceInfo = generator_.generateStruct(viz.mojom.SurfaceInfo, false);
    return generated;
  };

  WindowTreeClient_OnWindowSurfaceChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    if (mutator_.chooseMutateField()) {
      this.surfaceInfo = mutator_.mutateStruct(viz.mojom.SurfaceInfo, false);
    }
    return this;
  };
  WindowTreeClient_OnWindowSurfaceChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnWindowSurfaceChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnWindowSurfaceChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnWindowSurfaceChanged_Params.validate = function(messageValidator, offset) {
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



    // validate WindowTreeClient_OnWindowSurfaceChanged_Params.surfaceInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, surface_info$.SurfaceInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnWindowSurfaceChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnWindowSurfaceChanged_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnWindowSurfaceChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    val.surfaceInfo = decoder.decodeStructPointer(surface_info$.SurfaceInfo);
    return val;
  };

  WindowTreeClient_OnWindowSurfaceChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnWindowSurfaceChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
    encoder.encodeStructPointer(surface_info$.SurfaceInfo, val.surfaceInfo);
  };
  function WindowTreeClient_OnDragDropStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragDropStart_Params.prototype.initDefaults_ = function() {
    this.dragData = null;
  };
  WindowTreeClient_OnDragDropStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragDropStart_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragDropStart_Params;
    generated.dragData = generator_.generateMap(
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

  WindowTreeClient_OnDragDropStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dragData = mutator_.mutateMap(this.dragData,
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
  WindowTreeClient_OnDragDropStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragDropStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragDropStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragDropStart_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeClient_OnDragDropStart_Params.dragData
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_OnDragDropStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnDragDropStart_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragDropStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dragData = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  WindowTreeClient_OnDragDropStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragDropStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.dragData);
  };
  function WindowTreeClient_OnDragEnter_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragEnter_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.keyState = 0;
    this.effectBitmask = 0;
    this.screenPosition = null;
  };
  WindowTreeClient_OnDragEnter_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragEnter_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragEnter_Params;
    generated.window = generator_.generateUint64();
    generated.keyState = generator_.generateUint32();
    generated.screenPosition = generator_.generateStruct(gfx.mojom.Point, false);
    generated.effectBitmask = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnDragEnter_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.keyState = mutator_.mutateUint32(this.keyState);
    }
    if (mutator_.chooseMutateField()) {
      this.screenPosition = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.effectBitmask = mutator_.mutateUint32(this.effectBitmask);
    }
    return this;
  };
  WindowTreeClient_OnDragEnter_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragEnter_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragEnter_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragEnter_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTreeClient_OnDragEnter_Params.screenPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowTreeClient_OnDragEnter_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnDragEnter_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragEnter_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.keyState = decoder.decodeStruct(codec.Uint32);
    val.effectBitmask = decoder.decodeStruct(codec.Uint32);
    val.screenPosition = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowTreeClient_OnDragEnter_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragEnter_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.Uint32, val.keyState);
    encoder.encodeStruct(codec.Uint32, val.effectBitmask);
    encoder.encodeStructPointer(geometry$.Point, val.screenPosition);
  };
  function WindowTreeClient_OnDragEnter_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragEnter_ResponseParams.prototype.initDefaults_ = function() {
    this.supportedOpBitmask = 0;
  };
  WindowTreeClient_OnDragEnter_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragEnter_ResponseParams.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragEnter_ResponseParams;
    generated.supportedOpBitmask = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnDragEnter_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.supportedOpBitmask = mutator_.mutateUint32(this.supportedOpBitmask);
    }
    return this;
  };
  WindowTreeClient_OnDragEnter_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragEnter_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragEnter_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragEnter_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnDragEnter_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnDragEnter_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragEnter_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.supportedOpBitmask = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnDragEnter_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragEnter_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.supportedOpBitmask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_OnDragOver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragOver_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.keyState = 0;
    this.effectBitmask = 0;
    this.screenPosition = null;
  };
  WindowTreeClient_OnDragOver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragOver_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragOver_Params;
    generated.window = generator_.generateUint64();
    generated.keyState = generator_.generateUint32();
    generated.screenPosition = generator_.generateStruct(gfx.mojom.Point, false);
    generated.effectBitmask = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnDragOver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.keyState = mutator_.mutateUint32(this.keyState);
    }
    if (mutator_.chooseMutateField()) {
      this.screenPosition = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.effectBitmask = mutator_.mutateUint32(this.effectBitmask);
    }
    return this;
  };
  WindowTreeClient_OnDragOver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragOver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragOver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragOver_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTreeClient_OnDragOver_Params.screenPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowTreeClient_OnDragOver_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnDragOver_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragOver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.keyState = decoder.decodeStruct(codec.Uint32);
    val.effectBitmask = decoder.decodeStruct(codec.Uint32);
    val.screenPosition = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowTreeClient_OnDragOver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragOver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.Uint32, val.keyState);
    encoder.encodeStruct(codec.Uint32, val.effectBitmask);
    encoder.encodeStructPointer(geometry$.Point, val.screenPosition);
  };
  function WindowTreeClient_OnDragOver_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragOver_ResponseParams.prototype.initDefaults_ = function() {
    this.supportedOpBitmask = 0;
  };
  WindowTreeClient_OnDragOver_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragOver_ResponseParams.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragOver_ResponseParams;
    generated.supportedOpBitmask = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnDragOver_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.supportedOpBitmask = mutator_.mutateUint32(this.supportedOpBitmask);
    }
    return this;
  };
  WindowTreeClient_OnDragOver_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragOver_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragOver_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragOver_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnDragOver_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnDragOver_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragOver_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.supportedOpBitmask = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnDragOver_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragOver_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.supportedOpBitmask);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_OnDragLeave_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragLeave_Params.prototype.initDefaults_ = function() {
    this.window = 0;
  };
  WindowTreeClient_OnDragLeave_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragLeave_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragLeave_Params;
    generated.window = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_OnDragLeave_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    return this;
  };
  WindowTreeClient_OnDragLeave_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragLeave_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragLeave_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragLeave_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnDragLeave_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnDragLeave_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragLeave_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_OnDragLeave_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragLeave_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
  };
  function WindowTreeClient_OnCompleteDrop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnCompleteDrop_Params.prototype.initDefaults_ = function() {
    this.window = 0;
    this.keyState = 0;
    this.effectBitmask = 0;
    this.screenPosition = null;
  };
  WindowTreeClient_OnCompleteDrop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnCompleteDrop_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnCompleteDrop_Params;
    generated.window = generator_.generateUint64();
    generated.keyState = generator_.generateUint32();
    generated.screenPosition = generator_.generateStruct(gfx.mojom.Point, false);
    generated.effectBitmask = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnCompleteDrop_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.window = mutator_.mutateUint64(this.window);
    }
    if (mutator_.chooseMutateField()) {
      this.keyState = mutator_.mutateUint32(this.keyState);
    }
    if (mutator_.chooseMutateField()) {
      this.screenPosition = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.effectBitmask = mutator_.mutateUint32(this.effectBitmask);
    }
    return this;
  };
  WindowTreeClient_OnCompleteDrop_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnCompleteDrop_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnCompleteDrop_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnCompleteDrop_Params.validate = function(messageValidator, offset) {
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




    // validate WindowTreeClient_OnCompleteDrop_Params.screenPosition
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowTreeClient_OnCompleteDrop_Params.encodedSize = codec.kStructHeaderSize + 24;

  WindowTreeClient_OnCompleteDrop_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnCompleteDrop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.window = decoder.decodeStruct(codec.Uint64);
    val.keyState = decoder.decodeStruct(codec.Uint32);
    val.effectBitmask = decoder.decodeStruct(codec.Uint32);
    val.screenPosition = decoder.decodeStructPointer(geometry$.Point);
    return val;
  };

  WindowTreeClient_OnCompleteDrop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnCompleteDrop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.window);
    encoder.encodeStruct(codec.Uint32, val.keyState);
    encoder.encodeStruct(codec.Uint32, val.effectBitmask);
    encoder.encodeStructPointer(geometry$.Point, val.screenPosition);
  };
  function WindowTreeClient_OnCompleteDrop_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnCompleteDrop_ResponseParams.prototype.initDefaults_ = function() {
    this.actionTaken = 0;
  };
  WindowTreeClient_OnCompleteDrop_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnCompleteDrop_ResponseParams.generate = function(generator_) {
    var generated = new WindowTreeClient_OnCompleteDrop_ResponseParams;
    generated.actionTaken = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnCompleteDrop_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.actionTaken = mutator_.mutateUint32(this.actionTaken);
    }
    return this;
  };
  WindowTreeClient_OnCompleteDrop_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnCompleteDrop_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnCompleteDrop_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnCompleteDrop_ResponseParams.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnCompleteDrop_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnCompleteDrop_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnCompleteDrop_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.actionTaken = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnCompleteDrop_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnCompleteDrop_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.actionTaken);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_OnPerformDragDropCompleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnPerformDragDropCompleted_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.success = false;
    this.actionTaken = 0;
  };
  WindowTreeClient_OnPerformDragDropCompleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnPerformDragDropCompleted_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnPerformDragDropCompleted_Params;
    generated.changeId = generator_.generateUint32();
    generated.success = generator_.generateBool();
    generated.actionTaken = generator_.generateUint32();
    return generated;
  };

  WindowTreeClient_OnPerformDragDropCompleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.actionTaken = mutator_.mutateUint32(this.actionTaken);
    }
    return this;
  };
  WindowTreeClient_OnPerformDragDropCompleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnPerformDragDropCompleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnPerformDragDropCompleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnPerformDragDropCompleted_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnPerformDragDropCompleted_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeClient_OnPerformDragDropCompleted_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnPerformDragDropCompleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.actionTaken = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnPerformDragDropCompleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnPerformDragDropCompleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.actionTaken);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_OnDragDropDone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnDragDropDone_Params.prototype.initDefaults_ = function() {
  };
  WindowTreeClient_OnDragDropDone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnDragDropDone_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnDragDropDone_Params;
    return generated;
  };

  WindowTreeClient_OnDragDropDone_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  WindowTreeClient_OnDragDropDone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnDragDropDone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnDragDropDone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnDragDropDone_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnDragDropDone_Params.encodedSize = codec.kStructHeaderSize + 0;

  WindowTreeClient_OnDragDropDone_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnDragDropDone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WindowTreeClient_OnDragDropDone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnDragDropDone_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function WindowTreeClient_OnChangeCompleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_OnChangeCompleted_Params.prototype.initDefaults_ = function() {
    this.changeId = 0;
    this.success = false;
  };
  WindowTreeClient_OnChangeCompleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_OnChangeCompleted_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_OnChangeCompleted_Params;
    generated.changeId = generator_.generateUint32();
    generated.success = generator_.generateBool();
    return generated;
  };

  WindowTreeClient_OnChangeCompleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.changeId = mutator_.mutateUint32(this.changeId);
    }
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  WindowTreeClient_OnChangeCompleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_OnChangeCompleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_OnChangeCompleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_OnChangeCompleted_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_OnChangeCompleted_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_OnChangeCompleted_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_OnChangeCompleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.changeId = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_OnChangeCompleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_OnChangeCompleted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.changeId);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeClient_RequestClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_RequestClose_Params.prototype.initDefaults_ = function() {
    this.windowId = 0;
  };
  WindowTreeClient_RequestClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_RequestClose_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_RequestClose_Params;
    generated.windowId = generator_.generateUint64();
    return generated;
  };

  WindowTreeClient_RequestClose_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowId = mutator_.mutateUint64(this.windowId);
    }
    return this;
  };
  WindowTreeClient_RequestClose_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeClient_RequestClose_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_RequestClose_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeClient_RequestClose_Params.validate = function(messageValidator, offset) {
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

  WindowTreeClient_RequestClose_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_RequestClose_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_RequestClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  WindowTreeClient_RequestClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_RequestClose_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.windowId);
  };
  function WindowTreeClient_GetWindowManager_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeClient_GetWindowManager_Params.prototype.initDefaults_ = function() {
    this.internal = new associatedBindings.AssociatedInterfaceRequest();
  };
  WindowTreeClient_GetWindowManager_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeClient_GetWindowManager_Params.generate = function(generator_) {
    var generated = new WindowTreeClient_GetWindowManager_Params;
    generated.internal = generator_.generateAssociatedInterfaceRequest("ui.mojom.WindowManager", false);
    return generated;
  };

  WindowTreeClient_GetWindowManager_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.internal = mutator_.mutateAssociatedInterfaceRequest(this.internal, "ui.mojom.WindowManager", false);
    }
    return this;
  };
  WindowTreeClient_GetWindowManager_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.internal !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowManagerAssociatedRequest"]);
    }
    return handles;
  };

  WindowTreeClient_GetWindowManager_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeClient_GetWindowManager_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.internal = handles[idx++];;
    return idx;
  };

  WindowTreeClient_GetWindowManager_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeClient_GetWindowManager_Params.internal
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeClient_GetWindowManager_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeClient_GetWindowManager_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeClient_GetWindowManager_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.internal = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeClient_GetWindowManager_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeClient_GetWindowManager_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.internal);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function WindowTreeFactory_CreateWindowTree_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeFactory_CreateWindowTree_Params.prototype.initDefaults_ = function() {
    this.treeRequest = new bindings.InterfaceRequest();
    this.client = new WindowTreeClientPtr();
  };
  WindowTreeFactory_CreateWindowTree_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeFactory_CreateWindowTree_Params.generate = function(generator_) {
    var generated = new WindowTreeFactory_CreateWindowTree_Params;
    generated.treeRequest = generator_.generateInterfaceRequest("ui.mojom.WindowTree", false);
    generated.client = generator_.generateInterface("ui.mojom.WindowTreeClient", false);
    return generated;
  };

  WindowTreeFactory_CreateWindowTree_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.treeRequest = mutator_.mutateInterfaceRequest(this.treeRequest, "ui.mojom.WindowTree", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "ui.mojom.WindowTreeClient", false);
    }
    return this;
  };
  WindowTreeFactory_CreateWindowTree_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.treeRequest !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeClientPtr"]);
    }
    return handles;
  };

  WindowTreeFactory_CreateWindowTree_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeFactory_CreateWindowTree_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.treeRequest = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  WindowTreeFactory_CreateWindowTree_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeFactory_CreateWindowTree_Params.treeRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeFactory_CreateWindowTree_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeFactory_CreateWindowTree_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeFactory_CreateWindowTree_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeFactory_CreateWindowTree_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.treeRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(WindowTreeClientPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeFactory_CreateWindowTree_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeFactory_CreateWindowTree_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.treeRequest);
    encoder.encodeStruct(new codec.Interface(WindowTreeClientPtr), val.client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWindowTree_NewWindow_Name = 1994333779;
  var kWindowTree_NewTopLevelWindow_Name = 1789156343;
  var kWindowTree_DeleteWindow_Name = 989834069;
  var kWindowTree_SetCapture_Name = 1958871176;
  var kWindowTree_ReleaseCapture_Name = 1824496570;
  var kWindowTree_StartPointerWatcher_Name = 2127695326;
  var kWindowTree_StopPointerWatcher_Name = 20251330;
  var kWindowTree_SetWindowBounds_Name = 704498196;
  var kWindowTree_SetWindowTransform_Name = 2097120538;
  var kWindowTree_SetClientArea_Name = 214880148;
  var kWindowTree_SetHitTestMask_Name = 276262855;
  var kWindowTree_SetCanAcceptDrops_Name = 986599605;
  var kWindowTree_SetWindowVisibility_Name = 1146578910;
  var kWindowTree_SetWindowProperty_Name = 379275746;
  var kWindowTree_SetWindowOpacity_Name = 1167076038;
  var kWindowTree_AttachCompositorFrameSink_Name = 2005988343;
  var kWindowTree_AddWindow_Name = 447434107;
  var kWindowTree_RemoveWindowFromParent_Name = 1992366073;
  var kWindowTree_AddTransientWindow_Name = 1736641104;
  var kWindowTree_RemoveTransientWindowFromParent_Name = 2024183978;
  var kWindowTree_SetModalType_Name = 1132701893;
  var kWindowTree_SetChildModalParent_Name = 755240227;
  var kWindowTree_ReorderWindow_Name = 595433771;
  var kWindowTree_GetWindowTree_Name = 488142079;
  var kWindowTree_Embed_Name = 372368081;
  var kWindowTree_ScheduleEmbed_Name = 1444982417;
  var kWindowTree_ScheduleEmbedForExistingClient_Name = 1697677311;
  var kWindowTree_EmbedUsingToken_Name = 663590371;
  var kWindowTree_SetFocus_Name = 2058096368;
  var kWindowTree_SetCanFocus_Name = 1791322686;
  var kWindowTree_SetCursor_Name = 1347266856;
  var kWindowTree_SetWindowTextInputState_Name = 1513951275;
  var kWindowTree_SetImeVisibility_Name = 2135014271;
  var kWindowTree_SetEventTargetingPolicy_Name = 926109856;
  var kWindowTree_OnWindowInputEventAck_Name = 852572736;
  var kWindowTree_DeactivateWindow_Name = 505375610;
  var kWindowTree_StackAbove_Name = 1109802999;
  var kWindowTree_StackAtTop_Name = 1793349551;
  var kWindowTree_PerformWmAction_Name = 951863471;
  var kWindowTree_GetWindowManagerClient_Name = 804610480;
  var kWindowTree_GetCursorLocationMemory_Name = 520938744;
  var kWindowTree_PerformWindowMove_Name = 1021528674;
  var kWindowTree_CancelWindowMove_Name = 1619228194;
  var kWindowTree_PerformDragDrop_Name = 14490504;
  var kWindowTree_CancelDragDrop_Name = 21413638;

  function WindowTreePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowTree,
                                                   handleOrPtrInfo);
  }

  function WindowTreeAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowTree, associatedInterfacePtrInfo);
  }

  WindowTreeAssociatedPtr.prototype =
      Object.create(WindowTreePtr.prototype);
  WindowTreeAssociatedPtr.prototype.constructor =
      WindowTreeAssociatedPtr;

  function WindowTreeProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowTreePtr.prototype.newWindow = function() {
    return WindowTreeProxy.prototype.newWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.newWindow = function(changeId, windowId, properties) {
    var params_ = new WindowTree_NewWindow_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.properties = properties;
    var builder = new codec.MessageV0Builder(
        kWindowTree_NewWindow_Name,
        codec.align(WindowTree_NewWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_NewWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.newTopLevelWindow = function() {
    return WindowTreeProxy.prototype.newTopLevelWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.newTopLevelWindow = function(changeId, windowId, properties) {
    var params_ = new WindowTree_NewTopLevelWindow_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.properties = properties;
    var builder = new codec.MessageV0Builder(
        kWindowTree_NewTopLevelWindow_Name,
        codec.align(WindowTree_NewTopLevelWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_NewTopLevelWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.deleteWindow = function() {
    return WindowTreeProxy.prototype.deleteWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.deleteWindow = function(changeId, windowId) {
    var params_ = new WindowTree_DeleteWindow_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_DeleteWindow_Name,
        codec.align(WindowTree_DeleteWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_DeleteWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setCapture = function() {
    return WindowTreeProxy.prototype.setCapture
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setCapture = function(changeId, windowId) {
    var params_ = new WindowTree_SetCapture_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetCapture_Name,
        codec.align(WindowTree_SetCapture_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetCapture_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.releaseCapture = function() {
    return WindowTreeProxy.prototype.releaseCapture
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.releaseCapture = function(changeId, windowId) {
    var params_ = new WindowTree_ReleaseCapture_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_ReleaseCapture_Name,
        codec.align(WindowTree_ReleaseCapture_Params.encodedSize));
    builder.encodeStruct(WindowTree_ReleaseCapture_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.startPointerWatcher = function() {
    return WindowTreeProxy.prototype.startPointerWatcher
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.startPointerWatcher = function(wantMoves) {
    var params_ = new WindowTree_StartPointerWatcher_Params();
    params_.wantMoves = wantMoves;
    var builder = new codec.MessageV0Builder(
        kWindowTree_StartPointerWatcher_Name,
        codec.align(WindowTree_StartPointerWatcher_Params.encodedSize));
    builder.encodeStruct(WindowTree_StartPointerWatcher_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.stopPointerWatcher = function() {
    return WindowTreeProxy.prototype.stopPointerWatcher
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.stopPointerWatcher = function() {
    var params_ = new WindowTree_StopPointerWatcher_Params();
    var builder = new codec.MessageV0Builder(
        kWindowTree_StopPointerWatcher_Name,
        codec.align(WindowTree_StopPointerWatcher_Params.encodedSize));
    builder.encodeStruct(WindowTree_StopPointerWatcher_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setWindowBounds = function() {
    return WindowTreeProxy.prototype.setWindowBounds
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setWindowBounds = function(changeId, windowId, bounds, localSurfaceId) {
    var params_ = new WindowTree_SetWindowBounds_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.bounds = bounds;
    params_.localSurfaceId = localSurfaceId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetWindowBounds_Name,
        codec.align(WindowTree_SetWindowBounds_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetWindowBounds_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setWindowTransform = function() {
    return WindowTreeProxy.prototype.setWindowTransform
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setWindowTransform = function(changeId, windowId, transform) {
    var params_ = new WindowTree_SetWindowTransform_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.transform = transform;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetWindowTransform_Name,
        codec.align(WindowTree_SetWindowTransform_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetWindowTransform_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setClientArea = function() {
    return WindowTreeProxy.prototype.setClientArea
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setClientArea = function(windowId, insets, additionalClientAreas) {
    var params_ = new WindowTree_SetClientArea_Params();
    params_.windowId = windowId;
    params_.insets = insets;
    params_.additionalClientAreas = additionalClientAreas;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetClientArea_Name,
        codec.align(WindowTree_SetClientArea_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetClientArea_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setHitTestMask = function() {
    return WindowTreeProxy.prototype.setHitTestMask
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setHitTestMask = function(windowId, mask) {
    var params_ = new WindowTree_SetHitTestMask_Params();
    params_.windowId = windowId;
    params_.mask = mask;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetHitTestMask_Name,
        codec.align(WindowTree_SetHitTestMask_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetHitTestMask_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setCanAcceptDrops = function() {
    return WindowTreeProxy.prototype.setCanAcceptDrops
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setCanAcceptDrops = function(windowId, acceptsDrops) {
    var params_ = new WindowTree_SetCanAcceptDrops_Params();
    params_.windowId = windowId;
    params_.acceptsDrops = acceptsDrops;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetCanAcceptDrops_Name,
        codec.align(WindowTree_SetCanAcceptDrops_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetCanAcceptDrops_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setWindowVisibility = function() {
    return WindowTreeProxy.prototype.setWindowVisibility
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setWindowVisibility = function(changeId, windowId, visible) {
    var params_ = new WindowTree_SetWindowVisibility_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.visible = visible;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetWindowVisibility_Name,
        codec.align(WindowTree_SetWindowVisibility_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetWindowVisibility_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setWindowProperty = function() {
    return WindowTreeProxy.prototype.setWindowProperty
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setWindowProperty = function(changeId, windowId, name, value) {
    var params_ = new WindowTree_SetWindowProperty_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.name = name;
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetWindowProperty_Name,
        codec.align(WindowTree_SetWindowProperty_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetWindowProperty_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setWindowOpacity = function() {
    return WindowTreeProxy.prototype.setWindowOpacity
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setWindowOpacity = function(changeId, windowId, opacity) {
    var params_ = new WindowTree_SetWindowOpacity_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.opacity = opacity;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetWindowOpacity_Name,
        codec.align(WindowTree_SetWindowOpacity_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetWindowOpacity_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.attachCompositorFrameSink = function() {
    return WindowTreeProxy.prototype.attachCompositorFrameSink
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.attachCompositorFrameSink = function(windowId, compositorFrameSink, client) {
    var params_ = new WindowTree_AttachCompositorFrameSink_Params();
    params_.windowId = windowId;
    params_.compositorFrameSink = compositorFrameSink;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kWindowTree_AttachCompositorFrameSink_Name,
        codec.align(WindowTree_AttachCompositorFrameSink_Params.encodedSize));
    builder.encodeStruct(WindowTree_AttachCompositorFrameSink_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.addWindow = function() {
    return WindowTreeProxy.prototype.addWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.addWindow = function(changeId, parent, child) {
    var params_ = new WindowTree_AddWindow_Params();
    params_.changeId = changeId;
    params_.parent = parent;
    params_.child = child;
    var builder = new codec.MessageV0Builder(
        kWindowTree_AddWindow_Name,
        codec.align(WindowTree_AddWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_AddWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.removeWindowFromParent = function() {
    return WindowTreeProxy.prototype.removeWindowFromParent
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.removeWindowFromParent = function(changeId, windowId) {
    var params_ = new WindowTree_RemoveWindowFromParent_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_RemoveWindowFromParent_Name,
        codec.align(WindowTree_RemoveWindowFromParent_Params.encodedSize));
    builder.encodeStruct(WindowTree_RemoveWindowFromParent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.addTransientWindow = function() {
    return WindowTreeProxy.prototype.addTransientWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.addTransientWindow = function(changeId, windowId, transientWindowId) {
    var params_ = new WindowTree_AddTransientWindow_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.transientWindowId = transientWindowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_AddTransientWindow_Name,
        codec.align(WindowTree_AddTransientWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_AddTransientWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.removeTransientWindowFromParent = function() {
    return WindowTreeProxy.prototype.removeTransientWindowFromParent
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.removeTransientWindowFromParent = function(changeId, transientWindowId) {
    var params_ = new WindowTree_RemoveTransientWindowFromParent_Params();
    params_.changeId = changeId;
    params_.transientWindowId = transientWindowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_RemoveTransientWindowFromParent_Name,
        codec.align(WindowTree_RemoveTransientWindowFromParent_Params.encodedSize));
    builder.encodeStruct(WindowTree_RemoveTransientWindowFromParent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setModalType = function() {
    return WindowTreeProxy.prototype.setModalType
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setModalType = function(changeId, windowId, type) {
    var params_ = new WindowTree_SetModalType_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.type = type;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetModalType_Name,
        codec.align(WindowTree_SetModalType_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetModalType_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setChildModalParent = function() {
    return WindowTreeProxy.prototype.setChildModalParent
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setChildModalParent = function(changeId, windowId, parentWindowId) {
    var params_ = new WindowTree_SetChildModalParent_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.parentWindowId = parentWindowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetChildModalParent_Name,
        codec.align(WindowTree_SetChildModalParent_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetChildModalParent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.reorderWindow = function() {
    return WindowTreeProxy.prototype.reorderWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.reorderWindow = function(changeId, windowId, relativeWindowId, direction) {
    var params_ = new WindowTree_ReorderWindow_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.relativeWindowId = relativeWindowId;
    params_.direction = direction;
    var builder = new codec.MessageV0Builder(
        kWindowTree_ReorderWindow_Name,
        codec.align(WindowTree_ReorderWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_ReorderWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.getWindowTree = function() {
    return WindowTreeProxy.prototype.getWindowTree
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.getWindowTree = function(windowId) {
    var params_ = new WindowTree_GetWindowTree_Params();
    params_.windowId = windowId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTree_GetWindowTree_Name,
          codec.align(WindowTree_GetWindowTree_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTree_GetWindowTree_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTree_GetWindowTree_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreePtr.prototype.embed = function() {
    return WindowTreeProxy.prototype.embed
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.embed = function(windowId, client, embedFlags) {
    var params_ = new WindowTree_Embed_Params();
    params_.windowId = windowId;
    params_.client = client;
    params_.embedFlags = embedFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTree_Embed_Name,
          codec.align(WindowTree_Embed_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTree_Embed_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTree_Embed_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreePtr.prototype.scheduleEmbed = function() {
    return WindowTreeProxy.prototype.scheduleEmbed
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.scheduleEmbed = function(client) {
    var params_ = new WindowTree_ScheduleEmbed_Params();
    params_.client = client;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTree_ScheduleEmbed_Name,
          codec.align(WindowTree_ScheduleEmbed_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTree_ScheduleEmbed_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTree_ScheduleEmbed_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreePtr.prototype.scheduleEmbedForExistingClient = function() {
    return WindowTreeProxy.prototype.scheduleEmbedForExistingClient
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.scheduleEmbedForExistingClient = function(windowId) {
    var params_ = new WindowTree_ScheduleEmbedForExistingClient_Params();
    params_.windowId = windowId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTree_ScheduleEmbedForExistingClient_Name,
          codec.align(WindowTree_ScheduleEmbedForExistingClient_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTree_ScheduleEmbedForExistingClient_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTree_ScheduleEmbedForExistingClient_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreePtr.prototype.embedUsingToken = function() {
    return WindowTreeProxy.prototype.embedUsingToken
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.embedUsingToken = function(windowId, token, embedFlags) {
    var params_ = new WindowTree_EmbedUsingToken_Params();
    params_.windowId = windowId;
    params_.token = token;
    params_.embedFlags = embedFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTree_EmbedUsingToken_Name,
          codec.align(WindowTree_EmbedUsingToken_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTree_EmbedUsingToken_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTree_EmbedUsingToken_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreePtr.prototype.setFocus = function() {
    return WindowTreeProxy.prototype.setFocus
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setFocus = function(changeId, windowId) {
    var params_ = new WindowTree_SetFocus_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetFocus_Name,
        codec.align(WindowTree_SetFocus_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetFocus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setCanFocus = function() {
    return WindowTreeProxy.prototype.setCanFocus
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setCanFocus = function(windowId, canFocus) {
    var params_ = new WindowTree_SetCanFocus_Params();
    params_.windowId = windowId;
    params_.canFocus = canFocus;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetCanFocus_Name,
        codec.align(WindowTree_SetCanFocus_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetCanFocus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setCursor = function() {
    return WindowTreeProxy.prototype.setCursor
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setCursor = function(changeId, windowId, cursor) {
    var params_ = new WindowTree_SetCursor_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.cursor = cursor;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetCursor_Name,
        codec.align(WindowTree_SetCursor_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetCursor_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setWindowTextInputState = function() {
    return WindowTreeProxy.prototype.setWindowTextInputState
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setWindowTextInputState = function(windowId, state) {
    var params_ = new WindowTree_SetWindowTextInputState_Params();
    params_.windowId = windowId;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetWindowTextInputState_Name,
        codec.align(WindowTree_SetWindowTextInputState_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetWindowTextInputState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setImeVisibility = function() {
    return WindowTreeProxy.prototype.setImeVisibility
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setImeVisibility = function(windowId, visible, state) {
    var params_ = new WindowTree_SetImeVisibility_Params();
    params_.windowId = windowId;
    params_.visible = visible;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetImeVisibility_Name,
        codec.align(WindowTree_SetImeVisibility_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetImeVisibility_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.setEventTargetingPolicy = function() {
    return WindowTreeProxy.prototype.setEventTargetingPolicy
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.setEventTargetingPolicy = function(windowId, policy) {
    var params_ = new WindowTree_SetEventTargetingPolicy_Params();
    params_.windowId = windowId;
    params_.policy = policy;
    var builder = new codec.MessageV0Builder(
        kWindowTree_SetEventTargetingPolicy_Name,
        codec.align(WindowTree_SetEventTargetingPolicy_Params.encodedSize));
    builder.encodeStruct(WindowTree_SetEventTargetingPolicy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.onWindowInputEventAck = function() {
    return WindowTreeProxy.prototype.onWindowInputEventAck
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.onWindowInputEventAck = function(eventId, result) {
    var params_ = new WindowTree_OnWindowInputEventAck_Params();
    params_.eventId = eventId;
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kWindowTree_OnWindowInputEventAck_Name,
        codec.align(WindowTree_OnWindowInputEventAck_Params.encodedSize));
    builder.encodeStruct(WindowTree_OnWindowInputEventAck_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.deactivateWindow = function() {
    return WindowTreeProxy.prototype.deactivateWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.deactivateWindow = function(windowId) {
    var params_ = new WindowTree_DeactivateWindow_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_DeactivateWindow_Name,
        codec.align(WindowTree_DeactivateWindow_Params.encodedSize));
    builder.encodeStruct(WindowTree_DeactivateWindow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.stackAbove = function() {
    return WindowTreeProxy.prototype.stackAbove
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.stackAbove = function(changeId, aboveId, belowId) {
    var params_ = new WindowTree_StackAbove_Params();
    params_.changeId = changeId;
    params_.aboveId = aboveId;
    params_.belowId = belowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_StackAbove_Name,
        codec.align(WindowTree_StackAbove_Params.encodedSize));
    builder.encodeStruct(WindowTree_StackAbove_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.stackAtTop = function() {
    return WindowTreeProxy.prototype.stackAtTop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.stackAtTop = function(changeId, windowId) {
    var params_ = new WindowTree_StackAtTop_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_StackAtTop_Name,
        codec.align(WindowTree_StackAtTop_Params.encodedSize));
    builder.encodeStruct(WindowTree_StackAtTop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.performWmAction = function() {
    return WindowTreeProxy.prototype.performWmAction
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.performWmAction = function(windowId, action) {
    var params_ = new WindowTree_PerformWmAction_Params();
    params_.windowId = windowId;
    params_.action = action;
    var builder = new codec.MessageV0Builder(
        kWindowTree_PerformWmAction_Name,
        codec.align(WindowTree_PerformWmAction_Params.encodedSize));
    builder.encodeStruct(WindowTree_PerformWmAction_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.getWindowManagerClient = function() {
    return WindowTreeProxy.prototype.getWindowManagerClient
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.getWindowManagerClient = function(internal) {
    var params_ = new WindowTree_GetWindowManagerClient_Params();
    params_.internal = internal;
    var builder = new codec.MessageV2Builder(
        kWindowTree_GetWindowManagerClient_Name,
        codec.align(WindowTree_GetWindowManagerClient_Params.encodedSize));
    builder.setPayload(WindowTree_GetWindowManagerClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.getCursorLocationMemory = function() {
    return WindowTreeProxy.prototype.getCursorLocationMemory
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.getCursorLocationMemory = function() {
    var params_ = new WindowTree_GetCursorLocationMemory_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTree_GetCursorLocationMemory_Name,
          codec.align(WindowTree_GetCursorLocationMemory_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTree_GetCursorLocationMemory_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTree_GetCursorLocationMemory_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreePtr.prototype.performWindowMove = function() {
    return WindowTreeProxy.prototype.performWindowMove
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.performWindowMove = function(changeId, windowId, source, cursor) {
    var params_ = new WindowTree_PerformWindowMove_Params();
    params_.changeId = changeId;
    params_.windowId = windowId;
    params_.source = source;
    params_.cursor = cursor;
    var builder = new codec.MessageV0Builder(
        kWindowTree_PerformWindowMove_Name,
        codec.align(WindowTree_PerformWindowMove_Params.encodedSize));
    builder.encodeStruct(WindowTree_PerformWindowMove_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.cancelWindowMove = function() {
    return WindowTreeProxy.prototype.cancelWindowMove
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.cancelWindowMove = function(windowId) {
    var params_ = new WindowTree_CancelWindowMove_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_CancelWindowMove_Name,
        codec.align(WindowTree_CancelWindowMove_Params.encodedSize));
    builder.encodeStruct(WindowTree_CancelWindowMove_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.performDragDrop = function() {
    return WindowTreeProxy.prototype.performDragDrop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.performDragDrop = function(changeId, sourceWindowId, screenLocation, dragData, dragImage, dragImageOffset, dragOperation, source) {
    var params_ = new WindowTree_PerformDragDrop_Params();
    params_.changeId = changeId;
    params_.sourceWindowId = sourceWindowId;
    params_.screenLocation = screenLocation;
    params_.dragData = dragData;
    params_.dragImage = dragImage;
    params_.dragImageOffset = dragImageOffset;
    params_.dragOperation = dragOperation;
    params_.source = source;
    var builder = new codec.MessageV0Builder(
        kWindowTree_PerformDragDrop_Name,
        codec.align(WindowTree_PerformDragDrop_Params.encodedSize));
    builder.encodeStruct(WindowTree_PerformDragDrop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreePtr.prototype.cancelDragDrop = function() {
    return WindowTreeProxy.prototype.cancelDragDrop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeProxy.prototype.cancelDragDrop = function(windowId) {
    var params_ = new WindowTree_CancelDragDrop_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTree_CancelDragDrop_Name,
        codec.align(WindowTree_CancelDragDrop_Params.encodedSize));
    builder.encodeStruct(WindowTree_CancelDragDrop_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowTreeStub.prototype.newWindow = function(changeId, windowId, properties) {
    return this.delegate_ && this.delegate_.newWindow && this.delegate_.newWindow(changeId, windowId, properties);
  }
  WindowTreeStub.prototype.newTopLevelWindow = function(changeId, windowId, properties) {
    return this.delegate_ && this.delegate_.newTopLevelWindow && this.delegate_.newTopLevelWindow(changeId, windowId, properties);
  }
  WindowTreeStub.prototype.deleteWindow = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.deleteWindow && this.delegate_.deleteWindow(changeId, windowId);
  }
  WindowTreeStub.prototype.setCapture = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.setCapture && this.delegate_.setCapture(changeId, windowId);
  }
  WindowTreeStub.prototype.releaseCapture = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.releaseCapture && this.delegate_.releaseCapture(changeId, windowId);
  }
  WindowTreeStub.prototype.startPointerWatcher = function(wantMoves) {
    return this.delegate_ && this.delegate_.startPointerWatcher && this.delegate_.startPointerWatcher(wantMoves);
  }
  WindowTreeStub.prototype.stopPointerWatcher = function() {
    return this.delegate_ && this.delegate_.stopPointerWatcher && this.delegate_.stopPointerWatcher();
  }
  WindowTreeStub.prototype.setWindowBounds = function(changeId, windowId, bounds, localSurfaceId) {
    return this.delegate_ && this.delegate_.setWindowBounds && this.delegate_.setWindowBounds(changeId, windowId, bounds, localSurfaceId);
  }
  WindowTreeStub.prototype.setWindowTransform = function(changeId, windowId, transform) {
    return this.delegate_ && this.delegate_.setWindowTransform && this.delegate_.setWindowTransform(changeId, windowId, transform);
  }
  WindowTreeStub.prototype.setClientArea = function(windowId, insets, additionalClientAreas) {
    return this.delegate_ && this.delegate_.setClientArea && this.delegate_.setClientArea(windowId, insets, additionalClientAreas);
  }
  WindowTreeStub.prototype.setHitTestMask = function(windowId, mask) {
    return this.delegate_ && this.delegate_.setHitTestMask && this.delegate_.setHitTestMask(windowId, mask);
  }
  WindowTreeStub.prototype.setCanAcceptDrops = function(windowId, acceptsDrops) {
    return this.delegate_ && this.delegate_.setCanAcceptDrops && this.delegate_.setCanAcceptDrops(windowId, acceptsDrops);
  }
  WindowTreeStub.prototype.setWindowVisibility = function(changeId, windowId, visible) {
    return this.delegate_ && this.delegate_.setWindowVisibility && this.delegate_.setWindowVisibility(changeId, windowId, visible);
  }
  WindowTreeStub.prototype.setWindowProperty = function(changeId, windowId, name, value) {
    return this.delegate_ && this.delegate_.setWindowProperty && this.delegate_.setWindowProperty(changeId, windowId, name, value);
  }
  WindowTreeStub.prototype.setWindowOpacity = function(changeId, windowId, opacity) {
    return this.delegate_ && this.delegate_.setWindowOpacity && this.delegate_.setWindowOpacity(changeId, windowId, opacity);
  }
  WindowTreeStub.prototype.attachCompositorFrameSink = function(windowId, compositorFrameSink, client) {
    return this.delegate_ && this.delegate_.attachCompositorFrameSink && this.delegate_.attachCompositorFrameSink(windowId, compositorFrameSink, client);
  }
  WindowTreeStub.prototype.addWindow = function(changeId, parent, child) {
    return this.delegate_ && this.delegate_.addWindow && this.delegate_.addWindow(changeId, parent, child);
  }
  WindowTreeStub.prototype.removeWindowFromParent = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.removeWindowFromParent && this.delegate_.removeWindowFromParent(changeId, windowId);
  }
  WindowTreeStub.prototype.addTransientWindow = function(changeId, windowId, transientWindowId) {
    return this.delegate_ && this.delegate_.addTransientWindow && this.delegate_.addTransientWindow(changeId, windowId, transientWindowId);
  }
  WindowTreeStub.prototype.removeTransientWindowFromParent = function(changeId, transientWindowId) {
    return this.delegate_ && this.delegate_.removeTransientWindowFromParent && this.delegate_.removeTransientWindowFromParent(changeId, transientWindowId);
  }
  WindowTreeStub.prototype.setModalType = function(changeId, windowId, type) {
    return this.delegate_ && this.delegate_.setModalType && this.delegate_.setModalType(changeId, windowId, type);
  }
  WindowTreeStub.prototype.setChildModalParent = function(changeId, windowId, parentWindowId) {
    return this.delegate_ && this.delegate_.setChildModalParent && this.delegate_.setChildModalParent(changeId, windowId, parentWindowId);
  }
  WindowTreeStub.prototype.reorderWindow = function(changeId, windowId, relativeWindowId, direction) {
    return this.delegate_ && this.delegate_.reorderWindow && this.delegate_.reorderWindow(changeId, windowId, relativeWindowId, direction);
  }
  WindowTreeStub.prototype.getWindowTree = function(windowId) {
    return this.delegate_ && this.delegate_.getWindowTree && this.delegate_.getWindowTree(windowId);
  }
  WindowTreeStub.prototype.embed = function(windowId, client, embedFlags) {
    return this.delegate_ && this.delegate_.embed && this.delegate_.embed(windowId, client, embedFlags);
  }
  WindowTreeStub.prototype.scheduleEmbed = function(client) {
    return this.delegate_ && this.delegate_.scheduleEmbed && this.delegate_.scheduleEmbed(client);
  }
  WindowTreeStub.prototype.scheduleEmbedForExistingClient = function(windowId) {
    return this.delegate_ && this.delegate_.scheduleEmbedForExistingClient && this.delegate_.scheduleEmbedForExistingClient(windowId);
  }
  WindowTreeStub.prototype.embedUsingToken = function(windowId, token, embedFlags) {
    return this.delegate_ && this.delegate_.embedUsingToken && this.delegate_.embedUsingToken(windowId, token, embedFlags);
  }
  WindowTreeStub.prototype.setFocus = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.setFocus && this.delegate_.setFocus(changeId, windowId);
  }
  WindowTreeStub.prototype.setCanFocus = function(windowId, canFocus) {
    return this.delegate_ && this.delegate_.setCanFocus && this.delegate_.setCanFocus(windowId, canFocus);
  }
  WindowTreeStub.prototype.setCursor = function(changeId, windowId, cursor) {
    return this.delegate_ && this.delegate_.setCursor && this.delegate_.setCursor(changeId, windowId, cursor);
  }
  WindowTreeStub.prototype.setWindowTextInputState = function(windowId, state) {
    return this.delegate_ && this.delegate_.setWindowTextInputState && this.delegate_.setWindowTextInputState(windowId, state);
  }
  WindowTreeStub.prototype.setImeVisibility = function(windowId, visible, state) {
    return this.delegate_ && this.delegate_.setImeVisibility && this.delegate_.setImeVisibility(windowId, visible, state);
  }
  WindowTreeStub.prototype.setEventTargetingPolicy = function(windowId, policy) {
    return this.delegate_ && this.delegate_.setEventTargetingPolicy && this.delegate_.setEventTargetingPolicy(windowId, policy);
  }
  WindowTreeStub.prototype.onWindowInputEventAck = function(eventId, result) {
    return this.delegate_ && this.delegate_.onWindowInputEventAck && this.delegate_.onWindowInputEventAck(eventId, result);
  }
  WindowTreeStub.prototype.deactivateWindow = function(windowId) {
    return this.delegate_ && this.delegate_.deactivateWindow && this.delegate_.deactivateWindow(windowId);
  }
  WindowTreeStub.prototype.stackAbove = function(changeId, aboveId, belowId) {
    return this.delegate_ && this.delegate_.stackAbove && this.delegate_.stackAbove(changeId, aboveId, belowId);
  }
  WindowTreeStub.prototype.stackAtTop = function(changeId, windowId) {
    return this.delegate_ && this.delegate_.stackAtTop && this.delegate_.stackAtTop(changeId, windowId);
  }
  WindowTreeStub.prototype.performWmAction = function(windowId, action) {
    return this.delegate_ && this.delegate_.performWmAction && this.delegate_.performWmAction(windowId, action);
  }
  WindowTreeStub.prototype.getWindowManagerClient = function(internal) {
    return this.delegate_ && this.delegate_.getWindowManagerClient && this.delegate_.getWindowManagerClient(internal);
  }
  WindowTreeStub.prototype.getCursorLocationMemory = function() {
    return this.delegate_ && this.delegate_.getCursorLocationMemory && this.delegate_.getCursorLocationMemory();
  }
  WindowTreeStub.prototype.performWindowMove = function(changeId, windowId, source, cursor) {
    return this.delegate_ && this.delegate_.performWindowMove && this.delegate_.performWindowMove(changeId, windowId, source, cursor);
  }
  WindowTreeStub.prototype.cancelWindowMove = function(windowId) {
    return this.delegate_ && this.delegate_.cancelWindowMove && this.delegate_.cancelWindowMove(windowId);
  }
  WindowTreeStub.prototype.performDragDrop = function(changeId, sourceWindowId, screenLocation, dragData, dragImage, dragImageOffset, dragOperation, source) {
    return this.delegate_ && this.delegate_.performDragDrop && this.delegate_.performDragDrop(changeId, sourceWindowId, screenLocation, dragData, dragImage, dragImageOffset, dragOperation, source);
  }
  WindowTreeStub.prototype.cancelDragDrop = function(windowId) {
    return this.delegate_ && this.delegate_.cancelDragDrop && this.delegate_.cancelDragDrop(windowId);
  }

  WindowTreeStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTree_NewWindow_Name:
      var params = reader.decodeStruct(WindowTree_NewWindow_Params);
      this.newWindow(params.changeId, params.windowId, params.properties);
      return true;
    case kWindowTree_NewTopLevelWindow_Name:
      var params = reader.decodeStruct(WindowTree_NewTopLevelWindow_Params);
      this.newTopLevelWindow(params.changeId, params.windowId, params.properties);
      return true;
    case kWindowTree_DeleteWindow_Name:
      var params = reader.decodeStruct(WindowTree_DeleteWindow_Params);
      this.deleteWindow(params.changeId, params.windowId);
      return true;
    case kWindowTree_SetCapture_Name:
      var params = reader.decodeStruct(WindowTree_SetCapture_Params);
      this.setCapture(params.changeId, params.windowId);
      return true;
    case kWindowTree_ReleaseCapture_Name:
      var params = reader.decodeStruct(WindowTree_ReleaseCapture_Params);
      this.releaseCapture(params.changeId, params.windowId);
      return true;
    case kWindowTree_StartPointerWatcher_Name:
      var params = reader.decodeStruct(WindowTree_StartPointerWatcher_Params);
      this.startPointerWatcher(params.wantMoves);
      return true;
    case kWindowTree_StopPointerWatcher_Name:
      var params = reader.decodeStruct(WindowTree_StopPointerWatcher_Params);
      this.stopPointerWatcher();
      return true;
    case kWindowTree_SetWindowBounds_Name:
      var params = reader.decodeStruct(WindowTree_SetWindowBounds_Params);
      this.setWindowBounds(params.changeId, params.windowId, params.bounds, params.localSurfaceId);
      return true;
    case kWindowTree_SetWindowTransform_Name:
      var params = reader.decodeStruct(WindowTree_SetWindowTransform_Params);
      this.setWindowTransform(params.changeId, params.windowId, params.transform);
      return true;
    case kWindowTree_SetClientArea_Name:
      var params = reader.decodeStruct(WindowTree_SetClientArea_Params);
      this.setClientArea(params.windowId, params.insets, params.additionalClientAreas);
      return true;
    case kWindowTree_SetHitTestMask_Name:
      var params = reader.decodeStruct(WindowTree_SetHitTestMask_Params);
      this.setHitTestMask(params.windowId, params.mask);
      return true;
    case kWindowTree_SetCanAcceptDrops_Name:
      var params = reader.decodeStruct(WindowTree_SetCanAcceptDrops_Params);
      this.setCanAcceptDrops(params.windowId, params.acceptsDrops);
      return true;
    case kWindowTree_SetWindowVisibility_Name:
      var params = reader.decodeStruct(WindowTree_SetWindowVisibility_Params);
      this.setWindowVisibility(params.changeId, params.windowId, params.visible);
      return true;
    case kWindowTree_SetWindowProperty_Name:
      var params = reader.decodeStruct(WindowTree_SetWindowProperty_Params);
      this.setWindowProperty(params.changeId, params.windowId, params.name, params.value);
      return true;
    case kWindowTree_SetWindowOpacity_Name:
      var params = reader.decodeStruct(WindowTree_SetWindowOpacity_Params);
      this.setWindowOpacity(params.changeId, params.windowId, params.opacity);
      return true;
    case kWindowTree_AttachCompositorFrameSink_Name:
      var params = reader.decodeStruct(WindowTree_AttachCompositorFrameSink_Params);
      this.attachCompositorFrameSink(params.windowId, params.compositorFrameSink, params.client);
      return true;
    case kWindowTree_AddWindow_Name:
      var params = reader.decodeStruct(WindowTree_AddWindow_Params);
      this.addWindow(params.changeId, params.parent, params.child);
      return true;
    case kWindowTree_RemoveWindowFromParent_Name:
      var params = reader.decodeStruct(WindowTree_RemoveWindowFromParent_Params);
      this.removeWindowFromParent(params.changeId, params.windowId);
      return true;
    case kWindowTree_AddTransientWindow_Name:
      var params = reader.decodeStruct(WindowTree_AddTransientWindow_Params);
      this.addTransientWindow(params.changeId, params.windowId, params.transientWindowId);
      return true;
    case kWindowTree_RemoveTransientWindowFromParent_Name:
      var params = reader.decodeStruct(WindowTree_RemoveTransientWindowFromParent_Params);
      this.removeTransientWindowFromParent(params.changeId, params.transientWindowId);
      return true;
    case kWindowTree_SetModalType_Name:
      var params = reader.decodeStruct(WindowTree_SetModalType_Params);
      this.setModalType(params.changeId, params.windowId, params.type);
      return true;
    case kWindowTree_SetChildModalParent_Name:
      var params = reader.decodeStruct(WindowTree_SetChildModalParent_Params);
      this.setChildModalParent(params.changeId, params.windowId, params.parentWindowId);
      return true;
    case kWindowTree_ReorderWindow_Name:
      var params = reader.decodeStruct(WindowTree_ReorderWindow_Params);
      this.reorderWindow(params.changeId, params.windowId, params.relativeWindowId, params.direction);
      return true;
    case kWindowTree_SetFocus_Name:
      var params = reader.decodeStruct(WindowTree_SetFocus_Params);
      this.setFocus(params.changeId, params.windowId);
      return true;
    case kWindowTree_SetCanFocus_Name:
      var params = reader.decodeStruct(WindowTree_SetCanFocus_Params);
      this.setCanFocus(params.windowId, params.canFocus);
      return true;
    case kWindowTree_SetCursor_Name:
      var params = reader.decodeStruct(WindowTree_SetCursor_Params);
      this.setCursor(params.changeId, params.windowId, params.cursor);
      return true;
    case kWindowTree_SetWindowTextInputState_Name:
      var params = reader.decodeStruct(WindowTree_SetWindowTextInputState_Params);
      this.setWindowTextInputState(params.windowId, params.state);
      return true;
    case kWindowTree_SetImeVisibility_Name:
      var params = reader.decodeStruct(WindowTree_SetImeVisibility_Params);
      this.setImeVisibility(params.windowId, params.visible, params.state);
      return true;
    case kWindowTree_SetEventTargetingPolicy_Name:
      var params = reader.decodeStruct(WindowTree_SetEventTargetingPolicy_Params);
      this.setEventTargetingPolicy(params.windowId, params.policy);
      return true;
    case kWindowTree_OnWindowInputEventAck_Name:
      var params = reader.decodeStruct(WindowTree_OnWindowInputEventAck_Params);
      this.onWindowInputEventAck(params.eventId, params.result);
      return true;
    case kWindowTree_DeactivateWindow_Name:
      var params = reader.decodeStruct(WindowTree_DeactivateWindow_Params);
      this.deactivateWindow(params.windowId);
      return true;
    case kWindowTree_StackAbove_Name:
      var params = reader.decodeStruct(WindowTree_StackAbove_Params);
      this.stackAbove(params.changeId, params.aboveId, params.belowId);
      return true;
    case kWindowTree_StackAtTop_Name:
      var params = reader.decodeStruct(WindowTree_StackAtTop_Params);
      this.stackAtTop(params.changeId, params.windowId);
      return true;
    case kWindowTree_PerformWmAction_Name:
      var params = reader.decodeStruct(WindowTree_PerformWmAction_Params);
      this.performWmAction(params.windowId, params.action);
      return true;
    case kWindowTree_GetWindowManagerClient_Name:
      var params = reader.decodeStruct(WindowTree_GetWindowManagerClient_Params);
      this.getWindowManagerClient(params.internal);
      return true;
    case kWindowTree_PerformWindowMove_Name:
      var params = reader.decodeStruct(WindowTree_PerformWindowMove_Params);
      this.performWindowMove(params.changeId, params.windowId, params.source, params.cursor);
      return true;
    case kWindowTree_CancelWindowMove_Name:
      var params = reader.decodeStruct(WindowTree_CancelWindowMove_Params);
      this.cancelWindowMove(params.windowId);
      return true;
    case kWindowTree_PerformDragDrop_Name:
      var params = reader.decodeStruct(WindowTree_PerformDragDrop_Params);
      this.performDragDrop(params.changeId, params.sourceWindowId, params.screenLocation, params.dragData, params.dragImage, params.dragImageOffset, params.dragOperation, params.source);
      return true;
    case kWindowTree_CancelDragDrop_Name:
      var params = reader.decodeStruct(WindowTree_CancelDragDrop_Params);
      this.cancelDragDrop(params.windowId);
      return true;
    default:
      return false;
    }
  };

  WindowTreeStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTree_GetWindowTree_Name:
      var params = reader.decodeStruct(WindowTree_GetWindowTree_Params);
      this.getWindowTree(params.windowId).then(function(response) {
        var responseParams =
            new WindowTree_GetWindowTree_ResponseParams();
        responseParams.windows = response.windows;
        var builder = new codec.MessageV1Builder(
            kWindowTree_GetWindowTree_Name,
            codec.align(WindowTree_GetWindowTree_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTree_GetWindowTree_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTree_Embed_Name:
      var params = reader.decodeStruct(WindowTree_Embed_Params);
      this.embed(params.windowId, params.client, params.embedFlags).then(function(response) {
        var responseParams =
            new WindowTree_Embed_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowTree_Embed_Name,
            codec.align(WindowTree_Embed_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTree_Embed_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTree_ScheduleEmbed_Name:
      var params = reader.decodeStruct(WindowTree_ScheduleEmbed_Params);
      this.scheduleEmbed(params.client).then(function(response) {
        var responseParams =
            new WindowTree_ScheduleEmbed_ResponseParams();
        responseParams.token = response.token;
        var builder = new codec.MessageV1Builder(
            kWindowTree_ScheduleEmbed_Name,
            codec.align(WindowTree_ScheduleEmbed_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTree_ScheduleEmbed_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTree_ScheduleEmbedForExistingClient_Name:
      var params = reader.decodeStruct(WindowTree_ScheduleEmbedForExistingClient_Params);
      this.scheduleEmbedForExistingClient(params.windowId).then(function(response) {
        var responseParams =
            new WindowTree_ScheduleEmbedForExistingClient_ResponseParams();
        responseParams.token = response.token;
        var builder = new codec.MessageV1Builder(
            kWindowTree_ScheduleEmbedForExistingClient_Name,
            codec.align(WindowTree_ScheduleEmbedForExistingClient_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTree_ScheduleEmbedForExistingClient_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTree_EmbedUsingToken_Name:
      var params = reader.decodeStruct(WindowTree_EmbedUsingToken_Params);
      this.embedUsingToken(params.windowId, params.token, params.embedFlags).then(function(response) {
        var responseParams =
            new WindowTree_EmbedUsingToken_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kWindowTree_EmbedUsingToken_Name,
            codec.align(WindowTree_EmbedUsingToken_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTree_EmbedUsingToken_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTree_GetCursorLocationMemory_Name:
      var params = reader.decodeStruct(WindowTree_GetCursorLocationMemory_Params);
      this.getCursorLocationMemory().then(function(response) {
        var responseParams =
            new WindowTree_GetCursorLocationMemory_ResponseParams();
        responseParams.cursorBuffer = response.cursorBuffer;
        var builder = new codec.MessageV1Builder(
            kWindowTree_GetCursorLocationMemory_Name,
            codec.align(WindowTree_GetCursorLocationMemory_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTree_GetCursorLocationMemory_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWindowTreeRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTree_NewWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_NewWindow_Params;
      break;
      case kWindowTree_NewTopLevelWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_NewTopLevelWindow_Params;
      break;
      case kWindowTree_DeleteWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_DeleteWindow_Params;
      break;
      case kWindowTree_SetCapture_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetCapture_Params;
      break;
      case kWindowTree_ReleaseCapture_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_ReleaseCapture_Params;
      break;
      case kWindowTree_StartPointerWatcher_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_StartPointerWatcher_Params;
      break;
      case kWindowTree_StopPointerWatcher_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_StopPointerWatcher_Params;
      break;
      case kWindowTree_SetWindowBounds_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetWindowBounds_Params;
      break;
      case kWindowTree_SetWindowTransform_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetWindowTransform_Params;
      break;
      case kWindowTree_SetClientArea_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetClientArea_Params;
      break;
      case kWindowTree_SetHitTestMask_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetHitTestMask_Params;
      break;
      case kWindowTree_SetCanAcceptDrops_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetCanAcceptDrops_Params;
      break;
      case kWindowTree_SetWindowVisibility_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetWindowVisibility_Params;
      break;
      case kWindowTree_SetWindowProperty_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetWindowProperty_Params;
      break;
      case kWindowTree_SetWindowOpacity_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetWindowOpacity_Params;
      break;
      case kWindowTree_AttachCompositorFrameSink_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_AttachCompositorFrameSink_Params;
      break;
      case kWindowTree_AddWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_AddWindow_Params;
      break;
      case kWindowTree_RemoveWindowFromParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_RemoveWindowFromParent_Params;
      break;
      case kWindowTree_AddTransientWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_AddTransientWindow_Params;
      break;
      case kWindowTree_RemoveTransientWindowFromParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_RemoveTransientWindowFromParent_Params;
      break;
      case kWindowTree_SetModalType_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetModalType_Params;
      break;
      case kWindowTree_SetChildModalParent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetChildModalParent_Params;
      break;
      case kWindowTree_ReorderWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_ReorderWindow_Params;
      break;
      case kWindowTree_GetWindowTree_Name:
        if (message.expectsResponse())
          paramsClass = WindowTree_GetWindowTree_Params;
      break;
      case kWindowTree_Embed_Name:
        if (message.expectsResponse())
          paramsClass = WindowTree_Embed_Params;
      break;
      case kWindowTree_ScheduleEmbed_Name:
        if (message.expectsResponse())
          paramsClass = WindowTree_ScheduleEmbed_Params;
      break;
      case kWindowTree_ScheduleEmbedForExistingClient_Name:
        if (message.expectsResponse())
          paramsClass = WindowTree_ScheduleEmbedForExistingClient_Params;
      break;
      case kWindowTree_EmbedUsingToken_Name:
        if (message.expectsResponse())
          paramsClass = WindowTree_EmbedUsingToken_Params;
      break;
      case kWindowTree_SetFocus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetFocus_Params;
      break;
      case kWindowTree_SetCanFocus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetCanFocus_Params;
      break;
      case kWindowTree_SetCursor_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetCursor_Params;
      break;
      case kWindowTree_SetWindowTextInputState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetWindowTextInputState_Params;
      break;
      case kWindowTree_SetImeVisibility_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetImeVisibility_Params;
      break;
      case kWindowTree_SetEventTargetingPolicy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_SetEventTargetingPolicy_Params;
      break;
      case kWindowTree_OnWindowInputEventAck_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_OnWindowInputEventAck_Params;
      break;
      case kWindowTree_DeactivateWindow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_DeactivateWindow_Params;
      break;
      case kWindowTree_StackAbove_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_StackAbove_Params;
      break;
      case kWindowTree_StackAtTop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_StackAtTop_Params;
      break;
      case kWindowTree_PerformWmAction_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_PerformWmAction_Params;
      break;
      case kWindowTree_GetWindowManagerClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_GetWindowManagerClient_Params;
      break;
      case kWindowTree_GetCursorLocationMemory_Name:
        if (message.expectsResponse())
          paramsClass = WindowTree_GetCursorLocationMemory_Params;
      break;
      case kWindowTree_PerformWindowMove_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_PerformWindowMove_Params;
      break;
      case kWindowTree_CancelWindowMove_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_CancelWindowMove_Params;
      break;
      case kWindowTree_PerformDragDrop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_PerformDragDrop_Params;
      break;
      case kWindowTree_CancelDragDrop_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTree_CancelDragDrop_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWindowTree_GetWindowTree_Name:
        if (message.isResponse())
          paramsClass = WindowTree_GetWindowTree_ResponseParams;
        break;
      case kWindowTree_Embed_Name:
        if (message.isResponse())
          paramsClass = WindowTree_Embed_ResponseParams;
        break;
      case kWindowTree_ScheduleEmbed_Name:
        if (message.isResponse())
          paramsClass = WindowTree_ScheduleEmbed_ResponseParams;
        break;
      case kWindowTree_ScheduleEmbedForExistingClient_Name:
        if (message.isResponse())
          paramsClass = WindowTree_ScheduleEmbedForExistingClient_ResponseParams;
        break;
      case kWindowTree_EmbedUsingToken_Name:
        if (message.isResponse())
          paramsClass = WindowTree_EmbedUsingToken_ResponseParams;
        break;
      case kWindowTree_GetCursorLocationMemory_Name:
        if (message.isResponse())
          paramsClass = WindowTree_GetCursorLocationMemory_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WindowTree = {
    name: 'ui.mojom.WindowTree',
    kVersion: 0,
    ptrClass: WindowTreePtr,
    proxyClass: WindowTreeProxy,
    stubClass: WindowTreeStub,
    validateRequest: validateWindowTreeRequest,
    validateResponse: validateWindowTreeResponse,
    mojomId: 'services/ui/public/interfaces/window_tree.mojom',
    fuzzMethods: {
      newWindow: {
        params: WindowTree_NewWindow_Params,
      },
      newTopLevelWindow: {
        params: WindowTree_NewTopLevelWindow_Params,
      },
      deleteWindow: {
        params: WindowTree_DeleteWindow_Params,
      },
      setCapture: {
        params: WindowTree_SetCapture_Params,
      },
      releaseCapture: {
        params: WindowTree_ReleaseCapture_Params,
      },
      startPointerWatcher: {
        params: WindowTree_StartPointerWatcher_Params,
      },
      stopPointerWatcher: {
        params: WindowTree_StopPointerWatcher_Params,
      },
      setWindowBounds: {
        params: WindowTree_SetWindowBounds_Params,
      },
      setWindowTransform: {
        params: WindowTree_SetWindowTransform_Params,
      },
      setClientArea: {
        params: WindowTree_SetClientArea_Params,
      },
      setHitTestMask: {
        params: WindowTree_SetHitTestMask_Params,
      },
      setCanAcceptDrops: {
        params: WindowTree_SetCanAcceptDrops_Params,
      },
      setWindowVisibility: {
        params: WindowTree_SetWindowVisibility_Params,
      },
      setWindowProperty: {
        params: WindowTree_SetWindowProperty_Params,
      },
      setWindowOpacity: {
        params: WindowTree_SetWindowOpacity_Params,
      },
      attachCompositorFrameSink: {
        params: WindowTree_AttachCompositorFrameSink_Params,
      },
      addWindow: {
        params: WindowTree_AddWindow_Params,
      },
      removeWindowFromParent: {
        params: WindowTree_RemoveWindowFromParent_Params,
      },
      addTransientWindow: {
        params: WindowTree_AddTransientWindow_Params,
      },
      removeTransientWindowFromParent: {
        params: WindowTree_RemoveTransientWindowFromParent_Params,
      },
      setModalType: {
        params: WindowTree_SetModalType_Params,
      },
      setChildModalParent: {
        params: WindowTree_SetChildModalParent_Params,
      },
      reorderWindow: {
        params: WindowTree_ReorderWindow_Params,
      },
      getWindowTree: {
        params: WindowTree_GetWindowTree_Params,
      },
      embed: {
        params: WindowTree_Embed_Params,
      },
      scheduleEmbed: {
        params: WindowTree_ScheduleEmbed_Params,
      },
      scheduleEmbedForExistingClient: {
        params: WindowTree_ScheduleEmbedForExistingClient_Params,
      },
      embedUsingToken: {
        params: WindowTree_EmbedUsingToken_Params,
      },
      setFocus: {
        params: WindowTree_SetFocus_Params,
      },
      setCanFocus: {
        params: WindowTree_SetCanFocus_Params,
      },
      setCursor: {
        params: WindowTree_SetCursor_Params,
      },
      setWindowTextInputState: {
        params: WindowTree_SetWindowTextInputState_Params,
      },
      setImeVisibility: {
        params: WindowTree_SetImeVisibility_Params,
      },
      setEventTargetingPolicy: {
        params: WindowTree_SetEventTargetingPolicy_Params,
      },
      onWindowInputEventAck: {
        params: WindowTree_OnWindowInputEventAck_Params,
      },
      deactivateWindow: {
        params: WindowTree_DeactivateWindow_Params,
      },
      stackAbove: {
        params: WindowTree_StackAbove_Params,
      },
      stackAtTop: {
        params: WindowTree_StackAtTop_Params,
      },
      performWmAction: {
        params: WindowTree_PerformWmAction_Params,
      },
      getWindowManagerClient: {
        params: WindowTree_GetWindowManagerClient_Params,
      },
      getCursorLocationMemory: {
        params: WindowTree_GetCursorLocationMemory_Params,
      },
      performWindowMove: {
        params: WindowTree_PerformWindowMove_Params,
      },
      cancelWindowMove: {
        params: WindowTree_CancelWindowMove_Params,
      },
      performDragDrop: {
        params: WindowTree_PerformDragDrop_Params,
      },
      cancelDragDrop: {
        params: WindowTree_CancelDragDrop_Params,
      },
    },
  };
  WindowTreeStub.prototype.validator = validateWindowTreeRequest;
  WindowTreeProxy.prototype.validator = validateWindowTreeResponse;
  var kWindowTreeClient_OnEmbed_Name = 1469061151;
  var kWindowTreeClient_OnEmbedFromToken_Name = 995414148;
  var kWindowTreeClient_OnEmbeddedAppDisconnected_Name = 1366460383;
  var kWindowTreeClient_OnUnembed_Name = 1547889806;
  var kWindowTreeClient_OnCaptureChanged_Name = 2103095829;
  var kWindowTreeClient_OnFrameSinkIdAllocated_Name = 1728255390;
  var kWindowTreeClient_OnTopLevelCreated_Name = 1140167998;
  var kWindowTreeClient_OnWindowBoundsChanged_Name = 815066204;
  var kWindowTreeClient_OnWindowTransformChanged_Name = 917731724;
  var kWindowTreeClient_OnClientAreaChanged_Name = 1037290067;
  var kWindowTreeClient_OnTransientWindowAdded_Name = 1533758386;
  var kWindowTreeClient_OnTransientWindowRemoved_Name = 1765708824;
  var kWindowTreeClient_OnWindowHierarchyChanged_Name = 124324032;
  var kWindowTreeClient_OnWindowReordered_Name = 532981894;
  var kWindowTreeClient_OnWindowDeleted_Name = 161525347;
  var kWindowTreeClient_OnWindowVisibilityChanged_Name = 2025779997;
  var kWindowTreeClient_OnWindowOpacityChanged_Name = 1529759221;
  var kWindowTreeClient_OnWindowParentDrawnStateChanged_Name = 1388629881;
  var kWindowTreeClient_OnWindowSharedPropertyChanged_Name = 1137560291;
  var kWindowTreeClient_OnWindowInputEvent_Name = 2114300350;
  var kWindowTreeClient_OnPointerEventObserved_Name = 1648719096;
  var kWindowTreeClient_OnWindowFocused_Name = 1967451596;
  var kWindowTreeClient_OnWindowCursorChanged_Name = 1092611961;
  var kWindowTreeClient_OnWindowSurfaceChanged_Name = 1393782147;
  var kWindowTreeClient_OnDragDropStart_Name = 1514604938;
  var kWindowTreeClient_OnDragEnter_Name = 1215735539;
  var kWindowTreeClient_OnDragOver_Name = 744914662;
  var kWindowTreeClient_OnDragLeave_Name = 1140309394;
  var kWindowTreeClient_OnCompleteDrop_Name = 1220058214;
  var kWindowTreeClient_OnPerformDragDropCompleted_Name = 1211249454;
  var kWindowTreeClient_OnDragDropDone_Name = 1814012005;
  var kWindowTreeClient_OnChangeCompleted_Name = 1233089720;
  var kWindowTreeClient_RequestClose_Name = 234122451;
  var kWindowTreeClient_GetWindowManager_Name = 613043260;

  function WindowTreeClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowTreeClient,
                                                   handleOrPtrInfo);
  }

  function WindowTreeClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowTreeClient, associatedInterfacePtrInfo);
  }

  WindowTreeClientAssociatedPtr.prototype =
      Object.create(WindowTreeClientPtr.prototype);
  WindowTreeClientAssociatedPtr.prototype.constructor =
      WindowTreeClientAssociatedPtr;

  function WindowTreeClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowTreeClientPtr.prototype.onEmbed = function() {
    return WindowTreeClientProxy.prototype.onEmbed
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onEmbed = function(root, tree, displayId, focusedWindow, parentDrawn, localSurfaceId) {
    var params_ = new WindowTreeClient_OnEmbed_Params();
    params_.root = root;
    params_.tree = tree;
    params_.displayId = displayId;
    params_.focusedWindow = focusedWindow;
    params_.parentDrawn = parentDrawn;
    params_.localSurfaceId = localSurfaceId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnEmbed_Name,
        codec.align(WindowTreeClient_OnEmbed_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnEmbed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onEmbedFromToken = function() {
    return WindowTreeClientProxy.prototype.onEmbedFromToken
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onEmbedFromToken = function(token, root, displayId, localSurfaceId) {
    var params_ = new WindowTreeClient_OnEmbedFromToken_Params();
    params_.token = token;
    params_.root = root;
    params_.displayId = displayId;
    params_.localSurfaceId = localSurfaceId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnEmbedFromToken_Name,
        codec.align(WindowTreeClient_OnEmbedFromToken_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnEmbedFromToken_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onEmbeddedAppDisconnected = function() {
    return WindowTreeClientProxy.prototype.onEmbeddedAppDisconnected
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onEmbeddedAppDisconnected = function(window) {
    var params_ = new WindowTreeClient_OnEmbeddedAppDisconnected_Params();
    params_.window = window;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnEmbeddedAppDisconnected_Name,
        codec.align(WindowTreeClient_OnEmbeddedAppDisconnected_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnEmbeddedAppDisconnected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onUnembed = function() {
    return WindowTreeClientProxy.prototype.onUnembed
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onUnembed = function(window) {
    var params_ = new WindowTreeClient_OnUnembed_Params();
    params_.window = window;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnUnembed_Name,
        codec.align(WindowTreeClient_OnUnembed_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnUnembed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onCaptureChanged = function() {
    return WindowTreeClientProxy.prototype.onCaptureChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onCaptureChanged = function(newCapture, oldCapture) {
    var params_ = new WindowTreeClient_OnCaptureChanged_Params();
    params_.newCapture = newCapture;
    params_.oldCapture = oldCapture;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnCaptureChanged_Name,
        codec.align(WindowTreeClient_OnCaptureChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnCaptureChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onFrameSinkIdAllocated = function() {
    return WindowTreeClientProxy.prototype.onFrameSinkIdAllocated
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onFrameSinkIdAllocated = function(window, frameSinkId) {
    var params_ = new WindowTreeClient_OnFrameSinkIdAllocated_Params();
    params_.window = window;
    params_.frameSinkId = frameSinkId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnFrameSinkIdAllocated_Name,
        codec.align(WindowTreeClient_OnFrameSinkIdAllocated_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnFrameSinkIdAllocated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onTopLevelCreated = function() {
    return WindowTreeClientProxy.prototype.onTopLevelCreated
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onTopLevelCreated = function(changeId, data, displayId, parentDrawn, localSurfaceId) {
    var params_ = new WindowTreeClient_OnTopLevelCreated_Params();
    params_.changeId = changeId;
    params_.data = data;
    params_.displayId = displayId;
    params_.parentDrawn = parentDrawn;
    params_.localSurfaceId = localSurfaceId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnTopLevelCreated_Name,
        codec.align(WindowTreeClient_OnTopLevelCreated_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnTopLevelCreated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowBoundsChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowBoundsChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowBoundsChanged = function(window, oldBounds, newBounds, localSurfaceId) {
    var params_ = new WindowTreeClient_OnWindowBoundsChanged_Params();
    params_.window = window;
    params_.oldBounds = oldBounds;
    params_.newBounds = newBounds;
    params_.localSurfaceId = localSurfaceId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowBoundsChanged_Name,
        codec.align(WindowTreeClient_OnWindowBoundsChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowBoundsChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowTransformChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowTransformChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowTransformChanged = function(window, oldTransform, newTransform) {
    var params_ = new WindowTreeClient_OnWindowTransformChanged_Params();
    params_.window = window;
    params_.oldTransform = oldTransform;
    params_.newTransform = newTransform;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowTransformChanged_Name,
        codec.align(WindowTreeClient_OnWindowTransformChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowTransformChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onClientAreaChanged = function() {
    return WindowTreeClientProxy.prototype.onClientAreaChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onClientAreaChanged = function(windowId, newClientArea, newAdditionalClientAreas) {
    var params_ = new WindowTreeClient_OnClientAreaChanged_Params();
    params_.windowId = windowId;
    params_.newClientArea = newClientArea;
    params_.newAdditionalClientAreas = newAdditionalClientAreas;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnClientAreaChanged_Name,
        codec.align(WindowTreeClient_OnClientAreaChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnClientAreaChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onTransientWindowAdded = function() {
    return WindowTreeClientProxy.prototype.onTransientWindowAdded
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onTransientWindowAdded = function(windowId, transientWindowId) {
    var params_ = new WindowTreeClient_OnTransientWindowAdded_Params();
    params_.windowId = windowId;
    params_.transientWindowId = transientWindowId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnTransientWindowAdded_Name,
        codec.align(WindowTreeClient_OnTransientWindowAdded_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnTransientWindowAdded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onTransientWindowRemoved = function() {
    return WindowTreeClientProxy.prototype.onTransientWindowRemoved
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onTransientWindowRemoved = function(windowId, transientWindowId) {
    var params_ = new WindowTreeClient_OnTransientWindowRemoved_Params();
    params_.windowId = windowId;
    params_.transientWindowId = transientWindowId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnTransientWindowRemoved_Name,
        codec.align(WindowTreeClient_OnTransientWindowRemoved_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnTransientWindowRemoved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowHierarchyChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowHierarchyChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowHierarchyChanged = function(window, oldParent, newParent, windows) {
    var params_ = new WindowTreeClient_OnWindowHierarchyChanged_Params();
    params_.window = window;
    params_.oldParent = oldParent;
    params_.newParent = newParent;
    params_.windows = windows;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowHierarchyChanged_Name,
        codec.align(WindowTreeClient_OnWindowHierarchyChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowHierarchyChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowReordered = function() {
    return WindowTreeClientProxy.prototype.onWindowReordered
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowReordered = function(windowId, relativeWindowId, direction) {
    var params_ = new WindowTreeClient_OnWindowReordered_Params();
    params_.windowId = windowId;
    params_.relativeWindowId = relativeWindowId;
    params_.direction = direction;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowReordered_Name,
        codec.align(WindowTreeClient_OnWindowReordered_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowReordered_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowDeleted = function() {
    return WindowTreeClientProxy.prototype.onWindowDeleted
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowDeleted = function(window) {
    var params_ = new WindowTreeClient_OnWindowDeleted_Params();
    params_.window = window;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowDeleted_Name,
        codec.align(WindowTreeClient_OnWindowDeleted_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowDeleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowVisibilityChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowVisibilityChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowVisibilityChanged = function(window, visible) {
    var params_ = new WindowTreeClient_OnWindowVisibilityChanged_Params();
    params_.window = window;
    params_.visible = visible;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowVisibilityChanged_Name,
        codec.align(WindowTreeClient_OnWindowVisibilityChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowVisibilityChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowOpacityChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowOpacityChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowOpacityChanged = function(window, oldOpacity, newOpacity) {
    var params_ = new WindowTreeClient_OnWindowOpacityChanged_Params();
    params_.window = window;
    params_.oldOpacity = oldOpacity;
    params_.newOpacity = newOpacity;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowOpacityChanged_Name,
        codec.align(WindowTreeClient_OnWindowOpacityChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowOpacityChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowParentDrawnStateChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowParentDrawnStateChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowParentDrawnStateChanged = function(window, drawn) {
    var params_ = new WindowTreeClient_OnWindowParentDrawnStateChanged_Params();
    params_.window = window;
    params_.drawn = drawn;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowParentDrawnStateChanged_Name,
        codec.align(WindowTreeClient_OnWindowParentDrawnStateChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowParentDrawnStateChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowSharedPropertyChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowSharedPropertyChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowSharedPropertyChanged = function(window, name, newData) {
    var params_ = new WindowTreeClient_OnWindowSharedPropertyChanged_Params();
    params_.window = window;
    params_.name = name;
    params_.newData = newData;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowSharedPropertyChanged_Name,
        codec.align(WindowTreeClient_OnWindowSharedPropertyChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowSharedPropertyChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowInputEvent = function() {
    return WindowTreeClientProxy.prototype.onWindowInputEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowInputEvent = function(eventId, window, displayId, displayRootWindow, eventLocationInScreenPixelLayout, event, matchesPointerWatcher) {
    var params_ = new WindowTreeClient_OnWindowInputEvent_Params();
    params_.eventId = eventId;
    params_.window = window;
    params_.displayId = displayId;
    params_.displayRootWindow = displayRootWindow;
    params_.eventLocationInScreenPixelLayout = eventLocationInScreenPixelLayout;
    params_.event = event;
    params_.matchesPointerWatcher = matchesPointerWatcher;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowInputEvent_Name,
        codec.align(WindowTreeClient_OnWindowInputEvent_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowInputEvent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onPointerEventObserved = function() {
    return WindowTreeClientProxy.prototype.onPointerEventObserved
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onPointerEventObserved = function(event, windowId, displayId) {
    var params_ = new WindowTreeClient_OnPointerEventObserved_Params();
    params_.event = event;
    params_.windowId = windowId;
    params_.displayId = displayId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnPointerEventObserved_Name,
        codec.align(WindowTreeClient_OnPointerEventObserved_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnPointerEventObserved_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowFocused = function() {
    return WindowTreeClientProxy.prototype.onWindowFocused
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowFocused = function(focusedWindowId) {
    var params_ = new WindowTreeClient_OnWindowFocused_Params();
    params_.focusedWindowId = focusedWindowId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowFocused_Name,
        codec.align(WindowTreeClient_OnWindowFocused_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowFocused_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowCursorChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowCursorChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowCursorChanged = function(windowId, cursor) {
    var params_ = new WindowTreeClient_OnWindowCursorChanged_Params();
    params_.windowId = windowId;
    params_.cursor = cursor;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowCursorChanged_Name,
        codec.align(WindowTreeClient_OnWindowCursorChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowCursorChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onWindowSurfaceChanged = function() {
    return WindowTreeClientProxy.prototype.onWindowSurfaceChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onWindowSurfaceChanged = function(windowId, surfaceInfo) {
    var params_ = new WindowTreeClient_OnWindowSurfaceChanged_Params();
    params_.windowId = windowId;
    params_.surfaceInfo = surfaceInfo;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnWindowSurfaceChanged_Name,
        codec.align(WindowTreeClient_OnWindowSurfaceChanged_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnWindowSurfaceChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onDragDropStart = function() {
    return WindowTreeClientProxy.prototype.onDragDropStart
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onDragDropStart = function(dragData) {
    var params_ = new WindowTreeClient_OnDragDropStart_Params();
    params_.dragData = dragData;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnDragDropStart_Name,
        codec.align(WindowTreeClient_OnDragDropStart_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnDragDropStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onDragEnter = function() {
    return WindowTreeClientProxy.prototype.onDragEnter
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onDragEnter = function(window, keyState, screenPosition, effectBitmask) {
    var params_ = new WindowTreeClient_OnDragEnter_Params();
    params_.window = window;
    params_.keyState = keyState;
    params_.screenPosition = screenPosition;
    params_.effectBitmask = effectBitmask;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTreeClient_OnDragEnter_Name,
          codec.align(WindowTreeClient_OnDragEnter_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTreeClient_OnDragEnter_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTreeClient_OnDragEnter_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreeClientPtr.prototype.onDragOver = function() {
    return WindowTreeClientProxy.prototype.onDragOver
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onDragOver = function(window, keyState, screenPosition, effectBitmask) {
    var params_ = new WindowTreeClient_OnDragOver_Params();
    params_.window = window;
    params_.keyState = keyState;
    params_.screenPosition = screenPosition;
    params_.effectBitmask = effectBitmask;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTreeClient_OnDragOver_Name,
          codec.align(WindowTreeClient_OnDragOver_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTreeClient_OnDragOver_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTreeClient_OnDragOver_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreeClientPtr.prototype.onDragLeave = function() {
    return WindowTreeClientProxy.prototype.onDragLeave
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onDragLeave = function(window) {
    var params_ = new WindowTreeClient_OnDragLeave_Params();
    params_.window = window;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnDragLeave_Name,
        codec.align(WindowTreeClient_OnDragLeave_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnDragLeave_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onCompleteDrop = function() {
    return WindowTreeClientProxy.prototype.onCompleteDrop
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onCompleteDrop = function(window, keyState, screenPosition, effectBitmask) {
    var params_ = new WindowTreeClient_OnCompleteDrop_Params();
    params_.window = window;
    params_.keyState = keyState;
    params_.screenPosition = screenPosition;
    params_.effectBitmask = effectBitmask;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kWindowTreeClient_OnCompleteDrop_Name,
          codec.align(WindowTreeClient_OnCompleteDrop_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(WindowTreeClient_OnCompleteDrop_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(WindowTreeClient_OnCompleteDrop_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  WindowTreeClientPtr.prototype.onPerformDragDropCompleted = function() {
    return WindowTreeClientProxy.prototype.onPerformDragDropCompleted
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onPerformDragDropCompleted = function(changeId, success, actionTaken) {
    var params_ = new WindowTreeClient_OnPerformDragDropCompleted_Params();
    params_.changeId = changeId;
    params_.success = success;
    params_.actionTaken = actionTaken;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnPerformDragDropCompleted_Name,
        codec.align(WindowTreeClient_OnPerformDragDropCompleted_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnPerformDragDropCompleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onDragDropDone = function() {
    return WindowTreeClientProxy.prototype.onDragDropDone
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onDragDropDone = function() {
    var params_ = new WindowTreeClient_OnDragDropDone_Params();
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnDragDropDone_Name,
        codec.align(WindowTreeClient_OnDragDropDone_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnDragDropDone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.onChangeCompleted = function() {
    return WindowTreeClientProxy.prototype.onChangeCompleted
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.onChangeCompleted = function(changeId, success) {
    var params_ = new WindowTreeClient_OnChangeCompleted_Params();
    params_.changeId = changeId;
    params_.success = success;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_OnChangeCompleted_Name,
        codec.align(WindowTreeClient_OnChangeCompleted_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_OnChangeCompleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.requestClose = function() {
    return WindowTreeClientProxy.prototype.requestClose
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.requestClose = function(windowId) {
    var params_ = new WindowTreeClient_RequestClose_Params();
    params_.windowId = windowId;
    var builder = new codec.MessageV0Builder(
        kWindowTreeClient_RequestClose_Name,
        codec.align(WindowTreeClient_RequestClose_Params.encodedSize));
    builder.encodeStruct(WindowTreeClient_RequestClose_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeClientPtr.prototype.getWindowManager = function() {
    return WindowTreeClientProxy.prototype.getWindowManager
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeClientProxy.prototype.getWindowManager = function(internal) {
    var params_ = new WindowTreeClient_GetWindowManager_Params();
    params_.internal = internal;
    var builder = new codec.MessageV2Builder(
        kWindowTreeClient_GetWindowManager_Name,
        codec.align(WindowTreeClient_GetWindowManager_Params.encodedSize));
    builder.setPayload(WindowTreeClient_GetWindowManager_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeClientStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowTreeClientStub.prototype.onEmbed = function(root, tree, displayId, focusedWindow, parentDrawn, localSurfaceId) {
    return this.delegate_ && this.delegate_.onEmbed && this.delegate_.onEmbed(root, tree, displayId, focusedWindow, parentDrawn, localSurfaceId);
  }
  WindowTreeClientStub.prototype.onEmbedFromToken = function(token, root, displayId, localSurfaceId) {
    return this.delegate_ && this.delegate_.onEmbedFromToken && this.delegate_.onEmbedFromToken(token, root, displayId, localSurfaceId);
  }
  WindowTreeClientStub.prototype.onEmbeddedAppDisconnected = function(window) {
    return this.delegate_ && this.delegate_.onEmbeddedAppDisconnected && this.delegate_.onEmbeddedAppDisconnected(window);
  }
  WindowTreeClientStub.prototype.onUnembed = function(window) {
    return this.delegate_ && this.delegate_.onUnembed && this.delegate_.onUnembed(window);
  }
  WindowTreeClientStub.prototype.onCaptureChanged = function(newCapture, oldCapture) {
    return this.delegate_ && this.delegate_.onCaptureChanged && this.delegate_.onCaptureChanged(newCapture, oldCapture);
  }
  WindowTreeClientStub.prototype.onFrameSinkIdAllocated = function(window, frameSinkId) {
    return this.delegate_ && this.delegate_.onFrameSinkIdAllocated && this.delegate_.onFrameSinkIdAllocated(window, frameSinkId);
  }
  WindowTreeClientStub.prototype.onTopLevelCreated = function(changeId, data, displayId, parentDrawn, localSurfaceId) {
    return this.delegate_ && this.delegate_.onTopLevelCreated && this.delegate_.onTopLevelCreated(changeId, data, displayId, parentDrawn, localSurfaceId);
  }
  WindowTreeClientStub.prototype.onWindowBoundsChanged = function(window, oldBounds, newBounds, localSurfaceId) {
    return this.delegate_ && this.delegate_.onWindowBoundsChanged && this.delegate_.onWindowBoundsChanged(window, oldBounds, newBounds, localSurfaceId);
  }
  WindowTreeClientStub.prototype.onWindowTransformChanged = function(window, oldTransform, newTransform) {
    return this.delegate_ && this.delegate_.onWindowTransformChanged && this.delegate_.onWindowTransformChanged(window, oldTransform, newTransform);
  }
  WindowTreeClientStub.prototype.onClientAreaChanged = function(windowId, newClientArea, newAdditionalClientAreas) {
    return this.delegate_ && this.delegate_.onClientAreaChanged && this.delegate_.onClientAreaChanged(windowId, newClientArea, newAdditionalClientAreas);
  }
  WindowTreeClientStub.prototype.onTransientWindowAdded = function(windowId, transientWindowId) {
    return this.delegate_ && this.delegate_.onTransientWindowAdded && this.delegate_.onTransientWindowAdded(windowId, transientWindowId);
  }
  WindowTreeClientStub.prototype.onTransientWindowRemoved = function(windowId, transientWindowId) {
    return this.delegate_ && this.delegate_.onTransientWindowRemoved && this.delegate_.onTransientWindowRemoved(windowId, transientWindowId);
  }
  WindowTreeClientStub.prototype.onWindowHierarchyChanged = function(window, oldParent, newParent, windows) {
    return this.delegate_ && this.delegate_.onWindowHierarchyChanged && this.delegate_.onWindowHierarchyChanged(window, oldParent, newParent, windows);
  }
  WindowTreeClientStub.prototype.onWindowReordered = function(windowId, relativeWindowId, direction) {
    return this.delegate_ && this.delegate_.onWindowReordered && this.delegate_.onWindowReordered(windowId, relativeWindowId, direction);
  }
  WindowTreeClientStub.prototype.onWindowDeleted = function(window) {
    return this.delegate_ && this.delegate_.onWindowDeleted && this.delegate_.onWindowDeleted(window);
  }
  WindowTreeClientStub.prototype.onWindowVisibilityChanged = function(window, visible) {
    return this.delegate_ && this.delegate_.onWindowVisibilityChanged && this.delegate_.onWindowVisibilityChanged(window, visible);
  }
  WindowTreeClientStub.prototype.onWindowOpacityChanged = function(window, oldOpacity, newOpacity) {
    return this.delegate_ && this.delegate_.onWindowOpacityChanged && this.delegate_.onWindowOpacityChanged(window, oldOpacity, newOpacity);
  }
  WindowTreeClientStub.prototype.onWindowParentDrawnStateChanged = function(window, drawn) {
    return this.delegate_ && this.delegate_.onWindowParentDrawnStateChanged && this.delegate_.onWindowParentDrawnStateChanged(window, drawn);
  }
  WindowTreeClientStub.prototype.onWindowSharedPropertyChanged = function(window, name, newData) {
    return this.delegate_ && this.delegate_.onWindowSharedPropertyChanged && this.delegate_.onWindowSharedPropertyChanged(window, name, newData);
  }
  WindowTreeClientStub.prototype.onWindowInputEvent = function(eventId, window, displayId, displayRootWindow, eventLocationInScreenPixelLayout, event, matchesPointerWatcher) {
    return this.delegate_ && this.delegate_.onWindowInputEvent && this.delegate_.onWindowInputEvent(eventId, window, displayId, displayRootWindow, eventLocationInScreenPixelLayout, event, matchesPointerWatcher);
  }
  WindowTreeClientStub.prototype.onPointerEventObserved = function(event, windowId, displayId) {
    return this.delegate_ && this.delegate_.onPointerEventObserved && this.delegate_.onPointerEventObserved(event, windowId, displayId);
  }
  WindowTreeClientStub.prototype.onWindowFocused = function(focusedWindowId) {
    return this.delegate_ && this.delegate_.onWindowFocused && this.delegate_.onWindowFocused(focusedWindowId);
  }
  WindowTreeClientStub.prototype.onWindowCursorChanged = function(windowId, cursor) {
    return this.delegate_ && this.delegate_.onWindowCursorChanged && this.delegate_.onWindowCursorChanged(windowId, cursor);
  }
  WindowTreeClientStub.prototype.onWindowSurfaceChanged = function(windowId, surfaceInfo) {
    return this.delegate_ && this.delegate_.onWindowSurfaceChanged && this.delegate_.onWindowSurfaceChanged(windowId, surfaceInfo);
  }
  WindowTreeClientStub.prototype.onDragDropStart = function(dragData) {
    return this.delegate_ && this.delegate_.onDragDropStart && this.delegate_.onDragDropStart(dragData);
  }
  WindowTreeClientStub.prototype.onDragEnter = function(window, keyState, screenPosition, effectBitmask) {
    return this.delegate_ && this.delegate_.onDragEnter && this.delegate_.onDragEnter(window, keyState, screenPosition, effectBitmask);
  }
  WindowTreeClientStub.prototype.onDragOver = function(window, keyState, screenPosition, effectBitmask) {
    return this.delegate_ && this.delegate_.onDragOver && this.delegate_.onDragOver(window, keyState, screenPosition, effectBitmask);
  }
  WindowTreeClientStub.prototype.onDragLeave = function(window) {
    return this.delegate_ && this.delegate_.onDragLeave && this.delegate_.onDragLeave(window);
  }
  WindowTreeClientStub.prototype.onCompleteDrop = function(window, keyState, screenPosition, effectBitmask) {
    return this.delegate_ && this.delegate_.onCompleteDrop && this.delegate_.onCompleteDrop(window, keyState, screenPosition, effectBitmask);
  }
  WindowTreeClientStub.prototype.onPerformDragDropCompleted = function(changeId, success, actionTaken) {
    return this.delegate_ && this.delegate_.onPerformDragDropCompleted && this.delegate_.onPerformDragDropCompleted(changeId, success, actionTaken);
  }
  WindowTreeClientStub.prototype.onDragDropDone = function() {
    return this.delegate_ && this.delegate_.onDragDropDone && this.delegate_.onDragDropDone();
  }
  WindowTreeClientStub.prototype.onChangeCompleted = function(changeId, success) {
    return this.delegate_ && this.delegate_.onChangeCompleted && this.delegate_.onChangeCompleted(changeId, success);
  }
  WindowTreeClientStub.prototype.requestClose = function(windowId) {
    return this.delegate_ && this.delegate_.requestClose && this.delegate_.requestClose(windowId);
  }
  WindowTreeClientStub.prototype.getWindowManager = function(internal) {
    return this.delegate_ && this.delegate_.getWindowManager && this.delegate_.getWindowManager(internal);
  }

  WindowTreeClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeClient_OnEmbed_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnEmbed_Params);
      this.onEmbed(params.root, params.tree, params.displayId, params.focusedWindow, params.parentDrawn, params.localSurfaceId);
      return true;
    case kWindowTreeClient_OnEmbedFromToken_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnEmbedFromToken_Params);
      this.onEmbedFromToken(params.token, params.root, params.displayId, params.localSurfaceId);
      return true;
    case kWindowTreeClient_OnEmbeddedAppDisconnected_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnEmbeddedAppDisconnected_Params);
      this.onEmbeddedAppDisconnected(params.window);
      return true;
    case kWindowTreeClient_OnUnembed_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnUnembed_Params);
      this.onUnembed(params.window);
      return true;
    case kWindowTreeClient_OnCaptureChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnCaptureChanged_Params);
      this.onCaptureChanged(params.newCapture, params.oldCapture);
      return true;
    case kWindowTreeClient_OnFrameSinkIdAllocated_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnFrameSinkIdAllocated_Params);
      this.onFrameSinkIdAllocated(params.window, params.frameSinkId);
      return true;
    case kWindowTreeClient_OnTopLevelCreated_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnTopLevelCreated_Params);
      this.onTopLevelCreated(params.changeId, params.data, params.displayId, params.parentDrawn, params.localSurfaceId);
      return true;
    case kWindowTreeClient_OnWindowBoundsChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowBoundsChanged_Params);
      this.onWindowBoundsChanged(params.window, params.oldBounds, params.newBounds, params.localSurfaceId);
      return true;
    case kWindowTreeClient_OnWindowTransformChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowTransformChanged_Params);
      this.onWindowTransformChanged(params.window, params.oldTransform, params.newTransform);
      return true;
    case kWindowTreeClient_OnClientAreaChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnClientAreaChanged_Params);
      this.onClientAreaChanged(params.windowId, params.newClientArea, params.newAdditionalClientAreas);
      return true;
    case kWindowTreeClient_OnTransientWindowAdded_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnTransientWindowAdded_Params);
      this.onTransientWindowAdded(params.windowId, params.transientWindowId);
      return true;
    case kWindowTreeClient_OnTransientWindowRemoved_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnTransientWindowRemoved_Params);
      this.onTransientWindowRemoved(params.windowId, params.transientWindowId);
      return true;
    case kWindowTreeClient_OnWindowHierarchyChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowHierarchyChanged_Params);
      this.onWindowHierarchyChanged(params.window, params.oldParent, params.newParent, params.windows);
      return true;
    case kWindowTreeClient_OnWindowReordered_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowReordered_Params);
      this.onWindowReordered(params.windowId, params.relativeWindowId, params.direction);
      return true;
    case kWindowTreeClient_OnWindowDeleted_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowDeleted_Params);
      this.onWindowDeleted(params.window);
      return true;
    case kWindowTreeClient_OnWindowVisibilityChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowVisibilityChanged_Params);
      this.onWindowVisibilityChanged(params.window, params.visible);
      return true;
    case kWindowTreeClient_OnWindowOpacityChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowOpacityChanged_Params);
      this.onWindowOpacityChanged(params.window, params.oldOpacity, params.newOpacity);
      return true;
    case kWindowTreeClient_OnWindowParentDrawnStateChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowParentDrawnStateChanged_Params);
      this.onWindowParentDrawnStateChanged(params.window, params.drawn);
      return true;
    case kWindowTreeClient_OnWindowSharedPropertyChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowSharedPropertyChanged_Params);
      this.onWindowSharedPropertyChanged(params.window, params.name, params.newData);
      return true;
    case kWindowTreeClient_OnWindowInputEvent_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowInputEvent_Params);
      this.onWindowInputEvent(params.eventId, params.window, params.displayId, params.displayRootWindow, params.eventLocationInScreenPixelLayout, params.event, params.matchesPointerWatcher);
      return true;
    case kWindowTreeClient_OnPointerEventObserved_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnPointerEventObserved_Params);
      this.onPointerEventObserved(params.event, params.windowId, params.displayId);
      return true;
    case kWindowTreeClient_OnWindowFocused_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowFocused_Params);
      this.onWindowFocused(params.focusedWindowId);
      return true;
    case kWindowTreeClient_OnWindowCursorChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowCursorChanged_Params);
      this.onWindowCursorChanged(params.windowId, params.cursor);
      return true;
    case kWindowTreeClient_OnWindowSurfaceChanged_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnWindowSurfaceChanged_Params);
      this.onWindowSurfaceChanged(params.windowId, params.surfaceInfo);
      return true;
    case kWindowTreeClient_OnDragDropStart_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnDragDropStart_Params);
      this.onDragDropStart(params.dragData);
      return true;
    case kWindowTreeClient_OnDragLeave_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnDragLeave_Params);
      this.onDragLeave(params.window);
      return true;
    case kWindowTreeClient_OnPerformDragDropCompleted_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnPerformDragDropCompleted_Params);
      this.onPerformDragDropCompleted(params.changeId, params.success, params.actionTaken);
      return true;
    case kWindowTreeClient_OnDragDropDone_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnDragDropDone_Params);
      this.onDragDropDone();
      return true;
    case kWindowTreeClient_OnChangeCompleted_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnChangeCompleted_Params);
      this.onChangeCompleted(params.changeId, params.success);
      return true;
    case kWindowTreeClient_RequestClose_Name:
      var params = reader.decodeStruct(WindowTreeClient_RequestClose_Params);
      this.requestClose(params.windowId);
      return true;
    case kWindowTreeClient_GetWindowManager_Name:
      var params = reader.decodeStruct(WindowTreeClient_GetWindowManager_Params);
      this.getWindowManager(params.internal);
      return true;
    default:
      return false;
    }
  };

  WindowTreeClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeClient_OnDragEnter_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnDragEnter_Params);
      this.onDragEnter(params.window, params.keyState, params.screenPosition, params.effectBitmask).then(function(response) {
        var responseParams =
            new WindowTreeClient_OnDragEnter_ResponseParams();
        responseParams.supportedOpBitmask = response.supportedOpBitmask;
        var builder = new codec.MessageV1Builder(
            kWindowTreeClient_OnDragEnter_Name,
            codec.align(WindowTreeClient_OnDragEnter_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTreeClient_OnDragEnter_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTreeClient_OnDragOver_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnDragOver_Params);
      this.onDragOver(params.window, params.keyState, params.screenPosition, params.effectBitmask).then(function(response) {
        var responseParams =
            new WindowTreeClient_OnDragOver_ResponseParams();
        responseParams.supportedOpBitmask = response.supportedOpBitmask;
        var builder = new codec.MessageV1Builder(
            kWindowTreeClient_OnDragOver_Name,
            codec.align(WindowTreeClient_OnDragOver_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTreeClient_OnDragOver_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kWindowTreeClient_OnCompleteDrop_Name:
      var params = reader.decodeStruct(WindowTreeClient_OnCompleteDrop_Params);
      this.onCompleteDrop(params.window, params.keyState, params.screenPosition, params.effectBitmask).then(function(response) {
        var responseParams =
            new WindowTreeClient_OnCompleteDrop_ResponseParams();
        responseParams.actionTaken = response.actionTaken;
        var builder = new codec.MessageV1Builder(
            kWindowTreeClient_OnCompleteDrop_Name,
            codec.align(WindowTreeClient_OnCompleteDrop_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(WindowTreeClient_OnCompleteDrop_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateWindowTreeClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTreeClient_OnEmbed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnEmbed_Params;
      break;
      case kWindowTreeClient_OnEmbedFromToken_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnEmbedFromToken_Params;
      break;
      case kWindowTreeClient_OnEmbeddedAppDisconnected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnEmbeddedAppDisconnected_Params;
      break;
      case kWindowTreeClient_OnUnembed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnUnembed_Params;
      break;
      case kWindowTreeClient_OnCaptureChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnCaptureChanged_Params;
      break;
      case kWindowTreeClient_OnFrameSinkIdAllocated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnFrameSinkIdAllocated_Params;
      break;
      case kWindowTreeClient_OnTopLevelCreated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnTopLevelCreated_Params;
      break;
      case kWindowTreeClient_OnWindowBoundsChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowBoundsChanged_Params;
      break;
      case kWindowTreeClient_OnWindowTransformChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowTransformChanged_Params;
      break;
      case kWindowTreeClient_OnClientAreaChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnClientAreaChanged_Params;
      break;
      case kWindowTreeClient_OnTransientWindowAdded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnTransientWindowAdded_Params;
      break;
      case kWindowTreeClient_OnTransientWindowRemoved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnTransientWindowRemoved_Params;
      break;
      case kWindowTreeClient_OnWindowHierarchyChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowHierarchyChanged_Params;
      break;
      case kWindowTreeClient_OnWindowReordered_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowReordered_Params;
      break;
      case kWindowTreeClient_OnWindowDeleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowDeleted_Params;
      break;
      case kWindowTreeClient_OnWindowVisibilityChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowVisibilityChanged_Params;
      break;
      case kWindowTreeClient_OnWindowOpacityChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowOpacityChanged_Params;
      break;
      case kWindowTreeClient_OnWindowParentDrawnStateChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowParentDrawnStateChanged_Params;
      break;
      case kWindowTreeClient_OnWindowSharedPropertyChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowSharedPropertyChanged_Params;
      break;
      case kWindowTreeClient_OnWindowInputEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowInputEvent_Params;
      break;
      case kWindowTreeClient_OnPointerEventObserved_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnPointerEventObserved_Params;
      break;
      case kWindowTreeClient_OnWindowFocused_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowFocused_Params;
      break;
      case kWindowTreeClient_OnWindowCursorChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowCursorChanged_Params;
      break;
      case kWindowTreeClient_OnWindowSurfaceChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnWindowSurfaceChanged_Params;
      break;
      case kWindowTreeClient_OnDragDropStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnDragDropStart_Params;
      break;
      case kWindowTreeClient_OnDragEnter_Name:
        if (message.expectsResponse())
          paramsClass = WindowTreeClient_OnDragEnter_Params;
      break;
      case kWindowTreeClient_OnDragOver_Name:
        if (message.expectsResponse())
          paramsClass = WindowTreeClient_OnDragOver_Params;
      break;
      case kWindowTreeClient_OnDragLeave_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnDragLeave_Params;
      break;
      case kWindowTreeClient_OnCompleteDrop_Name:
        if (message.expectsResponse())
          paramsClass = WindowTreeClient_OnCompleteDrop_Params;
      break;
      case kWindowTreeClient_OnPerformDragDropCompleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnPerformDragDropCompleted_Params;
      break;
      case kWindowTreeClient_OnDragDropDone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnDragDropDone_Params;
      break;
      case kWindowTreeClient_OnChangeCompleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_OnChangeCompleted_Params;
      break;
      case kWindowTreeClient_RequestClose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_RequestClose_Params;
      break;
      case kWindowTreeClient_GetWindowManager_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeClient_GetWindowManager_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kWindowTreeClient_OnDragEnter_Name:
        if (message.isResponse())
          paramsClass = WindowTreeClient_OnDragEnter_ResponseParams;
        break;
      case kWindowTreeClient_OnDragOver_Name:
        if (message.isResponse())
          paramsClass = WindowTreeClient_OnDragOver_ResponseParams;
        break;
      case kWindowTreeClient_OnCompleteDrop_Name:
        if (message.isResponse())
          paramsClass = WindowTreeClient_OnCompleteDrop_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var WindowTreeClient = {
    name: 'ui.mojom.WindowTreeClient',
    kVersion: 0,
    ptrClass: WindowTreeClientPtr,
    proxyClass: WindowTreeClientProxy,
    stubClass: WindowTreeClientStub,
    validateRequest: validateWindowTreeClientRequest,
    validateResponse: validateWindowTreeClientResponse,
    mojomId: 'services/ui/public/interfaces/window_tree.mojom',
    fuzzMethods: {
      onEmbed: {
        params: WindowTreeClient_OnEmbed_Params,
      },
      onEmbedFromToken: {
        params: WindowTreeClient_OnEmbedFromToken_Params,
      },
      onEmbeddedAppDisconnected: {
        params: WindowTreeClient_OnEmbeddedAppDisconnected_Params,
      },
      onUnembed: {
        params: WindowTreeClient_OnUnembed_Params,
      },
      onCaptureChanged: {
        params: WindowTreeClient_OnCaptureChanged_Params,
      },
      onFrameSinkIdAllocated: {
        params: WindowTreeClient_OnFrameSinkIdAllocated_Params,
      },
      onTopLevelCreated: {
        params: WindowTreeClient_OnTopLevelCreated_Params,
      },
      onWindowBoundsChanged: {
        params: WindowTreeClient_OnWindowBoundsChanged_Params,
      },
      onWindowTransformChanged: {
        params: WindowTreeClient_OnWindowTransformChanged_Params,
      },
      onClientAreaChanged: {
        params: WindowTreeClient_OnClientAreaChanged_Params,
      },
      onTransientWindowAdded: {
        params: WindowTreeClient_OnTransientWindowAdded_Params,
      },
      onTransientWindowRemoved: {
        params: WindowTreeClient_OnTransientWindowRemoved_Params,
      },
      onWindowHierarchyChanged: {
        params: WindowTreeClient_OnWindowHierarchyChanged_Params,
      },
      onWindowReordered: {
        params: WindowTreeClient_OnWindowReordered_Params,
      },
      onWindowDeleted: {
        params: WindowTreeClient_OnWindowDeleted_Params,
      },
      onWindowVisibilityChanged: {
        params: WindowTreeClient_OnWindowVisibilityChanged_Params,
      },
      onWindowOpacityChanged: {
        params: WindowTreeClient_OnWindowOpacityChanged_Params,
      },
      onWindowParentDrawnStateChanged: {
        params: WindowTreeClient_OnWindowParentDrawnStateChanged_Params,
      },
      onWindowSharedPropertyChanged: {
        params: WindowTreeClient_OnWindowSharedPropertyChanged_Params,
      },
      onWindowInputEvent: {
        params: WindowTreeClient_OnWindowInputEvent_Params,
      },
      onPointerEventObserved: {
        params: WindowTreeClient_OnPointerEventObserved_Params,
      },
      onWindowFocused: {
        params: WindowTreeClient_OnWindowFocused_Params,
      },
      onWindowCursorChanged: {
        params: WindowTreeClient_OnWindowCursorChanged_Params,
      },
      onWindowSurfaceChanged: {
        params: WindowTreeClient_OnWindowSurfaceChanged_Params,
      },
      onDragDropStart: {
        params: WindowTreeClient_OnDragDropStart_Params,
      },
      onDragEnter: {
        params: WindowTreeClient_OnDragEnter_Params,
      },
      onDragOver: {
        params: WindowTreeClient_OnDragOver_Params,
      },
      onDragLeave: {
        params: WindowTreeClient_OnDragLeave_Params,
      },
      onCompleteDrop: {
        params: WindowTreeClient_OnCompleteDrop_Params,
      },
      onPerformDragDropCompleted: {
        params: WindowTreeClient_OnPerformDragDropCompleted_Params,
      },
      onDragDropDone: {
        params: WindowTreeClient_OnDragDropDone_Params,
      },
      onChangeCompleted: {
        params: WindowTreeClient_OnChangeCompleted_Params,
      },
      requestClose: {
        params: WindowTreeClient_RequestClose_Params,
      },
      getWindowManager: {
        params: WindowTreeClient_GetWindowManager_Params,
      },
    },
  };
  WindowTreeClientStub.prototype.validator = validateWindowTreeClientRequest;
  WindowTreeClientProxy.prototype.validator = validateWindowTreeClientResponse;
  var kWindowTreeFactory_CreateWindowTree_Name = 1801904330;

  function WindowTreeFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowTreeFactory,
                                                   handleOrPtrInfo);
  }

  function WindowTreeFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowTreeFactory, associatedInterfacePtrInfo);
  }

  WindowTreeFactoryAssociatedPtr.prototype =
      Object.create(WindowTreeFactoryPtr.prototype);
  WindowTreeFactoryAssociatedPtr.prototype.constructor =
      WindowTreeFactoryAssociatedPtr;

  function WindowTreeFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowTreeFactoryPtr.prototype.createWindowTree = function() {
    return WindowTreeFactoryProxy.prototype.createWindowTree
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeFactoryProxy.prototype.createWindowTree = function(treeRequest, client) {
    var params_ = new WindowTreeFactory_CreateWindowTree_Params();
    params_.treeRequest = treeRequest;
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kWindowTreeFactory_CreateWindowTree_Name,
        codec.align(WindowTreeFactory_CreateWindowTree_Params.encodedSize));
    builder.encodeStruct(WindowTreeFactory_CreateWindowTree_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowTreeFactoryStub.prototype.createWindowTree = function(treeRequest, client) {
    return this.delegate_ && this.delegate_.createWindowTree && this.delegate_.createWindowTree(treeRequest, client);
  }

  WindowTreeFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeFactory_CreateWindowTree_Name:
      var params = reader.decodeStruct(WindowTreeFactory_CreateWindowTree_Params);
      this.createWindowTree(params.treeRequest, params.client);
      return true;
    default:
      return false;
    }
  };

  WindowTreeFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWindowTreeFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTreeFactory_CreateWindowTree_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeFactory_CreateWindowTree_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowTreeFactory = {
    name: 'ui.mojom.WindowTreeFactory',
    kVersion: 0,
    ptrClass: WindowTreeFactoryPtr,
    proxyClass: WindowTreeFactoryProxy,
    stubClass: WindowTreeFactoryStub,
    validateRequest: validateWindowTreeFactoryRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/window_tree.mojom',
    fuzzMethods: {
      createWindowTree: {
        params: WindowTreeFactory_CreateWindowTree_Params,
      },
    },
  };
  WindowTreeFactoryStub.prototype.validator = validateWindowTreeFactoryRequest;
  WindowTreeFactoryProxy.prototype.validator = null;
  exports.WindowTree = WindowTree;
  exports.WindowTreePtr = WindowTreePtr;
  exports.WindowTreeAssociatedPtr = WindowTreeAssociatedPtr;
  exports.WindowTreeClient = WindowTreeClient;
  exports.WindowTreeClientPtr = WindowTreeClientPtr;
  exports.WindowTreeClientAssociatedPtr = WindowTreeClientAssociatedPtr;
  exports.WindowTreeFactory = WindowTreeFactory;
  exports.WindowTreeFactoryPtr = WindowTreeFactoryPtr;
  exports.WindowTreeFactoryAssociatedPtr = WindowTreeFactoryAssociatedPtr;
})();