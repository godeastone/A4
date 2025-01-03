// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/copy_output_result.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var mailbox$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox.mojom', '../../../../../gpu/ipc/common/mailbox.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var texture_releaser$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/texture_releaser.mojom', 'texture_releaser.mojom.js');
  }
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', '../../../../../ui/gfx/mojo/color_space.mojom.js');
  }


  var CopyOutputResultFormat = {};
  CopyOutputResultFormat.RGBA_BITMAP = 0;
  CopyOutputResultFormat.RGBA_TEXTURE = CopyOutputResultFormat.RGBA_BITMAP + 1;

  CopyOutputResultFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  CopyOutputResultFormat.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CopyOutputResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CopyOutputResult.prototype.initDefaults_ = function() {
    this.format = 0;
    this.rect = null;
    this.bitmap = null;
    this.mailbox = null;
    this.syncToken = null;
    this.colorSpace = null;
    this.releaser = new texture_releaser$.TextureReleaserPtr();
  };
  CopyOutputResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CopyOutputResult.generate = function(generator_) {
    var generated = new CopyOutputResult;
    generated.format = generator_.generateEnum(0, 1);
    generated.rect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.bitmap = generator_.generateStruct(skia.mojom.Bitmap, true);
    generated.mailbox = generator_.generateStruct(gpu.mojom.Mailbox, true);
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, true);
    generated.colorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, true);
    generated.releaser = generator_.generateInterface("viz.mojom.TextureReleaser", true);
    return generated;
  };

  CopyOutputResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.rect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bitmap = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    if (mutator_.chooseMutateField()) {
      this.mailbox = mutator_.mutateStruct(gpu.mojom.Mailbox, true);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, true);
    }
    if (mutator_.chooseMutateField()) {
      this.colorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, true);
    }
    if (mutator_.chooseMutateField()) {
      this.releaser = mutator_.mutateInterface(this.releaser, "viz.mojom.TextureReleaser", true);
    }
    return this;
  };
  CopyOutputResult.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.bitmap !== null) {
      Array.prototype.push.apply(handles, this.bitmap.getHandleDeps());
    }
    if (this.releaser !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.TextureReleaserPtr"]);
    }
    return handles;
  };

  CopyOutputResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CopyOutputResult.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.bitmap.setHandlesInternal_(handles, idx);
    this.releaser = handles[idx++];;
    return idx;
  };

  CopyOutputResult.validate = function(messageValidator, offset) {
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


    // validate CopyOutputResult.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CopyOutputResultFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.bitmap
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.mailbox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, mailbox$.Mailbox, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, sync_token$.SyncToken, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.colorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, color_space$.ColorSpace, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.releaser
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 48, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CopyOutputResult.encodedSize = codec.kStructHeaderSize + 56;

  CopyOutputResult.decode = function(decoder) {
    var packed;
    var val = new CopyOutputResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.format = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.rect = decoder.decodeStructPointer(geometry$.Rect);
    val.bitmap = decoder.decodeStructPointer(bitmap$.Bitmap);
    val.mailbox = decoder.decodeStructPointer(mailbox$.Mailbox);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    val.colorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    val.releaser = decoder.decodeStruct(new codec.NullableInterface(texture_releaser$.TextureReleaserPtr));
    return val;
  };

  CopyOutputResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CopyOutputResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Rect, val.rect);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.bitmap);
    encoder.encodeStructPointer(mailbox$.Mailbox, val.mailbox);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.colorSpace);
    encoder.encodeStruct(new codec.NullableInterface(texture_releaser$.TextureReleaserPtr), val.releaser);
  };
  exports.CopyOutputResultFormat = CopyOutputResultFormat;
  exports.CopyOutputResult = CopyOutputResult;
})();