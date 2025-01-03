// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/chrome_render_frame.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('chrome.mojom');
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../mojo/public/mojom/base/string16.mojom.js');
  }
  var window_features$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/window_features.mojom', '../../third_party/blink/public/web/window_features.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var ImageFormat = {};
  ImageFormat.JPEG = 0;
  ImageFormat.PNG = ImageFormat.JPEG + 1;

  ImageFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ImageFormat.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BrowserControlsState = {};

  BrowserControlsState.isKnownEnumValue = function(value) {
    return false;
  };

  BrowserControlsState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function WebApplicationInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebApplicationInfo.prototype.initDefaults_ = function() {
  };
  WebApplicationInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebApplicationInfo.generate = function(generator_) {
    var generated = new WebApplicationInfo;
    return generated;
  };

  WebApplicationInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  WebApplicationInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebApplicationInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebApplicationInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebApplicationInfo.validate = function(messageValidator, offset) {
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

  WebApplicationInfo.encodedSize = codec.kStructHeaderSize + 0;

  WebApplicationInfo.decode = function(decoder) {
    var packed;
    var val = new WebApplicationInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebApplicationInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebApplicationInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function ChromeRenderFrame_SetWindowFeatures_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_SetWindowFeatures_Params.prototype.initDefaults_ = function() {
    this.windowFeatures = null;
  };
  ChromeRenderFrame_SetWindowFeatures_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_SetWindowFeatures_Params.generate = function(generator_) {
    var generated = new ChromeRenderFrame_SetWindowFeatures_Params;
    generated.windowFeatures = generator_.generateStruct(blink.mojom.WindowFeatures, false);
    return generated;
  };

  ChromeRenderFrame_SetWindowFeatures_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowFeatures = mutator_.mutateStruct(blink.mojom.WindowFeatures, false);
    }
    return this;
  };
  ChromeRenderFrame_SetWindowFeatures_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_SetWindowFeatures_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_SetWindowFeatures_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_SetWindowFeatures_Params.validate = function(messageValidator, offset) {
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


    // validate ChromeRenderFrame_SetWindowFeatures_Params.windowFeatures
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, window_features$.WindowFeatures, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromeRenderFrame_SetWindowFeatures_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChromeRenderFrame_SetWindowFeatures_Params.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_SetWindowFeatures_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowFeatures = decoder.decodeStructPointer(window_features$.WindowFeatures);
    return val;
  };

  ChromeRenderFrame_SetWindowFeatures_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_SetWindowFeatures_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(window_features$.WindowFeatures, val.windowFeatures);
  };
  function ChromeRenderFrame_RequestReloadImageForContextNode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_RequestReloadImageForContextNode_Params.prototype.initDefaults_ = function() {
  };
  ChromeRenderFrame_RequestReloadImageForContextNode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_RequestReloadImageForContextNode_Params.generate = function(generator_) {
    var generated = new ChromeRenderFrame_RequestReloadImageForContextNode_Params;
    return generated;
  };

  ChromeRenderFrame_RequestReloadImageForContextNode_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ChromeRenderFrame_RequestReloadImageForContextNode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_RequestReloadImageForContextNode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_RequestReloadImageForContextNode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_RequestReloadImageForContextNode_Params.validate = function(messageValidator, offset) {
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

  ChromeRenderFrame_RequestReloadImageForContextNode_Params.encodedSize = codec.kStructHeaderSize + 0;

  ChromeRenderFrame_RequestReloadImageForContextNode_Params.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_RequestReloadImageForContextNode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ChromeRenderFrame_RequestReloadImageForContextNode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_RequestReloadImageForContextNode_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ChromeRenderFrame_RequestThumbnailForContextNode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_RequestThumbnailForContextNode_Params.prototype.initDefaults_ = function() {
    this.thumbnailMinAreaPixels = 0;
    this.imageFormat = 0;
    this.thumbnailMaxSizePixels = null;
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_Params.generate = function(generator_) {
    var generated = new ChromeRenderFrame_RequestThumbnailForContextNode_Params;
    generated.thumbnailMinAreaPixels = generator_.generateInt32();
    generated.thumbnailMaxSizePixels = generator_.generateStruct(gfx.mojom.Size, false);
    generated.imageFormat = generator_.generateEnum(0, 1);
    return generated;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.thumbnailMinAreaPixels = mutator_.mutateInt32(this.thumbnailMinAreaPixels);
    }
    if (mutator_.chooseMutateField()) {
      this.thumbnailMaxSizePixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.imageFormat = mutator_.mutateEnum(this.imageFormat, 0, 1);
    }
    return this;
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_Params.validate = function(messageValidator, offset) {
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



    // validate ChromeRenderFrame_RequestThumbnailForContextNode_Params.thumbnailMaxSizePixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ChromeRenderFrame_RequestThumbnailForContextNode_Params.imageFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, ImageFormat);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_Params.encodedSize = codec.kStructHeaderSize + 16;

  ChromeRenderFrame_RequestThumbnailForContextNode_Params.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_RequestThumbnailForContextNode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.thumbnailMinAreaPixels = decoder.decodeStruct(codec.Int32);
    val.imageFormat = decoder.decodeStruct(codec.Int32);
    val.thumbnailMaxSizePixels = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_RequestThumbnailForContextNode_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.thumbnailMinAreaPixels);
    encoder.encodeStruct(codec.Int32, val.imageFormat);
    encoder.encodeStructPointer(geometry$.Size, val.thumbnailMaxSizePixels);
  };
  function ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.prototype.initDefaults_ = function() {
    this.thumbnailData = null;
    this.originalSize = null;
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.generate = function(generator_) {
    var generated = new ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams;
    generated.thumbnailData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    generated.originalSize = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.thumbnailData = mutator_.mutateArray(this.thumbnailData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.originalSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.thumbnailData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.originalSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.thumbnailData = decoder.decodeArrayPointer(codec.Uint8);
    val.originalSize = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.thumbnailData);
    encoder.encodeStructPointer(geometry$.Size, val.originalSize);
  };
  function ChromeRenderFrame_ExecuteWebUIJavaScript_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.prototype.initDefaults_ = function() {
    this.javascript = null;
  };
  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.generate = function(generator_) {
    var generated = new ChromeRenderFrame_ExecuteWebUIJavaScript_Params;
    generated.javascript = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.javascript = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.validate = function(messageValidator, offset) {
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


    // validate ChromeRenderFrame_ExecuteWebUIJavaScript_Params.javascript
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_ExecuteWebUIJavaScript_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.javascript = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  ChromeRenderFrame_ExecuteWebUIJavaScript_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_ExecuteWebUIJavaScript_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.javascript);
  };
  function ChromeRenderFrame_SetClientSidePhishingDetection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_SetClientSidePhishingDetection_Params.prototype.initDefaults_ = function() {
    this.enablePhishingDetection = false;
  };
  ChromeRenderFrame_SetClientSidePhishingDetection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_SetClientSidePhishingDetection_Params.generate = function(generator_) {
    var generated = new ChromeRenderFrame_SetClientSidePhishingDetection_Params;
    generated.enablePhishingDetection = generator_.generateBool();
    return generated;
  };

  ChromeRenderFrame_SetClientSidePhishingDetection_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enablePhishingDetection = mutator_.mutateBool(this.enablePhishingDetection);
    }
    return this;
  };
  ChromeRenderFrame_SetClientSidePhishingDetection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_SetClientSidePhishingDetection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_SetClientSidePhishingDetection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_SetClientSidePhishingDetection_Params.validate = function(messageValidator, offset) {
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

  ChromeRenderFrame_SetClientSidePhishingDetection_Params.encodedSize = codec.kStructHeaderSize + 8;

  ChromeRenderFrame_SetClientSidePhishingDetection_Params.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_SetClientSidePhishingDetection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enablePhishingDetection = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ChromeRenderFrame_SetClientSidePhishingDetection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_SetClientSidePhishingDetection_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enablePhishingDetection & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ChromeRenderFrame_GetWebApplicationInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_GetWebApplicationInfo_Params.prototype.initDefaults_ = function() {
  };
  ChromeRenderFrame_GetWebApplicationInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_GetWebApplicationInfo_Params.generate = function(generator_) {
    var generated = new ChromeRenderFrame_GetWebApplicationInfo_Params;
    return generated;
  };

  ChromeRenderFrame_GetWebApplicationInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ChromeRenderFrame_GetWebApplicationInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_GetWebApplicationInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_GetWebApplicationInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_GetWebApplicationInfo_Params.validate = function(messageValidator, offset) {
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

  ChromeRenderFrame_GetWebApplicationInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  ChromeRenderFrame_GetWebApplicationInfo_Params.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_GetWebApplicationInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ChromeRenderFrame_GetWebApplicationInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_GetWebApplicationInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ChromeRenderFrame_GetWebApplicationInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.webApplicationInfo = null;
  };
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.generate = function(generator_) {
    var generated = new ChromeRenderFrame_GetWebApplicationInfo_ResponseParams;
    generated.webApplicationInfo = generator_.generateStruct(chrome.mojom.WebApplicationInfo, false);
    return generated;
  };

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.webApplicationInfo = mutator_.mutateStruct(chrome.mojom.WebApplicationInfo, false);
    }
    return this;
  };
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.webApplicationInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, WebApplicationInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ChromeRenderFrame_GetWebApplicationInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.webApplicationInfo = decoder.decodeStructPointer(WebApplicationInfo);
    return val;
  };

  ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(WebApplicationInfo, val.webApplicationInfo);
  };
  var kChromeRenderFrame_SetWindowFeatures_Name = 1719857011;
  var kChromeRenderFrame_RequestReloadImageForContextNode_Name = 1901190239;
  var kChromeRenderFrame_RequestThumbnailForContextNode_Name = 256419818;
  var kChromeRenderFrame_ExecuteWebUIJavaScript_Name = 771554986;
  var kChromeRenderFrame_SetClientSidePhishingDetection_Name = 8569112;
  var kChromeRenderFrame_GetWebApplicationInfo_Name = 663991205;

  function ChromeRenderFramePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ChromeRenderFrame,
                                                   handleOrPtrInfo);
  }

  function ChromeRenderFrameAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ChromeRenderFrame, associatedInterfacePtrInfo);
  }

  ChromeRenderFrameAssociatedPtr.prototype =
      Object.create(ChromeRenderFramePtr.prototype);
  ChromeRenderFrameAssociatedPtr.prototype.constructor =
      ChromeRenderFrameAssociatedPtr;

  function ChromeRenderFrameProxy(receiver) {
    this.receiver_ = receiver;
  }
  ChromeRenderFramePtr.prototype.setWindowFeatures = function() {
    return ChromeRenderFrameProxy.prototype.setWindowFeatures
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromeRenderFrameProxy.prototype.setWindowFeatures = function(windowFeatures) {
    var params_ = new ChromeRenderFrame_SetWindowFeatures_Params();
    params_.windowFeatures = windowFeatures;
    var builder = new codec.MessageV0Builder(
        kChromeRenderFrame_SetWindowFeatures_Name,
        codec.align(ChromeRenderFrame_SetWindowFeatures_Params.encodedSize));
    builder.encodeStruct(ChromeRenderFrame_SetWindowFeatures_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChromeRenderFramePtr.prototype.requestReloadImageForContextNode = function() {
    return ChromeRenderFrameProxy.prototype.requestReloadImageForContextNode
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromeRenderFrameProxy.prototype.requestReloadImageForContextNode = function() {
    var params_ = new ChromeRenderFrame_RequestReloadImageForContextNode_Params();
    var builder = new codec.MessageV0Builder(
        kChromeRenderFrame_RequestReloadImageForContextNode_Name,
        codec.align(ChromeRenderFrame_RequestReloadImageForContextNode_Params.encodedSize));
    builder.encodeStruct(ChromeRenderFrame_RequestReloadImageForContextNode_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChromeRenderFramePtr.prototype.requestThumbnailForContextNode = function() {
    return ChromeRenderFrameProxy.prototype.requestThumbnailForContextNode
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromeRenderFrameProxy.prototype.requestThumbnailForContextNode = function(thumbnailMinAreaPixels, thumbnailMaxSizePixels, imageFormat) {
    var params_ = new ChromeRenderFrame_RequestThumbnailForContextNode_Params();
    params_.thumbnailMinAreaPixels = thumbnailMinAreaPixels;
    params_.thumbnailMaxSizePixels = thumbnailMaxSizePixels;
    params_.imageFormat = imageFormat;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kChromeRenderFrame_RequestThumbnailForContextNode_Name,
          codec.align(ChromeRenderFrame_RequestThumbnailForContextNode_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ChromeRenderFrame_RequestThumbnailForContextNode_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ChromeRenderFramePtr.prototype.executeWebUIJavaScript = function() {
    return ChromeRenderFrameProxy.prototype.executeWebUIJavaScript
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromeRenderFrameProxy.prototype.executeWebUIJavaScript = function(javascript) {
    var params_ = new ChromeRenderFrame_ExecuteWebUIJavaScript_Params();
    params_.javascript = javascript;
    var builder = new codec.MessageV0Builder(
        kChromeRenderFrame_ExecuteWebUIJavaScript_Name,
        codec.align(ChromeRenderFrame_ExecuteWebUIJavaScript_Params.encodedSize));
    builder.encodeStruct(ChromeRenderFrame_ExecuteWebUIJavaScript_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChromeRenderFramePtr.prototype.setClientSidePhishingDetection = function() {
    return ChromeRenderFrameProxy.prototype.setClientSidePhishingDetection
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromeRenderFrameProxy.prototype.setClientSidePhishingDetection = function(enablePhishingDetection) {
    var params_ = new ChromeRenderFrame_SetClientSidePhishingDetection_Params();
    params_.enablePhishingDetection = enablePhishingDetection;
    var builder = new codec.MessageV0Builder(
        kChromeRenderFrame_SetClientSidePhishingDetection_Name,
        codec.align(ChromeRenderFrame_SetClientSidePhishingDetection_Params.encodedSize));
    builder.encodeStruct(ChromeRenderFrame_SetClientSidePhishingDetection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ChromeRenderFramePtr.prototype.getWebApplicationInfo = function() {
    return ChromeRenderFrameProxy.prototype.getWebApplicationInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  ChromeRenderFrameProxy.prototype.getWebApplicationInfo = function() {
    var params_ = new ChromeRenderFrame_GetWebApplicationInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kChromeRenderFrame_GetWebApplicationInfo_Name,
          codec.align(ChromeRenderFrame_GetWebApplicationInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ChromeRenderFrame_GetWebApplicationInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ChromeRenderFrameStub(delegate) {
    this.delegate_ = delegate;
  }
  ChromeRenderFrameStub.prototype.setWindowFeatures = function(windowFeatures) {
    return this.delegate_ && this.delegate_.setWindowFeatures && this.delegate_.setWindowFeatures(windowFeatures);
  }
  ChromeRenderFrameStub.prototype.requestReloadImageForContextNode = function() {
    return this.delegate_ && this.delegate_.requestReloadImageForContextNode && this.delegate_.requestReloadImageForContextNode();
  }
  ChromeRenderFrameStub.prototype.requestThumbnailForContextNode = function(thumbnailMinAreaPixels, thumbnailMaxSizePixels, imageFormat) {
    return this.delegate_ && this.delegate_.requestThumbnailForContextNode && this.delegate_.requestThumbnailForContextNode(thumbnailMinAreaPixels, thumbnailMaxSizePixels, imageFormat);
  }
  ChromeRenderFrameStub.prototype.executeWebUIJavaScript = function(javascript) {
    return this.delegate_ && this.delegate_.executeWebUIJavaScript && this.delegate_.executeWebUIJavaScript(javascript);
  }
  ChromeRenderFrameStub.prototype.setClientSidePhishingDetection = function(enablePhishingDetection) {
    return this.delegate_ && this.delegate_.setClientSidePhishingDetection && this.delegate_.setClientSidePhishingDetection(enablePhishingDetection);
  }
  ChromeRenderFrameStub.prototype.getWebApplicationInfo = function() {
    return this.delegate_ && this.delegate_.getWebApplicationInfo && this.delegate_.getWebApplicationInfo();
  }

  ChromeRenderFrameStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChromeRenderFrame_SetWindowFeatures_Name:
      var params = reader.decodeStruct(ChromeRenderFrame_SetWindowFeatures_Params);
      this.setWindowFeatures(params.windowFeatures);
      return true;
    case kChromeRenderFrame_RequestReloadImageForContextNode_Name:
      var params = reader.decodeStruct(ChromeRenderFrame_RequestReloadImageForContextNode_Params);
      this.requestReloadImageForContextNode();
      return true;
    case kChromeRenderFrame_ExecuteWebUIJavaScript_Name:
      var params = reader.decodeStruct(ChromeRenderFrame_ExecuteWebUIJavaScript_Params);
      this.executeWebUIJavaScript(params.javascript);
      return true;
    case kChromeRenderFrame_SetClientSidePhishingDetection_Name:
      var params = reader.decodeStruct(ChromeRenderFrame_SetClientSidePhishingDetection_Params);
      this.setClientSidePhishingDetection(params.enablePhishingDetection);
      return true;
    default:
      return false;
    }
  };

  ChromeRenderFrameStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kChromeRenderFrame_RequestThumbnailForContextNode_Name:
      var params = reader.decodeStruct(ChromeRenderFrame_RequestThumbnailForContextNode_Params);
      this.requestThumbnailForContextNode(params.thumbnailMinAreaPixels, params.thumbnailMaxSizePixels, params.imageFormat).then(function(response) {
        var responseParams =
            new ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams();
        responseParams.thumbnailData = response.thumbnailData;
        responseParams.originalSize = response.originalSize;
        var builder = new codec.MessageV1Builder(
            kChromeRenderFrame_RequestThumbnailForContextNode_Name,
            codec.align(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kChromeRenderFrame_GetWebApplicationInfo_Name:
      var params = reader.decodeStruct(ChromeRenderFrame_GetWebApplicationInfo_Params);
      this.getWebApplicationInfo().then(function(response) {
        var responseParams =
            new ChromeRenderFrame_GetWebApplicationInfo_ResponseParams();
        responseParams.webApplicationInfo = response.webApplicationInfo;
        var builder = new codec.MessageV1Builder(
            kChromeRenderFrame_GetWebApplicationInfo_Name,
            codec.align(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ChromeRenderFrame_GetWebApplicationInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateChromeRenderFrameRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kChromeRenderFrame_SetWindowFeatures_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChromeRenderFrame_SetWindowFeatures_Params;
      break;
      case kChromeRenderFrame_RequestReloadImageForContextNode_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChromeRenderFrame_RequestReloadImageForContextNode_Params;
      break;
      case kChromeRenderFrame_RequestThumbnailForContextNode_Name:
        if (message.expectsResponse())
          paramsClass = ChromeRenderFrame_RequestThumbnailForContextNode_Params;
      break;
      case kChromeRenderFrame_ExecuteWebUIJavaScript_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChromeRenderFrame_ExecuteWebUIJavaScript_Params;
      break;
      case kChromeRenderFrame_SetClientSidePhishingDetection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ChromeRenderFrame_SetClientSidePhishingDetection_Params;
      break;
      case kChromeRenderFrame_GetWebApplicationInfo_Name:
        if (message.expectsResponse())
          paramsClass = ChromeRenderFrame_GetWebApplicationInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateChromeRenderFrameResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kChromeRenderFrame_RequestThumbnailForContextNode_Name:
        if (message.isResponse())
          paramsClass = ChromeRenderFrame_RequestThumbnailForContextNode_ResponseParams;
        break;
      case kChromeRenderFrame_GetWebApplicationInfo_Name:
        if (message.isResponse())
          paramsClass = ChromeRenderFrame_GetWebApplicationInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ChromeRenderFrame = {
    name: 'chrome.mojom.ChromeRenderFrame',
    kVersion: 0,
    ptrClass: ChromeRenderFramePtr,
    proxyClass: ChromeRenderFrameProxy,
    stubClass: ChromeRenderFrameStub,
    validateRequest: validateChromeRenderFrameRequest,
    validateResponse: validateChromeRenderFrameResponse,
    mojomId: 'chrome/common/chrome_render_frame.mojom',
    fuzzMethods: {
      setWindowFeatures: {
        params: ChromeRenderFrame_SetWindowFeatures_Params,
      },
      requestReloadImageForContextNode: {
        params: ChromeRenderFrame_RequestReloadImageForContextNode_Params,
      },
      requestThumbnailForContextNode: {
        params: ChromeRenderFrame_RequestThumbnailForContextNode_Params,
      },
      executeWebUIJavaScript: {
        params: ChromeRenderFrame_ExecuteWebUIJavaScript_Params,
      },
      setClientSidePhishingDetection: {
        params: ChromeRenderFrame_SetClientSidePhishingDetection_Params,
      },
      getWebApplicationInfo: {
        params: ChromeRenderFrame_GetWebApplicationInfo_Params,
      },
    },
  };
  ChromeRenderFrameStub.prototype.validator = validateChromeRenderFrameRequest;
  ChromeRenderFrameProxy.prototype.validator = validateChromeRenderFrameResponse;
  exports.ImageFormat = ImageFormat;
  exports.BrowserControlsState = BrowserControlsState;
  exports.WebApplicationInfo = WebApplicationInfo;
  exports.ChromeRenderFrame = ChromeRenderFrame;
  exports.ChromeRenderFramePtr = ChromeRenderFramePtr;
  exports.ChromeRenderFrameAssociatedPtr = ChromeRenderFrameAssociatedPtr;
})();