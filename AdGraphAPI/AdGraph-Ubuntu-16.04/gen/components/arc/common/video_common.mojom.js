// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/arc/common/video_common.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('arc.mojom');


  var VideoCodecProfile = {};
  VideoCodecProfile.VIDEO_CODEC_PROFILE_UNKNOWN = -1;
  VideoCodecProfile.VIDEO_CODEC_PROFILE_MIN = VideoCodecProfile.VIDEO_CODEC_PROFILE_UNKNOWN;
  VideoCodecProfile.H264PROFILE_MIN = 0;
  VideoCodecProfile.H264PROFILE_BASELINE = VideoCodecProfile.H264PROFILE_MIN;
  VideoCodecProfile.H264PROFILE_MAIN = 1;
  VideoCodecProfile.H264PROFILE_EXTENDED = 2;
  VideoCodecProfile.H264PROFILE_HIGH = 3;
  VideoCodecProfile.H264PROFILE_HIGH10PROFILE = 4;
  VideoCodecProfile.H264PROFILE_HIGH422PROFILE = 5;
  VideoCodecProfile.H264PROFILE_HIGH444PREDICTIVEPROFILE = 6;
  VideoCodecProfile.H264PROFILE_SCALABLEBASELINE = 7;
  VideoCodecProfile.H264PROFILE_SCALABLEHIGH = 8;
  VideoCodecProfile.H264PROFILE_STEREOHIGH = 9;
  VideoCodecProfile.H264PROFILE_MULTIVIEWHIGH = 10;
  VideoCodecProfile.H264PROFILE_MAX = VideoCodecProfile.H264PROFILE_MULTIVIEWHIGH;
  VideoCodecProfile.VP8PROFILE_MIN = 11;
  VideoCodecProfile.VP8PROFILE_ANY = VideoCodecProfile.VP8PROFILE_MIN;
  VideoCodecProfile.VP8PROFILE_MAX = VideoCodecProfile.VP8PROFILE_ANY;
  VideoCodecProfile.VP9PROFILE_MIN = 12;
  VideoCodecProfile.VP9PROFILE_PROFILE0 = VideoCodecProfile.VP9PROFILE_MIN;
  VideoCodecProfile.VP9PROFILE_PROFILE1 = 13;
  VideoCodecProfile.VP9PROFILE_PROFILE2 = 14;
  VideoCodecProfile.VP9PROFILE_PROFILE3 = 15;
  VideoCodecProfile.VP9PROFILE_MAX = VideoCodecProfile.VP9PROFILE_PROFILE3;
  VideoCodecProfile.HEVCPROFILE_MIN = 16;
  VideoCodecProfile.HEVCPROFILE_MAIN = VideoCodecProfile.HEVCPROFILE_MIN;
  VideoCodecProfile.HEVCPROFILE_MAIN10 = 17;
  VideoCodecProfile.HEVCPROFILE_MAIN_STILL_PICTURE = 18;
  VideoCodecProfile.HEVCPROFILE_MAX = VideoCodecProfile.HEVCPROFILE_MAIN_STILL_PICTURE;
  VideoCodecProfile.DOLBYVISION_MIN = 19;
  VideoCodecProfile.DOLBYVISION_PROFILE0 = VideoCodecProfile.DOLBYVISION_MIN;
  VideoCodecProfile.DOLBYVISION_PROFILE4 = 20;
  VideoCodecProfile.DOLBYVISION_PROFILE5 = 21;
  VideoCodecProfile.DOLBYVISION_PROFILE7 = 22;
  VideoCodecProfile.DOLBYVISION_MAX = VideoCodecProfile.DOLBYVISION_PROFILE7;
  VideoCodecProfile.THEORAPROFILE_MIN = 23;
  VideoCodecProfile.THEORAPROFILE_ANY = VideoCodecProfile.THEORAPROFILE_MIN;
  VideoCodecProfile.THEORAPROFILE_MAX = VideoCodecProfile.THEORAPROFILE_ANY;
  VideoCodecProfile.AV1PROFILE_MIN = 24;
  VideoCodecProfile.AV1PROFILE_PROFILE0 = VideoCodecProfile.AV1PROFILE_MIN;
  VideoCodecProfile.AV1PROFILE_MAX = VideoCodecProfile.AV1PROFILE_PROFILE0;
  VideoCodecProfile.VIDEO_CODEC_PROFILE_MAX = VideoCodecProfile.AV1PROFILE_PROFILE0;

  VideoCodecProfile.isKnownEnumValue = function(value) {
    switch (value) {
    case -1:
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
      return true;
    }
    return false;
  };

  VideoCodecProfile.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var HalPixelFormat = {};
  HalPixelFormat.HAL_PIXEL_FORMAT_BGRA_8888 = 5;
  HalPixelFormat.HAL_PIXEL_FORMAT_YCbCr_420_888 = 0x23;
  HalPixelFormat.HAL_PIXEL_FORMAT_YV12 = 0x32315659;
  HalPixelFormat.HAL_PIXEL_FORMAT_NV12 = 0x3231564e;

  HalPixelFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 5:
    case 35:
    case 842094158:
    case 842094169:
      return true;
    }
    return false;
  };

  HalPixelFormat.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function VideoFramePlane(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoFramePlane.prototype.initDefaults_ = function() {
    this.offset = 0;
    this.stride = 0;
  };
  VideoFramePlane.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  VideoFramePlane.generate = function(generator_) {
    var generated = new VideoFramePlane;
    generated.offset = generator_.generateInt32();
    generated.stride = generator_.generateInt32();
    return generated;
  };

  VideoFramePlane.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateInt32(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.stride = mutator_.mutateInt32(this.stride);
    }
    return this;
  };
  VideoFramePlane.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  VideoFramePlane.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  VideoFramePlane.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  VideoFramePlane.validate = function(messageValidator, offset) {
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

  VideoFramePlane.encodedSize = codec.kStructHeaderSize + 8;

  VideoFramePlane.decode = function(decoder) {
    var packed;
    var val = new VideoFramePlane();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.offset = decoder.decodeStruct(codec.Int32);
    val.stride = decoder.decodeStruct(codec.Int32);
    return val;
  };

  VideoFramePlane.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoFramePlane.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.offset);
    encoder.encodeStruct(codec.Int32, val.stride);
  };
  function Size(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Size.prototype.initDefaults_ = function() {
    this.width = 0;
    this.height = 0;
  };
  Size.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Size.generate = function(generator_) {
    var generated = new Size;
    generated.width = generator_.generateInt32();
    generated.height = generator_.generateInt32();
    return generated;
  };

  Size.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateInt32(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateInt32(this.height);
    }
    return this;
  };
  Size.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Size.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Size.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Size.validate = function(messageValidator, offset) {
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

  Size.encodedSize = codec.kStructHeaderSize + 8;

  Size.decode = function(decoder) {
    var packed;
    var val = new Size();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Size.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Size.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };
  exports.VideoCodecProfile = VideoCodecProfile;
  exports.HalPixelFormat = HalPixelFormat;
  exports.VideoFramePlane = VideoFramePlane;
  exports.Size = Size;
})();