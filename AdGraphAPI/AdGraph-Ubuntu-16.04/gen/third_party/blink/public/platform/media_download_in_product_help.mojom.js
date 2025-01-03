// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/media_download_in_product_help.mojom';
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
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function MediaDownloadInProductHelp_ShowInProductHelpWidget_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.prototype.initDefaults_ = function() {
    this.buttonRect = null;
  };
  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.generate = function(generator_) {
    var generated = new MediaDownloadInProductHelp_ShowInProductHelpWidget_Params;
    generated.buttonRect = generator_.generateStruct(gfx.mojom.Rect, false);
    return generated;
  };

  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.buttonRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    return this;
  };
  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.validate = function(messageValidator, offset) {
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


    // validate MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.buttonRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDownloadInProductHelp_ShowInProductHelpWidget_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.buttonRect = decoder.decodeStructPointer(geometry$.Rect);
    return val;
  };

  MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Rect, val.buttonRect);
  };
  var kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name = 369911614;

  function MediaDownloadInProductHelpPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaDownloadInProductHelp,
                                                   handleOrPtrInfo);
  }

  function MediaDownloadInProductHelpAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaDownloadInProductHelp, associatedInterfacePtrInfo);
  }

  MediaDownloadInProductHelpAssociatedPtr.prototype =
      Object.create(MediaDownloadInProductHelpPtr.prototype);
  MediaDownloadInProductHelpAssociatedPtr.prototype.constructor =
      MediaDownloadInProductHelpAssociatedPtr;

  function MediaDownloadInProductHelpProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaDownloadInProductHelpPtr.prototype.showInProductHelpWidget = function() {
    return MediaDownloadInProductHelpProxy.prototype.showInProductHelpWidget
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDownloadInProductHelpProxy.prototype.showInProductHelpWidget = function(buttonRect) {
    var params_ = new MediaDownloadInProductHelp_ShowInProductHelpWidget_Params();
    params_.buttonRect = buttonRect;
    var builder = new codec.MessageV0Builder(
        kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name,
        codec.align(MediaDownloadInProductHelp_ShowInProductHelpWidget_Params.encodedSize));
    builder.encodeStruct(MediaDownloadInProductHelp_ShowInProductHelpWidget_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function MediaDownloadInProductHelpStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaDownloadInProductHelpStub.prototype.showInProductHelpWidget = function(buttonRect) {
    return this.delegate_ && this.delegate_.showInProductHelpWidget && this.delegate_.showInProductHelpWidget(buttonRect);
  }

  MediaDownloadInProductHelpStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name:
      var params = reader.decodeStruct(MediaDownloadInProductHelp_ShowInProductHelpWidget_Params);
      this.showInProductHelpWidget(params.buttonRect);
      return true;
    default:
      return false;
    }
  };

  MediaDownloadInProductHelpStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateMediaDownloadInProductHelpRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaDownloadInProductHelp_ShowInProductHelpWidget_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = MediaDownloadInProductHelp_ShowInProductHelpWidget_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaDownloadInProductHelpResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var MediaDownloadInProductHelp = {
    name: 'blink.mojom.MediaDownloadInProductHelp',
    kVersion: 0,
    ptrClass: MediaDownloadInProductHelpPtr,
    proxyClass: MediaDownloadInProductHelpProxy,
    stubClass: MediaDownloadInProductHelpStub,
    validateRequest: validateMediaDownloadInProductHelpRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/media_download_in_product_help.mojom',
    fuzzMethods: {
      showInProductHelpWidget: {
        params: MediaDownloadInProductHelp_ShowInProductHelpWidget_Params,
      },
    },
  };
  MediaDownloadInProductHelpStub.prototype.validator = validateMediaDownloadInProductHelpRequest;
  MediaDownloadInProductHelpProxy.prototype.validator = null;
  exports.MediaDownloadInProductHelp = MediaDownloadInProductHelp;
  exports.MediaDownloadInProductHelpPtr = MediaDownloadInProductHelpPtr;
  exports.MediaDownloadInProductHelpAssociatedPtr = MediaDownloadInProductHelpAssociatedPtr;
})();