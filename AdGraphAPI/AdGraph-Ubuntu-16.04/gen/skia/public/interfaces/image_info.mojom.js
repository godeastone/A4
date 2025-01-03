// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'skia/public/interfaces/image_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('skia.mojom');


  var ColorType = {};
  ColorType.UNKNOWN = 0;
  ColorType.ALPHA_8 = ColorType.UNKNOWN + 1;
  ColorType.RGB_565 = ColorType.ALPHA_8 + 1;
  ColorType.ARGB_4444 = ColorType.RGB_565 + 1;
  ColorType.RGBA_8888 = ColorType.ARGB_4444 + 1;
  ColorType.BGRA_8888 = ColorType.RGBA_8888 + 1;
  ColorType.INDEX_8 = ColorType.BGRA_8888 + 1;
  ColorType.GRAY_8 = ColorType.INDEX_8 + 1;

  ColorType.isKnownEnumValue = function(value) {
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

  ColorType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var AlphaType = {};
  AlphaType.UNKNOWN = 0;
  AlphaType.ALPHA_TYPE_OPAQUE = AlphaType.UNKNOWN + 1;
  AlphaType.PREMUL = AlphaType.ALPHA_TYPE_OPAQUE + 1;
  AlphaType.UNPREMUL = AlphaType.PREMUL + 1;

  AlphaType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  AlphaType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ColorProfileType = {};
  ColorProfileType.LINEAR = 0;
  ColorProfileType.SRGB = ColorProfileType.LINEAR + 1;

  ColorProfileType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ColorProfileType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ImageInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageInfo.prototype.initDefaults_ = function() {
    this.colorType = 0;
    this.alphaType = 0;
    this.profileType = 0;
    this.width = 0;
    this.height = 0;
  };
  ImageInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageInfo.generate = function(generator_) {
    var generated = new ImageInfo;
    generated.colorType = generator_.generateEnum(0, 7);
    generated.alphaType = generator_.generateEnum(0, 3);
    generated.profileType = generator_.generateEnum(0, 1);
    generated.width = generator_.generateUint32();
    generated.height = generator_.generateUint32();
    return generated;
  };

  ImageInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.colorType = mutator_.mutateEnum(this.colorType, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.alphaType = mutator_.mutateEnum(this.alphaType, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.profileType = mutator_.mutateEnum(this.profileType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateUint32(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateUint32(this.height);
    }
    return this;
  };
  ImageInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImageInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImageInfo.validate = function(messageValidator, offset) {
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


    // validate ImageInfo.colorType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ColorType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ImageInfo.alphaType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, AlphaType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ImageInfo.profileType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ColorProfileType);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ImageInfo.encodedSize = codec.kStructHeaderSize + 24;

  ImageInfo.decode = function(decoder) {
    var packed;
    var val = new ImageInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.colorType = decoder.decodeStruct(codec.Int32);
    val.alphaType = decoder.decodeStruct(codec.Int32);
    val.profileType = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Uint32);
    val.height = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ImageInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.colorType);
    encoder.encodeStruct(codec.Int32, val.alphaType);
    encoder.encodeStruct(codec.Int32, val.profileType);
    encoder.encodeStruct(codec.Uint32, val.width);
    encoder.encodeStruct(codec.Uint32, val.height);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.ColorType = ColorType;
  exports.AlphaType = AlphaType;
  exports.ColorProfileType = ColorProfileType;
  exports.ImageInfo = ImageInfo;
})();