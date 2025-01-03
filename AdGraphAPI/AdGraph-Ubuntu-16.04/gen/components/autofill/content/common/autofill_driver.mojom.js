// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/autofill/content/common/autofill_driver.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('autofill.mojom');
  var autofill_types$ =
      mojo.internal.exposeNamespace('autofill.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/autofill/content/common/autofill_types.mojom', 'autofill_types.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var text_direction$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/text_direction.mojom', '../../../../mojo/public/mojom/base/text_direction.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }



  function AutofillDriver_FormsSeen_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FormsSeen_Params.prototype.initDefaults_ = function() {
    this.forms = null;
    this.timestamp = null;
  };
  AutofillDriver_FormsSeen_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_FormsSeen_Params.generate = function(generator_) {
    var generated = new AutofillDriver_FormsSeen_Params;
    generated.forms = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.FormData, false);
    });
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  AutofillDriver_FormsSeen_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.forms = mutator_.mutateArray(this.forms, function(val) {
        return mutator_.mutateStruct(autofill.mojom.FormData, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  AutofillDriver_FormsSeen_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_FormsSeen_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_FormsSeen_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_FormsSeen_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_FormsSeen_Params.forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.FormData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_FormsSeen_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FormsSeen_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_FormsSeen_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FormsSeen_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.FormData));
    val.timestamp = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  AutofillDriver_FormsSeen_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FormsSeen_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.FormData), val.forms);
    encoder.encodeStructPointer(time$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_FormSubmitted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FormSubmitted_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.knownSuccess = false;
    this.source = 0;
    this.timestamp = null;
  };
  AutofillDriver_FormSubmitted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_FormSubmitted_Params.generate = function(generator_) {
    var generated = new AutofillDriver_FormSubmitted_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.knownSuccess = generator_.generateBool();
    generated.source = generator_.generateEnum(0, 5);
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  AutofillDriver_FormSubmitted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.knownSuccess = mutator_.mutateBool(this.knownSuccess);
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateEnum(this.source, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  AutofillDriver_FormSubmitted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_FormSubmitted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_FormSubmitted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_FormSubmitted_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_FormSubmitted_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate AutofillDriver_FormSubmitted_Params.source
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, autofill_types$.SubmissionSource);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_FormSubmitted_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FormSubmitted_Params.encodedSize = codec.kStructHeaderSize + 24;

  AutofillDriver_FormSubmitted_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FormSubmitted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    packed = decoder.readUint8();
    val.knownSuccess = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.source = decoder.decodeStruct(codec.Int32);
    val.timestamp = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  AutofillDriver_FormSubmitted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FormSubmitted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    packed = 0;
    packed |= (val.knownSuccess & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.source);
    encoder.encodeStructPointer(time$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_TextFieldDidChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_TextFieldDidChange_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.field = null;
    this.boundingBox = null;
    this.timestamp = null;
  };
  AutofillDriver_TextFieldDidChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_TextFieldDidChange_Params.generate = function(generator_) {
    var generated = new AutofillDriver_TextFieldDidChange_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.field = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  AutofillDriver_TextFieldDidChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.field = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.boundingBox = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  AutofillDriver_TextFieldDidChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_TextFieldDidChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_TextFieldDidChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_TextFieldDidChange_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_TextFieldDidChange_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_TextFieldDidChange_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_TextFieldDidChange_Params.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_TextFieldDidChange_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_TextFieldDidChange_Params.encodedSize = codec.kStructHeaderSize + 32;

  AutofillDriver_TextFieldDidChange_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_TextFieldDidChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    val.timestamp = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  AutofillDriver_TextFieldDidChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_TextFieldDidChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
    encoder.encodeStructPointer(time$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_TextFieldDidScroll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_TextFieldDidScroll_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.field = null;
    this.boundingBox = null;
  };
  AutofillDriver_TextFieldDidScroll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_TextFieldDidScroll_Params.generate = function(generator_) {
    var generated = new AutofillDriver_TextFieldDidScroll_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.field = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  AutofillDriver_TextFieldDidScroll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.field = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.boundingBox = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  AutofillDriver_TextFieldDidScroll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_TextFieldDidScroll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_TextFieldDidScroll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_TextFieldDidScroll_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_TextFieldDidScroll_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_TextFieldDidScroll_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_TextFieldDidScroll_Params.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_TextFieldDidScroll_Params.encodedSize = codec.kStructHeaderSize + 24;

  AutofillDriver_TextFieldDidScroll_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_TextFieldDidScroll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  AutofillDriver_TextFieldDidScroll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_TextFieldDidScroll_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
  };
  function AutofillDriver_SelectControlDidChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_SelectControlDidChange_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.field = null;
    this.boundingBox = null;
  };
  AutofillDriver_SelectControlDidChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_SelectControlDidChange_Params.generate = function(generator_) {
    var generated = new AutofillDriver_SelectControlDidChange_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.field = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  AutofillDriver_SelectControlDidChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.field = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.boundingBox = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  AutofillDriver_SelectControlDidChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_SelectControlDidChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_SelectControlDidChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_SelectControlDidChange_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_SelectControlDidChange_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_SelectControlDidChange_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_SelectControlDidChange_Params.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_SelectControlDidChange_Params.encodedSize = codec.kStructHeaderSize + 24;

  AutofillDriver_SelectControlDidChange_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_SelectControlDidChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  AutofillDriver_SelectControlDidChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_SelectControlDidChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
  };
  function AutofillDriver_SelectFieldOptionsDidChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_SelectFieldOptionsDidChange_Params.prototype.initDefaults_ = function() {
    this.form = null;
  };
  AutofillDriver_SelectFieldOptionsDidChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_SelectFieldOptionsDidChange_Params.generate = function(generator_) {
    var generated = new AutofillDriver_SelectFieldOptionsDidChange_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    return generated;
  };

  AutofillDriver_SelectFieldOptionsDidChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    return this;
  };
  AutofillDriver_SelectFieldOptionsDidChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_SelectFieldOptionsDidChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_SelectFieldOptionsDidChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_SelectFieldOptionsDidChange_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_SelectFieldOptionsDidChange_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_SelectFieldOptionsDidChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillDriver_SelectFieldOptionsDidChange_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_SelectFieldOptionsDidChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    return val;
  };

  AutofillDriver_SelectFieldOptionsDidChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_SelectFieldOptionsDidChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
  };
  function AutofillDriver_QueryFormFieldAutofill_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_QueryFormFieldAutofill_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.form = null;
    this.field = null;
    this.boundingBox = null;
  };
  AutofillDriver_QueryFormFieldAutofill_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_QueryFormFieldAutofill_Params.generate = function(generator_) {
    var generated = new AutofillDriver_QueryFormFieldAutofill_Params;
    generated.id = generator_.generateInt32();
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.field = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.field = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.boundingBox = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  AutofillDriver_QueryFormFieldAutofill_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_QueryFormFieldAutofill_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.validate = function(messageValidator, offset) {
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



    // validate AutofillDriver_QueryFormFieldAutofill_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_QueryFormFieldAutofill_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_QueryFormFieldAutofill_Params.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.encodedSize = codec.kStructHeaderSize + 32;

  AutofillDriver_QueryFormFieldAutofill_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_QueryFormFieldAutofill_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  AutofillDriver_QueryFormFieldAutofill_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_QueryFormFieldAutofill_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
  };
  function AutofillDriver_HidePopup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_HidePopup_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_HidePopup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_HidePopup_Params.generate = function(generator_) {
    var generated = new AutofillDriver_HidePopup_Params;
    return generated;
  };

  AutofillDriver_HidePopup_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AutofillDriver_HidePopup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_HidePopup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_HidePopup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_HidePopup_Params.validate = function(messageValidator, offset) {
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

  AutofillDriver_HidePopup_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_HidePopup_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_HidePopup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_HidePopup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_HidePopup_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_FocusNoLongerOnForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FocusNoLongerOnForm_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_FocusNoLongerOnForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_FocusNoLongerOnForm_Params.generate = function(generator_) {
    var generated = new AutofillDriver_FocusNoLongerOnForm_Params;
    return generated;
  };

  AutofillDriver_FocusNoLongerOnForm_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AutofillDriver_FocusNoLongerOnForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_FocusNoLongerOnForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_FocusNoLongerOnForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_FocusNoLongerOnForm_Params.validate = function(messageValidator, offset) {
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

  AutofillDriver_FocusNoLongerOnForm_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_FocusNoLongerOnForm_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FocusNoLongerOnForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_FocusNoLongerOnForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FocusNoLongerOnForm_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_FocusOnFormField_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_FocusOnFormField_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.field = null;
    this.boundingBox = null;
  };
  AutofillDriver_FocusOnFormField_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_FocusOnFormField_Params.generate = function(generator_) {
    var generated = new AutofillDriver_FocusOnFormField_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.field = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.boundingBox = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  AutofillDriver_FocusOnFormField_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.field = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.boundingBox = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  AutofillDriver_FocusOnFormField_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_FocusOnFormField_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_FocusOnFormField_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_FocusOnFormField_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_FocusOnFormField_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_FocusOnFormField_Params.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_FocusOnFormField_Params.boundingBox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_FocusOnFormField_Params.encodedSize = codec.kStructHeaderSize + 24;

  AutofillDriver_FocusOnFormField_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_FocusOnFormField_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.field = decoder.decodeStructPointer(autofill_types$.FormFieldData);
    val.boundingBox = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  AutofillDriver_FocusOnFormField_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_FocusOnFormField_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(autofill_types$.FormFieldData, val.field);
    encoder.encodeStructPointer(geometry$.RectF, val.boundingBox);
  };
  function AutofillDriver_DidFillAutofillFormData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_DidFillAutofillFormData_Params.prototype.initDefaults_ = function() {
    this.form = null;
    this.timestamp = null;
  };
  AutofillDriver_DidFillAutofillFormData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_DidFillAutofillFormData_Params.generate = function(generator_) {
    var generated = new AutofillDriver_DidFillAutofillFormData_Params;
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.timestamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  AutofillDriver_DidFillAutofillFormData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  AutofillDriver_DidFillAutofillFormData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_DidFillAutofillFormData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_DidFillAutofillFormData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_DidFillAutofillFormData_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_DidFillAutofillFormData_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_DidFillAutofillFormData_Params.timestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_DidFillAutofillFormData_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_DidFillAutofillFormData_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_DidFillAutofillFormData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    val.timestamp = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  AutofillDriver_DidFillAutofillFormData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_DidFillAutofillFormData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
    encoder.encodeStructPointer(time$.TimeTicks, val.timestamp);
  };
  function AutofillDriver_DidPreviewAutofillFormData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_DidPreviewAutofillFormData_Params.generate = function(generator_) {
    var generated = new AutofillDriver_DidPreviewAutofillFormData_Params;
    return generated;
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_DidPreviewAutofillFormData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.validate = function(messageValidator, offset) {
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

  AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_DidPreviewAutofillFormData_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_DidPreviewAutofillFormData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_DidPreviewAutofillFormData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_DidEndTextFieldEditing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_DidEndTextFieldEditing_Params.prototype.initDefaults_ = function() {
  };
  AutofillDriver_DidEndTextFieldEditing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_DidEndTextFieldEditing_Params.generate = function(generator_) {
    var generated = new AutofillDriver_DidEndTextFieldEditing_Params;
    return generated;
  };

  AutofillDriver_DidEndTextFieldEditing_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AutofillDriver_DidEndTextFieldEditing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_DidEndTextFieldEditing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_DidEndTextFieldEditing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_DidEndTextFieldEditing_Params.validate = function(messageValidator, offset) {
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

  AutofillDriver_DidEndTextFieldEditing_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillDriver_DidEndTextFieldEditing_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_DidEndTextFieldEditing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillDriver_DidEndTextFieldEditing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_DidEndTextFieldEditing_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillDriver_SetDataList_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillDriver_SetDataList_Params.prototype.initDefaults_ = function() {
    this.values = null;
    this.labels = null;
  };
  AutofillDriver_SetDataList_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillDriver_SetDataList_Params.generate = function(generator_) {
    var generated = new AutofillDriver_SetDataList_Params;
    generated.values = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    generated.labels = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    return generated;
  };

  AutofillDriver_SetDataList_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateArray(this.values, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.labels = mutator_.mutateArray(this.labels, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    return this;
  };
  AutofillDriver_SetDataList_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillDriver_SetDataList_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillDriver_SetDataList_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillDriver_SetDataList_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillDriver_SetDataList_Params.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillDriver_SetDataList_Params.labels
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillDriver_SetDataList_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillDriver_SetDataList_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillDriver_SetDataList_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.values = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    val.labels = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    return val;
  };

  AutofillDriver_SetDataList_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillDriver_SetDataList_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.values);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.labels);
  };
  function PasswordManagerDriver_PasswordFormsParsed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.initDefaults_ = function() {
    this.forms = null;
  };
  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_PasswordFormsParsed_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_PasswordFormsParsed_Params;
    generated.forms = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.PasswordForm, false);
    });
    return generated;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.forms = mutator_.mutateArray(this.forms, function(val) {
        return mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
      });
    }
    return this;
  };
  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_PasswordFormsParsed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_PasswordFormsParsed_Params.forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.PasswordForm), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PasswordFormsParsed_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordFormsParsed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm));
    return val;
  };

  PasswordManagerDriver_PasswordFormsParsed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm), val.forms);
  };
  function PasswordManagerDriver_PasswordFormsRendered_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.initDefaults_ = function() {
    this.visibleForms = null;
    this.didStopLoading = false;
  };
  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_PasswordFormsRendered_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_PasswordFormsRendered_Params;
    generated.visibleForms = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.PasswordForm, false);
    });
    generated.didStopLoading = generator_.generateBool();
    return generated;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.visibleForms = mutator_.mutateArray(this.visibleForms, function(val) {
        return mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.didStopLoading = mutator_.mutateBool(this.didStopLoading);
    }
    return this;
  };
  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_PasswordFormsRendered_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_PasswordFormsRendered_Params.visibleForms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.PasswordForm), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerDriver_PasswordFormsRendered_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordFormsRendered_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.visibleForms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm));
    packed = decoder.readUint8();
    val.didStopLoading = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PasswordManagerDriver_PasswordFormsRendered_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordForm), val.visibleForms);
    packed = 0;
    packed |= (val.didStopLoading & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PasswordManagerDriver_PasswordFormSubmitted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
  };
  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_PasswordFormSubmitted_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_PasswordFormSubmitted_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_PasswordFormSubmitted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_PasswordFormSubmitted_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PasswordFormSubmitted_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordFormSubmitted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_PasswordFormSubmitted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerDriver_ShowManualFallbackForSaving_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_ShowManualFallbackForSaving_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
  };
  PasswordManagerDriver_ShowManualFallbackForSaving_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_ShowManualFallbackForSaving_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_ShowManualFallbackForSaving_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerDriver_ShowManualFallbackForSaving_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerDriver_ShowManualFallbackForSaving_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_ShowManualFallbackForSaving_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_ShowManualFallbackForSaving_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_ShowManualFallbackForSaving_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_ShowManualFallbackForSaving_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_ShowManualFallbackForSaving_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_ShowManualFallbackForSaving_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_ShowManualFallbackForSaving_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_ShowManualFallbackForSaving_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_ShowManualFallbackForSaving_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerDriver_HideManualFallbackForSaving_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_HideManualFallbackForSaving_Params.prototype.initDefaults_ = function() {
  };
  PasswordManagerDriver_HideManualFallbackForSaving_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_HideManualFallbackForSaving_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_HideManualFallbackForSaving_Params;
    return generated;
  };

  PasswordManagerDriver_HideManualFallbackForSaving_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordManagerDriver_HideManualFallbackForSaving_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_HideManualFallbackForSaving_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_HideManualFallbackForSaving_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_HideManualFallbackForSaving_Params.validate = function(messageValidator, offset) {
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

  PasswordManagerDriver_HideManualFallbackForSaving_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordManagerDriver_HideManualFallbackForSaving_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_HideManualFallbackForSaving_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordManagerDriver_HideManualFallbackForSaving_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_HideManualFallbackForSaving_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordManagerDriver_SameDocumentNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_SameDocumentNavigation_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
  };
  PasswordManagerDriver_SameDocumentNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_SameDocumentNavigation_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_SameDocumentNavigation_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerDriver_SameDocumentNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerDriver_SameDocumentNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_SameDocumentNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_SameDocumentNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_SameDocumentNavigation_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_SameDocumentNavigation_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_SameDocumentNavigation_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_SameDocumentNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_SameDocumentNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_SameDocumentNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_SameDocumentNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerDriver_RecordSavePasswordProgress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.initDefaults_ = function() {
    this.log = null;
  };
  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_RecordSavePasswordProgress_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_RecordSavePasswordProgress_Params;
    generated.log = generator_.generateString(false);
    return generated;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.log = mutator_.mutateString(this.log, false);
    }
    return this;
  };
  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_RecordSavePasswordProgress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_RecordSavePasswordProgress_Params.log
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_RecordSavePasswordProgress_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_RecordSavePasswordProgress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.log = decoder.decodeStruct(codec.String);
    return val;
  };

  PasswordManagerDriver_RecordSavePasswordProgress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.log);
  };
  function PasswordManagerDriver_UserModifiedPasswordField_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_UserModifiedPasswordField_Params.prototype.initDefaults_ = function() {
  };
  PasswordManagerDriver_UserModifiedPasswordField_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_UserModifiedPasswordField_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_UserModifiedPasswordField_Params;
    return generated;
  };

  PasswordManagerDriver_UserModifiedPasswordField_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordManagerDriver_UserModifiedPasswordField_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_UserModifiedPasswordField_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_UserModifiedPasswordField_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_UserModifiedPasswordField_Params.validate = function(messageValidator, offset) {
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

  PasswordManagerDriver_UserModifiedPasswordField_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordManagerDriver_UserModifiedPasswordField_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_UserModifiedPasswordField_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordManagerDriver_UserModifiedPasswordField_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_UserModifiedPasswordField_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordManagerDriver_ShowPasswordSuggestions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.initDefaults_ = function() {
    this.key = 0;
    this.textDirection = 0;
    this.typedUsername = null;
    this.options = 0;
    this.bounds = null;
  };
  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_ShowPasswordSuggestions_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_ShowPasswordSuggestions_Params;
    generated.key = generator_.generateInt32();
    generated.textDirection = generator_.generateEnum(0, 2);
    generated.typedUsername = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.options = generator_.generateInt32();
    generated.bounds = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateInt32(this.key);
    }
    if (mutator_.chooseMutateField()) {
      this.textDirection = mutator_.mutateEnum(this.textDirection, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.typedUsername = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateInt32(this.options);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_ShowPasswordSuggestions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.validate = function(messageValidator, offset) {
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



    // validate PasswordManagerDriver_ShowPasswordSuggestions_Params.textDirection
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, text_direction$.TextDirection);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordManagerDriver_ShowPasswordSuggestions_Params.typedUsername
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordManagerDriver_ShowPasswordSuggestions_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize = codec.kStructHeaderSize + 32;

  PasswordManagerDriver_ShowPasswordSuggestions_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_ShowPasswordSuggestions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.Int32);
    val.textDirection = decoder.decodeStruct(codec.Int32);
    val.typedUsername = decoder.decodeStructPointer(string16$.String16);
    val.options = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bounds = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  PasswordManagerDriver_ShowPasswordSuggestions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.key);
    encoder.encodeStruct(codec.Int32, val.textDirection);
    encoder.encodeStructPointer(string16$.String16, val.typedUsername);
    encoder.encodeStruct(codec.Int32, val.options);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.RectF, val.bounds);
  };
  function PasswordManagerDriver_ShowManualFallbackSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.prototype.initDefaults_ = function() {
    this.textDirection = 0;
    this.bounds = null;
  };
  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_ShowManualFallbackSuggestion_Params;
    generated.textDirection = generator_.generateEnum(0, 2);
    generated.bounds = generator_.generateStruct(gfx.mojom.RectF, false);
    return generated;
  };

  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.textDirection = mutator_.mutateEnum(this.textDirection, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    return this;
  };
  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_ShowManualFallbackSuggestion_Params.textDirection
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, text_direction$.TextDirection);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordManagerDriver_ShowManualFallbackSuggestion_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_ShowManualFallbackSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.textDirection = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bounds = decoder.decodeStructPointer(geometry$.RectF);
    return val;
  };

  PasswordManagerDriver_ShowManualFallbackSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_ShowManualFallbackSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.textDirection);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.RectF, val.bounds);
  };
  function PasswordManagerDriver_PresaveGeneratedPassword_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
  };
  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_PresaveGeneratedPassword_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_PresaveGeneratedPassword_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_PresaveGeneratedPassword_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_PresaveGeneratedPassword_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PresaveGeneratedPassword_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PresaveGeneratedPassword_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_PresaveGeneratedPassword_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerDriver_PasswordNoLongerGenerated_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
  };
  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_PasswordNoLongerGenerated_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_PasswordNoLongerGenerated_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_PasswordNoLongerGenerated_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_PasswordNoLongerGenerated_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_PasswordNoLongerGenerated_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerDriver_PasswordNoLongerGenerated_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
    this.generationField = null;
  };
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    generated.generationField = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    if (mutator_.chooseMutateField()) {
      this.generationField = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.generationField
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    val.generationField = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
    encoder.encodeStructPointer(string16$.String16, val.generationField);
  };
  function PasswordManagerDriver_CheckSafeBrowsingReputation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.prototype.initDefaults_ = function() {
    this.formAction = null;
    this.frameUrl = null;
  };
  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.generate = function(generator_) {
    var generated = new PasswordManagerDriver_CheckSafeBrowsingReputation_Params;
    generated.formAction = generator_.generateStruct(url.mojom.Url, false);
    generated.frameUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.formAction = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerDriver_CheckSafeBrowsingReputation_Params.formAction
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordManagerDriver_CheckSafeBrowsingReputation_Params.frameUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerDriver_CheckSafeBrowsingReputation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.formAction = decoder.decodeStructPointer(url$.Url);
    val.frameUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  PasswordManagerDriver_CheckSafeBrowsingReputation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerDriver_CheckSafeBrowsingReputation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.formAction);
    encoder.encodeStructPointer(url$.Url, val.frameUrl);
  };
  function PasswordManagerClient_GenerationAvailableForForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerClient_GenerationAvailableForForm_Params.prototype.initDefaults_ = function() {
    this.passwordForm = null;
  };
  PasswordManagerClient_GenerationAvailableForForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerClient_GenerationAvailableForForm_Params.generate = function(generator_) {
    var generated = new PasswordManagerClient_GenerationAvailableForForm_Params;
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerClient_GenerationAvailableForForm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerClient_GenerationAvailableForForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerClient_GenerationAvailableForForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerClient_GenerationAvailableForForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerClient_GenerationAvailableForForm_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerClient_GenerationAvailableForForm_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerClient_GenerationAvailableForForm_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordManagerClient_GenerationAvailableForForm_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerClient_GenerationAvailableForForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerClient_GenerationAvailableForForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerClient_GenerationAvailableForForm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerClient_ShowPasswordGenerationPopup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerClient_ShowPasswordGenerationPopup_Params.prototype.initDefaults_ = function() {
    this.bounds = null;
    this.maxLength = 0;
    this.isManuallyTriggered = false;
    this.generationElement = null;
    this.passwordForm = null;
  };
  PasswordManagerClient_ShowPasswordGenerationPopup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerClient_ShowPasswordGenerationPopup_Params.generate = function(generator_) {
    var generated = new PasswordManagerClient_ShowPasswordGenerationPopup_Params;
    generated.bounds = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.maxLength = generator_.generateInt32();
    generated.generationElement = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.isManuallyTriggered = generator_.generateBool();
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerClient_ShowPasswordGenerationPopup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.maxLength = mutator_.mutateInt32(this.maxLength);
    }
    if (mutator_.chooseMutateField()) {
      this.generationElement = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isManuallyTriggered = mutator_.mutateBool(this.isManuallyTriggered);
    }
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerClient_ShowPasswordGenerationPopup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerClient_ShowPasswordGenerationPopup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerClient_ShowPasswordGenerationPopup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerClient_ShowPasswordGenerationPopup_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerClient_ShowPasswordGenerationPopup_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordManagerClient_ShowPasswordGenerationPopup_Params.generationElement
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordManagerClient_ShowPasswordGenerationPopup_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerClient_ShowPasswordGenerationPopup_Params.encodedSize = codec.kStructHeaderSize + 32;

  PasswordManagerClient_ShowPasswordGenerationPopup_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerClient_ShowPasswordGenerationPopup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bounds = decoder.decodeStructPointer(geometry$.RectF);
    val.maxLength = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isManuallyTriggered = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.generationElement = decoder.decodeStructPointer(string16$.String16);
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerClient_ShowPasswordGenerationPopup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerClient_ShowPasswordGenerationPopup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.RectF, val.bounds);
    encoder.encodeStruct(codec.Int32, val.maxLength);
    packed = 0;
    packed |= (val.isManuallyTriggered & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.generationElement);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerClient_ShowPasswordEditingPopup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerClient_ShowPasswordEditingPopup_Params.prototype.initDefaults_ = function() {
    this.bounds = null;
    this.passwordForm = null;
  };
  PasswordManagerClient_ShowPasswordEditingPopup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerClient_ShowPasswordEditingPopup_Params.generate = function(generator_) {
    var generated = new PasswordManagerClient_ShowPasswordEditingPopup_Params;
    generated.bounds = generator_.generateStruct(gfx.mojom.RectF, false);
    generated.passwordForm = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordManagerClient_ShowPasswordEditingPopup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bounds = mutator_.mutateStruct(gfx.mojom.RectF, false);
    }
    if (mutator_.chooseMutateField()) {
      this.passwordForm = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordManagerClient_ShowPasswordEditingPopup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerClient_ShowPasswordEditingPopup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerClient_ShowPasswordEditingPopup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerClient_ShowPasswordEditingPopup_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordManagerClient_ShowPasswordEditingPopup_Params.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.RectF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordManagerClient_ShowPasswordEditingPopup_Params.passwordForm
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordManagerClient_ShowPasswordEditingPopup_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordManagerClient_ShowPasswordEditingPopup_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerClient_ShowPasswordEditingPopup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bounds = decoder.decodeStructPointer(geometry$.RectF);
    val.passwordForm = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordManagerClient_ShowPasswordEditingPopup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerClient_ShowPasswordEditingPopup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.RectF, val.bounds);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.passwordForm);
  };
  function PasswordManagerClient_HidePasswordGenerationPopup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordManagerClient_HidePasswordGenerationPopup_Params.prototype.initDefaults_ = function() {
  };
  PasswordManagerClient_HidePasswordGenerationPopup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordManagerClient_HidePasswordGenerationPopup_Params.generate = function(generator_) {
    var generated = new PasswordManagerClient_HidePasswordGenerationPopup_Params;
    return generated;
  };

  PasswordManagerClient_HidePasswordGenerationPopup_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordManagerClient_HidePasswordGenerationPopup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordManagerClient_HidePasswordGenerationPopup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordManagerClient_HidePasswordGenerationPopup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordManagerClient_HidePasswordGenerationPopup_Params.validate = function(messageValidator, offset) {
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

  PasswordManagerClient_HidePasswordGenerationPopup_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordManagerClient_HidePasswordGenerationPopup_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordManagerClient_HidePasswordGenerationPopup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordManagerClient_HidePasswordGenerationPopup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordManagerClient_HidePasswordGenerationPopup_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kAutofillDriver_FormsSeen_Name = 1800839219;
  var kAutofillDriver_FormSubmitted_Name = 1603036303;
  var kAutofillDriver_TextFieldDidChange_Name = 1761487088;
  var kAutofillDriver_TextFieldDidScroll_Name = 1975592945;
  var kAutofillDriver_SelectControlDidChange_Name = 552036930;
  var kAutofillDriver_SelectFieldOptionsDidChange_Name = 357243727;
  var kAutofillDriver_QueryFormFieldAutofill_Name = 1924289780;
  var kAutofillDriver_HidePopup_Name = 711560379;
  var kAutofillDriver_FocusNoLongerOnForm_Name = 1313736359;
  var kAutofillDriver_FocusOnFormField_Name = 1701682731;
  var kAutofillDriver_DidFillAutofillFormData_Name = 268729676;
  var kAutofillDriver_DidPreviewAutofillFormData_Name = 340432667;
  var kAutofillDriver_DidEndTextFieldEditing_Name = 1536139201;
  var kAutofillDriver_SetDataList_Name = 130843550;

  function AutofillDriverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AutofillDriver,
                                                   handleOrPtrInfo);
  }

  function AutofillDriverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AutofillDriver, associatedInterfacePtrInfo);
  }

  AutofillDriverAssociatedPtr.prototype =
      Object.create(AutofillDriverPtr.prototype);
  AutofillDriverAssociatedPtr.prototype.constructor =
      AutofillDriverAssociatedPtr;

  function AutofillDriverProxy(receiver) {
    this.receiver_ = receiver;
  }
  AutofillDriverPtr.prototype.formsSeen = function() {
    return AutofillDriverProxy.prototype.formsSeen
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.formsSeen = function(forms, timestamp) {
    var params_ = new AutofillDriver_FormsSeen_Params();
    params_.forms = forms;
    params_.timestamp = timestamp;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_FormsSeen_Name,
        codec.align(AutofillDriver_FormsSeen_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FormsSeen_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.formSubmitted = function() {
    return AutofillDriverProxy.prototype.formSubmitted
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.formSubmitted = function(form, knownSuccess, source, timestamp) {
    var params_ = new AutofillDriver_FormSubmitted_Params();
    params_.form = form;
    params_.knownSuccess = knownSuccess;
    params_.source = source;
    params_.timestamp = timestamp;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_FormSubmitted_Name,
        codec.align(AutofillDriver_FormSubmitted_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FormSubmitted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.textFieldDidChange = function() {
    return AutofillDriverProxy.prototype.textFieldDidChange
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.textFieldDidChange = function(form, field, boundingBox, timestamp) {
    var params_ = new AutofillDriver_TextFieldDidChange_Params();
    params_.form = form;
    params_.field = field;
    params_.boundingBox = boundingBox;
    params_.timestamp = timestamp;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_TextFieldDidChange_Name,
        codec.align(AutofillDriver_TextFieldDidChange_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_TextFieldDidChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.textFieldDidScroll = function() {
    return AutofillDriverProxy.prototype.textFieldDidScroll
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.textFieldDidScroll = function(form, field, boundingBox) {
    var params_ = new AutofillDriver_TextFieldDidScroll_Params();
    params_.form = form;
    params_.field = field;
    params_.boundingBox = boundingBox;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_TextFieldDidScroll_Name,
        codec.align(AutofillDriver_TextFieldDidScroll_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_TextFieldDidScroll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.selectControlDidChange = function() {
    return AutofillDriverProxy.prototype.selectControlDidChange
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.selectControlDidChange = function(form, field, boundingBox) {
    var params_ = new AutofillDriver_SelectControlDidChange_Params();
    params_.form = form;
    params_.field = field;
    params_.boundingBox = boundingBox;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_SelectControlDidChange_Name,
        codec.align(AutofillDriver_SelectControlDidChange_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_SelectControlDidChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.selectFieldOptionsDidChange = function() {
    return AutofillDriverProxy.prototype.selectFieldOptionsDidChange
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.selectFieldOptionsDidChange = function(form) {
    var params_ = new AutofillDriver_SelectFieldOptionsDidChange_Params();
    params_.form = form;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_SelectFieldOptionsDidChange_Name,
        codec.align(AutofillDriver_SelectFieldOptionsDidChange_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_SelectFieldOptionsDidChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.queryFormFieldAutofill = function() {
    return AutofillDriverProxy.prototype.queryFormFieldAutofill
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.queryFormFieldAutofill = function(id, form, field, boundingBox) {
    var params_ = new AutofillDriver_QueryFormFieldAutofill_Params();
    params_.id = id;
    params_.form = form;
    params_.field = field;
    params_.boundingBox = boundingBox;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_QueryFormFieldAutofill_Name,
        codec.align(AutofillDriver_QueryFormFieldAutofill_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_QueryFormFieldAutofill_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.hidePopup = function() {
    return AutofillDriverProxy.prototype.hidePopup
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.hidePopup = function() {
    var params_ = new AutofillDriver_HidePopup_Params();
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_HidePopup_Name,
        codec.align(AutofillDriver_HidePopup_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_HidePopup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.focusNoLongerOnForm = function() {
    return AutofillDriverProxy.prototype.focusNoLongerOnForm
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.focusNoLongerOnForm = function() {
    var params_ = new AutofillDriver_FocusNoLongerOnForm_Params();
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_FocusNoLongerOnForm_Name,
        codec.align(AutofillDriver_FocusNoLongerOnForm_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FocusNoLongerOnForm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.focusOnFormField = function() {
    return AutofillDriverProxy.prototype.focusOnFormField
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.focusOnFormField = function(form, field, boundingBox) {
    var params_ = new AutofillDriver_FocusOnFormField_Params();
    params_.form = form;
    params_.field = field;
    params_.boundingBox = boundingBox;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_FocusOnFormField_Name,
        codec.align(AutofillDriver_FocusOnFormField_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_FocusOnFormField_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.didFillAutofillFormData = function() {
    return AutofillDriverProxy.prototype.didFillAutofillFormData
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.didFillAutofillFormData = function(form, timestamp) {
    var params_ = new AutofillDriver_DidFillAutofillFormData_Params();
    params_.form = form;
    params_.timestamp = timestamp;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_DidFillAutofillFormData_Name,
        codec.align(AutofillDriver_DidFillAutofillFormData_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_DidFillAutofillFormData_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.didPreviewAutofillFormData = function() {
    return AutofillDriverProxy.prototype.didPreviewAutofillFormData
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.didPreviewAutofillFormData = function() {
    var params_ = new AutofillDriver_DidPreviewAutofillFormData_Params();
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_DidPreviewAutofillFormData_Name,
        codec.align(AutofillDriver_DidPreviewAutofillFormData_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_DidPreviewAutofillFormData_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.didEndTextFieldEditing = function() {
    return AutofillDriverProxy.prototype.didEndTextFieldEditing
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.didEndTextFieldEditing = function() {
    var params_ = new AutofillDriver_DidEndTextFieldEditing_Params();
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_DidEndTextFieldEditing_Name,
        codec.align(AutofillDriver_DidEndTextFieldEditing_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_DidEndTextFieldEditing_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillDriverPtr.prototype.setDataList = function() {
    return AutofillDriverProxy.prototype.setDataList
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillDriverProxy.prototype.setDataList = function(values, labels) {
    var params_ = new AutofillDriver_SetDataList_Params();
    params_.values = values;
    params_.labels = labels;
    var builder = new codec.MessageV0Builder(
        kAutofillDriver_SetDataList_Name,
        codec.align(AutofillDriver_SetDataList_Params.encodedSize));
    builder.encodeStruct(AutofillDriver_SetDataList_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AutofillDriverStub(delegate) {
    this.delegate_ = delegate;
  }
  AutofillDriverStub.prototype.formsSeen = function(forms, timestamp) {
    return this.delegate_ && this.delegate_.formsSeen && this.delegate_.formsSeen(forms, timestamp);
  }
  AutofillDriverStub.prototype.formSubmitted = function(form, knownSuccess, source, timestamp) {
    return this.delegate_ && this.delegate_.formSubmitted && this.delegate_.formSubmitted(form, knownSuccess, source, timestamp);
  }
  AutofillDriverStub.prototype.textFieldDidChange = function(form, field, boundingBox, timestamp) {
    return this.delegate_ && this.delegate_.textFieldDidChange && this.delegate_.textFieldDidChange(form, field, boundingBox, timestamp);
  }
  AutofillDriverStub.prototype.textFieldDidScroll = function(form, field, boundingBox) {
    return this.delegate_ && this.delegate_.textFieldDidScroll && this.delegate_.textFieldDidScroll(form, field, boundingBox);
  }
  AutofillDriverStub.prototype.selectControlDidChange = function(form, field, boundingBox) {
    return this.delegate_ && this.delegate_.selectControlDidChange && this.delegate_.selectControlDidChange(form, field, boundingBox);
  }
  AutofillDriverStub.prototype.selectFieldOptionsDidChange = function(form) {
    return this.delegate_ && this.delegate_.selectFieldOptionsDidChange && this.delegate_.selectFieldOptionsDidChange(form);
  }
  AutofillDriverStub.prototype.queryFormFieldAutofill = function(id, form, field, boundingBox) {
    return this.delegate_ && this.delegate_.queryFormFieldAutofill && this.delegate_.queryFormFieldAutofill(id, form, field, boundingBox);
  }
  AutofillDriverStub.prototype.hidePopup = function() {
    return this.delegate_ && this.delegate_.hidePopup && this.delegate_.hidePopup();
  }
  AutofillDriverStub.prototype.focusNoLongerOnForm = function() {
    return this.delegate_ && this.delegate_.focusNoLongerOnForm && this.delegate_.focusNoLongerOnForm();
  }
  AutofillDriverStub.prototype.focusOnFormField = function(form, field, boundingBox) {
    return this.delegate_ && this.delegate_.focusOnFormField && this.delegate_.focusOnFormField(form, field, boundingBox);
  }
  AutofillDriverStub.prototype.didFillAutofillFormData = function(form, timestamp) {
    return this.delegate_ && this.delegate_.didFillAutofillFormData && this.delegate_.didFillAutofillFormData(form, timestamp);
  }
  AutofillDriverStub.prototype.didPreviewAutofillFormData = function() {
    return this.delegate_ && this.delegate_.didPreviewAutofillFormData && this.delegate_.didPreviewAutofillFormData();
  }
  AutofillDriverStub.prototype.didEndTextFieldEditing = function() {
    return this.delegate_ && this.delegate_.didEndTextFieldEditing && this.delegate_.didEndTextFieldEditing();
  }
  AutofillDriverStub.prototype.setDataList = function(values, labels) {
    return this.delegate_ && this.delegate_.setDataList && this.delegate_.setDataList(values, labels);
  }

  AutofillDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAutofillDriver_FormsSeen_Name:
      var params = reader.decodeStruct(AutofillDriver_FormsSeen_Params);
      this.formsSeen(params.forms, params.timestamp);
      return true;
    case kAutofillDriver_FormSubmitted_Name:
      var params = reader.decodeStruct(AutofillDriver_FormSubmitted_Params);
      this.formSubmitted(params.form, params.knownSuccess, params.source, params.timestamp);
      return true;
    case kAutofillDriver_TextFieldDidChange_Name:
      var params = reader.decodeStruct(AutofillDriver_TextFieldDidChange_Params);
      this.textFieldDidChange(params.form, params.field, params.boundingBox, params.timestamp);
      return true;
    case kAutofillDriver_TextFieldDidScroll_Name:
      var params = reader.decodeStruct(AutofillDriver_TextFieldDidScroll_Params);
      this.textFieldDidScroll(params.form, params.field, params.boundingBox);
      return true;
    case kAutofillDriver_SelectControlDidChange_Name:
      var params = reader.decodeStruct(AutofillDriver_SelectControlDidChange_Params);
      this.selectControlDidChange(params.form, params.field, params.boundingBox);
      return true;
    case kAutofillDriver_SelectFieldOptionsDidChange_Name:
      var params = reader.decodeStruct(AutofillDriver_SelectFieldOptionsDidChange_Params);
      this.selectFieldOptionsDidChange(params.form);
      return true;
    case kAutofillDriver_QueryFormFieldAutofill_Name:
      var params = reader.decodeStruct(AutofillDriver_QueryFormFieldAutofill_Params);
      this.queryFormFieldAutofill(params.id, params.form, params.field, params.boundingBox);
      return true;
    case kAutofillDriver_HidePopup_Name:
      var params = reader.decodeStruct(AutofillDriver_HidePopup_Params);
      this.hidePopup();
      return true;
    case kAutofillDriver_FocusNoLongerOnForm_Name:
      var params = reader.decodeStruct(AutofillDriver_FocusNoLongerOnForm_Params);
      this.focusNoLongerOnForm();
      return true;
    case kAutofillDriver_FocusOnFormField_Name:
      var params = reader.decodeStruct(AutofillDriver_FocusOnFormField_Params);
      this.focusOnFormField(params.form, params.field, params.boundingBox);
      return true;
    case kAutofillDriver_DidFillAutofillFormData_Name:
      var params = reader.decodeStruct(AutofillDriver_DidFillAutofillFormData_Params);
      this.didFillAutofillFormData(params.form, params.timestamp);
      return true;
    case kAutofillDriver_DidPreviewAutofillFormData_Name:
      var params = reader.decodeStruct(AutofillDriver_DidPreviewAutofillFormData_Params);
      this.didPreviewAutofillFormData();
      return true;
    case kAutofillDriver_DidEndTextFieldEditing_Name:
      var params = reader.decodeStruct(AutofillDriver_DidEndTextFieldEditing_Params);
      this.didEndTextFieldEditing();
      return true;
    case kAutofillDriver_SetDataList_Name:
      var params = reader.decodeStruct(AutofillDriver_SetDataList_Params);
      this.setDataList(params.values, params.labels);
      return true;
    default:
      return false;
    }
  };

  AutofillDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAutofillDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAutofillDriver_FormsSeen_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FormsSeen_Params;
      break;
      case kAutofillDriver_FormSubmitted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FormSubmitted_Params;
      break;
      case kAutofillDriver_TextFieldDidChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_TextFieldDidChange_Params;
      break;
      case kAutofillDriver_TextFieldDidScroll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_TextFieldDidScroll_Params;
      break;
      case kAutofillDriver_SelectControlDidChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_SelectControlDidChange_Params;
      break;
      case kAutofillDriver_SelectFieldOptionsDidChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_SelectFieldOptionsDidChange_Params;
      break;
      case kAutofillDriver_QueryFormFieldAutofill_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_QueryFormFieldAutofill_Params;
      break;
      case kAutofillDriver_HidePopup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_HidePopup_Params;
      break;
      case kAutofillDriver_FocusNoLongerOnForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FocusNoLongerOnForm_Params;
      break;
      case kAutofillDriver_FocusOnFormField_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_FocusOnFormField_Params;
      break;
      case kAutofillDriver_DidFillAutofillFormData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_DidFillAutofillFormData_Params;
      break;
      case kAutofillDriver_DidPreviewAutofillFormData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_DidPreviewAutofillFormData_Params;
      break;
      case kAutofillDriver_DidEndTextFieldEditing_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_DidEndTextFieldEditing_Params;
      break;
      case kAutofillDriver_SetDataList_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillDriver_SetDataList_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAutofillDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AutofillDriver = {
    name: 'autofill.mojom.AutofillDriver',
    kVersion: 0,
    ptrClass: AutofillDriverPtr,
    proxyClass: AutofillDriverProxy,
    stubClass: AutofillDriverStub,
    validateRequest: validateAutofillDriverRequest,
    validateResponse: null,
    mojomId: 'components/autofill/content/common/autofill_driver.mojom',
    fuzzMethods: {
      formsSeen: {
        params: AutofillDriver_FormsSeen_Params,
      },
      formSubmitted: {
        params: AutofillDriver_FormSubmitted_Params,
      },
      textFieldDidChange: {
        params: AutofillDriver_TextFieldDidChange_Params,
      },
      textFieldDidScroll: {
        params: AutofillDriver_TextFieldDidScroll_Params,
      },
      selectControlDidChange: {
        params: AutofillDriver_SelectControlDidChange_Params,
      },
      selectFieldOptionsDidChange: {
        params: AutofillDriver_SelectFieldOptionsDidChange_Params,
      },
      queryFormFieldAutofill: {
        params: AutofillDriver_QueryFormFieldAutofill_Params,
      },
      hidePopup: {
        params: AutofillDriver_HidePopup_Params,
      },
      focusNoLongerOnForm: {
        params: AutofillDriver_FocusNoLongerOnForm_Params,
      },
      focusOnFormField: {
        params: AutofillDriver_FocusOnFormField_Params,
      },
      didFillAutofillFormData: {
        params: AutofillDriver_DidFillAutofillFormData_Params,
      },
      didPreviewAutofillFormData: {
        params: AutofillDriver_DidPreviewAutofillFormData_Params,
      },
      didEndTextFieldEditing: {
        params: AutofillDriver_DidEndTextFieldEditing_Params,
      },
      setDataList: {
        params: AutofillDriver_SetDataList_Params,
      },
    },
  };
  AutofillDriverStub.prototype.validator = validateAutofillDriverRequest;
  AutofillDriverProxy.prototype.validator = null;
  var kPasswordManagerDriver_PasswordFormsParsed_Name = 1230585859;
  var kPasswordManagerDriver_PasswordFormsRendered_Name = 981067721;
  var kPasswordManagerDriver_PasswordFormSubmitted_Name = 563257872;
  var kPasswordManagerDriver_ShowManualFallbackForSaving_Name = 436745123;
  var kPasswordManagerDriver_HideManualFallbackForSaving_Name = 1309713847;
  var kPasswordManagerDriver_SameDocumentNavigation_Name = 2038518669;
  var kPasswordManagerDriver_RecordSavePasswordProgress_Name = 294555761;
  var kPasswordManagerDriver_UserModifiedPasswordField_Name = 376845145;
  var kPasswordManagerDriver_ShowPasswordSuggestions_Name = 1629634864;
  var kPasswordManagerDriver_ShowManualFallbackSuggestion_Name = 234167736;
  var kPasswordManagerDriver_PresaveGeneratedPassword_Name = 1701295777;
  var kPasswordManagerDriver_PasswordNoLongerGenerated_Name = 778300311;
  var kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name = 706987276;
  var kPasswordManagerDriver_CheckSafeBrowsingReputation_Name = 1358622876;

  function PasswordManagerDriverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PasswordManagerDriver,
                                                   handleOrPtrInfo);
  }

  function PasswordManagerDriverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PasswordManagerDriver, associatedInterfacePtrInfo);
  }

  PasswordManagerDriverAssociatedPtr.prototype =
      Object.create(PasswordManagerDriverPtr.prototype);
  PasswordManagerDriverAssociatedPtr.prototype.constructor =
      PasswordManagerDriverAssociatedPtr;

  function PasswordManagerDriverProxy(receiver) {
    this.receiver_ = receiver;
  }
  PasswordManagerDriverPtr.prototype.passwordFormsParsed = function() {
    return PasswordManagerDriverProxy.prototype.passwordFormsParsed
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.passwordFormsParsed = function(forms) {
    var params_ = new PasswordManagerDriver_PasswordFormsParsed_Params();
    params_.forms = forms;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_PasswordFormsParsed_Name,
        codec.align(PasswordManagerDriver_PasswordFormsParsed_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordFormsParsed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.passwordFormsRendered = function() {
    return PasswordManagerDriverProxy.prototype.passwordFormsRendered
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.passwordFormsRendered = function(visibleForms, didStopLoading) {
    var params_ = new PasswordManagerDriver_PasswordFormsRendered_Params();
    params_.visibleForms = visibleForms;
    params_.didStopLoading = didStopLoading;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_PasswordFormsRendered_Name,
        codec.align(PasswordManagerDriver_PasswordFormsRendered_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordFormsRendered_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.passwordFormSubmitted = function() {
    return PasswordManagerDriverProxy.prototype.passwordFormSubmitted
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.passwordFormSubmitted = function(passwordForm) {
    var params_ = new PasswordManagerDriver_PasswordFormSubmitted_Params();
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_PasswordFormSubmitted_Name,
        codec.align(PasswordManagerDriver_PasswordFormSubmitted_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordFormSubmitted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.showManualFallbackForSaving = function() {
    return PasswordManagerDriverProxy.prototype.showManualFallbackForSaving
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.showManualFallbackForSaving = function(passwordForm) {
    var params_ = new PasswordManagerDriver_ShowManualFallbackForSaving_Params();
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_ShowManualFallbackForSaving_Name,
        codec.align(PasswordManagerDriver_ShowManualFallbackForSaving_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_ShowManualFallbackForSaving_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.hideManualFallbackForSaving = function() {
    return PasswordManagerDriverProxy.prototype.hideManualFallbackForSaving
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.hideManualFallbackForSaving = function() {
    var params_ = new PasswordManagerDriver_HideManualFallbackForSaving_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_HideManualFallbackForSaving_Name,
        codec.align(PasswordManagerDriver_HideManualFallbackForSaving_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_HideManualFallbackForSaving_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.sameDocumentNavigation = function() {
    return PasswordManagerDriverProxy.prototype.sameDocumentNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.sameDocumentNavigation = function(passwordForm) {
    var params_ = new PasswordManagerDriver_SameDocumentNavigation_Params();
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_SameDocumentNavigation_Name,
        codec.align(PasswordManagerDriver_SameDocumentNavigation_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_SameDocumentNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.recordSavePasswordProgress = function() {
    return PasswordManagerDriverProxy.prototype.recordSavePasswordProgress
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.recordSavePasswordProgress = function(log) {
    var params_ = new PasswordManagerDriver_RecordSavePasswordProgress_Params();
    params_.log = log;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_RecordSavePasswordProgress_Name,
        codec.align(PasswordManagerDriver_RecordSavePasswordProgress_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_RecordSavePasswordProgress_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.userModifiedPasswordField = function() {
    return PasswordManagerDriverProxy.prototype.userModifiedPasswordField
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.userModifiedPasswordField = function() {
    var params_ = new PasswordManagerDriver_UserModifiedPasswordField_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_UserModifiedPasswordField_Name,
        codec.align(PasswordManagerDriver_UserModifiedPasswordField_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_UserModifiedPasswordField_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.showPasswordSuggestions = function() {
    return PasswordManagerDriverProxy.prototype.showPasswordSuggestions
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.showPasswordSuggestions = function(key, textDirection, typedUsername, options, bounds) {
    var params_ = new PasswordManagerDriver_ShowPasswordSuggestions_Params();
    params_.key = key;
    params_.textDirection = textDirection;
    params_.typedUsername = typedUsername;
    params_.options = options;
    params_.bounds = bounds;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_ShowPasswordSuggestions_Name,
        codec.align(PasswordManagerDriver_ShowPasswordSuggestions_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_ShowPasswordSuggestions_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.showManualFallbackSuggestion = function() {
    return PasswordManagerDriverProxy.prototype.showManualFallbackSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.showManualFallbackSuggestion = function(textDirection, bounds) {
    var params_ = new PasswordManagerDriver_ShowManualFallbackSuggestion_Params();
    params_.textDirection = textDirection;
    params_.bounds = bounds;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_ShowManualFallbackSuggestion_Name,
        codec.align(PasswordManagerDriver_ShowManualFallbackSuggestion_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_ShowManualFallbackSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.presaveGeneratedPassword = function() {
    return PasswordManagerDriverProxy.prototype.presaveGeneratedPassword
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.presaveGeneratedPassword = function(passwordForm) {
    var params_ = new PasswordManagerDriver_PresaveGeneratedPassword_Params();
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_PresaveGeneratedPassword_Name,
        codec.align(PasswordManagerDriver_PresaveGeneratedPassword_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PresaveGeneratedPassword_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.passwordNoLongerGenerated = function() {
    return PasswordManagerDriverProxy.prototype.passwordNoLongerGenerated
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.passwordNoLongerGenerated = function(passwordForm) {
    var params_ = new PasswordManagerDriver_PasswordNoLongerGenerated_Params();
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_PasswordNoLongerGenerated_Name,
        codec.align(PasswordManagerDriver_PasswordNoLongerGenerated_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_PasswordNoLongerGenerated_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.saveGenerationFieldDetectedByClassifier = function() {
    return PasswordManagerDriverProxy.prototype.saveGenerationFieldDetectedByClassifier
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.saveGenerationFieldDetectedByClassifier = function(passwordForm, generationField) {
    var params_ = new PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params();
    params_.passwordForm = passwordForm;
    params_.generationField = generationField;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name,
        codec.align(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerDriverPtr.prototype.checkSafeBrowsingReputation = function() {
    return PasswordManagerDriverProxy.prototype.checkSafeBrowsingReputation
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerDriverProxy.prototype.checkSafeBrowsingReputation = function(formAction, frameUrl) {
    var params_ = new PasswordManagerDriver_CheckSafeBrowsingReputation_Params();
    params_.formAction = formAction;
    params_.frameUrl = frameUrl;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerDriver_CheckSafeBrowsingReputation_Name,
        codec.align(PasswordManagerDriver_CheckSafeBrowsingReputation_Params.encodedSize));
    builder.encodeStruct(PasswordManagerDriver_CheckSafeBrowsingReputation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PasswordManagerDriverStub(delegate) {
    this.delegate_ = delegate;
  }
  PasswordManagerDriverStub.prototype.passwordFormsParsed = function(forms) {
    return this.delegate_ && this.delegate_.passwordFormsParsed && this.delegate_.passwordFormsParsed(forms);
  }
  PasswordManagerDriverStub.prototype.passwordFormsRendered = function(visibleForms, didStopLoading) {
    return this.delegate_ && this.delegate_.passwordFormsRendered && this.delegate_.passwordFormsRendered(visibleForms, didStopLoading);
  }
  PasswordManagerDriverStub.prototype.passwordFormSubmitted = function(passwordForm) {
    return this.delegate_ && this.delegate_.passwordFormSubmitted && this.delegate_.passwordFormSubmitted(passwordForm);
  }
  PasswordManagerDriverStub.prototype.showManualFallbackForSaving = function(passwordForm) {
    return this.delegate_ && this.delegate_.showManualFallbackForSaving && this.delegate_.showManualFallbackForSaving(passwordForm);
  }
  PasswordManagerDriverStub.prototype.hideManualFallbackForSaving = function() {
    return this.delegate_ && this.delegate_.hideManualFallbackForSaving && this.delegate_.hideManualFallbackForSaving();
  }
  PasswordManagerDriverStub.prototype.sameDocumentNavigation = function(passwordForm) {
    return this.delegate_ && this.delegate_.sameDocumentNavigation && this.delegate_.sameDocumentNavigation(passwordForm);
  }
  PasswordManagerDriverStub.prototype.recordSavePasswordProgress = function(log) {
    return this.delegate_ && this.delegate_.recordSavePasswordProgress && this.delegate_.recordSavePasswordProgress(log);
  }
  PasswordManagerDriverStub.prototype.userModifiedPasswordField = function() {
    return this.delegate_ && this.delegate_.userModifiedPasswordField && this.delegate_.userModifiedPasswordField();
  }
  PasswordManagerDriverStub.prototype.showPasswordSuggestions = function(key, textDirection, typedUsername, options, bounds) {
    return this.delegate_ && this.delegate_.showPasswordSuggestions && this.delegate_.showPasswordSuggestions(key, textDirection, typedUsername, options, bounds);
  }
  PasswordManagerDriverStub.prototype.showManualFallbackSuggestion = function(textDirection, bounds) {
    return this.delegate_ && this.delegate_.showManualFallbackSuggestion && this.delegate_.showManualFallbackSuggestion(textDirection, bounds);
  }
  PasswordManagerDriverStub.prototype.presaveGeneratedPassword = function(passwordForm) {
    return this.delegate_ && this.delegate_.presaveGeneratedPassword && this.delegate_.presaveGeneratedPassword(passwordForm);
  }
  PasswordManagerDriverStub.prototype.passwordNoLongerGenerated = function(passwordForm) {
    return this.delegate_ && this.delegate_.passwordNoLongerGenerated && this.delegate_.passwordNoLongerGenerated(passwordForm);
  }
  PasswordManagerDriverStub.prototype.saveGenerationFieldDetectedByClassifier = function(passwordForm, generationField) {
    return this.delegate_ && this.delegate_.saveGenerationFieldDetectedByClassifier && this.delegate_.saveGenerationFieldDetectedByClassifier(passwordForm, generationField);
  }
  PasswordManagerDriverStub.prototype.checkSafeBrowsingReputation = function(formAction, frameUrl) {
    return this.delegate_ && this.delegate_.checkSafeBrowsingReputation && this.delegate_.checkSafeBrowsingReputation(formAction, frameUrl);
  }

  PasswordManagerDriverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPasswordManagerDriver_PasswordFormsParsed_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordFormsParsed_Params);
      this.passwordFormsParsed(params.forms);
      return true;
    case kPasswordManagerDriver_PasswordFormsRendered_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordFormsRendered_Params);
      this.passwordFormsRendered(params.visibleForms, params.didStopLoading);
      return true;
    case kPasswordManagerDriver_PasswordFormSubmitted_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordFormSubmitted_Params);
      this.passwordFormSubmitted(params.passwordForm);
      return true;
    case kPasswordManagerDriver_ShowManualFallbackForSaving_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_ShowManualFallbackForSaving_Params);
      this.showManualFallbackForSaving(params.passwordForm);
      return true;
    case kPasswordManagerDriver_HideManualFallbackForSaving_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_HideManualFallbackForSaving_Params);
      this.hideManualFallbackForSaving();
      return true;
    case kPasswordManagerDriver_SameDocumentNavigation_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_SameDocumentNavigation_Params);
      this.sameDocumentNavigation(params.passwordForm);
      return true;
    case kPasswordManagerDriver_RecordSavePasswordProgress_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_RecordSavePasswordProgress_Params);
      this.recordSavePasswordProgress(params.log);
      return true;
    case kPasswordManagerDriver_UserModifiedPasswordField_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_UserModifiedPasswordField_Params);
      this.userModifiedPasswordField();
      return true;
    case kPasswordManagerDriver_ShowPasswordSuggestions_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_ShowPasswordSuggestions_Params);
      this.showPasswordSuggestions(params.key, params.textDirection, params.typedUsername, params.options, params.bounds);
      return true;
    case kPasswordManagerDriver_ShowManualFallbackSuggestion_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_ShowManualFallbackSuggestion_Params);
      this.showManualFallbackSuggestion(params.textDirection, params.bounds);
      return true;
    case kPasswordManagerDriver_PresaveGeneratedPassword_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PresaveGeneratedPassword_Params);
      this.presaveGeneratedPassword(params.passwordForm);
      return true;
    case kPasswordManagerDriver_PasswordNoLongerGenerated_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_PasswordNoLongerGenerated_Params);
      this.passwordNoLongerGenerated(params.passwordForm);
      return true;
    case kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params);
      this.saveGenerationFieldDetectedByClassifier(params.passwordForm, params.generationField);
      return true;
    case kPasswordManagerDriver_CheckSafeBrowsingReputation_Name:
      var params = reader.decodeStruct(PasswordManagerDriver_CheckSafeBrowsingReputation_Params);
      this.checkSafeBrowsingReputation(params.formAction, params.frameUrl);
      return true;
    default:
      return false;
    }
  };

  PasswordManagerDriverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePasswordManagerDriverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPasswordManagerDriver_PasswordFormsParsed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordFormsParsed_Params;
      break;
      case kPasswordManagerDriver_PasswordFormsRendered_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordFormsRendered_Params;
      break;
      case kPasswordManagerDriver_PasswordFormSubmitted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordFormSubmitted_Params;
      break;
      case kPasswordManagerDriver_ShowManualFallbackForSaving_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_ShowManualFallbackForSaving_Params;
      break;
      case kPasswordManagerDriver_HideManualFallbackForSaving_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_HideManualFallbackForSaving_Params;
      break;
      case kPasswordManagerDriver_SameDocumentNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_SameDocumentNavigation_Params;
      break;
      case kPasswordManagerDriver_RecordSavePasswordProgress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_RecordSavePasswordProgress_Params;
      break;
      case kPasswordManagerDriver_UserModifiedPasswordField_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_UserModifiedPasswordField_Params;
      break;
      case kPasswordManagerDriver_ShowPasswordSuggestions_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_ShowPasswordSuggestions_Params;
      break;
      case kPasswordManagerDriver_ShowManualFallbackSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_ShowManualFallbackSuggestion_Params;
      break;
      case kPasswordManagerDriver_PresaveGeneratedPassword_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PresaveGeneratedPassword_Params;
      break;
      case kPasswordManagerDriver_PasswordNoLongerGenerated_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_PasswordNoLongerGenerated_Params;
      break;
      case kPasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params;
      break;
      case kPasswordManagerDriver_CheckSafeBrowsingReputation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerDriver_CheckSafeBrowsingReputation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePasswordManagerDriverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PasswordManagerDriver = {
    name: 'autofill.mojom.PasswordManagerDriver',
    kVersion: 0,
    ptrClass: PasswordManagerDriverPtr,
    proxyClass: PasswordManagerDriverProxy,
    stubClass: PasswordManagerDriverStub,
    validateRequest: validatePasswordManagerDriverRequest,
    validateResponse: null,
    mojomId: 'components/autofill/content/common/autofill_driver.mojom',
    fuzzMethods: {
      passwordFormsParsed: {
        params: PasswordManagerDriver_PasswordFormsParsed_Params,
      },
      passwordFormsRendered: {
        params: PasswordManagerDriver_PasswordFormsRendered_Params,
      },
      passwordFormSubmitted: {
        params: PasswordManagerDriver_PasswordFormSubmitted_Params,
      },
      showManualFallbackForSaving: {
        params: PasswordManagerDriver_ShowManualFallbackForSaving_Params,
      },
      hideManualFallbackForSaving: {
        params: PasswordManagerDriver_HideManualFallbackForSaving_Params,
      },
      sameDocumentNavigation: {
        params: PasswordManagerDriver_SameDocumentNavigation_Params,
      },
      recordSavePasswordProgress: {
        params: PasswordManagerDriver_RecordSavePasswordProgress_Params,
      },
      userModifiedPasswordField: {
        params: PasswordManagerDriver_UserModifiedPasswordField_Params,
      },
      showPasswordSuggestions: {
        params: PasswordManagerDriver_ShowPasswordSuggestions_Params,
      },
      showManualFallbackSuggestion: {
        params: PasswordManagerDriver_ShowManualFallbackSuggestion_Params,
      },
      presaveGeneratedPassword: {
        params: PasswordManagerDriver_PresaveGeneratedPassword_Params,
      },
      passwordNoLongerGenerated: {
        params: PasswordManagerDriver_PasswordNoLongerGenerated_Params,
      },
      saveGenerationFieldDetectedByClassifier: {
        params: PasswordManagerDriver_SaveGenerationFieldDetectedByClassifier_Params,
      },
      checkSafeBrowsingReputation: {
        params: PasswordManagerDriver_CheckSafeBrowsingReputation_Params,
      },
    },
  };
  PasswordManagerDriverStub.prototype.validator = validatePasswordManagerDriverRequest;
  PasswordManagerDriverProxy.prototype.validator = null;
  var kPasswordManagerClient_GenerationAvailableForForm_Name = 1474041243;
  var kPasswordManagerClient_ShowPasswordGenerationPopup_Name = 353079853;
  var kPasswordManagerClient_ShowPasswordEditingPopup_Name = 1616560626;
  var kPasswordManagerClient_HidePasswordGenerationPopup_Name = 1838861804;

  function PasswordManagerClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PasswordManagerClient,
                                                   handleOrPtrInfo);
  }

  function PasswordManagerClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PasswordManagerClient, associatedInterfacePtrInfo);
  }

  PasswordManagerClientAssociatedPtr.prototype =
      Object.create(PasswordManagerClientPtr.prototype);
  PasswordManagerClientAssociatedPtr.prototype.constructor =
      PasswordManagerClientAssociatedPtr;

  function PasswordManagerClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  PasswordManagerClientPtr.prototype.generationAvailableForForm = function() {
    return PasswordManagerClientProxy.prototype.generationAvailableForForm
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerClientProxy.prototype.generationAvailableForForm = function(passwordForm) {
    var params_ = new PasswordManagerClient_GenerationAvailableForForm_Params();
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerClient_GenerationAvailableForForm_Name,
        codec.align(PasswordManagerClient_GenerationAvailableForForm_Params.encodedSize));
    builder.encodeStruct(PasswordManagerClient_GenerationAvailableForForm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerClientPtr.prototype.showPasswordGenerationPopup = function() {
    return PasswordManagerClientProxy.prototype.showPasswordGenerationPopup
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerClientProxy.prototype.showPasswordGenerationPopup = function(bounds, maxLength, generationElement, isManuallyTriggered, passwordForm) {
    var params_ = new PasswordManagerClient_ShowPasswordGenerationPopup_Params();
    params_.bounds = bounds;
    params_.maxLength = maxLength;
    params_.generationElement = generationElement;
    params_.isManuallyTriggered = isManuallyTriggered;
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerClient_ShowPasswordGenerationPopup_Name,
        codec.align(PasswordManagerClient_ShowPasswordGenerationPopup_Params.encodedSize));
    builder.encodeStruct(PasswordManagerClient_ShowPasswordGenerationPopup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerClientPtr.prototype.showPasswordEditingPopup = function() {
    return PasswordManagerClientProxy.prototype.showPasswordEditingPopup
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerClientProxy.prototype.showPasswordEditingPopup = function(bounds, passwordForm) {
    var params_ = new PasswordManagerClient_ShowPasswordEditingPopup_Params();
    params_.bounds = bounds;
    params_.passwordForm = passwordForm;
    var builder = new codec.MessageV0Builder(
        kPasswordManagerClient_ShowPasswordEditingPopup_Name,
        codec.align(PasswordManagerClient_ShowPasswordEditingPopup_Params.encodedSize));
    builder.encodeStruct(PasswordManagerClient_ShowPasswordEditingPopup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordManagerClientPtr.prototype.hidePasswordGenerationPopup = function() {
    return PasswordManagerClientProxy.prototype.hidePasswordGenerationPopup
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordManagerClientProxy.prototype.hidePasswordGenerationPopup = function() {
    var params_ = new PasswordManagerClient_HidePasswordGenerationPopup_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordManagerClient_HidePasswordGenerationPopup_Name,
        codec.align(PasswordManagerClient_HidePasswordGenerationPopup_Params.encodedSize));
    builder.encodeStruct(PasswordManagerClient_HidePasswordGenerationPopup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PasswordManagerClientStub(delegate) {
    this.delegate_ = delegate;
  }
  PasswordManagerClientStub.prototype.generationAvailableForForm = function(passwordForm) {
    return this.delegate_ && this.delegate_.generationAvailableForForm && this.delegate_.generationAvailableForForm(passwordForm);
  }
  PasswordManagerClientStub.prototype.showPasswordGenerationPopup = function(bounds, maxLength, generationElement, isManuallyTriggered, passwordForm) {
    return this.delegate_ && this.delegate_.showPasswordGenerationPopup && this.delegate_.showPasswordGenerationPopup(bounds, maxLength, generationElement, isManuallyTriggered, passwordForm);
  }
  PasswordManagerClientStub.prototype.showPasswordEditingPopup = function(bounds, passwordForm) {
    return this.delegate_ && this.delegate_.showPasswordEditingPopup && this.delegate_.showPasswordEditingPopup(bounds, passwordForm);
  }
  PasswordManagerClientStub.prototype.hidePasswordGenerationPopup = function() {
    return this.delegate_ && this.delegate_.hidePasswordGenerationPopup && this.delegate_.hidePasswordGenerationPopup();
  }

  PasswordManagerClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPasswordManagerClient_GenerationAvailableForForm_Name:
      var params = reader.decodeStruct(PasswordManagerClient_GenerationAvailableForForm_Params);
      this.generationAvailableForForm(params.passwordForm);
      return true;
    case kPasswordManagerClient_ShowPasswordGenerationPopup_Name:
      var params = reader.decodeStruct(PasswordManagerClient_ShowPasswordGenerationPopup_Params);
      this.showPasswordGenerationPopup(params.bounds, params.maxLength, params.generationElement, params.isManuallyTriggered, params.passwordForm);
      return true;
    case kPasswordManagerClient_ShowPasswordEditingPopup_Name:
      var params = reader.decodeStruct(PasswordManagerClient_ShowPasswordEditingPopup_Params);
      this.showPasswordEditingPopup(params.bounds, params.passwordForm);
      return true;
    case kPasswordManagerClient_HidePasswordGenerationPopup_Name:
      var params = reader.decodeStruct(PasswordManagerClient_HidePasswordGenerationPopup_Params);
      this.hidePasswordGenerationPopup();
      return true;
    default:
      return false;
    }
  };

  PasswordManagerClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePasswordManagerClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPasswordManagerClient_GenerationAvailableForForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerClient_GenerationAvailableForForm_Params;
      break;
      case kPasswordManagerClient_ShowPasswordGenerationPopup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerClient_ShowPasswordGenerationPopup_Params;
      break;
      case kPasswordManagerClient_ShowPasswordEditingPopup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerClient_ShowPasswordEditingPopup_Params;
      break;
      case kPasswordManagerClient_HidePasswordGenerationPopup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordManagerClient_HidePasswordGenerationPopup_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePasswordManagerClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PasswordManagerClient = {
    name: 'autofill.mojom.PasswordManagerClient',
    kVersion: 0,
    ptrClass: PasswordManagerClientPtr,
    proxyClass: PasswordManagerClientProxy,
    stubClass: PasswordManagerClientStub,
    validateRequest: validatePasswordManagerClientRequest,
    validateResponse: null,
    mojomId: 'components/autofill/content/common/autofill_driver.mojom',
    fuzzMethods: {
      generationAvailableForForm: {
        params: PasswordManagerClient_GenerationAvailableForForm_Params,
      },
      showPasswordGenerationPopup: {
        params: PasswordManagerClient_ShowPasswordGenerationPopup_Params,
      },
      showPasswordEditingPopup: {
        params: PasswordManagerClient_ShowPasswordEditingPopup_Params,
      },
      hidePasswordGenerationPopup: {
        params: PasswordManagerClient_HidePasswordGenerationPopup_Params,
      },
    },
  };
  PasswordManagerClientStub.prototype.validator = validatePasswordManagerClientRequest;
  PasswordManagerClientProxy.prototype.validator = null;
  exports.AutofillDriver = AutofillDriver;
  exports.AutofillDriverPtr = AutofillDriverPtr;
  exports.AutofillDriverAssociatedPtr = AutofillDriverAssociatedPtr;
  exports.PasswordManagerDriver = PasswordManagerDriver;
  exports.PasswordManagerDriverPtr = PasswordManagerDriverPtr;
  exports.PasswordManagerDriverAssociatedPtr = PasswordManagerDriverAssociatedPtr;
  exports.PasswordManagerClient = PasswordManagerClient;
  exports.PasswordManagerClientPtr = PasswordManagerClientPtr;
  exports.PasswordManagerClientAssociatedPtr = PasswordManagerClientAssociatedPtr;
})();