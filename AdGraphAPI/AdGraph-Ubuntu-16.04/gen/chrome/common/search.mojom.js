// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/search.mojom';
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
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../mojo/public/mojom/base/string16.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../mojo/public/mojom/base/time.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }


  var NTPLoggingEventType = {};

  NTPLoggingEventType.isKnownEnumValue = function(value) {
    return false;
  };

  NTPLoggingEventType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var OmniboxFocusState = {};

  OmniboxFocusState.isKnownEnumValue = function(value) {
    return false;
  };

  OmniboxFocusState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var OmniboxFocusChangeReason = {};

  OmniboxFocusChangeReason.isKnownEnumValue = function(value) {
    return false;
  };

  OmniboxFocusChangeReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function NTPTileImpression(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NTPTileImpression.prototype.initDefaults_ = function() {
  };
  NTPTileImpression.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NTPTileImpression.generate = function(generator_) {
    var generated = new NTPTileImpression;
    return generated;
  };

  NTPTileImpression.prototype.mutate = function(mutator_) {
    return this;
  };
  NTPTileImpression.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NTPTileImpression.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NTPTileImpression.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NTPTileImpression.validate = function(messageValidator, offset) {
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

  NTPTileImpression.encodedSize = codec.kStructHeaderSize + 0;

  NTPTileImpression.decode = function(decoder) {
    var packed;
    var val = new NTPTileImpression();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NTPTileImpression.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NTPTileImpression.encodedSize);
    encoder.writeUint32(0);
  };
  function InstantMostVisitedItem(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InstantMostVisitedItem.prototype.initDefaults_ = function() {
  };
  InstantMostVisitedItem.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InstantMostVisitedItem.generate = function(generator_) {
    var generated = new InstantMostVisitedItem;
    return generated;
  };

  InstantMostVisitedItem.prototype.mutate = function(mutator_) {
    return this;
  };
  InstantMostVisitedItem.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InstantMostVisitedItem.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InstantMostVisitedItem.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InstantMostVisitedItem.validate = function(messageValidator, offset) {
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

  InstantMostVisitedItem.encodedSize = codec.kStructHeaderSize + 0;

  InstantMostVisitedItem.decode = function(decoder) {
    var packed;
    var val = new InstantMostVisitedItem();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InstantMostVisitedItem.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InstantMostVisitedItem.encodedSize);
    encoder.writeUint32(0);
  };
  function ThemeBackgroundInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ThemeBackgroundInfo.prototype.initDefaults_ = function() {
  };
  ThemeBackgroundInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ThemeBackgroundInfo.generate = function(generator_) {
    var generated = new ThemeBackgroundInfo;
    return generated;
  };

  ThemeBackgroundInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  ThemeBackgroundInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ThemeBackgroundInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ThemeBackgroundInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ThemeBackgroundInfo.validate = function(messageValidator, offset) {
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

  ThemeBackgroundInfo.encodedSize = codec.kStructHeaderSize + 0;

  ThemeBackgroundInfo.decode = function(decoder) {
    var packed;
    var val = new ThemeBackgroundInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ThemeBackgroundInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ThemeBackgroundInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function EmbeddedSearchConnector_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearchConnector_Connect_Params.prototype.initDefaults_ = function() {
    this.embeddedSearch = new associatedBindings.AssociatedInterfaceRequest();
    this.client = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  EmbeddedSearchConnector_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearchConnector_Connect_Params.generate = function(generator_) {
    var generated = new EmbeddedSearchConnector_Connect_Params;
    generated.embeddedSearch = generator_.generateAssociatedInterfaceRequest("chrome.mojom.EmbeddedSearch", false);
    generated.client = generator_.generateAssociatedInterface("chrome.mojom.EmbeddedSearchClient", false);
    return generated;
  };

  EmbeddedSearchConnector_Connect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.embeddedSearch = mutator_.mutateAssociatedInterfaceRequest(this.embeddedSearch, "chrome.mojom.EmbeddedSearch", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateAssociatedInterface(this.client, "chrome.mojom.EmbeddedSearchClient", false);
    }
    return this;
  };
  EmbeddedSearchConnector_Connect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.embeddedSearch !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.EmbeddedSearchAssociatedRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.EmbeddedSearchClientAssociatedPtr"]);
    }
    return handles;
  };

  EmbeddedSearchConnector_Connect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearchConnector_Connect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.embeddedSearch = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  EmbeddedSearchConnector_Connect_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedSearchConnector_Connect_Params.embeddedSearch
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedSearchConnector_Connect_Params.client
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearchConnector_Connect_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearchConnector_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearchConnector_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.embeddedSearch = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    val.client = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearchConnector_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearchConnector_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.embeddedSearch);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearch_FocusOmnibox_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_FocusOmnibox_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.state = 0;
  };
  EmbeddedSearch_FocusOmnibox_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_FocusOmnibox_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_FocusOmnibox_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.state = generator_.generateEnum();
    return generated;
  };

  EmbeddedSearch_FocusOmnibox_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateEnum(this.state);
    }
    return this;
  };
  EmbeddedSearch_FocusOmnibox_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_FocusOmnibox_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_FocusOmnibox_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_FocusOmnibox_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_FocusOmnibox_Params.state
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, OmniboxFocusState);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_FocusOmnibox_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearch_FocusOmnibox_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_FocusOmnibox_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    val.state = decoder.decodeStruct(codec.Int32);
    return val;
  };

  EmbeddedSearch_FocusOmnibox_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_FocusOmnibox_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.encodeStruct(codec.Int32, val.state);
  };
  function EmbeddedSearch_DeleteMostVisitedItem_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_DeleteMostVisitedItem_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.url = null;
  };
  EmbeddedSearch_DeleteMostVisitedItem_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_DeleteMostVisitedItem_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_DeleteMostVisitedItem_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  EmbeddedSearch_DeleteMostVisitedItem_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  EmbeddedSearch_DeleteMostVisitedItem_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_DeleteMostVisitedItem_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_DeleteMostVisitedItem_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_DeleteMostVisitedItem_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_DeleteMostVisitedItem_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_DeleteMostVisitedItem_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_DeleteMostVisitedItem_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_DeleteMostVisitedItem_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  EmbeddedSearch_DeleteMostVisitedItem_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_DeleteMostVisitedItem_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function EmbeddedSearch_UndoAllMostVisitedDeletions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
  };
  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_UndoAllMostVisitedDeletions_Params;
    generated.pageSeqNo = generator_.generateInt32();
    return generated;
  };

  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    return this;
  };
  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.validate = function(messageValidator, offset) {
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

  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_UndoAllMostVisitedDeletions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearch_UndoAllMostVisitedDeletions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_UndoAllMostVisitedDeletions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearch_UndoMostVisitedDeletion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_UndoMostVisitedDeletion_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.url = null;
  };
  EmbeddedSearch_UndoMostVisitedDeletion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_UndoMostVisitedDeletion_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_UndoMostVisitedDeletion_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  EmbeddedSearch_UndoMostVisitedDeletion_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  EmbeddedSearch_UndoMostVisitedDeletion_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_UndoMostVisitedDeletion_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_UndoMostVisitedDeletion_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_UndoMostVisitedDeletion_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_UndoMostVisitedDeletion_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_UndoMostVisitedDeletion_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_UndoMostVisitedDeletion_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_UndoMostVisitedDeletion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  EmbeddedSearch_UndoMostVisitedDeletion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_UndoMostVisitedDeletion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function EmbeddedSearch_LogEvent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_LogEvent_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.event = 0;
    this.time = null;
  };
  EmbeddedSearch_LogEvent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_LogEvent_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_LogEvent_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.event = generator_.generateEnum();
    generated.time = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  EmbeddedSearch_LogEvent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.event = mutator_.mutateEnum(this.event);
    }
    if (mutator_.chooseMutateField()) {
      this.time = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  EmbeddedSearch_LogEvent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_LogEvent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_LogEvent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_LogEvent_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_LogEvent_Params.event
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, NTPLoggingEventType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedSearch_LogEvent_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_LogEvent_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_LogEvent_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_LogEvent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    val.event = decoder.decodeStruct(codec.Int32);
    val.time = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  EmbeddedSearch_LogEvent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_LogEvent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.encodeStruct(codec.Int32, val.event);
    encoder.encodeStructPointer(time$.TimeDelta, val.time);
  };
  function EmbeddedSearch_LogMostVisitedImpression_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_LogMostVisitedImpression_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.impression = null;
  };
  EmbeddedSearch_LogMostVisitedImpression_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_LogMostVisitedImpression_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_LogMostVisitedImpression_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.impression = generator_.generateStruct(chrome.mojom.NTPTileImpression, false);
    return generated;
  };

  EmbeddedSearch_LogMostVisitedImpression_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.impression = mutator_.mutateStruct(chrome.mojom.NTPTileImpression, false);
    }
    return this;
  };
  EmbeddedSearch_LogMostVisitedImpression_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_LogMostVisitedImpression_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_LogMostVisitedImpression_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_LogMostVisitedImpression_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_LogMostVisitedImpression_Params.impression
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, NTPTileImpression, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_LogMostVisitedImpression_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_LogMostVisitedImpression_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_LogMostVisitedImpression_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.impression = decoder.decodeStructPointer(NTPTileImpression);
    return val;
  };

  EmbeddedSearch_LogMostVisitedImpression_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_LogMostVisitedImpression_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(NTPTileImpression, val.impression);
  };
  function EmbeddedSearch_LogMostVisitedNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_LogMostVisitedNavigation_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.impression = null;
  };
  EmbeddedSearch_LogMostVisitedNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_LogMostVisitedNavigation_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_LogMostVisitedNavigation_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.impression = generator_.generateStruct(chrome.mojom.NTPTileImpression, false);
    return generated;
  };

  EmbeddedSearch_LogMostVisitedNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.impression = mutator_.mutateStruct(chrome.mojom.NTPTileImpression, false);
    }
    return this;
  };
  EmbeddedSearch_LogMostVisitedNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_LogMostVisitedNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_LogMostVisitedNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_LogMostVisitedNavigation_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_LogMostVisitedNavigation_Params.impression
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, NTPTileImpression, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_LogMostVisitedNavigation_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_LogMostVisitedNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_LogMostVisitedNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.impression = decoder.decodeStructPointer(NTPTileImpression);
    return val;
  };

  EmbeddedSearch_LogMostVisitedNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_LogMostVisitedNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(NTPTileImpression, val.impression);
  };
  function EmbeddedSearch_PasteAndOpenDropdown_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_PasteAndOpenDropdown_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.textToBePasted = null;
  };
  EmbeddedSearch_PasteAndOpenDropdown_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_PasteAndOpenDropdown_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_PasteAndOpenDropdown_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.textToBePasted = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  EmbeddedSearch_PasteAndOpenDropdown_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.textToBePasted = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  EmbeddedSearch_PasteAndOpenDropdown_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_PasteAndOpenDropdown_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_PasteAndOpenDropdown_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_PasteAndOpenDropdown_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_PasteAndOpenDropdown_Params.textToBePasted
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_PasteAndOpenDropdown_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_PasteAndOpenDropdown_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_PasteAndOpenDropdown_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.textToBePasted = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  EmbeddedSearch_PasteAndOpenDropdown_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_PasteAndOpenDropdown_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.textToBePasted);
  };
  function EmbeddedSearch_HistorySyncCheck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_HistorySyncCheck_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
  };
  EmbeddedSearch_HistorySyncCheck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_HistorySyncCheck_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_HistorySyncCheck_Params;
    generated.pageSeqNo = generator_.generateInt32();
    return generated;
  };

  EmbeddedSearch_HistorySyncCheck_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    return this;
  };
  EmbeddedSearch_HistorySyncCheck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_HistorySyncCheck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_HistorySyncCheck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_HistorySyncCheck_Params.validate = function(messageValidator, offset) {
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

  EmbeddedSearch_HistorySyncCheck_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearch_HistorySyncCheck_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_HistorySyncCheck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearch_HistorySyncCheck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_HistorySyncCheck_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearch_HistorySyncCheck_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_HistorySyncCheck_ResponseParams.prototype.initDefaults_ = function() {
    this.syncHistory = false;
  };
  EmbeddedSearch_HistorySyncCheck_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_HistorySyncCheck_ResponseParams.generate = function(generator_) {
    var generated = new EmbeddedSearch_HistorySyncCheck_ResponseParams;
    generated.syncHistory = generator_.generateBool();
    return generated;
  };

  EmbeddedSearch_HistorySyncCheck_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.syncHistory = mutator_.mutateBool(this.syncHistory);
    }
    return this;
  };
  EmbeddedSearch_HistorySyncCheck_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_HistorySyncCheck_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_HistorySyncCheck_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_HistorySyncCheck_ResponseParams.validate = function(messageValidator, offset) {
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

  EmbeddedSearch_HistorySyncCheck_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearch_HistorySyncCheck_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_HistorySyncCheck_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.syncHistory = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearch_HistorySyncCheck_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_HistorySyncCheck_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.syncHistory & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearch_ChromeIdentityCheck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_ChromeIdentityCheck_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
    this.identity = null;
  };
  EmbeddedSearch_ChromeIdentityCheck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_ChromeIdentityCheck_Params.generate = function(generator_) {
    var generated = new EmbeddedSearch_ChromeIdentityCheck_Params;
    generated.pageSeqNo = generator_.generateInt32();
    generated.identity = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  EmbeddedSearch_ChromeIdentityCheck_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  EmbeddedSearch_ChromeIdentityCheck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_ChromeIdentityCheck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_ChromeIdentityCheck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_ChromeIdentityCheck_Params.validate = function(messageValidator, offset) {
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



    // validate EmbeddedSearch_ChromeIdentityCheck_Params.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearch_ChromeIdentityCheck_Params.encodedSize = codec.kStructHeaderSize + 16;

  EmbeddedSearch_ChromeIdentityCheck_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_ChromeIdentityCheck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.identity = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  EmbeddedSearch_ChromeIdentityCheck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_ChromeIdentityCheck_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.identity);
  };
  function EmbeddedSearch_ChromeIdentityCheck_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.prototype.initDefaults_ = function() {
    this.identityMatch = false;
  };
  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.generate = function(generator_) {
    var generated = new EmbeddedSearch_ChromeIdentityCheck_ResponseParams;
    generated.identityMatch = generator_.generateBool();
    return generated;
  };

  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.identityMatch = mutator_.mutateBool(this.identityMatch);
    }
    return this;
  };
  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.validate = function(messageValidator, offset) {
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

  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearch_ChromeIdentityCheck_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.identityMatch = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearch_ChromeIdentityCheck_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearch_ChromeIdentityCheck_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.identityMatch & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearchClient_SetPageSequenceNumber_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearchClient_SetPageSequenceNumber_Params.prototype.initDefaults_ = function() {
    this.pageSeqNo = 0;
  };
  EmbeddedSearchClient_SetPageSequenceNumber_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearchClient_SetPageSequenceNumber_Params.generate = function(generator_) {
    var generated = new EmbeddedSearchClient_SetPageSequenceNumber_Params;
    generated.pageSeqNo = generator_.generateInt32();
    return generated;
  };

  EmbeddedSearchClient_SetPageSequenceNumber_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageSeqNo = mutator_.mutateInt32(this.pageSeqNo);
    }
    return this;
  };
  EmbeddedSearchClient_SetPageSequenceNumber_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearchClient_SetPageSequenceNumber_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearchClient_SetPageSequenceNumber_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearchClient_SetPageSequenceNumber_Params.validate = function(messageValidator, offset) {
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

  EmbeddedSearchClient_SetPageSequenceNumber_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearchClient_SetPageSequenceNumber_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearchClient_SetPageSequenceNumber_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageSeqNo = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearchClient_SetPageSequenceNumber_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearchClient_SetPageSequenceNumber_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.pageSeqNo);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearchClient_FocusChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearchClient_FocusChanged_Params.prototype.initDefaults_ = function() {
    this.newFocusState = 0;
    this.reason = 0;
  };
  EmbeddedSearchClient_FocusChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearchClient_FocusChanged_Params.generate = function(generator_) {
    var generated = new EmbeddedSearchClient_FocusChanged_Params;
    generated.newFocusState = generator_.generateEnum();
    generated.reason = generator_.generateEnum();
    return generated;
  };

  EmbeddedSearchClient_FocusChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.newFocusState = mutator_.mutateEnum(this.newFocusState);
    }
    if (mutator_.chooseMutateField()) {
      this.reason = mutator_.mutateEnum(this.reason);
    }
    return this;
  };
  EmbeddedSearchClient_FocusChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearchClient_FocusChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearchClient_FocusChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearchClient_FocusChanged_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedSearchClient_FocusChanged_Params.newFocusState
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, OmniboxFocusState);
    if (err !== validator.validationError.NONE)
        return err;


    // validate EmbeddedSearchClient_FocusChanged_Params.reason
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, OmniboxFocusChangeReason);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearchClient_FocusChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearchClient_FocusChanged_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearchClient_FocusChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.newFocusState = decoder.decodeStruct(codec.Int32);
    val.reason = decoder.decodeStruct(codec.Int32);
    return val;
  };

  EmbeddedSearchClient_FocusChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearchClient_FocusChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.newFocusState);
    encoder.encodeStruct(codec.Int32, val.reason);
  };
  function EmbeddedSearchClient_MostVisitedChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearchClient_MostVisitedChanged_Params.prototype.initDefaults_ = function() {
    this.items = null;
  };
  EmbeddedSearchClient_MostVisitedChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearchClient_MostVisitedChanged_Params.generate = function(generator_) {
    var generated = new EmbeddedSearchClient_MostVisitedChanged_Params;
    generated.items = generator_.generateArray(function() {
      return generator_.generateStruct(chrome.mojom.InstantMostVisitedItem, false);
    });
    return generated;
  };

  EmbeddedSearchClient_MostVisitedChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.items = mutator_.mutateArray(this.items, function(val) {
        return mutator_.mutateStruct(chrome.mojom.InstantMostVisitedItem, false);
      });
    }
    return this;
  };
  EmbeddedSearchClient_MostVisitedChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearchClient_MostVisitedChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearchClient_MostVisitedChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearchClient_MostVisitedChanged_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedSearchClient_MostVisitedChanged_Params.items
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(InstantMostVisitedItem), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearchClient_MostVisitedChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearchClient_MostVisitedChanged_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearchClient_MostVisitedChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.items = decoder.decodeArrayPointer(new codec.PointerTo(InstantMostVisitedItem));
    return val;
  };

  EmbeddedSearchClient_MostVisitedChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearchClient_MostVisitedChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(InstantMostVisitedItem), val.items);
  };
  function EmbeddedSearchClient_SetInputInProgress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearchClient_SetInputInProgress_Params.prototype.initDefaults_ = function() {
    this.inputInProgress = false;
  };
  EmbeddedSearchClient_SetInputInProgress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearchClient_SetInputInProgress_Params.generate = function(generator_) {
    var generated = new EmbeddedSearchClient_SetInputInProgress_Params;
    generated.inputInProgress = generator_.generateBool();
    return generated;
  };

  EmbeddedSearchClient_SetInputInProgress_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.inputInProgress = mutator_.mutateBool(this.inputInProgress);
    }
    return this;
  };
  EmbeddedSearchClient_SetInputInProgress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearchClient_SetInputInProgress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearchClient_SetInputInProgress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearchClient_SetInputInProgress_Params.validate = function(messageValidator, offset) {
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

  EmbeddedSearchClient_SetInputInProgress_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearchClient_SetInputInProgress_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearchClient_SetInputInProgress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.inputInProgress = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  EmbeddedSearchClient_SetInputInProgress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearchClient_SetInputInProgress_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.inputInProgress & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function EmbeddedSearchClient_ThemeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  EmbeddedSearchClient_ThemeChanged_Params.prototype.initDefaults_ = function() {
    this.value = null;
  };
  EmbeddedSearchClient_ThemeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  EmbeddedSearchClient_ThemeChanged_Params.generate = function(generator_) {
    var generated = new EmbeddedSearchClient_ThemeChanged_Params;
    generated.value = generator_.generateStruct(chrome.mojom.ThemeBackgroundInfo, false);
    return generated;
  };

  EmbeddedSearchClient_ThemeChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(chrome.mojom.ThemeBackgroundInfo, false);
    }
    return this;
  };
  EmbeddedSearchClient_ThemeChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  EmbeddedSearchClient_ThemeChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  EmbeddedSearchClient_ThemeChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  EmbeddedSearchClient_ThemeChanged_Params.validate = function(messageValidator, offset) {
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


    // validate EmbeddedSearchClient_ThemeChanged_Params.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ThemeBackgroundInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  EmbeddedSearchClient_ThemeChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  EmbeddedSearchClient_ThemeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new EmbeddedSearchClient_ThemeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStructPointer(ThemeBackgroundInfo);
    return val;
  };

  EmbeddedSearchClient_ThemeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(EmbeddedSearchClient_ThemeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ThemeBackgroundInfo, val.value);
  };
  function SearchBouncer_SetNewTabPageURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SearchBouncer_SetNewTabPageURL_Params.prototype.initDefaults_ = function() {
    this.newTabPageUrl = null;
  };
  SearchBouncer_SetNewTabPageURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SearchBouncer_SetNewTabPageURL_Params.generate = function(generator_) {
    var generated = new SearchBouncer_SetNewTabPageURL_Params;
    generated.newTabPageUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  SearchBouncer_SetNewTabPageURL_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.newTabPageUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  SearchBouncer_SetNewTabPageURL_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SearchBouncer_SetNewTabPageURL_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SearchBouncer_SetNewTabPageURL_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SearchBouncer_SetNewTabPageURL_Params.validate = function(messageValidator, offset) {
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


    // validate SearchBouncer_SetNewTabPageURL_Params.newTabPageUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SearchBouncer_SetNewTabPageURL_Params.encodedSize = codec.kStructHeaderSize + 8;

  SearchBouncer_SetNewTabPageURL_Params.decode = function(decoder) {
    var packed;
    var val = new SearchBouncer_SetNewTabPageURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.newTabPageUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  SearchBouncer_SetNewTabPageURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SearchBouncer_SetNewTabPageURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.newTabPageUrl);
  };
  var kEmbeddedSearchConnector_Connect_Name = 787459062;

  function EmbeddedSearchConnectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedSearchConnector,
                                                   handleOrPtrInfo);
  }

  function EmbeddedSearchConnectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedSearchConnector, associatedInterfacePtrInfo);
  }

  EmbeddedSearchConnectorAssociatedPtr.prototype =
      Object.create(EmbeddedSearchConnectorPtr.prototype);
  EmbeddedSearchConnectorAssociatedPtr.prototype.constructor =
      EmbeddedSearchConnectorAssociatedPtr;

  function EmbeddedSearchConnectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedSearchConnectorPtr.prototype.connect = function() {
    return EmbeddedSearchConnectorProxy.prototype.connect
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchConnectorProxy.prototype.connect = function(embeddedSearch, client) {
    var params_ = new EmbeddedSearchConnector_Connect_Params();
    params_.embeddedSearch = embeddedSearch;
    params_.client = client;
    var builder = new codec.MessageV2Builder(
        kEmbeddedSearchConnector_Connect_Name,
        codec.align(EmbeddedSearchConnector_Connect_Params.encodedSize));
    builder.setPayload(EmbeddedSearchConnector_Connect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedSearchConnectorStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedSearchConnectorStub.prototype.connect = function(embeddedSearch, client) {
    return this.delegate_ && this.delegate_.connect && this.delegate_.connect(embeddedSearch, client);
  }

  EmbeddedSearchConnectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedSearchConnector_Connect_Name:
      var params = reader.decodeStruct(EmbeddedSearchConnector_Connect_Params);
      this.connect(params.embeddedSearch, params.client);
      return true;
    default:
      return false;
    }
  };

  EmbeddedSearchConnectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateEmbeddedSearchConnectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedSearchConnector_Connect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearchConnector_Connect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedSearchConnectorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedSearchConnector = {
    name: 'chrome.mojom.EmbeddedSearchConnector',
    kVersion: 0,
    ptrClass: EmbeddedSearchConnectorPtr,
    proxyClass: EmbeddedSearchConnectorProxy,
    stubClass: EmbeddedSearchConnectorStub,
    validateRequest: validateEmbeddedSearchConnectorRequest,
    validateResponse: null,
    mojomId: 'chrome/common/search.mojom',
    fuzzMethods: {
      connect: {
        params: EmbeddedSearchConnector_Connect_Params,
      },
    },
  };
  EmbeddedSearchConnectorStub.prototype.validator = validateEmbeddedSearchConnectorRequest;
  EmbeddedSearchConnectorProxy.prototype.validator = null;
  var kEmbeddedSearch_FocusOmnibox_Name = 1898887574;
  var kEmbeddedSearch_DeleteMostVisitedItem_Name = 1004716437;
  var kEmbeddedSearch_UndoAllMostVisitedDeletions_Name = 270488830;
  var kEmbeddedSearch_UndoMostVisitedDeletion_Name = 1324904752;
  var kEmbeddedSearch_LogEvent_Name = 1320239266;
  var kEmbeddedSearch_LogMostVisitedImpression_Name = 1186822663;
  var kEmbeddedSearch_LogMostVisitedNavigation_Name = 1567195507;
  var kEmbeddedSearch_PasteAndOpenDropdown_Name = 383208194;
  var kEmbeddedSearch_HistorySyncCheck_Name = 1214099244;
  var kEmbeddedSearch_ChromeIdentityCheck_Name = 2110859048;

  function EmbeddedSearchPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedSearch,
                                                   handleOrPtrInfo);
  }

  function EmbeddedSearchAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedSearch, associatedInterfacePtrInfo);
  }

  EmbeddedSearchAssociatedPtr.prototype =
      Object.create(EmbeddedSearchPtr.prototype);
  EmbeddedSearchAssociatedPtr.prototype.constructor =
      EmbeddedSearchAssociatedPtr;

  function EmbeddedSearchProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedSearchPtr.prototype.focusOmnibox = function() {
    return EmbeddedSearchProxy.prototype.focusOmnibox
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.focusOmnibox = function(pageSeqNo, state) {
    var params_ = new EmbeddedSearch_FocusOmnibox_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.state = state;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_FocusOmnibox_Name,
        codec.align(EmbeddedSearch_FocusOmnibox_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_FocusOmnibox_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.deleteMostVisitedItem = function() {
    return EmbeddedSearchProxy.prototype.deleteMostVisitedItem
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.deleteMostVisitedItem = function(pageSeqNo, url) {
    var params_ = new EmbeddedSearch_DeleteMostVisitedItem_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_DeleteMostVisitedItem_Name,
        codec.align(EmbeddedSearch_DeleteMostVisitedItem_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_DeleteMostVisitedItem_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.undoAllMostVisitedDeletions = function() {
    return EmbeddedSearchProxy.prototype.undoAllMostVisitedDeletions
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.undoAllMostVisitedDeletions = function(pageSeqNo) {
    var params_ = new EmbeddedSearch_UndoAllMostVisitedDeletions_Params();
    params_.pageSeqNo = pageSeqNo;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_UndoAllMostVisitedDeletions_Name,
        codec.align(EmbeddedSearch_UndoAllMostVisitedDeletions_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_UndoAllMostVisitedDeletions_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.undoMostVisitedDeletion = function() {
    return EmbeddedSearchProxy.prototype.undoMostVisitedDeletion
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.undoMostVisitedDeletion = function(pageSeqNo, url) {
    var params_ = new EmbeddedSearch_UndoMostVisitedDeletion_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_UndoMostVisitedDeletion_Name,
        codec.align(EmbeddedSearch_UndoMostVisitedDeletion_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_UndoMostVisitedDeletion_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.logEvent = function() {
    return EmbeddedSearchProxy.prototype.logEvent
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.logEvent = function(pageSeqNo, event, time) {
    var params_ = new EmbeddedSearch_LogEvent_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.event = event;
    params_.time = time;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_LogEvent_Name,
        codec.align(EmbeddedSearch_LogEvent_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_LogEvent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.logMostVisitedImpression = function() {
    return EmbeddedSearchProxy.prototype.logMostVisitedImpression
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.logMostVisitedImpression = function(pageSeqNo, impression) {
    var params_ = new EmbeddedSearch_LogMostVisitedImpression_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.impression = impression;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_LogMostVisitedImpression_Name,
        codec.align(EmbeddedSearch_LogMostVisitedImpression_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_LogMostVisitedImpression_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.logMostVisitedNavigation = function() {
    return EmbeddedSearchProxy.prototype.logMostVisitedNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.logMostVisitedNavigation = function(pageSeqNo, impression) {
    var params_ = new EmbeddedSearch_LogMostVisitedNavigation_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.impression = impression;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_LogMostVisitedNavigation_Name,
        codec.align(EmbeddedSearch_LogMostVisitedNavigation_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_LogMostVisitedNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.pasteAndOpenDropdown = function() {
    return EmbeddedSearchProxy.prototype.pasteAndOpenDropdown
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.pasteAndOpenDropdown = function(pageSeqNo, textToBePasted) {
    var params_ = new EmbeddedSearch_PasteAndOpenDropdown_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.textToBePasted = textToBePasted;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearch_PasteAndOpenDropdown_Name,
        codec.align(EmbeddedSearch_PasteAndOpenDropdown_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearch_PasteAndOpenDropdown_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchPtr.prototype.historySyncCheck = function() {
    return EmbeddedSearchProxy.prototype.historySyncCheck
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.historySyncCheck = function(pageSeqNo) {
    var params_ = new EmbeddedSearch_HistorySyncCheck_Params();
    params_.pageSeqNo = pageSeqNo;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kEmbeddedSearch_HistorySyncCheck_Name,
          codec.align(EmbeddedSearch_HistorySyncCheck_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(EmbeddedSearch_HistorySyncCheck_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(EmbeddedSearch_HistorySyncCheck_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  EmbeddedSearchPtr.prototype.chromeIdentityCheck = function() {
    return EmbeddedSearchProxy.prototype.chromeIdentityCheck
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchProxy.prototype.chromeIdentityCheck = function(pageSeqNo, identity) {
    var params_ = new EmbeddedSearch_ChromeIdentityCheck_Params();
    params_.pageSeqNo = pageSeqNo;
    params_.identity = identity;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kEmbeddedSearch_ChromeIdentityCheck_Name,
          codec.align(EmbeddedSearch_ChromeIdentityCheck_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(EmbeddedSearch_ChromeIdentityCheck_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(EmbeddedSearch_ChromeIdentityCheck_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function EmbeddedSearchStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedSearchStub.prototype.focusOmnibox = function(pageSeqNo, state) {
    return this.delegate_ && this.delegate_.focusOmnibox && this.delegate_.focusOmnibox(pageSeqNo, state);
  }
  EmbeddedSearchStub.prototype.deleteMostVisitedItem = function(pageSeqNo, url) {
    return this.delegate_ && this.delegate_.deleteMostVisitedItem && this.delegate_.deleteMostVisitedItem(pageSeqNo, url);
  }
  EmbeddedSearchStub.prototype.undoAllMostVisitedDeletions = function(pageSeqNo) {
    return this.delegate_ && this.delegate_.undoAllMostVisitedDeletions && this.delegate_.undoAllMostVisitedDeletions(pageSeqNo);
  }
  EmbeddedSearchStub.prototype.undoMostVisitedDeletion = function(pageSeqNo, url) {
    return this.delegate_ && this.delegate_.undoMostVisitedDeletion && this.delegate_.undoMostVisitedDeletion(pageSeqNo, url);
  }
  EmbeddedSearchStub.prototype.logEvent = function(pageSeqNo, event, time) {
    return this.delegate_ && this.delegate_.logEvent && this.delegate_.logEvent(pageSeqNo, event, time);
  }
  EmbeddedSearchStub.prototype.logMostVisitedImpression = function(pageSeqNo, impression) {
    return this.delegate_ && this.delegate_.logMostVisitedImpression && this.delegate_.logMostVisitedImpression(pageSeqNo, impression);
  }
  EmbeddedSearchStub.prototype.logMostVisitedNavigation = function(pageSeqNo, impression) {
    return this.delegate_ && this.delegate_.logMostVisitedNavigation && this.delegate_.logMostVisitedNavigation(pageSeqNo, impression);
  }
  EmbeddedSearchStub.prototype.pasteAndOpenDropdown = function(pageSeqNo, textToBePasted) {
    return this.delegate_ && this.delegate_.pasteAndOpenDropdown && this.delegate_.pasteAndOpenDropdown(pageSeqNo, textToBePasted);
  }
  EmbeddedSearchStub.prototype.historySyncCheck = function(pageSeqNo) {
    return this.delegate_ && this.delegate_.historySyncCheck && this.delegate_.historySyncCheck(pageSeqNo);
  }
  EmbeddedSearchStub.prototype.chromeIdentityCheck = function(pageSeqNo, identity) {
    return this.delegate_ && this.delegate_.chromeIdentityCheck && this.delegate_.chromeIdentityCheck(pageSeqNo, identity);
  }

  EmbeddedSearchStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedSearch_FocusOmnibox_Name:
      var params = reader.decodeStruct(EmbeddedSearch_FocusOmnibox_Params);
      this.focusOmnibox(params.pageSeqNo, params.state);
      return true;
    case kEmbeddedSearch_DeleteMostVisitedItem_Name:
      var params = reader.decodeStruct(EmbeddedSearch_DeleteMostVisitedItem_Params);
      this.deleteMostVisitedItem(params.pageSeqNo, params.url);
      return true;
    case kEmbeddedSearch_UndoAllMostVisitedDeletions_Name:
      var params = reader.decodeStruct(EmbeddedSearch_UndoAllMostVisitedDeletions_Params);
      this.undoAllMostVisitedDeletions(params.pageSeqNo);
      return true;
    case kEmbeddedSearch_UndoMostVisitedDeletion_Name:
      var params = reader.decodeStruct(EmbeddedSearch_UndoMostVisitedDeletion_Params);
      this.undoMostVisitedDeletion(params.pageSeqNo, params.url);
      return true;
    case kEmbeddedSearch_LogEvent_Name:
      var params = reader.decodeStruct(EmbeddedSearch_LogEvent_Params);
      this.logEvent(params.pageSeqNo, params.event, params.time);
      return true;
    case kEmbeddedSearch_LogMostVisitedImpression_Name:
      var params = reader.decodeStruct(EmbeddedSearch_LogMostVisitedImpression_Params);
      this.logMostVisitedImpression(params.pageSeqNo, params.impression);
      return true;
    case kEmbeddedSearch_LogMostVisitedNavigation_Name:
      var params = reader.decodeStruct(EmbeddedSearch_LogMostVisitedNavigation_Params);
      this.logMostVisitedNavigation(params.pageSeqNo, params.impression);
      return true;
    case kEmbeddedSearch_PasteAndOpenDropdown_Name:
      var params = reader.decodeStruct(EmbeddedSearch_PasteAndOpenDropdown_Params);
      this.pasteAndOpenDropdown(params.pageSeqNo, params.textToBePasted);
      return true;
    default:
      return false;
    }
  };

  EmbeddedSearchStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedSearch_HistorySyncCheck_Name:
      var params = reader.decodeStruct(EmbeddedSearch_HistorySyncCheck_Params);
      this.historySyncCheck(params.pageSeqNo).then(function(response) {
        var responseParams =
            new EmbeddedSearch_HistorySyncCheck_ResponseParams();
        responseParams.syncHistory = response.syncHistory;
        var builder = new codec.MessageV1Builder(
            kEmbeddedSearch_HistorySyncCheck_Name,
            codec.align(EmbeddedSearch_HistorySyncCheck_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(EmbeddedSearch_HistorySyncCheck_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kEmbeddedSearch_ChromeIdentityCheck_Name:
      var params = reader.decodeStruct(EmbeddedSearch_ChromeIdentityCheck_Params);
      this.chromeIdentityCheck(params.pageSeqNo, params.identity).then(function(response) {
        var responseParams =
            new EmbeddedSearch_ChromeIdentityCheck_ResponseParams();
        responseParams.identityMatch = response.identityMatch;
        var builder = new codec.MessageV1Builder(
            kEmbeddedSearch_ChromeIdentityCheck_Name,
            codec.align(EmbeddedSearch_ChromeIdentityCheck_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(EmbeddedSearch_ChromeIdentityCheck_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateEmbeddedSearchRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedSearch_FocusOmnibox_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_FocusOmnibox_Params;
      break;
      case kEmbeddedSearch_DeleteMostVisitedItem_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_DeleteMostVisitedItem_Params;
      break;
      case kEmbeddedSearch_UndoAllMostVisitedDeletions_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_UndoAllMostVisitedDeletions_Params;
      break;
      case kEmbeddedSearch_UndoMostVisitedDeletion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_UndoMostVisitedDeletion_Params;
      break;
      case kEmbeddedSearch_LogEvent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_LogEvent_Params;
      break;
      case kEmbeddedSearch_LogMostVisitedImpression_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_LogMostVisitedImpression_Params;
      break;
      case kEmbeddedSearch_LogMostVisitedNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_LogMostVisitedNavigation_Params;
      break;
      case kEmbeddedSearch_PasteAndOpenDropdown_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearch_PasteAndOpenDropdown_Params;
      break;
      case kEmbeddedSearch_HistorySyncCheck_Name:
        if (message.expectsResponse())
          paramsClass = EmbeddedSearch_HistorySyncCheck_Params;
      break;
      case kEmbeddedSearch_ChromeIdentityCheck_Name:
        if (message.expectsResponse())
          paramsClass = EmbeddedSearch_ChromeIdentityCheck_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedSearchResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kEmbeddedSearch_HistorySyncCheck_Name:
        if (message.isResponse())
          paramsClass = EmbeddedSearch_HistorySyncCheck_ResponseParams;
        break;
      case kEmbeddedSearch_ChromeIdentityCheck_Name:
        if (message.isResponse())
          paramsClass = EmbeddedSearch_ChromeIdentityCheck_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var EmbeddedSearch = {
    name: 'chrome.mojom.EmbeddedSearch',
    kVersion: 0,
    ptrClass: EmbeddedSearchPtr,
    proxyClass: EmbeddedSearchProxy,
    stubClass: EmbeddedSearchStub,
    validateRequest: validateEmbeddedSearchRequest,
    validateResponse: validateEmbeddedSearchResponse,
    mojomId: 'chrome/common/search.mojom',
    fuzzMethods: {
      focusOmnibox: {
        params: EmbeddedSearch_FocusOmnibox_Params,
      },
      deleteMostVisitedItem: {
        params: EmbeddedSearch_DeleteMostVisitedItem_Params,
      },
      undoAllMostVisitedDeletions: {
        params: EmbeddedSearch_UndoAllMostVisitedDeletions_Params,
      },
      undoMostVisitedDeletion: {
        params: EmbeddedSearch_UndoMostVisitedDeletion_Params,
      },
      logEvent: {
        params: EmbeddedSearch_LogEvent_Params,
      },
      logMostVisitedImpression: {
        params: EmbeddedSearch_LogMostVisitedImpression_Params,
      },
      logMostVisitedNavigation: {
        params: EmbeddedSearch_LogMostVisitedNavigation_Params,
      },
      pasteAndOpenDropdown: {
        params: EmbeddedSearch_PasteAndOpenDropdown_Params,
      },
      historySyncCheck: {
        params: EmbeddedSearch_HistorySyncCheck_Params,
      },
      chromeIdentityCheck: {
        params: EmbeddedSearch_ChromeIdentityCheck_Params,
      },
    },
  };
  EmbeddedSearchStub.prototype.validator = validateEmbeddedSearchRequest;
  EmbeddedSearchProxy.prototype.validator = validateEmbeddedSearchResponse;
  var kEmbeddedSearchClient_SetPageSequenceNumber_Name = 389359210;
  var kEmbeddedSearchClient_FocusChanged_Name = 462021963;
  var kEmbeddedSearchClient_MostVisitedChanged_Name = 2011725474;
  var kEmbeddedSearchClient_SetInputInProgress_Name = 885125893;
  var kEmbeddedSearchClient_ThemeChanged_Name = 295623847;

  function EmbeddedSearchClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(EmbeddedSearchClient,
                                                   handleOrPtrInfo);
  }

  function EmbeddedSearchClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        EmbeddedSearchClient, associatedInterfacePtrInfo);
  }

  EmbeddedSearchClientAssociatedPtr.prototype =
      Object.create(EmbeddedSearchClientPtr.prototype);
  EmbeddedSearchClientAssociatedPtr.prototype.constructor =
      EmbeddedSearchClientAssociatedPtr;

  function EmbeddedSearchClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  EmbeddedSearchClientPtr.prototype.setPageSequenceNumber = function() {
    return EmbeddedSearchClientProxy.prototype.setPageSequenceNumber
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchClientProxy.prototype.setPageSequenceNumber = function(pageSeqNo) {
    var params_ = new EmbeddedSearchClient_SetPageSequenceNumber_Params();
    params_.pageSeqNo = pageSeqNo;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearchClient_SetPageSequenceNumber_Name,
        codec.align(EmbeddedSearchClient_SetPageSequenceNumber_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearchClient_SetPageSequenceNumber_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchClientPtr.prototype.focusChanged = function() {
    return EmbeddedSearchClientProxy.prototype.focusChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchClientProxy.prototype.focusChanged = function(newFocusState, reason) {
    var params_ = new EmbeddedSearchClient_FocusChanged_Params();
    params_.newFocusState = newFocusState;
    params_.reason = reason;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearchClient_FocusChanged_Name,
        codec.align(EmbeddedSearchClient_FocusChanged_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearchClient_FocusChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchClientPtr.prototype.mostVisitedChanged = function() {
    return EmbeddedSearchClientProxy.prototype.mostVisitedChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchClientProxy.prototype.mostVisitedChanged = function(items) {
    var params_ = new EmbeddedSearchClient_MostVisitedChanged_Params();
    params_.items = items;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearchClient_MostVisitedChanged_Name,
        codec.align(EmbeddedSearchClient_MostVisitedChanged_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearchClient_MostVisitedChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchClientPtr.prototype.setInputInProgress = function() {
    return EmbeddedSearchClientProxy.prototype.setInputInProgress
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchClientProxy.prototype.setInputInProgress = function(inputInProgress) {
    var params_ = new EmbeddedSearchClient_SetInputInProgress_Params();
    params_.inputInProgress = inputInProgress;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearchClient_SetInputInProgress_Name,
        codec.align(EmbeddedSearchClient_SetInputInProgress_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearchClient_SetInputInProgress_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  EmbeddedSearchClientPtr.prototype.themeChanged = function() {
    return EmbeddedSearchClientProxy.prototype.themeChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  EmbeddedSearchClientProxy.prototype.themeChanged = function(value) {
    var params_ = new EmbeddedSearchClient_ThemeChanged_Params();
    params_.value = value;
    var builder = new codec.MessageV0Builder(
        kEmbeddedSearchClient_ThemeChanged_Name,
        codec.align(EmbeddedSearchClient_ThemeChanged_Params.encodedSize));
    builder.encodeStruct(EmbeddedSearchClient_ThemeChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function EmbeddedSearchClientStub(delegate) {
    this.delegate_ = delegate;
  }
  EmbeddedSearchClientStub.prototype.setPageSequenceNumber = function(pageSeqNo) {
    return this.delegate_ && this.delegate_.setPageSequenceNumber && this.delegate_.setPageSequenceNumber(pageSeqNo);
  }
  EmbeddedSearchClientStub.prototype.focusChanged = function(newFocusState, reason) {
    return this.delegate_ && this.delegate_.focusChanged && this.delegate_.focusChanged(newFocusState, reason);
  }
  EmbeddedSearchClientStub.prototype.mostVisitedChanged = function(items) {
    return this.delegate_ && this.delegate_.mostVisitedChanged && this.delegate_.mostVisitedChanged(items);
  }
  EmbeddedSearchClientStub.prototype.setInputInProgress = function(inputInProgress) {
    return this.delegate_ && this.delegate_.setInputInProgress && this.delegate_.setInputInProgress(inputInProgress);
  }
  EmbeddedSearchClientStub.prototype.themeChanged = function(value) {
    return this.delegate_ && this.delegate_.themeChanged && this.delegate_.themeChanged(value);
  }

  EmbeddedSearchClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kEmbeddedSearchClient_SetPageSequenceNumber_Name:
      var params = reader.decodeStruct(EmbeddedSearchClient_SetPageSequenceNumber_Params);
      this.setPageSequenceNumber(params.pageSeqNo);
      return true;
    case kEmbeddedSearchClient_FocusChanged_Name:
      var params = reader.decodeStruct(EmbeddedSearchClient_FocusChanged_Params);
      this.focusChanged(params.newFocusState, params.reason);
      return true;
    case kEmbeddedSearchClient_MostVisitedChanged_Name:
      var params = reader.decodeStruct(EmbeddedSearchClient_MostVisitedChanged_Params);
      this.mostVisitedChanged(params.items);
      return true;
    case kEmbeddedSearchClient_SetInputInProgress_Name:
      var params = reader.decodeStruct(EmbeddedSearchClient_SetInputInProgress_Params);
      this.setInputInProgress(params.inputInProgress);
      return true;
    case kEmbeddedSearchClient_ThemeChanged_Name:
      var params = reader.decodeStruct(EmbeddedSearchClient_ThemeChanged_Params);
      this.themeChanged(params.value);
      return true;
    default:
      return false;
    }
  };

  EmbeddedSearchClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateEmbeddedSearchClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kEmbeddedSearchClient_SetPageSequenceNumber_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearchClient_SetPageSequenceNumber_Params;
      break;
      case kEmbeddedSearchClient_FocusChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearchClient_FocusChanged_Params;
      break;
      case kEmbeddedSearchClient_MostVisitedChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearchClient_MostVisitedChanged_Params;
      break;
      case kEmbeddedSearchClient_SetInputInProgress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearchClient_SetInputInProgress_Params;
      break;
      case kEmbeddedSearchClient_ThemeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = EmbeddedSearchClient_ThemeChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateEmbeddedSearchClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var EmbeddedSearchClient = {
    name: 'chrome.mojom.EmbeddedSearchClient',
    kVersion: 0,
    ptrClass: EmbeddedSearchClientPtr,
    proxyClass: EmbeddedSearchClientProxy,
    stubClass: EmbeddedSearchClientStub,
    validateRequest: validateEmbeddedSearchClientRequest,
    validateResponse: null,
    mojomId: 'chrome/common/search.mojom',
    fuzzMethods: {
      setPageSequenceNumber: {
        params: EmbeddedSearchClient_SetPageSequenceNumber_Params,
      },
      focusChanged: {
        params: EmbeddedSearchClient_FocusChanged_Params,
      },
      mostVisitedChanged: {
        params: EmbeddedSearchClient_MostVisitedChanged_Params,
      },
      setInputInProgress: {
        params: EmbeddedSearchClient_SetInputInProgress_Params,
      },
      themeChanged: {
        params: EmbeddedSearchClient_ThemeChanged_Params,
      },
    },
  };
  EmbeddedSearchClientStub.prototype.validator = validateEmbeddedSearchClientRequest;
  EmbeddedSearchClientProxy.prototype.validator = null;
  var kSearchBouncer_SetNewTabPageURL_Name = 547449203;

  function SearchBouncerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(SearchBouncer,
                                                   handleOrPtrInfo);
  }

  function SearchBouncerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        SearchBouncer, associatedInterfacePtrInfo);
  }

  SearchBouncerAssociatedPtr.prototype =
      Object.create(SearchBouncerPtr.prototype);
  SearchBouncerAssociatedPtr.prototype.constructor =
      SearchBouncerAssociatedPtr;

  function SearchBouncerProxy(receiver) {
    this.receiver_ = receiver;
  }
  SearchBouncerPtr.prototype.setNewTabPageURL = function() {
    return SearchBouncerProxy.prototype.setNewTabPageURL
        .apply(this.ptr.getProxy(), arguments);
  };

  SearchBouncerProxy.prototype.setNewTabPageURL = function(newTabPageUrl) {
    var params_ = new SearchBouncer_SetNewTabPageURL_Params();
    params_.newTabPageUrl = newTabPageUrl;
    var builder = new codec.MessageV0Builder(
        kSearchBouncer_SetNewTabPageURL_Name,
        codec.align(SearchBouncer_SetNewTabPageURL_Params.encodedSize));
    builder.encodeStruct(SearchBouncer_SetNewTabPageURL_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SearchBouncerStub(delegate) {
    this.delegate_ = delegate;
  }
  SearchBouncerStub.prototype.setNewTabPageURL = function(newTabPageUrl) {
    return this.delegate_ && this.delegate_.setNewTabPageURL && this.delegate_.setNewTabPageURL(newTabPageUrl);
  }

  SearchBouncerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSearchBouncer_SetNewTabPageURL_Name:
      var params = reader.decodeStruct(SearchBouncer_SetNewTabPageURL_Params);
      this.setNewTabPageURL(params.newTabPageUrl);
      return true;
    default:
      return false;
    }
  };

  SearchBouncerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateSearchBouncerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSearchBouncer_SetNewTabPageURL_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = SearchBouncer_SetNewTabPageURL_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSearchBouncerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var SearchBouncer = {
    name: 'chrome.mojom.SearchBouncer',
    kVersion: 0,
    ptrClass: SearchBouncerPtr,
    proxyClass: SearchBouncerProxy,
    stubClass: SearchBouncerStub,
    validateRequest: validateSearchBouncerRequest,
    validateResponse: null,
    mojomId: 'chrome/common/search.mojom',
    fuzzMethods: {
      setNewTabPageURL: {
        params: SearchBouncer_SetNewTabPageURL_Params,
      },
    },
  };
  SearchBouncerStub.prototype.validator = validateSearchBouncerRequest;
  SearchBouncerProxy.prototype.validator = null;
  exports.NTPLoggingEventType = NTPLoggingEventType;
  exports.OmniboxFocusState = OmniboxFocusState;
  exports.OmniboxFocusChangeReason = OmniboxFocusChangeReason;
  exports.NTPTileImpression = NTPTileImpression;
  exports.InstantMostVisitedItem = InstantMostVisitedItem;
  exports.ThemeBackgroundInfo = ThemeBackgroundInfo;
  exports.EmbeddedSearchConnector = EmbeddedSearchConnector;
  exports.EmbeddedSearchConnectorPtr = EmbeddedSearchConnectorPtr;
  exports.EmbeddedSearchConnectorAssociatedPtr = EmbeddedSearchConnectorAssociatedPtr;
  exports.EmbeddedSearch = EmbeddedSearch;
  exports.EmbeddedSearchPtr = EmbeddedSearchPtr;
  exports.EmbeddedSearchAssociatedPtr = EmbeddedSearchAssociatedPtr;
  exports.EmbeddedSearchClient = EmbeddedSearchClient;
  exports.EmbeddedSearchClientPtr = EmbeddedSearchClientPtr;
  exports.EmbeddedSearchClientAssociatedPtr = EmbeddedSearchClientAssociatedPtr;
  exports.SearchBouncer = SearchBouncer;
  exports.SearchBouncerPtr = SearchBouncerPtr;
  exports.SearchBouncerAssociatedPtr = SearchBouncerAssociatedPtr;
})();