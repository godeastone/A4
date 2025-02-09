// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/manifest_observer.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function ManifestUrlChangeObserver_ManifestUrlChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestUrlChangeObserver_ManifestUrlChanged_Params.prototype.initDefaults_ = function() {
    this.manifestUrl = null;
  };
  ManifestUrlChangeObserver_ManifestUrlChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestUrlChangeObserver_ManifestUrlChanged_Params.generate = function(generator_) {
    var generated = new ManifestUrlChangeObserver_ManifestUrlChanged_Params;
    generated.manifestUrl = generator_.generateStruct(url.mojom.Url, true);
    return generated;
  };

  ManifestUrlChangeObserver_ManifestUrlChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.manifestUrl = mutator_.mutateStruct(url.mojom.Url, true);
    }
    return this;
  };
  ManifestUrlChangeObserver_ManifestUrlChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestUrlChangeObserver_ManifestUrlChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestUrlChangeObserver_ManifestUrlChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestUrlChangeObserver_ManifestUrlChanged_Params.validate = function(messageValidator, offset) {
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


    // validate ManifestUrlChangeObserver_ManifestUrlChanged_Params.manifestUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestUrlChangeObserver_ManifestUrlChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  ManifestUrlChangeObserver_ManifestUrlChanged_Params.decode = function(decoder) {
    var packed;
    var val = new ManifestUrlChangeObserver_ManifestUrlChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.manifestUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ManifestUrlChangeObserver_ManifestUrlChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestUrlChangeObserver_ManifestUrlChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.manifestUrl);
  };
  var kManifestUrlChangeObserver_ManifestUrlChanged_Name = 2101770311;

  function ManifestUrlChangeObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ManifestUrlChangeObserver,
                                                   handleOrPtrInfo);
  }

  function ManifestUrlChangeObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ManifestUrlChangeObserver, associatedInterfacePtrInfo);
  }

  ManifestUrlChangeObserverAssociatedPtr.prototype =
      Object.create(ManifestUrlChangeObserverPtr.prototype);
  ManifestUrlChangeObserverAssociatedPtr.prototype.constructor =
      ManifestUrlChangeObserverAssociatedPtr;

  function ManifestUrlChangeObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ManifestUrlChangeObserverPtr.prototype.manifestUrlChanged = function() {
    return ManifestUrlChangeObserverProxy.prototype.manifestUrlChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  ManifestUrlChangeObserverProxy.prototype.manifestUrlChanged = function(manifestUrl) {
    var params_ = new ManifestUrlChangeObserver_ManifestUrlChanged_Params();
    params_.manifestUrl = manifestUrl;
    var builder = new codec.MessageV0Builder(
        kManifestUrlChangeObserver_ManifestUrlChanged_Name,
        codec.align(ManifestUrlChangeObserver_ManifestUrlChanged_Params.encodedSize));
    builder.encodeStruct(ManifestUrlChangeObserver_ManifestUrlChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ManifestUrlChangeObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  ManifestUrlChangeObserverStub.prototype.manifestUrlChanged = function(manifestUrl) {
    return this.delegate_ && this.delegate_.manifestUrlChanged && this.delegate_.manifestUrlChanged(manifestUrl);
  }

  ManifestUrlChangeObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kManifestUrlChangeObserver_ManifestUrlChanged_Name:
      var params = reader.decodeStruct(ManifestUrlChangeObserver_ManifestUrlChanged_Params);
      this.manifestUrlChanged(params.manifestUrl);
      return true;
    default:
      return false;
    }
  };

  ManifestUrlChangeObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateManifestUrlChangeObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kManifestUrlChangeObserver_ManifestUrlChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ManifestUrlChangeObserver_ManifestUrlChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateManifestUrlChangeObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ManifestUrlChangeObserver = {
    name: 'content.mojom.ManifestUrlChangeObserver',
    kVersion: 0,
    ptrClass: ManifestUrlChangeObserverPtr,
    proxyClass: ManifestUrlChangeObserverProxy,
    stubClass: ManifestUrlChangeObserverStub,
    validateRequest: validateManifestUrlChangeObserverRequest,
    validateResponse: null,
    mojomId: 'content/common/manifest_observer.mojom',
    fuzzMethods: {
      manifestUrlChanged: {
        params: ManifestUrlChangeObserver_ManifestUrlChanged_Params,
      },
    },
  };
  ManifestUrlChangeObserverStub.prototype.validator = validateManifestUrlChangeObserverRequest;
  ManifestUrlChangeObserverProxy.prototype.validator = null;
  exports.ManifestUrlChangeObserver = ManifestUrlChangeObserver;
  exports.ManifestUrlChangeObserverPtr = ManifestUrlChangeObserverPtr;
  exports.ManifestUrlChangeObserverAssociatedPtr = ManifestUrlChangeObserverAssociatedPtr;
})();