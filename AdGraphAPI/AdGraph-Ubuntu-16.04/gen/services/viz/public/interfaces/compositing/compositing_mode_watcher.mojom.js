// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');



  function CompositingModeWatcher_CompositingModeFallbackToSoftware_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.prototype.initDefaults_ = function() {
  };
  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.generate = function(generator_) {
    var generated = new CompositingModeWatcher_CompositingModeFallbackToSoftware_Params;
    return generated;
  };

  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.validate = function(messageValidator, offset) {
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

  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.encodedSize = codec.kStructHeaderSize + 0;

  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.decode = function(decoder) {
    var packed;
    var val = new CompositingModeWatcher_CompositingModeFallbackToSoftware_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CompositingModeReporter_AddCompositingModeWatcher_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CompositingModeReporter_AddCompositingModeWatcher_Params.prototype.initDefaults_ = function() {
    this.watcher = new CompositingModeWatcherPtr();
  };
  CompositingModeReporter_AddCompositingModeWatcher_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CompositingModeReporter_AddCompositingModeWatcher_Params.generate = function(generator_) {
    var generated = new CompositingModeReporter_AddCompositingModeWatcher_Params;
    generated.watcher = generator_.generateInterface("viz.mojom.CompositingModeWatcher", false);
    return generated;
  };

  CompositingModeReporter_AddCompositingModeWatcher_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.watcher = mutator_.mutateInterface(this.watcher, "viz.mojom.CompositingModeWatcher", false);
    }
    return this;
  };
  CompositingModeReporter_AddCompositingModeWatcher_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.watcher !== null) {
      Array.prototype.push.apply(handles, ["viz.mojom.CompositingModeWatcherPtr"]);
    }
    return handles;
  };

  CompositingModeReporter_AddCompositingModeWatcher_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CompositingModeReporter_AddCompositingModeWatcher_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.watcher = handles[idx++];;
    return idx;
  };

  CompositingModeReporter_AddCompositingModeWatcher_Params.validate = function(messageValidator, offset) {
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


    // validate CompositingModeReporter_AddCompositingModeWatcher_Params.watcher
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CompositingModeReporter_AddCompositingModeWatcher_Params.encodedSize = codec.kStructHeaderSize + 8;

  CompositingModeReporter_AddCompositingModeWatcher_Params.decode = function(decoder) {
    var packed;
    var val = new CompositingModeReporter_AddCompositingModeWatcher_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.watcher = decoder.decodeStruct(new codec.Interface(CompositingModeWatcherPtr));
    return val;
  };

  CompositingModeReporter_AddCompositingModeWatcher_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CompositingModeReporter_AddCompositingModeWatcher_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(CompositingModeWatcherPtr), val.watcher);
  };
  var kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name = 1882575623;

  function CompositingModeWatcherPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CompositingModeWatcher,
                                                   handleOrPtrInfo);
  }

  function CompositingModeWatcherAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CompositingModeWatcher, associatedInterfacePtrInfo);
  }

  CompositingModeWatcherAssociatedPtr.prototype =
      Object.create(CompositingModeWatcherPtr.prototype);
  CompositingModeWatcherAssociatedPtr.prototype.constructor =
      CompositingModeWatcherAssociatedPtr;

  function CompositingModeWatcherProxy(receiver) {
    this.receiver_ = receiver;
  }
  CompositingModeWatcherPtr.prototype.compositingModeFallbackToSoftware = function() {
    return CompositingModeWatcherProxy.prototype.compositingModeFallbackToSoftware
        .apply(this.ptr.getProxy(), arguments);
  };

  CompositingModeWatcherProxy.prototype.compositingModeFallbackToSoftware = function() {
    var params_ = new CompositingModeWatcher_CompositingModeFallbackToSoftware_Params();
    var builder = new codec.MessageV0Builder(
        kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name,
        codec.align(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params.encodedSize));
    builder.encodeStruct(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CompositingModeWatcherStub(delegate) {
    this.delegate_ = delegate;
  }
  CompositingModeWatcherStub.prototype.compositingModeFallbackToSoftware = function() {
    return this.delegate_ && this.delegate_.compositingModeFallbackToSoftware && this.delegate_.compositingModeFallbackToSoftware();
  }

  CompositingModeWatcherStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name:
      var params = reader.decodeStruct(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params);
      this.compositingModeFallbackToSoftware();
      return true;
    default:
      return false;
    }
  };

  CompositingModeWatcherStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCompositingModeWatcherRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCompositingModeWatcher_CompositingModeFallbackToSoftware_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CompositingModeWatcher_CompositingModeFallbackToSoftware_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCompositingModeWatcherResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CompositingModeWatcher = {
    name: 'viz.mojom.CompositingModeWatcher',
    kVersion: 0,
    ptrClass: CompositingModeWatcherPtr,
    proxyClass: CompositingModeWatcherProxy,
    stubClass: CompositingModeWatcherStub,
    validateRequest: validateCompositingModeWatcherRequest,
    validateResponse: null,
    mojomId: 'services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom',
    fuzzMethods: {
      compositingModeFallbackToSoftware: {
        params: CompositingModeWatcher_CompositingModeFallbackToSoftware_Params,
      },
    },
  };
  CompositingModeWatcherStub.prototype.validator = validateCompositingModeWatcherRequest;
  CompositingModeWatcherProxy.prototype.validator = null;
  var kCompositingModeReporter_AddCompositingModeWatcher_Name = 1149942272;

  function CompositingModeReporterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CompositingModeReporter,
                                                   handleOrPtrInfo);
  }

  function CompositingModeReporterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CompositingModeReporter, associatedInterfacePtrInfo);
  }

  CompositingModeReporterAssociatedPtr.prototype =
      Object.create(CompositingModeReporterPtr.prototype);
  CompositingModeReporterAssociatedPtr.prototype.constructor =
      CompositingModeReporterAssociatedPtr;

  function CompositingModeReporterProxy(receiver) {
    this.receiver_ = receiver;
  }
  CompositingModeReporterPtr.prototype.addCompositingModeWatcher = function() {
    return CompositingModeReporterProxy.prototype.addCompositingModeWatcher
        .apply(this.ptr.getProxy(), arguments);
  };

  CompositingModeReporterProxy.prototype.addCompositingModeWatcher = function(watcher) {
    var params_ = new CompositingModeReporter_AddCompositingModeWatcher_Params();
    params_.watcher = watcher;
    var builder = new codec.MessageV0Builder(
        kCompositingModeReporter_AddCompositingModeWatcher_Name,
        codec.align(CompositingModeReporter_AddCompositingModeWatcher_Params.encodedSize));
    builder.encodeStruct(CompositingModeReporter_AddCompositingModeWatcher_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CompositingModeReporterStub(delegate) {
    this.delegate_ = delegate;
  }
  CompositingModeReporterStub.prototype.addCompositingModeWatcher = function(watcher) {
    return this.delegate_ && this.delegate_.addCompositingModeWatcher && this.delegate_.addCompositingModeWatcher(watcher);
  }

  CompositingModeReporterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCompositingModeReporter_AddCompositingModeWatcher_Name:
      var params = reader.decodeStruct(CompositingModeReporter_AddCompositingModeWatcher_Params);
      this.addCompositingModeWatcher(params.watcher);
      return true;
    default:
      return false;
    }
  };

  CompositingModeReporterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCompositingModeReporterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCompositingModeReporter_AddCompositingModeWatcher_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CompositingModeReporter_AddCompositingModeWatcher_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCompositingModeReporterResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CompositingModeReporter = {
    name: 'viz.mojom.CompositingModeReporter',
    kVersion: 0,
    ptrClass: CompositingModeReporterPtr,
    proxyClass: CompositingModeReporterProxy,
    stubClass: CompositingModeReporterStub,
    validateRequest: validateCompositingModeReporterRequest,
    validateResponse: null,
    mojomId: 'services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom',
    fuzzMethods: {
      addCompositingModeWatcher: {
        params: CompositingModeReporter_AddCompositingModeWatcher_Params,
      },
    },
  };
  CompositingModeReporterStub.prototype.validator = validateCompositingModeReporterRequest;
  CompositingModeReporterProxy.prototype.validator = null;
  exports.CompositingModeWatcher = CompositingModeWatcher;
  exports.CompositingModeWatcherPtr = CompositingModeWatcherPtr;
  exports.CompositingModeWatcherAssociatedPtr = CompositingModeWatcherAssociatedPtr;
  exports.CompositingModeReporter = CompositingModeReporter;
  exports.CompositingModeReporterPtr = CompositingModeReporterPtr;
  exports.CompositingModeReporterAssociatedPtr = CompositingModeReporterAssociatedPtr;
})();