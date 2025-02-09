// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/services/media_gallery_util/public/mojom/media_parser.mojom';
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
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../../mojo/public/mojom/base/values.mojom.js');
  }



  function MediaStreamInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaStreamInfo.prototype.initDefaults_ = function() {
    this.type = null;
    this.additionalProperties = null;
  };
  MediaStreamInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaStreamInfo.generate = function(generator_) {
    var generated = new MediaStreamInfo;
    generated.type = generator_.generateString(false);
    generated.additionalProperties = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    return generated;
  };

  MediaStreamInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    if (mutator_.chooseMutateField()) {
      this.additionalProperties = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    return this;
  };
  MediaStreamInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaStreamInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaStreamInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaStreamInfo.validate = function(messageValidator, offset) {
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


    // validate MediaStreamInfo.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaStreamInfo.additionalProperties
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaStreamInfo.encodedSize = codec.kStructHeaderSize + 16;

  MediaStreamInfo.decode = function(decoder) {
    var packed;
    var val = new MediaStreamInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.String);
    val.additionalProperties = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  MediaStreamInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaStreamInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeStructPointer(values$.DictionaryValue, val.additionalProperties);
  };
  function MediaMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaMetadata.prototype.initDefaults_ = function() {
    this.mimeType = null;
    this.height = -1;
    this.width = -1;
    this.duration = -1;
    this.rotation = 0;
    this.disc = -1;
    this.album = null;
    this.artist = null;
    this.comment = null;
    this.copyright = null;
    this.genre = null;
    this.language = null;
    this.title = null;
    this.track = -1;
    this.rawTags = null;
  };
  MediaMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaMetadata.generate = function(generator_) {
    var generated = new MediaMetadata;
    generated.mimeType = generator_.generateString(false);
    generated.height = generator_.generateInt32();
    generated.width = generator_.generateInt32();
    generated.duration = generator_.generateDouble();
    generated.rotation = generator_.generateInt32();
    generated.album = generator_.generateString(false);
    generated.artist = generator_.generateString(false);
    generated.comment = generator_.generateString(false);
    generated.copyright = generator_.generateString(false);
    generated.disc = generator_.generateInt32();
    generated.genre = generator_.generateString(false);
    generated.language = generator_.generateString(false);
    generated.title = generator_.generateString(false);
    generated.track = generator_.generateInt32();
    generated.rawTags = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.MediaStreamInfo, false);
    });
    return generated;
  };

  MediaMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateString(this.mimeType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.height = mutator_.mutateInt32(this.height);
    }
    if (mutator_.chooseMutateField()) {
      this.width = mutator_.mutateInt32(this.width);
    }
    if (mutator_.chooseMutateField()) {
      this.duration = mutator_.mutateDouble(this.duration);
    }
    if (mutator_.chooseMutateField()) {
      this.rotation = mutator_.mutateInt32(this.rotation);
    }
    if (mutator_.chooseMutateField()) {
      this.album = mutator_.mutateString(this.album, false);
    }
    if (mutator_.chooseMutateField()) {
      this.artist = mutator_.mutateString(this.artist, false);
    }
    if (mutator_.chooseMutateField()) {
      this.comment = mutator_.mutateString(this.comment, false);
    }
    if (mutator_.chooseMutateField()) {
      this.copyright = mutator_.mutateString(this.copyright, false);
    }
    if (mutator_.chooseMutateField()) {
      this.disc = mutator_.mutateInt32(this.disc);
    }
    if (mutator_.chooseMutateField()) {
      this.genre = mutator_.mutateString(this.genre, false);
    }
    if (mutator_.chooseMutateField()) {
      this.language = mutator_.mutateString(this.language, false);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    if (mutator_.chooseMutateField()) {
      this.track = mutator_.mutateInt32(this.track);
    }
    if (mutator_.chooseMutateField()) {
      this.rawTags = mutator_.mutateArray(this.rawTags, function(val) {
        return mutator_.mutateStruct(chrome.mojom.MediaStreamInfo, false);
      });
    }
    return this;
  };
  MediaMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaMetadata.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 112}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;






    // validate MediaMetadata.album
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.artist
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.comment
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.copyright
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 56, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate MediaMetadata.genre
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.language
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 72, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaMetadata.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 80, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate MediaMetadata.rawTags
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 96, 8, new codec.PointerTo(MediaStreamInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaMetadata.encodedSize = codec.kStructHeaderSize + 104;

  MediaMetadata.decode = function(decoder) {
    var packed;
    var val = new MediaMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mimeType = decoder.decodeStruct(codec.String);
    val.height = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Int32);
    val.duration = decoder.decodeStruct(codec.Double);
    val.rotation = decoder.decodeStruct(codec.Int32);
    val.disc = decoder.decodeStruct(codec.Int32);
    val.album = decoder.decodeStruct(codec.String);
    val.artist = decoder.decodeStruct(codec.String);
    val.comment = decoder.decodeStruct(codec.String);
    val.copyright = decoder.decodeStruct(codec.String);
    val.genre = decoder.decodeStruct(codec.String);
    val.language = decoder.decodeStruct(codec.String);
    val.title = decoder.decodeStruct(codec.String);
    val.track = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.rawTags = decoder.decodeArrayPointer(new codec.PointerTo(MediaStreamInfo));
    return val;
  };

  MediaMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mimeType);
    encoder.encodeStruct(codec.Int32, val.height);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Double, val.duration);
    encoder.encodeStruct(codec.Int32, val.rotation);
    encoder.encodeStruct(codec.Int32, val.disc);
    encoder.encodeStruct(codec.String, val.album);
    encoder.encodeStruct(codec.String, val.artist);
    encoder.encodeStruct(codec.String, val.comment);
    encoder.encodeStruct(codec.String, val.copyright);
    encoder.encodeStruct(codec.String, val.genre);
    encoder.encodeStruct(codec.String, val.language);
    encoder.encodeStruct(codec.String, val.title);
    encoder.encodeStruct(codec.Int32, val.track);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(MediaStreamInfo), val.rawTags);
  };
  function AttachedImage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AttachedImage.prototype.initDefaults_ = function() {
    this.type = null;
    this.data = null;
  };
  AttachedImage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AttachedImage.generate = function(generator_) {
    var generated = new AttachedImage;
    generated.type = generator_.generateString(false);
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  AttachedImage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  AttachedImage.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AttachedImage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AttachedImage.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AttachedImage.validate = function(messageValidator, offset) {
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


    // validate AttachedImage.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AttachedImage.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AttachedImage.encodedSize = codec.kStructHeaderSize + 16;

  AttachedImage.decode = function(decoder) {
    var packed;
    var val = new AttachedImage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.String);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  AttachedImage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AttachedImage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function MediaParser_ParseMediaMetadata_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParser_ParseMediaMetadata_Params.prototype.initDefaults_ = function() {
    this.mimeType = null;
    this.totalSize = 0;
    this.getAttachedImages = false;
    this.mediaDataSource = new MediaDataSourcePtr();
  };
  MediaParser_ParseMediaMetadata_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParser_ParseMediaMetadata_Params.generate = function(generator_) {
    var generated = new MediaParser_ParseMediaMetadata_Params;
    generated.mimeType = generator_.generateString(false);
    generated.totalSize = generator_.generateInt64();
    generated.getAttachedImages = generator_.generateBool();
    generated.mediaDataSource = generator_.generateInterface("chrome.mojom.MediaDataSource", false);
    return generated;
  };

  MediaParser_ParseMediaMetadata_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateString(this.mimeType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.totalSize = mutator_.mutateInt64(this.totalSize);
    }
    if (mutator_.chooseMutateField()) {
      this.getAttachedImages = mutator_.mutateBool(this.getAttachedImages);
    }
    if (mutator_.chooseMutateField()) {
      this.mediaDataSource = mutator_.mutateInterface(this.mediaDataSource, "chrome.mojom.MediaDataSource", false);
    }
    return this;
  };
  MediaParser_ParseMediaMetadata_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.mediaDataSource !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.MediaDataSourcePtr"]);
    }
    return handles;
  };

  MediaParser_ParseMediaMetadata_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParser_ParseMediaMetadata_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.mediaDataSource = handles[idx++];;
    return idx;
  };

  MediaParser_ParseMediaMetadata_Params.validate = function(messageValidator, offset) {
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


    // validate MediaParser_ParseMediaMetadata_Params.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate MediaParser_ParseMediaMetadata_Params.mediaDataSource
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 20, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaParser_ParseMediaMetadata_Params.encodedSize = codec.kStructHeaderSize + 32;

  MediaParser_ParseMediaMetadata_Params.decode = function(decoder) {
    var packed;
    var val = new MediaParser_ParseMediaMetadata_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mimeType = decoder.decodeStruct(codec.String);
    val.totalSize = decoder.decodeStruct(codec.Int64);
    packed = decoder.readUint8();
    val.getAttachedImages = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mediaDataSource = decoder.decodeStruct(new codec.Interface(MediaDataSourcePtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaParser_ParseMediaMetadata_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParser_ParseMediaMetadata_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mimeType);
    encoder.encodeStruct(codec.Int64, val.totalSize);
    packed = 0;
    packed |= (val.getAttachedImages & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(new codec.Interface(MediaDataSourcePtr), val.mediaDataSource);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaParser_ParseMediaMetadata_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParser_ParseMediaMetadata_ResponseParams.prototype.initDefaults_ = function() {
    this.parseSuccess = false;
    this.metadata = null;
    this.attachedImages = null;
  };
  MediaParser_ParseMediaMetadata_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParser_ParseMediaMetadata_ResponseParams.generate = function(generator_) {
    var generated = new MediaParser_ParseMediaMetadata_ResponseParams;
    generated.parseSuccess = generator_.generateBool();
    generated.metadata = generator_.generateStruct(chrome.mojom.MediaMetadata, false);
    generated.attachedImages = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.AttachedImage, false);
    });
    return generated;
  };

  MediaParser_ParseMediaMetadata_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.parseSuccess = mutator_.mutateBool(this.parseSuccess);
    }
    if (mutator_.chooseMutateField()) {
      this.metadata = mutator_.mutateStruct(chrome.mojom.MediaMetadata, false);
    }
    if (mutator_.chooseMutateField()) {
      this.attachedImages = mutator_.mutateArray(this.attachedImages, function(val) {
        return mutator_.mutateStruct(chrome.mojom.AttachedImage, false);
      });
    }
    return this;
  };
  MediaParser_ParseMediaMetadata_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaParser_ParseMediaMetadata_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParser_ParseMediaMetadata_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaParser_ParseMediaMetadata_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate MediaParser_ParseMediaMetadata_ResponseParams.metadata
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, MediaMetadata, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaParser_ParseMediaMetadata_ResponseParams.attachedImages
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(AttachedImage), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaParser_ParseMediaMetadata_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  MediaParser_ParseMediaMetadata_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaParser_ParseMediaMetadata_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.parseSuccess = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.metadata = decoder.decodeStructPointer(MediaMetadata);
    val.attachedImages = decoder.decodeArrayPointer(new codec.PointerTo(AttachedImage));
    return val;
  };

  MediaParser_ParseMediaMetadata_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParser_ParseMediaMetadata_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.parseSuccess & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(MediaMetadata, val.metadata);
    encoder.encodeArrayPointer(new codec.PointerTo(AttachedImage), val.attachedImages);
  };
  function MediaParser_CheckMediaFile_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParser_CheckMediaFile_Params.prototype.initDefaults_ = function() {
    this.decodeTime = null;
    this.file = null;
  };
  MediaParser_CheckMediaFile_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParser_CheckMediaFile_Params.generate = function(generator_) {
    var generated = new MediaParser_CheckMediaFile_Params;
    generated.decodeTime = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.file = generator_.generateStruct(mojoBase.mojom.File, false);
    return generated;
  };

  MediaParser_CheckMediaFile_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.decodeTime = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.file = mutator_.mutateStruct(mojoBase.mojom.File, false);
    }
    return this;
  };
  MediaParser_CheckMediaFile_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.file !== null) {
      Array.prototype.push.apply(handles, this.file.getHandleDeps());
    }
    return handles;
  };

  MediaParser_CheckMediaFile_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParser_CheckMediaFile_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.file.setHandlesInternal_(handles, idx);
    return idx;
  };

  MediaParser_CheckMediaFile_Params.validate = function(messageValidator, offset) {
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


    // validate MediaParser_CheckMediaFile_Params.decodeTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaParser_CheckMediaFile_Params.file
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaParser_CheckMediaFile_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaParser_CheckMediaFile_Params.decode = function(decoder) {
    var packed;
    var val = new MediaParser_CheckMediaFile_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.decodeTime = decoder.decodeStructPointer(time$.TimeDelta);
    val.file = decoder.decodeStructPointer(file$.File);
    return val;
  };

  MediaParser_CheckMediaFile_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParser_CheckMediaFile_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeDelta, val.decodeTime);
    encoder.encodeStructPointer(file$.File, val.file);
  };
  function MediaParser_CheckMediaFile_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParser_CheckMediaFile_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  MediaParser_CheckMediaFile_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParser_CheckMediaFile_ResponseParams.generate = function(generator_) {
    var generated = new MediaParser_CheckMediaFile_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  MediaParser_CheckMediaFile_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  MediaParser_CheckMediaFile_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaParser_CheckMediaFile_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParser_CheckMediaFile_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaParser_CheckMediaFile_ResponseParams.validate = function(messageValidator, offset) {
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

  MediaParser_CheckMediaFile_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaParser_CheckMediaFile_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaParser_CheckMediaFile_ResponseParams();
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

  MediaParser_CheckMediaFile_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParser_CheckMediaFile_ResponseParams.encodedSize);
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
  function MediaParser_GetCpuInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParser_GetCpuInfo_Params.prototype.initDefaults_ = function() {
  };
  MediaParser_GetCpuInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParser_GetCpuInfo_Params.generate = function(generator_) {
    var generated = new MediaParser_GetCpuInfo_Params;
    return generated;
  };

  MediaParser_GetCpuInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  MediaParser_GetCpuInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaParser_GetCpuInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParser_GetCpuInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaParser_GetCpuInfo_Params.validate = function(messageValidator, offset) {
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

  MediaParser_GetCpuInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaParser_GetCpuInfo_Params.decode = function(decoder) {
    var packed;
    var val = new MediaParser_GetCpuInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaParser_GetCpuInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParser_GetCpuInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaParser_GetCpuInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParser_GetCpuInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.libyuvCpuFlags = 0;
    this.ffmpegCpuFlags = 0;
  };
  MediaParser_GetCpuInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParser_GetCpuInfo_ResponseParams.generate = function(generator_) {
    var generated = new MediaParser_GetCpuInfo_ResponseParams;
    generated.libyuvCpuFlags = generator_.generateInt64();
    generated.ffmpegCpuFlags = generator_.generateInt64();
    return generated;
  };

  MediaParser_GetCpuInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.libyuvCpuFlags = mutator_.mutateInt64(this.libyuvCpuFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.ffmpegCpuFlags = mutator_.mutateInt64(this.ffmpegCpuFlags);
    }
    return this;
  };
  MediaParser_GetCpuInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaParser_GetCpuInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParser_GetCpuInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaParser_GetCpuInfo_ResponseParams.validate = function(messageValidator, offset) {
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

  MediaParser_GetCpuInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaParser_GetCpuInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaParser_GetCpuInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.libyuvCpuFlags = decoder.decodeStruct(codec.Int64);
    val.ffmpegCpuFlags = decoder.decodeStruct(codec.Int64);
    return val;
  };

  MediaParser_GetCpuInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParser_GetCpuInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.libyuvCpuFlags);
    encoder.encodeStruct(codec.Int64, val.ffmpegCpuFlags);
  };
  function MediaParserFactory_CreateMediaParser_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParserFactory_CreateMediaParser_Params.prototype.initDefaults_ = function() {
    this.libyuvCpuFlags = 0;
    this.libavutilCpuFlags = 0;
  };
  MediaParserFactory_CreateMediaParser_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParserFactory_CreateMediaParser_Params.generate = function(generator_) {
    var generated = new MediaParserFactory_CreateMediaParser_Params;
    generated.libyuvCpuFlags = generator_.generateInt64();
    generated.libavutilCpuFlags = generator_.generateInt64();
    return generated;
  };

  MediaParserFactory_CreateMediaParser_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.libyuvCpuFlags = mutator_.mutateInt64(this.libyuvCpuFlags);
    }
    if (mutator_.chooseMutateField()) {
      this.libavutilCpuFlags = mutator_.mutateInt64(this.libavutilCpuFlags);
    }
    return this;
  };
  MediaParserFactory_CreateMediaParser_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaParserFactory_CreateMediaParser_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParserFactory_CreateMediaParser_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaParserFactory_CreateMediaParser_Params.validate = function(messageValidator, offset) {
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

  MediaParserFactory_CreateMediaParser_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaParserFactory_CreateMediaParser_Params.decode = function(decoder) {
    var packed;
    var val = new MediaParserFactory_CreateMediaParser_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.libyuvCpuFlags = decoder.decodeStruct(codec.Int64);
    val.libavutilCpuFlags = decoder.decodeStruct(codec.Int64);
    return val;
  };

  MediaParserFactory_CreateMediaParser_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParserFactory_CreateMediaParser_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.libyuvCpuFlags);
    encoder.encodeStruct(codec.Int64, val.libavutilCpuFlags);
  };
  function MediaParserFactory_CreateMediaParser_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaParserFactory_CreateMediaParser_ResponseParams.prototype.initDefaults_ = function() {
    this.mediaParser = new MediaParserPtr();
  };
  MediaParserFactory_CreateMediaParser_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaParserFactory_CreateMediaParser_ResponseParams.generate = function(generator_) {
    var generated = new MediaParserFactory_CreateMediaParser_ResponseParams;
    generated.mediaParser = generator_.generateInterface("chrome.mojom.MediaParser", false);
    return generated;
  };

  MediaParserFactory_CreateMediaParser_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mediaParser = mutator_.mutateInterface(this.mediaParser, "chrome.mojom.MediaParser", false);
    }
    return this;
  };
  MediaParserFactory_CreateMediaParser_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.mediaParser !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.MediaParserPtr"]);
    }
    return handles;
  };

  MediaParserFactory_CreateMediaParser_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaParserFactory_CreateMediaParser_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.mediaParser = handles[idx++];;
    return idx;
  };

  MediaParserFactory_CreateMediaParser_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaParserFactory_CreateMediaParser_ResponseParams.mediaParser
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaParserFactory_CreateMediaParser_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaParserFactory_CreateMediaParser_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaParserFactory_CreateMediaParser_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediaParser = decoder.decodeStruct(new codec.Interface(MediaParserPtr));
    return val;
  };

  MediaParserFactory_CreateMediaParser_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaParserFactory_CreateMediaParser_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(MediaParserPtr), val.mediaParser);
  };
  function MediaDataSource_Read_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDataSource_Read_Params.prototype.initDefaults_ = function() {
    this.position = 0;
    this.length = 0;
  };
  MediaDataSource_Read_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDataSource_Read_Params.generate = function(generator_) {
    var generated = new MediaDataSource_Read_Params;
    generated.position = generator_.generateInt64();
    generated.length = generator_.generateInt64();
    return generated;
  };

  MediaDataSource_Read_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.position = mutator_.mutateInt64(this.position);
    }
    if (mutator_.chooseMutateField()) {
      this.length = mutator_.mutateInt64(this.length);
    }
    return this;
  };
  MediaDataSource_Read_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDataSource_Read_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDataSource_Read_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDataSource_Read_Params.validate = function(messageValidator, offset) {
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

  MediaDataSource_Read_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaDataSource_Read_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDataSource_Read_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.position = decoder.decodeStruct(codec.Int64);
    val.length = decoder.decodeStruct(codec.Int64);
    return val;
  };

  MediaDataSource_Read_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDataSource_Read_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.position);
    encoder.encodeStruct(codec.Int64, val.length);
  };
  function MediaDataSource_Read_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDataSource_Read_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
  };
  MediaDataSource_Read_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDataSource_Read_ResponseParams.generate = function(generator_) {
    var generated = new MediaDataSource_Read_ResponseParams;
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  MediaDataSource_Read_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  MediaDataSource_Read_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDataSource_Read_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDataSource_Read_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDataSource_Read_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate MediaDataSource_Read_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDataSource_Read_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDataSource_Read_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDataSource_Read_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  MediaDataSource_Read_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDataSource_Read_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  var kMediaParser_ParseMediaMetadata_Name = 1892145261;
  var kMediaParser_CheckMediaFile_Name = 1214868700;
  var kMediaParser_GetCpuInfo_Name = 1686191116;

  function MediaParserPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaParser,
                                                   handleOrPtrInfo);
  }

  function MediaParserAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaParser, associatedInterfacePtrInfo);
  }

  MediaParserAssociatedPtr.prototype =
      Object.create(MediaParserPtr.prototype);
  MediaParserAssociatedPtr.prototype.constructor =
      MediaParserAssociatedPtr;

  function MediaParserProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaParserPtr.prototype.parseMediaMetadata = function() {
    return MediaParserProxy.prototype.parseMediaMetadata
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaParserProxy.prototype.parseMediaMetadata = function(mimeType, totalSize, getAttachedImages, mediaDataSource) {
    var params_ = new MediaParser_ParseMediaMetadata_Params();
    params_.mimeType = mimeType;
    params_.totalSize = totalSize;
    params_.getAttachedImages = getAttachedImages;
    params_.mediaDataSource = mediaDataSource;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaParser_ParseMediaMetadata_Name,
          codec.align(MediaParser_ParseMediaMetadata_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaParser_ParseMediaMetadata_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaParser_ParseMediaMetadata_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaParserPtr.prototype.checkMediaFile = function() {
    return MediaParserProxy.prototype.checkMediaFile
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaParserProxy.prototype.checkMediaFile = function(decodeTime, file) {
    var params_ = new MediaParser_CheckMediaFile_Params();
    params_.decodeTime = decodeTime;
    params_.file = file;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaParser_CheckMediaFile_Name,
          codec.align(MediaParser_CheckMediaFile_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaParser_CheckMediaFile_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaParser_CheckMediaFile_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaParserPtr.prototype.getCpuInfo = function() {
    return MediaParserProxy.prototype.getCpuInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaParserProxy.prototype.getCpuInfo = function() {
    var params_ = new MediaParser_GetCpuInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaParser_GetCpuInfo_Name,
          codec.align(MediaParser_GetCpuInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaParser_GetCpuInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaParser_GetCpuInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaParserStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaParserStub.prototype.parseMediaMetadata = function(mimeType, totalSize, getAttachedImages, mediaDataSource) {
    return this.delegate_ && this.delegate_.parseMediaMetadata && this.delegate_.parseMediaMetadata(mimeType, totalSize, getAttachedImages, mediaDataSource);
  }
  MediaParserStub.prototype.checkMediaFile = function(decodeTime, file) {
    return this.delegate_ && this.delegate_.checkMediaFile && this.delegate_.checkMediaFile(decodeTime, file);
  }
  MediaParserStub.prototype.getCpuInfo = function() {
    return this.delegate_ && this.delegate_.getCpuInfo && this.delegate_.getCpuInfo();
  }

  MediaParserStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MediaParserStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaParser_ParseMediaMetadata_Name:
      var params = reader.decodeStruct(MediaParser_ParseMediaMetadata_Params);
      this.parseMediaMetadata(params.mimeType, params.totalSize, params.getAttachedImages, params.mediaDataSource).then(function(response) {
        var responseParams =
            new MediaParser_ParseMediaMetadata_ResponseParams();
        responseParams.parseSuccess = response.parseSuccess;
        responseParams.metadata = response.metadata;
        responseParams.attachedImages = response.attachedImages;
        var builder = new codec.MessageV1Builder(
            kMediaParser_ParseMediaMetadata_Name,
            codec.align(MediaParser_ParseMediaMetadata_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaParser_ParseMediaMetadata_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaParser_CheckMediaFile_Name:
      var params = reader.decodeStruct(MediaParser_CheckMediaFile_Params);
      this.checkMediaFile(params.decodeTime, params.file).then(function(response) {
        var responseParams =
            new MediaParser_CheckMediaFile_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kMediaParser_CheckMediaFile_Name,
            codec.align(MediaParser_CheckMediaFile_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaParser_CheckMediaFile_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaParser_GetCpuInfo_Name:
      var params = reader.decodeStruct(MediaParser_GetCpuInfo_Params);
      this.getCpuInfo().then(function(response) {
        var responseParams =
            new MediaParser_GetCpuInfo_ResponseParams();
        responseParams.libyuvCpuFlags = response.libyuvCpuFlags;
        responseParams.ffmpegCpuFlags = response.ffmpegCpuFlags;
        var builder = new codec.MessageV1Builder(
            kMediaParser_GetCpuInfo_Name,
            codec.align(MediaParser_GetCpuInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaParser_GetCpuInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaParserRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaParser_ParseMediaMetadata_Name:
        if (message.expectsResponse())
          paramsClass = MediaParser_ParseMediaMetadata_Params;
      break;
      case kMediaParser_CheckMediaFile_Name:
        if (message.expectsResponse())
          paramsClass = MediaParser_CheckMediaFile_Params;
      break;
      case kMediaParser_GetCpuInfo_Name:
        if (message.expectsResponse())
          paramsClass = MediaParser_GetCpuInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaParserResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaParser_ParseMediaMetadata_Name:
        if (message.isResponse())
          paramsClass = MediaParser_ParseMediaMetadata_ResponseParams;
        break;
      case kMediaParser_CheckMediaFile_Name:
        if (message.isResponse())
          paramsClass = MediaParser_CheckMediaFile_ResponseParams;
        break;
      case kMediaParser_GetCpuInfo_Name:
        if (message.isResponse())
          paramsClass = MediaParser_GetCpuInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaParser = {
    name: 'chrome.mojom.MediaParser',
    kVersion: 0,
    ptrClass: MediaParserPtr,
    proxyClass: MediaParserProxy,
    stubClass: MediaParserStub,
    validateRequest: validateMediaParserRequest,
    validateResponse: validateMediaParserResponse,
    mojomId: 'chrome/services/media_gallery_util/public/mojom/media_parser.mojom',
    fuzzMethods: {
      parseMediaMetadata: {
        params: MediaParser_ParseMediaMetadata_Params,
      },
      checkMediaFile: {
        params: MediaParser_CheckMediaFile_Params,
      },
      getCpuInfo: {
        params: MediaParser_GetCpuInfo_Params,
      },
    },
  };
  MediaParserStub.prototype.validator = validateMediaParserRequest;
  MediaParserProxy.prototype.validator = validateMediaParserResponse;
  var kMediaParserFactory_CreateMediaParser_Name = 1957734989;

  function MediaParserFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaParserFactory,
                                                   handleOrPtrInfo);
  }

  function MediaParserFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaParserFactory, associatedInterfacePtrInfo);
  }

  MediaParserFactoryAssociatedPtr.prototype =
      Object.create(MediaParserFactoryPtr.prototype);
  MediaParserFactoryAssociatedPtr.prototype.constructor =
      MediaParserFactoryAssociatedPtr;

  function MediaParserFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaParserFactoryPtr.prototype.createMediaParser = function() {
    return MediaParserFactoryProxy.prototype.createMediaParser
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaParserFactoryProxy.prototype.createMediaParser = function(libyuvCpuFlags, libavutilCpuFlags) {
    var params_ = new MediaParserFactory_CreateMediaParser_Params();
    params_.libyuvCpuFlags = libyuvCpuFlags;
    params_.libavutilCpuFlags = libavutilCpuFlags;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaParserFactory_CreateMediaParser_Name,
          codec.align(MediaParserFactory_CreateMediaParser_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaParserFactory_CreateMediaParser_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaParserFactory_CreateMediaParser_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaParserFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaParserFactoryStub.prototype.createMediaParser = function(libyuvCpuFlags, libavutilCpuFlags) {
    return this.delegate_ && this.delegate_.createMediaParser && this.delegate_.createMediaParser(libyuvCpuFlags, libavutilCpuFlags);
  }

  MediaParserFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MediaParserFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaParserFactory_CreateMediaParser_Name:
      var params = reader.decodeStruct(MediaParserFactory_CreateMediaParser_Params);
      this.createMediaParser(params.libyuvCpuFlags, params.libavutilCpuFlags).then(function(response) {
        var responseParams =
            new MediaParserFactory_CreateMediaParser_ResponseParams();
        responseParams.mediaParser = response.mediaParser;
        var builder = new codec.MessageV1Builder(
            kMediaParserFactory_CreateMediaParser_Name,
            codec.align(MediaParserFactory_CreateMediaParser_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaParserFactory_CreateMediaParser_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaParserFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaParserFactory_CreateMediaParser_Name:
        if (message.expectsResponse())
          paramsClass = MediaParserFactory_CreateMediaParser_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaParserFactoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaParserFactory_CreateMediaParser_Name:
        if (message.isResponse())
          paramsClass = MediaParserFactory_CreateMediaParser_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaParserFactory = {
    name: 'chrome.mojom.MediaParserFactory',
    kVersion: 0,
    ptrClass: MediaParserFactoryPtr,
    proxyClass: MediaParserFactoryProxy,
    stubClass: MediaParserFactoryStub,
    validateRequest: validateMediaParserFactoryRequest,
    validateResponse: validateMediaParserFactoryResponse,
    mojomId: 'chrome/services/media_gallery_util/public/mojom/media_parser.mojom',
    fuzzMethods: {
      createMediaParser: {
        params: MediaParserFactory_CreateMediaParser_Params,
      },
    },
  };
  MediaParserFactoryStub.prototype.validator = validateMediaParserFactoryRequest;
  MediaParserFactoryProxy.prototype.validator = validateMediaParserFactoryResponse;
  var kMediaDataSource_Read_Name = 165591657;

  function MediaDataSourcePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaDataSource,
                                                   handleOrPtrInfo);
  }

  function MediaDataSourceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaDataSource, associatedInterfacePtrInfo);
  }

  MediaDataSourceAssociatedPtr.prototype =
      Object.create(MediaDataSourcePtr.prototype);
  MediaDataSourceAssociatedPtr.prototype.constructor =
      MediaDataSourceAssociatedPtr;

  function MediaDataSourceProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaDataSourcePtr.prototype.read = function() {
    return MediaDataSourceProxy.prototype.read
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDataSourceProxy.prototype.read = function(position, length) {
    var params_ = new MediaDataSource_Read_Params();
    params_.position = position;
    params_.length = length;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDataSource_Read_Name,
          codec.align(MediaDataSource_Read_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDataSource_Read_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDataSource_Read_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaDataSourceStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaDataSourceStub.prototype.read = function(position, length) {
    return this.delegate_ && this.delegate_.read && this.delegate_.read(position, length);
  }

  MediaDataSourceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MediaDataSourceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaDataSource_Read_Name:
      var params = reader.decodeStruct(MediaDataSource_Read_Params);
      this.read(params.position, params.length).then(function(response) {
        var responseParams =
            new MediaDataSource_Read_ResponseParams();
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kMediaDataSource_Read_Name,
            codec.align(MediaDataSource_Read_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDataSource_Read_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaDataSourceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaDataSource_Read_Name:
        if (message.expectsResponse())
          paramsClass = MediaDataSource_Read_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaDataSourceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaDataSource_Read_Name:
        if (message.isResponse())
          paramsClass = MediaDataSource_Read_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaDataSource = {
    name: 'chrome.mojom.MediaDataSource',
    kVersion: 0,
    ptrClass: MediaDataSourcePtr,
    proxyClass: MediaDataSourceProxy,
    stubClass: MediaDataSourceStub,
    validateRequest: validateMediaDataSourceRequest,
    validateResponse: validateMediaDataSourceResponse,
    mojomId: 'chrome/services/media_gallery_util/public/mojom/media_parser.mojom',
    fuzzMethods: {
      read: {
        params: MediaDataSource_Read_Params,
      },
    },
  };
  MediaDataSourceStub.prototype.validator = validateMediaDataSourceRequest;
  MediaDataSourceProxy.prototype.validator = validateMediaDataSourceResponse;
  exports.MediaStreamInfo = MediaStreamInfo;
  exports.MediaMetadata = MediaMetadata;
  exports.AttachedImage = AttachedImage;
  exports.MediaParser = MediaParser;
  exports.MediaParserPtr = MediaParserPtr;
  exports.MediaParserAssociatedPtr = MediaParserAssociatedPtr;
  exports.MediaParserFactory = MediaParserFactory;
  exports.MediaParserFactoryPtr = MediaParserFactoryPtr;
  exports.MediaParserFactoryAssociatedPtr = MediaParserFactoryAssociatedPtr;
  exports.MediaDataSource = MediaDataSource;
  exports.MediaDataSourcePtr = MediaDataSourcePtr;
  exports.MediaDataSourceAssociatedPtr = MediaDataSourceAssociatedPtr;
})();