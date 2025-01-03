// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/autofill/content/common/autofill_agent.mojom';
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



  function AutofillAgent_FillForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_FillForm_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.form = null;
  };
  AutofillAgent_FillForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_FillForm_Params.generate = function(generator_) {
    var generated = new AutofillAgent_FillForm_Params;
    generated.id = generator_.generateInt32();
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    return generated;
  };

  AutofillAgent_FillForm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    return this;
  };
  AutofillAgent_FillForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_FillForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_FillForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_FillForm_Params.validate = function(messageValidator, offset) {
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



    // validate AutofillAgent_FillForm_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_FillForm_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillAgent_FillForm_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_FillForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    return val;
  };

  AutofillAgent_FillForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_FillForm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
  };
  function AutofillAgent_PreviewForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_PreviewForm_Params.prototype.initDefaults_ = function() {
    this.id = 0;
    this.form = null;
  };
  AutofillAgent_PreviewForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_PreviewForm_Params.generate = function(generator_) {
    var generated = new AutofillAgent_PreviewForm_Params;
    generated.id = generator_.generateInt32();
    generated.form = generator_.generateStruct(autofill.mojom.FormData, false);
    return generated;
  };

  AutofillAgent_PreviewForm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    return this;
  };
  AutofillAgent_PreviewForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_PreviewForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_PreviewForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_PreviewForm_Params.validate = function(messageValidator, offset) {
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



    // validate AutofillAgent_PreviewForm_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.FormData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_PreviewForm_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillAgent_PreviewForm_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_PreviewForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.form = decoder.decodeStructPointer(autofill_types$.FormData);
    return val;
  };

  AutofillAgent_PreviewForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_PreviewForm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(autofill_types$.FormData, val.form);
  };
  function AutofillAgent_FieldTypePredictionsAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_FieldTypePredictionsAvailable_Params.prototype.initDefaults_ = function() {
    this.forms = null;
  };
  AutofillAgent_FieldTypePredictionsAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_FieldTypePredictionsAvailable_Params.generate = function(generator_) {
    var generated = new AutofillAgent_FieldTypePredictionsAvailable_Params;
    generated.forms = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.FormDataPredictions, false);
    });
    return generated;
  };

  AutofillAgent_FieldTypePredictionsAvailable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.forms = mutator_.mutateArray(this.forms, function(val) {
        return mutator_.mutateStruct(autofill.mojom.FormDataPredictions, false);
      });
    }
    return this;
  };
  AutofillAgent_FieldTypePredictionsAvailable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_FieldTypePredictionsAvailable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_FieldTypePredictionsAvailable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_FieldTypePredictionsAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillAgent_FieldTypePredictionsAvailable_Params.forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.FormDataPredictions), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_FieldTypePredictionsAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_FieldTypePredictionsAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_FieldTypePredictionsAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.FormDataPredictions));
    return val;
  };

  AutofillAgent_FieldTypePredictionsAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_FieldTypePredictionsAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.FormDataPredictions), val.forms);
  };
  function AutofillAgent_ClearSection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_ClearSection_Params.prototype.initDefaults_ = function() {
  };
  AutofillAgent_ClearSection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_ClearSection_Params.generate = function(generator_) {
    var generated = new AutofillAgent_ClearSection_Params;
    return generated;
  };

  AutofillAgent_ClearSection_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AutofillAgent_ClearSection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_ClearSection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_ClearSection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_ClearSection_Params.validate = function(messageValidator, offset) {
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

  AutofillAgent_ClearSection_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillAgent_ClearSection_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_ClearSection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillAgent_ClearSection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_ClearSection_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillAgent_ClearPreviewedForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_ClearPreviewedForm_Params.prototype.initDefaults_ = function() {
  };
  AutofillAgent_ClearPreviewedForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_ClearPreviewedForm_Params.generate = function(generator_) {
    var generated = new AutofillAgent_ClearPreviewedForm_Params;
    return generated;
  };

  AutofillAgent_ClearPreviewedForm_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  AutofillAgent_ClearPreviewedForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_ClearPreviewedForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_ClearPreviewedForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_ClearPreviewedForm_Params.validate = function(messageValidator, offset) {
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

  AutofillAgent_ClearPreviewedForm_Params.encodedSize = codec.kStructHeaderSize + 0;

  AutofillAgent_ClearPreviewedForm_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_ClearPreviewedForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AutofillAgent_ClearPreviewedForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_ClearPreviewedForm_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function AutofillAgent_FillFieldWithValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_FillFieldWithValue_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  AutofillAgent_FillFieldWithValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_FillFieldWithValue_Params.generate = function(generator_) {
    var generated = new AutofillAgent_FillFieldWithValue_Params;
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  AutofillAgent_FillFieldWithValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  AutofillAgent_FillFieldWithValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_FillFieldWithValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_FillFieldWithValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_FillFieldWithValue_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillAgent_FillFieldWithValue_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_FillFieldWithValue_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_FillFieldWithValue_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_FillFieldWithValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  AutofillAgent_FillFieldWithValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_FillFieldWithValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.value);
  };
  function AutofillAgent_PreviewFieldWithValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_PreviewFieldWithValue_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  AutofillAgent_PreviewFieldWithValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_PreviewFieldWithValue_Params.generate = function(generator_) {
    var generated = new AutofillAgent_PreviewFieldWithValue_Params;
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  AutofillAgent_PreviewFieldWithValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  AutofillAgent_PreviewFieldWithValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_PreviewFieldWithValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_PreviewFieldWithValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_PreviewFieldWithValue_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillAgent_PreviewFieldWithValue_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_PreviewFieldWithValue_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_PreviewFieldWithValue_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_PreviewFieldWithValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  AutofillAgent_PreviewFieldWithValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_PreviewFieldWithValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.value);
  };
  function AutofillAgent_AcceptDataListSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_AcceptDataListSuggestion_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  AutofillAgent_AcceptDataListSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_AcceptDataListSuggestion_Params.generate = function(generator_) {
    var generated = new AutofillAgent_AcceptDataListSuggestion_Params;
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  AutofillAgent_AcceptDataListSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  AutofillAgent_AcceptDataListSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_AcceptDataListSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_AcceptDataListSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_AcceptDataListSuggestion_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillAgent_AcceptDataListSuggestion_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_AcceptDataListSuggestion_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_AcceptDataListSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_AcceptDataListSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  AutofillAgent_AcceptDataListSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_AcceptDataListSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.value);
  };
  function AutofillAgent_FillPasswordSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_FillPasswordSuggestion_Params.prototype.initDefaults_ = function() {
    this.username = null;
    this.password = null;
  };
  AutofillAgent_FillPasswordSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_FillPasswordSuggestion_Params.generate = function(generator_) {
    var generated = new AutofillAgent_FillPasswordSuggestion_Params;
    generated.username = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.password = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  AutofillAgent_FillPasswordSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.username = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.password = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  AutofillAgent_FillPasswordSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_FillPasswordSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_FillPasswordSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_FillPasswordSuggestion_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillAgent_FillPasswordSuggestion_Params.username
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillAgent_FillPasswordSuggestion_Params.password
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_FillPasswordSuggestion_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillAgent_FillPasswordSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_FillPasswordSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.username = decoder.decodeStructPointer(string16$.String16);
    val.password = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  AutofillAgent_FillPasswordSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_FillPasswordSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.username);
    encoder.encodeStructPointer(string16$.String16, val.password);
  };
  function AutofillAgent_PreviewPasswordSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_PreviewPasswordSuggestion_Params.prototype.initDefaults_ = function() {
    this.username = null;
    this.password = null;
  };
  AutofillAgent_PreviewPasswordSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_PreviewPasswordSuggestion_Params.generate = function(generator_) {
    var generated = new AutofillAgent_PreviewPasswordSuggestion_Params;
    generated.username = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.password = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  AutofillAgent_PreviewPasswordSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.username = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.password = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  AutofillAgent_PreviewPasswordSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_PreviewPasswordSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_PreviewPasswordSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_PreviewPasswordSuggestion_Params.validate = function(messageValidator, offset) {
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


    // validate AutofillAgent_PreviewPasswordSuggestion_Params.username
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AutofillAgent_PreviewPasswordSuggestion_Params.password
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_PreviewPasswordSuggestion_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillAgent_PreviewPasswordSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_PreviewPasswordSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.username = decoder.decodeStructPointer(string16$.String16);
    val.password = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  AutofillAgent_PreviewPasswordSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_PreviewPasswordSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.username);
    encoder.encodeStructPointer(string16$.String16, val.password);
  };
  function AutofillAgent_ShowInitialPasswordAccountSuggestions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.prototype.initDefaults_ = function() {
    this.key = 0;
    this.formData = null;
  };
  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.generate = function(generator_) {
    var generated = new AutofillAgent_ShowInitialPasswordAccountSuggestions_Params;
    generated.key = generator_.generateInt32();
    generated.formData = generator_.generateStruct(autofill.mojom.PasswordFormFillData, false);
    return generated;
  };

  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateInt32(this.key);
    }
    if (mutator_.chooseMutateField()) {
      this.formData = mutator_.mutateStruct(autofill.mojom.PasswordFormFillData, false);
    }
    return this;
  };
  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.validate = function(messageValidator, offset) {
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



    // validate AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.formData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.PasswordFormFillData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.encodedSize = codec.kStructHeaderSize + 16;

  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_ShowInitialPasswordAccountSuggestions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.formData = decoder.decodeStructPointer(autofill_types$.PasswordFormFillData);
    return val;
  };

  AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.key);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(autofill_types$.PasswordFormFillData, val.formData);
  };
  function AutofillAgent_SetUserGestureRequired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_SetUserGestureRequired_Params.prototype.initDefaults_ = function() {
    this.required = false;
  };
  AutofillAgent_SetUserGestureRequired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_SetUserGestureRequired_Params.generate = function(generator_) {
    var generated = new AutofillAgent_SetUserGestureRequired_Params;
    generated.required = generator_.generateBool();
    return generated;
  };

  AutofillAgent_SetUserGestureRequired_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.required = mutator_.mutateBool(this.required);
    }
    return this;
  };
  AutofillAgent_SetUserGestureRequired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_SetUserGestureRequired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_SetUserGestureRequired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_SetUserGestureRequired_Params.validate = function(messageValidator, offset) {
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

  AutofillAgent_SetUserGestureRequired_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_SetUserGestureRequired_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_SetUserGestureRequired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.required = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AutofillAgent_SetUserGestureRequired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_SetUserGestureRequired_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.required & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AutofillAgent_SetSecureContextRequired_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_SetSecureContextRequired_Params.prototype.initDefaults_ = function() {
    this.required = false;
  };
  AutofillAgent_SetSecureContextRequired_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_SetSecureContextRequired_Params.generate = function(generator_) {
    var generated = new AutofillAgent_SetSecureContextRequired_Params;
    generated.required = generator_.generateBool();
    return generated;
  };

  AutofillAgent_SetSecureContextRequired_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.required = mutator_.mutateBool(this.required);
    }
    return this;
  };
  AutofillAgent_SetSecureContextRequired_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_SetSecureContextRequired_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_SetSecureContextRequired_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_SetSecureContextRequired_Params.validate = function(messageValidator, offset) {
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

  AutofillAgent_SetSecureContextRequired_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_SetSecureContextRequired_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_SetSecureContextRequired_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.required = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AutofillAgent_SetSecureContextRequired_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_SetSecureContextRequired_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.required & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AutofillAgent_SetFocusRequiresScroll_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_SetFocusRequiresScroll_Params.prototype.initDefaults_ = function() {
    this.require = false;
  };
  AutofillAgent_SetFocusRequiresScroll_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_SetFocusRequiresScroll_Params.generate = function(generator_) {
    var generated = new AutofillAgent_SetFocusRequiresScroll_Params;
    generated.require = generator_.generateBool();
    return generated;
  };

  AutofillAgent_SetFocusRequiresScroll_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.require = mutator_.mutateBool(this.require);
    }
    return this;
  };
  AutofillAgent_SetFocusRequiresScroll_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_SetFocusRequiresScroll_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_SetFocusRequiresScroll_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_SetFocusRequiresScroll_Params.validate = function(messageValidator, offset) {
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

  AutofillAgent_SetFocusRequiresScroll_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_SetFocusRequiresScroll_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_SetFocusRequiresScroll_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.require = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AutofillAgent_SetFocusRequiresScroll_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_SetFocusRequiresScroll_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.require & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function AutofillAgent_SetQueryPasswordSuggestion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AutofillAgent_SetQueryPasswordSuggestion_Params.prototype.initDefaults_ = function() {
    this.query = false;
  };
  AutofillAgent_SetQueryPasswordSuggestion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AutofillAgent_SetQueryPasswordSuggestion_Params.generate = function(generator_) {
    var generated = new AutofillAgent_SetQueryPasswordSuggestion_Params;
    generated.query = generator_.generateBool();
    return generated;
  };

  AutofillAgent_SetQueryPasswordSuggestion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.query = mutator_.mutateBool(this.query);
    }
    return this;
  };
  AutofillAgent_SetQueryPasswordSuggestion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AutofillAgent_SetQueryPasswordSuggestion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AutofillAgent_SetQueryPasswordSuggestion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AutofillAgent_SetQueryPasswordSuggestion_Params.validate = function(messageValidator, offset) {
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

  AutofillAgent_SetQueryPasswordSuggestion_Params.encodedSize = codec.kStructHeaderSize + 8;

  AutofillAgent_SetQueryPasswordSuggestion_Params.decode = function(decoder) {
    var packed;
    var val = new AutofillAgent_SetQueryPasswordSuggestion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.query = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AutofillAgent_SetQueryPasswordSuggestion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AutofillAgent_SetQueryPasswordSuggestion_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.query & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PasswordAutofillAgent_FillPasswordForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAutofillAgent_FillPasswordForm_Params.prototype.initDefaults_ = function() {
    this.key = 0;
    this.formData = null;
  };
  PasswordAutofillAgent_FillPasswordForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAutofillAgent_FillPasswordForm_Params.generate = function(generator_) {
    var generated = new PasswordAutofillAgent_FillPasswordForm_Params;
    generated.key = generator_.generateInt32();
    generated.formData = generator_.generateStruct(autofill.mojom.PasswordFormFillData, false);
    return generated;
  };

  PasswordAutofillAgent_FillPasswordForm_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateInt32(this.key);
    }
    if (mutator_.chooseMutateField()) {
      this.formData = mutator_.mutateStruct(autofill.mojom.PasswordFormFillData, false);
    }
    return this;
  };
  PasswordAutofillAgent_FillPasswordForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAutofillAgent_FillPasswordForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAutofillAgent_FillPasswordForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAutofillAgent_FillPasswordForm_Params.validate = function(messageValidator, offset) {
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



    // validate PasswordAutofillAgent_FillPasswordForm_Params.formData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, autofill_types$.PasswordFormFillData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordAutofillAgent_FillPasswordForm_Params.encodedSize = codec.kStructHeaderSize + 16;

  PasswordAutofillAgent_FillPasswordForm_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordAutofillAgent_FillPasswordForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.formData = decoder.decodeStructPointer(autofill_types$.PasswordFormFillData);
    return val;
  };

  PasswordAutofillAgent_FillPasswordForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAutofillAgent_FillPasswordForm_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.key);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(autofill_types$.PasswordFormFillData, val.formData);
  };
  function PasswordAutofillAgent_SetLoggingState_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAutofillAgent_SetLoggingState_Params.prototype.initDefaults_ = function() {
    this.active = false;
  };
  PasswordAutofillAgent_SetLoggingState_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAutofillAgent_SetLoggingState_Params.generate = function(generator_) {
    var generated = new PasswordAutofillAgent_SetLoggingState_Params;
    generated.active = generator_.generateBool();
    return generated;
  };

  PasswordAutofillAgent_SetLoggingState_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.active = mutator_.mutateBool(this.active);
    }
    return this;
  };
  PasswordAutofillAgent_SetLoggingState_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAutofillAgent_SetLoggingState_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAutofillAgent_SetLoggingState_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAutofillAgent_SetLoggingState_Params.validate = function(messageValidator, offset) {
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

  PasswordAutofillAgent_SetLoggingState_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordAutofillAgent_SetLoggingState_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordAutofillAgent_SetLoggingState_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.active = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PasswordAutofillAgent_SetLoggingState_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAutofillAgent_SetLoggingState_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.active & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.prototype.initDefaults_ = function() {
    this.predictions = null;
  };
  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.generate = function(generator_) {
    var generated = new PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params;
    generated.predictions = generator_.generateStruct(autofill.mojom.FormsPredictionsMap, false);
    return generated;
  };

  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.predictions = mutator_.mutateStruct(autofill.mojom.FormsPredictionsMap, false);
    }
    return this;
  };
  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.predictions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.FormsPredictionsMap, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.predictions = decoder.decodeStructPointer(autofill_types$.FormsPredictionsMap);
    return val;
  };

  PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.FormsPredictionsMap, val.predictions);
  };
  function PasswordAutofillAgent_FindFocusedPasswordForm_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAutofillAgent_FindFocusedPasswordForm_Params.prototype.initDefaults_ = function() {
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_Params.generate = function(generator_) {
    var generated = new PasswordAutofillAgent_FindFocusedPasswordForm_Params;
    return generated;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_Params.validate = function(messageValidator, offset) {
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

  PasswordAutofillAgent_FindFocusedPasswordForm_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordAutofillAgent_FindFocusedPasswordForm_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordAutofillAgent_FindFocusedPasswordForm_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAutofillAgent_FindFocusedPasswordForm_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.prototype.initDefaults_ = function() {
    this.form = null;
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.generate = function(generator_) {
    var generated = new PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams;
    generated.form = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.form);
  };
  function PasswordAutofillAgent_BlacklistedFormFound_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAutofillAgent_BlacklistedFormFound_Params.prototype.initDefaults_ = function() {
  };
  PasswordAutofillAgent_BlacklistedFormFound_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAutofillAgent_BlacklistedFormFound_Params.generate = function(generator_) {
    var generated = new PasswordAutofillAgent_BlacklistedFormFound_Params;
    return generated;
  };

  PasswordAutofillAgent_BlacklistedFormFound_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordAutofillAgent_BlacklistedFormFound_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAutofillAgent_BlacklistedFormFound_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAutofillAgent_BlacklistedFormFound_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAutofillAgent_BlacklistedFormFound_Params.validate = function(messageValidator, offset) {
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

  PasswordAutofillAgent_BlacklistedFormFound_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordAutofillAgent_BlacklistedFormFound_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordAutofillAgent_BlacklistedFormFound_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordAutofillAgent_BlacklistedFormFound_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAutofillAgent_BlacklistedFormFound_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordGenerationAgent_GeneratedPasswordAccepted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.prototype.initDefaults_ = function() {
    this.generatedPassword = null;
  };
  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.generate = function(generator_) {
    var generated = new PasswordGenerationAgent_GeneratedPasswordAccepted_Params;
    generated.generatedPassword = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.generatedPassword = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordGenerationAgent_GeneratedPasswordAccepted_Params.generatedPassword
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordGenerationAgent_GeneratedPasswordAccepted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.generatedPassword = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  PasswordGenerationAgent_GeneratedPasswordAccepted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordGenerationAgent_GeneratedPasswordAccepted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.generatedPassword);
  };
  function PasswordGenerationAgent_UserTriggeredGeneratePassword_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.prototype.initDefaults_ = function() {
  };
  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.generate = function(generator_) {
    var generated = new PasswordGenerationAgent_UserTriggeredGeneratePassword_Params;
    return generated;
  };

  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.validate = function(messageValidator, offset) {
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

  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordGenerationAgent_UserTriggeredGeneratePassword_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordGenerationAgent_UserSelectedManualGenerationOption_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.prototype.initDefaults_ = function() {
  };
  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.generate = function(generator_) {
    var generated = new PasswordGenerationAgent_UserSelectedManualGenerationOption_Params;
    return generated;
  };

  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.validate = function(messageValidator, offset) {
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

  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordGenerationAgent_UserSelectedManualGenerationOption_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PasswordGenerationAgent_FormNotBlacklisted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordGenerationAgent_FormNotBlacklisted_Params.prototype.initDefaults_ = function() {
    this.form = null;
  };
  PasswordGenerationAgent_FormNotBlacklisted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordGenerationAgent_FormNotBlacklisted_Params.generate = function(generator_) {
    var generated = new PasswordGenerationAgent_FormNotBlacklisted_Params;
    generated.form = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  PasswordGenerationAgent_FormNotBlacklisted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  PasswordGenerationAgent_FormNotBlacklisted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordGenerationAgent_FormNotBlacklisted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordGenerationAgent_FormNotBlacklisted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordGenerationAgent_FormNotBlacklisted_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordGenerationAgent_FormNotBlacklisted_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordGenerationAgent_FormNotBlacklisted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordGenerationAgent_FormNotBlacklisted_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordGenerationAgent_FormNotBlacklisted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  PasswordGenerationAgent_FormNotBlacklisted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordGenerationAgent_FormNotBlacklisted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.form);
  };
  function PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.prototype.initDefaults_ = function() {
    this.forms = null;
  };
  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.generate = function(generator_) {
    var generated = new PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params;
    generated.forms = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.PasswordFormGenerationData, false);
    });
    return generated;
  };

  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.forms = mutator_.mutateArray(this.forms, function(val) {
        return mutator_.mutateStruct(autofill.mojom.PasswordFormGenerationData, false);
      });
    }
    return this;
  };
  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.validate = function(messageValidator, offset) {
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


    // validate PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.forms
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(autofill_types$.PasswordFormGenerationData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.encodedSize = codec.kStructHeaderSize + 8;

  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.forms = decoder.decodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordFormGenerationData));
    return val;
  };

  PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(autofill_types$.PasswordFormGenerationData), val.forms);
  };
  function PasswordGenerationAgent_AllowToRunFormClassifier_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordGenerationAgent_AllowToRunFormClassifier_Params.prototype.initDefaults_ = function() {
  };
  PasswordGenerationAgent_AllowToRunFormClassifier_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordGenerationAgent_AllowToRunFormClassifier_Params.generate = function(generator_) {
    var generated = new PasswordGenerationAgent_AllowToRunFormClassifier_Params;
    return generated;
  };

  PasswordGenerationAgent_AllowToRunFormClassifier_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PasswordGenerationAgent_AllowToRunFormClassifier_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordGenerationAgent_AllowToRunFormClassifier_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordGenerationAgent_AllowToRunFormClassifier_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordGenerationAgent_AllowToRunFormClassifier_Params.validate = function(messageValidator, offset) {
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

  PasswordGenerationAgent_AllowToRunFormClassifier_Params.encodedSize = codec.kStructHeaderSize + 0;

  PasswordGenerationAgent_AllowToRunFormClassifier_Params.decode = function(decoder) {
    var packed;
    var val = new PasswordGenerationAgent_AllowToRunFormClassifier_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PasswordGenerationAgent_AllowToRunFormClassifier_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordGenerationAgent_AllowToRunFormClassifier_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kAutofillAgent_FillForm_Name = 286374558;
  var kAutofillAgent_PreviewForm_Name = 456702500;
  var kAutofillAgent_FieldTypePredictionsAvailable_Name = 1709736901;
  var kAutofillAgent_ClearSection_Name = 1947202814;
  var kAutofillAgent_ClearPreviewedForm_Name = 2019128582;
  var kAutofillAgent_FillFieldWithValue_Name = 953394399;
  var kAutofillAgent_PreviewFieldWithValue_Name = 660460679;
  var kAutofillAgent_AcceptDataListSuggestion_Name = 1477425159;
  var kAutofillAgent_FillPasswordSuggestion_Name = 345395335;
  var kAutofillAgent_PreviewPasswordSuggestion_Name = 69311302;
  var kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name = 249521668;
  var kAutofillAgent_SetUserGestureRequired_Name = 1297397915;
  var kAutofillAgent_SetSecureContextRequired_Name = 1901024807;
  var kAutofillAgent_SetFocusRequiresScroll_Name = 1649439090;
  var kAutofillAgent_SetQueryPasswordSuggestion_Name = 688170277;

  function AutofillAgentPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(AutofillAgent,
                                                   handleOrPtrInfo);
  }

  function AutofillAgentAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        AutofillAgent, associatedInterfacePtrInfo);
  }

  AutofillAgentAssociatedPtr.prototype =
      Object.create(AutofillAgentPtr.prototype);
  AutofillAgentAssociatedPtr.prototype.constructor =
      AutofillAgentAssociatedPtr;

  function AutofillAgentProxy(receiver) {
    this.receiver_ = receiver;
  }
  AutofillAgentPtr.prototype.fillForm = function() {
    return AutofillAgentProxy.prototype.fillForm
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.fillForm = function(id, form) {
    var params_ = new AutofillAgent_FillForm_Params();
    params_.id = id;
    params_.form = form;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_FillForm_Name,
        codec.align(AutofillAgent_FillForm_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_FillForm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.previewForm = function() {
    return AutofillAgentProxy.prototype.previewForm
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.previewForm = function(id, form) {
    var params_ = new AutofillAgent_PreviewForm_Params();
    params_.id = id;
    params_.form = form;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_PreviewForm_Name,
        codec.align(AutofillAgent_PreviewForm_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_PreviewForm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.fieldTypePredictionsAvailable = function() {
    return AutofillAgentProxy.prototype.fieldTypePredictionsAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.fieldTypePredictionsAvailable = function(forms) {
    var params_ = new AutofillAgent_FieldTypePredictionsAvailable_Params();
    params_.forms = forms;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_FieldTypePredictionsAvailable_Name,
        codec.align(AutofillAgent_FieldTypePredictionsAvailable_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_FieldTypePredictionsAvailable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.clearSection = function() {
    return AutofillAgentProxy.prototype.clearSection
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.clearSection = function() {
    var params_ = new AutofillAgent_ClearSection_Params();
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_ClearSection_Name,
        codec.align(AutofillAgent_ClearSection_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_ClearSection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.clearPreviewedForm = function() {
    return AutofillAgentProxy.prototype.clearPreviewedForm
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.clearPreviewedForm = function() {
    var params_ = new AutofillAgent_ClearPreviewedForm_Params();
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_ClearPreviewedForm_Name,
        codec.align(AutofillAgent_ClearPreviewedForm_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_ClearPreviewedForm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.fillFieldWithValue = function() {
    return AutofillAgentProxy.prototype.fillFieldWithValue
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.fillFieldWithValue = function(value) {
    var params_ = new AutofillAgent_FillFieldWithValue_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_FillFieldWithValue_Name,
        codec.align(AutofillAgent_FillFieldWithValue_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_FillFieldWithValue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.previewFieldWithValue = function() {
    return AutofillAgentProxy.prototype.previewFieldWithValue
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.previewFieldWithValue = function(value) {
    var params_ = new AutofillAgent_PreviewFieldWithValue_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_PreviewFieldWithValue_Name,
        codec.align(AutofillAgent_PreviewFieldWithValue_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_PreviewFieldWithValue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.acceptDataListSuggestion = function() {
    return AutofillAgentProxy.prototype.acceptDataListSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.acceptDataListSuggestion = function(value) {
    var params_ = new AutofillAgent_AcceptDataListSuggestion_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_AcceptDataListSuggestion_Name,
        codec.align(AutofillAgent_AcceptDataListSuggestion_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_AcceptDataListSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.fillPasswordSuggestion = function() {
    return AutofillAgentProxy.prototype.fillPasswordSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.fillPasswordSuggestion = function(username, password) {
    var params_ = new AutofillAgent_FillPasswordSuggestion_Params();
    params_.username = username;
    params_.password = password;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_FillPasswordSuggestion_Name,
        codec.align(AutofillAgent_FillPasswordSuggestion_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_FillPasswordSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.previewPasswordSuggestion = function() {
    return AutofillAgentProxy.prototype.previewPasswordSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.previewPasswordSuggestion = function(username, password) {
    var params_ = new AutofillAgent_PreviewPasswordSuggestion_Params();
    params_.username = username;
    params_.password = password;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_PreviewPasswordSuggestion_Name,
        codec.align(AutofillAgent_PreviewPasswordSuggestion_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_PreviewPasswordSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.showInitialPasswordAccountSuggestions = function() {
    return AutofillAgentProxy.prototype.showInitialPasswordAccountSuggestions
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.showInitialPasswordAccountSuggestions = function(key, formData) {
    var params_ = new AutofillAgent_ShowInitialPasswordAccountSuggestions_Params();
    params_.key = key;
    params_.formData = formData;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name,
        codec.align(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.setUserGestureRequired = function() {
    return AutofillAgentProxy.prototype.setUserGestureRequired
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.setUserGestureRequired = function(required) {
    var params_ = new AutofillAgent_SetUserGestureRequired_Params();
    params_.required = required;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_SetUserGestureRequired_Name,
        codec.align(AutofillAgent_SetUserGestureRequired_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_SetUserGestureRequired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.setSecureContextRequired = function() {
    return AutofillAgentProxy.prototype.setSecureContextRequired
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.setSecureContextRequired = function(required) {
    var params_ = new AutofillAgent_SetSecureContextRequired_Params();
    params_.required = required;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_SetSecureContextRequired_Name,
        codec.align(AutofillAgent_SetSecureContextRequired_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_SetSecureContextRequired_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.setFocusRequiresScroll = function() {
    return AutofillAgentProxy.prototype.setFocusRequiresScroll
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.setFocusRequiresScroll = function(require) {
    var params_ = new AutofillAgent_SetFocusRequiresScroll_Params();
    params_.require = require;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_SetFocusRequiresScroll_Name,
        codec.align(AutofillAgent_SetFocusRequiresScroll_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_SetFocusRequiresScroll_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  AutofillAgentPtr.prototype.setQueryPasswordSuggestion = function() {
    return AutofillAgentProxy.prototype.setQueryPasswordSuggestion
        .apply(this.ptr.getProxy(), arguments);
  };

  AutofillAgentProxy.prototype.setQueryPasswordSuggestion = function(query) {
    var params_ = new AutofillAgent_SetQueryPasswordSuggestion_Params();
    params_.query = query;
    var builder = new codec.MessageV0Builder(
        kAutofillAgent_SetQueryPasswordSuggestion_Name,
        codec.align(AutofillAgent_SetQueryPasswordSuggestion_Params.encodedSize));
    builder.encodeStruct(AutofillAgent_SetQueryPasswordSuggestion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function AutofillAgentStub(delegate) {
    this.delegate_ = delegate;
  }
  AutofillAgentStub.prototype.fillForm = function(id, form) {
    return this.delegate_ && this.delegate_.fillForm && this.delegate_.fillForm(id, form);
  }
  AutofillAgentStub.prototype.previewForm = function(id, form) {
    return this.delegate_ && this.delegate_.previewForm && this.delegate_.previewForm(id, form);
  }
  AutofillAgentStub.prototype.fieldTypePredictionsAvailable = function(forms) {
    return this.delegate_ && this.delegate_.fieldTypePredictionsAvailable && this.delegate_.fieldTypePredictionsAvailable(forms);
  }
  AutofillAgentStub.prototype.clearSection = function() {
    return this.delegate_ && this.delegate_.clearSection && this.delegate_.clearSection();
  }
  AutofillAgentStub.prototype.clearPreviewedForm = function() {
    return this.delegate_ && this.delegate_.clearPreviewedForm && this.delegate_.clearPreviewedForm();
  }
  AutofillAgentStub.prototype.fillFieldWithValue = function(value) {
    return this.delegate_ && this.delegate_.fillFieldWithValue && this.delegate_.fillFieldWithValue(value);
  }
  AutofillAgentStub.prototype.previewFieldWithValue = function(value) {
    return this.delegate_ && this.delegate_.previewFieldWithValue && this.delegate_.previewFieldWithValue(value);
  }
  AutofillAgentStub.prototype.acceptDataListSuggestion = function(value) {
    return this.delegate_ && this.delegate_.acceptDataListSuggestion && this.delegate_.acceptDataListSuggestion(value);
  }
  AutofillAgentStub.prototype.fillPasswordSuggestion = function(username, password) {
    return this.delegate_ && this.delegate_.fillPasswordSuggestion && this.delegate_.fillPasswordSuggestion(username, password);
  }
  AutofillAgentStub.prototype.previewPasswordSuggestion = function(username, password) {
    return this.delegate_ && this.delegate_.previewPasswordSuggestion && this.delegate_.previewPasswordSuggestion(username, password);
  }
  AutofillAgentStub.prototype.showInitialPasswordAccountSuggestions = function(key, formData) {
    return this.delegate_ && this.delegate_.showInitialPasswordAccountSuggestions && this.delegate_.showInitialPasswordAccountSuggestions(key, formData);
  }
  AutofillAgentStub.prototype.setUserGestureRequired = function(required) {
    return this.delegate_ && this.delegate_.setUserGestureRequired && this.delegate_.setUserGestureRequired(required);
  }
  AutofillAgentStub.prototype.setSecureContextRequired = function(required) {
    return this.delegate_ && this.delegate_.setSecureContextRequired && this.delegate_.setSecureContextRequired(required);
  }
  AutofillAgentStub.prototype.setFocusRequiresScroll = function(require) {
    return this.delegate_ && this.delegate_.setFocusRequiresScroll && this.delegate_.setFocusRequiresScroll(require);
  }
  AutofillAgentStub.prototype.setQueryPasswordSuggestion = function(query) {
    return this.delegate_ && this.delegate_.setQueryPasswordSuggestion && this.delegate_.setQueryPasswordSuggestion(query);
  }

  AutofillAgentStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kAutofillAgent_FillForm_Name:
      var params = reader.decodeStruct(AutofillAgent_FillForm_Params);
      this.fillForm(params.id, params.form);
      return true;
    case kAutofillAgent_PreviewForm_Name:
      var params = reader.decodeStruct(AutofillAgent_PreviewForm_Params);
      this.previewForm(params.id, params.form);
      return true;
    case kAutofillAgent_FieldTypePredictionsAvailable_Name:
      var params = reader.decodeStruct(AutofillAgent_FieldTypePredictionsAvailable_Params);
      this.fieldTypePredictionsAvailable(params.forms);
      return true;
    case kAutofillAgent_ClearSection_Name:
      var params = reader.decodeStruct(AutofillAgent_ClearSection_Params);
      this.clearSection();
      return true;
    case kAutofillAgent_ClearPreviewedForm_Name:
      var params = reader.decodeStruct(AutofillAgent_ClearPreviewedForm_Params);
      this.clearPreviewedForm();
      return true;
    case kAutofillAgent_FillFieldWithValue_Name:
      var params = reader.decodeStruct(AutofillAgent_FillFieldWithValue_Params);
      this.fillFieldWithValue(params.value);
      return true;
    case kAutofillAgent_PreviewFieldWithValue_Name:
      var params = reader.decodeStruct(AutofillAgent_PreviewFieldWithValue_Params);
      this.previewFieldWithValue(params.value);
      return true;
    case kAutofillAgent_AcceptDataListSuggestion_Name:
      var params = reader.decodeStruct(AutofillAgent_AcceptDataListSuggestion_Params);
      this.acceptDataListSuggestion(params.value);
      return true;
    case kAutofillAgent_FillPasswordSuggestion_Name:
      var params = reader.decodeStruct(AutofillAgent_FillPasswordSuggestion_Params);
      this.fillPasswordSuggestion(params.username, params.password);
      return true;
    case kAutofillAgent_PreviewPasswordSuggestion_Name:
      var params = reader.decodeStruct(AutofillAgent_PreviewPasswordSuggestion_Params);
      this.previewPasswordSuggestion(params.username, params.password);
      return true;
    case kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name:
      var params = reader.decodeStruct(AutofillAgent_ShowInitialPasswordAccountSuggestions_Params);
      this.showInitialPasswordAccountSuggestions(params.key, params.formData);
      return true;
    case kAutofillAgent_SetUserGestureRequired_Name:
      var params = reader.decodeStruct(AutofillAgent_SetUserGestureRequired_Params);
      this.setUserGestureRequired(params.required);
      return true;
    case kAutofillAgent_SetSecureContextRequired_Name:
      var params = reader.decodeStruct(AutofillAgent_SetSecureContextRequired_Params);
      this.setSecureContextRequired(params.required);
      return true;
    case kAutofillAgent_SetFocusRequiresScroll_Name:
      var params = reader.decodeStruct(AutofillAgent_SetFocusRequiresScroll_Params);
      this.setFocusRequiresScroll(params.require);
      return true;
    case kAutofillAgent_SetQueryPasswordSuggestion_Name:
      var params = reader.decodeStruct(AutofillAgent_SetQueryPasswordSuggestion_Params);
      this.setQueryPasswordSuggestion(params.query);
      return true;
    default:
      return false;
    }
  };

  AutofillAgentStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateAutofillAgentRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kAutofillAgent_FillForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_FillForm_Params;
      break;
      case kAutofillAgent_PreviewForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_PreviewForm_Params;
      break;
      case kAutofillAgent_FieldTypePredictionsAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_FieldTypePredictionsAvailable_Params;
      break;
      case kAutofillAgent_ClearSection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_ClearSection_Params;
      break;
      case kAutofillAgent_ClearPreviewedForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_ClearPreviewedForm_Params;
      break;
      case kAutofillAgent_FillFieldWithValue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_FillFieldWithValue_Params;
      break;
      case kAutofillAgent_PreviewFieldWithValue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_PreviewFieldWithValue_Params;
      break;
      case kAutofillAgent_AcceptDataListSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_AcceptDataListSuggestion_Params;
      break;
      case kAutofillAgent_FillPasswordSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_FillPasswordSuggestion_Params;
      break;
      case kAutofillAgent_PreviewPasswordSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_PreviewPasswordSuggestion_Params;
      break;
      case kAutofillAgent_ShowInitialPasswordAccountSuggestions_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_ShowInitialPasswordAccountSuggestions_Params;
      break;
      case kAutofillAgent_SetUserGestureRequired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_SetUserGestureRequired_Params;
      break;
      case kAutofillAgent_SetSecureContextRequired_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_SetSecureContextRequired_Params;
      break;
      case kAutofillAgent_SetFocusRequiresScroll_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_SetFocusRequiresScroll_Params;
      break;
      case kAutofillAgent_SetQueryPasswordSuggestion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = AutofillAgent_SetQueryPasswordSuggestion_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateAutofillAgentResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var AutofillAgent = {
    name: 'autofill.mojom.AutofillAgent',
    kVersion: 0,
    ptrClass: AutofillAgentPtr,
    proxyClass: AutofillAgentProxy,
    stubClass: AutofillAgentStub,
    validateRequest: validateAutofillAgentRequest,
    validateResponse: null,
    mojomId: 'components/autofill/content/common/autofill_agent.mojom',
    fuzzMethods: {
      fillForm: {
        params: AutofillAgent_FillForm_Params,
      },
      previewForm: {
        params: AutofillAgent_PreviewForm_Params,
      },
      fieldTypePredictionsAvailable: {
        params: AutofillAgent_FieldTypePredictionsAvailable_Params,
      },
      clearSection: {
        params: AutofillAgent_ClearSection_Params,
      },
      clearPreviewedForm: {
        params: AutofillAgent_ClearPreviewedForm_Params,
      },
      fillFieldWithValue: {
        params: AutofillAgent_FillFieldWithValue_Params,
      },
      previewFieldWithValue: {
        params: AutofillAgent_PreviewFieldWithValue_Params,
      },
      acceptDataListSuggestion: {
        params: AutofillAgent_AcceptDataListSuggestion_Params,
      },
      fillPasswordSuggestion: {
        params: AutofillAgent_FillPasswordSuggestion_Params,
      },
      previewPasswordSuggestion: {
        params: AutofillAgent_PreviewPasswordSuggestion_Params,
      },
      showInitialPasswordAccountSuggestions: {
        params: AutofillAgent_ShowInitialPasswordAccountSuggestions_Params,
      },
      setUserGestureRequired: {
        params: AutofillAgent_SetUserGestureRequired_Params,
      },
      setSecureContextRequired: {
        params: AutofillAgent_SetSecureContextRequired_Params,
      },
      setFocusRequiresScroll: {
        params: AutofillAgent_SetFocusRequiresScroll_Params,
      },
      setQueryPasswordSuggestion: {
        params: AutofillAgent_SetQueryPasswordSuggestion_Params,
      },
    },
  };
  AutofillAgentStub.prototype.validator = validateAutofillAgentRequest;
  AutofillAgentProxy.prototype.validator = null;
  var kPasswordAutofillAgent_FillPasswordForm_Name = 1167976070;
  var kPasswordAutofillAgent_SetLoggingState_Name = 142849469;
  var kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name = 921256887;
  var kPasswordAutofillAgent_FindFocusedPasswordForm_Name = 1122761448;
  var kPasswordAutofillAgent_BlacklistedFormFound_Name = 1632588293;

  function PasswordAutofillAgentPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PasswordAutofillAgent,
                                                   handleOrPtrInfo);
  }

  function PasswordAutofillAgentAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PasswordAutofillAgent, associatedInterfacePtrInfo);
  }

  PasswordAutofillAgentAssociatedPtr.prototype =
      Object.create(PasswordAutofillAgentPtr.prototype);
  PasswordAutofillAgentAssociatedPtr.prototype.constructor =
      PasswordAutofillAgentAssociatedPtr;

  function PasswordAutofillAgentProxy(receiver) {
    this.receiver_ = receiver;
  }
  PasswordAutofillAgentPtr.prototype.fillPasswordForm = function() {
    return PasswordAutofillAgentProxy.prototype.fillPasswordForm
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordAutofillAgentProxy.prototype.fillPasswordForm = function(key, formData) {
    var params_ = new PasswordAutofillAgent_FillPasswordForm_Params();
    params_.key = key;
    params_.formData = formData;
    var builder = new codec.MessageV0Builder(
        kPasswordAutofillAgent_FillPasswordForm_Name,
        codec.align(PasswordAutofillAgent_FillPasswordForm_Params.encodedSize));
    builder.encodeStruct(PasswordAutofillAgent_FillPasswordForm_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordAutofillAgentPtr.prototype.setLoggingState = function() {
    return PasswordAutofillAgentProxy.prototype.setLoggingState
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordAutofillAgentProxy.prototype.setLoggingState = function(active) {
    var params_ = new PasswordAutofillAgent_SetLoggingState_Params();
    params_.active = active;
    var builder = new codec.MessageV0Builder(
        kPasswordAutofillAgent_SetLoggingState_Name,
        codec.align(PasswordAutofillAgent_SetLoggingState_Params.encodedSize));
    builder.encodeStruct(PasswordAutofillAgent_SetLoggingState_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordAutofillAgentPtr.prototype.autofillUsernameAndPasswordDataReceived = function() {
    return PasswordAutofillAgentProxy.prototype.autofillUsernameAndPasswordDataReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordAutofillAgentProxy.prototype.autofillUsernameAndPasswordDataReceived = function(predictions) {
    var params_ = new PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params();
    params_.predictions = predictions;
    var builder = new codec.MessageV0Builder(
        kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name,
        codec.align(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params.encodedSize));
    builder.encodeStruct(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordAutofillAgentPtr.prototype.findFocusedPasswordForm = function() {
    return PasswordAutofillAgentProxy.prototype.findFocusedPasswordForm
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordAutofillAgentProxy.prototype.findFocusedPasswordForm = function() {
    var params_ = new PasswordAutofillAgent_FindFocusedPasswordForm_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPasswordAutofillAgent_FindFocusedPasswordForm_Name,
          codec.align(PasswordAutofillAgent_FindFocusedPasswordForm_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PasswordAutofillAgent_FindFocusedPasswordForm_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PasswordAutofillAgentPtr.prototype.blacklistedFormFound = function() {
    return PasswordAutofillAgentProxy.prototype.blacklistedFormFound
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordAutofillAgentProxy.prototype.blacklistedFormFound = function() {
    var params_ = new PasswordAutofillAgent_BlacklistedFormFound_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordAutofillAgent_BlacklistedFormFound_Name,
        codec.align(PasswordAutofillAgent_BlacklistedFormFound_Params.encodedSize));
    builder.encodeStruct(PasswordAutofillAgent_BlacklistedFormFound_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PasswordAutofillAgentStub(delegate) {
    this.delegate_ = delegate;
  }
  PasswordAutofillAgentStub.prototype.fillPasswordForm = function(key, formData) {
    return this.delegate_ && this.delegate_.fillPasswordForm && this.delegate_.fillPasswordForm(key, formData);
  }
  PasswordAutofillAgentStub.prototype.setLoggingState = function(active) {
    return this.delegate_ && this.delegate_.setLoggingState && this.delegate_.setLoggingState(active);
  }
  PasswordAutofillAgentStub.prototype.autofillUsernameAndPasswordDataReceived = function(predictions) {
    return this.delegate_ && this.delegate_.autofillUsernameAndPasswordDataReceived && this.delegate_.autofillUsernameAndPasswordDataReceived(predictions);
  }
  PasswordAutofillAgentStub.prototype.findFocusedPasswordForm = function() {
    return this.delegate_ && this.delegate_.findFocusedPasswordForm && this.delegate_.findFocusedPasswordForm();
  }
  PasswordAutofillAgentStub.prototype.blacklistedFormFound = function() {
    return this.delegate_ && this.delegate_.blacklistedFormFound && this.delegate_.blacklistedFormFound();
  }

  PasswordAutofillAgentStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPasswordAutofillAgent_FillPasswordForm_Name:
      var params = reader.decodeStruct(PasswordAutofillAgent_FillPasswordForm_Params);
      this.fillPasswordForm(params.key, params.formData);
      return true;
    case kPasswordAutofillAgent_SetLoggingState_Name:
      var params = reader.decodeStruct(PasswordAutofillAgent_SetLoggingState_Params);
      this.setLoggingState(params.active);
      return true;
    case kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name:
      var params = reader.decodeStruct(PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params);
      this.autofillUsernameAndPasswordDataReceived(params.predictions);
      return true;
    case kPasswordAutofillAgent_BlacklistedFormFound_Name:
      var params = reader.decodeStruct(PasswordAutofillAgent_BlacklistedFormFound_Params);
      this.blacklistedFormFound();
      return true;
    default:
      return false;
    }
  };

  PasswordAutofillAgentStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPasswordAutofillAgent_FindFocusedPasswordForm_Name:
      var params = reader.decodeStruct(PasswordAutofillAgent_FindFocusedPasswordForm_Params);
      this.findFocusedPasswordForm().then(function(response) {
        var responseParams =
            new PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams();
        responseParams.form = response.form;
        var builder = new codec.MessageV1Builder(
            kPasswordAutofillAgent_FindFocusedPasswordForm_Name,
            codec.align(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePasswordAutofillAgentRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPasswordAutofillAgent_FillPasswordForm_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordAutofillAgent_FillPasswordForm_Params;
      break;
      case kPasswordAutofillAgent_SetLoggingState_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordAutofillAgent_SetLoggingState_Params;
      break;
      case kPasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params;
      break;
      case kPasswordAutofillAgent_FindFocusedPasswordForm_Name:
        if (message.expectsResponse())
          paramsClass = PasswordAutofillAgent_FindFocusedPasswordForm_Params;
      break;
      case kPasswordAutofillAgent_BlacklistedFormFound_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordAutofillAgent_BlacklistedFormFound_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePasswordAutofillAgentResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPasswordAutofillAgent_FindFocusedPasswordForm_Name:
        if (message.isResponse())
          paramsClass = PasswordAutofillAgent_FindFocusedPasswordForm_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PasswordAutofillAgent = {
    name: 'autofill.mojom.PasswordAutofillAgent',
    kVersion: 0,
    ptrClass: PasswordAutofillAgentPtr,
    proxyClass: PasswordAutofillAgentProxy,
    stubClass: PasswordAutofillAgentStub,
    validateRequest: validatePasswordAutofillAgentRequest,
    validateResponse: validatePasswordAutofillAgentResponse,
    mojomId: 'components/autofill/content/common/autofill_agent.mojom',
    fuzzMethods: {
      fillPasswordForm: {
        params: PasswordAutofillAgent_FillPasswordForm_Params,
      },
      setLoggingState: {
        params: PasswordAutofillAgent_SetLoggingState_Params,
      },
      autofillUsernameAndPasswordDataReceived: {
        params: PasswordAutofillAgent_AutofillUsernameAndPasswordDataReceived_Params,
      },
      findFocusedPasswordForm: {
        params: PasswordAutofillAgent_FindFocusedPasswordForm_Params,
      },
      blacklistedFormFound: {
        params: PasswordAutofillAgent_BlacklistedFormFound_Params,
      },
    },
  };
  PasswordAutofillAgentStub.prototype.validator = validatePasswordAutofillAgentRequest;
  PasswordAutofillAgentProxy.prototype.validator = validatePasswordAutofillAgentResponse;
  var kPasswordGenerationAgent_GeneratedPasswordAccepted_Name = 1457595254;
  var kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name = 1809334430;
  var kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name = 234652695;
  var kPasswordGenerationAgent_FormNotBlacklisted_Name = 797283073;
  var kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name = 220524880;
  var kPasswordGenerationAgent_AllowToRunFormClassifier_Name = 515305491;

  function PasswordGenerationAgentPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PasswordGenerationAgent,
                                                   handleOrPtrInfo);
  }

  function PasswordGenerationAgentAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PasswordGenerationAgent, associatedInterfacePtrInfo);
  }

  PasswordGenerationAgentAssociatedPtr.prototype =
      Object.create(PasswordGenerationAgentPtr.prototype);
  PasswordGenerationAgentAssociatedPtr.prototype.constructor =
      PasswordGenerationAgentAssociatedPtr;

  function PasswordGenerationAgentProxy(receiver) {
    this.receiver_ = receiver;
  }
  PasswordGenerationAgentPtr.prototype.generatedPasswordAccepted = function() {
    return PasswordGenerationAgentProxy.prototype.generatedPasswordAccepted
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordGenerationAgentProxy.prototype.generatedPasswordAccepted = function(generatedPassword) {
    var params_ = new PasswordGenerationAgent_GeneratedPasswordAccepted_Params();
    params_.generatedPassword = generatedPassword;
    var builder = new codec.MessageV0Builder(
        kPasswordGenerationAgent_GeneratedPasswordAccepted_Name,
        codec.align(PasswordGenerationAgent_GeneratedPasswordAccepted_Params.encodedSize));
    builder.encodeStruct(PasswordGenerationAgent_GeneratedPasswordAccepted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordGenerationAgentPtr.prototype.userTriggeredGeneratePassword = function() {
    return PasswordGenerationAgentProxy.prototype.userTriggeredGeneratePassword
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordGenerationAgentProxy.prototype.userTriggeredGeneratePassword = function() {
    var params_ = new PasswordGenerationAgent_UserTriggeredGeneratePassword_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name,
        codec.align(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params.encodedSize));
    builder.encodeStruct(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordGenerationAgentPtr.prototype.userSelectedManualGenerationOption = function() {
    return PasswordGenerationAgentProxy.prototype.userSelectedManualGenerationOption
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordGenerationAgentProxy.prototype.userSelectedManualGenerationOption = function() {
    var params_ = new PasswordGenerationAgent_UserSelectedManualGenerationOption_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name,
        codec.align(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params.encodedSize));
    builder.encodeStruct(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordGenerationAgentPtr.prototype.formNotBlacklisted = function() {
    return PasswordGenerationAgentProxy.prototype.formNotBlacklisted
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordGenerationAgentProxy.prototype.formNotBlacklisted = function(form) {
    var params_ = new PasswordGenerationAgent_FormNotBlacklisted_Params();
    params_.form = form;
    var builder = new codec.MessageV0Builder(
        kPasswordGenerationAgent_FormNotBlacklisted_Name,
        codec.align(PasswordGenerationAgent_FormNotBlacklisted_Params.encodedSize));
    builder.encodeStruct(PasswordGenerationAgent_FormNotBlacklisted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordGenerationAgentPtr.prototype.foundFormsEligibleForGeneration = function() {
    return PasswordGenerationAgentProxy.prototype.foundFormsEligibleForGeneration
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordGenerationAgentProxy.prototype.foundFormsEligibleForGeneration = function(forms) {
    var params_ = new PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params();
    params_.forms = forms;
    var builder = new codec.MessageV0Builder(
        kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name,
        codec.align(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params.encodedSize));
    builder.encodeStruct(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PasswordGenerationAgentPtr.prototype.allowToRunFormClassifier = function() {
    return PasswordGenerationAgentProxy.prototype.allowToRunFormClassifier
        .apply(this.ptr.getProxy(), arguments);
  };

  PasswordGenerationAgentProxy.prototype.allowToRunFormClassifier = function() {
    var params_ = new PasswordGenerationAgent_AllowToRunFormClassifier_Params();
    var builder = new codec.MessageV0Builder(
        kPasswordGenerationAgent_AllowToRunFormClassifier_Name,
        codec.align(PasswordGenerationAgent_AllowToRunFormClassifier_Params.encodedSize));
    builder.encodeStruct(PasswordGenerationAgent_AllowToRunFormClassifier_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PasswordGenerationAgentStub(delegate) {
    this.delegate_ = delegate;
  }
  PasswordGenerationAgentStub.prototype.generatedPasswordAccepted = function(generatedPassword) {
    return this.delegate_ && this.delegate_.generatedPasswordAccepted && this.delegate_.generatedPasswordAccepted(generatedPassword);
  }
  PasswordGenerationAgentStub.prototype.userTriggeredGeneratePassword = function() {
    return this.delegate_ && this.delegate_.userTriggeredGeneratePassword && this.delegate_.userTriggeredGeneratePassword();
  }
  PasswordGenerationAgentStub.prototype.userSelectedManualGenerationOption = function() {
    return this.delegate_ && this.delegate_.userSelectedManualGenerationOption && this.delegate_.userSelectedManualGenerationOption();
  }
  PasswordGenerationAgentStub.prototype.formNotBlacklisted = function(form) {
    return this.delegate_ && this.delegate_.formNotBlacklisted && this.delegate_.formNotBlacklisted(form);
  }
  PasswordGenerationAgentStub.prototype.foundFormsEligibleForGeneration = function(forms) {
    return this.delegate_ && this.delegate_.foundFormsEligibleForGeneration && this.delegate_.foundFormsEligibleForGeneration(forms);
  }
  PasswordGenerationAgentStub.prototype.allowToRunFormClassifier = function() {
    return this.delegate_ && this.delegate_.allowToRunFormClassifier && this.delegate_.allowToRunFormClassifier();
  }

  PasswordGenerationAgentStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPasswordGenerationAgent_GeneratedPasswordAccepted_Name:
      var params = reader.decodeStruct(PasswordGenerationAgent_GeneratedPasswordAccepted_Params);
      this.generatedPasswordAccepted(params.generatedPassword);
      return true;
    case kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name:
      var params = reader.decodeStruct(PasswordGenerationAgent_UserTriggeredGeneratePassword_Params);
      this.userTriggeredGeneratePassword();
      return true;
    case kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name:
      var params = reader.decodeStruct(PasswordGenerationAgent_UserSelectedManualGenerationOption_Params);
      this.userSelectedManualGenerationOption();
      return true;
    case kPasswordGenerationAgent_FormNotBlacklisted_Name:
      var params = reader.decodeStruct(PasswordGenerationAgent_FormNotBlacklisted_Params);
      this.formNotBlacklisted(params.form);
      return true;
    case kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name:
      var params = reader.decodeStruct(PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params);
      this.foundFormsEligibleForGeneration(params.forms);
      return true;
    case kPasswordGenerationAgent_AllowToRunFormClassifier_Name:
      var params = reader.decodeStruct(PasswordGenerationAgent_AllowToRunFormClassifier_Params);
      this.allowToRunFormClassifier();
      return true;
    default:
      return false;
    }
  };

  PasswordGenerationAgentStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePasswordGenerationAgentRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPasswordGenerationAgent_GeneratedPasswordAccepted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordGenerationAgent_GeneratedPasswordAccepted_Params;
      break;
      case kPasswordGenerationAgent_UserTriggeredGeneratePassword_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordGenerationAgent_UserTriggeredGeneratePassword_Params;
      break;
      case kPasswordGenerationAgent_UserSelectedManualGenerationOption_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordGenerationAgent_UserSelectedManualGenerationOption_Params;
      break;
      case kPasswordGenerationAgent_FormNotBlacklisted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordGenerationAgent_FormNotBlacklisted_Params;
      break;
      case kPasswordGenerationAgent_FoundFormsEligibleForGeneration_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params;
      break;
      case kPasswordGenerationAgent_AllowToRunFormClassifier_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PasswordGenerationAgent_AllowToRunFormClassifier_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePasswordGenerationAgentResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PasswordGenerationAgent = {
    name: 'autofill.mojom.PasswordGenerationAgent',
    kVersion: 0,
    ptrClass: PasswordGenerationAgentPtr,
    proxyClass: PasswordGenerationAgentProxy,
    stubClass: PasswordGenerationAgentStub,
    validateRequest: validatePasswordGenerationAgentRequest,
    validateResponse: null,
    mojomId: 'components/autofill/content/common/autofill_agent.mojom',
    fuzzMethods: {
      generatedPasswordAccepted: {
        params: PasswordGenerationAgent_GeneratedPasswordAccepted_Params,
      },
      userTriggeredGeneratePassword: {
        params: PasswordGenerationAgent_UserTriggeredGeneratePassword_Params,
      },
      userSelectedManualGenerationOption: {
        params: PasswordGenerationAgent_UserSelectedManualGenerationOption_Params,
      },
      formNotBlacklisted: {
        params: PasswordGenerationAgent_FormNotBlacklisted_Params,
      },
      foundFormsEligibleForGeneration: {
        params: PasswordGenerationAgent_FoundFormsEligibleForGeneration_Params,
      },
      allowToRunFormClassifier: {
        params: PasswordGenerationAgent_AllowToRunFormClassifier_Params,
      },
    },
  };
  PasswordGenerationAgentStub.prototype.validator = validatePasswordGenerationAgentRequest;
  PasswordGenerationAgentProxy.prototype.validator = null;
  exports.AutofillAgent = AutofillAgent;
  exports.AutofillAgentPtr = AutofillAgentPtr;
  exports.AutofillAgentAssociatedPtr = AutofillAgentAssociatedPtr;
  exports.PasswordAutofillAgent = PasswordAutofillAgent;
  exports.PasswordAutofillAgentPtr = PasswordAutofillAgentPtr;
  exports.PasswordAutofillAgentAssociatedPtr = PasswordAutofillAgentAssociatedPtr;
  exports.PasswordGenerationAgent = PasswordGenerationAgent;
  exports.PasswordGenerationAgentPtr = PasswordGenerationAgentPtr;
  exports.PasswordGenerationAgentAssociatedPtr = PasswordGenerationAgentAssociatedPtr;
})();