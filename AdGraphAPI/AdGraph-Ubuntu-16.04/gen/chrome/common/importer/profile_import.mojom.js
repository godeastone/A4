// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/importer/profile_import.mojom';
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
  var autofill_types$ =
      mojo.internal.exposeNamespace('autofill.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/autofill/content/common/autofill_types.mojom', '../../../components/autofill/content/common/autofill_types.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }


  var kProfileImportServiceName = "profile_import";
  var ImportItem = {};

  ImportItem.isKnownEnumValue = function(value) {
    return false;
  };

  ImportItem.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ImportedBookmarkEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImportedBookmarkEntry.prototype.initDefaults_ = function() {
  };
  ImportedBookmarkEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImportedBookmarkEntry.generate = function(generator_) {
    var generated = new ImportedBookmarkEntry;
    return generated;
  };

  ImportedBookmarkEntry.prototype.mutate = function(mutator_) {
    return this;
  };
  ImportedBookmarkEntry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImportedBookmarkEntry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImportedBookmarkEntry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImportedBookmarkEntry.validate = function(messageValidator, offset) {
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

  ImportedBookmarkEntry.encodedSize = codec.kStructHeaderSize + 0;

  ImportedBookmarkEntry.decode = function(decoder) {
    var packed;
    var val = new ImportedBookmarkEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ImportedBookmarkEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImportedBookmarkEntry.encodedSize);
    encoder.writeUint32(0);
  };
  function ImporterAutofillFormDataEntry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImporterAutofillFormDataEntry.prototype.initDefaults_ = function() {
  };
  ImporterAutofillFormDataEntry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImporterAutofillFormDataEntry.generate = function(generator_) {
    var generated = new ImporterAutofillFormDataEntry;
    return generated;
  };

  ImporterAutofillFormDataEntry.prototype.mutate = function(mutator_) {
    return this;
  };
  ImporterAutofillFormDataEntry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImporterAutofillFormDataEntry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImporterAutofillFormDataEntry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImporterAutofillFormDataEntry.validate = function(messageValidator, offset) {
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

  ImporterAutofillFormDataEntry.encodedSize = codec.kStructHeaderSize + 0;

  ImporterAutofillFormDataEntry.decode = function(decoder) {
    var packed;
    var val = new ImporterAutofillFormDataEntry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ImporterAutofillFormDataEntry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImporterAutofillFormDataEntry.encodedSize);
    encoder.writeUint32(0);
  };
  function SearchEngineInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SearchEngineInfo.prototype.initDefaults_ = function() {
  };
  SearchEngineInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SearchEngineInfo.generate = function(generator_) {
    var generated = new SearchEngineInfo;
    return generated;
  };

  SearchEngineInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  SearchEngineInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SearchEngineInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SearchEngineInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SearchEngineInfo.validate = function(messageValidator, offset) {
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

  SearchEngineInfo.encodedSize = codec.kStructHeaderSize + 0;

  SearchEngineInfo.decode = function(decoder) {
    var packed;
    var val = new SearchEngineInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SearchEngineInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SearchEngineInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function ImporterURLRow(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImporterURLRow.prototype.initDefaults_ = function() {
  };
  ImporterURLRow.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImporterURLRow.generate = function(generator_) {
    var generated = new ImporterURLRow;
    return generated;
  };

  ImporterURLRow.prototype.mutate = function(mutator_) {
    return this;
  };
  ImporterURLRow.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImporterURLRow.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImporterURLRow.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImporterURLRow.validate = function(messageValidator, offset) {
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

  ImporterURLRow.encodedSize = codec.kStructHeaderSize + 0;

  ImporterURLRow.decode = function(decoder) {
    var packed;
    var val = new ImporterURLRow();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ImporterURLRow.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImporterURLRow.encodedSize);
    encoder.writeUint32(0);
  };
  function SourceProfile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SourceProfile.prototype.initDefaults_ = function() {
  };
  SourceProfile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SourceProfile.generate = function(generator_) {
    var generated = new SourceProfile;
    return generated;
  };

  SourceProfile.prototype.mutate = function(mutator_) {
    return this;
  };
  SourceProfile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SourceProfile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SourceProfile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SourceProfile.validate = function(messageValidator, offset) {
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

  SourceProfile.encodedSize = codec.kStructHeaderSize + 0;

  SourceProfile.decode = function(decoder) {
    var packed;
    var val = new SourceProfile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SourceProfile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SourceProfile.encodedSize);
    encoder.writeUint32(0);
  };
  function FaviconUsageDataList(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FaviconUsageDataList.prototype.initDefaults_ = function() {
  };
  FaviconUsageDataList.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FaviconUsageDataList.generate = function(generator_) {
    var generated = new FaviconUsageDataList;
    return generated;
  };

  FaviconUsageDataList.prototype.mutate = function(mutator_) {
    return this;
  };
  FaviconUsageDataList.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FaviconUsageDataList.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FaviconUsageDataList.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FaviconUsageDataList.validate = function(messageValidator, offset) {
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

  FaviconUsageDataList.encodedSize = codec.kStructHeaderSize + 0;

  FaviconUsageDataList.decode = function(decoder) {
    var packed;
    var val = new FaviconUsageDataList();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FaviconUsageDataList.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FaviconUsageDataList.encodedSize);
    encoder.writeUint32(0);
  };
  function ImporterIE7PasswordInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImporterIE7PasswordInfo.prototype.initDefaults_ = function() {
  };
  ImporterIE7PasswordInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImporterIE7PasswordInfo.generate = function(generator_) {
    var generated = new ImporterIE7PasswordInfo;
    return generated;
  };

  ImporterIE7PasswordInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  ImporterIE7PasswordInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImporterIE7PasswordInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImporterIE7PasswordInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImporterIE7PasswordInfo.validate = function(messageValidator, offset) {
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

  ImporterIE7PasswordInfo.encodedSize = codec.kStructHeaderSize + 0;

  ImporterIE7PasswordInfo.decode = function(decoder) {
    var packed;
    var val = new ImporterIE7PasswordInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ImporterIE7PasswordInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImporterIE7PasswordInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function ProfileImportObserver_OnImportStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnImportStart_Params.prototype.initDefaults_ = function() {
  };
  ProfileImportObserver_OnImportStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnImportStart_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnImportStart_Params;
    return generated;
  };

  ProfileImportObserver_OnImportStart_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ProfileImportObserver_OnImportStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnImportStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnImportStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnImportStart_Params.validate = function(messageValidator, offset) {
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

  ProfileImportObserver_OnImportStart_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProfileImportObserver_OnImportStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnImportStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProfileImportObserver_OnImportStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnImportStart_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProfileImportObserver_OnImportFinished_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnImportFinished_Params.prototype.initDefaults_ = function() {
    this.succeeded = false;
    this.errorMsg = null;
  };
  ProfileImportObserver_OnImportFinished_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnImportFinished_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnImportFinished_Params;
    generated.succeeded = generator_.generateBool();
    generated.errorMsg = generator_.generateString(false);
    return generated;
  };

  ProfileImportObserver_OnImportFinished_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.succeeded = mutator_.mutateBool(this.succeeded);
    }
    if (mutator_.chooseMutateField()) {
      this.errorMsg = mutator_.mutateString(this.errorMsg, false);
    }
    return this;
  };
  ProfileImportObserver_OnImportFinished_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnImportFinished_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnImportFinished_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnImportFinished_Params.validate = function(messageValidator, offset) {
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



    // validate ProfileImportObserver_OnImportFinished_Params.errorMsg
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnImportFinished_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProfileImportObserver_OnImportFinished_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnImportFinished_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.succeeded = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorMsg = decoder.decodeStruct(codec.String);
    return val;
  };

  ProfileImportObserver_OnImportFinished_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnImportFinished_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.succeeded & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.errorMsg);
  };
  function ProfileImportObserver_OnImportItemStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnImportItemStart_Params.prototype.initDefaults_ = function() {
    this.item = 0;
  };
  ProfileImportObserver_OnImportItemStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnImportItemStart_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnImportItemStart_Params;
    generated.item = generator_.generateEnum();
    return generated;
  };

  ProfileImportObserver_OnImportItemStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.item = mutator_.mutateEnum(this.item);
    }
    return this;
  };
  ProfileImportObserver_OnImportItemStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnImportItemStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnImportItemStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnImportItemStart_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnImportItemStart_Params.item
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ImportItem);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnImportItemStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnImportItemStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnImportItemStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.item = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnImportItemStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnImportItemStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.item);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnImportItemFinished_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnImportItemFinished_Params.prototype.initDefaults_ = function() {
    this.item = 0;
  };
  ProfileImportObserver_OnImportItemFinished_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnImportItemFinished_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnImportItemFinished_Params;
    generated.item = generator_.generateEnum();
    return generated;
  };

  ProfileImportObserver_OnImportItemFinished_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.item = mutator_.mutateEnum(this.item);
    }
    return this;
  };
  ProfileImportObserver_OnImportItemFinished_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnImportItemFinished_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnImportItemFinished_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnImportItemFinished_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnImportItemFinished_Params.item
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ImportItem);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnImportItemFinished_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnImportItemFinished_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnImportItemFinished_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.item = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnImportItemFinished_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnImportItemFinished_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.item);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnHistoryImportStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnHistoryImportStart_Params.prototype.initDefaults_ = function() {
    this.totalHistoryRowsCount = 0;
  };
  ProfileImportObserver_OnHistoryImportStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnHistoryImportStart_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnHistoryImportStart_Params;
    generated.totalHistoryRowsCount = generator_.generateUint32();
    return generated;
  };

  ProfileImportObserver_OnHistoryImportStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.totalHistoryRowsCount = mutator_.mutateUint32(this.totalHistoryRowsCount);
    }
    return this;
  };
  ProfileImportObserver_OnHistoryImportStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnHistoryImportStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnHistoryImportStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnHistoryImportStart_Params.validate = function(messageValidator, offset) {
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

  ProfileImportObserver_OnHistoryImportStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnHistoryImportStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnHistoryImportStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.totalHistoryRowsCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnHistoryImportStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnHistoryImportStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.totalHistoryRowsCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnHistoryImportGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnHistoryImportGroup_Params.prototype.initDefaults_ = function() {
    this.historyRowsGroup = null;
    this.visitSource = 0;
  };
  ProfileImportObserver_OnHistoryImportGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnHistoryImportGroup_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnHistoryImportGroup_Params;
    generated.historyRowsGroup = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.ImporterURLRow, false);
    });
    generated.visitSource = generator_.generateInt32();
    return generated;
  };

  ProfileImportObserver_OnHistoryImportGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.historyRowsGroup = mutator_.mutateArray(this.historyRowsGroup, function(val) {
        return mutator_.mutateStruct(chrome.mojom.ImporterURLRow, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.visitSource = mutator_.mutateInt32(this.visitSource);
    }
    return this;
  };
  ProfileImportObserver_OnHistoryImportGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnHistoryImportGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnHistoryImportGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnHistoryImportGroup_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnHistoryImportGroup_Params.historyRowsGroup
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ImporterURLRow), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnHistoryImportGroup_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProfileImportObserver_OnHistoryImportGroup_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnHistoryImportGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.historyRowsGroup = decoder.decodeArrayPointer(new codec.PointerTo(ImporterURLRow));
    val.visitSource = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnHistoryImportGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnHistoryImportGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ImporterURLRow), val.historyRowsGroup);
    encoder.encodeStruct(codec.Int32, val.visitSource);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnHomePageImportReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnHomePageImportReady_Params.prototype.initDefaults_ = function() {
    this.homePage = null;
  };
  ProfileImportObserver_OnHomePageImportReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnHomePageImportReady_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnHomePageImportReady_Params;
    generated.homePage = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  ProfileImportObserver_OnHomePageImportReady_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.homePage = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  ProfileImportObserver_OnHomePageImportReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnHomePageImportReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnHomePageImportReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnHomePageImportReady_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnHomePageImportReady_Params.homePage
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnHomePageImportReady_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnHomePageImportReady_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnHomePageImportReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.homePage = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ProfileImportObserver_OnHomePageImportReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnHomePageImportReady_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.homePage);
  };
  function ProfileImportObserver_OnBookmarksImportStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnBookmarksImportStart_Params.prototype.initDefaults_ = function() {
    this.firstFolderName = null;
    this.totalBookmarksCount = 0;
  };
  ProfileImportObserver_OnBookmarksImportStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnBookmarksImportStart_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnBookmarksImportStart_Params;
    generated.firstFolderName = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.totalBookmarksCount = generator_.generateUint32();
    return generated;
  };

  ProfileImportObserver_OnBookmarksImportStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.firstFolderName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.totalBookmarksCount = mutator_.mutateUint32(this.totalBookmarksCount);
    }
    return this;
  };
  ProfileImportObserver_OnBookmarksImportStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnBookmarksImportStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnBookmarksImportStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnBookmarksImportStart_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnBookmarksImportStart_Params.firstFolderName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnBookmarksImportStart_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProfileImportObserver_OnBookmarksImportStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnBookmarksImportStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.firstFolderName = decoder.decodeStructPointer(string16$.String16);
    val.totalBookmarksCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnBookmarksImportStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnBookmarksImportStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.firstFolderName);
    encoder.encodeStruct(codec.Uint32, val.totalBookmarksCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnBookmarksImportGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnBookmarksImportGroup_Params.prototype.initDefaults_ = function() {
    this.bookmarksGroup = null;
  };
  ProfileImportObserver_OnBookmarksImportGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnBookmarksImportGroup_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnBookmarksImportGroup_Params;
    generated.bookmarksGroup = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.ImportedBookmarkEntry, false);
    });
    return generated;
  };

  ProfileImportObserver_OnBookmarksImportGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.bookmarksGroup = mutator_.mutateArray(this.bookmarksGroup, function(val) {
        return mutator_.mutateStruct(chrome.mojom.ImportedBookmarkEntry, false);
      });
    }
    return this;
  };
  ProfileImportObserver_OnBookmarksImportGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnBookmarksImportGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnBookmarksImportGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnBookmarksImportGroup_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnBookmarksImportGroup_Params.bookmarksGroup
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ImportedBookmarkEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnBookmarksImportGroup_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnBookmarksImportGroup_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnBookmarksImportGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.bookmarksGroup = decoder.decodeArrayPointer(new codec.PointerTo(ImportedBookmarkEntry));
    return val;
  };

  ProfileImportObserver_OnBookmarksImportGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnBookmarksImportGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ImportedBookmarkEntry), val.bookmarksGroup);
  };
  function ProfileImportObserver_OnFaviconsImportStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnFaviconsImportStart_Params.prototype.initDefaults_ = function() {
    this.totalFaviconsCount = 0;
  };
  ProfileImportObserver_OnFaviconsImportStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnFaviconsImportStart_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnFaviconsImportStart_Params;
    generated.totalFaviconsCount = generator_.generateUint32();
    return generated;
  };

  ProfileImportObserver_OnFaviconsImportStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.totalFaviconsCount = mutator_.mutateUint32(this.totalFaviconsCount);
    }
    return this;
  };
  ProfileImportObserver_OnFaviconsImportStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnFaviconsImportStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnFaviconsImportStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnFaviconsImportStart_Params.validate = function(messageValidator, offset) {
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

  ProfileImportObserver_OnFaviconsImportStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnFaviconsImportStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnFaviconsImportStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.totalFaviconsCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnFaviconsImportStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnFaviconsImportStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.totalFaviconsCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnFaviconsImportGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnFaviconsImportGroup_Params.prototype.initDefaults_ = function() {
    this.faviconsGroup = null;
  };
  ProfileImportObserver_OnFaviconsImportGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnFaviconsImportGroup_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnFaviconsImportGroup_Params;
    generated.faviconsGroup = generator_.generateStruct(chrome.mojom.FaviconUsageDataList, false);
    return generated;
  };

  ProfileImportObserver_OnFaviconsImportGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.faviconsGroup = mutator_.mutateStruct(chrome.mojom.FaviconUsageDataList, false);
    }
    return this;
  };
  ProfileImportObserver_OnFaviconsImportGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnFaviconsImportGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnFaviconsImportGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnFaviconsImportGroup_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnFaviconsImportGroup_Params.faviconsGroup
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, FaviconUsageDataList, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnFaviconsImportGroup_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnFaviconsImportGroup_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnFaviconsImportGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.faviconsGroup = decoder.decodeStructPointer(FaviconUsageDataList);
    return val;
  };

  ProfileImportObserver_OnFaviconsImportGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnFaviconsImportGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(FaviconUsageDataList, val.faviconsGroup);
  };
  function ProfileImportObserver_OnPasswordFormImportReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnPasswordFormImportReady_Params.prototype.initDefaults_ = function() {
    this.form = null;
  };
  ProfileImportObserver_OnPasswordFormImportReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnPasswordFormImportReady_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnPasswordFormImportReady_Params;
    generated.form = generator_.generateStruct(autofill.mojom.PasswordForm, false);
    return generated;
  };

  ProfileImportObserver_OnPasswordFormImportReady_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.form = mutator_.mutateStruct(autofill.mojom.PasswordForm, false);
    }
    return this;
  };
  ProfileImportObserver_OnPasswordFormImportReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnPasswordFormImportReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnPasswordFormImportReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnPasswordFormImportReady_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnPasswordFormImportReady_Params.form
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, autofill_types$.PasswordForm, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnPasswordFormImportReady_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnPasswordFormImportReady_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnPasswordFormImportReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.form = decoder.decodeStructPointer(autofill_types$.PasswordForm);
    return val;
  };

  ProfileImportObserver_OnPasswordFormImportReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnPasswordFormImportReady_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(autofill_types$.PasswordForm, val.form);
  };
  function ProfileImportObserver_OnKeywordsImportReady_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnKeywordsImportReady_Params.prototype.initDefaults_ = function() {
    this.searchEngines = null;
    this.uniqueOnHostAndPath = false;
  };
  ProfileImportObserver_OnKeywordsImportReady_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnKeywordsImportReady_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnKeywordsImportReady_Params;
    generated.searchEngines = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.SearchEngineInfo, false);
    });
    generated.uniqueOnHostAndPath = generator_.generateBool();
    return generated;
  };

  ProfileImportObserver_OnKeywordsImportReady_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.searchEngines = mutator_.mutateArray(this.searchEngines, function(val) {
        return mutator_.mutateStruct(chrome.mojom.SearchEngineInfo, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueOnHostAndPath = mutator_.mutateBool(this.uniqueOnHostAndPath);
    }
    return this;
  };
  ProfileImportObserver_OnKeywordsImportReady_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnKeywordsImportReady_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnKeywordsImportReady_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnKeywordsImportReady_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnKeywordsImportReady_Params.searchEngines
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(SearchEngineInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnKeywordsImportReady_Params.encodedSize = codec.kStructHeaderSize + 16;

  ProfileImportObserver_OnKeywordsImportReady_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnKeywordsImportReady_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.searchEngines = decoder.decodeArrayPointer(new codec.PointerTo(SearchEngineInfo));
    packed = decoder.readUint8();
    val.uniqueOnHostAndPath = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnKeywordsImportReady_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnKeywordsImportReady_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(SearchEngineInfo), val.searchEngines);
    packed = 0;
    packed |= (val.uniqueOnHostAndPath & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.prototype.initDefaults_ = function() {
    this.searchEngineData = null;
  };
  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params;
    generated.searchEngineData = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.searchEngineData = mutator_.mutateArray(this.searchEngineData, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.searchEngineData
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.searchEngineData = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.searchEngineData);
  };
  function ProfileImportObserver_OnAutofillFormDataImportStart_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnAutofillFormDataImportStart_Params.prototype.initDefaults_ = function() {
    this.totalAutofillFormDataEntryCount = 0;
  };
  ProfileImportObserver_OnAutofillFormDataImportStart_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnAutofillFormDataImportStart_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnAutofillFormDataImportStart_Params;
    generated.totalAutofillFormDataEntryCount = generator_.generateUint32();
    return generated;
  };

  ProfileImportObserver_OnAutofillFormDataImportStart_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.totalAutofillFormDataEntryCount = mutator_.mutateUint32(this.totalAutofillFormDataEntryCount);
    }
    return this;
  };
  ProfileImportObserver_OnAutofillFormDataImportStart_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnAutofillFormDataImportStart_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnAutofillFormDataImportStart_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnAutofillFormDataImportStart_Params.validate = function(messageValidator, offset) {
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

  ProfileImportObserver_OnAutofillFormDataImportStart_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnAutofillFormDataImportStart_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnAutofillFormDataImportStart_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.totalAutofillFormDataEntryCount = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImportObserver_OnAutofillFormDataImportStart_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnAutofillFormDataImportStart_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.totalAutofillFormDataEntryCount);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ProfileImportObserver_OnAutofillFormDataImportGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.prototype.initDefaults_ = function() {
    this.autofillFormDataEntryGroup = null;
  };
  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnAutofillFormDataImportGroup_Params;
    generated.autofillFormDataEntryGroup = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.ImporterAutofillFormDataEntry, false);
    });
    return generated;
  };

  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.autofillFormDataEntryGroup = mutator_.mutateArray(this.autofillFormDataEntryGroup, function(val) {
        return mutator_.mutateStruct(chrome.mojom.ImporterAutofillFormDataEntry, false);
      });
    }
    return this;
  };
  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnAutofillFormDataImportGroup_Params.autofillFormDataEntryGroup
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ImporterAutofillFormDataEntry), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnAutofillFormDataImportGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.autofillFormDataEntryGroup = decoder.decodeArrayPointer(new codec.PointerTo(ImporterAutofillFormDataEntry));
    return val;
  };

  ProfileImportObserver_OnAutofillFormDataImportGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnAutofillFormDataImportGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ImporterAutofillFormDataEntry), val.autofillFormDataEntryGroup);
  };
  function ProfileImportObserver_OnIE7PasswordReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImportObserver_OnIE7PasswordReceived_Params.prototype.initDefaults_ = function() {
    this.importerPasswordInfo = null;
  };
  ProfileImportObserver_OnIE7PasswordReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImportObserver_OnIE7PasswordReceived_Params.generate = function(generator_) {
    var generated = new ProfileImportObserver_OnIE7PasswordReceived_Params;
    generated.importerPasswordInfo = generator_.generateStruct(chrome.mojom.ImporterIE7PasswordInfo, false);
    return generated;
  };

  ProfileImportObserver_OnIE7PasswordReceived_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.importerPasswordInfo = mutator_.mutateStruct(chrome.mojom.ImporterIE7PasswordInfo, false);
    }
    return this;
  };
  ProfileImportObserver_OnIE7PasswordReceived_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImportObserver_OnIE7PasswordReceived_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImportObserver_OnIE7PasswordReceived_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImportObserver_OnIE7PasswordReceived_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImportObserver_OnIE7PasswordReceived_Params.importerPasswordInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ImporterIE7PasswordInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImportObserver_OnIE7PasswordReceived_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImportObserver_OnIE7PasswordReceived_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImportObserver_OnIE7PasswordReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.importerPasswordInfo = decoder.decodeStructPointer(ImporterIE7PasswordInfo);
    return val;
  };

  ProfileImportObserver_OnIE7PasswordReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImportObserver_OnIE7PasswordReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ImporterIE7PasswordInfo, val.importerPasswordInfo);
  };
  function ProfileImport_StartImport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImport_StartImport_Params.prototype.initDefaults_ = function() {
    this.sourceProfile = null;
    this.items = 0;
    this.localizedStrings = null;
    this.observer = new ProfileImportObserverPtr();
  };
  ProfileImport_StartImport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImport_StartImport_Params.generate = function(generator_) {
    var generated = new ProfileImport_StartImport_Params;
    generated.sourceProfile = generator_.generateStruct(chrome.mojom.SourceProfile, false);
    generated.items = generator_.generateUint16();
    generated.localizedStrings = generator_.generateMap(
      function() {
        return generator_.generateUint32();
      },
      function() {
        return generator_.generateString(false);
      });
    generated.observer = generator_.generateInterface("chrome.mojom.ProfileImportObserver", false);
    return generated;
  };

  ProfileImport_StartImport_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceProfile = mutator_.mutateStruct(chrome.mojom.SourceProfile, false);
    }
    if (mutator_.chooseMutateField()) {
      this.items = mutator_.mutateUint16(this.items);
    }
    if (mutator_.chooseMutateField()) {
      this.localizedStrings = mutator_.mutateMap(this.localizedStrings,
        function(val) {
          return mutator_.mutateUint32(val);
        },
        function(val) {
          return mutator_.mutateString(val, false);
        });
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "chrome.mojom.ProfileImportObserver", false);
    }
    return this;
  };
  ProfileImport_StartImport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.ProfileImportObserverPtr"]);
    }
    return handles;
  };

  ProfileImport_StartImport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImport_StartImport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  ProfileImport_StartImport_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImport_StartImport_Params.sourceProfile
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SourceProfile, false);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ProfileImport_StartImport_Params.localizedStrings
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 16, false, codec.Uint32, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProfileImport_StartImport_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImport_StartImport_Params.encodedSize = codec.kStructHeaderSize + 32;

  ProfileImport_StartImport_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImport_StartImport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceProfile = decoder.decodeStructPointer(SourceProfile);
    val.items = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.localizedStrings = decoder.decodeMapPointer(codec.Uint32, codec.String);
    val.observer = decoder.decodeStruct(new codec.Interface(ProfileImportObserverPtr));
    return val;
  };

  ProfileImport_StartImport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImport_StartImport_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SourceProfile, val.sourceProfile);
    encoder.encodeStruct(codec.Uint16, val.items);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.Uint32, codec.String, val.localizedStrings);
    encoder.encodeStruct(new codec.Interface(ProfileImportObserverPtr), val.observer);
  };
  function ProfileImport_CancelImport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImport_CancelImport_Params.prototype.initDefaults_ = function() {
  };
  ProfileImport_CancelImport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImport_CancelImport_Params.generate = function(generator_) {
    var generated = new ProfileImport_CancelImport_Params;
    return generated;
  };

  ProfileImport_CancelImport_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ProfileImport_CancelImport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImport_CancelImport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImport_CancelImport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImport_CancelImport_Params.validate = function(messageValidator, offset) {
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

  ProfileImport_CancelImport_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProfileImport_CancelImport_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImport_CancelImport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProfileImport_CancelImport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImport_CancelImport_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProfileImport_ReportImportItemFinished_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProfileImport_ReportImportItemFinished_Params.prototype.initDefaults_ = function() {
    this.item = 0;
  };
  ProfileImport_ReportImportItemFinished_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProfileImport_ReportImportItemFinished_Params.generate = function(generator_) {
    var generated = new ProfileImport_ReportImportItemFinished_Params;
    generated.item = generator_.generateEnum();
    return generated;
  };

  ProfileImport_ReportImportItemFinished_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.item = mutator_.mutateEnum(this.item);
    }
    return this;
  };
  ProfileImport_ReportImportItemFinished_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProfileImport_ReportImportItemFinished_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProfileImport_ReportImportItemFinished_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProfileImport_ReportImportItemFinished_Params.validate = function(messageValidator, offset) {
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


    // validate ProfileImport_ReportImportItemFinished_Params.item
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ImportItem);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProfileImport_ReportImportItemFinished_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProfileImport_ReportImportItemFinished_Params.decode = function(decoder) {
    var packed;
    var val = new ProfileImport_ReportImportItemFinished_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.item = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ProfileImport_ReportImportItemFinished_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProfileImport_ReportImportItemFinished_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.item);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProfileImportObserver_OnImportStart_Name = 1955363869;
  var kProfileImportObserver_OnImportFinished_Name = 1098536403;
  var kProfileImportObserver_OnImportItemStart_Name = 639160780;
  var kProfileImportObserver_OnImportItemFinished_Name = 722098873;
  var kProfileImportObserver_OnHistoryImportStart_Name = 935733647;
  var kProfileImportObserver_OnHistoryImportGroup_Name = 289491;
  var kProfileImportObserver_OnHomePageImportReady_Name = 1745297488;
  var kProfileImportObserver_OnBookmarksImportStart_Name = 816560878;
  var kProfileImportObserver_OnBookmarksImportGroup_Name = 1886737912;
  var kProfileImportObserver_OnFaviconsImportStart_Name = 440279245;
  var kProfileImportObserver_OnFaviconsImportGroup_Name = 2085781832;
  var kProfileImportObserver_OnPasswordFormImportReady_Name = 304891212;
  var kProfileImportObserver_OnKeywordsImportReady_Name = 1061087619;
  var kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name = 1476128254;
  var kProfileImportObserver_OnAutofillFormDataImportStart_Name = 1921583394;
  var kProfileImportObserver_OnAutofillFormDataImportGroup_Name = 1033752745;
  var kProfileImportObserver_OnIE7PasswordReceived_Name = 1805908159;

  function ProfileImportObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProfileImportObserver,
                                                   handleOrPtrInfo);
  }

  function ProfileImportObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProfileImportObserver, associatedInterfacePtrInfo);
  }

  ProfileImportObserverAssociatedPtr.prototype =
      Object.create(ProfileImportObserverPtr.prototype);
  ProfileImportObserverAssociatedPtr.prototype.constructor =
      ProfileImportObserverAssociatedPtr;

  function ProfileImportObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProfileImportObserverPtr.prototype.onImportStart = function() {
    return ProfileImportObserverProxy.prototype.onImportStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onImportStart = function() {
    var params_ = new ProfileImportObserver_OnImportStart_Params();
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnImportStart_Name,
        codec.align(ProfileImportObserver_OnImportStart_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnImportStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onImportFinished = function() {
    return ProfileImportObserverProxy.prototype.onImportFinished
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onImportFinished = function(succeeded, errorMsg) {
    var params_ = new ProfileImportObserver_OnImportFinished_Params();
    params_.succeeded = succeeded;
    params_.errorMsg = errorMsg;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnImportFinished_Name,
        codec.align(ProfileImportObserver_OnImportFinished_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnImportFinished_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onImportItemStart = function() {
    return ProfileImportObserverProxy.prototype.onImportItemStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onImportItemStart = function(item) {
    var params_ = new ProfileImportObserver_OnImportItemStart_Params();
    params_.item = item;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnImportItemStart_Name,
        codec.align(ProfileImportObserver_OnImportItemStart_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnImportItemStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onImportItemFinished = function() {
    return ProfileImportObserverProxy.prototype.onImportItemFinished
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onImportItemFinished = function(item) {
    var params_ = new ProfileImportObserver_OnImportItemFinished_Params();
    params_.item = item;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnImportItemFinished_Name,
        codec.align(ProfileImportObserver_OnImportItemFinished_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnImportItemFinished_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onHistoryImportStart = function() {
    return ProfileImportObserverProxy.prototype.onHistoryImportStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onHistoryImportStart = function(totalHistoryRowsCount) {
    var params_ = new ProfileImportObserver_OnHistoryImportStart_Params();
    params_.totalHistoryRowsCount = totalHistoryRowsCount;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnHistoryImportStart_Name,
        codec.align(ProfileImportObserver_OnHistoryImportStart_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnHistoryImportStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onHistoryImportGroup = function() {
    return ProfileImportObserverProxy.prototype.onHistoryImportGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onHistoryImportGroup = function(historyRowsGroup, visitSource) {
    var params_ = new ProfileImportObserver_OnHistoryImportGroup_Params();
    params_.historyRowsGroup = historyRowsGroup;
    params_.visitSource = visitSource;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnHistoryImportGroup_Name,
        codec.align(ProfileImportObserver_OnHistoryImportGroup_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnHistoryImportGroup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onHomePageImportReady = function() {
    return ProfileImportObserverProxy.prototype.onHomePageImportReady
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onHomePageImportReady = function(homePage) {
    var params_ = new ProfileImportObserver_OnHomePageImportReady_Params();
    params_.homePage = homePage;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnHomePageImportReady_Name,
        codec.align(ProfileImportObserver_OnHomePageImportReady_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnHomePageImportReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onBookmarksImportStart = function() {
    return ProfileImportObserverProxy.prototype.onBookmarksImportStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onBookmarksImportStart = function(firstFolderName, totalBookmarksCount) {
    var params_ = new ProfileImportObserver_OnBookmarksImportStart_Params();
    params_.firstFolderName = firstFolderName;
    params_.totalBookmarksCount = totalBookmarksCount;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnBookmarksImportStart_Name,
        codec.align(ProfileImportObserver_OnBookmarksImportStart_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnBookmarksImportStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onBookmarksImportGroup = function() {
    return ProfileImportObserverProxy.prototype.onBookmarksImportGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onBookmarksImportGroup = function(bookmarksGroup) {
    var params_ = new ProfileImportObserver_OnBookmarksImportGroup_Params();
    params_.bookmarksGroup = bookmarksGroup;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnBookmarksImportGroup_Name,
        codec.align(ProfileImportObserver_OnBookmarksImportGroup_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnBookmarksImportGroup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onFaviconsImportStart = function() {
    return ProfileImportObserverProxy.prototype.onFaviconsImportStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onFaviconsImportStart = function(totalFaviconsCount) {
    var params_ = new ProfileImportObserver_OnFaviconsImportStart_Params();
    params_.totalFaviconsCount = totalFaviconsCount;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnFaviconsImportStart_Name,
        codec.align(ProfileImportObserver_OnFaviconsImportStart_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnFaviconsImportStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onFaviconsImportGroup = function() {
    return ProfileImportObserverProxy.prototype.onFaviconsImportGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onFaviconsImportGroup = function(faviconsGroup) {
    var params_ = new ProfileImportObserver_OnFaviconsImportGroup_Params();
    params_.faviconsGroup = faviconsGroup;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnFaviconsImportGroup_Name,
        codec.align(ProfileImportObserver_OnFaviconsImportGroup_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnFaviconsImportGroup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onPasswordFormImportReady = function() {
    return ProfileImportObserverProxy.prototype.onPasswordFormImportReady
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onPasswordFormImportReady = function(form) {
    var params_ = new ProfileImportObserver_OnPasswordFormImportReady_Params();
    params_.form = form;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnPasswordFormImportReady_Name,
        codec.align(ProfileImportObserver_OnPasswordFormImportReady_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnPasswordFormImportReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onKeywordsImportReady = function() {
    return ProfileImportObserverProxy.prototype.onKeywordsImportReady
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onKeywordsImportReady = function(searchEngines, uniqueOnHostAndPath) {
    var params_ = new ProfileImportObserver_OnKeywordsImportReady_Params();
    params_.searchEngines = searchEngines;
    params_.uniqueOnHostAndPath = uniqueOnHostAndPath;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnKeywordsImportReady_Name,
        codec.align(ProfileImportObserver_OnKeywordsImportReady_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnKeywordsImportReady_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onFirefoxSearchEngineDataReceived = function() {
    return ProfileImportObserverProxy.prototype.onFirefoxSearchEngineDataReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onFirefoxSearchEngineDataReceived = function(searchEngineData) {
    var params_ = new ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params();
    params_.searchEngineData = searchEngineData;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name,
        codec.align(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onAutofillFormDataImportStart = function() {
    return ProfileImportObserverProxy.prototype.onAutofillFormDataImportStart
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onAutofillFormDataImportStart = function(totalAutofillFormDataEntryCount) {
    var params_ = new ProfileImportObserver_OnAutofillFormDataImportStart_Params();
    params_.totalAutofillFormDataEntryCount = totalAutofillFormDataEntryCount;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnAutofillFormDataImportStart_Name,
        codec.align(ProfileImportObserver_OnAutofillFormDataImportStart_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnAutofillFormDataImportStart_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onAutofillFormDataImportGroup = function() {
    return ProfileImportObserverProxy.prototype.onAutofillFormDataImportGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onAutofillFormDataImportGroup = function(autofillFormDataEntryGroup) {
    var params_ = new ProfileImportObserver_OnAutofillFormDataImportGroup_Params();
    params_.autofillFormDataEntryGroup = autofillFormDataEntryGroup;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnAutofillFormDataImportGroup_Name,
        codec.align(ProfileImportObserver_OnAutofillFormDataImportGroup_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnAutofillFormDataImportGroup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportObserverPtr.prototype.onIE7PasswordReceived = function() {
    return ProfileImportObserverProxy.prototype.onIE7PasswordReceived
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportObserverProxy.prototype.onIE7PasswordReceived = function(importerPasswordInfo) {
    var params_ = new ProfileImportObserver_OnIE7PasswordReceived_Params();
    params_.importerPasswordInfo = importerPasswordInfo;
    var builder = new codec.MessageV0Builder(
        kProfileImportObserver_OnIE7PasswordReceived_Name,
        codec.align(ProfileImportObserver_OnIE7PasswordReceived_Params.encodedSize));
    builder.encodeStruct(ProfileImportObserver_OnIE7PasswordReceived_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProfileImportObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  ProfileImportObserverStub.prototype.onImportStart = function() {
    return this.delegate_ && this.delegate_.onImportStart && this.delegate_.onImportStart();
  }
  ProfileImportObserverStub.prototype.onImportFinished = function(succeeded, errorMsg) {
    return this.delegate_ && this.delegate_.onImportFinished && this.delegate_.onImportFinished(succeeded, errorMsg);
  }
  ProfileImportObserverStub.prototype.onImportItemStart = function(item) {
    return this.delegate_ && this.delegate_.onImportItemStart && this.delegate_.onImportItemStart(item);
  }
  ProfileImportObserverStub.prototype.onImportItemFinished = function(item) {
    return this.delegate_ && this.delegate_.onImportItemFinished && this.delegate_.onImportItemFinished(item);
  }
  ProfileImportObserverStub.prototype.onHistoryImportStart = function(totalHistoryRowsCount) {
    return this.delegate_ && this.delegate_.onHistoryImportStart && this.delegate_.onHistoryImportStart(totalHistoryRowsCount);
  }
  ProfileImportObserverStub.prototype.onHistoryImportGroup = function(historyRowsGroup, visitSource) {
    return this.delegate_ && this.delegate_.onHistoryImportGroup && this.delegate_.onHistoryImportGroup(historyRowsGroup, visitSource);
  }
  ProfileImportObserverStub.prototype.onHomePageImportReady = function(homePage) {
    return this.delegate_ && this.delegate_.onHomePageImportReady && this.delegate_.onHomePageImportReady(homePage);
  }
  ProfileImportObserverStub.prototype.onBookmarksImportStart = function(firstFolderName, totalBookmarksCount) {
    return this.delegate_ && this.delegate_.onBookmarksImportStart && this.delegate_.onBookmarksImportStart(firstFolderName, totalBookmarksCount);
  }
  ProfileImportObserverStub.prototype.onBookmarksImportGroup = function(bookmarksGroup) {
    return this.delegate_ && this.delegate_.onBookmarksImportGroup && this.delegate_.onBookmarksImportGroup(bookmarksGroup);
  }
  ProfileImportObserverStub.prototype.onFaviconsImportStart = function(totalFaviconsCount) {
    return this.delegate_ && this.delegate_.onFaviconsImportStart && this.delegate_.onFaviconsImportStart(totalFaviconsCount);
  }
  ProfileImportObserverStub.prototype.onFaviconsImportGroup = function(faviconsGroup) {
    return this.delegate_ && this.delegate_.onFaviconsImportGroup && this.delegate_.onFaviconsImportGroup(faviconsGroup);
  }
  ProfileImportObserverStub.prototype.onPasswordFormImportReady = function(form) {
    return this.delegate_ && this.delegate_.onPasswordFormImportReady && this.delegate_.onPasswordFormImportReady(form);
  }
  ProfileImportObserverStub.prototype.onKeywordsImportReady = function(searchEngines, uniqueOnHostAndPath) {
    return this.delegate_ && this.delegate_.onKeywordsImportReady && this.delegate_.onKeywordsImportReady(searchEngines, uniqueOnHostAndPath);
  }
  ProfileImportObserverStub.prototype.onFirefoxSearchEngineDataReceived = function(searchEngineData) {
    return this.delegate_ && this.delegate_.onFirefoxSearchEngineDataReceived && this.delegate_.onFirefoxSearchEngineDataReceived(searchEngineData);
  }
  ProfileImportObserverStub.prototype.onAutofillFormDataImportStart = function(totalAutofillFormDataEntryCount) {
    return this.delegate_ && this.delegate_.onAutofillFormDataImportStart && this.delegate_.onAutofillFormDataImportStart(totalAutofillFormDataEntryCount);
  }
  ProfileImportObserverStub.prototype.onAutofillFormDataImportGroup = function(autofillFormDataEntryGroup) {
    return this.delegate_ && this.delegate_.onAutofillFormDataImportGroup && this.delegate_.onAutofillFormDataImportGroup(autofillFormDataEntryGroup);
  }
  ProfileImportObserverStub.prototype.onIE7PasswordReceived = function(importerPasswordInfo) {
    return this.delegate_ && this.delegate_.onIE7PasswordReceived && this.delegate_.onIE7PasswordReceived(importerPasswordInfo);
  }

  ProfileImportObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProfileImportObserver_OnImportStart_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnImportStart_Params);
      this.onImportStart();
      return true;
    case kProfileImportObserver_OnImportFinished_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnImportFinished_Params);
      this.onImportFinished(params.succeeded, params.errorMsg);
      return true;
    case kProfileImportObserver_OnImportItemStart_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnImportItemStart_Params);
      this.onImportItemStart(params.item);
      return true;
    case kProfileImportObserver_OnImportItemFinished_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnImportItemFinished_Params);
      this.onImportItemFinished(params.item);
      return true;
    case kProfileImportObserver_OnHistoryImportStart_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnHistoryImportStart_Params);
      this.onHistoryImportStart(params.totalHistoryRowsCount);
      return true;
    case kProfileImportObserver_OnHistoryImportGroup_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnHistoryImportGroup_Params);
      this.onHistoryImportGroup(params.historyRowsGroup, params.visitSource);
      return true;
    case kProfileImportObserver_OnHomePageImportReady_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnHomePageImportReady_Params);
      this.onHomePageImportReady(params.homePage);
      return true;
    case kProfileImportObserver_OnBookmarksImportStart_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnBookmarksImportStart_Params);
      this.onBookmarksImportStart(params.firstFolderName, params.totalBookmarksCount);
      return true;
    case kProfileImportObserver_OnBookmarksImportGroup_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnBookmarksImportGroup_Params);
      this.onBookmarksImportGroup(params.bookmarksGroup);
      return true;
    case kProfileImportObserver_OnFaviconsImportStart_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnFaviconsImportStart_Params);
      this.onFaviconsImportStart(params.totalFaviconsCount);
      return true;
    case kProfileImportObserver_OnFaviconsImportGroup_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnFaviconsImportGroup_Params);
      this.onFaviconsImportGroup(params.faviconsGroup);
      return true;
    case kProfileImportObserver_OnPasswordFormImportReady_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnPasswordFormImportReady_Params);
      this.onPasswordFormImportReady(params.form);
      return true;
    case kProfileImportObserver_OnKeywordsImportReady_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnKeywordsImportReady_Params);
      this.onKeywordsImportReady(params.searchEngines, params.uniqueOnHostAndPath);
      return true;
    case kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params);
      this.onFirefoxSearchEngineDataReceived(params.searchEngineData);
      return true;
    case kProfileImportObserver_OnAutofillFormDataImportStart_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnAutofillFormDataImportStart_Params);
      this.onAutofillFormDataImportStart(params.totalAutofillFormDataEntryCount);
      return true;
    case kProfileImportObserver_OnAutofillFormDataImportGroup_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnAutofillFormDataImportGroup_Params);
      this.onAutofillFormDataImportGroup(params.autofillFormDataEntryGroup);
      return true;
    case kProfileImportObserver_OnIE7PasswordReceived_Name:
      var params = reader.decodeStruct(ProfileImportObserver_OnIE7PasswordReceived_Params);
      this.onIE7PasswordReceived(params.importerPasswordInfo);
      return true;
    default:
      return false;
    }
  };

  ProfileImportObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProfileImportObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProfileImportObserver_OnImportStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnImportStart_Params;
      break;
      case kProfileImportObserver_OnImportFinished_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnImportFinished_Params;
      break;
      case kProfileImportObserver_OnImportItemStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnImportItemStart_Params;
      break;
      case kProfileImportObserver_OnImportItemFinished_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnImportItemFinished_Params;
      break;
      case kProfileImportObserver_OnHistoryImportStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnHistoryImportStart_Params;
      break;
      case kProfileImportObserver_OnHistoryImportGroup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnHistoryImportGroup_Params;
      break;
      case kProfileImportObserver_OnHomePageImportReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnHomePageImportReady_Params;
      break;
      case kProfileImportObserver_OnBookmarksImportStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnBookmarksImportStart_Params;
      break;
      case kProfileImportObserver_OnBookmarksImportGroup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnBookmarksImportGroup_Params;
      break;
      case kProfileImportObserver_OnFaviconsImportStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnFaviconsImportStart_Params;
      break;
      case kProfileImportObserver_OnFaviconsImportGroup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnFaviconsImportGroup_Params;
      break;
      case kProfileImportObserver_OnPasswordFormImportReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnPasswordFormImportReady_Params;
      break;
      case kProfileImportObserver_OnKeywordsImportReady_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnKeywordsImportReady_Params;
      break;
      case kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params;
      break;
      case kProfileImportObserver_OnAutofillFormDataImportStart_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnAutofillFormDataImportStart_Params;
      break;
      case kProfileImportObserver_OnAutofillFormDataImportGroup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnAutofillFormDataImportGroup_Params;
      break;
      case kProfileImportObserver_OnIE7PasswordReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImportObserver_OnIE7PasswordReceived_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProfileImportObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProfileImportObserver = {
    name: 'chrome.mojom.ProfileImportObserver',
    kVersion: 0,
    ptrClass: ProfileImportObserverPtr,
    proxyClass: ProfileImportObserverProxy,
    stubClass: ProfileImportObserverStub,
    validateRequest: validateProfileImportObserverRequest,
    validateResponse: null,
    mojomId: 'chrome/common/importer/profile_import.mojom',
    fuzzMethods: {
      onImportStart: {
        params: ProfileImportObserver_OnImportStart_Params,
      },
      onImportFinished: {
        params: ProfileImportObserver_OnImportFinished_Params,
      },
      onImportItemStart: {
        params: ProfileImportObserver_OnImportItemStart_Params,
      },
      onImportItemFinished: {
        params: ProfileImportObserver_OnImportItemFinished_Params,
      },
      onHistoryImportStart: {
        params: ProfileImportObserver_OnHistoryImportStart_Params,
      },
      onHistoryImportGroup: {
        params: ProfileImportObserver_OnHistoryImportGroup_Params,
      },
      onHomePageImportReady: {
        params: ProfileImportObserver_OnHomePageImportReady_Params,
      },
      onBookmarksImportStart: {
        params: ProfileImportObserver_OnBookmarksImportStart_Params,
      },
      onBookmarksImportGroup: {
        params: ProfileImportObserver_OnBookmarksImportGroup_Params,
      },
      onFaviconsImportStart: {
        params: ProfileImportObserver_OnFaviconsImportStart_Params,
      },
      onFaviconsImportGroup: {
        params: ProfileImportObserver_OnFaviconsImportGroup_Params,
      },
      onPasswordFormImportReady: {
        params: ProfileImportObserver_OnPasswordFormImportReady_Params,
      },
      onKeywordsImportReady: {
        params: ProfileImportObserver_OnKeywordsImportReady_Params,
      },
      onFirefoxSearchEngineDataReceived: {
        params: ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params,
      },
      onAutofillFormDataImportStart: {
        params: ProfileImportObserver_OnAutofillFormDataImportStart_Params,
      },
      onAutofillFormDataImportGroup: {
        params: ProfileImportObserver_OnAutofillFormDataImportGroup_Params,
      },
      onIE7PasswordReceived: {
        params: ProfileImportObserver_OnIE7PasswordReceived_Params,
      },
    },
  };
  ProfileImportObserverStub.prototype.validator = validateProfileImportObserverRequest;
  ProfileImportObserverProxy.prototype.validator = null;
  var kProfileImport_StartImport_Name = 1123464407;
  var kProfileImport_CancelImport_Name = 84160913;
  var kProfileImport_ReportImportItemFinished_Name = 397039980;

  function ProfileImportPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProfileImport,
                                                   handleOrPtrInfo);
  }

  function ProfileImportAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProfileImport, associatedInterfacePtrInfo);
  }

  ProfileImportAssociatedPtr.prototype =
      Object.create(ProfileImportPtr.prototype);
  ProfileImportAssociatedPtr.prototype.constructor =
      ProfileImportAssociatedPtr;

  function ProfileImportProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProfileImportPtr.prototype.startImport = function() {
    return ProfileImportProxy.prototype.startImport
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportProxy.prototype.startImport = function(sourceProfile, items, localizedStrings, observer) {
    var params_ = new ProfileImport_StartImport_Params();
    params_.sourceProfile = sourceProfile;
    params_.items = items;
    params_.localizedStrings = localizedStrings;
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kProfileImport_StartImport_Name,
        codec.align(ProfileImport_StartImport_Params.encodedSize));
    builder.encodeStruct(ProfileImport_StartImport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportPtr.prototype.cancelImport = function() {
    return ProfileImportProxy.prototype.cancelImport
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportProxy.prototype.cancelImport = function() {
    var params_ = new ProfileImport_CancelImport_Params();
    var builder = new codec.MessageV0Builder(
        kProfileImport_CancelImport_Name,
        codec.align(ProfileImport_CancelImport_Params.encodedSize));
    builder.encodeStruct(ProfileImport_CancelImport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ProfileImportPtr.prototype.reportImportItemFinished = function() {
    return ProfileImportProxy.prototype.reportImportItemFinished
        .apply(this.ptr.getProxy(), arguments);
  };

  ProfileImportProxy.prototype.reportImportItemFinished = function(item) {
    var params_ = new ProfileImport_ReportImportItemFinished_Params();
    params_.item = item;
    var builder = new codec.MessageV0Builder(
        kProfileImport_ReportImportItemFinished_Name,
        codec.align(ProfileImport_ReportImportItemFinished_Params.encodedSize));
    builder.encodeStruct(ProfileImport_ReportImportItemFinished_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProfileImportStub(delegate) {
    this.delegate_ = delegate;
  }
  ProfileImportStub.prototype.startImport = function(sourceProfile, items, localizedStrings, observer) {
    return this.delegate_ && this.delegate_.startImport && this.delegate_.startImport(sourceProfile, items, localizedStrings, observer);
  }
  ProfileImportStub.prototype.cancelImport = function() {
    return this.delegate_ && this.delegate_.cancelImport && this.delegate_.cancelImport();
  }
  ProfileImportStub.prototype.reportImportItemFinished = function(item) {
    return this.delegate_ && this.delegate_.reportImportItemFinished && this.delegate_.reportImportItemFinished(item);
  }

  ProfileImportStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProfileImport_StartImport_Name:
      var params = reader.decodeStruct(ProfileImport_StartImport_Params);
      this.startImport(params.sourceProfile, params.items, params.localizedStrings, params.observer);
      return true;
    case kProfileImport_CancelImport_Name:
      var params = reader.decodeStruct(ProfileImport_CancelImport_Params);
      this.cancelImport();
      return true;
    case kProfileImport_ReportImportItemFinished_Name:
      var params = reader.decodeStruct(ProfileImport_ReportImportItemFinished_Params);
      this.reportImportItemFinished(params.item);
      return true;
    default:
      return false;
    }
  };

  ProfileImportStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProfileImportRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProfileImport_StartImport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImport_StartImport_Params;
      break;
      case kProfileImport_CancelImport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImport_CancelImport_Params;
      break;
      case kProfileImport_ReportImportItemFinished_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProfileImport_ReportImportItemFinished_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProfileImportResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProfileImport = {
    name: 'chrome.mojom.ProfileImport',
    kVersion: 0,
    ptrClass: ProfileImportPtr,
    proxyClass: ProfileImportProxy,
    stubClass: ProfileImportStub,
    validateRequest: validateProfileImportRequest,
    validateResponse: null,
    mojomId: 'chrome/common/importer/profile_import.mojom',
    fuzzMethods: {
      startImport: {
        params: ProfileImport_StartImport_Params,
      },
      cancelImport: {
        params: ProfileImport_CancelImport_Params,
      },
      reportImportItemFinished: {
        params: ProfileImport_ReportImportItemFinished_Params,
      },
    },
  };
  ProfileImportStub.prototype.validator = validateProfileImportRequest;
  ProfileImportProxy.prototype.validator = null;
  exports.kProfileImportServiceName = kProfileImportServiceName;
  exports.ImportItem = ImportItem;
  exports.ImportedBookmarkEntry = ImportedBookmarkEntry;
  exports.ImporterAutofillFormDataEntry = ImporterAutofillFormDataEntry;
  exports.SearchEngineInfo = SearchEngineInfo;
  exports.ImporterURLRow = ImporterURLRow;
  exports.SourceProfile = SourceProfile;
  exports.FaviconUsageDataList = FaviconUsageDataList;
  exports.ImporterIE7PasswordInfo = ImporterIE7PasswordInfo;
  exports.ProfileImportObserver = ProfileImportObserver;
  exports.ProfileImportObserverPtr = ProfileImportObserverPtr;
  exports.ProfileImportObserverAssociatedPtr = ProfileImportObserverAssociatedPtr;
  exports.ProfileImport = ProfileImport;
  exports.ProfileImportPtr = ProfileImportPtr;
  exports.ProfileImportAssociatedPtr = ProfileImportAssociatedPtr;
})();