// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/render_message_filter.mojom';
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
  var input_handler$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/input/input_handler.mojom', 'input/input_handler.mojom.js');
  }
  var native_types$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/native_types.mojom', 'native_types.mojom.js');
  }
  var widget$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/widget.mojom', 'widget.mojom.js');
  }
  var thread_priority$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/thread_priority.mojom', '../../mojo/public/mojom/base/thread_priority.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../mojo/public/mojom/base/time.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function RenderMessageFilter_GenerateRoutingID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_GenerateRoutingID_Params.prototype.initDefaults_ = function() {
  };
  RenderMessageFilter_GenerateRoutingID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_GenerateRoutingID_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_GenerateRoutingID_Params;
    return generated;
  };

  RenderMessageFilter_GenerateRoutingID_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RenderMessageFilter_GenerateRoutingID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_GenerateRoutingID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_GenerateRoutingID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_GenerateRoutingID_Params.validate = function(messageValidator, offset) {
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

  RenderMessageFilter_GenerateRoutingID_Params.encodedSize = codec.kStructHeaderSize + 0;

  RenderMessageFilter_GenerateRoutingID_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_GenerateRoutingID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RenderMessageFilter_GenerateRoutingID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_GenerateRoutingID_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RenderMessageFilter_GenerateRoutingID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_GenerateRoutingID_ResponseParams.prototype.initDefaults_ = function() {
    this.routingId = 0;
  };
  RenderMessageFilter_GenerateRoutingID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_GenerateRoutingID_ResponseParams.generate = function(generator_) {
    var generated = new RenderMessageFilter_GenerateRoutingID_ResponseParams;
    generated.routingId = generator_.generateInt32();
    return generated;
  };

  RenderMessageFilter_GenerateRoutingID_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateInt32(this.routingId);
    }
    return this;
  };
  RenderMessageFilter_GenerateRoutingID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_GenerateRoutingID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_GenerateRoutingID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_GenerateRoutingID_ResponseParams.validate = function(messageValidator, offset) {
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

  RenderMessageFilter_GenerateRoutingID_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RenderMessageFilter_GenerateRoutingID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_GenerateRoutingID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routingId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderMessageFilter_GenerateRoutingID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_GenerateRoutingID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routingId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderMessageFilter_CreateNewWidget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_CreateNewWidget_Params.prototype.initDefaults_ = function() {
    this.openerId = 0;
    this.popupType = 0;
    this.widget = new widget$.WidgetPtr();
  };
  RenderMessageFilter_CreateNewWidget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_CreateNewWidget_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_CreateNewWidget_Params;
    generated.openerId = generator_.generateInt32();
    generated.popupType = generator_.generateEnum();
    generated.widget = generator_.generateInterface("content.mojom.Widget", false);
    return generated;
  };

  RenderMessageFilter_CreateNewWidget_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.openerId = mutator_.mutateInt32(this.openerId);
    }
    if (mutator_.chooseMutateField()) {
      this.popupType = mutator_.mutateEnum(this.popupType);
    }
    if (mutator_.chooseMutateField()) {
      this.widget = mutator_.mutateInterface(this.widget, "content.mojom.Widget", false);
    }
    return this;
  };
  RenderMessageFilter_CreateNewWidget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.widget !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.WidgetPtr"]);
    }
    return handles;
  };

  RenderMessageFilter_CreateNewWidget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_CreateNewWidget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.widget = handles[idx++];;
    return idx;
  };

  RenderMessageFilter_CreateNewWidget_Params.validate = function(messageValidator, offset) {
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



    // validate RenderMessageFilter_CreateNewWidget_Params.popupType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, native_types$.WebPopupType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_CreateNewWidget_Params.widget
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderMessageFilter_CreateNewWidget_Params.encodedSize = codec.kStructHeaderSize + 16;

  RenderMessageFilter_CreateNewWidget_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_CreateNewWidget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.openerId = decoder.decodeStruct(codec.Int32);
    val.popupType = decoder.decodeStruct(codec.Int32);
    val.widget = decoder.decodeStruct(new codec.Interface(widget$.WidgetPtr));
    return val;
  };

  RenderMessageFilter_CreateNewWidget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_CreateNewWidget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.openerId);
    encoder.encodeStruct(codec.Int32, val.popupType);
    encoder.encodeStruct(new codec.Interface(widget$.WidgetPtr), val.widget);
  };
  function RenderMessageFilter_CreateNewWidget_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_CreateNewWidget_ResponseParams.prototype.initDefaults_ = function() {
    this.routeId = 0;
  };
  RenderMessageFilter_CreateNewWidget_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_CreateNewWidget_ResponseParams.generate = function(generator_) {
    var generated = new RenderMessageFilter_CreateNewWidget_ResponseParams;
    generated.routeId = generator_.generateInt32();
    return generated;
  };

  RenderMessageFilter_CreateNewWidget_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateInt32(this.routeId);
    }
    return this;
  };
  RenderMessageFilter_CreateNewWidget_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_CreateNewWidget_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_CreateNewWidget_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_CreateNewWidget_ResponseParams.validate = function(messageValidator, offset) {
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

  RenderMessageFilter_CreateNewWidget_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RenderMessageFilter_CreateNewWidget_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_CreateNewWidget_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderMessageFilter_CreateNewWidget_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_CreateNewWidget_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderMessageFilter_CreateFullscreenWidget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_CreateFullscreenWidget_Params.prototype.initDefaults_ = function() {
    this.openerId = 0;
    this.widget = new widget$.WidgetPtr();
  };
  RenderMessageFilter_CreateFullscreenWidget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_CreateFullscreenWidget_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_CreateFullscreenWidget_Params;
    generated.openerId = generator_.generateInt32();
    generated.widget = generator_.generateInterface("content.mojom.Widget", false);
    return generated;
  };

  RenderMessageFilter_CreateFullscreenWidget_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.openerId = mutator_.mutateInt32(this.openerId);
    }
    if (mutator_.chooseMutateField()) {
      this.widget = mutator_.mutateInterface(this.widget, "content.mojom.Widget", false);
    }
    return this;
  };
  RenderMessageFilter_CreateFullscreenWidget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.widget !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.WidgetPtr"]);
    }
    return handles;
  };

  RenderMessageFilter_CreateFullscreenWidget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_CreateFullscreenWidget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.widget = handles[idx++];;
    return idx;
  };

  RenderMessageFilter_CreateFullscreenWidget_Params.validate = function(messageValidator, offset) {
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



    // validate RenderMessageFilter_CreateFullscreenWidget_Params.widget
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderMessageFilter_CreateFullscreenWidget_Params.encodedSize = codec.kStructHeaderSize + 16;

  RenderMessageFilter_CreateFullscreenWidget_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_CreateFullscreenWidget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.openerId = decoder.decodeStruct(codec.Int32);
    val.widget = decoder.decodeStruct(new codec.Interface(widget$.WidgetPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderMessageFilter_CreateFullscreenWidget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_CreateFullscreenWidget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.openerId);
    encoder.encodeStruct(new codec.Interface(widget$.WidgetPtr), val.widget);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderMessageFilter_CreateFullscreenWidget_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.prototype.initDefaults_ = function() {
    this.routeId = 0;
  };
  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.generate = function(generator_) {
    var generated = new RenderMessageFilter_CreateFullscreenWidget_ResponseParams;
    generated.routeId = generator_.generateInt32();
    return generated;
  };

  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateInt32(this.routeId);
    }
    return this;
  };
  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.validate = function(messageValidator, offset) {
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

  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_CreateFullscreenWidget_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderMessageFilter_CreateFullscreenWidget_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_CreateFullscreenWidget_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routeId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderMessageFilter_DidGenerateCacheableMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_DidGenerateCacheableMetadata_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.expectedResponseTime = null;
    this.data = null;
  };
  RenderMessageFilter_DidGenerateCacheableMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_DidGenerateCacheableMetadata_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_DidGenerateCacheableMetadata_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.expectedResponseTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  RenderMessageFilter_DidGenerateCacheableMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.expectedResponseTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  RenderMessageFilter_DidGenerateCacheableMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_DidGenerateCacheableMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_DidGenerateCacheableMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_DidGenerateCacheableMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate RenderMessageFilter_DidGenerateCacheableMetadata_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_DidGenerateCacheableMetadata_Params.expectedResponseTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_DidGenerateCacheableMetadata_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderMessageFilter_DidGenerateCacheableMetadata_Params.encodedSize = codec.kStructHeaderSize + 24;

  RenderMessageFilter_DidGenerateCacheableMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_DidGenerateCacheableMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.expectedResponseTime = decoder.decodeStructPointer(time$.Time);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  RenderMessageFilter_DidGenerateCacheableMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_DidGenerateCacheableMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(time$.Time, val.expectedResponseTime);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.expectedResponseTime = null;
    this.data = null;
    this.cacheStorageOrigin = null;
    this.cacheStorageCacheName = null;
  };
  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.expectedResponseTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.cacheStorageOrigin = generator_.generateStruct(url.mojom.Origin, false);
    generated.cacheStorageCacheName = generator_.generateString(false);
    return generated;
  };

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.expectedResponseTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.cacheStorageOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cacheStorageCacheName = mutator_.mutateString(this.cacheStorageCacheName, false);
    }
    return this;
  };
  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.validate = function(messageValidator, offset) {
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


    // validate RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.expectedResponseTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.cacheStorageOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.cacheStorageCacheName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.encodedSize = codec.kStructHeaderSize + 40;

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.expectedResponseTime = decoder.decodeStructPointer(time$.Time);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    val.cacheStorageOrigin = decoder.decodeStructPointer(origin$.Origin);
    val.cacheStorageCacheName = decoder.decodeStruct(codec.String);
    return val;
  };

  RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(time$.Time, val.expectedResponseTime);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
    encoder.encodeStructPointer(origin$.Origin, val.cacheStorageOrigin);
    encoder.encodeStruct(codec.String, val.cacheStorageCacheName);
  };
  function RenderMessageFilter_HasGpuProcess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_HasGpuProcess_Params.prototype.initDefaults_ = function() {
  };
  RenderMessageFilter_HasGpuProcess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_HasGpuProcess_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_HasGpuProcess_Params;
    return generated;
  };

  RenderMessageFilter_HasGpuProcess_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RenderMessageFilter_HasGpuProcess_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_HasGpuProcess_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_HasGpuProcess_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_HasGpuProcess_Params.validate = function(messageValidator, offset) {
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

  RenderMessageFilter_HasGpuProcess_Params.encodedSize = codec.kStructHeaderSize + 0;

  RenderMessageFilter_HasGpuProcess_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_HasGpuProcess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RenderMessageFilter_HasGpuProcess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_HasGpuProcess_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function RenderMessageFilter_HasGpuProcess_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_HasGpuProcess_ResponseParams.prototype.initDefaults_ = function() {
    this.hasGpuProcess = false;
  };
  RenderMessageFilter_HasGpuProcess_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_HasGpuProcess_ResponseParams.generate = function(generator_) {
    var generated = new RenderMessageFilter_HasGpuProcess_ResponseParams;
    generated.hasGpuProcess = generator_.generateBool();
    return generated;
  };

  RenderMessageFilter_HasGpuProcess_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hasGpuProcess = mutator_.mutateBool(this.hasGpuProcess);
    }
    return this;
  };
  RenderMessageFilter_HasGpuProcess_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_HasGpuProcess_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_HasGpuProcess_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_HasGpuProcess_ResponseParams.validate = function(messageValidator, offset) {
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

  RenderMessageFilter_HasGpuProcess_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RenderMessageFilter_HasGpuProcess_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_HasGpuProcess_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasGpuProcess = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RenderMessageFilter_HasGpuProcess_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_HasGpuProcess_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasGpuProcess & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RenderMessageFilter_SetThreadPriority_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderMessageFilter_SetThreadPriority_Params.prototype.initDefaults_ = function() {
    this.platformThreadId = 0;
    this.threadPriority = 0;
  };
  RenderMessageFilter_SetThreadPriority_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderMessageFilter_SetThreadPriority_Params.generate = function(generator_) {
    var generated = new RenderMessageFilter_SetThreadPriority_Params;
    generated.platformThreadId = generator_.generateInt32();
    generated.threadPriority = generator_.generateEnum(0, 3);
    return generated;
  };

  RenderMessageFilter_SetThreadPriority_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.platformThreadId = mutator_.mutateInt32(this.platformThreadId);
    }
    if (mutator_.chooseMutateField()) {
      this.threadPriority = mutator_.mutateEnum(this.threadPriority, 0, 3);
    }
    return this;
  };
  RenderMessageFilter_SetThreadPriority_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RenderMessageFilter_SetThreadPriority_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderMessageFilter_SetThreadPriority_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RenderMessageFilter_SetThreadPriority_Params.validate = function(messageValidator, offset) {
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



    // validate RenderMessageFilter_SetThreadPriority_Params.threadPriority
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, thread_priority$.ThreadPriority);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderMessageFilter_SetThreadPriority_Params.encodedSize = codec.kStructHeaderSize + 8;

  RenderMessageFilter_SetThreadPriority_Params.decode = function(decoder) {
    var packed;
    var val = new RenderMessageFilter_SetThreadPriority_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.platformThreadId = decoder.decodeStruct(codec.Int32);
    val.threadPriority = decoder.decodeStruct(codec.Int32);
    return val;
  };

  RenderMessageFilter_SetThreadPriority_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderMessageFilter_SetThreadPriority_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.platformThreadId);
    encoder.encodeStruct(codec.Int32, val.threadPriority);
  };
  var kRenderMessageFilter_GenerateRoutingID_Name = 732286646;
  var kRenderMessageFilter_CreateNewWidget_Name = 1766463562;
  var kRenderMessageFilter_CreateFullscreenWidget_Name = 1749450432;
  var kRenderMessageFilter_DidGenerateCacheableMetadata_Name = 1805260414;
  var kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name = 667662216;
  var kRenderMessageFilter_HasGpuProcess_Name = 1825327839;
  var kRenderMessageFilter_SetThreadPriority_Name = 1527813644;

  function RenderMessageFilterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RenderMessageFilter,
                                                   handleOrPtrInfo);
  }

  function RenderMessageFilterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RenderMessageFilter, associatedInterfacePtrInfo);
  }

  RenderMessageFilterAssociatedPtr.prototype =
      Object.create(RenderMessageFilterPtr.prototype);
  RenderMessageFilterAssociatedPtr.prototype.constructor =
      RenderMessageFilterAssociatedPtr;

  function RenderMessageFilterProxy(receiver) {
    this.receiver_ = receiver;
  }
  RenderMessageFilterPtr.prototype.generateRoutingID = function() {
    return RenderMessageFilterProxy.prototype.generateRoutingID
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.generateRoutingID = function() {
    var params_ = new RenderMessageFilter_GenerateRoutingID_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderMessageFilter_GenerateRoutingID_Name,
          codec.align(RenderMessageFilter_GenerateRoutingID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderMessageFilter_GenerateRoutingID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderMessageFilter_GenerateRoutingID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RenderMessageFilterPtr.prototype.createNewWidget = function() {
    return RenderMessageFilterProxy.prototype.createNewWidget
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.createNewWidget = function(openerId, popupType, widget) {
    var params_ = new RenderMessageFilter_CreateNewWidget_Params();
    params_.openerId = openerId;
    params_.popupType = popupType;
    params_.widget = widget;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderMessageFilter_CreateNewWidget_Name,
          codec.align(RenderMessageFilter_CreateNewWidget_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderMessageFilter_CreateNewWidget_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderMessageFilter_CreateNewWidget_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RenderMessageFilterPtr.prototype.createFullscreenWidget = function() {
    return RenderMessageFilterProxy.prototype.createFullscreenWidget
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.createFullscreenWidget = function(openerId, widget) {
    var params_ = new RenderMessageFilter_CreateFullscreenWidget_Params();
    params_.openerId = openerId;
    params_.widget = widget;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderMessageFilter_CreateFullscreenWidget_Name,
          codec.align(RenderMessageFilter_CreateFullscreenWidget_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderMessageFilter_CreateFullscreenWidget_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderMessageFilter_CreateFullscreenWidget_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RenderMessageFilterPtr.prototype.didGenerateCacheableMetadata = function() {
    return RenderMessageFilterProxy.prototype.didGenerateCacheableMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.didGenerateCacheableMetadata = function(url, expectedResponseTime, data) {
    var params_ = new RenderMessageFilter_DidGenerateCacheableMetadata_Params();
    params_.url = url;
    params_.expectedResponseTime = expectedResponseTime;
    params_.data = data;
    var builder = new codec.MessageV0Builder(
        kRenderMessageFilter_DidGenerateCacheableMetadata_Name,
        codec.align(RenderMessageFilter_DidGenerateCacheableMetadata_Params.encodedSize));
    builder.encodeStruct(RenderMessageFilter_DidGenerateCacheableMetadata_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RenderMessageFilterPtr.prototype.didGenerateCacheableMetadataInCacheStorage = function() {
    return RenderMessageFilterProxy.prototype.didGenerateCacheableMetadataInCacheStorage
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.didGenerateCacheableMetadataInCacheStorage = function(url, expectedResponseTime, data, cacheStorageOrigin, cacheStorageCacheName) {
    var params_ = new RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params();
    params_.url = url;
    params_.expectedResponseTime = expectedResponseTime;
    params_.data = data;
    params_.cacheStorageOrigin = cacheStorageOrigin;
    params_.cacheStorageCacheName = cacheStorageCacheName;
    var builder = new codec.MessageV0Builder(
        kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name,
        codec.align(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params.encodedSize));
    builder.encodeStruct(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RenderMessageFilterPtr.prototype.hasGpuProcess = function() {
    return RenderMessageFilterProxy.prototype.hasGpuProcess
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.hasGpuProcess = function() {
    var params_ = new RenderMessageFilter_HasGpuProcess_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRenderMessageFilter_HasGpuProcess_Name,
          codec.align(RenderMessageFilter_HasGpuProcess_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RenderMessageFilter_HasGpuProcess_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RenderMessageFilter_HasGpuProcess_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RenderMessageFilterPtr.prototype.setThreadPriority = function() {
    return RenderMessageFilterProxy.prototype.setThreadPriority
        .apply(this.ptr.getProxy(), arguments);
  };

  RenderMessageFilterProxy.prototype.setThreadPriority = function(platformThreadId, threadPriority) {
    var params_ = new RenderMessageFilter_SetThreadPriority_Params();
    params_.platformThreadId = platformThreadId;
    params_.threadPriority = threadPriority;
    var builder = new codec.MessageV0Builder(
        kRenderMessageFilter_SetThreadPriority_Name,
        codec.align(RenderMessageFilter_SetThreadPriority_Params.encodedSize));
    builder.encodeStruct(RenderMessageFilter_SetThreadPriority_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RenderMessageFilterStub(delegate) {
    this.delegate_ = delegate;
  }
  RenderMessageFilterStub.prototype.generateRoutingID = function() {
    return this.delegate_ && this.delegate_.generateRoutingID && this.delegate_.generateRoutingID();
  }
  RenderMessageFilterStub.prototype.createNewWidget = function(openerId, popupType, widget) {
    return this.delegate_ && this.delegate_.createNewWidget && this.delegate_.createNewWidget(openerId, popupType, widget);
  }
  RenderMessageFilterStub.prototype.createFullscreenWidget = function(openerId, widget) {
    return this.delegate_ && this.delegate_.createFullscreenWidget && this.delegate_.createFullscreenWidget(openerId, widget);
  }
  RenderMessageFilterStub.prototype.didGenerateCacheableMetadata = function(url, expectedResponseTime, data) {
    return this.delegate_ && this.delegate_.didGenerateCacheableMetadata && this.delegate_.didGenerateCacheableMetadata(url, expectedResponseTime, data);
  }
  RenderMessageFilterStub.prototype.didGenerateCacheableMetadataInCacheStorage = function(url, expectedResponseTime, data, cacheStorageOrigin, cacheStorageCacheName) {
    return this.delegate_ && this.delegate_.didGenerateCacheableMetadataInCacheStorage && this.delegate_.didGenerateCacheableMetadataInCacheStorage(url, expectedResponseTime, data, cacheStorageOrigin, cacheStorageCacheName);
  }
  RenderMessageFilterStub.prototype.hasGpuProcess = function() {
    return this.delegate_ && this.delegate_.hasGpuProcess && this.delegate_.hasGpuProcess();
  }
  RenderMessageFilterStub.prototype.setThreadPriority = function(platformThreadId, threadPriority) {
    return this.delegate_ && this.delegate_.setThreadPriority && this.delegate_.setThreadPriority(platformThreadId, threadPriority);
  }

  RenderMessageFilterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderMessageFilter_DidGenerateCacheableMetadata_Name:
      var params = reader.decodeStruct(RenderMessageFilter_DidGenerateCacheableMetadata_Params);
      this.didGenerateCacheableMetadata(params.url, params.expectedResponseTime, params.data);
      return true;
    case kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name:
      var params = reader.decodeStruct(RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params);
      this.didGenerateCacheableMetadataInCacheStorage(params.url, params.expectedResponseTime, params.data, params.cacheStorageOrigin, params.cacheStorageCacheName);
      return true;
    case kRenderMessageFilter_SetThreadPriority_Name:
      var params = reader.decodeStruct(RenderMessageFilter_SetThreadPriority_Params);
      this.setThreadPriority(params.platformThreadId, params.threadPriority);
      return true;
    default:
      return false;
    }
  };

  RenderMessageFilterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderMessageFilter_GenerateRoutingID_Name:
      var params = reader.decodeStruct(RenderMessageFilter_GenerateRoutingID_Params);
      this.generateRoutingID().then(function(response) {
        var responseParams =
            new RenderMessageFilter_GenerateRoutingID_ResponseParams();
        responseParams.routingId = response.routingId;
        var builder = new codec.MessageV1Builder(
            kRenderMessageFilter_GenerateRoutingID_Name,
            codec.align(RenderMessageFilter_GenerateRoutingID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderMessageFilter_GenerateRoutingID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderMessageFilter_CreateNewWidget_Name:
      var params = reader.decodeStruct(RenderMessageFilter_CreateNewWidget_Params);
      this.createNewWidget(params.openerId, params.popupType, params.widget).then(function(response) {
        var responseParams =
            new RenderMessageFilter_CreateNewWidget_ResponseParams();
        responseParams.routeId = response.routeId;
        var builder = new codec.MessageV1Builder(
            kRenderMessageFilter_CreateNewWidget_Name,
            codec.align(RenderMessageFilter_CreateNewWidget_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderMessageFilter_CreateNewWidget_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderMessageFilter_CreateFullscreenWidget_Name:
      var params = reader.decodeStruct(RenderMessageFilter_CreateFullscreenWidget_Params);
      this.createFullscreenWidget(params.openerId, params.widget).then(function(response) {
        var responseParams =
            new RenderMessageFilter_CreateFullscreenWidget_ResponseParams();
        responseParams.routeId = response.routeId;
        var builder = new codec.MessageV1Builder(
            kRenderMessageFilter_CreateFullscreenWidget_Name,
            codec.align(RenderMessageFilter_CreateFullscreenWidget_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderMessageFilter_CreateFullscreenWidget_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kRenderMessageFilter_HasGpuProcess_Name:
      var params = reader.decodeStruct(RenderMessageFilter_HasGpuProcess_Params);
      this.hasGpuProcess().then(function(response) {
        var responseParams =
            new RenderMessageFilter_HasGpuProcess_ResponseParams();
        responseParams.hasGpuProcess = response.hasGpuProcess;
        var builder = new codec.MessageV1Builder(
            kRenderMessageFilter_HasGpuProcess_Name,
            codec.align(RenderMessageFilter_HasGpuProcess_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RenderMessageFilter_HasGpuProcess_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRenderMessageFilterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderMessageFilter_GenerateRoutingID_Name:
        if (message.expectsResponse())
          paramsClass = RenderMessageFilter_GenerateRoutingID_Params;
      break;
      case kRenderMessageFilter_CreateNewWidget_Name:
        if (message.expectsResponse())
          paramsClass = RenderMessageFilter_CreateNewWidget_Params;
      break;
      case kRenderMessageFilter_CreateFullscreenWidget_Name:
        if (message.expectsResponse())
          paramsClass = RenderMessageFilter_CreateFullscreenWidget_Params;
      break;
      case kRenderMessageFilter_DidGenerateCacheableMetadata_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderMessageFilter_DidGenerateCacheableMetadata_Params;
      break;
      case kRenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params;
      break;
      case kRenderMessageFilter_HasGpuProcess_Name:
        if (message.expectsResponse())
          paramsClass = RenderMessageFilter_HasGpuProcess_Params;
      break;
      case kRenderMessageFilter_SetThreadPriority_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RenderMessageFilter_SetThreadPriority_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRenderMessageFilterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRenderMessageFilter_GenerateRoutingID_Name:
        if (message.isResponse())
          paramsClass = RenderMessageFilter_GenerateRoutingID_ResponseParams;
        break;
      case kRenderMessageFilter_CreateNewWidget_Name:
        if (message.isResponse())
          paramsClass = RenderMessageFilter_CreateNewWidget_ResponseParams;
        break;
      case kRenderMessageFilter_CreateFullscreenWidget_Name:
        if (message.isResponse())
          paramsClass = RenderMessageFilter_CreateFullscreenWidget_ResponseParams;
        break;
      case kRenderMessageFilter_HasGpuProcess_Name:
        if (message.isResponse())
          paramsClass = RenderMessageFilter_HasGpuProcess_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var RenderMessageFilter = {
    name: 'content.mojom.RenderMessageFilter',
    kVersion: 0,
    ptrClass: RenderMessageFilterPtr,
    proxyClass: RenderMessageFilterProxy,
    stubClass: RenderMessageFilterStub,
    validateRequest: validateRenderMessageFilterRequest,
    validateResponse: validateRenderMessageFilterResponse,
    mojomId: 'content/common/render_message_filter.mojom',
    fuzzMethods: {
      generateRoutingID: {
        params: RenderMessageFilter_GenerateRoutingID_Params,
      },
      createNewWidget: {
        params: RenderMessageFilter_CreateNewWidget_Params,
      },
      createFullscreenWidget: {
        params: RenderMessageFilter_CreateFullscreenWidget_Params,
      },
      didGenerateCacheableMetadata: {
        params: RenderMessageFilter_DidGenerateCacheableMetadata_Params,
      },
      didGenerateCacheableMetadataInCacheStorage: {
        params: RenderMessageFilter_DidGenerateCacheableMetadataInCacheStorage_Params,
      },
      hasGpuProcess: {
        params: RenderMessageFilter_HasGpuProcess_Params,
      },
      setThreadPriority: {
        params: RenderMessageFilter_SetThreadPriority_Params,
      },
    },
  };
  RenderMessageFilterStub.prototype.validator = validateRenderMessageFilterRequest;
  RenderMessageFilterProxy.prototype.validator = validateRenderMessageFilterResponse;
  exports.RenderMessageFilter = RenderMessageFilter;
  exports.RenderMessageFilterPtr = RenderMessageFilterPtr;
  exports.RenderMessageFilterAssociatedPtr = RenderMessageFilterAssociatedPtr;
})();