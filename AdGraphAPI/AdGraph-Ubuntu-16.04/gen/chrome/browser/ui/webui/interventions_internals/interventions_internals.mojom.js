// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojom');
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function PreviewsStatus(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PreviewsStatus.prototype.initDefaults_ = function() {
    this.description = null;
    this.enabled = false;
    this.htmlId = null;
  };
  PreviewsStatus.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PreviewsStatus.generate = function(generator_) {
    var generated = new PreviewsStatus;
    generated.description = generator_.generateString(false);
    generated.enabled = generator_.generateBool();
    generated.htmlId = generator_.generateString(false);
    return generated;
  };

  PreviewsStatus.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, false);
    }
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    if (mutator_.chooseMutateField()) {
      this.htmlId = mutator_.mutateString(this.htmlId, false);
    }
    return this;
  };
  PreviewsStatus.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PreviewsStatus.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PreviewsStatus.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PreviewsStatus.validate = function(messageValidator, offset) {
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


    // validate PreviewsStatus.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate PreviewsStatus.htmlId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PreviewsStatus.encodedSize = codec.kStructHeaderSize + 24;

  PreviewsStatus.decode = function(decoder) {
    var packed;
    var val = new PreviewsStatus();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.description = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.htmlId = decoder.decodeStruct(codec.String);
    return val;
  };

  PreviewsStatus.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PreviewsStatus.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.description);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.htmlId);
  };
  function PreviewsFlag(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PreviewsFlag.prototype.initDefaults_ = function() {
    this.description = null;
    this.link = null;
    this.value = null;
    this.htmlId = null;
  };
  PreviewsFlag.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PreviewsFlag.generate = function(generator_) {
    var generated = new PreviewsFlag;
    generated.description = generator_.generateString(false);
    generated.link = generator_.generateString(false);
    generated.value = generator_.generateString(false);
    generated.htmlId = generator_.generateString(false);
    return generated;
  };

  PreviewsFlag.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, false);
    }
    if (mutator_.chooseMutateField()) {
      this.link = mutator_.mutateString(this.link, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateString(this.value, false);
    }
    if (mutator_.chooseMutateField()) {
      this.htmlId = mutator_.mutateString(this.htmlId, false);
    }
    return this;
  };
  PreviewsFlag.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PreviewsFlag.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PreviewsFlag.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PreviewsFlag.validate = function(messageValidator, offset) {
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


    // validate PreviewsFlag.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PreviewsFlag.link
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PreviewsFlag.value
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PreviewsFlag.htmlId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PreviewsFlag.encodedSize = codec.kStructHeaderSize + 32;

  PreviewsFlag.decode = function(decoder) {
    var packed;
    var val = new PreviewsFlag();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.description = decoder.decodeStruct(codec.String);
    val.link = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(codec.String);
    val.htmlId = decoder.decodeStruct(codec.String);
    return val;
  };

  PreviewsFlag.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PreviewsFlag.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStruct(codec.String, val.link);
    encoder.encodeStruct(codec.String, val.value);
    encoder.encodeStruct(codec.String, val.htmlId);
  };
  function MessageLog(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MessageLog.prototype.initDefaults_ = function() {
    this.type = null;
    this.description = null;
    this.url = null;
    this.time = 0;
    this.pageId = 0;
  };
  MessageLog.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MessageLog.generate = function(generator_) {
    var generated = new MessageLog;
    generated.type = generator_.generateString(false);
    generated.description = generator_.generateString(false);
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.time = generator_.generateInt64();
    generated.pageId = generator_.generateUint64();
    return generated;
  };

  MessageLog.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    if (mutator_.chooseMutateField()) {
      this.description = mutator_.mutateString(this.description, false);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateInt64(this.time);
    }
    if (mutator_.chooseMutateField()) {
      this.pageId = mutator_.mutateUint64(this.pageId);
    }
    return this;
  };
  MessageLog.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MessageLog.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MessageLog.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MessageLog.validate = function(messageValidator, offset) {
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


    // validate MessageLog.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MessageLog.description
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MessageLog.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  MessageLog.encodedSize = codec.kStructHeaderSize + 40;

  MessageLog.decode = function(decoder) {
    var packed;
    var val = new MessageLog();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.String);
    val.description = decoder.decodeStruct(codec.String);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.time = decoder.decodeStruct(codec.Int64);
    val.pageId = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  MessageLog.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MessageLog.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.type);
    encoder.encodeStruct(codec.String, val.description);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Int64, val.time);
    encoder.encodeStruct(codec.Uint64, val.pageId);
  };
  function InterventionsInternalsPageHandler_GetPreviewsEnabled_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.prototype.initDefaults_ = function() {
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPageHandler_GetPreviewsEnabled_Params;
    return generated;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.validate = function(messageValidator, offset) {
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

  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPageHandler_GetPreviewsEnabled_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.prototype.initDefaults_ = function() {
    this.statuses = null;
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.generate = function(generator_) {
    var generated = new InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams;
    generated.statuses = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.PreviewsStatus, false);
    });
    return generated;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.statuses = mutator_.mutateArray(this.statuses, function(val) {
        return mutator_.mutateStruct(mojom.PreviewsStatus, false);
      });
    }
    return this;
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.statuses
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PreviewsStatus), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.statuses = decoder.decodeArrayPointer(new codec.PointerTo(PreviewsStatus));
    return val;
  };

  InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PreviewsStatus), val.statuses);
  };
  function InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.prototype.initDefaults_ = function() {
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params;
    return generated;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.validate = function(messageValidator, offset) {
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

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.prototype.initDefaults_ = function() {
    this.flags = null;
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.generate = function(generator_) {
    var generated = new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams;
    generated.flags = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.PreviewsFlag, false);
    });
    return generated;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateArray(this.flags, function(val) {
        return mutator_.mutateStruct(mojom.PreviewsFlag, false);
      });
    }
    return this;
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.flags
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PreviewsFlag), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.flags = decoder.decodeArrayPointer(new codec.PointerTo(PreviewsFlag));
    return val;
  };

  InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PreviewsFlag), val.flags);
  };
  function InterventionsInternalsPageHandler_SetClientPage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPageHandler_SetClientPage_Params.prototype.initDefaults_ = function() {
    this.page = new InterventionsInternalsPagePtr();
  };
  InterventionsInternalsPageHandler_SetClientPage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPageHandler_SetClientPage_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPageHandler_SetClientPage_Params;
    generated.page = generator_.generateInterface("mojom.InterventionsInternalsPage", false);
    return generated;
  };

  InterventionsInternalsPageHandler_SetClientPage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.page = mutator_.mutateInterface(this.page, "mojom.InterventionsInternalsPage", false);
    }
    return this;
  };
  InterventionsInternalsPageHandler_SetClientPage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.page !== null) {
      Array.prototype.push.apply(handles, ["mojom.InterventionsInternalsPagePtr"]);
    }
    return handles;
  };

  InterventionsInternalsPageHandler_SetClientPage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPageHandler_SetClientPage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.page = handles[idx++];;
    return idx;
  };

  InterventionsInternalsPageHandler_SetClientPage_Params.validate = function(messageValidator, offset) {
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


    // validate InterventionsInternalsPageHandler_SetClientPage_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterventionsInternalsPageHandler_SetClientPage_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPageHandler_SetClientPage_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPageHandler_SetClientPage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page = decoder.decodeStruct(new codec.Interface(InterventionsInternalsPagePtr));
    return val;
  };

  InterventionsInternalsPageHandler_SetClientPage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPageHandler_SetClientPage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(InterventionsInternalsPagePtr), val.page);
  };
  function InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.prototype.initDefaults_ = function() {
    this.ignored = false;
  };
  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params;
    generated.ignored = generator_.generateBool();
    return generated;
  };

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ignored = mutator_.mutateBool(this.ignored);
    }
    return this;
  };
  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.validate = function(messageValidator, offset) {
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

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.ignored = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.ignored & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InterventionsInternalsPage_LogNewMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPage_LogNewMessage_Params.prototype.initDefaults_ = function() {
    this.log = null;
  };
  InterventionsInternalsPage_LogNewMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPage_LogNewMessage_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPage_LogNewMessage_Params;
    generated.log = generator_.generateStruct(mojom.MessageLog, false);
    return generated;
  };

  InterventionsInternalsPage_LogNewMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.log = mutator_.mutateStruct(mojom.MessageLog, false);
    }
    return this;
  };
  InterventionsInternalsPage_LogNewMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPage_LogNewMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPage_LogNewMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPage_LogNewMessage_Params.validate = function(messageValidator, offset) {
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


    // validate InterventionsInternalsPage_LogNewMessage_Params.log
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, MessageLog, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterventionsInternalsPage_LogNewMessage_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPage_LogNewMessage_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPage_LogNewMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.log = decoder.decodeStructPointer(MessageLog);
    return val;
  };

  InterventionsInternalsPage_LogNewMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPage_LogNewMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(MessageLog, val.log);
  };
  function InterventionsInternalsPage_OnBlacklistedHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPage_OnBlacklistedHost_Params.prototype.initDefaults_ = function() {
    this.host = null;
    this.time = 0;
  };
  InterventionsInternalsPage_OnBlacklistedHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPage_OnBlacklistedHost_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPage_OnBlacklistedHost_Params;
    generated.host = generator_.generateString(false);
    generated.time = generator_.generateInt64();
    return generated;
  };

  InterventionsInternalsPage_OnBlacklistedHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateString(this.host, false);
    }
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateInt64(this.time);
    }
    return this;
  };
  InterventionsInternalsPage_OnBlacklistedHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPage_OnBlacklistedHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPage_OnBlacklistedHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPage_OnBlacklistedHost_Params.validate = function(messageValidator, offset) {
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


    // validate InterventionsInternalsPage_OnBlacklistedHost_Params.host
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  InterventionsInternalsPage_OnBlacklistedHost_Params.encodedSize = codec.kStructHeaderSize + 16;

  InterventionsInternalsPage_OnBlacklistedHost_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPage_OnBlacklistedHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.host = decoder.decodeStruct(codec.String);
    val.time = decoder.decodeStruct(codec.Int64);
    return val;
  };

  InterventionsInternalsPage_OnBlacklistedHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPage_OnBlacklistedHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.host);
    encoder.encodeStruct(codec.Int64, val.time);
  };
  function InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.prototype.initDefaults_ = function() {
    this.blacklisted = false;
  };
  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params;
    generated.blacklisted = generator_.generateBool();
    return generated;
  };

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blacklisted = mutator_.mutateBool(this.blacklisted);
    }
    return this;
  };
  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.validate = function(messageValidator, offset) {
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

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.blacklisted = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.blacklisted & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InterventionsInternalsPage_OnBlacklistCleared_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPage_OnBlacklistCleared_Params.prototype.initDefaults_ = function() {
    this.time = 0;
  };
  InterventionsInternalsPage_OnBlacklistCleared_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPage_OnBlacklistCleared_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPage_OnBlacklistCleared_Params;
    generated.time = generator_.generateInt64();
    return generated;
  };

  InterventionsInternalsPage_OnBlacklistCleared_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateInt64(this.time);
    }
    return this;
  };
  InterventionsInternalsPage_OnBlacklistCleared_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPage_OnBlacklistCleared_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPage_OnBlacklistCleared_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPage_OnBlacklistCleared_Params.validate = function(messageValidator, offset) {
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

  InterventionsInternalsPage_OnBlacklistCleared_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPage_OnBlacklistCleared_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPage_OnBlacklistCleared_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.time = decoder.decodeStruct(codec.Int64);
    return val;
  };

  InterventionsInternalsPage_OnBlacklistCleared_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPage_OnBlacklistCleared_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.time);
  };
  function InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.prototype.initDefaults_ = function() {
    this.type = null;
  };
  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params;
    generated.type = generator_.generateString(false);
    return generated;
  };

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    return this;
  };
  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.String);
    return val;
  };

  InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.type);
  };
  function InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.prototype.initDefaults_ = function() {
    this.ignored = false;
  };
  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.generate = function(generator_) {
    var generated = new InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params;
    generated.ignored = generator_.generateBool();
    return generated;
  };

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.ignored = mutator_.mutateBool(this.ignored);
    }
    return this;
  };
  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.validate = function(messageValidator, offset) {
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

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.ignored = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.ignored & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name = 566017371;
  var kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name = 1990470945;
  var kInterventionsInternalsPageHandler_SetClientPage_Name = 932828406;
  var kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name = 1284878884;

  function InterventionsInternalsPageHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InterventionsInternalsPageHandler,
                                                   handleOrPtrInfo);
  }

  function InterventionsInternalsPageHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InterventionsInternalsPageHandler, associatedInterfacePtrInfo);
  }

  InterventionsInternalsPageHandlerAssociatedPtr.prototype =
      Object.create(InterventionsInternalsPageHandlerPtr.prototype);
  InterventionsInternalsPageHandlerAssociatedPtr.prototype.constructor =
      InterventionsInternalsPageHandlerAssociatedPtr;

  function InterventionsInternalsPageHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  InterventionsInternalsPageHandlerPtr.prototype.getPreviewsEnabled = function() {
    return InterventionsInternalsPageHandlerProxy.prototype.getPreviewsEnabled
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageHandlerProxy.prototype.getPreviewsEnabled = function() {
    var params_ = new InterventionsInternalsPageHandler_GetPreviewsEnabled_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name,
          codec.align(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InterventionsInternalsPageHandlerPtr.prototype.getPreviewsFlagsDetails = function() {
    return InterventionsInternalsPageHandlerProxy.prototype.getPreviewsFlagsDetails
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageHandlerProxy.prototype.getPreviewsFlagsDetails = function() {
    var params_ = new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name,
          codec.align(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  InterventionsInternalsPageHandlerPtr.prototype.setClientPage = function() {
    return InterventionsInternalsPageHandlerProxy.prototype.setClientPage
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageHandlerProxy.prototype.setClientPage = function(page) {
    var params_ = new InterventionsInternalsPageHandler_SetClientPage_Params();
    params_.page = page;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPageHandler_SetClientPage_Name,
        codec.align(InterventionsInternalsPageHandler_SetClientPage_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPageHandler_SetClientPage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterventionsInternalsPageHandlerPtr.prototype.setIgnorePreviewsBlacklistDecision = function() {
    return InterventionsInternalsPageHandlerProxy.prototype.setIgnorePreviewsBlacklistDecision
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageHandlerProxy.prototype.setIgnorePreviewsBlacklistDecision = function(ignored) {
    var params_ = new InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params();
    params_.ignored = ignored;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name,
        codec.align(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InterventionsInternalsPageHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  InterventionsInternalsPageHandlerStub.prototype.getPreviewsEnabled = function() {
    return this.delegate_ && this.delegate_.getPreviewsEnabled && this.delegate_.getPreviewsEnabled();
  }
  InterventionsInternalsPageHandlerStub.prototype.getPreviewsFlagsDetails = function() {
    return this.delegate_ && this.delegate_.getPreviewsFlagsDetails && this.delegate_.getPreviewsFlagsDetails();
  }
  InterventionsInternalsPageHandlerStub.prototype.setClientPage = function(page) {
    return this.delegate_ && this.delegate_.setClientPage && this.delegate_.setClientPage(page);
  }
  InterventionsInternalsPageHandlerStub.prototype.setIgnorePreviewsBlacklistDecision = function(ignored) {
    return this.delegate_ && this.delegate_.setIgnorePreviewsBlacklistDecision && this.delegate_.setIgnorePreviewsBlacklistDecision(ignored);
  }

  InterventionsInternalsPageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInterventionsInternalsPageHandler_SetClientPage_Name:
      var params = reader.decodeStruct(InterventionsInternalsPageHandler_SetClientPage_Params);
      this.setClientPage(params.page);
      return true;
    case kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name:
      var params = reader.decodeStruct(InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params);
      this.setIgnorePreviewsBlacklistDecision(params.ignored);
      return true;
    default:
      return false;
    }
  };

  InterventionsInternalsPageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name:
      var params = reader.decodeStruct(InterventionsInternalsPageHandler_GetPreviewsEnabled_Params);
      this.getPreviewsEnabled().then(function(response) {
        var responseParams =
            new InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams();
        responseParams.statuses = response.statuses;
        var builder = new codec.MessageV1Builder(
            kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name,
            codec.align(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name:
      var params = reader.decodeStruct(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params);
      this.getPreviewsFlagsDetails().then(function(response) {
        var responseParams =
            new InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams();
        responseParams.flags = response.flags;
        var builder = new codec.MessageV1Builder(
            kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name,
            codec.align(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateInterventionsInternalsPageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name:
        if (message.expectsResponse())
          paramsClass = InterventionsInternalsPageHandler_GetPreviewsEnabled_Params;
      break;
      case kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name:
        if (message.expectsResponse())
          paramsClass = InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params;
      break;
      case kInterventionsInternalsPageHandler_SetClientPage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPageHandler_SetClientPage_Params;
      break;
      case kInterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInterventionsInternalsPageHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kInterventionsInternalsPageHandler_GetPreviewsEnabled_Name:
        if (message.isResponse())
          paramsClass = InterventionsInternalsPageHandler_GetPreviewsEnabled_ResponseParams;
        break;
      case kInterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Name:
        if (message.isResponse())
          paramsClass = InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var InterventionsInternalsPageHandler = {
    name: 'mojom.InterventionsInternalsPageHandler',
    kVersion: 0,
    ptrClass: InterventionsInternalsPageHandlerPtr,
    proxyClass: InterventionsInternalsPageHandlerProxy,
    stubClass: InterventionsInternalsPageHandlerStub,
    validateRequest: validateInterventionsInternalsPageHandlerRequest,
    validateResponse: validateInterventionsInternalsPageHandlerResponse,
    mojomId: 'chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom',
    fuzzMethods: {
      getPreviewsEnabled: {
        params: InterventionsInternalsPageHandler_GetPreviewsEnabled_Params,
      },
      getPreviewsFlagsDetails: {
        params: InterventionsInternalsPageHandler_GetPreviewsFlagsDetails_Params,
      },
      setClientPage: {
        params: InterventionsInternalsPageHandler_SetClientPage_Params,
      },
      setIgnorePreviewsBlacklistDecision: {
        params: InterventionsInternalsPageHandler_SetIgnorePreviewsBlacklistDecision_Params,
      },
    },
  };
  InterventionsInternalsPageHandlerStub.prototype.validator = validateInterventionsInternalsPageHandlerRequest;
  InterventionsInternalsPageHandlerProxy.prototype.validator = validateInterventionsInternalsPageHandlerResponse;
  var kInterventionsInternalsPage_LogNewMessage_Name = 1168422227;
  var kInterventionsInternalsPage_OnBlacklistedHost_Name = 1556392970;
  var kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name = 644387413;
  var kInterventionsInternalsPage_OnBlacklistCleared_Name = 945997866;
  var kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name = 1723229037;
  var kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name = 964719960;

  function InterventionsInternalsPagePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InterventionsInternalsPage,
                                                   handleOrPtrInfo);
  }

  function InterventionsInternalsPageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InterventionsInternalsPage, associatedInterfacePtrInfo);
  }

  InterventionsInternalsPageAssociatedPtr.prototype =
      Object.create(InterventionsInternalsPagePtr.prototype);
  InterventionsInternalsPageAssociatedPtr.prototype.constructor =
      InterventionsInternalsPageAssociatedPtr;

  function InterventionsInternalsPageProxy(receiver) {
    this.receiver_ = receiver;
  }
  InterventionsInternalsPagePtr.prototype.logNewMessage = function() {
    return InterventionsInternalsPageProxy.prototype.logNewMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageProxy.prototype.logNewMessage = function(log) {
    var params_ = new InterventionsInternalsPage_LogNewMessage_Params();
    params_.log = log;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPage_LogNewMessage_Name,
        codec.align(InterventionsInternalsPage_LogNewMessage_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPage_LogNewMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterventionsInternalsPagePtr.prototype.onBlacklistedHost = function() {
    return InterventionsInternalsPageProxy.prototype.onBlacklistedHost
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageProxy.prototype.onBlacklistedHost = function(host, time) {
    var params_ = new InterventionsInternalsPage_OnBlacklistedHost_Params();
    params_.host = host;
    params_.time = time;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPage_OnBlacklistedHost_Name,
        codec.align(InterventionsInternalsPage_OnBlacklistedHost_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPage_OnBlacklistedHost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterventionsInternalsPagePtr.prototype.onUserBlacklistedStatusChange = function() {
    return InterventionsInternalsPageProxy.prototype.onUserBlacklistedStatusChange
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageProxy.prototype.onUserBlacklistedStatusChange = function(blacklisted) {
    var params_ = new InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params();
    params_.blacklisted = blacklisted;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name,
        codec.align(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterventionsInternalsPagePtr.prototype.onBlacklistCleared = function() {
    return InterventionsInternalsPageProxy.prototype.onBlacklistCleared
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageProxy.prototype.onBlacklistCleared = function(time) {
    var params_ = new InterventionsInternalsPage_OnBlacklistCleared_Params();
    params_.time = time;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPage_OnBlacklistCleared_Name,
        codec.align(InterventionsInternalsPage_OnBlacklistCleared_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPage_OnBlacklistCleared_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterventionsInternalsPagePtr.prototype.onEffectiveConnectionTypeChanged = function() {
    return InterventionsInternalsPageProxy.prototype.onEffectiveConnectionTypeChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageProxy.prototype.onEffectiveConnectionTypeChanged = function(type) {
    var params_ = new InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params();
    params_.type = type;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name,
        codec.align(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterventionsInternalsPagePtr.prototype.onIgnoreBlacklistDecisionStatusChanged = function() {
    return InterventionsInternalsPageProxy.prototype.onIgnoreBlacklistDecisionStatusChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InterventionsInternalsPageProxy.prototype.onIgnoreBlacklistDecisionStatusChanged = function(ignored) {
    var params_ = new InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params();
    params_.ignored = ignored;
    var builder = new codec.MessageV0Builder(
        kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name,
        codec.align(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params.encodedSize));
    builder.encodeStruct(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InterventionsInternalsPageStub(delegate) {
    this.delegate_ = delegate;
  }
  InterventionsInternalsPageStub.prototype.logNewMessage = function(log) {
    return this.delegate_ && this.delegate_.logNewMessage && this.delegate_.logNewMessage(log);
  }
  InterventionsInternalsPageStub.prototype.onBlacklistedHost = function(host, time) {
    return this.delegate_ && this.delegate_.onBlacklistedHost && this.delegate_.onBlacklistedHost(host, time);
  }
  InterventionsInternalsPageStub.prototype.onUserBlacklistedStatusChange = function(blacklisted) {
    return this.delegate_ && this.delegate_.onUserBlacklistedStatusChange && this.delegate_.onUserBlacklistedStatusChange(blacklisted);
  }
  InterventionsInternalsPageStub.prototype.onBlacklistCleared = function(time) {
    return this.delegate_ && this.delegate_.onBlacklistCleared && this.delegate_.onBlacklistCleared(time);
  }
  InterventionsInternalsPageStub.prototype.onEffectiveConnectionTypeChanged = function(type) {
    return this.delegate_ && this.delegate_.onEffectiveConnectionTypeChanged && this.delegate_.onEffectiveConnectionTypeChanged(type);
  }
  InterventionsInternalsPageStub.prototype.onIgnoreBlacklistDecisionStatusChanged = function(ignored) {
    return this.delegate_ && this.delegate_.onIgnoreBlacklistDecisionStatusChanged && this.delegate_.onIgnoreBlacklistDecisionStatusChanged(ignored);
  }

  InterventionsInternalsPageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInterventionsInternalsPage_LogNewMessage_Name:
      var params = reader.decodeStruct(InterventionsInternalsPage_LogNewMessage_Params);
      this.logNewMessage(params.log);
      return true;
    case kInterventionsInternalsPage_OnBlacklistedHost_Name:
      var params = reader.decodeStruct(InterventionsInternalsPage_OnBlacklistedHost_Params);
      this.onBlacklistedHost(params.host, params.time);
      return true;
    case kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name:
      var params = reader.decodeStruct(InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params);
      this.onUserBlacklistedStatusChange(params.blacklisted);
      return true;
    case kInterventionsInternalsPage_OnBlacklistCleared_Name:
      var params = reader.decodeStruct(InterventionsInternalsPage_OnBlacklistCleared_Params);
      this.onBlacklistCleared(params.time);
      return true;
    case kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name:
      var params = reader.decodeStruct(InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params);
      this.onEffectiveConnectionTypeChanged(params.type);
      return true;
    case kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name:
      var params = reader.decodeStruct(InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params);
      this.onIgnoreBlacklistDecisionStatusChanged(params.ignored);
      return true;
    default:
      return false;
    }
  };

  InterventionsInternalsPageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInterventionsInternalsPageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInterventionsInternalsPage_LogNewMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPage_LogNewMessage_Params;
      break;
      case kInterventionsInternalsPage_OnBlacklistedHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPage_OnBlacklistedHost_Params;
      break;
      case kInterventionsInternalsPage_OnUserBlacklistedStatusChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params;
      break;
      case kInterventionsInternalsPage_OnBlacklistCleared_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPage_OnBlacklistCleared_Params;
      break;
      case kInterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params;
      break;
      case kInterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInterventionsInternalsPageResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InterventionsInternalsPage = {
    name: 'mojom.InterventionsInternalsPage',
    kVersion: 0,
    ptrClass: InterventionsInternalsPagePtr,
    proxyClass: InterventionsInternalsPageProxy,
    stubClass: InterventionsInternalsPageStub,
    validateRequest: validateInterventionsInternalsPageRequest,
    validateResponse: null,
    mojomId: 'chrome/browser/ui/webui/interventions_internals/interventions_internals.mojom',
    fuzzMethods: {
      logNewMessage: {
        params: InterventionsInternalsPage_LogNewMessage_Params,
      },
      onBlacklistedHost: {
        params: InterventionsInternalsPage_OnBlacklistedHost_Params,
      },
      onUserBlacklistedStatusChange: {
        params: InterventionsInternalsPage_OnUserBlacklistedStatusChange_Params,
      },
      onBlacklistCleared: {
        params: InterventionsInternalsPage_OnBlacklistCleared_Params,
      },
      onEffectiveConnectionTypeChanged: {
        params: InterventionsInternalsPage_OnEffectiveConnectionTypeChanged_Params,
      },
      onIgnoreBlacklistDecisionStatusChanged: {
        params: InterventionsInternalsPage_OnIgnoreBlacklistDecisionStatusChanged_Params,
      },
    },
  };
  InterventionsInternalsPageStub.prototype.validator = validateInterventionsInternalsPageRequest;
  InterventionsInternalsPageProxy.prototype.validator = null;
  exports.PreviewsStatus = PreviewsStatus;
  exports.PreviewsFlag = PreviewsFlag;
  exports.MessageLog = MessageLog;
  exports.InterventionsInternalsPageHandler = InterventionsInternalsPageHandler;
  exports.InterventionsInternalsPageHandlerPtr = InterventionsInternalsPageHandlerPtr;
  exports.InterventionsInternalsPageHandlerAssociatedPtr = InterventionsInternalsPageHandlerAssociatedPtr;
  exports.InterventionsInternalsPage = InterventionsInternalsPage;
  exports.InterventionsInternalsPagePtr = InterventionsInternalsPagePtr;
  exports.InterventionsInternalsPageAssociatedPtr = InterventionsInternalsPageAssociatedPtr;
})();