// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_tree_host_factory.mojom';
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
  var window_tree$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_tree.mojom', 'window_tree.mojom.js');
  }
  var window_tree_host$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_tree_host.mojom', 'window_tree_host.mojom.js');
  }



  function WindowTreeHostFactory_CreateWindowTreeHost_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.initDefaults_ = function() {
    this.windowTreeHost = new bindings.InterfaceRequest();
    this.treeClient = new window_tree$.WindowTreeClientPtr();
  };
  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowTreeHostFactory_CreateWindowTreeHost_Params.generate = function(generator_) {
    var generated = new WindowTreeHostFactory_CreateWindowTreeHost_Params;
    generated.windowTreeHost = generator_.generateInterfaceRequest("ui.mojom.WindowTreeHost", false);
    generated.treeClient = generator_.generateInterface("ui.mojom.WindowTreeClient", false);
    return generated;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.windowTreeHost = mutator_.mutateInterfaceRequest(this.windowTreeHost, "ui.mojom.WindowTreeHost", false);
    }
    if (mutator_.chooseMutateField()) {
      this.treeClient = mutator_.mutateInterface(this.treeClient, "ui.mojom.WindowTreeClient", false);
    }
    return this;
  };
  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.windowTreeHost !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeHostRequest"]);
    }
    if (this.treeClient !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeClientPtr"]);
    }
    return handles;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowTreeHostFactory_CreateWindowTreeHost_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.windowTreeHost = handles[idx++];;
    this.treeClient = handles[idx++];;
    return idx;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.validate = function(messageValidator, offset) {
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


    // validate WindowTreeHostFactory_CreateWindowTreeHost_Params.windowTreeHost
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowTreeHostFactory_CreateWindowTreeHost_Params.treeClient
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowTreeHostFactory_CreateWindowTreeHost_Params.decode = function(decoder) {
    var packed;
    var val = new WindowTreeHostFactory_CreateWindowTreeHost_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.windowTreeHost = decoder.decodeStruct(codec.InterfaceRequest);
    val.treeClient = decoder.decodeStruct(new codec.Interface(window_tree$.WindowTreeClientPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowTreeHostFactory_CreateWindowTreeHost_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.windowTreeHost);
    encoder.encodeStruct(new codec.Interface(window_tree$.WindowTreeClientPtr), val.treeClient);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWindowTreeHostFactory_CreateWindowTreeHost_Name = 1965109295;

  function WindowTreeHostFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowTreeHostFactory,
                                                   handleOrPtrInfo);
  }

  function WindowTreeHostFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowTreeHostFactory, associatedInterfacePtrInfo);
  }

  WindowTreeHostFactoryAssociatedPtr.prototype =
      Object.create(WindowTreeHostFactoryPtr.prototype);
  WindowTreeHostFactoryAssociatedPtr.prototype.constructor =
      WindowTreeHostFactoryAssociatedPtr;

  function WindowTreeHostFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowTreeHostFactoryPtr.prototype.createWindowTreeHost = function() {
    return WindowTreeHostFactoryProxy.prototype.createWindowTreeHost
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowTreeHostFactoryProxy.prototype.createWindowTreeHost = function(windowTreeHost, treeClient) {
    var params_ = new WindowTreeHostFactory_CreateWindowTreeHost_Params();
    params_.windowTreeHost = windowTreeHost;
    params_.treeClient = treeClient;
    var builder = new codec.MessageV0Builder(
        kWindowTreeHostFactory_CreateWindowTreeHost_Name,
        codec.align(WindowTreeHostFactory_CreateWindowTreeHost_Params.encodedSize));
    builder.encodeStruct(WindowTreeHostFactory_CreateWindowTreeHost_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowTreeHostFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowTreeHostFactoryStub.prototype.createWindowTreeHost = function(windowTreeHost, treeClient) {
    return this.delegate_ && this.delegate_.createWindowTreeHost && this.delegate_.createWindowTreeHost(windowTreeHost, treeClient);
  }

  WindowTreeHostFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowTreeHostFactory_CreateWindowTreeHost_Name:
      var params = reader.decodeStruct(WindowTreeHostFactory_CreateWindowTreeHost_Params);
      this.createWindowTreeHost(params.windowTreeHost, params.treeClient);
      return true;
    default:
      return false;
    }
  };

  WindowTreeHostFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWindowTreeHostFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowTreeHostFactory_CreateWindowTreeHost_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowTreeHostFactory_CreateWindowTreeHost_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowTreeHostFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowTreeHostFactory = {
    name: 'ui.mojom.WindowTreeHostFactory',
    kVersion: 0,
    ptrClass: WindowTreeHostFactoryPtr,
    proxyClass: WindowTreeHostFactoryProxy,
    stubClass: WindowTreeHostFactoryStub,
    validateRequest: validateWindowTreeHostFactoryRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/window_tree_host_factory.mojom',
    fuzzMethods: {
      createWindowTreeHost: {
        params: WindowTreeHostFactory_CreateWindowTreeHost_Params,
      },
    },
  };
  WindowTreeHostFactoryStub.prototype.validator = validateWindowTreeHostFactoryRequest;
  WindowTreeHostFactoryProxy.prototype.validator = null;
  exports.WindowTreeHostFactory = WindowTreeHostFactory;
  exports.WindowTreeHostFactoryPtr = WindowTreeHostFactoryPtr;
  exports.WindowTreeHostFactoryAssociatedPtr = WindowTreeHostFactoryAssociatedPtr;
})();