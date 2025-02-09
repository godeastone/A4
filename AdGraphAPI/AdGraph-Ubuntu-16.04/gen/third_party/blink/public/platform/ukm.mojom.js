// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/ukm.mojom';
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



  function UkmSourceIdFrameHost_SetDocumentSourceId_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UkmSourceIdFrameHost_SetDocumentSourceId_Params.prototype.initDefaults_ = function() {
    this.sourceId = 0;
  };
  UkmSourceIdFrameHost_SetDocumentSourceId_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UkmSourceIdFrameHost_SetDocumentSourceId_Params.generate = function(generator_) {
    var generated = new UkmSourceIdFrameHost_SetDocumentSourceId_Params;
    generated.sourceId = generator_.generateInt64();
    return generated;
  };

  UkmSourceIdFrameHost_SetDocumentSourceId_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sourceId = mutator_.mutateInt64(this.sourceId);
    }
    return this;
  };
  UkmSourceIdFrameHost_SetDocumentSourceId_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UkmSourceIdFrameHost_SetDocumentSourceId_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UkmSourceIdFrameHost_SetDocumentSourceId_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UkmSourceIdFrameHost_SetDocumentSourceId_Params.validate = function(messageValidator, offset) {
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

  UkmSourceIdFrameHost_SetDocumentSourceId_Params.encodedSize = codec.kStructHeaderSize + 8;

  UkmSourceIdFrameHost_SetDocumentSourceId_Params.decode = function(decoder) {
    var packed;
    var val = new UkmSourceIdFrameHost_SetDocumentSourceId_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sourceId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  UkmSourceIdFrameHost_SetDocumentSourceId_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UkmSourceIdFrameHost_SetDocumentSourceId_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.sourceId);
  };
  var kUkmSourceIdFrameHost_SetDocumentSourceId_Name = 1991150996;

  function UkmSourceIdFrameHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(UkmSourceIdFrameHost,
                                                   handleOrPtrInfo);
  }

  function UkmSourceIdFrameHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        UkmSourceIdFrameHost, associatedInterfacePtrInfo);
  }

  UkmSourceIdFrameHostAssociatedPtr.prototype =
      Object.create(UkmSourceIdFrameHostPtr.prototype);
  UkmSourceIdFrameHostAssociatedPtr.prototype.constructor =
      UkmSourceIdFrameHostAssociatedPtr;

  function UkmSourceIdFrameHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  UkmSourceIdFrameHostPtr.prototype.setDocumentSourceId = function() {
    return UkmSourceIdFrameHostProxy.prototype.setDocumentSourceId
        .apply(this.ptr.getProxy(), arguments);
  };

  UkmSourceIdFrameHostProxy.prototype.setDocumentSourceId = function(sourceId) {
    var params_ = new UkmSourceIdFrameHost_SetDocumentSourceId_Params();
    params_.sourceId = sourceId;
    var builder = new codec.MessageV0Builder(
        kUkmSourceIdFrameHost_SetDocumentSourceId_Name,
        codec.align(UkmSourceIdFrameHost_SetDocumentSourceId_Params.encodedSize));
    builder.encodeStruct(UkmSourceIdFrameHost_SetDocumentSourceId_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UkmSourceIdFrameHostStub(delegate) {
    this.delegate_ = delegate;
  }
  UkmSourceIdFrameHostStub.prototype.setDocumentSourceId = function(sourceId) {
    return this.delegate_ && this.delegate_.setDocumentSourceId && this.delegate_.setDocumentSourceId(sourceId);
  }

  UkmSourceIdFrameHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUkmSourceIdFrameHost_SetDocumentSourceId_Name:
      var params = reader.decodeStruct(UkmSourceIdFrameHost_SetDocumentSourceId_Params);
      this.setDocumentSourceId(params.sourceId);
      return true;
    default:
      return false;
    }
  };

  UkmSourceIdFrameHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateUkmSourceIdFrameHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUkmSourceIdFrameHost_SetDocumentSourceId_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UkmSourceIdFrameHost_SetDocumentSourceId_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUkmSourceIdFrameHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UkmSourceIdFrameHost = {
    name: 'blink.mojom.UkmSourceIdFrameHost',
    kVersion: 0,
    ptrClass: UkmSourceIdFrameHostPtr,
    proxyClass: UkmSourceIdFrameHostProxy,
    stubClass: UkmSourceIdFrameHostStub,
    validateRequest: validateUkmSourceIdFrameHostRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/ukm.mojom',
    fuzzMethods: {
      setDocumentSourceId: {
        params: UkmSourceIdFrameHost_SetDocumentSourceId_Params,
      },
    },
  };
  UkmSourceIdFrameHostStub.prototype.validator = validateUkmSourceIdFrameHostRequest;
  UkmSourceIdFrameHostProxy.prototype.validator = null;
  exports.UkmSourceIdFrameHost = UkmSourceIdFrameHost;
  exports.UkmSourceIdFrameHostPtr = UkmSourceIdFrameHostPtr;
  exports.UkmSourceIdFrameHostAssociatedPtr = UkmSourceIdFrameHostAssociatedPtr;
})();