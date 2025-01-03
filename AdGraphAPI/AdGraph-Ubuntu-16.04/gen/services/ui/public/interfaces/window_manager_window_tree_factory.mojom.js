// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/window_manager_window_tree_factory.mojom';
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
  var window_manager_constants$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_manager_constants.mojom', 'window_manager_constants.mojom.js');
  }
  var window_tree$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/ui/public/interfaces/window_tree.mojom', 'window_tree.mojom.js');
  }



  function WindowManagerWindowTreeFactory_CreateWindowTree_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WindowManagerWindowTreeFactory_CreateWindowTree_Params.prototype.initDefaults_ = function() {
    this.treeRequest = new bindings.InterfaceRequest();
    this.client = new window_tree$.WindowTreeClientPtr();
    this.automaticallyCreateDisplayRoots = false;
  };
  WindowManagerWindowTreeFactory_CreateWindowTree_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WindowManagerWindowTreeFactory_CreateWindowTree_Params.generate = function(generator_) {
    var generated = new WindowManagerWindowTreeFactory_CreateWindowTree_Params;
    generated.treeRequest = generator_.generateInterfaceRequest("ui.mojom.WindowTree", false);
    generated.client = generator_.generateInterface("ui.mojom.WindowTreeClient", false);
    generated.automaticallyCreateDisplayRoots = generator_.generateBool();
    return generated;
  };

  WindowManagerWindowTreeFactory_CreateWindowTree_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.treeRequest = mutator_.mutateInterfaceRequest(this.treeRequest, "ui.mojom.WindowTree", false);
    }
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "ui.mojom.WindowTreeClient", false);
    }
    if (mutator_.chooseMutateField()) {
      this.automaticallyCreateDisplayRoots = mutator_.mutateBool(this.automaticallyCreateDisplayRoots);
    }
    return this;
  };
  WindowManagerWindowTreeFactory_CreateWindowTree_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.treeRequest !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeRequest"]);
    }
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["ui.mojom.WindowTreeClientPtr"]);
    }
    return handles;
  };

  WindowManagerWindowTreeFactory_CreateWindowTree_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WindowManagerWindowTreeFactory_CreateWindowTree_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.treeRequest = handles[idx++];;
    this.client = handles[idx++];;
    return idx;
  };

  WindowManagerWindowTreeFactory_CreateWindowTree_Params.validate = function(messageValidator, offset) {
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


    // validate WindowManagerWindowTreeFactory_CreateWindowTree_Params.treeRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate WindowManagerWindowTreeFactory_CreateWindowTree_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 4, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WindowManagerWindowTreeFactory_CreateWindowTree_Params.encodedSize = codec.kStructHeaderSize + 16;

  WindowManagerWindowTreeFactory_CreateWindowTree_Params.decode = function(decoder) {
    var packed;
    var val = new WindowManagerWindowTreeFactory_CreateWindowTree_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.treeRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.client = decoder.decodeStruct(new codec.Interface(window_tree$.WindowTreeClientPtr));
    packed = decoder.readUint8();
    val.automaticallyCreateDisplayRoots = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WindowManagerWindowTreeFactory_CreateWindowTree_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WindowManagerWindowTreeFactory_CreateWindowTree_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.treeRequest);
    encoder.encodeStruct(new codec.Interface(window_tree$.WindowTreeClientPtr), val.client);
    packed = 0;
    packed |= (val.automaticallyCreateDisplayRoots & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kWindowManagerWindowTreeFactory_CreateWindowTree_Name = 1765266427;

  function WindowManagerWindowTreeFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(WindowManagerWindowTreeFactory,
                                                   handleOrPtrInfo);
  }

  function WindowManagerWindowTreeFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        WindowManagerWindowTreeFactory, associatedInterfacePtrInfo);
  }

  WindowManagerWindowTreeFactoryAssociatedPtr.prototype =
      Object.create(WindowManagerWindowTreeFactoryPtr.prototype);
  WindowManagerWindowTreeFactoryAssociatedPtr.prototype.constructor =
      WindowManagerWindowTreeFactoryAssociatedPtr;

  function WindowManagerWindowTreeFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  WindowManagerWindowTreeFactoryPtr.prototype.createWindowTree = function() {
    return WindowManagerWindowTreeFactoryProxy.prototype.createWindowTree
        .apply(this.ptr.getProxy(), arguments);
  };

  WindowManagerWindowTreeFactoryProxy.prototype.createWindowTree = function(treeRequest, client, automaticallyCreateDisplayRoots) {
    var params_ = new WindowManagerWindowTreeFactory_CreateWindowTree_Params();
    params_.treeRequest = treeRequest;
    params_.client = client;
    params_.automaticallyCreateDisplayRoots = automaticallyCreateDisplayRoots;
    var builder = new codec.MessageV0Builder(
        kWindowManagerWindowTreeFactory_CreateWindowTree_Name,
        codec.align(WindowManagerWindowTreeFactory_CreateWindowTree_Params.encodedSize));
    builder.encodeStruct(WindowManagerWindowTreeFactory_CreateWindowTree_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WindowManagerWindowTreeFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  WindowManagerWindowTreeFactoryStub.prototype.createWindowTree = function(treeRequest, client, automaticallyCreateDisplayRoots) {
    return this.delegate_ && this.delegate_.createWindowTree && this.delegate_.createWindowTree(treeRequest, client, automaticallyCreateDisplayRoots);
  }

  WindowManagerWindowTreeFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWindowManagerWindowTreeFactory_CreateWindowTree_Name:
      var params = reader.decodeStruct(WindowManagerWindowTreeFactory_CreateWindowTree_Params);
      this.createWindowTree(params.treeRequest, params.client, params.automaticallyCreateDisplayRoots);
      return true;
    default:
      return false;
    }
  };

  WindowManagerWindowTreeFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateWindowManagerWindowTreeFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWindowManagerWindowTreeFactory_CreateWindowTree_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WindowManagerWindowTreeFactory_CreateWindowTree_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWindowManagerWindowTreeFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WindowManagerWindowTreeFactory = {
    name: 'ui.mojom.WindowManagerWindowTreeFactory',
    kVersion: 0,
    ptrClass: WindowManagerWindowTreeFactoryPtr,
    proxyClass: WindowManagerWindowTreeFactoryProxy,
    stubClass: WindowManagerWindowTreeFactoryStub,
    validateRequest: validateWindowManagerWindowTreeFactoryRequest,
    validateResponse: null,
    mojomId: 'services/ui/public/interfaces/window_manager_window_tree_factory.mojom',
    fuzzMethods: {
      createWindowTree: {
        params: WindowManagerWindowTreeFactory_CreateWindowTree_Params,
      },
    },
  };
  WindowManagerWindowTreeFactoryStub.prototype.validator = validateWindowManagerWindowTreeFactoryRequest;
  WindowManagerWindowTreeFactoryProxy.prototype.validator = null;
  exports.WindowManagerWindowTreeFactory = WindowManagerWindowTreeFactory;
  exports.WindowManagerWindowTreeFactoryPtr = WindowManagerWindowTreeFactoryPtr;
  exports.WindowManagerWindowTreeFactoryAssociatedPtr = WindowManagerWindowTreeFactoryAssociatedPtr;
})();