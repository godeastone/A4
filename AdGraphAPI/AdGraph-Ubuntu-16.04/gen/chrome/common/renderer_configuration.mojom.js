// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/renderer_configuration.mojom';
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
  var content_settings$ =
      mojo.internal.exposeNamespace('contentSettings.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'components/content_settings/core/common/content_settings.mojom', '../../components/content_settings/core/common/content_settings.mojom.js');
  }



  function RendererConfiguration_SetInitialConfiguration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererConfiguration_SetInitialConfiguration_Params.prototype.initDefaults_ = function() {
    this.isIncognitoProcess = false;
  };
  RendererConfiguration_SetInitialConfiguration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererConfiguration_SetInitialConfiguration_Params.generate = function(generator_) {
    var generated = new RendererConfiguration_SetInitialConfiguration_Params;
    generated.isIncognitoProcess = generator_.generateBool();
    return generated;
  };

  RendererConfiguration_SetInitialConfiguration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isIncognitoProcess = mutator_.mutateBool(this.isIncognitoProcess);
    }
    return this;
  };
  RendererConfiguration_SetInitialConfiguration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererConfiguration_SetInitialConfiguration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererConfiguration_SetInitialConfiguration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererConfiguration_SetInitialConfiguration_Params.validate = function(messageValidator, offset) {
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

  RendererConfiguration_SetInitialConfiguration_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererConfiguration_SetInitialConfiguration_Params.decode = function(decoder) {
    var packed;
    var val = new RendererConfiguration_SetInitialConfiguration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isIncognitoProcess = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererConfiguration_SetInitialConfiguration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererConfiguration_SetInitialConfiguration_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isIncognitoProcess & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererConfiguration_SetContentSettingRules_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererConfiguration_SetContentSettingRules_Params.prototype.initDefaults_ = function() {
    this.rules = null;
  };
  RendererConfiguration_SetContentSettingRules_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererConfiguration_SetContentSettingRules_Params.generate = function(generator_) {
    var generated = new RendererConfiguration_SetContentSettingRules_Params;
    generated.rules = generator_.generateStruct(contentSettings.mojom.RendererContentSettingRules, false);
    return generated;
  };

  RendererConfiguration_SetContentSettingRules_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rules = mutator_.mutateStruct(contentSettings.mojom.RendererContentSettingRules, false);
    }
    return this;
  };
  RendererConfiguration_SetContentSettingRules_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererConfiguration_SetContentSettingRules_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererConfiguration_SetContentSettingRules_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererConfiguration_SetContentSettingRules_Params.validate = function(messageValidator, offset) {
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


    // validate RendererConfiguration_SetContentSettingRules_Params.rules
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, content_settings$.RendererContentSettingRules, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererConfiguration_SetContentSettingRules_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererConfiguration_SetContentSettingRules_Params.decode = function(decoder) {
    var packed;
    var val = new RendererConfiguration_SetContentSettingRules_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rules = decoder.decodeStructPointer(content_settings$.RendererContentSettingRules);
    return val;
  };

  RendererConfiguration_SetContentSettingRules_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererConfiguration_SetContentSettingRules_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(content_settings$.RendererContentSettingRules, val.rules);
  };
  function RendererConfiguration_SetFieldTrialGroup_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererConfiguration_SetFieldTrialGroup_Params.prototype.initDefaults_ = function() {
    this.trialName = null;
    this.groupName = null;
  };
  RendererConfiguration_SetFieldTrialGroup_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererConfiguration_SetFieldTrialGroup_Params.generate = function(generator_) {
    var generated = new RendererConfiguration_SetFieldTrialGroup_Params;
    generated.trialName = generator_.generateString(false);
    generated.groupName = generator_.generateString(false);
    return generated;
  };

  RendererConfiguration_SetFieldTrialGroup_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.trialName = mutator_.mutateString(this.trialName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.groupName = mutator_.mutateString(this.groupName, false);
    }
    return this;
  };
  RendererConfiguration_SetFieldTrialGroup_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererConfiguration_SetFieldTrialGroup_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererConfiguration_SetFieldTrialGroup_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererConfiguration_SetFieldTrialGroup_Params.validate = function(messageValidator, offset) {
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


    // validate RendererConfiguration_SetFieldTrialGroup_Params.trialName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate RendererConfiguration_SetFieldTrialGroup_Params.groupName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererConfiguration_SetFieldTrialGroup_Params.encodedSize = codec.kStructHeaderSize + 16;

  RendererConfiguration_SetFieldTrialGroup_Params.decode = function(decoder) {
    var packed;
    var val = new RendererConfiguration_SetFieldTrialGroup_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.trialName = decoder.decodeStruct(codec.String);
    val.groupName = decoder.decodeStruct(codec.String);
    return val;
  };

  RendererConfiguration_SetFieldTrialGroup_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererConfiguration_SetFieldTrialGroup_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.trialName);
    encoder.encodeStruct(codec.String, val.groupName);
  };
  var kRendererConfiguration_SetInitialConfiguration_Name = 452759151;
  var kRendererConfiguration_SetContentSettingRules_Name = 182976921;
  var kRendererConfiguration_SetFieldTrialGroup_Name = 1379129538;

  function RendererConfigurationPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RendererConfiguration,
                                                   handleOrPtrInfo);
  }

  function RendererConfigurationAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RendererConfiguration, associatedInterfacePtrInfo);
  }

  RendererConfigurationAssociatedPtr.prototype =
      Object.create(RendererConfigurationPtr.prototype);
  RendererConfigurationAssociatedPtr.prototype.constructor =
      RendererConfigurationAssociatedPtr;

  function RendererConfigurationProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererConfigurationPtr.prototype.setInitialConfiguration = function() {
    return RendererConfigurationProxy.prototype.setInitialConfiguration
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererConfigurationProxy.prototype.setInitialConfiguration = function(isIncognitoProcess) {
    var params_ = new RendererConfiguration_SetInitialConfiguration_Params();
    params_.isIncognitoProcess = isIncognitoProcess;
    var builder = new codec.MessageV0Builder(
        kRendererConfiguration_SetInitialConfiguration_Name,
        codec.align(RendererConfiguration_SetInitialConfiguration_Params.encodedSize));
    builder.encodeStruct(RendererConfiguration_SetInitialConfiguration_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererConfigurationPtr.prototype.setContentSettingRules = function() {
    return RendererConfigurationProxy.prototype.setContentSettingRules
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererConfigurationProxy.prototype.setContentSettingRules = function(rules) {
    var params_ = new RendererConfiguration_SetContentSettingRules_Params();
    params_.rules = rules;
    var builder = new codec.MessageV0Builder(
        kRendererConfiguration_SetContentSettingRules_Name,
        codec.align(RendererConfiguration_SetContentSettingRules_Params.encodedSize));
    builder.encodeStruct(RendererConfiguration_SetContentSettingRules_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererConfigurationPtr.prototype.setFieldTrialGroup = function() {
    return RendererConfigurationProxy.prototype.setFieldTrialGroup
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererConfigurationProxy.prototype.setFieldTrialGroup = function(trialName, groupName) {
    var params_ = new RendererConfiguration_SetFieldTrialGroup_Params();
    params_.trialName = trialName;
    params_.groupName = groupName;
    var builder = new codec.MessageV0Builder(
        kRendererConfiguration_SetFieldTrialGroup_Name,
        codec.align(RendererConfiguration_SetFieldTrialGroup_Params.encodedSize));
    builder.encodeStruct(RendererConfiguration_SetFieldTrialGroup_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererConfigurationStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererConfigurationStub.prototype.setInitialConfiguration = function(isIncognitoProcess) {
    return this.delegate_ && this.delegate_.setInitialConfiguration && this.delegate_.setInitialConfiguration(isIncognitoProcess);
  }
  RendererConfigurationStub.prototype.setContentSettingRules = function(rules) {
    return this.delegate_ && this.delegate_.setContentSettingRules && this.delegate_.setContentSettingRules(rules);
  }
  RendererConfigurationStub.prototype.setFieldTrialGroup = function(trialName, groupName) {
    return this.delegate_ && this.delegate_.setFieldTrialGroup && this.delegate_.setFieldTrialGroup(trialName, groupName);
  }

  RendererConfigurationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererConfiguration_SetInitialConfiguration_Name:
      var params = reader.decodeStruct(RendererConfiguration_SetInitialConfiguration_Params);
      this.setInitialConfiguration(params.isIncognitoProcess);
      return true;
    case kRendererConfiguration_SetContentSettingRules_Name:
      var params = reader.decodeStruct(RendererConfiguration_SetContentSettingRules_Params);
      this.setContentSettingRules(params.rules);
      return true;
    case kRendererConfiguration_SetFieldTrialGroup_Name:
      var params = reader.decodeStruct(RendererConfiguration_SetFieldTrialGroup_Params);
      this.setFieldTrialGroup(params.trialName, params.groupName);
      return true;
    default:
      return false;
    }
  };

  RendererConfigurationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRendererConfigurationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererConfiguration_SetInitialConfiguration_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererConfiguration_SetInitialConfiguration_Params;
      break;
      case kRendererConfiguration_SetContentSettingRules_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererConfiguration_SetContentSettingRules_Params;
      break;
      case kRendererConfiguration_SetFieldTrialGroup_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererConfiguration_SetFieldTrialGroup_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererConfigurationResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var RendererConfiguration = {
    name: 'chrome.mojom.RendererConfiguration',
    kVersion: 0,
    ptrClass: RendererConfigurationPtr,
    proxyClass: RendererConfigurationProxy,
    stubClass: RendererConfigurationStub,
    validateRequest: validateRendererConfigurationRequest,
    validateResponse: null,
    mojomId: 'chrome/common/renderer_configuration.mojom',
    fuzzMethods: {
      setInitialConfiguration: {
        params: RendererConfiguration_SetInitialConfiguration_Params,
      },
      setContentSettingRules: {
        params: RendererConfiguration_SetContentSettingRules_Params,
      },
      setFieldTrialGroup: {
        params: RendererConfiguration_SetFieldTrialGroup_Params,
      },
    },
  };
  RendererConfigurationStub.prototype.validator = validateRendererConfigurationRequest;
  RendererConfigurationProxy.prototype.validator = null;
  exports.RendererConfiguration = RendererConfiguration;
  exports.RendererConfigurationPtr = RendererConfigurationPtr;
  exports.RendererConfigurationAssociatedPtr = RendererConfigurationAssociatedPtr;
})();