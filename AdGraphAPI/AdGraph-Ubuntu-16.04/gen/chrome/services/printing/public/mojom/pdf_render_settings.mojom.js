// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/services/printing/public/mojom/pdf_render_settings.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('printing.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function PdfRenderSettings(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  PdfRenderSettings.Mode = {};
  PdfRenderSettings.Mode.NORMAL = 0;

  PdfRenderSettings.Mode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  PdfRenderSettings.Mode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  PdfRenderSettings.prototype.initDefaults_ = function() {
    this.area = null;
    this.offsets = null;
    this.dpi = null;
    this.autorotate = false;
    this.useColor = false;
    this.mode = 0;
  };
  PdfRenderSettings.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PdfRenderSettings.generate = function(generator_) {
    var generated = new PdfRenderSettings;
    generated.area = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.offsets = generator_.generateStruct(gfx.mojom.Point, false);
    generated.dpi = generator_.generateStruct(gfx.mojom.Size, false);
    generated.autorotate = generator_.generateBool();
    generated.useColor = generator_.generateBool();
    generated.mode = generator_.generateEnum(0, 0);
    return generated;
  };

  PdfRenderSettings.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.area = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.offsets = mutator_.mutateStruct(gfx.mojom.Point, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dpi = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.autorotate = mutator_.mutateBool(this.autorotate);
    }
    if (mutator_.chooseMutateField()) {
      this.useColor = mutator_.mutateBool(this.useColor);
    }
    if (mutator_.chooseMutateField()) {
      this.mode = mutator_.mutateEnum(this.mode, 0, 0);
    }
    return this;
  };
  PdfRenderSettings.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PdfRenderSettings.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PdfRenderSettings.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PdfRenderSettings.validate = function(messageValidator, offset) {
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


    // validate PdfRenderSettings.area
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfRenderSettings.offsets
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Point, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PdfRenderSettings.dpi
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate PdfRenderSettings.mode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, PdfRenderSettings.Mode);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PdfRenderSettings.encodedSize = codec.kStructHeaderSize + 32;

  PdfRenderSettings.decode = function(decoder) {
    var packed;
    var val = new PdfRenderSettings();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.area = decoder.decodeStructPointer(geometry$.Rect);
    val.offsets = decoder.decodeStructPointer(geometry$.Point);
    val.dpi = decoder.decodeStructPointer(geometry$.Size);
    packed = decoder.readUint8();
    val.autorotate = (packed >> 0) & 1 ? true : false;
    val.useColor = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mode = decoder.decodeStruct(codec.Int32);
    return val;
  };

  PdfRenderSettings.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PdfRenderSettings.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.area);
    encoder.encodeStructPointer(geometry$.Point, val.offsets);
    encoder.encodeStructPointer(geometry$.Size, val.dpi);
    packed = 0;
    packed |= (val.autorotate & 1) << 0
    packed |= (val.useColor & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.mode);
  };
  exports.PdfRenderSettings = PdfRenderSettings;
})();