// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/manifest/manifest_manager.mojom';
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
  var manifest$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/manifest/manifest.mojom', 'manifest.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function ManifestManager_RequestManifest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestManager_RequestManifest_Params.prototype.initDefaults_ = function() {
  };
  ManifestManager_RequestManifest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestManager_RequestManifest_Params.generate = function(generator_) {
    var generated = new ManifestManager_RequestManifest_Params;
    return generated;
  };

  ManifestManager_RequestManifest_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ManifestManager_RequestManifest_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestManager_RequestManifest_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestManager_RequestManifest_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestManager_RequestManifest_Params.validate = function(messageValidator, offset) {
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

  ManifestManager_RequestManifest_Params.encodedSize = codec.kStructHeaderSize + 0;

  ManifestManager_RequestManifest_Params.decode = function(decoder) {
    var packed;
    var val = new ManifestManager_RequestManifest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ManifestManager_RequestManifest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestManager_RequestManifest_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ManifestManager_RequestManifest_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestManager_RequestManifest_ResponseParams.prototype.initDefaults_ = function() {
    this.url = null;
    this.manifest = null;
  };
  ManifestManager_RequestManifest_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestManager_RequestManifest_ResponseParams.generate = function(generator_) {
    var generated = new ManifestManager_RequestManifest_ResponseParams;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.manifest = generator_.generateStruct(blink.mojom.Manifest, true);
    return generated;
  };

  ManifestManager_RequestManifest_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.manifest = mutator_.mutateStruct(blink.mojom.Manifest, true);
    }
    return this;
  };
  ManifestManager_RequestManifest_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestManager_RequestManifest_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestManager_RequestManifest_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestManager_RequestManifest_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ManifestManager_RequestManifest_ResponseParams.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestManager_RequestManifest_ResponseParams.manifest
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, manifest$.Manifest, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestManager_RequestManifest_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ManifestManager_RequestManifest_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ManifestManager_RequestManifest_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.manifest = decoder.decodeStructPointer(manifest$.Manifest);
    return val;
  };

  ManifestManager_RequestManifest_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestManager_RequestManifest_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(manifest$.Manifest, val.manifest);
  };
  function ManifestManager_RequestManifestDebugInfo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestManager_RequestManifestDebugInfo_Params.prototype.initDefaults_ = function() {
  };
  ManifestManager_RequestManifestDebugInfo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestManager_RequestManifestDebugInfo_Params.generate = function(generator_) {
    var generated = new ManifestManager_RequestManifestDebugInfo_Params;
    return generated;
  };

  ManifestManager_RequestManifestDebugInfo_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ManifestManager_RequestManifestDebugInfo_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestManager_RequestManifestDebugInfo_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestManager_RequestManifestDebugInfo_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestManager_RequestManifestDebugInfo_Params.validate = function(messageValidator, offset) {
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

  ManifestManager_RequestManifestDebugInfo_Params.encodedSize = codec.kStructHeaderSize + 0;

  ManifestManager_RequestManifestDebugInfo_Params.decode = function(decoder) {
    var packed;
    var val = new ManifestManager_RequestManifestDebugInfo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ManifestManager_RequestManifestDebugInfo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestManager_RequestManifestDebugInfo_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ManifestManager_RequestManifestDebugInfo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestManager_RequestManifestDebugInfo_ResponseParams.prototype.initDefaults_ = function() {
    this.url = null;
    this.debugInfo = null;
  };
  ManifestManager_RequestManifestDebugInfo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestManager_RequestManifestDebugInfo_ResponseParams.generate = function(generator_) {
    var generated = new ManifestManager_RequestManifestDebugInfo_ResponseParams;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.debugInfo = generator_.generateStruct(blink.mojom.ManifestDebugInfo, true);
    return generated;
  };

  ManifestManager_RequestManifestDebugInfo_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.debugInfo = mutator_.mutateStruct(blink.mojom.ManifestDebugInfo, true);
    }
    return this;
  };
  ManifestManager_RequestManifestDebugInfo_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestManager_RequestManifestDebugInfo_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestManager_RequestManifestDebugInfo_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestManager_RequestManifestDebugInfo_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate ManifestManager_RequestManifestDebugInfo_ResponseParams.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestManager_RequestManifestDebugInfo_ResponseParams.debugInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, manifest$.ManifestDebugInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestManager_RequestManifestDebugInfo_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  ManifestManager_RequestManifestDebugInfo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ManifestManager_RequestManifestDebugInfo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.debugInfo = decoder.decodeStructPointer(manifest$.ManifestDebugInfo);
    return val;
  };

  ManifestManager_RequestManifestDebugInfo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestManager_RequestManifestDebugInfo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(manifest$.ManifestDebugInfo, val.debugInfo);
  };
  var kManifestManager_RequestManifest_Name = 49178936;
  var kManifestManager_RequestManifestDebugInfo_Name = 890826015;

  function ManifestManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ManifestManager,
                                                   handleOrPtrInfo);
  }

  function ManifestManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ManifestManager, associatedInterfacePtrInfo);
  }

  ManifestManagerAssociatedPtr.prototype =
      Object.create(ManifestManagerPtr.prototype);
  ManifestManagerAssociatedPtr.prototype.constructor =
      ManifestManagerAssociatedPtr;

  function ManifestManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ManifestManagerPtr.prototype.requestManifest = function() {
    return ManifestManagerProxy.prototype.requestManifest
        .apply(this.ptr.getProxy(), arguments);
  };

  ManifestManagerProxy.prototype.requestManifest = function() {
    var params_ = new ManifestManager_RequestManifest_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kManifestManager_RequestManifest_Name,
          codec.align(ManifestManager_RequestManifest_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ManifestManager_RequestManifest_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ManifestManager_RequestManifest_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ManifestManagerPtr.prototype.requestManifestDebugInfo = function() {
    return ManifestManagerProxy.prototype.requestManifestDebugInfo
        .apply(this.ptr.getProxy(), arguments);
  };

  ManifestManagerProxy.prototype.requestManifestDebugInfo = function() {
    var params_ = new ManifestManager_RequestManifestDebugInfo_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kManifestManager_RequestManifestDebugInfo_Name,
          codec.align(ManifestManager_RequestManifestDebugInfo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ManifestManager_RequestManifestDebugInfo_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ManifestManager_RequestManifestDebugInfo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ManifestManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  ManifestManagerStub.prototype.requestManifest = function() {
    return this.delegate_ && this.delegate_.requestManifest && this.delegate_.requestManifest();
  }
  ManifestManagerStub.prototype.requestManifestDebugInfo = function() {
    return this.delegate_ && this.delegate_.requestManifestDebugInfo && this.delegate_.requestManifestDebugInfo();
  }

  ManifestManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ManifestManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kManifestManager_RequestManifest_Name:
      var params = reader.decodeStruct(ManifestManager_RequestManifest_Params);
      this.requestManifest().then(function(response) {
        var responseParams =
            new ManifestManager_RequestManifest_ResponseParams();
        responseParams.url = response.url;
        responseParams.manifest = response.manifest;
        var builder = new codec.MessageV1Builder(
            kManifestManager_RequestManifest_Name,
            codec.align(ManifestManager_RequestManifest_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ManifestManager_RequestManifest_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kManifestManager_RequestManifestDebugInfo_Name:
      var params = reader.decodeStruct(ManifestManager_RequestManifestDebugInfo_Params);
      this.requestManifestDebugInfo().then(function(response) {
        var responseParams =
            new ManifestManager_RequestManifestDebugInfo_ResponseParams();
        responseParams.url = response.url;
        responseParams.debugInfo = response.debugInfo;
        var builder = new codec.MessageV1Builder(
            kManifestManager_RequestManifestDebugInfo_Name,
            codec.align(ManifestManager_RequestManifestDebugInfo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ManifestManager_RequestManifestDebugInfo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateManifestManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kManifestManager_RequestManifest_Name:
        if (message.expectsResponse())
          paramsClass = ManifestManager_RequestManifest_Params;
      break;
      case kManifestManager_RequestManifestDebugInfo_Name:
        if (message.expectsResponse())
          paramsClass = ManifestManager_RequestManifestDebugInfo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateManifestManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kManifestManager_RequestManifest_Name:
        if (message.isResponse())
          paramsClass = ManifestManager_RequestManifest_ResponseParams;
        break;
      case kManifestManager_RequestManifestDebugInfo_Name:
        if (message.isResponse())
          paramsClass = ManifestManager_RequestManifestDebugInfo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ManifestManager = {
    name: 'blink.mojom.ManifestManager',
    kVersion: 0,
    ptrClass: ManifestManagerPtr,
    proxyClass: ManifestManagerProxy,
    stubClass: ManifestManagerStub,
    validateRequest: validateManifestManagerRequest,
    validateResponse: validateManifestManagerResponse,
    mojomId: 'third_party/blink/public/mojom/manifest/manifest_manager.mojom',
    fuzzMethods: {
      requestManifest: {
        params: ManifestManager_RequestManifest_Params,
      },
      requestManifestDebugInfo: {
        params: ManifestManager_RequestManifestDebugInfo_Params,
      },
    },
  };
  ManifestManagerStub.prototype.validator = validateManifestManagerRequest;
  ManifestManagerProxy.prototype.validator = validateManifestManagerResponse;
  exports.ManifestManager = ManifestManager;
  exports.ManifestManagerPtr = ManifestManagerPtr;
  exports.ManifestManagerAssociatedPtr = ManifestManagerAssociatedPtr;
})();