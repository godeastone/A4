// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/host_zoom.mojom';
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



  function HostZoom_SetHostZoomLevel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostZoom_SetHostZoomLevel_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.zoomLevel = 0;
  };
  HostZoom_SetHostZoomLevel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HostZoom_SetHostZoomLevel_Params.generate = function(generator_) {
    var generated = new HostZoom_SetHostZoomLevel_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.zoomLevel = generator_.generateDouble();
    return generated;
  };

  HostZoom_SetHostZoomLevel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.zoomLevel = mutator_.mutateDouble(this.zoomLevel);
    }
    return this;
  };
  HostZoom_SetHostZoomLevel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HostZoom_SetHostZoomLevel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HostZoom_SetHostZoomLevel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HostZoom_SetHostZoomLevel_Params.validate = function(messageValidator, offset) {
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


    // validate HostZoom_SetHostZoomLevel_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  HostZoom_SetHostZoomLevel_Params.encodedSize = codec.kStructHeaderSize + 16;

  HostZoom_SetHostZoomLevel_Params.decode = function(decoder) {
    var packed;
    var val = new HostZoom_SetHostZoomLevel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.zoomLevel = decoder.decodeStruct(codec.Double);
    return val;
  };

  HostZoom_SetHostZoomLevel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostZoom_SetHostZoomLevel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Double, val.zoomLevel);
  };
  var kHostZoom_SetHostZoomLevel_Name = 1155700734;

  function HostZoomPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(HostZoom,
                                                   handleOrPtrInfo);
  }

  function HostZoomAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        HostZoom, associatedInterfacePtrInfo);
  }

  HostZoomAssociatedPtr.prototype =
      Object.create(HostZoomPtr.prototype);
  HostZoomAssociatedPtr.prototype.constructor =
      HostZoomAssociatedPtr;

  function HostZoomProxy(receiver) {
    this.receiver_ = receiver;
  }
  HostZoomPtr.prototype.setHostZoomLevel = function() {
    return HostZoomProxy.prototype.setHostZoomLevel
        .apply(this.ptr.getProxy(), arguments);
  };

  HostZoomProxy.prototype.setHostZoomLevel = function(url, zoomLevel) {
    var params_ = new HostZoom_SetHostZoomLevel_Params();
    params_.url = url;
    params_.zoomLevel = zoomLevel;
    var builder = new codec.MessageV0Builder(
        kHostZoom_SetHostZoomLevel_Name,
        codec.align(HostZoom_SetHostZoomLevel_Params.encodedSize));
    builder.encodeStruct(HostZoom_SetHostZoomLevel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function HostZoomStub(delegate) {
    this.delegate_ = delegate;
  }
  HostZoomStub.prototype.setHostZoomLevel = function(url, zoomLevel) {
    return this.delegate_ && this.delegate_.setHostZoomLevel && this.delegate_.setHostZoomLevel(url, zoomLevel);
  }

  HostZoomStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kHostZoom_SetHostZoomLevel_Name:
      var params = reader.decodeStruct(HostZoom_SetHostZoomLevel_Params);
      this.setHostZoomLevel(params.url, params.zoomLevel);
      return true;
    default:
      return false;
    }
  };

  HostZoomStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateHostZoomRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kHostZoom_SetHostZoomLevel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = HostZoom_SetHostZoomLevel_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateHostZoomResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var HostZoom = {
    name: 'content.mojom.HostZoom',
    kVersion: 0,
    ptrClass: HostZoomPtr,
    proxyClass: HostZoomProxy,
    stubClass: HostZoomStub,
    validateRequest: validateHostZoomRequest,
    validateResponse: null,
    mojomId: 'content/common/host_zoom.mojom',
    fuzzMethods: {
      setHostZoomLevel: {
        params: HostZoom_SetHostZoomLevel_Params,
      },
    },
  };
  HostZoomStub.prototype.validator = validateHostZoomRequest;
  HostZoomProxy.prototype.validator = null;
  exports.HostZoom = HostZoom;
  exports.HostZoomPtr = HostZoomPtr;
  exports.HostZoomAssociatedPtr = HostZoomAssociatedPtr;
})();