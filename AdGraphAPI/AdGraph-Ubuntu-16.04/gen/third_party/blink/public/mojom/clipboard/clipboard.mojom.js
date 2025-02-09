// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/clipboard/clipboard.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var serialized_blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/serialized_blob.mojom', '../blob/serialized_blob.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }


  var ClipboardFormat = {};
  ClipboardFormat.kPlaintext = 0;
  ClipboardFormat.kHtml = ClipboardFormat.kPlaintext + 1;
  ClipboardFormat.kSmartPaste = ClipboardFormat.kHtml + 1;
  ClipboardFormat.kBookmark = ClipboardFormat.kSmartPaste + 1;

  ClipboardFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  ClipboardFormat.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ClipboardBuffer = {};
  ClipboardBuffer.kStandard = 0;
  ClipboardBuffer.kSelection = ClipboardBuffer.kStandard + 1;

  ClipboardBuffer.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ClipboardBuffer.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ClipboardHost_GetSequenceNumber_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_GetSequenceNumber_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_GetSequenceNumber_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_GetSequenceNumber_Params.generate = function(generator_) {
    var generated = new ClipboardHost_GetSequenceNumber_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_GetSequenceNumber_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_GetSequenceNumber_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_GetSequenceNumber_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_GetSequenceNumber_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_GetSequenceNumber_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_GetSequenceNumber_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_GetSequenceNumber_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_GetSequenceNumber_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_GetSequenceNumber_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_GetSequenceNumber_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_GetSequenceNumber_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_GetSequenceNumber_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_GetSequenceNumber_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
  };
  ClipboardHost_GetSequenceNumber_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_GetSequenceNumber_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_GetSequenceNumber_ResponseParams;
    generated.result = generator_.generateUint64();
    return generated;
  };

  ClipboardHost_GetSequenceNumber_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateUint64(this.result);
    }
    return this;
  };
  ClipboardHost_GetSequenceNumber_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_GetSequenceNumber_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_GetSequenceNumber_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_GetSequenceNumber_ResponseParams.validate = function(messageValidator, offset) {
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

  ClipboardHost_GetSequenceNumber_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_GetSequenceNumber_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_GetSequenceNumber_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ClipboardHost_GetSequenceNumber_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_GetSequenceNumber_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.result);
  };
  function ClipboardHost_IsFormatAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_IsFormatAvailable_Params.prototype.initDefaults_ = function() {
    this.format = 0;
    this.buffer = 0;
  };
  ClipboardHost_IsFormatAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_IsFormatAvailable_Params.generate = function(generator_) {
    var generated = new ClipboardHost_IsFormatAvailable_Params;
    generated.format = generator_.generateEnum(0, 3);
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_IsFormatAvailable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_IsFormatAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_IsFormatAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_IsFormatAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_IsFormatAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_IsFormatAvailable_Params.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_IsFormatAvailable_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_IsFormatAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_IsFormatAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_IsFormatAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.format = decoder.decodeStruct(codec.Int32);
    val.buffer = decoder.decodeStruct(codec.Int32);
    return val;
  };

  ClipboardHost_IsFormatAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_IsFormatAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.buffer);
  };
  function ClipboardHost_IsFormatAvailable_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_IsFormatAvailable_ResponseParams.prototype.initDefaults_ = function() {
    this.result = false;
  };
  ClipboardHost_IsFormatAvailable_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_IsFormatAvailable_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_IsFormatAvailable_ResponseParams;
    generated.result = generator_.generateBool();
    return generated;
  };

  ClipboardHost_IsFormatAvailable_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  ClipboardHost_IsFormatAvailable_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_IsFormatAvailable_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_IsFormatAvailable_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_IsFormatAvailable_ResponseParams.validate = function(messageValidator, offset) {
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

  ClipboardHost_IsFormatAvailable_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_IsFormatAvailable_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_IsFormatAvailable_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_IsFormatAvailable_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_IsFormatAvailable_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadAvailableTypes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadAvailableTypes_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_ReadAvailableTypes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadAvailableTypes_Params.generate = function(generator_) {
    var generated = new ClipboardHost_ReadAvailableTypes_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_ReadAvailableTypes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_ReadAvailableTypes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadAvailableTypes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadAvailableTypes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadAvailableTypes_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadAvailableTypes_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadAvailableTypes_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadAvailableTypes_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadAvailableTypes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_ReadAvailableTypes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadAvailableTypes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadAvailableTypes_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadAvailableTypes_ResponseParams.prototype.initDefaults_ = function() {
    this.types = null;
    this.result = false;
  };
  ClipboardHost_ReadAvailableTypes_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadAvailableTypes_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_ReadAvailableTypes_ResponseParams;
    generated.types = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    generated.result = generator_.generateBool();
    return generated;
  };

  ClipboardHost_ReadAvailableTypes_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.types = mutator_.mutateArray(this.types, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateBool(this.result);
    }
    return this;
  };
  ClipboardHost_ReadAvailableTypes_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadAvailableTypes_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadAvailableTypes_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadAvailableTypes_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadAvailableTypes_ResponseParams.types
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ClipboardHost_ReadAvailableTypes_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ClipboardHost_ReadAvailableTypes_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadAvailableTypes_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.types = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    packed = decoder.readUint8();
    val.result = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_ReadAvailableTypes_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadAvailableTypes_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.types);
    packed = 0;
    packed |= (val.result & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadText_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_ReadText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadText_Params.generate = function(generator_) {
    var generated = new ClipboardHost_ReadText_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_ReadText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_ReadText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadText_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadText_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadText_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadText_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_ReadText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadText_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadText_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ClipboardHost_ReadText_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadText_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_ReadText_ResponseParams;
    generated.result = generator_.generateStruct(mojoBase.mojom.BigString16, false);
    return generated;
  };

  ClipboardHost_ReadText_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(mojoBase.mojom.BigString16, false);
    }
    return this;
  };
  ClipboardHost_ReadText_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  ClipboardHost_ReadText_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadText_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  ClipboardHost_ReadText_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadText_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.BigString16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadText_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadText_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadText_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(string16$.BigString16);
    return val;
  };

  ClipboardHost_ReadText_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadText_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.BigString16, val.result);
  };
  function ClipboardHost_ReadHtml_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadHtml_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_ReadHtml_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadHtml_Params.generate = function(generator_) {
    var generated = new ClipboardHost_ReadHtml_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_ReadHtml_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_ReadHtml_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadHtml_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadHtml_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadHtml_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadHtml_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadHtml_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadHtml_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadHtml_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_ReadHtml_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadHtml_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadHtml_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadHtml_ResponseParams.prototype.initDefaults_ = function() {
    this.markup = null;
    this.url = null;
    this.fragmentStart = 0;
    this.fragmentEnd = 0;
  };
  ClipboardHost_ReadHtml_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadHtml_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_ReadHtml_ResponseParams;
    generated.markup = generator_.generateStruct(mojoBase.mojom.BigString16, false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.fragmentStart = generator_.generateUint32();
    generated.fragmentEnd = generator_.generateUint32();
    return generated;
  };

  ClipboardHost_ReadHtml_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.markup = mutator_.mutateStruct(mojoBase.mojom.BigString16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fragmentStart = mutator_.mutateUint32(this.fragmentStart);
    }
    if (mutator_.chooseMutateField()) {
      this.fragmentEnd = mutator_.mutateUint32(this.fragmentEnd);
    }
    return this;
  };
  ClipboardHost_ReadHtml_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.markup !== null) {
      Array.prototype.push.apply(handles, this.markup.getHandleDeps());
    }
    return handles;
  };

  ClipboardHost_ReadHtml_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadHtml_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.markup.setHandlesInternal_(handles, idx);
    return idx;
  };

  ClipboardHost_ReadHtml_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadHtml_ResponseParams.markup
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.BigString16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_ReadHtml_ResponseParams.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  ClipboardHost_ReadHtml_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ClipboardHost_ReadHtml_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadHtml_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.markup = decoder.decodeStructPointer(string16$.BigString16);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.fragmentStart = decoder.decodeStruct(codec.Uint32);
    val.fragmentEnd = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  ClipboardHost_ReadHtml_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadHtml_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.BigString16, val.markup);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Uint32, val.fragmentStart);
    encoder.encodeStruct(codec.Uint32, val.fragmentEnd);
  };
  function ClipboardHost_ReadRtf_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadRtf_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_ReadRtf_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadRtf_Params.generate = function(generator_) {
    var generated = new ClipboardHost_ReadRtf_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_ReadRtf_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_ReadRtf_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadRtf_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadRtf_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadRtf_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadRtf_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadRtf_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadRtf_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadRtf_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_ReadRtf_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadRtf_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadRtf_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadRtf_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ClipboardHost_ReadRtf_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadRtf_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_ReadRtf_ResponseParams;
    generated.result = generator_.generateString(false);
    return generated;
  };

  ClipboardHost_ReadRtf_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateString(this.result, false);
    }
    return this;
  };
  ClipboardHost_ReadRtf_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadRtf_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadRtf_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadRtf_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadRtf_ResponseParams.result
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadRtf_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadRtf_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadRtf_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.String);
    return val;
  };

  ClipboardHost_ReadRtf_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadRtf_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.result);
  };
  function ClipboardHost_ReadImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadImage_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_ReadImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadImage_Params.generate = function(generator_) {
    var generated = new ClipboardHost_ReadImage_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_ReadImage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_ReadImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadImage_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadImage_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadImage_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadImage_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_ReadImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_ReadImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadImage_ResponseParams.prototype.initDefaults_ = function() {
    this.blob = null;
  };
  ClipboardHost_ReadImage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadImage_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_ReadImage_ResponseParams;
    generated.blob = generator_.generateStruct(blink.mojom.SerializedBlob, true);
    return generated;
  };

  ClipboardHost_ReadImage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateStruct(blink.mojom.SerializedBlob, true);
    }
    return this;
  };
  ClipboardHost_ReadImage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, this.blob.getHandleDeps());
    }
    return handles;
  };

  ClipboardHost_ReadImage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadImage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.blob.setHandlesInternal_(handles, idx);
    return idx;
  };

  ClipboardHost_ReadImage_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadImage_ResponseParams.blob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, serialized_blob$.SerializedBlob, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadImage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStructPointer(serialized_blob$.SerializedBlob);
    return val;
  };

  ClipboardHost_ReadImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(serialized_blob$.SerializedBlob, val.blob);
  };
  function ClipboardHost_ReadCustomData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadCustomData_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
    this.type = null;
  };
  ClipboardHost_ReadCustomData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadCustomData_Params.generate = function(generator_) {
    var generated = new ClipboardHost_ReadCustomData_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    generated.type = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  ClipboardHost_ReadCustomData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  ClipboardHost_ReadCustomData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_ReadCustomData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadCustomData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_ReadCustomData_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadCustomData_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_ReadCustomData_Params.type
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadCustomData_Params.encodedSize = codec.kStructHeaderSize + 16;

  ClipboardHost_ReadCustomData_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadCustomData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  ClipboardHost_ReadCustomData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadCustomData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.type);
  };
  function ClipboardHost_ReadCustomData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_ReadCustomData_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  ClipboardHost_ReadCustomData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_ReadCustomData_ResponseParams.generate = function(generator_) {
    var generated = new ClipboardHost_ReadCustomData_ResponseParams;
    generated.result = generator_.generateStruct(mojoBase.mojom.BigString16, false);
    return generated;
  };

  ClipboardHost_ReadCustomData_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateStruct(mojoBase.mojom.BigString16, false);
    }
    return this;
  };
  ClipboardHost_ReadCustomData_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.result !== null) {
      Array.prototype.push.apply(handles, this.result.getHandleDeps());
    }
    return handles;
  };

  ClipboardHost_ReadCustomData_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_ReadCustomData_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.result.setHandlesInternal_(handles, idx);
    return idx;
  };

  ClipboardHost_ReadCustomData_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_ReadCustomData_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.BigString16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_ReadCustomData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_ReadCustomData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_ReadCustomData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(string16$.BigString16);
    return val;
  };

  ClipboardHost_ReadCustomData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_ReadCustomData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.BigString16, val.result);
  };
  function ClipboardHost_WriteText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_WriteText_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
    this.text = null;
  };
  ClipboardHost_WriteText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_WriteText_Params.generate = function(generator_) {
    var generated = new ClipboardHost_WriteText_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    generated.text = generator_.generateStruct(mojoBase.mojom.BigString16, false);
    return generated;
  };

  ClipboardHost_WriteText_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.text = mutator_.mutateStruct(mojoBase.mojom.BigString16, false);
    }
    return this;
  };
  ClipboardHost_WriteText_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.text !== null) {
      Array.prototype.push.apply(handles, this.text.getHandleDeps());
    }
    return handles;
  };

  ClipboardHost_WriteText_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_WriteText_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.text.setHandlesInternal_(handles, idx);
    return idx;
  };

  ClipboardHost_WriteText_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_WriteText_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteText_Params.text
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.BigString16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_WriteText_Params.encodedSize = codec.kStructHeaderSize + 16;

  ClipboardHost_WriteText_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_WriteText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.text = decoder.decodeStructPointer(string16$.BigString16);
    return val;
  };

  ClipboardHost_WriteText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_WriteText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.BigString16, val.text);
  };
  function ClipboardHost_WriteHtml_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_WriteHtml_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
    this.markup = null;
    this.url = null;
  };
  ClipboardHost_WriteHtml_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_WriteHtml_Params.generate = function(generator_) {
    var generated = new ClipboardHost_WriteHtml_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    generated.markup = generator_.generateStruct(mojoBase.mojom.BigString16, false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ClipboardHost_WriteHtml_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.markup = mutator_.mutateStruct(mojoBase.mojom.BigString16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ClipboardHost_WriteHtml_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.markup !== null) {
      Array.prototype.push.apply(handles, this.markup.getHandleDeps());
    }
    return handles;
  };

  ClipboardHost_WriteHtml_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_WriteHtml_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.markup.setHandlesInternal_(handles, idx);
    return idx;
  };

  ClipboardHost_WriteHtml_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_WriteHtml_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteHtml_Params.markup
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.BigString16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteHtml_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_WriteHtml_Params.encodedSize = codec.kStructHeaderSize + 24;

  ClipboardHost_WriteHtml_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_WriteHtml_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.markup = decoder.decodeStructPointer(string16$.BigString16);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ClipboardHost_WriteHtml_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_WriteHtml_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.BigString16, val.markup);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function ClipboardHost_WriteSmartPasteMarker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_WriteSmartPasteMarker_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_WriteSmartPasteMarker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_WriteSmartPasteMarker_Params.generate = function(generator_) {
    var generated = new ClipboardHost_WriteSmartPasteMarker_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_WriteSmartPasteMarker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_WriteSmartPasteMarker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_WriteSmartPasteMarker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_WriteSmartPasteMarker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_WriteSmartPasteMarker_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_WriteSmartPasteMarker_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_WriteSmartPasteMarker_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_WriteSmartPasteMarker_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_WriteSmartPasteMarker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_WriteSmartPasteMarker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_WriteSmartPasteMarker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardHost_WriteCustomData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_WriteCustomData_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
    this.data = null;
  };
  ClipboardHost_WriteCustomData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_WriteCustomData_Params.generate = function(generator_) {
    var generated = new ClipboardHost_WriteCustomData_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    generated.data = generator_.generateMap(
      function() {
        return generator_.generateStruct(mojoBase.mojom.String16, false);
      },
      function() {
        return generator_.generateStruct(mojoBase.mojom.BigString16, false);
      });
    return generated;
  };

  ClipboardHost_WriteCustomData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateMap(this.data,
        function(val) {
          return mutator_.mutateStruct(mojoBase.mojom.String16, false);
        },
        function(val) {
          return mutator_.mutateStruct(mojoBase.mojom.BigString16, false);
        });
    }
    return this;
  };
  ClipboardHost_WriteCustomData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.data !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], Array.from(this.data.values()).map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ClipboardHost_WriteCustomData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_WriteCustomData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.data.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ClipboardHost_WriteCustomData_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_WriteCustomData_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteCustomData_Params.data
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, new codec.PointerTo(string16$.String16), new codec.PointerTo(string16$.BigString16), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_WriteCustomData_Params.encodedSize = codec.kStructHeaderSize + 16;

  ClipboardHost_WriteCustomData_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_WriteCustomData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeMapPointer(new codec.PointerTo(string16$.String16), new codec.PointerTo(string16$.BigString16));
    return val;
  };

  ClipboardHost_WriteCustomData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_WriteCustomData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(new codec.PointerTo(string16$.String16), new codec.PointerTo(string16$.BigString16), val.data);
  };
  function ClipboardHost_WriteBookmark_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_WriteBookmark_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
    this.url = null;
    this.title = null;
  };
  ClipboardHost_WriteBookmark_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_WriteBookmark_Params.generate = function(generator_) {
    var generated = new ClipboardHost_WriteBookmark_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    generated.url = generator_.generateString(false);
    generated.title = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  ClipboardHost_WriteBookmark_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateString(this.url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  ClipboardHost_WriteBookmark_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_WriteBookmark_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_WriteBookmark_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_WriteBookmark_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_WriteBookmark_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteBookmark_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteBookmark_Params.title
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_WriteBookmark_Params.encodedSize = codec.kStructHeaderSize + 24;

  ClipboardHost_WriteBookmark_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_WriteBookmark_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStruct(codec.String);
    val.title = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  ClipboardHost_WriteBookmark_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_WriteBookmark_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStructPointer(string16$.String16, val.title);
  };
  function ClipboardHost_WriteImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_WriteImage_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
    this.sharedBufferHandle = null;
    this.sizeInPixels = null;
  };
  ClipboardHost_WriteImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_WriteImage_Params.generate = function(generator_) {
    var generated = new ClipboardHost_WriteImage_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    generated.sizeInPixels = generator_.generateStruct(gfx.mojom.Size, false);
    generated.sharedBufferHandle = generator_.generateSharedBuffer(false);
    return generated;
  };

  ClipboardHost_WriteImage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.sizeInPixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedBufferHandle = mutator_.mutateSharedBuffer(this.sharedBufferHandle, false);
    }
    return this;
  };
  ClipboardHost_WriteImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sharedBufferHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    return handles;
  };

  ClipboardHost_WriteImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_WriteImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sharedBufferHandle = handles[idx++];;
    return idx;
  };

  ClipboardHost_WriteImage_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_WriteImage_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteImage_Params.sizeInPixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClipboardHost_WriteImage_Params.sharedBufferHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_WriteImage_Params.encodedSize = codec.kStructHeaderSize + 16;

  ClipboardHost_WriteImage_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_WriteImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    val.sharedBufferHandle = decoder.decodeStruct(codec.Handle);
    val.sizeInPixels = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  ClipboardHost_WriteImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_WriteImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.encodeStruct(codec.Handle, val.sharedBufferHandle);
    encoder.encodeStructPointer(geometry$.Size, val.sizeInPixels);
  };
  function ClipboardHost_CommitWrite_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardHost_CommitWrite_Params.prototype.initDefaults_ = function() {
    this.buffer = 0;
  };
  ClipboardHost_CommitWrite_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardHost_CommitWrite_Params.generate = function(generator_) {
    var generated = new ClipboardHost_CommitWrite_Params;
    generated.buffer = generator_.generateEnum(0, 1);
    return generated;
  };

  ClipboardHost_CommitWrite_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buffer = mutator_.mutateEnum(this.buffer, 0, 1);
    }
    return this;
  };
  ClipboardHost_CommitWrite_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardHost_CommitWrite_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardHost_CommitWrite_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardHost_CommitWrite_Params.validate = function(messageValidator, offset) {
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


    // validate ClipboardHost_CommitWrite_Params.buffer
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ClipboardBuffer);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClipboardHost_CommitWrite_Params.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardHost_CommitWrite_Params.decode = function(decoder) {
    var packed;
    var val = new ClipboardHost_CommitWrite_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buffer = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardHost_CommitWrite_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardHost_CommitWrite_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.buffer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kClipboardHost_GetSequenceNumber_Name = 398012063;
  var kClipboardHost_IsFormatAvailable_Name = 872936430;
  var kClipboardHost_ReadAvailableTypes_Name = 572379568;
  var kClipboardHost_ReadText_Name = 228971085;
  var kClipboardHost_ReadHtml_Name = 694189617;
  var kClipboardHost_ReadRtf_Name = 1562975666;
  var kClipboardHost_ReadImage_Name = 2108739099;
  var kClipboardHost_ReadCustomData_Name = 668465910;
  var kClipboardHost_WriteText_Name = 1380960454;
  var kClipboardHost_WriteHtml_Name = 469669147;
  var kClipboardHost_WriteSmartPasteMarker_Name = 1730161239;
  var kClipboardHost_WriteCustomData_Name = 2065734398;
  var kClipboardHost_WriteBookmark_Name = 838124263;
  var kClipboardHost_WriteImage_Name = 1578617955;
  var kClipboardHost_CommitWrite_Name = 921784768;

  function ClipboardHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ClipboardHost,
                                                   handleOrPtrInfo);
  }

  function ClipboardHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ClipboardHost, associatedInterfacePtrInfo);
  }

  ClipboardHostAssociatedPtr.prototype =
      Object.create(ClipboardHostPtr.prototype);
  ClipboardHostAssociatedPtr.prototype.constructor =
      ClipboardHostAssociatedPtr;

  function ClipboardHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  ClipboardHostPtr.prototype.getSequenceNumber = function() {
    return ClipboardHostProxy.prototype.getSequenceNumber
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.getSequenceNumber = function(buffer) {
    var params_ = new ClipboardHost_GetSequenceNumber_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_GetSequenceNumber_Name,
          codec.align(ClipboardHost_GetSequenceNumber_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_GetSequenceNumber_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_GetSequenceNumber_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.isFormatAvailable = function() {
    return ClipboardHostProxy.prototype.isFormatAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.isFormatAvailable = function(format, buffer) {
    var params_ = new ClipboardHost_IsFormatAvailable_Params();
    params_.format = format;
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_IsFormatAvailable_Name,
          codec.align(ClipboardHost_IsFormatAvailable_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_IsFormatAvailable_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_IsFormatAvailable_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.readAvailableTypes = function() {
    return ClipboardHostProxy.prototype.readAvailableTypes
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.readAvailableTypes = function(buffer) {
    var params_ = new ClipboardHost_ReadAvailableTypes_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_ReadAvailableTypes_Name,
          codec.align(ClipboardHost_ReadAvailableTypes_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_ReadAvailableTypes_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_ReadAvailableTypes_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.readText = function() {
    return ClipboardHostProxy.prototype.readText
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.readText = function(buffer) {
    var params_ = new ClipboardHost_ReadText_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_ReadText_Name,
          codec.align(ClipboardHost_ReadText_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_ReadText_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_ReadText_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.readHtml = function() {
    return ClipboardHostProxy.prototype.readHtml
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.readHtml = function(buffer) {
    var params_ = new ClipboardHost_ReadHtml_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_ReadHtml_Name,
          codec.align(ClipboardHost_ReadHtml_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_ReadHtml_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_ReadHtml_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.readRtf = function() {
    return ClipboardHostProxy.prototype.readRtf
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.readRtf = function(buffer) {
    var params_ = new ClipboardHost_ReadRtf_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_ReadRtf_Name,
          codec.align(ClipboardHost_ReadRtf_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_ReadRtf_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_ReadRtf_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.readImage = function() {
    return ClipboardHostProxy.prototype.readImage
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.readImage = function(buffer) {
    var params_ = new ClipboardHost_ReadImage_Params();
    params_.buffer = buffer;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_ReadImage_Name,
          codec.align(ClipboardHost_ReadImage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_ReadImage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_ReadImage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.readCustomData = function() {
    return ClipboardHostProxy.prototype.readCustomData
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.readCustomData = function(buffer, type) {
    var params_ = new ClipboardHost_ReadCustomData_Params();
    params_.buffer = buffer;
    params_.type = type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboardHost_ReadCustomData_Name,
          codec.align(ClipboardHost_ReadCustomData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ClipboardHost_ReadCustomData_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ClipboardHost_ReadCustomData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardHostPtr.prototype.writeText = function() {
    return ClipboardHostProxy.prototype.writeText
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.writeText = function(buffer, text) {
    var params_ = new ClipboardHost_WriteText_Params();
    params_.buffer = buffer;
    params_.text = text;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_WriteText_Name,
        codec.align(ClipboardHost_WriteText_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_WriteText_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ClipboardHostPtr.prototype.writeHtml = function() {
    return ClipboardHostProxy.prototype.writeHtml
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.writeHtml = function(buffer, markup, url) {
    var params_ = new ClipboardHost_WriteHtml_Params();
    params_.buffer = buffer;
    params_.markup = markup;
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_WriteHtml_Name,
        codec.align(ClipboardHost_WriteHtml_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_WriteHtml_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ClipboardHostPtr.prototype.writeSmartPasteMarker = function() {
    return ClipboardHostProxy.prototype.writeSmartPasteMarker
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.writeSmartPasteMarker = function(buffer) {
    var params_ = new ClipboardHost_WriteSmartPasteMarker_Params();
    params_.buffer = buffer;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_WriteSmartPasteMarker_Name,
        codec.align(ClipboardHost_WriteSmartPasteMarker_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_WriteSmartPasteMarker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ClipboardHostPtr.prototype.writeCustomData = function() {
    return ClipboardHostProxy.prototype.writeCustomData
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.writeCustomData = function(buffer, data) {
    var params_ = new ClipboardHost_WriteCustomData_Params();
    params_.buffer = buffer;
    params_.data = data;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_WriteCustomData_Name,
        codec.align(ClipboardHost_WriteCustomData_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_WriteCustomData_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ClipboardHostPtr.prototype.writeBookmark = function() {
    return ClipboardHostProxy.prototype.writeBookmark
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.writeBookmark = function(buffer, url, title) {
    var params_ = new ClipboardHost_WriteBookmark_Params();
    params_.buffer = buffer;
    params_.url = url;
    params_.title = title;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_WriteBookmark_Name,
        codec.align(ClipboardHost_WriteBookmark_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_WriteBookmark_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ClipboardHostPtr.prototype.writeImage = function() {
    return ClipboardHostProxy.prototype.writeImage
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.writeImage = function(buffer, sizeInPixels, sharedBufferHandle) {
    var params_ = new ClipboardHost_WriteImage_Params();
    params_.buffer = buffer;
    params_.sizeInPixels = sizeInPixels;
    params_.sharedBufferHandle = sharedBufferHandle;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_WriteImage_Name,
        codec.align(ClipboardHost_WriteImage_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_WriteImage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ClipboardHostPtr.prototype.commitWrite = function() {
    return ClipboardHostProxy.prototype.commitWrite
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardHostProxy.prototype.commitWrite = function(buffer) {
    var params_ = new ClipboardHost_CommitWrite_Params();
    params_.buffer = buffer;
    var builder = new codec.MessageV0Builder(
        kClipboardHost_CommitWrite_Name,
        codec.align(ClipboardHost_CommitWrite_Params.encodedSize));
    builder.encodeStruct(ClipboardHost_CommitWrite_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ClipboardHostStub(delegate) {
    this.delegate_ = delegate;
  }
  ClipboardHostStub.prototype.getSequenceNumber = function(buffer) {
    return this.delegate_ && this.delegate_.getSequenceNumber && this.delegate_.getSequenceNumber(buffer);
  }
  ClipboardHostStub.prototype.isFormatAvailable = function(format, buffer) {
    return this.delegate_ && this.delegate_.isFormatAvailable && this.delegate_.isFormatAvailable(format, buffer);
  }
  ClipboardHostStub.prototype.readAvailableTypes = function(buffer) {
    return this.delegate_ && this.delegate_.readAvailableTypes && this.delegate_.readAvailableTypes(buffer);
  }
  ClipboardHostStub.prototype.readText = function(buffer) {
    return this.delegate_ && this.delegate_.readText && this.delegate_.readText(buffer);
  }
  ClipboardHostStub.prototype.readHtml = function(buffer) {
    return this.delegate_ && this.delegate_.readHtml && this.delegate_.readHtml(buffer);
  }
  ClipboardHostStub.prototype.readRtf = function(buffer) {
    return this.delegate_ && this.delegate_.readRtf && this.delegate_.readRtf(buffer);
  }
  ClipboardHostStub.prototype.readImage = function(buffer) {
    return this.delegate_ && this.delegate_.readImage && this.delegate_.readImage(buffer);
  }
  ClipboardHostStub.prototype.readCustomData = function(buffer, type) {
    return this.delegate_ && this.delegate_.readCustomData && this.delegate_.readCustomData(buffer, type);
  }
  ClipboardHostStub.prototype.writeText = function(buffer, text) {
    return this.delegate_ && this.delegate_.writeText && this.delegate_.writeText(buffer, text);
  }
  ClipboardHostStub.prototype.writeHtml = function(buffer, markup, url) {
    return this.delegate_ && this.delegate_.writeHtml && this.delegate_.writeHtml(buffer, markup, url);
  }
  ClipboardHostStub.prototype.writeSmartPasteMarker = function(buffer) {
    return this.delegate_ && this.delegate_.writeSmartPasteMarker && this.delegate_.writeSmartPasteMarker(buffer);
  }
  ClipboardHostStub.prototype.writeCustomData = function(buffer, data) {
    return this.delegate_ && this.delegate_.writeCustomData && this.delegate_.writeCustomData(buffer, data);
  }
  ClipboardHostStub.prototype.writeBookmark = function(buffer, url, title) {
    return this.delegate_ && this.delegate_.writeBookmark && this.delegate_.writeBookmark(buffer, url, title);
  }
  ClipboardHostStub.prototype.writeImage = function(buffer, sizeInPixels, sharedBufferHandle) {
    return this.delegate_ && this.delegate_.writeImage && this.delegate_.writeImage(buffer, sizeInPixels, sharedBufferHandle);
  }
  ClipboardHostStub.prototype.commitWrite = function(buffer) {
    return this.delegate_ && this.delegate_.commitWrite && this.delegate_.commitWrite(buffer);
  }

  ClipboardHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClipboardHost_WriteText_Name:
      var params = reader.decodeStruct(ClipboardHost_WriteText_Params);
      this.writeText(params.buffer, params.text);
      return true;
    case kClipboardHost_WriteHtml_Name:
      var params = reader.decodeStruct(ClipboardHost_WriteHtml_Params);
      this.writeHtml(params.buffer, params.markup, params.url);
      return true;
    case kClipboardHost_WriteSmartPasteMarker_Name:
      var params = reader.decodeStruct(ClipboardHost_WriteSmartPasteMarker_Params);
      this.writeSmartPasteMarker(params.buffer);
      return true;
    case kClipboardHost_WriteCustomData_Name:
      var params = reader.decodeStruct(ClipboardHost_WriteCustomData_Params);
      this.writeCustomData(params.buffer, params.data);
      return true;
    case kClipboardHost_WriteBookmark_Name:
      var params = reader.decodeStruct(ClipboardHost_WriteBookmark_Params);
      this.writeBookmark(params.buffer, params.url, params.title);
      return true;
    case kClipboardHost_WriteImage_Name:
      var params = reader.decodeStruct(ClipboardHost_WriteImage_Params);
      this.writeImage(params.buffer, params.sizeInPixels, params.sharedBufferHandle);
      return true;
    case kClipboardHost_CommitWrite_Name:
      var params = reader.decodeStruct(ClipboardHost_CommitWrite_Params);
      this.commitWrite(params.buffer);
      return true;
    default:
      return false;
    }
  };

  ClipboardHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClipboardHost_GetSequenceNumber_Name:
      var params = reader.decodeStruct(ClipboardHost_GetSequenceNumber_Params);
      this.getSequenceNumber(params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_GetSequenceNumber_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_GetSequenceNumber_Name,
            codec.align(ClipboardHost_GetSequenceNumber_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_GetSequenceNumber_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_IsFormatAvailable_Name:
      var params = reader.decodeStruct(ClipboardHost_IsFormatAvailable_Params);
      this.isFormatAvailable(params.format, params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_IsFormatAvailable_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_IsFormatAvailable_Name,
            codec.align(ClipboardHost_IsFormatAvailable_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_IsFormatAvailable_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_ReadAvailableTypes_Name:
      var params = reader.decodeStruct(ClipboardHost_ReadAvailableTypes_Params);
      this.readAvailableTypes(params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_ReadAvailableTypes_ResponseParams();
        responseParams.types = response.types;
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_ReadAvailableTypes_Name,
            codec.align(ClipboardHost_ReadAvailableTypes_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_ReadAvailableTypes_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_ReadText_Name:
      var params = reader.decodeStruct(ClipboardHost_ReadText_Params);
      this.readText(params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_ReadText_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_ReadText_Name,
            codec.align(ClipboardHost_ReadText_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_ReadText_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_ReadHtml_Name:
      var params = reader.decodeStruct(ClipboardHost_ReadHtml_Params);
      this.readHtml(params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_ReadHtml_ResponseParams();
        responseParams.markup = response.markup;
        responseParams.url = response.url;
        responseParams.fragmentStart = response.fragmentStart;
        responseParams.fragmentEnd = response.fragmentEnd;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_ReadHtml_Name,
            codec.align(ClipboardHost_ReadHtml_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_ReadHtml_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_ReadRtf_Name:
      var params = reader.decodeStruct(ClipboardHost_ReadRtf_Params);
      this.readRtf(params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_ReadRtf_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_ReadRtf_Name,
            codec.align(ClipboardHost_ReadRtf_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_ReadRtf_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_ReadImage_Name:
      var params = reader.decodeStruct(ClipboardHost_ReadImage_Params);
      this.readImage(params.buffer).then(function(response) {
        var responseParams =
            new ClipboardHost_ReadImage_ResponseParams();
        responseParams.blob = response.blob;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_ReadImage_Name,
            codec.align(ClipboardHost_ReadImage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_ReadImage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboardHost_ReadCustomData_Name:
      var params = reader.decodeStruct(ClipboardHost_ReadCustomData_Params);
      this.readCustomData(params.buffer, params.type).then(function(response) {
        var responseParams =
            new ClipboardHost_ReadCustomData_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kClipboardHost_ReadCustomData_Name,
            codec.align(ClipboardHost_ReadCustomData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ClipboardHost_ReadCustomData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateClipboardHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClipboardHost_GetSequenceNumber_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_GetSequenceNumber_Params;
      break;
      case kClipboardHost_IsFormatAvailable_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_IsFormatAvailable_Params;
      break;
      case kClipboardHost_ReadAvailableTypes_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_ReadAvailableTypes_Params;
      break;
      case kClipboardHost_ReadText_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_ReadText_Params;
      break;
      case kClipboardHost_ReadHtml_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_ReadHtml_Params;
      break;
      case kClipboardHost_ReadRtf_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_ReadRtf_Params;
      break;
      case kClipboardHost_ReadImage_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_ReadImage_Params;
      break;
      case kClipboardHost_ReadCustomData_Name:
        if (message.expectsResponse())
          paramsClass = ClipboardHost_ReadCustomData_Params;
      break;
      case kClipboardHost_WriteText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_WriteText_Params;
      break;
      case kClipboardHost_WriteHtml_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_WriteHtml_Params;
      break;
      case kClipboardHost_WriteSmartPasteMarker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_WriteSmartPasteMarker_Params;
      break;
      case kClipboardHost_WriteCustomData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_WriteCustomData_Params;
      break;
      case kClipboardHost_WriteBookmark_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_WriteBookmark_Params;
      break;
      case kClipboardHost_WriteImage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_WriteImage_Params;
      break;
      case kClipboardHost_CommitWrite_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ClipboardHost_CommitWrite_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClipboardHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kClipboardHost_GetSequenceNumber_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_GetSequenceNumber_ResponseParams;
        break;
      case kClipboardHost_IsFormatAvailable_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_IsFormatAvailable_ResponseParams;
        break;
      case kClipboardHost_ReadAvailableTypes_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_ReadAvailableTypes_ResponseParams;
        break;
      case kClipboardHost_ReadText_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_ReadText_ResponseParams;
        break;
      case kClipboardHost_ReadHtml_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_ReadHtml_ResponseParams;
        break;
      case kClipboardHost_ReadRtf_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_ReadRtf_ResponseParams;
        break;
      case kClipboardHost_ReadImage_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_ReadImage_ResponseParams;
        break;
      case kClipboardHost_ReadCustomData_Name:
        if (message.isResponse())
          paramsClass = ClipboardHost_ReadCustomData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ClipboardHost = {
    name: 'blink.mojom.ClipboardHost',
    kVersion: 0,
    ptrClass: ClipboardHostPtr,
    proxyClass: ClipboardHostProxy,
    stubClass: ClipboardHostStub,
    validateRequest: validateClipboardHostRequest,
    validateResponse: validateClipboardHostResponse,
    mojomId: 'third_party/blink/public/mojom/clipboard/clipboard.mojom',
    fuzzMethods: {
      getSequenceNumber: {
        params: ClipboardHost_GetSequenceNumber_Params,
      },
      isFormatAvailable: {
        params: ClipboardHost_IsFormatAvailable_Params,
      },
      readAvailableTypes: {
        params: ClipboardHost_ReadAvailableTypes_Params,
      },
      readText: {
        params: ClipboardHost_ReadText_Params,
      },
      readHtml: {
        params: ClipboardHost_ReadHtml_Params,
      },
      readRtf: {
        params: ClipboardHost_ReadRtf_Params,
      },
      readImage: {
        params: ClipboardHost_ReadImage_Params,
      },
      readCustomData: {
        params: ClipboardHost_ReadCustomData_Params,
      },
      writeText: {
        params: ClipboardHost_WriteText_Params,
      },
      writeHtml: {
        params: ClipboardHost_WriteHtml_Params,
      },
      writeSmartPasteMarker: {
        params: ClipboardHost_WriteSmartPasteMarker_Params,
      },
      writeCustomData: {
        params: ClipboardHost_WriteCustomData_Params,
      },
      writeBookmark: {
        params: ClipboardHost_WriteBookmark_Params,
      },
      writeImage: {
        params: ClipboardHost_WriteImage_Params,
      },
      commitWrite: {
        params: ClipboardHost_CommitWrite_Params,
      },
    },
  };
  ClipboardHostStub.prototype.validator = validateClipboardHostRequest;
  ClipboardHostProxy.prototype.validator = validateClipboardHostResponse;
  exports.ClipboardFormat = ClipboardFormat;
  exports.ClipboardBuffer = ClipboardBuffer;
  exports.ClipboardHost = ClipboardHost;
  exports.ClipboardHostPtr = ClipboardHostPtr;
  exports.ClipboardHostAssociatedPtr = ClipboardHostAssociatedPtr;
})();