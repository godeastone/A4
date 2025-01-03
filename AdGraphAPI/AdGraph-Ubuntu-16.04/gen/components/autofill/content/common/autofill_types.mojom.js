// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/autofill/content/common/autofill_types.mojom';
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
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../url/mojom/url.mojom.js');
  }


  var CheckStatus = {};
  CheckStatus.NOT_CHECKABLE = 0;
  CheckStatus.CHECKABLE_BUT_UNCHECKED = CheckStatus.NOT_CHECKABLE + 1;
  CheckStatus.CHECKED = CheckStatus.CHECKABLE_BUT_UNCHECKED + 1;

  CheckStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CheckStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var RoleAttribute = {};
  RoleAttribute.ROLE_ATTRIBUTE_PRESENTATION = 0;
  RoleAttribute.ROLE_ATTRIBUTE_OTHER = RoleAttribute.ROLE_ATTRIBUTE_PRESENTATION + 1;

  RoleAttribute.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  RoleAttribute.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GenerationUploadStatus = {};
  GenerationUploadStatus.NO_SIGNAL_SENT = 0;
  GenerationUploadStatus.POSITIVE_SIGNAL_SENT = GenerationUploadStatus.NO_SIGNAL_SENT + 1;
  GenerationUploadStatus.NEGATIVE_SIGNAL_SENT = GenerationUploadStatus.POSITIVE_SIGNAL_SENT + 1;
  GenerationUploadStatus.UNKNOWN_STATUS = 10;

  GenerationUploadStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 10:
      return true;
    }
    return false;
  };

  GenerationUploadStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PasswordFormLayout = {};
  PasswordFormLayout.LAYOUT_OTHER = 0;
  PasswordFormLayout.LAYOUT_LOGIN_AND_SIGNUP = PasswordFormLayout.LAYOUT_OTHER + 1;

  PasswordFormLayout.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  PasswordFormLayout.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PasswordFormType = {};
  PasswordFormType.TYPE_MANUAL = 0;
  PasswordFormType.TYPE_GENERATED = PasswordFormType.TYPE_MANUAL + 1;
  PasswordFormType.TYPE_API = PasswordFormType.TYPE_GENERATED + 1;

  PasswordFormType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PasswordFormType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PasswordFormScheme = {};
  PasswordFormScheme.SCHEME_HTML = 0;
  PasswordFormScheme.SCHEME_BASIC = PasswordFormScheme.SCHEME_HTML + 1;
  PasswordFormScheme.SCHEME_DIGEST = PasswordFormScheme.SCHEME_BASIC + 1;
  PasswordFormScheme.SCHEME_OTHER = PasswordFormScheme.SCHEME_DIGEST + 1;
  PasswordFormScheme.SCHEME_USERNAME_ONLY = PasswordFormScheme.SCHEME_OTHER + 1;

  PasswordFormScheme.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  PasswordFormScheme.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PasswordFormSubmissionIndicatorEvent = {};
  PasswordFormSubmissionIndicatorEvent.NONE = 0;
  PasswordFormSubmissionIndicatorEvent.HTML_FORM_SUBMISSION = PasswordFormSubmissionIndicatorEvent.NONE + 1;
  PasswordFormSubmissionIndicatorEvent.SAME_DOCUMENT_NAVIGATION = PasswordFormSubmissionIndicatorEvent.HTML_FORM_SUBMISSION + 1;
  PasswordFormSubmissionIndicatorEvent.XHR_SUCCEEDED = PasswordFormSubmissionIndicatorEvent.SAME_DOCUMENT_NAVIGATION + 1;
  PasswordFormSubmissionIndicatorEvent.FRAME_DETACHED = PasswordFormSubmissionIndicatorEvent.XHR_SUCCEEDED + 1;
  PasswordFormSubmissionIndicatorEvent.MANUAL_SAVE = PasswordFormSubmissionIndicatorEvent.FRAME_DETACHED + 1;
  PasswordFormSubmissionIndicatorEvent.DOM_MUTATION_AFTER_XHR = PasswordFormSubmissionIndicatorEvent.MANUAL_SAVE + 1;
  PasswordFormSubmissionIndicatorEvent.PROVISIONALLY_SAVED_FORM_ON_START_PROVISIONAL_LOAD = PasswordFormSubmissionIndicatorEvent.DOM_MUTATION_AFTER_XHR + 1;
  PasswordFormSubmissionIndicatorEvent.SUBMISSION_INDICATOR_EVENT_COUNT = PasswordFormSubmissionIndicatorEvent.PROVISIONALLY_SAVED_FORM_ON_START_PROVISIONAL_LOAD + 1;

  PasswordFormSubmissionIndicatorEvent.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  PasswordFormSubmissionIndicatorEvent.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PasswordFormFieldPredictionType = {};
  PasswordFormFieldPredictionType.PREDICTION_USERNAME = 0;
  PasswordFormFieldPredictionType.PREDICTION_CURRENT_PASSWORD = PasswordFormFieldPredictionType.PREDICTION_USERNAME + 1;
  PasswordFormFieldPredictionType.PREDICTION_NEW_PASSWORD = PasswordFormFieldPredictionType.PREDICTION_CURRENT_PASSWORD + 1;
  PasswordFormFieldPredictionType.PREDICTION_NOT_PASSWORD = PasswordFormFieldPredictionType.PREDICTION_NEW_PASSWORD + 1;

  PasswordFormFieldPredictionType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  PasswordFormFieldPredictionType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SubmissionSource = {};
  SubmissionSource.SAME_DOCUMENT_NAVIGATION = 0;
  SubmissionSource.XHR_SUCCEEDED = SubmissionSource.SAME_DOCUMENT_NAVIGATION + 1;
  SubmissionSource.FRAME_DETACHED = SubmissionSource.XHR_SUCCEEDED + 1;
  SubmissionSource.DOM_MUTATION_AFTER_XHR = SubmissionSource.FRAME_DETACHED + 1;
  SubmissionSource.PROBABLY_FORM_SUBMITTED = SubmissionSource.DOM_MUTATION_AFTER_XHR + 1;
  SubmissionSource.FORM_SUBMISSION = SubmissionSource.PROBABLY_FORM_SUBMITTED + 1;

  SubmissionSource.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  SubmissionSource.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var LabelSource = {};
  LabelSource.UNKNOWN = 0;
  LabelSource.LABEL_TAG = LabelSource.UNKNOWN + 1;
  LabelSource.P_TAG = LabelSource.LABEL_TAG + 1;
  LabelSource.DIV_TABLE = LabelSource.P_TAG + 1;
  LabelSource.TD_TAG = LabelSource.DIV_TABLE + 1;
  LabelSource.DD_TAG = LabelSource.TD_TAG + 1;
  LabelSource.LI_TAG = LabelSource.DD_TAG + 1;
  LabelSource.PLACE_HOLDER = LabelSource.LI_TAG + 1;
  LabelSource.ARIA_LABEL = LabelSource.PLACE_HOLDER + 1;
  LabelSource.COMBINED = LabelSource.ARIA_LABEL + 1;
  LabelSource.VALUE = LabelSource.COMBINED + 1;

  LabelSource.isKnownEnumValue = function(value) {
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

  LabelSource.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FormFieldData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FormFieldData.prototype.initDefaults_ = function() {
    this.label = null;
    this.name = null;
    this.id = null;
    this.value = null;
    this.formControlType = null;
    this.autocompleteAttribute = null;
    this.placeholder = null;
    this.cssClasses = null;
    this.uniqueRendererId = 0;
    this.propertiesMask = 0;
    this.maxLength = 0;
    this.isAutofilled = false;
    this.isFocusable = false;
    this.shouldAutocomplete = false;
    this.isEnabled = false;
    this.isReadonly = false;
    this.isDefault = false;
    this.checkStatus = 0;
    this.section = null;
    this.role = 0;
    this.textDirection = 0;
    this.typedValue = null;
    this.optionValues = null;
    this.optionContents = null;
    this.labelSource = 0;
  };
  FormFieldData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FormFieldData.generate = function(generator_) {
    var generated = new FormFieldData;
    generated.label = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.id = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.formControlType = generator_.generateString(false);
    generated.autocompleteAttribute = generator_.generateString(false);
    generated.placeholder = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.cssClasses = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.uniqueRendererId = generator_.generateUint32();
    generated.propertiesMask = generator_.generateUint32();
    generated.maxLength = generator_.generateUint64();
    generated.isAutofilled = generator_.generateBool();
    generated.section = generator_.generateString(false);
    generated.checkStatus = generator_.generateEnum(0, 2);
    generated.isFocusable = generator_.generateBool();
    generated.shouldAutocomplete = generator_.generateBool();
    generated.role = generator_.generateEnum(0, 1);
    generated.textDirection = generator_.generateEnum(0, 2);
    generated.isEnabled = generator_.generateBool();
    generated.isReadonly = generator_.generateBool();
    generated.isDefault = generator_.generateBool();
    generated.typedValue = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.optionValues = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    generated.optionContents = generator_.generateArray(function() {
      return generator_.generateStruct(mojoBase.mojom.String16, false);
    });
    generated.labelSource = generator_.generateEnum(0, 10);
    return generated;
  };

  FormFieldData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.formControlType = mutator_.mutateString(this.formControlType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.autocompleteAttribute = mutator_.mutateString(this.autocompleteAttribute, false);
    }
    if (mutator_.chooseMutateField()) {
      this.placeholder = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cssClasses = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueRendererId = mutator_.mutateUint32(this.uniqueRendererId);
    }
    if (mutator_.chooseMutateField()) {
      this.propertiesMask = mutator_.mutateUint32(this.propertiesMask);
    }
    if (mutator_.chooseMutateField()) {
      this.maxLength = mutator_.mutateUint64(this.maxLength);
    }
    if (mutator_.chooseMutateField()) {
      this.isAutofilled = mutator_.mutateBool(this.isAutofilled);
    }
    if (mutator_.chooseMutateField()) {
      this.section = mutator_.mutateString(this.section, false);
    }
    if (mutator_.chooseMutateField()) {
      this.checkStatus = mutator_.mutateEnum(this.checkStatus, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.isFocusable = mutator_.mutateBool(this.isFocusable);
    }
    if (mutator_.chooseMutateField()) {
      this.shouldAutocomplete = mutator_.mutateBool(this.shouldAutocomplete);
    }
    if (mutator_.chooseMutateField()) {
      this.role = mutator_.mutateEnum(this.role, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.textDirection = mutator_.mutateEnum(this.textDirection, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.isEnabled = mutator_.mutateBool(this.isEnabled);
    }
    if (mutator_.chooseMutateField()) {
      this.isReadonly = mutator_.mutateBool(this.isReadonly);
    }
    if (mutator_.chooseMutateField()) {
      this.isDefault = mutator_.mutateBool(this.isDefault);
    }
    if (mutator_.chooseMutateField()) {
      this.typedValue = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.optionValues = mutator_.mutateArray(this.optionValues, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.optionContents = mutator_.mutateArray(this.optionContents, function(val) {
        return mutator_.mutateStruct(mojoBase.mojom.String16, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.labelSource = mutator_.mutateEnum(this.labelSource, 0, 10);
    }
    return this;
  };
  FormFieldData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FormFieldData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FormFieldData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FormFieldData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 144}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.label
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.formControlType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.autocompleteAttribute
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.placeholder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.cssClasses
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;






    // validate FormFieldData.section
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 88, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.checkStatus
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 84, CheckStatus);
    if (err !== validator.validationError.NONE)
        return err;




    // validate FormFieldData.role
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 96, RoleAttribute);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.textDirection
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 100, text_direction$.TextDirection);
    if (err !== validator.validationError.NONE)
        return err;





    // validate FormFieldData.typedValue
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 104, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.optionValues
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 112, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.optionContents
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 120, 8, new codec.PointerTo(string16$.String16), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldData.labelSource
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 128, LabelSource);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FormFieldData.encodedSize = codec.kStructHeaderSize + 136;

  FormFieldData.decode = function(decoder) {
    var packed;
    var val = new FormFieldData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStructPointer(string16$.String16);
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.id = decoder.decodeStructPointer(string16$.String16);
    val.value = decoder.decodeStructPointer(string16$.String16);
    val.formControlType = decoder.decodeStruct(codec.String);
    val.autocompleteAttribute = decoder.decodeStruct(codec.String);
    val.placeholder = decoder.decodeStructPointer(string16$.String16);
    val.cssClasses = decoder.decodeStructPointer(string16$.String16);
    val.uniqueRendererId = decoder.decodeStruct(codec.Uint32);
    val.propertiesMask = decoder.decodeStruct(codec.Uint32);
    val.maxLength = decoder.decodeStruct(codec.Uint64);
    packed = decoder.readUint8();
    val.isAutofilled = (packed >> 0) & 1 ? true : false;
    val.isFocusable = (packed >> 1) & 1 ? true : false;
    val.shouldAutocomplete = (packed >> 2) & 1 ? true : false;
    val.isEnabled = (packed >> 3) & 1 ? true : false;
    val.isReadonly = (packed >> 4) & 1 ? true : false;
    val.isDefault = (packed >> 5) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.checkStatus = decoder.decodeStruct(codec.Int32);
    val.section = decoder.decodeStruct(codec.String);
    val.role = decoder.decodeStruct(codec.Int32);
    val.textDirection = decoder.decodeStruct(codec.Int32);
    val.typedValue = decoder.decodeStructPointer(string16$.String16);
    val.optionValues = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    val.optionContents = decoder.decodeArrayPointer(new codec.PointerTo(string16$.String16));
    val.labelSource = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FormFieldData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FormFieldData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.label);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStructPointer(string16$.String16, val.id);
    encoder.encodeStructPointer(string16$.String16, val.value);
    encoder.encodeStruct(codec.String, val.formControlType);
    encoder.encodeStruct(codec.String, val.autocompleteAttribute);
    encoder.encodeStructPointer(string16$.String16, val.placeholder);
    encoder.encodeStructPointer(string16$.String16, val.cssClasses);
    encoder.encodeStruct(codec.Uint32, val.uniqueRendererId);
    encoder.encodeStruct(codec.Uint32, val.propertiesMask);
    encoder.encodeStruct(codec.Uint64, val.maxLength);
    packed = 0;
    packed |= (val.isAutofilled & 1) << 0
    packed |= (val.isFocusable & 1) << 1
    packed |= (val.shouldAutocomplete & 1) << 2
    packed |= (val.isEnabled & 1) << 3
    packed |= (val.isReadonly & 1) << 4
    packed |= (val.isDefault & 1) << 5
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.checkStatus);
    encoder.encodeStruct(codec.String, val.section);
    encoder.encodeStruct(codec.Int32, val.role);
    encoder.encodeStruct(codec.Int32, val.textDirection);
    encoder.encodeStructPointer(string16$.String16, val.typedValue);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.optionValues);
    encoder.encodeArrayPointer(new codec.PointerTo(string16$.String16), val.optionContents);
    encoder.encodeStruct(codec.Int32, val.labelSource);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FormData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FormData.prototype.initDefaults_ = function() {
    this.name = null;
    this.origin = null;
    this.action = null;
    this.mainFrameOrigin = null;
    this.isFormTag = false;
    this.isFormlessCheckout = false;
    this.uniqueRendererId = 0;
    this.fields = null;
  };
  FormData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FormData.generate = function(generator_) {
    var generated = new FormData;
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.origin = generator_.generateStruct(url.mojom.Url, false);
    generated.action = generator_.generateStruct(url.mojom.Url, false);
    generated.mainFrameOrigin = generator_.generateStruct(url.mojom.Origin, false);
    generated.isFormTag = generator_.generateBool();
    generated.isFormlessCheckout = generator_.generateBool();
    generated.uniqueRendererId = generator_.generateUint32();
    generated.fields = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.FormFieldData, false);
    });
    return generated;
  };

  FormData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isFormTag = mutator_.mutateBool(this.isFormTag);
    }
    if (mutator_.chooseMutateField()) {
      this.isFormlessCheckout = mutator_.mutateBool(this.isFormlessCheckout);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueRendererId = mutator_.mutateUint32(this.uniqueRendererId);
    }
    if (mutator_.chooseMutateField()) {
      this.fields = mutator_.mutateArray(this.fields, function(val) {
        return mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
      });
    }
    return this;
  };
  FormData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FormData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FormData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FormData.validate = function(messageValidator, offset) {
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


    // validate FormData.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormData.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormData.action
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormData.mainFrameOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;





    // validate FormData.fields
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(FormFieldData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FormData.encodedSize = codec.kStructHeaderSize + 48;

  FormData.decode = function(decoder) {
    var packed;
    var val = new FormData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.origin = decoder.decodeStructPointer(url$.Url);
    val.action = decoder.decodeStructPointer(url$.Url);
    val.mainFrameOrigin = decoder.decodeStructPointer(origin$.Origin);
    packed = decoder.readUint8();
    val.isFormTag = (packed >> 0) & 1 ? true : false;
    val.isFormlessCheckout = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.uniqueRendererId = decoder.decodeStruct(codec.Uint32);
    val.fields = decoder.decodeArrayPointer(new codec.PointerTo(FormFieldData));
    return val;
  };

  FormData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FormData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStructPointer(url$.Url, val.origin);
    encoder.encodeStructPointer(url$.Url, val.action);
    encoder.encodeStructPointer(origin$.Origin, val.mainFrameOrigin);
    packed = 0;
    packed |= (val.isFormTag & 1) << 0
    packed |= (val.isFormlessCheckout & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.uniqueRendererId);
    encoder.encodeArrayPointer(new codec.PointerTo(FormFieldData), val.fields);
  };
  function FormFieldDataPredictions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FormFieldDataPredictions.prototype.initDefaults_ = function() {
    this.field = null;
    this.signature = null;
    this.heuristicType = null;
    this.serverType = null;
    this.overallType = null;
    this.parseableName = null;
    this.section = null;
  };
  FormFieldDataPredictions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FormFieldDataPredictions.generate = function(generator_) {
    var generated = new FormFieldDataPredictions;
    generated.field = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.signature = generator_.generateString(false);
    generated.heuristicType = generator_.generateString(false);
    generated.serverType = generator_.generateString(false);
    generated.overallType = generator_.generateString(false);
    generated.parseableName = generator_.generateString(false);
    generated.section = generator_.generateString(false);
    return generated;
  };

  FormFieldDataPredictions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.field = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.signature = mutator_.mutateString(this.signature, false);
    }
    if (mutator_.chooseMutateField()) {
      this.heuristicType = mutator_.mutateString(this.heuristicType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.serverType = mutator_.mutateString(this.serverType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.overallType = mutator_.mutateString(this.overallType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.parseableName = mutator_.mutateString(this.parseableName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.section = mutator_.mutateString(this.section, false);
    }
    return this;
  };
  FormFieldDataPredictions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FormFieldDataPredictions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FormFieldDataPredictions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FormFieldDataPredictions.validate = function(messageValidator, offset) {
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


    // validate FormFieldDataPredictions.field
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldDataPredictions.signature
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldDataPredictions.heuristicType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldDataPredictions.serverType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldDataPredictions.overallType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldDataPredictions.parseableName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormFieldDataPredictions.section
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FormFieldDataPredictions.encodedSize = codec.kStructHeaderSize + 56;

  FormFieldDataPredictions.decode = function(decoder) {
    var packed;
    var val = new FormFieldDataPredictions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.field = decoder.decodeStructPointer(FormFieldData);
    val.signature = decoder.decodeStruct(codec.String);
    val.heuristicType = decoder.decodeStruct(codec.String);
    val.serverType = decoder.decodeStruct(codec.String);
    val.overallType = decoder.decodeStruct(codec.String);
    val.parseableName = decoder.decodeStruct(codec.String);
    val.section = decoder.decodeStruct(codec.String);
    return val;
  };

  FormFieldDataPredictions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FormFieldDataPredictions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(FormFieldData, val.field);
    encoder.encodeStruct(codec.String, val.signature);
    encoder.encodeStruct(codec.String, val.heuristicType);
    encoder.encodeStruct(codec.String, val.serverType);
    encoder.encodeStruct(codec.String, val.overallType);
    encoder.encodeStruct(codec.String, val.parseableName);
    encoder.encodeStruct(codec.String, val.section);
  };
  function FormDataPredictions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FormDataPredictions.prototype.initDefaults_ = function() {
    this.data = null;
    this.signature = null;
    this.fields = null;
  };
  FormDataPredictions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FormDataPredictions.generate = function(generator_) {
    var generated = new FormDataPredictions;
    generated.data = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.signature = generator_.generateString(false);
    generated.fields = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.FormFieldDataPredictions, false);
    });
    return generated;
  };

  FormDataPredictions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.signature = mutator_.mutateString(this.signature, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fields = mutator_.mutateArray(this.fields, function(val) {
        return mutator_.mutateStruct(autofill.mojom.FormFieldDataPredictions, false);
      });
    }
    return this;
  };
  FormDataPredictions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FormDataPredictions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FormDataPredictions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FormDataPredictions.validate = function(messageValidator, offset) {
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


    // validate FormDataPredictions.data
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormDataPredictions.signature
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormDataPredictions.fields
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(FormFieldDataPredictions), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FormDataPredictions.encodedSize = codec.kStructHeaderSize + 24;

  FormDataPredictions.decode = function(decoder) {
    var packed;
    var val = new FormDataPredictions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeStructPointer(FormData);
    val.signature = decoder.decodeStruct(codec.String);
    val.fields = decoder.decodeArrayPointer(new codec.PointerTo(FormFieldDataPredictions));
    return val;
  };

  FormDataPredictions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FormDataPredictions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(FormData, val.data);
    encoder.encodeStruct(codec.String, val.signature);
    encoder.encodeArrayPointer(new codec.PointerTo(FormFieldDataPredictions), val.fields);
  };
  function PasswordAndRealm(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordAndRealm.prototype.initDefaults_ = function() {
    this.password = null;
    this.realm = null;
  };
  PasswordAndRealm.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordAndRealm.generate = function(generator_) {
    var generated = new PasswordAndRealm;
    generated.password = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.realm = generator_.generateString(false);
    return generated;
  };

  PasswordAndRealm.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.password = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.realm = mutator_.mutateString(this.realm, false);
    }
    return this;
  };
  PasswordAndRealm.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordAndRealm.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordAndRealm.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordAndRealm.validate = function(messageValidator, offset) {
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


    // validate PasswordAndRealm.password
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordAndRealm.realm
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordAndRealm.encodedSize = codec.kStructHeaderSize + 16;

  PasswordAndRealm.decode = function(decoder) {
    var packed;
    var val = new PasswordAndRealm();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.password = decoder.decodeStructPointer(string16$.String16);
    val.realm = decoder.decodeStruct(codec.String);
    return val;
  };

  PasswordAndRealm.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordAndRealm.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.password);
    encoder.encodeStruct(codec.String, val.realm);
  };
  function PasswordFormFillData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordFormFillData.prototype.initDefaults_ = function() {
    this.name = null;
    this.origin = null;
    this.action = null;
    this.usernameField = null;
    this.passwordField = null;
    this.preferredRealm = null;
    this.additionalLogins = null;
    this.waitForUsername = false;
    this.isPossibleChangePasswordForm = false;
  };
  PasswordFormFillData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordFormFillData.generate = function(generator_) {
    var generated = new PasswordFormFillData;
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.origin = generator_.generateStruct(url.mojom.Url, false);
    generated.action = generator_.generateStruct(url.mojom.Url, false);
    generated.usernameField = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.passwordField = generator_.generateStruct(autofill.mojom.FormFieldData, false);
    generated.preferredRealm = generator_.generateString(false);
    generated.additionalLogins = generator_.generateMap(
      function() {
        return generator_.generateStruct(mojoBase.mojom.String16, false);
      },
      function() {
        return generator_.generateStruct(autofill.mojom.PasswordAndRealm, false);
      });
    generated.waitForUsername = generator_.generateBool();
    generated.isPossibleChangePasswordForm = generator_.generateBool();
    return generated;
  };

  PasswordFormFillData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.usernameField = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.passwordField = mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.preferredRealm = mutator_.mutateString(this.preferredRealm, false);
    }
    if (mutator_.chooseMutateField()) {
      this.additionalLogins = mutator_.mutateMap(this.additionalLogins,
        function(val) {
          return mutator_.mutateStruct(mojoBase.mojom.String16, false);
        },
        function(val) {
          return mutator_.mutateStruct(autofill.mojom.PasswordAndRealm, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.waitForUsername = mutator_.mutateBool(this.waitForUsername);
    }
    if (mutator_.chooseMutateField()) {
      this.isPossibleChangePasswordForm = mutator_.mutateBool(this.isPossibleChangePasswordForm);
    }
    return this;
  };
  PasswordFormFillData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordFormFillData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordFormFillData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordFormFillData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.action
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.usernameField
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.passwordField
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, FormFieldData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.preferredRealm
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFillData.additionalLogins
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 48, false, new codec.PointerTo(string16$.String16), new codec.PointerTo(PasswordAndRealm), false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  PasswordFormFillData.encodedSize = codec.kStructHeaderSize + 64;

  PasswordFormFillData.decode = function(decoder) {
    var packed;
    var val = new PasswordFormFillData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.origin = decoder.decodeStructPointer(url$.Url);
    val.action = decoder.decodeStructPointer(url$.Url);
    val.usernameField = decoder.decodeStructPointer(FormFieldData);
    val.passwordField = decoder.decodeStructPointer(FormFieldData);
    val.preferredRealm = decoder.decodeStruct(codec.String);
    val.additionalLogins = decoder.decodeMapPointer(new codec.PointerTo(string16$.String16), new codec.PointerTo(PasswordAndRealm));
    packed = decoder.readUint8();
    val.waitForUsername = (packed >> 0) & 1 ? true : false;
    val.isPossibleChangePasswordForm = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PasswordFormFillData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordFormFillData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStructPointer(url$.Url, val.origin);
    encoder.encodeStructPointer(url$.Url, val.action);
    encoder.encodeStructPointer(FormFieldData, val.usernameField);
    encoder.encodeStructPointer(FormFieldData, val.passwordField);
    encoder.encodeStruct(codec.String, val.preferredRealm);
    encoder.encodeMapPointer(new codec.PointerTo(string16$.String16), new codec.PointerTo(PasswordAndRealm), val.additionalLogins);
    packed = 0;
    packed |= (val.waitForUsername & 1) << 0
    packed |= (val.isPossibleChangePasswordForm & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PasswordFormGenerationData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordFormGenerationData.prototype.initDefaults_ = function() {
    this.formSignature = 0;
    this.fieldSignature = 0;
    this.hasConfirmationField = false;
    this.confirmationFieldSignature = 0;
  };
  PasswordFormGenerationData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordFormGenerationData.generate = function(generator_) {
    var generated = new PasswordFormGenerationData;
    generated.formSignature = generator_.generateUint64();
    generated.fieldSignature = generator_.generateUint32();
    generated.hasConfirmationField = generator_.generateBool();
    generated.confirmationFieldSignature = generator_.generateUint32();
    return generated;
  };

  PasswordFormGenerationData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.formSignature = mutator_.mutateUint64(this.formSignature);
    }
    if (mutator_.chooseMutateField()) {
      this.fieldSignature = mutator_.mutateUint32(this.fieldSignature);
    }
    if (mutator_.chooseMutateField()) {
      this.hasConfirmationField = mutator_.mutateBool(this.hasConfirmationField);
    }
    if (mutator_.chooseMutateField()) {
      this.confirmationFieldSignature = mutator_.mutateUint32(this.confirmationFieldSignature);
    }
    return this;
  };
  PasswordFormGenerationData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordFormGenerationData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordFormGenerationData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordFormGenerationData.validate = function(messageValidator, offset) {
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





    return validator.validationError.NONE;
  };

  PasswordFormGenerationData.encodedSize = codec.kStructHeaderSize + 24;

  PasswordFormGenerationData.decode = function(decoder) {
    var packed;
    var val = new PasswordFormGenerationData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.formSignature = decoder.decodeStruct(codec.Uint64);
    val.fieldSignature = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.hasConfirmationField = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.confirmationFieldSignature = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PasswordFormGenerationData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordFormGenerationData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.formSignature);
    encoder.encodeStruct(codec.Uint32, val.fieldSignature);
    packed = 0;
    packed |= (val.hasConfirmationField & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.confirmationFieldSignature);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ValueElementPair(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ValueElementPair.prototype.initDefaults_ = function() {
    this.value = null;
    this.fieldName = null;
  };
  ValueElementPair.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ValueElementPair.generate = function(generator_) {
    var generated = new ValueElementPair;
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.fieldName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  ValueElementPair.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.fieldName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  ValueElementPair.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ValueElementPair.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ValueElementPair.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ValueElementPair.validate = function(messageValidator, offset) {
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


    // validate ValueElementPair.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ValueElementPair.fieldName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ValueElementPair.encodedSize = codec.kStructHeaderSize + 16;

  ValueElementPair.decode = function(decoder) {
    var packed;
    var val = new ValueElementPair();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(string16$.String16);
    val.fieldName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  ValueElementPair.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ValueElementPair.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.value);
    encoder.encodeStructPointer(string16$.String16, val.fieldName);
  };
  function PasswordForm(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordForm.prototype.initDefaults_ = function() {
    this.scheme = 0;
    this.usernameMarkedBySite = false;
    this.formHasAutofilledValue = false;
    this.passwordValueIsDefault = false;
    this.newPasswordValueIsDefault = false;
    this.newPasswordMarkedBySite = false;
    this.preferred = false;
    this.blacklistedByUser = false;
    this.skipZeroClick = false;
    this.wasParsedUsingAutofillPredictions = false;
    this.isPublicSuffixMatch = false;
    this.isAffiliationBasedMatch = false;
    this.onlyForFallbackSaving = false;
    this.signonRealm = null;
    this.originWithPath = null;
    this.action = null;
    this.affiliatedWebRealm = null;
    this.submitElement = null;
    this.usernameElement = null;
    this.usernameValue = null;
    this.otherPossibleUsernames = null;
    this.allPossiblePasswords = null;
    this.passwordElement = null;
    this.passwordValue = null;
    this.newPasswordElement = null;
    this.newPasswordValue = null;
    this.confirmationPasswordElement = null;
    this.dateCreated = null;
    this.dateSynced = null;
    this.type = 0;
    this.timesUsed = 0;
    this.formData = null;
    this.generationUploadStatus = 0;
    this.layout = 0;
    this.displayName = null;
    this.iconUrl = null;
    this.federationOrigin = null;
    this.submissionEvent = 0;
  };
  PasswordForm.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordForm.generate = function(generator_) {
    var generated = new PasswordForm;
    generated.scheme = generator_.generateEnum(0, 4);
    generated.signonRealm = generator_.generateString(false);
    generated.originWithPath = generator_.generateStruct(url.mojom.Url, false);
    generated.action = generator_.generateStruct(url.mojom.Url, false);
    generated.affiliatedWebRealm = generator_.generateString(false);
    generated.submitElement = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.usernameElement = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.usernameMarkedBySite = generator_.generateBool();
    generated.usernameValue = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.otherPossibleUsernames = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.ValueElementPair, false);
    });
    generated.allPossiblePasswords = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.ValueElementPair, false);
    });
    generated.formHasAutofilledValue = generator_.generateBool();
    generated.passwordElement = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.passwordValue = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.passwordValueIsDefault = generator_.generateBool();
    generated.newPasswordElement = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.newPasswordValue = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.newPasswordValueIsDefault = generator_.generateBool();
    generated.newPasswordMarkedBySite = generator_.generateBool();
    generated.confirmationPasswordElement = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.preferred = generator_.generateBool();
    generated.dateCreated = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.dateSynced = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.blacklistedByUser = generator_.generateBool();
    generated.type = generator_.generateEnum(0, 2);
    generated.timesUsed = generator_.generateInt32();
    generated.formData = generator_.generateStruct(autofill.mojom.FormData, false);
    generated.generationUploadStatus = generator_.generateEnum(0, 10);
    generated.displayName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.iconUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.federationOrigin = generator_.generateStruct(url.mojom.Origin, false);
    generated.skipZeroClick = generator_.generateBool();
    generated.layout = generator_.generateEnum(0, 1);
    generated.wasParsedUsingAutofillPredictions = generator_.generateBool();
    generated.isPublicSuffixMatch = generator_.generateBool();
    generated.isAffiliationBasedMatch = generator_.generateBool();
    generated.submissionEvent = generator_.generateEnum(0, 8);
    generated.onlyForFallbackSaving = generator_.generateBool();
    return generated;
  };

  PasswordForm.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scheme = mutator_.mutateEnum(this.scheme, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.signonRealm = mutator_.mutateString(this.signonRealm, false);
    }
    if (mutator_.chooseMutateField()) {
      this.originWithPath = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.affiliatedWebRealm = mutator_.mutateString(this.affiliatedWebRealm, false);
    }
    if (mutator_.chooseMutateField()) {
      this.submitElement = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.usernameElement = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.usernameMarkedBySite = mutator_.mutateBool(this.usernameMarkedBySite);
    }
    if (mutator_.chooseMutateField()) {
      this.usernameValue = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.otherPossibleUsernames = mutator_.mutateArray(this.otherPossibleUsernames, function(val) {
        return mutator_.mutateStruct(autofill.mojom.ValueElementPair, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.allPossiblePasswords = mutator_.mutateArray(this.allPossiblePasswords, function(val) {
        return mutator_.mutateStruct(autofill.mojom.ValueElementPair, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.formHasAutofilledValue = mutator_.mutateBool(this.formHasAutofilledValue);
    }
    if (mutator_.chooseMutateField()) {
      this.passwordElement = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.passwordValue = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.passwordValueIsDefault = mutator_.mutateBool(this.passwordValueIsDefault);
    }
    if (mutator_.chooseMutateField()) {
      this.newPasswordElement = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newPasswordValue = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newPasswordValueIsDefault = mutator_.mutateBool(this.newPasswordValueIsDefault);
    }
    if (mutator_.chooseMutateField()) {
      this.newPasswordMarkedBySite = mutator_.mutateBool(this.newPasswordMarkedBySite);
    }
    if (mutator_.chooseMutateField()) {
      this.confirmationPasswordElement = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.preferred = mutator_.mutateBool(this.preferred);
    }
    if (mutator_.chooseMutateField()) {
      this.dateCreated = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dateSynced = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.blacklistedByUser = mutator_.mutateBool(this.blacklistedByUser);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.timesUsed = mutator_.mutateInt32(this.timesUsed);
    }
    if (mutator_.chooseMutateField()) {
      this.formData = mutator_.mutateStruct(autofill.mojom.FormData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.generationUploadStatus = mutator_.mutateEnum(this.generationUploadStatus, 0, 10);
    }
    if (mutator_.chooseMutateField()) {
      this.displayName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.iconUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.federationOrigin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.skipZeroClick = mutator_.mutateBool(this.skipZeroClick);
    }
    if (mutator_.chooseMutateField()) {
      this.layout = mutator_.mutateEnum(this.layout, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.wasParsedUsingAutofillPredictions = mutator_.mutateBool(this.wasParsedUsingAutofillPredictions);
    }
    if (mutator_.chooseMutateField()) {
      this.isPublicSuffixMatch = mutator_.mutateBool(this.isPublicSuffixMatch);
    }
    if (mutator_.chooseMutateField()) {
      this.isAffiliationBasedMatch = mutator_.mutateBool(this.isAffiliationBasedMatch);
    }
    if (mutator_.chooseMutateField()) {
      this.submissionEvent = mutator_.mutateEnum(this.submissionEvent, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.onlyForFallbackSaving = mutator_.mutateBool(this.onlyForFallbackSaving);
    }
    return this;
  };
  PasswordForm.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordForm.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordForm.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordForm.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 200}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.scheme
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PasswordFormScheme);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.signonRealm
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.originWithPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.action
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.affiliatedWebRealm
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.submitElement
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.usernameElement
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.usernameValue
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.otherPossibleUsernames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 8, new codec.PointerTo(ValueElementPair), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.allPossiblePasswords
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 72, 8, new codec.PointerTo(ValueElementPair), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.passwordElement
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 80, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.passwordValue
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 88, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.newPasswordElement
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 96, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.newPasswordValue
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 104, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate PasswordForm.confirmationPasswordElement
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 112, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.dateCreated
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 120, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.dateSynced
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 128, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 136, PasswordFormType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.formData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 144, FormData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.generationUploadStatus
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 152, GenerationUploadStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.displayName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 160, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.iconUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 168, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordForm.federationOrigin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 176, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate PasswordForm.layout
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 156, PasswordFormLayout);
    if (err !== validator.validationError.NONE)
        return err;





    // validate PasswordForm.submissionEvent
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 184, PasswordFormSubmissionIndicatorEvent);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PasswordForm.encodedSize = codec.kStructHeaderSize + 192;

  PasswordForm.decode = function(decoder) {
    var packed;
    var val = new PasswordForm();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scheme = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.usernameMarkedBySite = (packed >> 0) & 1 ? true : false;
    val.formHasAutofilledValue = (packed >> 1) & 1 ? true : false;
    val.passwordValueIsDefault = (packed >> 2) & 1 ? true : false;
    val.newPasswordValueIsDefault = (packed >> 3) & 1 ? true : false;
    val.newPasswordMarkedBySite = (packed >> 4) & 1 ? true : false;
    val.preferred = (packed >> 5) & 1 ? true : false;
    val.blacklistedByUser = (packed >> 6) & 1 ? true : false;
    val.skipZeroClick = (packed >> 7) & 1 ? true : false;
    packed = decoder.readUint8();
    val.wasParsedUsingAutofillPredictions = (packed >> 0) & 1 ? true : false;
    val.isPublicSuffixMatch = (packed >> 1) & 1 ? true : false;
    val.isAffiliationBasedMatch = (packed >> 2) & 1 ? true : false;
    val.onlyForFallbackSaving = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    val.signonRealm = decoder.decodeStruct(codec.String);
    val.originWithPath = decoder.decodeStructPointer(url$.Url);
    val.action = decoder.decodeStructPointer(url$.Url);
    val.affiliatedWebRealm = decoder.decodeStruct(codec.String);
    val.submitElement = decoder.decodeStructPointer(string16$.String16);
    val.usernameElement = decoder.decodeStructPointer(string16$.String16);
    val.usernameValue = decoder.decodeStructPointer(string16$.String16);
    val.otherPossibleUsernames = decoder.decodeArrayPointer(new codec.PointerTo(ValueElementPair));
    val.allPossiblePasswords = decoder.decodeArrayPointer(new codec.PointerTo(ValueElementPair));
    val.passwordElement = decoder.decodeStructPointer(string16$.String16);
    val.passwordValue = decoder.decodeStructPointer(string16$.String16);
    val.newPasswordElement = decoder.decodeStructPointer(string16$.String16);
    val.newPasswordValue = decoder.decodeStructPointer(string16$.String16);
    val.confirmationPasswordElement = decoder.decodeStructPointer(string16$.String16);
    val.dateCreated = decoder.decodeStructPointer(time$.Time);
    val.dateSynced = decoder.decodeStructPointer(time$.Time);
    val.type = decoder.decodeStruct(codec.Int32);
    val.timesUsed = decoder.decodeStruct(codec.Int32);
    val.formData = decoder.decodeStructPointer(FormData);
    val.generationUploadStatus = decoder.decodeStruct(codec.Int32);
    val.layout = decoder.decodeStruct(codec.Int32);
    val.displayName = decoder.decodeStructPointer(string16$.String16);
    val.iconUrl = decoder.decodeStructPointer(url$.Url);
    val.federationOrigin = decoder.decodeStructPointer(origin$.Origin);
    val.submissionEvent = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PasswordForm.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordForm.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.scheme);
    packed = 0;
    packed |= (val.usernameMarkedBySite & 1) << 0
    packed |= (val.formHasAutofilledValue & 1) << 1
    packed |= (val.passwordValueIsDefault & 1) << 2
    packed |= (val.newPasswordValueIsDefault & 1) << 3
    packed |= (val.newPasswordMarkedBySite & 1) << 4
    packed |= (val.preferred & 1) << 5
    packed |= (val.blacklistedByUser & 1) << 6
    packed |= (val.skipZeroClick & 1) << 7
    encoder.writeUint8(packed);
    packed = 0;
    packed |= (val.wasParsedUsingAutofillPredictions & 1) << 0
    packed |= (val.isPublicSuffixMatch & 1) << 1
    packed |= (val.isAffiliationBasedMatch & 1) << 2
    packed |= (val.onlyForFallbackSaving & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.signonRealm);
    encoder.encodeStructPointer(url$.Url, val.originWithPath);
    encoder.encodeStructPointer(url$.Url, val.action);
    encoder.encodeStruct(codec.String, val.affiliatedWebRealm);
    encoder.encodeStructPointer(string16$.String16, val.submitElement);
    encoder.encodeStructPointer(string16$.String16, val.usernameElement);
    encoder.encodeStructPointer(string16$.String16, val.usernameValue);
    encoder.encodeArrayPointer(new codec.PointerTo(ValueElementPair), val.otherPossibleUsernames);
    encoder.encodeArrayPointer(new codec.PointerTo(ValueElementPair), val.allPossiblePasswords);
    encoder.encodeStructPointer(string16$.String16, val.passwordElement);
    encoder.encodeStructPointer(string16$.String16, val.passwordValue);
    encoder.encodeStructPointer(string16$.String16, val.newPasswordElement);
    encoder.encodeStructPointer(string16$.String16, val.newPasswordValue);
    encoder.encodeStructPointer(string16$.String16, val.confirmationPasswordElement);
    encoder.encodeStructPointer(time$.Time, val.dateCreated);
    encoder.encodeStructPointer(time$.Time, val.dateSynced);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Int32, val.timesUsed);
    encoder.encodeStructPointer(FormData, val.formData);
    encoder.encodeStruct(codec.Int32, val.generationUploadStatus);
    encoder.encodeStruct(codec.Int32, val.layout);
    encoder.encodeStructPointer(string16$.String16, val.displayName);
    encoder.encodeStructPointer(url$.Url, val.iconUrl);
    encoder.encodeStructPointer(origin$.Origin, val.federationOrigin);
    encoder.encodeStruct(codec.Int32, val.submissionEvent);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PasswordFormFieldPredictionMap(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PasswordFormFieldPredictionMap.prototype.initDefaults_ = function() {
    this.keys = null;
    this.values = null;
  };
  PasswordFormFieldPredictionMap.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PasswordFormFieldPredictionMap.generate = function(generator_) {
    var generated = new PasswordFormFieldPredictionMap;
    generated.keys = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.FormFieldData, false);
    });
    generated.values = generator_.generateArray(function() {
      return generator_.generateEnum(0, 3);
    });
    return generated;
  };

  PasswordFormFieldPredictionMap.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keys = mutator_.mutateArray(this.keys, function(val) {
        return mutator_.mutateStruct(autofill.mojom.FormFieldData, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateArray(this.values, function(val) {
        return mutator_.mutateEnum(val, 0, 3);
      });
    }
    return this;
  };
  PasswordFormFieldPredictionMap.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PasswordFormFieldPredictionMap.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PasswordFormFieldPredictionMap.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PasswordFormFieldPredictionMap.validate = function(messageValidator, offset) {
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


    // validate PasswordFormFieldPredictionMap.keys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FormFieldData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PasswordFormFieldPredictionMap.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, new codec.Enum(PasswordFormFieldPredictionType), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PasswordFormFieldPredictionMap.encodedSize = codec.kStructHeaderSize + 16;

  PasswordFormFieldPredictionMap.decode = function(decoder) {
    var packed;
    var val = new PasswordFormFieldPredictionMap();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keys = decoder.decodeArrayPointer(new codec.PointerTo(FormFieldData));
    val.values = decoder.decodeArrayPointer(new codec.Enum(PasswordFormFieldPredictionType));
    return val;
  };

  PasswordFormFieldPredictionMap.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PasswordFormFieldPredictionMap.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(FormFieldData), val.keys);
    encoder.encodeArrayPointer(new codec.Enum(PasswordFormFieldPredictionType), val.values);
  };
  function FormsPredictionsMap(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FormsPredictionsMap.prototype.initDefaults_ = function() {
    this.keys = null;
    this.values = null;
  };
  FormsPredictionsMap.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FormsPredictionsMap.generate = function(generator_) {
    var generated = new FormsPredictionsMap;
    generated.keys = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.FormData, false);
    });
    generated.values = generator_.generateArray(function() {
      return generator_.generateStruct(autofill.mojom.PasswordFormFieldPredictionMap, false);
    });
    return generated;
  };

  FormsPredictionsMap.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keys = mutator_.mutateArray(this.keys, function(val) {
        return mutator_.mutateStruct(autofill.mojom.FormData, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.values = mutator_.mutateArray(this.values, function(val) {
        return mutator_.mutateStruct(autofill.mojom.PasswordFormFieldPredictionMap, false);
      });
    }
    return this;
  };
  FormsPredictionsMap.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FormsPredictionsMap.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FormsPredictionsMap.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FormsPredictionsMap.validate = function(messageValidator, offset) {
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


    // validate FormsPredictionsMap.keys
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(FormData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FormsPredictionsMap.values
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(PasswordFormFieldPredictionMap), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FormsPredictionsMap.encodedSize = codec.kStructHeaderSize + 16;

  FormsPredictionsMap.decode = function(decoder) {
    var packed;
    var val = new FormsPredictionsMap();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keys = decoder.decodeArrayPointer(new codec.PointerTo(FormData));
    val.values = decoder.decodeArrayPointer(new codec.PointerTo(PasswordFormFieldPredictionMap));
    return val;
  };

  FormsPredictionsMap.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FormsPredictionsMap.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(FormData), val.keys);
    encoder.encodeArrayPointer(new codec.PointerTo(PasswordFormFieldPredictionMap), val.values);
  };
  exports.CheckStatus = CheckStatus;
  exports.RoleAttribute = RoleAttribute;
  exports.GenerationUploadStatus = GenerationUploadStatus;
  exports.PasswordFormLayout = PasswordFormLayout;
  exports.PasswordFormType = PasswordFormType;
  exports.PasswordFormScheme = PasswordFormScheme;
  exports.PasswordFormSubmissionIndicatorEvent = PasswordFormSubmissionIndicatorEvent;
  exports.PasswordFormFieldPredictionType = PasswordFormFieldPredictionType;
  exports.SubmissionSource = SubmissionSource;
  exports.LabelSource = LabelSource;
  exports.FormFieldData = FormFieldData;
  exports.FormData = FormData;
  exports.FormFieldDataPredictions = FormFieldDataPredictions;
  exports.FormDataPredictions = FormDataPredictions;
  exports.PasswordAndRealm = PasswordAndRealm;
  exports.PasswordFormFillData = PasswordFormFillData;
  exports.PasswordFormGenerationData = PasswordFormGenerationData;
  exports.ValueElementPair = ValueElementPair;
  exports.PasswordForm = PasswordForm;
  exports.PasswordFormFieldPredictionMap = PasswordFormFieldPredictionMap;
  exports.FormsPredictionsMap = FormsPredictionsMap;
})();