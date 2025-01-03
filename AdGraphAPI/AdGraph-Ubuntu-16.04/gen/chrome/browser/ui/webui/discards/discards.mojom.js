// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/ui/webui/discards/discards.mojom';
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


  var LifecycleUnitVisibility = {};
  LifecycleUnitVisibility.HIDDEN = 0;
  LifecycleUnitVisibility.OCCLUDED = 1;
  LifecycleUnitVisibility.VISIBLE = 2;

  LifecycleUnitVisibility.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  LifecycleUnitVisibility.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function TabDiscardsInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TabDiscardsInfo.prototype.initDefaults_ = function() {
    this.tabUrl = null;
    this.title = null;
    this.visibility = 0;
    this.isMedia = false;
    this.isDiscarded = false;
    this.isFrozen = false;
    this.isAutoDiscardable = false;
    this.hasReactivationScore = false;
    this.discardCount = 0;
    this.utilityRank = 0;
    this.lastActiveSeconds = 0;
    this.id = 0;
    this.reactivationScore = 0;
  };
  TabDiscardsInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TabDiscardsInfo.generate = function(generator_) {
    var generated = new TabDiscardsInfo;
    generated.tabUrl = generator_.generateString(false);
    generated.title = generator_.generateString(false);
    generated.visibility = generator_.generateEnum(0, 2);
    generated.isMedia = generator_.generateBool();
    generated.isDiscarded = generator_.generateBool();
    generated.isFrozen = generator_.generateBool();
    generated.discardCount = generator_.generateInt32();
    generated.utilityRank = generator_.generateInt32();
    generated.lastActiveSeconds = generator_.generateInt32();
    generated.id = generator_.generateInt32();
    generated.isAutoDiscardable = generator_.generateBool();
    generated.hasReactivationScore = generator_.generateBool();
    generated.reactivationScore = generator_.generateDouble();
    return generated;
  };

  TabDiscardsInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tabUrl = mutator_.mutateString(this.tabUrl, false);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    if (mutator_.chooseMutateField()) {
      this.visibility = mutator_.mutateEnum(this.visibility, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.isMedia = mutator_.mutateBool(this.isMedia);
    }
    if (mutator_.chooseMutateField()) {
      this.isDiscarded = mutator_.mutateBool(this.isDiscarded);
    }
    if (mutator_.chooseMutateField()) {
      this.isFrozen = mutator_.mutateBool(this.isFrozen);
    }
    if (mutator_.chooseMutateField()) {
      this.discardCount = mutator_.mutateInt32(this.discardCount);
    }
    if (mutator_.chooseMutateField()) {
      this.utilityRank = mutator_.mutateInt32(this.utilityRank);
    }
    if (mutator_.chooseMutateField()) {
      this.lastActiveSeconds = mutator_.mutateInt32(this.lastActiveSeconds);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.isAutoDiscardable = mutator_.mutateBool(this.isAutoDiscardable);
    }
    if (mutator_.chooseMutateField()) {
      this.hasReactivationScore = mutator_.mutateBool(this.hasReactivationScore);
    }
    if (mutator_.chooseMutateField()) {
      this.reactivationScore = mutator_.mutateDouble(this.reactivationScore);
    }
    return this;
  };
  TabDiscardsInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TabDiscardsInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TabDiscardsInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TabDiscardsInfo.validate = function(messageValidator, offset) {
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


    // validate TabDiscardsInfo.tabUrl
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TabDiscardsInfo.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TabDiscardsInfo.visibility
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, LifecycleUnitVisibility);
    if (err !== validator.validationError.NONE)
        return err;











    return validator.validationError.NONE;
  };

  TabDiscardsInfo.encodedSize = codec.kStructHeaderSize + 48;

  TabDiscardsInfo.decode = function(decoder) {
    var packed;
    var val = new TabDiscardsInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tabUrl = decoder.decodeStruct(codec.String);
    val.title = decoder.decodeStruct(codec.String);
    val.visibility = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isMedia = (packed >> 0) & 1 ? true : false;
    val.isDiscarded = (packed >> 1) & 1 ? true : false;
    val.isFrozen = (packed >> 2) & 1 ? true : false;
    val.isAutoDiscardable = (packed >> 3) & 1 ? true : false;
    val.hasReactivationScore = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.discardCount = decoder.decodeStruct(codec.Int32);
    val.utilityRank = decoder.decodeStruct(codec.Int32);
    val.lastActiveSeconds = decoder.decodeStruct(codec.Int32);
    val.id = decoder.decodeStruct(codec.Int32);
    val.reactivationScore = decoder.decodeStruct(codec.Double);
    return val;
  };

  TabDiscardsInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TabDiscardsInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.tabUrl);
    encoder.encodeStruct(codec.String, val.title);
    encoder.encodeStruct(codec.Int32, val.visibility);
    packed = 0;
    packed |= (val.isMedia & 1) << 0
    packed |= (val.isDiscarded & 1) << 1
    packed |= (val.isFrozen & 1) << 2
    packed |= (val.isAutoDiscardable & 1) << 3
    packed |= (val.hasReactivationScore & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.discardCount);
    encoder.encodeStruct(codec.Int32, val.utilityRank);
    encoder.encodeStruct(codec.Int32, val.lastActiveSeconds);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.encodeStruct(codec.Double, val.reactivationScore);
  };
  function DiscardsDetailsProvider_GetTabDiscardsInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.prototype.initDefaults_ = function() {
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_GetTabDiscardsInfo_Params;
    return generated;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_GetTabDiscardsInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_GetTabDiscardsInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.infos = null;
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams;
    generated.infos = generator_.generateArray(function() {
      return generator_.generateStruct(mojom.TabDiscardsInfo, false);
    });
    return generated;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.infos = mutator_.mutateArray(this.infos, function(val) {
        return mutator_.mutateStruct(mojom.TabDiscardsInfo, false);
      });
    }
    return this;
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.infos
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(TabDiscardsInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.infos = decoder.decodeArrayPointer(new codec.PointerTo(TabDiscardsInfo));
    return val;
  };

  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(TabDiscardsInfo), val.infos);
  };
  function DiscardsDetailsProvider_SetAutoDiscardable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_SetAutoDiscardable_Params.prototype.initDefaults_ = function() {
    this.tabId = 0;
    this.isAutoDiscardable = false;
  };
  DiscardsDetailsProvider_SetAutoDiscardable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_SetAutoDiscardable_Params.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_SetAutoDiscardable_Params;
    generated.tabId = generator_.generateInt32();
    generated.isAutoDiscardable = generator_.generateBool();
    return generated;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.isAutoDiscardable = mutator_.mutateBool(this.isAutoDiscardable);
    }
    return this;
  };
  DiscardsDetailsProvider_SetAutoDiscardable_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_SetAutoDiscardable_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_Params.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_SetAutoDiscardable_Params.encodedSize = codec.kStructHeaderSize + 8;

  DiscardsDetailsProvider_SetAutoDiscardable_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_SetAutoDiscardable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tabId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.isAutoDiscardable = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_SetAutoDiscardable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.tabId);
    packed = 0;
    packed |= (val.isAutoDiscardable & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.prototype.initDefaults_ = function() {
  };
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams;
    return generated;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function DiscardsDetailsProvider_DiscardById_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_DiscardById_Params.prototype.initDefaults_ = function() {
    this.tabId = 0;
    this.urgent = false;
  };
  DiscardsDetailsProvider_DiscardById_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_DiscardById_Params.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_DiscardById_Params;
    generated.tabId = generator_.generateInt32();
    generated.urgent = generator_.generateBool();
    return generated;
  };

  DiscardsDetailsProvider_DiscardById_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    if (mutator_.chooseMutateField()) {
      this.urgent = mutator_.mutateBool(this.urgent);
    }
    return this;
  };
  DiscardsDetailsProvider_DiscardById_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_DiscardById_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_DiscardById_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_DiscardById_Params.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_DiscardById_Params.encodedSize = codec.kStructHeaderSize + 8;

  DiscardsDetailsProvider_DiscardById_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_DiscardById_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tabId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.urgent = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DiscardsDetailsProvider_DiscardById_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_DiscardById_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.tabId);
    packed = 0;
    packed |= (val.urgent & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DiscardsDetailsProvider_DiscardById_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_DiscardById_ResponseParams.prototype.initDefaults_ = function() {
  };
  DiscardsDetailsProvider_DiscardById_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_DiscardById_ResponseParams.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_DiscardById_ResponseParams;
    return generated;
  };

  DiscardsDetailsProvider_DiscardById_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  DiscardsDetailsProvider_DiscardById_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_DiscardById_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_DiscardById_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_DiscardById_ResponseParams.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_DiscardById_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  DiscardsDetailsProvider_DiscardById_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_DiscardById_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DiscardsDetailsProvider_DiscardById_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_DiscardById_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function DiscardsDetailsProvider_FreezeById_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_FreezeById_Params.prototype.initDefaults_ = function() {
    this.tabId = 0;
  };
  DiscardsDetailsProvider_FreezeById_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_FreezeById_Params.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_FreezeById_Params;
    generated.tabId = generator_.generateInt32();
    return generated;
  };

  DiscardsDetailsProvider_FreezeById_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tabId = mutator_.mutateInt32(this.tabId);
    }
    return this;
  };
  DiscardsDetailsProvider_FreezeById_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_FreezeById_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_FreezeById_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_FreezeById_Params.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_FreezeById_Params.encodedSize = codec.kStructHeaderSize + 8;

  DiscardsDetailsProvider_FreezeById_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_FreezeById_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tabId = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DiscardsDetailsProvider_FreezeById_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_FreezeById_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.tabId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DiscardsDetailsProvider_Discard_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_Discard_Params.prototype.initDefaults_ = function() {
    this.urgent = false;
  };
  DiscardsDetailsProvider_Discard_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_Discard_Params.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_Discard_Params;
    generated.urgent = generator_.generateBool();
    return generated;
  };

  DiscardsDetailsProvider_Discard_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urgent = mutator_.mutateBool(this.urgent);
    }
    return this;
  };
  DiscardsDetailsProvider_Discard_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_Discard_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_Discard_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_Discard_Params.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_Discard_Params.encodedSize = codec.kStructHeaderSize + 8;

  DiscardsDetailsProvider_Discard_Params.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_Discard_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.urgent = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DiscardsDetailsProvider_Discard_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_Discard_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.urgent & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function DiscardsDetailsProvider_Discard_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DiscardsDetailsProvider_Discard_ResponseParams.prototype.initDefaults_ = function() {
  };
  DiscardsDetailsProvider_Discard_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DiscardsDetailsProvider_Discard_ResponseParams.generate = function(generator_) {
    var generated = new DiscardsDetailsProvider_Discard_ResponseParams;
    return generated;
  };

  DiscardsDetailsProvider_Discard_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  DiscardsDetailsProvider_Discard_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DiscardsDetailsProvider_Discard_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DiscardsDetailsProvider_Discard_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DiscardsDetailsProvider_Discard_ResponseParams.validate = function(messageValidator, offset) {
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

  DiscardsDetailsProvider_Discard_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  DiscardsDetailsProvider_Discard_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new DiscardsDetailsProvider_Discard_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DiscardsDetailsProvider_Discard_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DiscardsDetailsProvider_Discard_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  var kDiscardsDetailsProvider_GetTabDiscardsInfo_Name = 318349746;
  var kDiscardsDetailsProvider_SetAutoDiscardable_Name = 717333746;
  var kDiscardsDetailsProvider_DiscardById_Name = 735842510;
  var kDiscardsDetailsProvider_FreezeById_Name = 918603491;
  var kDiscardsDetailsProvider_Discard_Name = 937641961;

  function DiscardsDetailsProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DiscardsDetailsProvider,
                                                   handleOrPtrInfo);
  }

  function DiscardsDetailsProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DiscardsDetailsProvider, associatedInterfacePtrInfo);
  }

  DiscardsDetailsProviderAssociatedPtr.prototype =
      Object.create(DiscardsDetailsProviderPtr.prototype);
  DiscardsDetailsProviderAssociatedPtr.prototype.constructor =
      DiscardsDetailsProviderAssociatedPtr;

  function DiscardsDetailsProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  DiscardsDetailsProviderPtr.prototype.getTabDiscardsInfo = function() {
    return DiscardsDetailsProviderProxy.prototype.getTabDiscardsInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardsDetailsProviderProxy.prototype.getTabDiscardsInfo = function() {
    var params_ = new DiscardsDetailsProvider_GetTabDiscardsInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscardsDetailsProvider_GetTabDiscardsInfo_Name,
          codec.align(DiscardsDetailsProvider_GetTabDiscardsInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscardsDetailsProvider_GetTabDiscardsInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DiscardsDetailsProviderPtr.prototype.setAutoDiscardable = function() {
    return DiscardsDetailsProviderProxy.prototype.setAutoDiscardable
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardsDetailsProviderProxy.prototype.setAutoDiscardable = function(tabId, isAutoDiscardable) {
    var params_ = new DiscardsDetailsProvider_SetAutoDiscardable_Params();
    params_.tabId = tabId;
    params_.isAutoDiscardable = isAutoDiscardable;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscardsDetailsProvider_SetAutoDiscardable_Name,
          codec.align(DiscardsDetailsProvider_SetAutoDiscardable_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscardsDetailsProvider_SetAutoDiscardable_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DiscardsDetailsProviderPtr.prototype.discardById = function() {
    return DiscardsDetailsProviderProxy.prototype.discardById
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardsDetailsProviderProxy.prototype.discardById = function(tabId, urgent) {
    var params_ = new DiscardsDetailsProvider_DiscardById_Params();
    params_.tabId = tabId;
    params_.urgent = urgent;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscardsDetailsProvider_DiscardById_Name,
          codec.align(DiscardsDetailsProvider_DiscardById_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscardsDetailsProvider_DiscardById_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscardsDetailsProvider_DiscardById_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  DiscardsDetailsProviderPtr.prototype.freezeById = function() {
    return DiscardsDetailsProviderProxy.prototype.freezeById
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardsDetailsProviderProxy.prototype.freezeById = function(tabId) {
    var params_ = new DiscardsDetailsProvider_FreezeById_Params();
    params_.tabId = tabId;
    var builder = new codec.MessageV0Builder(
        kDiscardsDetailsProvider_FreezeById_Name,
        codec.align(DiscardsDetailsProvider_FreezeById_Params.encodedSize));
    builder.encodeStruct(DiscardsDetailsProvider_FreezeById_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DiscardsDetailsProviderPtr.prototype.discard = function() {
    return DiscardsDetailsProviderProxy.prototype.discard
        .apply(this.ptr.getProxy(), arguments);
  };

  DiscardsDetailsProviderProxy.prototype.discard = function(urgent) {
    var params_ = new DiscardsDetailsProvider_Discard_Params();
    params_.urgent = urgent;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kDiscardsDetailsProvider_Discard_Name,
          codec.align(DiscardsDetailsProvider_Discard_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(DiscardsDetailsProvider_Discard_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(DiscardsDetailsProvider_Discard_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DiscardsDetailsProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  DiscardsDetailsProviderStub.prototype.getTabDiscardsInfo = function() {
    return this.delegate_ && this.delegate_.getTabDiscardsInfo && this.delegate_.getTabDiscardsInfo();
  }
  DiscardsDetailsProviderStub.prototype.setAutoDiscardable = function(tabId, isAutoDiscardable) {
    return this.delegate_ && this.delegate_.setAutoDiscardable && this.delegate_.setAutoDiscardable(tabId, isAutoDiscardable);
  }
  DiscardsDetailsProviderStub.prototype.discardById = function(tabId, urgent) {
    return this.delegate_ && this.delegate_.discardById && this.delegate_.discardById(tabId, urgent);
  }
  DiscardsDetailsProviderStub.prototype.freezeById = function(tabId) {
    return this.delegate_ && this.delegate_.freezeById && this.delegate_.freezeById(tabId);
  }
  DiscardsDetailsProviderStub.prototype.discard = function(urgent) {
    return this.delegate_ && this.delegate_.discard && this.delegate_.discard(urgent);
  }

  DiscardsDetailsProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDiscardsDetailsProvider_FreezeById_Name:
      var params = reader.decodeStruct(DiscardsDetailsProvider_FreezeById_Params);
      this.freezeById(params.tabId);
      return true;
    default:
      return false;
    }
  };

  DiscardsDetailsProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDiscardsDetailsProvider_GetTabDiscardsInfo_Name:
      var params = reader.decodeStruct(DiscardsDetailsProvider_GetTabDiscardsInfo_Params);
      this.getTabDiscardsInfo().then(function(response) {
        var responseParams =
            new DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams();
        responseParams.infos = response.infos;
        var builder = new codec.MessageV1Builder(
            kDiscardsDetailsProvider_GetTabDiscardsInfo_Name,
            codec.align(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDiscardsDetailsProvider_SetAutoDiscardable_Name:
      var params = reader.decodeStruct(DiscardsDetailsProvider_SetAutoDiscardable_Params);
      this.setAutoDiscardable(params.tabId, params.isAutoDiscardable).then(function(response) {
        var responseParams =
            new DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kDiscardsDetailsProvider_SetAutoDiscardable_Name,
            codec.align(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDiscardsDetailsProvider_DiscardById_Name:
      var params = reader.decodeStruct(DiscardsDetailsProvider_DiscardById_Params);
      this.discardById(params.tabId, params.urgent).then(function(response) {
        var responseParams =
            new DiscardsDetailsProvider_DiscardById_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kDiscardsDetailsProvider_DiscardById_Name,
            codec.align(DiscardsDetailsProvider_DiscardById_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscardsDetailsProvider_DiscardById_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kDiscardsDetailsProvider_Discard_Name:
      var params = reader.decodeStruct(DiscardsDetailsProvider_Discard_Params);
      this.discard(params.urgent).then(function(response) {
        var responseParams =
            new DiscardsDetailsProvider_Discard_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kDiscardsDetailsProvider_Discard_Name,
            codec.align(DiscardsDetailsProvider_Discard_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(DiscardsDetailsProvider_Discard_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateDiscardsDetailsProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDiscardsDetailsProvider_GetTabDiscardsInfo_Name:
        if (message.expectsResponse())
          paramsClass = DiscardsDetailsProvider_GetTabDiscardsInfo_Params;
      break;
      case kDiscardsDetailsProvider_SetAutoDiscardable_Name:
        if (message.expectsResponse())
          paramsClass = DiscardsDetailsProvider_SetAutoDiscardable_Params;
      break;
      case kDiscardsDetailsProvider_DiscardById_Name:
        if (message.expectsResponse())
          paramsClass = DiscardsDetailsProvider_DiscardById_Params;
      break;
      case kDiscardsDetailsProvider_FreezeById_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DiscardsDetailsProvider_FreezeById_Params;
      break;
      case kDiscardsDetailsProvider_Discard_Name:
        if (message.expectsResponse())
          paramsClass = DiscardsDetailsProvider_Discard_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDiscardsDetailsProviderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDiscardsDetailsProvider_GetTabDiscardsInfo_Name:
        if (message.isResponse())
          paramsClass = DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams;
        break;
      case kDiscardsDetailsProvider_SetAutoDiscardable_Name:
        if (message.isResponse())
          paramsClass = DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams;
        break;
      case kDiscardsDetailsProvider_DiscardById_Name:
        if (message.isResponse())
          paramsClass = DiscardsDetailsProvider_DiscardById_ResponseParams;
        break;
      case kDiscardsDetailsProvider_Discard_Name:
        if (message.isResponse())
          paramsClass = DiscardsDetailsProvider_Discard_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var DiscardsDetailsProvider = {
    name: 'mojom.DiscardsDetailsProvider',
    kVersion: 0,
    ptrClass: DiscardsDetailsProviderPtr,
    proxyClass: DiscardsDetailsProviderProxy,
    stubClass: DiscardsDetailsProviderStub,
    validateRequest: validateDiscardsDetailsProviderRequest,
    validateResponse: validateDiscardsDetailsProviderResponse,
    mojomId: 'chrome/browser/ui/webui/discards/discards.mojom',
    fuzzMethods: {
      getTabDiscardsInfo: {
        params: DiscardsDetailsProvider_GetTabDiscardsInfo_Params,
      },
      setAutoDiscardable: {
        params: DiscardsDetailsProvider_SetAutoDiscardable_Params,
      },
      discardById: {
        params: DiscardsDetailsProvider_DiscardById_Params,
      },
      freezeById: {
        params: DiscardsDetailsProvider_FreezeById_Params,
      },
      discard: {
        params: DiscardsDetailsProvider_Discard_Params,
      },
    },
  };
  DiscardsDetailsProviderStub.prototype.validator = validateDiscardsDetailsProviderRequest;
  DiscardsDetailsProviderProxy.prototype.validator = validateDiscardsDetailsProviderResponse;
  exports.LifecycleUnitVisibility = LifecycleUnitVisibility;
  exports.TabDiscardsInfo = TabDiscardsInfo;
  exports.DiscardsDetailsProvider = DiscardsDetailsProvider;
  exports.DiscardsDetailsProviderPtr = DiscardsDetailsProviderPtr;
  exports.DiscardsDetailsProviderAssociatedPtr = DiscardsDetailsProviderAssociatedPtr;
})();