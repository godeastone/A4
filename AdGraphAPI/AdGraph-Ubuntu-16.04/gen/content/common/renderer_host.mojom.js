// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/renderer_host.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var url_loader_factory$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader_factory.mojom', '../../services/network/public/mojom/url_loader_factory.mojom.js');
  }



  function RendererHost_GetBlobURLLoaderFactory_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererHost_GetBlobURLLoaderFactory_Params.prototype.initDefaults_ = function() {
    this.loader = new bindings.InterfaceRequest();
  };
  RendererHost_GetBlobURLLoaderFactory_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererHost_GetBlobURLLoaderFactory_Params.generate = function(generator_) {
    var generated = new RendererHost_GetBlobURLLoaderFactory_Params;
    generated.loader = generator_.generateInterfaceRequest("network.mojom.URLLoaderFactory", false);
    return generated;
  };

  RendererHost_GetBlobURLLoaderFactory_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.loader = mutator_.mutateInterfaceRequest(this.loader, "network.mojom.URLLoaderFactory", false);
    }
    return this;
  };
  RendererHost_GetBlobURLLoaderFactory_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.loader !== null) {
      Array.prototype.push.apply(handles, ["network.mojom.URLLoaderFactoryRequest"]);
    }
    return handles;
  };

  RendererHost_GetBlobURLLoaderFactory_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererHost_GetBlobURLLoaderFactory_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.loader = handles[idx++];;
    return idx;
  };

  RendererHost_GetBlobURLLoaderFactory_Params.validate = function(messageValidator, offset) {
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


    // validate RendererHost_GetBlobURLLoaderFactory_Params.loader
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererHost_GetBlobURLLoaderFactory_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererHost_GetBlobURLLoaderFactory_Params.decode = function(decoder) {
    var packed;
    var val = new RendererHost_GetBlobURLLoaderFactory_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.loader = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererHost_GetBlobURLLoaderFactory_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererHost_GetBlobURLLoaderFactory_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.loader);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererHost_GetBrowserHistogram_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererHost_GetBrowserHistogram_Params.prototype.initDefaults_ = function() {
    this.name = null;
  };
  RendererHost_GetBrowserHistogram_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererHost_GetBrowserHistogram_Params.generate = function(generator_) {
    var generated = new RendererHost_GetBrowserHistogram_Params;
    generated.name = generator_.generateString(false);
    return generated;
  };

  RendererHost_GetBrowserHistogram_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    return this;
  };
  RendererHost_GetBrowserHistogram_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererHost_GetBrowserHistogram_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererHost_GetBrowserHistogram_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererHost_GetBrowserHistogram_Params.validate = function(messageValidator, offset) {
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


    // validate RendererHost_GetBrowserHistogram_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererHost_GetBrowserHistogram_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererHost_GetBrowserHistogram_Params.decode = function(decoder) {
    var packed;
    var val = new RendererHost_GetBrowserHistogram_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  RendererHost_GetBrowserHistogram_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererHost_GetBrowserHistogram_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
  };
  function RendererHost_GetBrowserHistogram_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererHost_GetBrowserHistogram_ResponseParams.prototype.initDefaults_ = function() {
    this.histogramJson = null;
  };
  RendererHost_GetBrowserHistogram_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererHost_GetBrowserHistogram_ResponseParams.generate = function(generator_) {
    var generated = new RendererHost_GetBrowserHistogram_ResponseParams;
    generated.histogramJson = generator_.generateString(false);
    return generated;
  };

  RendererHost_GetBrowserHistogram_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.histogramJson = mutator_.mutateString(this.histogramJson, false);
    }
    return this;
  };
  RendererHost_GetBrowserHistogram_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererHost_GetBrowserHistogram_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererHost_GetBrowserHistogram_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererHost_GetBrowserHistogram_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate RendererHost_GetBrowserHistogram_ResponseParams.histogramJson
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RendererHost_GetBrowserHistogram_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  RendererHost_GetBrowserHistogram_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new RendererHost_GetBrowserHistogram_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.histogramJson = decoder.decodeStruct(codec.String);
    return val;
  };

  RendererHost_GetBrowserHistogram_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererHost_GetBrowserHistogram_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.histogramJson);
  };
  function RendererHost_SuddenTerminationChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererHost_SuddenTerminationChanged_Params.prototype.initDefaults_ = function() {
    this.enabled = false;
  };
  RendererHost_SuddenTerminationChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererHost_SuddenTerminationChanged_Params.generate = function(generator_) {
    var generated = new RendererHost_SuddenTerminationChanged_Params;
    generated.enabled = generator_.generateBool();
    return generated;
  };

  RendererHost_SuddenTerminationChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabled = mutator_.mutateBool(this.enabled);
    }
    return this;
  };
  RendererHost_SuddenTerminationChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererHost_SuddenTerminationChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererHost_SuddenTerminationChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererHost_SuddenTerminationChanged_Params.validate = function(messageValidator, offset) {
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

  RendererHost_SuddenTerminationChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  RendererHost_SuddenTerminationChanged_Params.decode = function(decoder) {
    var packed;
    var val = new RendererHost_SuddenTerminationChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.enabled = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RendererHost_SuddenTerminationChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererHost_SuddenTerminationChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.enabled & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function RendererHost_ShutdownRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RendererHost_ShutdownRequest_Params.prototype.initDefaults_ = function() {
  };
  RendererHost_ShutdownRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RendererHost_ShutdownRequest_Params.generate = function(generator_) {
    var generated = new RendererHost_ShutdownRequest_Params;
    return generated;
  };

  RendererHost_ShutdownRequest_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  RendererHost_ShutdownRequest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RendererHost_ShutdownRequest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RendererHost_ShutdownRequest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RendererHost_ShutdownRequest_Params.validate = function(messageValidator, offset) {
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

  RendererHost_ShutdownRequest_Params.encodedSize = codec.kStructHeaderSize + 0;

  RendererHost_ShutdownRequest_Params.decode = function(decoder) {
    var packed;
    var val = new RendererHost_ShutdownRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RendererHost_ShutdownRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RendererHost_ShutdownRequest_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kRendererHost_GetBlobURLLoaderFactory_Name = 246995347;
  var kRendererHost_GetBrowserHistogram_Name = 102202722;
  var kRendererHost_SuddenTerminationChanged_Name = 190978281;
  var kRendererHost_ShutdownRequest_Name = 821129689;

  function RendererHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(RendererHost,
                                                   handleOrPtrInfo);
  }

  function RendererHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        RendererHost, associatedInterfacePtrInfo);
  }

  RendererHostAssociatedPtr.prototype =
      Object.create(RendererHostPtr.prototype);
  RendererHostAssociatedPtr.prototype.constructor =
      RendererHostAssociatedPtr;

  function RendererHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererHostPtr.prototype.getBlobURLLoaderFactory = function() {
    return RendererHostProxy.prototype.getBlobURLLoaderFactory
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererHostProxy.prototype.getBlobURLLoaderFactory = function(loader) {
    var params_ = new RendererHost_GetBlobURLLoaderFactory_Params();
    params_.loader = loader;
    var builder = new codec.MessageV0Builder(
        kRendererHost_GetBlobURLLoaderFactory_Name,
        codec.align(RendererHost_GetBlobURLLoaderFactory_Params.encodedSize));
    builder.encodeStruct(RendererHost_GetBlobURLLoaderFactory_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererHostPtr.prototype.getBrowserHistogram = function() {
    return RendererHostProxy.prototype.getBrowserHistogram
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererHostProxy.prototype.getBrowserHistogram = function(name) {
    var params_ = new RendererHost_GetBrowserHistogram_Params();
    params_.name = name;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kRendererHost_GetBrowserHistogram_Name,
          codec.align(RendererHost_GetBrowserHistogram_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(RendererHost_GetBrowserHistogram_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(RendererHost_GetBrowserHistogram_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  RendererHostPtr.prototype.suddenTerminationChanged = function() {
    return RendererHostProxy.prototype.suddenTerminationChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererHostProxy.prototype.suddenTerminationChanged = function(enabled) {
    var params_ = new RendererHost_SuddenTerminationChanged_Params();
    params_.enabled = enabled;
    var builder = new codec.MessageV0Builder(
        kRendererHost_SuddenTerminationChanged_Name,
        codec.align(RendererHost_SuddenTerminationChanged_Params.encodedSize));
    builder.encodeStruct(RendererHost_SuddenTerminationChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererHostPtr.prototype.shutdownRequest = function() {
    return RendererHostProxy.prototype.shutdownRequest
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererHostProxy.prototype.shutdownRequest = function() {
    var params_ = new RendererHost_ShutdownRequest_Params();
    var builder = new codec.MessageV0Builder(
        kRendererHost_ShutdownRequest_Name,
        codec.align(RendererHost_ShutdownRequest_Params.encodedSize));
    builder.encodeStruct(RendererHost_ShutdownRequest_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererHostStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererHostStub.prototype.getBlobURLLoaderFactory = function(loader) {
    return this.delegate_ && this.delegate_.getBlobURLLoaderFactory && this.delegate_.getBlobURLLoaderFactory(loader);
  }
  RendererHostStub.prototype.getBrowserHistogram = function(name) {
    return this.delegate_ && this.delegate_.getBrowserHistogram && this.delegate_.getBrowserHistogram(name);
  }
  RendererHostStub.prototype.suddenTerminationChanged = function(enabled) {
    return this.delegate_ && this.delegate_.suddenTerminationChanged && this.delegate_.suddenTerminationChanged(enabled);
  }
  RendererHostStub.prototype.shutdownRequest = function() {
    return this.delegate_ && this.delegate_.shutdownRequest && this.delegate_.shutdownRequest();
  }

  RendererHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererHost_GetBlobURLLoaderFactory_Name:
      var params = reader.decodeStruct(RendererHost_GetBlobURLLoaderFactory_Params);
      this.getBlobURLLoaderFactory(params.loader);
      return true;
    case kRendererHost_SuddenTerminationChanged_Name:
      var params = reader.decodeStruct(RendererHost_SuddenTerminationChanged_Params);
      this.suddenTerminationChanged(params.enabled);
      return true;
    case kRendererHost_ShutdownRequest_Name:
      var params = reader.decodeStruct(RendererHost_ShutdownRequest_Params);
      this.shutdownRequest();
      return true;
    default:
      return false;
    }
  };

  RendererHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRendererHost_GetBrowserHistogram_Name:
      var params = reader.decodeStruct(RendererHost_GetBrowserHistogram_Params);
      this.getBrowserHistogram(params.name).then(function(response) {
        var responseParams =
            new RendererHost_GetBrowserHistogram_ResponseParams();
        responseParams.histogramJson = response.histogramJson;
        var builder = new codec.MessageV1Builder(
            kRendererHost_GetBrowserHistogram_Name,
            codec.align(RendererHost_GetBrowserHistogram_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(RendererHost_GetBrowserHistogram_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateRendererHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRendererHost_GetBlobURLLoaderFactory_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererHost_GetBlobURLLoaderFactory_Params;
      break;
      case kRendererHost_GetBrowserHistogram_Name:
        if (message.expectsResponse())
          paramsClass = RendererHost_GetBrowserHistogram_Params;
      break;
      case kRendererHost_SuddenTerminationChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererHost_SuddenTerminationChanged_Params;
      break;
      case kRendererHost_ShutdownRequest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = RendererHost_ShutdownRequest_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kRendererHost_GetBrowserHistogram_Name:
        if (message.isResponse())
          paramsClass = RendererHost_GetBrowserHistogram_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var RendererHost = {
    name: 'content.mojom.RendererHost',
    kVersion: 0,
    ptrClass: RendererHostPtr,
    proxyClass: RendererHostProxy,
    stubClass: RendererHostStub,
    validateRequest: validateRendererHostRequest,
    validateResponse: validateRendererHostResponse,
    mojomId: 'content/common/renderer_host.mojom',
    fuzzMethods: {
      getBlobURLLoaderFactory: {
        params: RendererHost_GetBlobURLLoaderFactory_Params,
      },
      getBrowserHistogram: {
        params: RendererHost_GetBrowserHistogram_Params,
      },
      suddenTerminationChanged: {
        params: RendererHost_SuddenTerminationChanged_Params,
      },
      shutdownRequest: {
        params: RendererHost_ShutdownRequest_Params,
      },
    },
  };
  RendererHostStub.prototype.validator = validateRendererHostRequest;
  RendererHostProxy.prototype.validator = validateRendererHostResponse;
  exports.RendererHost = RendererHost;
  exports.RendererHostPtr = RendererHostPtr;
  exports.RendererHostAssociatedPtr = RendererHostAssociatedPtr;
})();