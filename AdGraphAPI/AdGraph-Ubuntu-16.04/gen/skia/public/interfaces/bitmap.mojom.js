// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'skia/public/interfaces/bitmap.mojom';
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
  var big_buffer$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/big_buffer.mojom', '../../../mojo/public/mojom/base/big_buffer.mojom.js');
  }
  var image_info$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/image_info.mojom', 'image_info.mojom.js');
  }



  function Bitmap(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Bitmap.prototype.initDefaults_ = function() {
    this.imageInfo = null;
    this.rowBytes = 0;
    this.pixelData = null;
  };
  Bitmap.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Bitmap.generate = function(generator_) {
    var generated = new Bitmap;
    generated.imageInfo = generator_.generateStruct(skia.mojom.ImageInfo, false);
    generated.rowBytes = generator_.generateUint64();
    generated.pixelData = generator_.generateUnion(mojoBase.mojom.BigBuffer, false);
    return generated;
  };

  Bitmap.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.imageInfo = mutator_.mutateStruct(skia.mojom.ImageInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rowBytes = mutator_.mutateUint64(this.rowBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelData = mutator_.mutateUnion(mojoBase.mojom.BigBuffer, false);
    }
    return this;
  };
  Bitmap.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pixelData !== null) {
      Array.prototype.push.apply(handles, this.pixelData.getHandleDeps());
    }
    return handles;
  };

  Bitmap.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Bitmap.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.pixelData.setHandlesInternal_(handles, idx);
    return idx;
  };

  Bitmap.validate = function(messageValidator, offset) {
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


    // validate Bitmap.imageInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, image_info$.ImageInfo, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate Bitmap.pixelData
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 16, big_buffer$.BigBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Bitmap.encodedSize = codec.kStructHeaderSize + 32;

  Bitmap.decode = function(decoder) {
    var packed;
    var val = new Bitmap();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.imageInfo = decoder.decodeStructPointer(image_info$.ImageInfo);
    val.rowBytes = decoder.decodeStruct(codec.Uint64);
    val.pixelData = decoder.decodeStruct(big_buffer$.BigBuffer);
    return val;
  };

  Bitmap.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Bitmap.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(image_info$.ImageInfo, val.imageInfo);
    encoder.encodeStruct(codec.Uint64, val.rowBytes);
    encoder.encodeStruct(big_buffer$.BigBuffer, val.pixelData);
  };
  function InlineBitmap(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InlineBitmap.prototype.initDefaults_ = function() {
    this.imageInfo = null;
    this.rowBytes = 0;
    this.pixelData = null;
  };
  InlineBitmap.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InlineBitmap.generate = function(generator_) {
    var generated = new InlineBitmap;
    generated.imageInfo = generator_.generateStruct(skia.mojom.ImageInfo, false);
    generated.rowBytes = generator_.generateUint64();
    generated.pixelData = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  InlineBitmap.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.imageInfo = mutator_.mutateStruct(skia.mojom.ImageInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.rowBytes = mutator_.mutateUint64(this.rowBytes);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelData = mutator_.mutateArray(this.pixelData, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  InlineBitmap.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InlineBitmap.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InlineBitmap.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InlineBitmap.validate = function(messageValidator, offset) {
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


    // validate InlineBitmap.imageInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, image_info$.ImageInfo, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate InlineBitmap.pixelData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InlineBitmap.encodedSize = codec.kStructHeaderSize + 24;

  InlineBitmap.decode = function(decoder) {
    var packed;
    var val = new InlineBitmap();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.imageInfo = decoder.decodeStructPointer(image_info$.ImageInfo);
    val.rowBytes = decoder.decodeStruct(codec.Uint64);
    val.pixelData = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  InlineBitmap.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InlineBitmap.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(image_info$.ImageInfo, val.imageInfo);
    encoder.encodeStruct(codec.Uint64, val.rowBytes);
    encoder.encodeArrayPointer(codec.Uint8, val.pixelData);
  };
  exports.Bitmap = Bitmap;
  exports.InlineBitmap = InlineBitmap;
})();