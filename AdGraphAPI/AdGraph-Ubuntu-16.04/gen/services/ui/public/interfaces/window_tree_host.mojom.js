// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_tree_host.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }



  function WindowTreeHost_SetSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeHost_SetSize_Params.prototype.initDefaults_ = function() {
    this.size = null;
  };
  WindowTreeHost_SetSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeHost_SetSize_Params.generate = function(generator_) {
    var generated = new WindowTreeHost_SetSize_Params;
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  WindowTreeHost_SetSize_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  WindowTreeHost_SetSize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeHost_SetSize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeHost_SetSize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeHost_SetSize_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeHost_SetSize_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeHost_SetSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeHost_SetSize_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeHost_SetSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  WindowTreeHost_SetSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeHost_SetSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.size);
  };
  function WindowTreeHost_SetTitle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeHost_SetTitle_Params.prototype.initDefaults_ = function() {
    this.title = null;
  };
  WindowTreeHost_SetTitle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeHost_SetTitle_Params.generate = function(generator_) {
    var generated = new WindowTreeHost_SetTitle_Params;
    generated.title = generator_.generateString(false);
    return generated;
  };

  WindowTreeHost_SetTitle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    return this;
  };
  WindowTreeHost_SetTitle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WindowTreeHost_SetTitle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeHost_SetTitle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WindowTreeHost_SetTitle_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeHost_SetTitle_Params.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeHost_SetTitle_Params.encodedSize = codec.kStructHeaderSize + 8;

  WindowTreeHost_SetTitle_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeHost_SetTitle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.title = decoder.decodeStruct(codec.String);
    return val;
  };

  WindowTreeHost_SetTitle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeHost_SetTitle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.title);
  };
  var kWindowTreeHost_SetSize_Name = 1077766214;
  var kWindowTreeHost_SetTitle_Name = 2052341318;

  function WindowTreeHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowTreeHost,
                                                   handleOrPtrInfo);
  }

  function WindowTreeHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowTreeHost, associatedInterfacePtrInfo);
  }

  WindowTreeHostAssociatedPtr.prototype =
      Object.create(WindowTreeHostPtr.prototype);
  WindowTreeHostAssociatedPtr.prototype.constructor =
      WindowTreeHostAssociatedPtr;

  function WindowTreeHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowTreeHostPtr.prototype.setSize = function() {
    return WindowTreeHostProxy.prototype.setSize
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeHostProxy.prototype.setSize = function(size) {
    var params_ = new WindowTreeHost_SetSize_Params();
    params_.size = size;
    var builder = new codec.MessageV0Builder(
        kWindowTreeHost_SetSize_Name,
        codec.align(WindowTreeHost_SetSize_Params.encodedSize));
    builder.encodeStruct(WindowTreeHost_SetSize_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WindowTreeHostPtr.prototype.setTitle = function() {
    return WindowTreeHostProxy.prototype.setTitle
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeHostProxy.prototype.setTitle = function(title) {
    var params_ = new WindowTreeHost_SetTitle_Params();
    params_.title = title;
    var builder = new codec.MessageV0Builder(
        kWindowTreeHost_SetTitle_Name,
        codec.align(WindowTreeHost_SetTitle_Params.encodedSize));
    builder.encodeStruct(WindowTreeHost_SetTitle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeHostStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowTreeHostStub.prototype.setSize = function(size) {
    return this.delegate_ && this.delegate_.setSize && this.delegate_.setSize(size);
  }
  WindowTreeHostStub.prototype.setTitle = function(title) {
    return this.delegate_ && this.delegate_.setTitle && this.delegate_.setTitle(title);
  }

  WindowTreeHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeHost_SetSize_Name:
      var params = reader.decodeStruct(WindowTreeHost_SetSize_Params);
      this.setSize(params.size);
      return true;
    case kWindowTreeHost_SetTitle_Name:
      var params = reader.decodeStruct(WindowTreeHost_SetTitle_Params);
      this.setTitle(params.title);
      return true;
    default:
      return false;
    }
  };

  WindowTreeHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWindowTreeHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTreeHost_SetSize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeHost_SetSize_Params;
      break;
      case kWindowTreeHost_SetTitle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeHost_SetTitle_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowTreeHost = {
    name: 'ui.mojom.WindowTreeHost',
    kVersion: 0,
    ptrClass: WindowTreeHostPtr,
    proxyClass: WindowTreeHostProxy,
    stubClass: WindowTreeHostStub,
    validateRequest: validateWindowTreeHostRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/window_tree_host.mojom',
    fuzzMethods: {
      setSize: {
        params: WindowTreeHost_SetSize_Params,
      },
      setTitle: {
        params: WindowTreeHost_SetTitle_Params,
      },
    },
  };
  WindowTreeHostStub.prototype.validator = validateWindowTreeHostRequest;
  WindowTreeHostProxy.prototype.validator = null;
  exports.WindowTreeHost = WindowTreeHost;
  exports.WindowTreeHostPtr = WindowTreeHostPtr;
  exports.WindowTreeHostAssociatedPtr = WindowTreeHostAssociatedPtr;
})();