// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/extensions/mojom/inline_install.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('extensions.mojom');


  var WebstoreInstallResult = {};

  WebstoreInstallResult.isKnownEnumValue = function(value) {
    return false;
  };

  WebstoreInstallResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var WebstoreInstallStage = {};

  WebstoreInstallStage.isKnownEnumValue = function(value) {
    return false;
  };

  WebstoreInstallStage.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function InlineInstallProgressListener_InlineInstallStageChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InlineInstallProgressListener_InlineInstallStageChanged_Params.prototype.initDefaults_ = function() {
    this.stage = 0;
  };
  InlineInstallProgressListener_InlineInstallStageChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InlineInstallProgressListener_InlineInstallStageChanged_Params.generate = function(generator_) {
    var generated = new InlineInstallProgressListener_InlineInstallStageChanged_Params;
    generated.stage = generator_.generateEnum();
    return generated;
  };

  InlineInstallProgressListener_InlineInstallStageChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stage = mutator_.mutateEnum(this.stage);
    }
    return this;
  };
  InlineInstallProgressListener_InlineInstallStageChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InlineInstallProgressListener_InlineInstallStageChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InlineInstallProgressListener_InlineInstallStageChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InlineInstallProgressListener_InlineInstallStageChanged_Params.validate = function(messageValidator, offset) {
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


    // validate InlineInstallProgressListener_InlineInstallStageChanged_Params.stage
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, WebstoreInstallStage);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InlineInstallProgressListener_InlineInstallStageChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  InlineInstallProgressListener_InlineInstallStageChanged_Params.decode = function(decoder) {
    var packed;
    var val = new InlineInstallProgressListener_InlineInstallStageChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stage = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InlineInstallProgressListener_InlineInstallStageChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InlineInstallProgressListener_InlineInstallStageChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.stage);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InlineInstallProgressListener_InlineInstallDownloadProgress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.prototype.initDefaults_ = function() {
    this.percentDownloaded = 0;
  };
  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.generate = function(generator_) {
    var generated = new InlineInstallProgressListener_InlineInstallDownloadProgress_Params;
    generated.percentDownloaded = generator_.generateInt32();
    return generated;
  };

  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.percentDownloaded = mutator_.mutateInt32(this.percentDownloaded);
    }
    return this;
  };
  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.validate = function(messageValidator, offset) {
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

  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.encodedSize = codec.kStructHeaderSize + 8;

  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.decode = function(decoder) {
    var packed;
    var val = new InlineInstallProgressListener_InlineInstallDownloadProgress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.percentDownloaded = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InlineInstallProgressListener_InlineInstallDownloadProgress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InlineInstallProgressListener_InlineInstallDownloadProgress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.percentDownloaded);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InlineInstaller_DoInlineInstall_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InlineInstaller_DoInlineInstall_Params.prototype.initDefaults_ = function() {
    this.webstoreItemId = null;
    this.listenersMask = 0;
    this.installProgressListener = new InlineInstallProgressListenerPtr();
  };
  InlineInstaller_DoInlineInstall_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InlineInstaller_DoInlineInstall_Params.generate = function(generator_) {
    var generated = new InlineInstaller_DoInlineInstall_Params;
    generated.webstoreItemId = generator_.generateString(false);
    generated.listenersMask = generator_.generateInt32();
    generated.installProgressListener = generator_.generateInterface("extensions.mojom.InlineInstallProgressListener", false);
    return generated;
  };

  InlineInstaller_DoInlineInstall_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.webstoreItemId = mutator_.mutateString(this.webstoreItemId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.listenersMask = mutator_.mutateInt32(this.listenersMask);
    }
    if (mutator_.chooseMutateField()) {
      this.installProgressListener = mutator_.mutateInterface(this.installProgressListener, "extensions.mojom.InlineInstallProgressListener", false);
    }
    return this;
  };
  InlineInstaller_DoInlineInstall_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.installProgressListener !== null) {
      Array.prototype.push.apply(handles, ["extensions.mojom.InlineInstallProgressListenerPtr"]);
    }
    return handles;
  };

  InlineInstaller_DoInlineInstall_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InlineInstaller_DoInlineInstall_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.installProgressListener = handles[idx++];;
    return idx;
  };

  InlineInstaller_DoInlineInstall_Params.validate = function(messageValidator, offset) {
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


    // validate InlineInstaller_DoInlineInstall_Params.webstoreItemId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate InlineInstaller_DoInlineInstall_Params.installProgressListener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InlineInstaller_DoInlineInstall_Params.encodedSize = codec.kStructHeaderSize + 24;

  InlineInstaller_DoInlineInstall_Params.decode = function(decoder) {
    var packed;
    var val = new InlineInstaller_DoInlineInstall_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.webstoreItemId = decoder.decodeStruct(codec.String);
    val.listenersMask = decoder.decodeStruct(codec.Int32);
    val.installProgressListener = decoder.decodeStruct(new codec.Interface(InlineInstallProgressListenerPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  InlineInstaller_DoInlineInstall_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InlineInstaller_DoInlineInstall_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.webstoreItemId);
    encoder.encodeStruct(codec.Int32, val.listenersMask);
    encoder.encodeStruct(new codec.Interface(InlineInstallProgressListenerPtr), val.installProgressListener);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function InlineInstaller_DoInlineInstall_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InlineInstaller_DoInlineInstall_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.result = 0;
    this.error = null;
  };
  InlineInstaller_DoInlineInstall_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InlineInstaller_DoInlineInstall_ResponseParams.generate = function(generator_) {
    var generated = new InlineInstaller_DoInlineInstall_ResponseParams;
    generated.success = generator_.generateBool();
    generated.error = generator_.generateString(false);
    generated.result = generator_.generateEnum();
    return generated;
  };

  InlineInstaller_DoInlineInstall_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateString(this.error, false);
    }
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result);
    }
    return this;
  };
  InlineInstaller_DoInlineInstall_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InlineInstaller_DoInlineInstall_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InlineInstaller_DoInlineInstall_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InlineInstaller_DoInlineInstall_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate InlineInstaller_DoInlineInstall_ResponseParams.error
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate InlineInstaller_DoInlineInstall_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, WebstoreInstallResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InlineInstaller_DoInlineInstall_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  InlineInstaller_DoInlineInstall_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InlineInstaller_DoInlineInstall_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.result = decoder.decodeStruct(codec.Int32);
    val.error = decoder.decodeStruct(codec.String);
    return val;
  };

  InlineInstaller_DoInlineInstall_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InlineInstaller_DoInlineInstall_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.encodeStruct(codec.String, val.error);
  };
  var kInlineInstallProgressListener_InlineInstallStageChanged_Name = 594161984;
  var kInlineInstallProgressListener_InlineInstallDownloadProgress_Name = 203897324;

  function InlineInstallProgressListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InlineInstallProgressListener,
                                                   handleOrPtrInfo);
  }

  function InlineInstallProgressListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InlineInstallProgressListener, associatedInterfacePtrInfo);
  }

  InlineInstallProgressListenerAssociatedPtr.prototype =
      Object.create(InlineInstallProgressListenerPtr.prototype);
  InlineInstallProgressListenerAssociatedPtr.prototype.constructor =
      InlineInstallProgressListenerAssociatedPtr;

  function InlineInstallProgressListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  InlineInstallProgressListenerPtr.prototype.inlineInstallStageChanged = function() {
    return InlineInstallProgressListenerProxy.prototype.inlineInstallStageChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  InlineInstallProgressListenerProxy.prototype.inlineInstallStageChanged = function(stage) {
    var params_ = new InlineInstallProgressListener_InlineInstallStageChanged_Params();
    params_.stage = stage;
    var builder = new codec.MessageV0Builder(
        kInlineInstallProgressListener_InlineInstallStageChanged_Name,
        codec.align(InlineInstallProgressListener_InlineInstallStageChanged_Params.encodedSize));
    builder.encodeStruct(InlineInstallProgressListener_InlineInstallStageChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InlineInstallProgressListenerPtr.prototype.inlineInstallDownloadProgress = function() {
    return InlineInstallProgressListenerProxy.prototype.inlineInstallDownloadProgress
        .apply(this.ptr.getProxy(), arguments);
  };

  InlineInstallProgressListenerProxy.prototype.inlineInstallDownloadProgress = function(percentDownloaded) {
    var params_ = new InlineInstallProgressListener_InlineInstallDownloadProgress_Params();
    params_.percentDownloaded = percentDownloaded;
    var builder = new codec.MessageV0Builder(
        kInlineInstallProgressListener_InlineInstallDownloadProgress_Name,
        codec.align(InlineInstallProgressListener_InlineInstallDownloadProgress_Params.encodedSize));
    builder.encodeStruct(InlineInstallProgressListener_InlineInstallDownloadProgress_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InlineInstallProgressListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  InlineInstallProgressListenerStub.prototype.inlineInstallStageChanged = function(stage) {
    return this.delegate_ && this.delegate_.inlineInstallStageChanged && this.delegate_.inlineInstallStageChanged(stage);
  }
  InlineInstallProgressListenerStub.prototype.inlineInstallDownloadProgress = function(percentDownloaded) {
    return this.delegate_ && this.delegate_.inlineInstallDownloadProgress && this.delegate_.inlineInstallDownloadProgress(percentDownloaded);
  }

  InlineInstallProgressListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInlineInstallProgressListener_InlineInstallStageChanged_Name:
      var params = reader.decodeStruct(InlineInstallProgressListener_InlineInstallStageChanged_Params);
      this.inlineInstallStageChanged(params.stage);
      return true;
    case kInlineInstallProgressListener_InlineInstallDownloadProgress_Name:
      var params = reader.decodeStruct(InlineInstallProgressListener_InlineInstallDownloadProgress_Params);
      this.inlineInstallDownloadProgress(params.percentDownloaded);
      return true;
    default:
      return false;
    }
  };

  InlineInstallProgressListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInlineInstallProgressListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInlineInstallProgressListener_InlineInstallStageChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InlineInstallProgressListener_InlineInstallStageChanged_Params;
      break;
      case kInlineInstallProgressListener_InlineInstallDownloadProgress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InlineInstallProgressListener_InlineInstallDownloadProgress_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInlineInstallProgressListenerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InlineInstallProgressListener = {
    name: 'extensions.mojom.InlineInstallProgressListener',
    kVersion: 0,
    ptrClass: InlineInstallProgressListenerPtr,
    proxyClass: InlineInstallProgressListenerProxy,
    stubClass: InlineInstallProgressListenerStub,
    validateRequest: validateInlineInstallProgressListenerRequest,
    validateResponse: null,
    mojomId: 'chrome/common/extensions/mojom/inline_install.mojom',
    fuzzMethods: {
      inlineInstallStageChanged: {
        params: InlineInstallProgressListener_InlineInstallStageChanged_Params,
      },
      inlineInstallDownloadProgress: {
        params: InlineInstallProgressListener_InlineInstallDownloadProgress_Params,
      },
    },
  };
  InlineInstallProgressListenerStub.prototype.validator = validateInlineInstallProgressListenerRequest;
  InlineInstallProgressListenerProxy.prototype.validator = null;
  var kInlineInstaller_DoInlineInstall_Name = 1841070803;

  function InlineInstallerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InlineInstaller,
                                                   handleOrPtrInfo);
  }

  function InlineInstallerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InlineInstaller, associatedInterfacePtrInfo);
  }

  InlineInstallerAssociatedPtr.prototype =
      Object.create(InlineInstallerPtr.prototype);
  InlineInstallerAssociatedPtr.prototype.constructor =
      InlineInstallerAssociatedPtr;

  function InlineInstallerProxy(receiver) {
    this.receiver_ = receiver;
  }
  InlineInstallerPtr.prototype.doInlineInstall = function() {
    return InlineInstallerProxy.prototype.doInlineInstall
        .apply(this.ptr.getProxy(), arguments);
  };

  InlineInstallerProxy.prototype.doInlineInstall = function(webstoreItemId, listenersMask, installProgressListener) {
    var params_ = new InlineInstaller_DoInlineInstall_Params();
    params_.webstoreItemId = webstoreItemId;
    params_.listenersMask = listenersMask;
    params_.installProgressListener = installProgressListener;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInlineInstaller_DoInlineInstall_Name,
          codec.align(InlineInstaller_DoInlineInstall_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InlineInstaller_DoInlineInstall_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InlineInstaller_DoInlineInstall_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function InlineInstallerStub(delegate) {
    this.delegate_ = delegate;
  }
  InlineInstallerStub.prototype.doInlineInstall = function(webstoreItemId, listenersMask, installProgressListener) {
    return this.delegate_ && this.delegate_.doInlineInstall && this.delegate_.doInlineInstall(webstoreItemId, listenersMask, installProgressListener);
  }

  InlineInstallerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  InlineInstallerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInlineInstaller_DoInlineInstall_Name:
      var params = reader.decodeStruct(InlineInstaller_DoInlineInstall_Params);
      this.doInlineInstall(params.webstoreItemId, params.listenersMask, params.installProgressListener).then(function(response) {
        var responseParams =
            new InlineInstaller_DoInlineInstall_ResponseParams();
        responseParams.success = response.success;
        responseParams.error = response.error;
        responseParams.result = response.result;
        var builder = new codec.MessageV1Builder(
            kInlineInstaller_DoInlineInstall_Name,
            codec.align(InlineInstaller_DoInlineInstall_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InlineInstaller_DoInlineInstall_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateInlineInstallerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInlineInstaller_DoInlineInstall_Name:
        if (message.expectsResponse())
          paramsClass = InlineInstaller_DoInlineInstall_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInlineInstallerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kInlineInstaller_DoInlineInstall_Name:
        if (message.isResponse())
          paramsClass = InlineInstaller_DoInlineInstall_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var InlineInstaller = {
    name: 'extensions.mojom.InlineInstaller',
    kVersion: 0,
    ptrClass: InlineInstallerPtr,
    proxyClass: InlineInstallerProxy,
    stubClass: InlineInstallerStub,
    validateRequest: validateInlineInstallerRequest,
    validateResponse: validateInlineInstallerResponse,
    mojomId: 'chrome/common/extensions/mojom/inline_install.mojom',
    fuzzMethods: {
      doInlineInstall: {
        params: InlineInstaller_DoInlineInstall_Params,
      },
    },
  };
  InlineInstallerStub.prototype.validator = validateInlineInstallerRequest;
  InlineInstallerProxy.prototype.validator = validateInlineInstallerResponse;
  exports.WebstoreInstallResult = WebstoreInstallResult;
  exports.WebstoreInstallStage = WebstoreInstallStage;
  exports.InlineInstallProgressListener = InlineInstallProgressListener;
  exports.InlineInstallProgressListenerPtr = InlineInstallProgressListenerPtr;
  exports.InlineInstallProgressListenerAssociatedPtr = InlineInstallProgressListenerAssociatedPtr;
  exports.InlineInstaller = InlineInstaller;
  exports.InlineInstallerPtr = InlineInstallerPtr;
  exports.InlineInstallerAssociatedPtr = InlineInstallerAssociatedPtr;
})();