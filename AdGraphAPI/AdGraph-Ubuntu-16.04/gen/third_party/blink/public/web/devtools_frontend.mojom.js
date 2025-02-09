// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/web/devtools_frontend.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');



  function DevToolsFrontend_SetupDevToolsFrontend_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsFrontend_SetupDevToolsFrontend_Params.prototype.initDefaults_ = function() {
    this.apiScript = null;
    this.host = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  DevToolsFrontend_SetupDevToolsFrontend_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsFrontend_SetupDevToolsFrontend_Params.generate = function(generator_) {
    var generated = new DevToolsFrontend_SetupDevToolsFrontend_Params;
    generated.apiScript = generator_.generateString(false);
    generated.host = generator_.generateAssociatedInterface("blink.mojom.DevToolsFrontendHost", false);
    return generated;
  };

  DevToolsFrontend_SetupDevToolsFrontend_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.apiScript = mutator_.mutateString(this.apiScript, false);
    }
    if (mutator_.chooseMutateField()) {
      this.host = mutator_.mutateAssociatedInterface(this.host, "blink.mojom.DevToolsFrontendHost", false);
    }
    return this;
  };
  DevToolsFrontend_SetupDevToolsFrontend_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.host !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.DevToolsFrontendHostAssociatedPtr"]);
    }
    return handles;
  };

  DevToolsFrontend_SetupDevToolsFrontend_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsFrontend_SetupDevToolsFrontend_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.host = handles[idx++];;
    return idx;
  };

  DevToolsFrontend_SetupDevToolsFrontend_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsFrontend_SetupDevToolsFrontend_Params.apiScript
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate DevToolsFrontend_SetupDevToolsFrontend_Params.host
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsFrontend_SetupDevToolsFrontend_Params.encodedSize = codec.kStructHeaderSize + 16;

  DevToolsFrontend_SetupDevToolsFrontend_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsFrontend_SetupDevToolsFrontend_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.apiScript = decoder.decodeStruct(codec.String);
    val.host = decoder.decodeStruct(codec.AssociatedInterfacePtrInfo);
    return val;
  };

  DevToolsFrontend_SetupDevToolsFrontend_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsFrontend_SetupDevToolsFrontend_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.apiScript);
    encoder.encodeStruct(codec.AssociatedInterfacePtrInfo, val.host);
  };
  function DevToolsFrontend_SetupDevToolsExtensionAPI_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.prototype.initDefaults_ = function() {
    this.extensionApi = null;
  };
  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.generate = function(generator_) {
    var generated = new DevToolsFrontend_SetupDevToolsExtensionAPI_Params;
    generated.extensionApi = generator_.generateString(false);
    return generated;
  };

  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.extensionApi = mutator_.mutateString(this.extensionApi, false);
    }
    return this;
  };
  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsFrontend_SetupDevToolsExtensionAPI_Params.extensionApi
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.encodedSize = codec.kStructHeaderSize + 8;

  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsFrontend_SetupDevToolsExtensionAPI_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.extensionApi = decoder.decodeStruct(codec.String);
    return val;
  };

  DevToolsFrontend_SetupDevToolsExtensionAPI_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsFrontend_SetupDevToolsExtensionAPI_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.extensionApi);
  };
  function DevToolsFrontendHost_DispatchEmbedderMessage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DevToolsFrontendHost_DispatchEmbedderMessage_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  DevToolsFrontendHost_DispatchEmbedderMessage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DevToolsFrontendHost_DispatchEmbedderMessage_Params.generate = function(generator_) {
    var generated = new DevToolsFrontendHost_DispatchEmbedderMessage_Params;
    generated.message = generator_.generateString(false);
    return generated;
  };

  DevToolsFrontendHost_DispatchEmbedderMessage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    return this;
  };
  DevToolsFrontendHost_DispatchEmbedderMessage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DevToolsFrontendHost_DispatchEmbedderMessage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DevToolsFrontendHost_DispatchEmbedderMessage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DevToolsFrontendHost_DispatchEmbedderMessage_Params.validate = function(messageValidator, offset) {
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


    // validate DevToolsFrontendHost_DispatchEmbedderMessage_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DevToolsFrontendHost_DispatchEmbedderMessage_Params.encodedSize = codec.kStructHeaderSize + 8;

  DevToolsFrontendHost_DispatchEmbedderMessage_Params.decode = function(decoder) {
    var packed;
    var val = new DevToolsFrontendHost_DispatchEmbedderMessage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  DevToolsFrontendHost_DispatchEmbedderMessage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DevToolsFrontendHost_DispatchEmbedderMessage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
  };
  var kDevToolsFrontend_SetupDevToolsFrontend_Name = 1302922168;
  var kDevToolsFrontend_SetupDevToolsExtensionAPI_Name = 1993867089;

  function DevToolsFrontendPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DevToolsFrontend,
                                                   handleOrPtrInfo);
  }

  function DevToolsFrontendAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DevToolsFrontend, associatedInterfacePtrInfo);
  }

  DevToolsFrontendAssociatedPtr.prototype =
      Object.create(DevToolsFrontendPtr.prototype);
  DevToolsFrontendAssociatedPtr.prototype.constructor =
      DevToolsFrontendAssociatedPtr;

  function DevToolsFrontendProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevToolsFrontendPtr.prototype.setupDevToolsFrontend = function() {
    return DevToolsFrontendProxy.prototype.setupDevToolsFrontend
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsFrontendProxy.prototype.setupDevToolsFrontend = function(apiScript, host) {
    var params_ = new DevToolsFrontend_SetupDevToolsFrontend_Params();
    params_.apiScript = apiScript;
    params_.host = host;
    var builder = new codec.MessageV2Builder(
        kDevToolsFrontend_SetupDevToolsFrontend_Name,
        codec.align(DevToolsFrontend_SetupDevToolsFrontend_Params.encodedSize));
    builder.setPayload(DevToolsFrontend_SetupDevToolsFrontend_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  DevToolsFrontendPtr.prototype.setupDevToolsExtensionAPI = function() {
    return DevToolsFrontendProxy.prototype.setupDevToolsExtensionAPI
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsFrontendProxy.prototype.setupDevToolsExtensionAPI = function(extensionApi) {
    var params_ = new DevToolsFrontend_SetupDevToolsExtensionAPI_Params();
    params_.extensionApi = extensionApi;
    var builder = new codec.MessageV0Builder(
        kDevToolsFrontend_SetupDevToolsExtensionAPI_Name,
        codec.align(DevToolsFrontend_SetupDevToolsExtensionAPI_Params.encodedSize));
    builder.encodeStruct(DevToolsFrontend_SetupDevToolsExtensionAPI_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DevToolsFrontendStub(delegate) {
    this.delegate_ = delegate;
  }
  DevToolsFrontendStub.prototype.setupDevToolsFrontend = function(apiScript, host) {
    return this.delegate_ && this.delegate_.setupDevToolsFrontend && this.delegate_.setupDevToolsFrontend(apiScript, host);
  }
  DevToolsFrontendStub.prototype.setupDevToolsExtensionAPI = function(extensionApi) {
    return this.delegate_ && this.delegate_.setupDevToolsExtensionAPI && this.delegate_.setupDevToolsExtensionAPI(extensionApi);
  }

  DevToolsFrontendStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevToolsFrontend_SetupDevToolsFrontend_Name:
      var params = reader.decodeStruct(DevToolsFrontend_SetupDevToolsFrontend_Params);
      this.setupDevToolsFrontend(params.apiScript, params.host);
      return true;
    case kDevToolsFrontend_SetupDevToolsExtensionAPI_Name:
      var params = reader.decodeStruct(DevToolsFrontend_SetupDevToolsExtensionAPI_Params);
      this.setupDevToolsExtensionAPI(params.extensionApi);
      return true;
    default:
      return false;
    }
  };

  DevToolsFrontendStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDevToolsFrontendRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevToolsFrontend_SetupDevToolsFrontend_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsFrontend_SetupDevToolsFrontend_Params;
      break;
      case kDevToolsFrontend_SetupDevToolsExtensionAPI_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsFrontend_SetupDevToolsExtensionAPI_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDevToolsFrontendResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DevToolsFrontend = {
    name: 'blink.mojom.DevToolsFrontend',
    kVersion: 0,
    ptrClass: DevToolsFrontendPtr,
    proxyClass: DevToolsFrontendProxy,
    stubClass: DevToolsFrontendStub,
    validateRequest: validateDevToolsFrontendRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/web/devtools_frontend.mojom',
    fuzzMethods: {
      setupDevToolsFrontend: {
        params: DevToolsFrontend_SetupDevToolsFrontend_Params,
      },
      setupDevToolsExtensionAPI: {
        params: DevToolsFrontend_SetupDevToolsExtensionAPI_Params,
      },
    },
  };
  DevToolsFrontendStub.prototype.validator = validateDevToolsFrontendRequest;
  DevToolsFrontendProxy.prototype.validator = null;
  var kDevToolsFrontendHost_DispatchEmbedderMessage_Name = 1993185640;

  function DevToolsFrontendHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(DevToolsFrontendHost,
                                                   handleOrPtrInfo);
  }

  function DevToolsFrontendHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        DevToolsFrontendHost, associatedInterfacePtrInfo);
  }

  DevToolsFrontendHostAssociatedPtr.prototype =
      Object.create(DevToolsFrontendHostPtr.prototype);
  DevToolsFrontendHostAssociatedPtr.prototype.constructor =
      DevToolsFrontendHostAssociatedPtr;

  function DevToolsFrontendHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  DevToolsFrontendHostPtr.prototype.dispatchEmbedderMessage = function() {
    return DevToolsFrontendHostProxy.prototype.dispatchEmbedderMessage
        .apply(this.ptr.getProxy(), arguments);
  };

  DevToolsFrontendHostProxy.prototype.dispatchEmbedderMessage = function(message) {
    var params_ = new DevToolsFrontendHost_DispatchEmbedderMessage_Params();
    params_.message = message;
    var builder = new codec.MessageV0Builder(
        kDevToolsFrontendHost_DispatchEmbedderMessage_Name,
        codec.align(DevToolsFrontendHost_DispatchEmbedderMessage_Params.encodedSize));
    builder.encodeStruct(DevToolsFrontendHost_DispatchEmbedderMessage_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DevToolsFrontendHostStub(delegate) {
    this.delegate_ = delegate;
  }
  DevToolsFrontendHostStub.prototype.dispatchEmbedderMessage = function(message) {
    return this.delegate_ && this.delegate_.dispatchEmbedderMessage && this.delegate_.dispatchEmbedderMessage(message);
  }

  DevToolsFrontendHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDevToolsFrontendHost_DispatchEmbedderMessage_Name:
      var params = reader.decodeStruct(DevToolsFrontendHost_DispatchEmbedderMessage_Params);
      this.dispatchEmbedderMessage(params.message);
      return true;
    default:
      return false;
    }
  };

  DevToolsFrontendHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateDevToolsFrontendHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDevToolsFrontendHost_DispatchEmbedderMessage_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DevToolsFrontendHost_DispatchEmbedderMessage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDevToolsFrontendHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DevToolsFrontendHost = {
    name: 'blink.mojom.DevToolsFrontendHost',
    kVersion: 0,
    ptrClass: DevToolsFrontendHostPtr,
    proxyClass: DevToolsFrontendHostProxy,
    stubClass: DevToolsFrontendHostStub,
    validateRequest: validateDevToolsFrontendHostRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/web/devtools_frontend.mojom',
    fuzzMethods: {
      dispatchEmbedderMessage: {
        params: DevToolsFrontendHost_DispatchEmbedderMessage_Params,
      },
    },
  };
  DevToolsFrontendHostStub.prototype.validator = validateDevToolsFrontendHostRequest;
  DevToolsFrontendHostProxy.prototype.validator = null;
  exports.DevToolsFrontend = DevToolsFrontend;
  exports.DevToolsFrontendPtr = DevToolsFrontendPtr;
  exports.DevToolsFrontendAssociatedPtr = DevToolsFrontendAssociatedPtr;
  exports.DevToolsFrontendHost = DevToolsFrontendHost;
  exports.DevToolsFrontendHostPtr = DevToolsFrontendHostPtr;
  exports.DevToolsFrontendHostAssociatedPtr = DevToolsFrontendHostAssociatedPtr;
})();