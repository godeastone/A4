// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/common/open_search_description_document_handler.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }



  function OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.prototype.initDefaults_ = function() {
    this.pageUrl = null;
    this.osddUrl = null;
  };
  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.generate = function(generator_) {
    var generated = new OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params;
    generated.pageUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.osddUrl = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pageUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.osddUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.validate = function(messageValidator, offset) {
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


    // validate OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.pageUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.osddUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.encodedSize = codec.kStructHeaderSize + 16;

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.decode = function(decoder) {
    var packed;
    var val = new OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pageUrl = decoder.decodeStructPointer(url$.Url);
    val.osddUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.pageUrl);
    encoder.encodeStructPointer(url$.Url, val.osddUrl);
  };
  var kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name = 1622278963;

  function OpenSearchDescriptionDocumentHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(OpenSearchDescriptionDocumentHandler,
                                                   handleOrPtrInfo);
  }

  function OpenSearchDescriptionDocumentHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        OpenSearchDescriptionDocumentHandler, associatedInterfacePtrInfo);
  }

  OpenSearchDescriptionDocumentHandlerAssociatedPtr.prototype =
      Object.create(OpenSearchDescriptionDocumentHandlerPtr.prototype);
  OpenSearchDescriptionDocumentHandlerAssociatedPtr.prototype.constructor =
      OpenSearchDescriptionDocumentHandlerAssociatedPtr;

  function OpenSearchDescriptionDocumentHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  OpenSearchDescriptionDocumentHandlerPtr.prototype.pageHasOpenSearchDescriptionDocument = function() {
    return OpenSearchDescriptionDocumentHandlerProxy.prototype.pageHasOpenSearchDescriptionDocument
        .apply(this.ptr.getProxy(), arguments);
  };

  OpenSearchDescriptionDocumentHandlerProxy.prototype.pageHasOpenSearchDescriptionDocument = function(pageUrl, osddUrl) {
    var params_ = new OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params();
    params_.pageUrl = pageUrl;
    params_.osddUrl = osddUrl;
    var builder = new codec.MessageV0Builder(
        kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name,
        codec.align(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params.encodedSize));
    builder.encodeStruct(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function OpenSearchDescriptionDocumentHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  OpenSearchDescriptionDocumentHandlerStub.prototype.pageHasOpenSearchDescriptionDocument = function(pageUrl, osddUrl) {
    return this.delegate_ && this.delegate_.pageHasOpenSearchDescriptionDocument && this.delegate_.pageHasOpenSearchDescriptionDocument(pageUrl, osddUrl);
  }

  OpenSearchDescriptionDocumentHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name:
      var params = reader.decodeStruct(OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params);
      this.pageHasOpenSearchDescriptionDocument(params.pageUrl, params.osddUrl);
      return true;
    default:
      return false;
    }
  };

  OpenSearchDescriptionDocumentHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateOpenSearchDescriptionDocumentHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kOpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateOpenSearchDescriptionDocumentHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var OpenSearchDescriptionDocumentHandler = {
    name: 'chrome.mojom.OpenSearchDescriptionDocumentHandler',
    kVersion: 0,
    ptrClass: OpenSearchDescriptionDocumentHandlerPtr,
    proxyClass: OpenSearchDescriptionDocumentHandlerProxy,
    stubClass: OpenSearchDescriptionDocumentHandlerStub,
    validateRequest: validateOpenSearchDescriptionDocumentHandlerRequest,
    validateResponse: null,
    mojomId: 'chrome/common/open_search_description_document_handler.mojom',
    fuzzMethods: {
      pageHasOpenSearchDescriptionDocument: {
        params: OpenSearchDescriptionDocumentHandler_PageHasOpenSearchDescriptionDocument_Params,
      },
    },
  };
  OpenSearchDescriptionDocumentHandlerStub.prototype.validator = validateOpenSearchDescriptionDocumentHandlerRequest;
  OpenSearchDescriptionDocumentHandlerProxy.prototype.validator = null;
  exports.OpenSearchDescriptionDocumentHandler = OpenSearchDescriptionDocumentHandler;
  exports.OpenSearchDescriptionDocumentHandlerPtr = OpenSearchDescriptionDocumentHandlerPtr;
  exports.OpenSearchDescriptionDocumentHandlerAssociatedPtr = OpenSearchDescriptionDocumentHandlerAssociatedPtr;
})();