// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/plugin.mojom';
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
  var webplugininfo$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/webplugininfo.mojom', '../../content/public/common/webplugininfo.mojom.js');
  }
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../mojo/public/mojom/base/string16.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }


  var PluginStatus = {};
  PluginStatus.kAllowed = 0;
  PluginStatus.kBlocked = PluginStatus.kAllowed + 1;
  PluginStatus.kBlockedByPolicy = PluginStatus.kBlocked + 1;
  PluginStatus.kBlockedNoLoading = PluginStatus.kBlockedByPolicy + 1;
  PluginStatus.kComponentUpdateRequired = PluginStatus.kBlockedNoLoading + 1;
  PluginStatus.kDisabled = PluginStatus.kComponentUpdateRequired + 1;
  PluginStatus.kFlashHiddenPreferHtml = PluginStatus.kDisabled + 1;
  PluginStatus.kNotFound = PluginStatus.kFlashHiddenPreferHtml + 1;
  PluginStatus.kOutdatedBlocked = PluginStatus.kNotFound + 1;
  PluginStatus.kOutdatedDisallowed = PluginStatus.kOutdatedBlocked + 1;
  PluginStatus.kPlayImportantContent = PluginStatus.kOutdatedDisallowed + 1;
  PluginStatus.kRestartRequired = PluginStatus.kPlayImportantContent + 1;
  PluginStatus.kUnauthorized = PluginStatus.kRestartRequired + 1;

  PluginStatus.isKnownEnumValue = function(value) {
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
    case 11:
    case 12:
      return true;
    }
    return false;
  };

  PluginStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function PluginInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginInfo.prototype.initDefaults_ = function() {
    this.status = 0;
    this.plugin = null;
    this.actualMimeType = null;
    this.groupIdentifier = null;
    this.groupName = null;
  };
  PluginInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginInfo.generate = function(generator_) {
    var generated = new PluginInfo;
    generated.status = generator_.generateEnum(0, 12);
    generated.plugin = generator_.generateStruct(content.mojom.WebPluginInfo, false);
    generated.actualMimeType = generator_.generateString(false);
    generated.groupIdentifier = generator_.generateString(false);
    generated.groupName = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  PluginInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 12);
    }
    if (mutator_.chooseMutateField()) {
      this.plugin = mutator_.mutateStruct(content.mojom.WebPluginInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.actualMimeType = mutator_.mutateString(this.actualMimeType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupIdentifier = mutator_.mutateString(this.groupIdentifier, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupName = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  PluginInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginInfo.validate = function(messageValidator, offset) {
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


    // validate PluginInfo.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PluginStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginInfo.plugin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, webplugininfo$.WebPluginInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginInfo.actualMimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginInfo.groupIdentifier
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginInfo.groupName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginInfo.encodedSize = codec.kStructHeaderSize + 40;

  PluginInfo.decode = function(decoder) {
    var packed;
    var val = new PluginInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.plugin = decoder.decodeStructPointer(webplugininfo$.WebPluginInfo);
    val.actualMimeType = decoder.decodeStruct(codec.String);
    val.groupIdentifier = decoder.decodeStruct(codec.String);
    val.groupName = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  PluginInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(webplugininfo$.WebPluginInfo, val.plugin);
    encoder.encodeStruct(codec.String, val.actualMimeType);
    encoder.encodeStruct(codec.String, val.groupIdentifier);
    encoder.encodeStructPointer(string16$.String16, val.groupName);
  };
  function PluginParam(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginParam.prototype.initDefaults_ = function() {
    this.name = null;
    this.value = null;
  };
  PluginParam.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginParam.generate = function(generator_) {
    var generated = new PluginParam;
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.value = generator_.generateStruct(mojoBase.mojom.String16, false);
    return generated;
  };

  PluginParam.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    return this;
  };
  PluginParam.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginParam.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginParam.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginParam.validate = function(messageValidator, offset) {
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


    // validate PluginParam.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginParam.value
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginParam.encodedSize = codec.kStructHeaderSize + 16;

  PluginParam.decode = function(decoder) {
    var packed;
    var val = new PluginParam();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.value = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  PluginParam.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginParam.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStructPointer(string16$.String16, val.value);
  };
  function PluginHost_ShowFlashPermissionBubble_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginHost_ShowFlashPermissionBubble_Params.prototype.initDefaults_ = function() {
  };
  PluginHost_ShowFlashPermissionBubble_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginHost_ShowFlashPermissionBubble_Params.generate = function(generator_) {
    var generated = new PluginHost_ShowFlashPermissionBubble_Params;
    return generated;
  };

  PluginHost_ShowFlashPermissionBubble_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PluginHost_ShowFlashPermissionBubble_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginHost_ShowFlashPermissionBubble_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginHost_ShowFlashPermissionBubble_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginHost_ShowFlashPermissionBubble_Params.validate = function(messageValidator, offset) {
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

  PluginHost_ShowFlashPermissionBubble_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginHost_ShowFlashPermissionBubble_Params.decode = function(decoder) {
    var packed;
    var val = new PluginHost_ShowFlashPermissionBubble_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginHost_ShowFlashPermissionBubble_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginHost_ShowFlashPermissionBubble_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PluginHost_CouldNotLoadPlugin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginHost_CouldNotLoadPlugin_Params.prototype.initDefaults_ = function() {
    this.filePath = null;
  };
  PluginHost_CouldNotLoadPlugin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginHost_CouldNotLoadPlugin_Params.generate = function(generator_) {
    var generated = new PluginHost_CouldNotLoadPlugin_Params;
    generated.filePath = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    return generated;
  };

  PluginHost_CouldNotLoadPlugin_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.filePath = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    return this;
  };
  PluginHost_CouldNotLoadPlugin_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginHost_CouldNotLoadPlugin_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginHost_CouldNotLoadPlugin_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginHost_CouldNotLoadPlugin_Params.validate = function(messageValidator, offset) {
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


    // validate PluginHost_CouldNotLoadPlugin_Params.filePath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginHost_CouldNotLoadPlugin_Params.encodedSize = codec.kStructHeaderSize + 8;

  PluginHost_CouldNotLoadPlugin_Params.decode = function(decoder) {
    var packed;
    var val = new PluginHost_CouldNotLoadPlugin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.filePath = decoder.decodeStructPointer(file_path$.FilePath);
    return val;
  };

  PluginHost_CouldNotLoadPlugin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginHost_CouldNotLoadPlugin_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.filePath);
  };
  function PluginHost_BlockedOutdatedPlugin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginHost_BlockedOutdatedPlugin_Params.prototype.initDefaults_ = function() {
    this.pluginRenderer = new PluginRendererPtr();
    this.groupId = null;
  };
  PluginHost_BlockedOutdatedPlugin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginHost_BlockedOutdatedPlugin_Params.generate = function(generator_) {
    var generated = new PluginHost_BlockedOutdatedPlugin_Params;
    generated.pluginRenderer = generator_.generateInterface("chrome.mojom.PluginRenderer", false);
    generated.groupId = generator_.generateString(false);
    return generated;
  };

  PluginHost_BlockedOutdatedPlugin_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pluginRenderer = mutator_.mutateInterface(this.pluginRenderer, "chrome.mojom.PluginRenderer", false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateString(this.groupId, false);
    }
    return this;
  };
  PluginHost_BlockedOutdatedPlugin_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pluginRenderer !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.PluginRendererPtr"]);
    }
    return handles;
  };

  PluginHost_BlockedOutdatedPlugin_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginHost_BlockedOutdatedPlugin_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.pluginRenderer = handles[idx++];;
    return idx;
  };

  PluginHost_BlockedOutdatedPlugin_Params.validate = function(messageValidator, offset) {
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


    // validate PluginHost_BlockedOutdatedPlugin_Params.pluginRenderer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginHost_BlockedOutdatedPlugin_Params.groupId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginHost_BlockedOutdatedPlugin_Params.encodedSize = codec.kStructHeaderSize + 16;

  PluginHost_BlockedOutdatedPlugin_Params.decode = function(decoder) {
    var packed;
    var val = new PluginHost_BlockedOutdatedPlugin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pluginRenderer = decoder.decodeStruct(new codec.Interface(PluginRendererPtr));
    val.groupId = decoder.decodeStruct(codec.String);
    return val;
  };

  PluginHost_BlockedOutdatedPlugin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginHost_BlockedOutdatedPlugin_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PluginRendererPtr), val.pluginRenderer);
    encoder.encodeStruct(codec.String, val.groupId);
  };
  function PluginHost_BlockedComponentUpdatedPlugin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginHost_BlockedComponentUpdatedPlugin_Params.prototype.initDefaults_ = function() {
    this.pluginRenderer = new PluginRendererPtr();
    this.groupId = null;
  };
  PluginHost_BlockedComponentUpdatedPlugin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginHost_BlockedComponentUpdatedPlugin_Params.generate = function(generator_) {
    var generated = new PluginHost_BlockedComponentUpdatedPlugin_Params;
    generated.pluginRenderer = generator_.generateInterface("chrome.mojom.PluginRenderer", false);
    generated.groupId = generator_.generateString(false);
    return generated;
  };

  PluginHost_BlockedComponentUpdatedPlugin_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pluginRenderer = mutator_.mutateInterface(this.pluginRenderer, "chrome.mojom.PluginRenderer", false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateString(this.groupId, false);
    }
    return this;
  };
  PluginHost_BlockedComponentUpdatedPlugin_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.pluginRenderer !== null) {
      Array.prototype.push.apply(handles, ["chrome.mojom.PluginRendererPtr"]);
    }
    return handles;
  };

  PluginHost_BlockedComponentUpdatedPlugin_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginHost_BlockedComponentUpdatedPlugin_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.pluginRenderer = handles[idx++];;
    return idx;
  };

  PluginHost_BlockedComponentUpdatedPlugin_Params.validate = function(messageValidator, offset) {
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


    // validate PluginHost_BlockedComponentUpdatedPlugin_Params.pluginRenderer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginHost_BlockedComponentUpdatedPlugin_Params.groupId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginHost_BlockedComponentUpdatedPlugin_Params.encodedSize = codec.kStructHeaderSize + 16;

  PluginHost_BlockedComponentUpdatedPlugin_Params.decode = function(decoder) {
    var packed;
    var val = new PluginHost_BlockedComponentUpdatedPlugin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pluginRenderer = decoder.decodeStruct(new codec.Interface(PluginRendererPtr));
    val.groupId = decoder.decodeStruct(codec.String);
    return val;
  };

  PluginHost_BlockedComponentUpdatedPlugin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginHost_BlockedComponentUpdatedPlugin_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PluginRendererPtr), val.pluginRenderer);
    encoder.encodeStruct(codec.String, val.groupId);
  };
  function PluginAuthHost_BlockedUnauthorizedPlugin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginAuthHost_BlockedUnauthorizedPlugin_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.groupId = null;
  };
  PluginAuthHost_BlockedUnauthorizedPlugin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginAuthHost_BlockedUnauthorizedPlugin_Params.generate = function(generator_) {
    var generated = new PluginAuthHost_BlockedUnauthorizedPlugin_Params;
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.groupId = generator_.generateString(false);
    return generated;
  };

  PluginAuthHost_BlockedUnauthorizedPlugin_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupId = mutator_.mutateString(this.groupId, false);
    }
    return this;
  };
  PluginAuthHost_BlockedUnauthorizedPlugin_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginAuthHost_BlockedUnauthorizedPlugin_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginAuthHost_BlockedUnauthorizedPlugin_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginAuthHost_BlockedUnauthorizedPlugin_Params.validate = function(messageValidator, offset) {
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


    // validate PluginAuthHost_BlockedUnauthorizedPlugin_Params.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginAuthHost_BlockedUnauthorizedPlugin_Params.groupId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginAuthHost_BlockedUnauthorizedPlugin_Params.encodedSize = codec.kStructHeaderSize + 16;

  PluginAuthHost_BlockedUnauthorizedPlugin_Params.decode = function(decoder) {
    var packed;
    var val = new PluginAuthHost_BlockedUnauthorizedPlugin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.groupId = decoder.decodeStruct(codec.String);
    return val;
  };

  PluginAuthHost_BlockedUnauthorizedPlugin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginAuthHost_BlockedUnauthorizedPlugin_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStruct(codec.String, val.groupId);
  };
  function PluginInfoHost_GetPluginInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginInfoHost_GetPluginInfo_Params.prototype.initDefaults_ = function() {
    this.renderFrameId = 0;
    this.url = null;
    this.origin = null;
    this.mimeType = null;
  };
  PluginInfoHost_GetPluginInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginInfoHost_GetPluginInfo_Params.generate = function(generator_) {
    var generated = new PluginInfoHost_GetPluginInfo_Params;
    generated.renderFrameId = generator_.generateInt32();
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.mimeType = generator_.generateString(false);
    return generated;
  };

  PluginInfoHost_GetPluginInfo_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.renderFrameId = mutator_.mutateInt32(this.renderFrameId);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateString(this.mimeType, false);
    }
    return this;
  };
  PluginInfoHost_GetPluginInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginInfoHost_GetPluginInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginInfoHost_GetPluginInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginInfoHost_GetPluginInfo_Params.validate = function(messageValidator, offset) {
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



    // validate PluginInfoHost_GetPluginInfo_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginInfoHost_GetPluginInfo_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PluginInfoHost_GetPluginInfo_Params.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginInfoHost_GetPluginInfo_Params.encodedSize = codec.kStructHeaderSize + 32;

  PluginInfoHost_GetPluginInfo_Params.decode = function(decoder) {
    var packed;
    var val = new PluginInfoHost_GetPluginInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.renderFrameId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.mimeType = decoder.decodeStruct(codec.String);
    return val;
  };

  PluginInfoHost_GetPluginInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginInfoHost_GetPluginInfo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.renderFrameId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.String, val.mimeType);
  };
  function PluginInfoHost_GetPluginInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginInfoHost_GetPluginInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.pluginInfo = null;
  };
  PluginInfoHost_GetPluginInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginInfoHost_GetPluginInfo_ResponseParams.generate = function(generator_) {
    var generated = new PluginInfoHost_GetPluginInfo_ResponseParams;
    generated.pluginInfo = generator_.generateStruct(chrome.mojom.PluginInfo, false);
    return generated;
  };

  PluginInfoHost_GetPluginInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pluginInfo = mutator_.mutateStruct(chrome.mojom.PluginInfo, false);
    }
    return this;
  };
  PluginInfoHost_GetPluginInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginInfoHost_GetPluginInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginInfoHost_GetPluginInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginInfoHost_GetPluginInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PluginInfoHost_GetPluginInfo_ResponseParams.pluginInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PluginInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PluginInfoHost_GetPluginInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PluginInfoHost_GetPluginInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PluginInfoHost_GetPluginInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pluginInfo = decoder.decodeStructPointer(PluginInfo);
    return val;
  };

  PluginInfoHost_GetPluginInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginInfoHost_GetPluginInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PluginInfo, val.pluginInfo);
  };
  function PluginRenderer_FinishedDownloading_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginRenderer_FinishedDownloading_Params.prototype.initDefaults_ = function() {
  };
  PluginRenderer_FinishedDownloading_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginRenderer_FinishedDownloading_Params.generate = function(generator_) {
    var generated = new PluginRenderer_FinishedDownloading_Params;
    return generated;
  };

  PluginRenderer_FinishedDownloading_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PluginRenderer_FinishedDownloading_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginRenderer_FinishedDownloading_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginRenderer_FinishedDownloading_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginRenderer_FinishedDownloading_Params.validate = function(messageValidator, offset) {
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

  PluginRenderer_FinishedDownloading_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginRenderer_FinishedDownloading_Params.decode = function(decoder) {
    var packed;
    var val = new PluginRenderer_FinishedDownloading_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginRenderer_FinishedDownloading_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginRenderer_FinishedDownloading_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PluginRenderer_UpdateSuccess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginRenderer_UpdateSuccess_Params.prototype.initDefaults_ = function() {
  };
  PluginRenderer_UpdateSuccess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginRenderer_UpdateSuccess_Params.generate = function(generator_) {
    var generated = new PluginRenderer_UpdateSuccess_Params;
    return generated;
  };

  PluginRenderer_UpdateSuccess_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PluginRenderer_UpdateSuccess_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginRenderer_UpdateSuccess_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginRenderer_UpdateSuccess_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginRenderer_UpdateSuccess_Params.validate = function(messageValidator, offset) {
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

  PluginRenderer_UpdateSuccess_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginRenderer_UpdateSuccess_Params.decode = function(decoder) {
    var packed;
    var val = new PluginRenderer_UpdateSuccess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginRenderer_UpdateSuccess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginRenderer_UpdateSuccess_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PluginRenderer_UpdateFailure_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginRenderer_UpdateFailure_Params.prototype.initDefaults_ = function() {
  };
  PluginRenderer_UpdateFailure_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginRenderer_UpdateFailure_Params.generate = function(generator_) {
    var generated = new PluginRenderer_UpdateFailure_Params;
    return generated;
  };

  PluginRenderer_UpdateFailure_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PluginRenderer_UpdateFailure_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginRenderer_UpdateFailure_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginRenderer_UpdateFailure_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginRenderer_UpdateFailure_Params.validate = function(messageValidator, offset) {
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

  PluginRenderer_UpdateFailure_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginRenderer_UpdateFailure_Params.decode = function(decoder) {
    var packed;
    var val = new PluginRenderer_UpdateFailure_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginRenderer_UpdateFailure_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginRenderer_UpdateFailure_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PluginRenderer_UpdateDownloading_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PluginRenderer_UpdateDownloading_Params.prototype.initDefaults_ = function() {
  };
  PluginRenderer_UpdateDownloading_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PluginRenderer_UpdateDownloading_Params.generate = function(generator_) {
    var generated = new PluginRenderer_UpdateDownloading_Params;
    return generated;
  };

  PluginRenderer_UpdateDownloading_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PluginRenderer_UpdateDownloading_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PluginRenderer_UpdateDownloading_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PluginRenderer_UpdateDownloading_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PluginRenderer_UpdateDownloading_Params.validate = function(messageValidator, offset) {
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

  PluginRenderer_UpdateDownloading_Params.encodedSize = codec.kStructHeaderSize + 0;

  PluginRenderer_UpdateDownloading_Params.decode = function(decoder) {
    var packed;
    var val = new PluginRenderer_UpdateDownloading_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PluginRenderer_UpdateDownloading_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PluginRenderer_UpdateDownloading_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kPluginHost_ShowFlashPermissionBubble_Name = 1007231330;
  var kPluginHost_CouldNotLoadPlugin_Name = 725473292;
  var kPluginHost_BlockedOutdatedPlugin_Name = 1184014562;
  var kPluginHost_BlockedComponentUpdatedPlugin_Name = 2079292204;

  function PluginHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PluginHost,
                                                   handleOrPtrInfo);
  }

  function PluginHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PluginHost, associatedInterfacePtrInfo);
  }

  PluginHostAssociatedPtr.prototype =
      Object.create(PluginHostPtr.prototype);
  PluginHostAssociatedPtr.prototype.constructor =
      PluginHostAssociatedPtr;

  function PluginHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  PluginHostPtr.prototype.showFlashPermissionBubble = function() {
    return PluginHostProxy.prototype.showFlashPermissionBubble
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginHostProxy.prototype.showFlashPermissionBubble = function() {
    var params_ = new PluginHost_ShowFlashPermissionBubble_Params();
    var builder = new codec.MessageV0Builder(
        kPluginHost_ShowFlashPermissionBubble_Name,
        codec.align(PluginHost_ShowFlashPermissionBubble_Params.encodedSize));
    builder.encodeStruct(PluginHost_ShowFlashPermissionBubble_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginHostPtr.prototype.couldNotLoadPlugin = function() {
    return PluginHostProxy.prototype.couldNotLoadPlugin
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginHostProxy.prototype.couldNotLoadPlugin = function(filePath) {
    var params_ = new PluginHost_CouldNotLoadPlugin_Params();
    params_.filePath = filePath;
    var builder = new codec.MessageV0Builder(
        kPluginHost_CouldNotLoadPlugin_Name,
        codec.align(PluginHost_CouldNotLoadPlugin_Params.encodedSize));
    builder.encodeStruct(PluginHost_CouldNotLoadPlugin_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginHostPtr.prototype.blockedOutdatedPlugin = function() {
    return PluginHostProxy.prototype.blockedOutdatedPlugin
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginHostProxy.prototype.blockedOutdatedPlugin = function(pluginRenderer, groupId) {
    var params_ = new PluginHost_BlockedOutdatedPlugin_Params();
    params_.pluginRenderer = pluginRenderer;
    params_.groupId = groupId;
    var builder = new codec.MessageV0Builder(
        kPluginHost_BlockedOutdatedPlugin_Name,
        codec.align(PluginHost_BlockedOutdatedPlugin_Params.encodedSize));
    builder.encodeStruct(PluginHost_BlockedOutdatedPlugin_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginHostPtr.prototype.blockedComponentUpdatedPlugin = function() {
    return PluginHostProxy.prototype.blockedComponentUpdatedPlugin
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginHostProxy.prototype.blockedComponentUpdatedPlugin = function(pluginRenderer, groupId) {
    var params_ = new PluginHost_BlockedComponentUpdatedPlugin_Params();
    params_.pluginRenderer = pluginRenderer;
    params_.groupId = groupId;
    var builder = new codec.MessageV0Builder(
        kPluginHost_BlockedComponentUpdatedPlugin_Name,
        codec.align(PluginHost_BlockedComponentUpdatedPlugin_Params.encodedSize));
    builder.encodeStruct(PluginHost_BlockedComponentUpdatedPlugin_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PluginHostStub(delegate) {
    this.delegate_ = delegate;
  }
  PluginHostStub.prototype.showFlashPermissionBubble = function() {
    return this.delegate_ && this.delegate_.showFlashPermissionBubble && this.delegate_.showFlashPermissionBubble();
  }
  PluginHostStub.prototype.couldNotLoadPlugin = function(filePath) {
    return this.delegate_ && this.delegate_.couldNotLoadPlugin && this.delegate_.couldNotLoadPlugin(filePath);
  }
  PluginHostStub.prototype.blockedOutdatedPlugin = function(pluginRenderer, groupId) {
    return this.delegate_ && this.delegate_.blockedOutdatedPlugin && this.delegate_.blockedOutdatedPlugin(pluginRenderer, groupId);
  }
  PluginHostStub.prototype.blockedComponentUpdatedPlugin = function(pluginRenderer, groupId) {
    return this.delegate_ && this.delegate_.blockedComponentUpdatedPlugin && this.delegate_.blockedComponentUpdatedPlugin(pluginRenderer, groupId);
  }

  PluginHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginHost_ShowFlashPermissionBubble_Name:
      var params = reader.decodeStruct(PluginHost_ShowFlashPermissionBubble_Params);
      this.showFlashPermissionBubble();
      return true;
    case kPluginHost_CouldNotLoadPlugin_Name:
      var params = reader.decodeStruct(PluginHost_CouldNotLoadPlugin_Params);
      this.couldNotLoadPlugin(params.filePath);
      return true;
    case kPluginHost_BlockedOutdatedPlugin_Name:
      var params = reader.decodeStruct(PluginHost_BlockedOutdatedPlugin_Params);
      this.blockedOutdatedPlugin(params.pluginRenderer, params.groupId);
      return true;
    case kPluginHost_BlockedComponentUpdatedPlugin_Name:
      var params = reader.decodeStruct(PluginHost_BlockedComponentUpdatedPlugin_Params);
      this.blockedComponentUpdatedPlugin(params.pluginRenderer, params.groupId);
      return true;
    default:
      return false;
    }
  };

  PluginHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePluginHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPluginHost_ShowFlashPermissionBubble_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginHost_ShowFlashPermissionBubble_Params;
      break;
      case kPluginHost_CouldNotLoadPlugin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginHost_CouldNotLoadPlugin_Params;
      break;
      case kPluginHost_BlockedOutdatedPlugin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginHost_BlockedOutdatedPlugin_Params;
      break;
      case kPluginHost_BlockedComponentUpdatedPlugin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginHost_BlockedComponentUpdatedPlugin_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePluginHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PluginHost = {
    name: 'chrome.mojom.PluginHost',
    kVersion: 0,
    ptrClass: PluginHostPtr,
    proxyClass: PluginHostProxy,
    stubClass: PluginHostStub,
    validateRequest: validatePluginHostRequest,
    validateResponse: null,
    mojomId: 'chrome/common/plugin.mojom',
    fuzzMethods: {
      showFlashPermissionBubble: {
        params: PluginHost_ShowFlashPermissionBubble_Params,
      },
      couldNotLoadPlugin: {
        params: PluginHost_CouldNotLoadPlugin_Params,
      },
      blockedOutdatedPlugin: {
        params: PluginHost_BlockedOutdatedPlugin_Params,
      },
      blockedComponentUpdatedPlugin: {
        params: PluginHost_BlockedComponentUpdatedPlugin_Params,
      },
    },
  };
  PluginHostStub.prototype.validator = validatePluginHostRequest;
  PluginHostProxy.prototype.validator = null;
  var kPluginAuthHost_BlockedUnauthorizedPlugin_Name = 361667155;

  function PluginAuthHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PluginAuthHost,
                                                   handleOrPtrInfo);
  }

  function PluginAuthHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PluginAuthHost, associatedInterfacePtrInfo);
  }

  PluginAuthHostAssociatedPtr.prototype =
      Object.create(PluginAuthHostPtr.prototype);
  PluginAuthHostAssociatedPtr.prototype.constructor =
      PluginAuthHostAssociatedPtr;

  function PluginAuthHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  PluginAuthHostPtr.prototype.blockedUnauthorizedPlugin = function() {
    return PluginAuthHostProxy.prototype.blockedUnauthorizedPlugin
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginAuthHostProxy.prototype.blockedUnauthorizedPlugin = function(name, groupId) {
    var params_ = new PluginAuthHost_BlockedUnauthorizedPlugin_Params();
    params_.name = name;
    params_.groupId = groupId;
    var builder = new codec.MessageV0Builder(
        kPluginAuthHost_BlockedUnauthorizedPlugin_Name,
        codec.align(PluginAuthHost_BlockedUnauthorizedPlugin_Params.encodedSize));
    builder.encodeStruct(PluginAuthHost_BlockedUnauthorizedPlugin_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PluginAuthHostStub(delegate) {
    this.delegate_ = delegate;
  }
  PluginAuthHostStub.prototype.blockedUnauthorizedPlugin = function(name, groupId) {
    return this.delegate_ && this.delegate_.blockedUnauthorizedPlugin && this.delegate_.blockedUnauthorizedPlugin(name, groupId);
  }

  PluginAuthHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginAuthHost_BlockedUnauthorizedPlugin_Name:
      var params = reader.decodeStruct(PluginAuthHost_BlockedUnauthorizedPlugin_Params);
      this.blockedUnauthorizedPlugin(params.name, params.groupId);
      return true;
    default:
      return false;
    }
  };

  PluginAuthHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePluginAuthHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPluginAuthHost_BlockedUnauthorizedPlugin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginAuthHost_BlockedUnauthorizedPlugin_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePluginAuthHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PluginAuthHost = {
    name: 'chrome.mojom.PluginAuthHost',
    kVersion: 0,
    ptrClass: PluginAuthHostPtr,
    proxyClass: PluginAuthHostProxy,
    stubClass: PluginAuthHostStub,
    validateRequest: validatePluginAuthHostRequest,
    validateResponse: null,
    mojomId: 'chrome/common/plugin.mojom',
    fuzzMethods: {
      blockedUnauthorizedPlugin: {
        params: PluginAuthHost_BlockedUnauthorizedPlugin_Params,
      },
    },
  };
  PluginAuthHostStub.prototype.validator = validatePluginAuthHostRequest;
  PluginAuthHostProxy.prototype.validator = null;
  var kPluginInfoHost_GetPluginInfo_Name = 1860309940;

  function PluginInfoHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PluginInfoHost,
                                                   handleOrPtrInfo);
  }

  function PluginInfoHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PluginInfoHost, associatedInterfacePtrInfo);
  }

  PluginInfoHostAssociatedPtr.prototype =
      Object.create(PluginInfoHostPtr.prototype);
  PluginInfoHostAssociatedPtr.prototype.constructor =
      PluginInfoHostAssociatedPtr;

  function PluginInfoHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  PluginInfoHostPtr.prototype.getPluginInfo = function() {
    return PluginInfoHostProxy.prototype.getPluginInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginInfoHostProxy.prototype.getPluginInfo = function(renderFrameId, url, origin, mimeType) {
    var params_ = new PluginInfoHost_GetPluginInfo_Params();
    params_.renderFrameId = renderFrameId;
    params_.url = url;
    params_.origin = origin;
    params_.mimeType = mimeType;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPluginInfoHost_GetPluginInfo_Name,
          codec.align(PluginInfoHost_GetPluginInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PluginInfoHost_GetPluginInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PluginInfoHost_GetPluginInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function PluginInfoHostStub(delegate) {
    this.delegate_ = delegate;
  }
  PluginInfoHostStub.prototype.getPluginInfo = function(renderFrameId, url, origin, mimeType) {
    return this.delegate_ && this.delegate_.getPluginInfo && this.delegate_.getPluginInfo(renderFrameId, url, origin, mimeType);
  }

  PluginInfoHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  PluginInfoHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginInfoHost_GetPluginInfo_Name:
      var params = reader.decodeStruct(PluginInfoHost_GetPluginInfo_Params);
      this.getPluginInfo(params.renderFrameId, params.url, params.origin, params.mimeType).then(function(response) {
        var responseParams =
            new PluginInfoHost_GetPluginInfo_ResponseParams();
        responseParams.pluginInfo = response.pluginInfo;
        var builder = new codec.MessageV1Builder(
            kPluginInfoHost_GetPluginInfo_Name,
            codec.align(PluginInfoHost_GetPluginInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PluginInfoHost_GetPluginInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePluginInfoHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPluginInfoHost_GetPluginInfo_Name:
        if (message.expectsResponse())
          paramsClass = PluginInfoHost_GetPluginInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePluginInfoHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPluginInfoHost_GetPluginInfo_Name:
        if (message.isResponse())
          paramsClass = PluginInfoHost_GetPluginInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PluginInfoHost = {
    name: 'chrome.mojom.PluginInfoHost',
    kVersion: 0,
    ptrClass: PluginInfoHostPtr,
    proxyClass: PluginInfoHostProxy,
    stubClass: PluginInfoHostStub,
    validateRequest: validatePluginInfoHostRequest,
    validateResponse: validatePluginInfoHostResponse,
    mojomId: 'chrome/common/plugin.mojom',
    fuzzMethods: {
      getPluginInfo: {
        params: PluginInfoHost_GetPluginInfo_Params,
      },
    },
  };
  PluginInfoHostStub.prototype.validator = validatePluginInfoHostRequest;
  PluginInfoHostProxy.prototype.validator = validatePluginInfoHostResponse;
  var kPluginRenderer_FinishedDownloading_Name = 1667731780;
  var kPluginRenderer_UpdateSuccess_Name = 837671496;
  var kPluginRenderer_UpdateFailure_Name = 1006218334;
  var kPluginRenderer_UpdateDownloading_Name = 266822422;

  function PluginRendererPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PluginRenderer,
                                                   handleOrPtrInfo);
  }

  function PluginRendererAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PluginRenderer, associatedInterfacePtrInfo);
  }

  PluginRendererAssociatedPtr.prototype =
      Object.create(PluginRendererPtr.prototype);
  PluginRendererAssociatedPtr.prototype.constructor =
      PluginRendererAssociatedPtr;

  function PluginRendererProxy(receiver) {
    this.receiver_ = receiver;
  }
  PluginRendererPtr.prototype.finishedDownloading = function() {
    return PluginRendererProxy.prototype.finishedDownloading
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginRendererProxy.prototype.finishedDownloading = function() {
    var params_ = new PluginRenderer_FinishedDownloading_Params();
    var builder = new codec.MessageV0Builder(
        kPluginRenderer_FinishedDownloading_Name,
        codec.align(PluginRenderer_FinishedDownloading_Params.encodedSize));
    builder.encodeStruct(PluginRenderer_FinishedDownloading_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginRendererPtr.prototype.updateSuccess = function() {
    return PluginRendererProxy.prototype.updateSuccess
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginRendererProxy.prototype.updateSuccess = function() {
    var params_ = new PluginRenderer_UpdateSuccess_Params();
    var builder = new codec.MessageV0Builder(
        kPluginRenderer_UpdateSuccess_Name,
        codec.align(PluginRenderer_UpdateSuccess_Params.encodedSize));
    builder.encodeStruct(PluginRenderer_UpdateSuccess_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginRendererPtr.prototype.updateFailure = function() {
    return PluginRendererProxy.prototype.updateFailure
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginRendererProxy.prototype.updateFailure = function() {
    var params_ = new PluginRenderer_UpdateFailure_Params();
    var builder = new codec.MessageV0Builder(
        kPluginRenderer_UpdateFailure_Name,
        codec.align(PluginRenderer_UpdateFailure_Params.encodedSize));
    builder.encodeStruct(PluginRenderer_UpdateFailure_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PluginRendererPtr.prototype.updateDownloading = function() {
    return PluginRendererProxy.prototype.updateDownloading
        .apply(this.ptr.getProxy(), arguments);
  };

  PluginRendererProxy.prototype.updateDownloading = function() {
    var params_ = new PluginRenderer_UpdateDownloading_Params();
    var builder = new codec.MessageV0Builder(
        kPluginRenderer_UpdateDownloading_Name,
        codec.align(PluginRenderer_UpdateDownloading_Params.encodedSize));
    builder.encodeStruct(PluginRenderer_UpdateDownloading_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PluginRendererStub(delegate) {
    this.delegate_ = delegate;
  }
  PluginRendererStub.prototype.finishedDownloading = function() {
    return this.delegate_ && this.delegate_.finishedDownloading && this.delegate_.finishedDownloading();
  }
  PluginRendererStub.prototype.updateSuccess = function() {
    return this.delegate_ && this.delegate_.updateSuccess && this.delegate_.updateSuccess();
  }
  PluginRendererStub.prototype.updateFailure = function() {
    return this.delegate_ && this.delegate_.updateFailure && this.delegate_.updateFailure();
  }
  PluginRendererStub.prototype.updateDownloading = function() {
    return this.delegate_ && this.delegate_.updateDownloading && this.delegate_.updateDownloading();
  }

  PluginRendererStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPluginRenderer_FinishedDownloading_Name:
      var params = reader.decodeStruct(PluginRenderer_FinishedDownloading_Params);
      this.finishedDownloading();
      return true;
    case kPluginRenderer_UpdateSuccess_Name:
      var params = reader.decodeStruct(PluginRenderer_UpdateSuccess_Params);
      this.updateSuccess();
      return true;
    case kPluginRenderer_UpdateFailure_Name:
      var params = reader.decodeStruct(PluginRenderer_UpdateFailure_Params);
      this.updateFailure();
      return true;
    case kPluginRenderer_UpdateDownloading_Name:
      var params = reader.decodeStruct(PluginRenderer_UpdateDownloading_Params);
      this.updateDownloading();
      return true;
    default:
      return false;
    }
  };

  PluginRendererStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePluginRendererRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPluginRenderer_FinishedDownloading_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginRenderer_FinishedDownloading_Params;
      break;
      case kPluginRenderer_UpdateSuccess_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginRenderer_UpdateSuccess_Params;
      break;
      case kPluginRenderer_UpdateFailure_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginRenderer_UpdateFailure_Params;
      break;
      case kPluginRenderer_UpdateDownloading_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PluginRenderer_UpdateDownloading_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePluginRendererResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PluginRenderer = {
    name: 'chrome.mojom.PluginRenderer',
    kVersion: 0,
    ptrClass: PluginRendererPtr,
    proxyClass: PluginRendererProxy,
    stubClass: PluginRendererStub,
    validateRequest: validatePluginRendererRequest,
    validateResponse: null,
    mojomId: 'chrome/common/plugin.mojom',
    fuzzMethods: {
      finishedDownloading: {
        params: PluginRenderer_FinishedDownloading_Params,
      },
      updateSuccess: {
        params: PluginRenderer_UpdateSuccess_Params,
      },
      updateFailure: {
        params: PluginRenderer_UpdateFailure_Params,
      },
      updateDownloading: {
        params: PluginRenderer_UpdateDownloading_Params,
      },
    },
  };
  PluginRendererStub.prototype.validator = validatePluginRendererRequest;
  PluginRendererProxy.prototype.validator = null;
  exports.PluginStatus = PluginStatus;
  exports.PluginInfo = PluginInfo;
  exports.PluginParam = PluginParam;
  exports.PluginHost = PluginHost;
  exports.PluginHostPtr = PluginHostPtr;
  exports.PluginHostAssociatedPtr = PluginHostAssociatedPtr;
  exports.PluginAuthHost = PluginAuthHost;
  exports.PluginAuthHostPtr = PluginAuthHostPtr;
  exports.PluginAuthHostAssociatedPtr = PluginAuthHostAssociatedPtr;
  exports.PluginInfoHost = PluginInfoHost;
  exports.PluginInfoHostPtr = PluginInfoHostPtr;
  exports.PluginInfoHostAssociatedPtr = PluginInfoHostAssociatedPtr;
  exports.PluginRenderer = PluginRenderer;
  exports.PluginRendererPtr = PluginRendererPtr;
  exports.PluginRendererAssociatedPtr = PluginRendererAssociatedPtr;
})();