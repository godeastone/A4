// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/transferable_resource.mojom';
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
  var mailbox_holder$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox_holder.mojom', '../../../../../gpu/ipc/common/mailbox_holder.mojom.js');
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
  var buffer_types$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/buffer_types.mojom', '../../../../../ui/gfx/mojo/buffer_types.mojom.js');
  }


  var ResourceFormat = {};
  ResourceFormat.RGBA_8888 = 0;
  ResourceFormat.RGBA_4444 = ResourceFormat.RGBA_8888 + 1;
  ResourceFormat.BGRA_8888 = ResourceFormat.RGBA_4444 + 1;
  ResourceFormat.ALPHA_8 = ResourceFormat.BGRA_8888 + 1;
  ResourceFormat.LUMINANCE_8 = ResourceFormat.ALPHA_8 + 1;
  ResourceFormat.RGB_565 = ResourceFormat.LUMINANCE_8 + 1;
  ResourceFormat.ETC1 = ResourceFormat.RGB_565 + 1;
  ResourceFormat.RED_8 = ResourceFormat.ETC1 + 1;
  ResourceFormat.LUMINANCE_F16 = ResourceFormat.RED_8 + 1;
  ResourceFormat.RGBA_F16 = ResourceFormat.LUMINANCE_F16 + 1;
  ResourceFormat.R16_EXT = ResourceFormat.RGBA_F16 + 1;

  ResourceFormat.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  ResourceFormat.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function TransferableResource(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TransferableResource.prototype.initDefaults_ = function() {
    this.id = 0;
    this.format = 0;
    this.bufferFormat = 0;
    this.filter = 0;
    this.size = null;
    this.mailboxHolder = null;
    this.readLockFencesEnabled = false;
    this.isSoftware = false;
    this.isOverlayCandidate = false;
    this.isBackedBySurfaceTexture = false;
    this.wantsPromotionHint = false;
    this.colorSpace = null;
  };
  TransferableResource.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TransferableResource.generate = function(generator_) {
    var generated = new TransferableResource;
    generated.id = generator_.generateUint32();
    generated.format = generator_.generateEnum(0, 10);
    generated.bufferFormat = generator_.generateEnum(0, 19);
    generated.filter = generator_.generateUint32();
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    generated.mailboxHolder = generator_.generateStruct(gpu.mojom.MailboxHolder, false);
    generated.readLockFencesEnabled = generator_.generateBool();
    generated.isSoftware = generator_.generateBool();
    generated.isOverlayCandidate = generator_.generateBool();
    generated.isBackedBySurfaceTexture = generator_.generateBool();
    generated.wantsPromotionHint = generator_.generateBool();
    generated.colorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    return generated;
  };

  TransferableResource.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format, 0, 10);
    }
    if (mutator_.chooseMutateField()) {
      this.bufferFormat = mutator_.mutateEnum(this.bufferFormat, 0, 19);
    }
    if (mutator_.chooseMutateField()) {
      this.filter = mutator_.mutateUint32(this.filter);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mailboxHolder = mutator_.mutateStruct(gpu.mojom.MailboxHolder, false);
    }
    if (mutator_.chooseMutateField()) {
      this.readLockFencesEnabled = mutator_.mutateBool(this.readLockFencesEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.isSoftware = mutator_.mutateBool(this.isSoftware);
    }
    if (mutator_.chooseMutateField()) {
      this.isOverlayCandidate = mutator_.mutateBool(this.isOverlayCandidate);
    }
    if (mutator_.chooseMutateField()) {
      this.isBackedBySurfaceTexture = mutator_.mutateBool(this.isBackedBySurfaceTexture);
    }
    if (mutator_.chooseMutateField()) {
      this.wantsPromotionHint = mutator_.mutateBool(this.wantsPromotionHint);
    }
    if (mutator_.chooseMutateField()) {
      this.colorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    return this;
  };
  TransferableResource.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TransferableResource.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TransferableResource.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TransferableResource.validate = function(messageValidator, offset) {
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



    // validate TransferableResource.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, ResourceFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferableResource.bufferFormat
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, buffer_types$.BufferFormat);
    if (err !== validator.validationError.NONE)
        return err;



    // validate TransferableResource.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferableResource.mailboxHolder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, mailbox_holder$.MailboxHolder, false);
    if (err !== validator.validationError.NONE)
        return err;







    // validate TransferableResource.colorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TransferableResource.encodedSize = codec.kStructHeaderSize + 48;

  TransferableResource.decode = function(decoder) {
    var packed;
    var val = new TransferableResource();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.format = decoder.decodeStruct(codec.Int32);
    val.bufferFormat = decoder.decodeStruct(codec.Int32);
    val.filter = decoder.decodeStruct(codec.Uint32);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.mailboxHolder = decoder.decodeStructPointer(mailbox_holder$.MailboxHolder);
    packed = decoder.readUint8();
    val.readLockFencesEnabled = (packed >> 0) & 1 ? true : false;
    val.isSoftware = (packed >> 1) & 1 ? true : false;
    val.isOverlayCandidate = (packed >> 2) & 1 ? true : false;
    val.isBackedBySurfaceTexture = (packed >> 3) & 1 ? true : false;
    val.wantsPromotionHint = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.colorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    return val;
  };

  TransferableResource.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TransferableResource.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.bufferFormat);
    encoder.encodeStruct(codec.Uint32, val.filter);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStructPointer(mailbox_holder$.MailboxHolder, val.mailboxHolder);
    packed = 0;
    packed |= (val.readLockFencesEnabled & 1) << 0
    packed |= (val.isSoftware & 1) << 1
    packed |= (val.isOverlayCandidate & 1) << 2
    packed |= (val.isBackedBySurfaceTexture & 1) << 3
    packed |= (val.wantsPromotionHint & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.colorSpace);
  };
  exports.ResourceFormat = ResourceFormat;
  exports.TransferableResource = TransferableResource;
})();