// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/testing_controls.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('videoCapture.mojom');



  function TestingControls_Crash_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TestingControls_Crash_Params.prototype.initDefaults_ = function() {
  };
  TestingControls_Crash_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TestingControls_Crash_Params.generate = function(generator_) {
    var generated = new TestingControls_Crash_Params;
    return generated;
  };

  TestingControls_Crash_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  TestingControls_Crash_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TestingControls_Crash_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TestingControls_Crash_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TestingControls_Crash_Params.validate = function(messageValidator, offset) {
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

  TestingControls_Crash_Params.encodedSize = codec.kStructHeaderSize + 0;

  TestingControls_Crash_Params.decode = function(decoder) {
    var packed;
    var val = new TestingControls_Crash_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  TestingControls_Crash_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TestingControls_Crash_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kTestingControls_Crash_Name = 607678176;

  function TestingControlsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TestingControls,
                                                   handleOrPtrInfo);
  }

  function TestingControlsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TestingControls, associatedInterfacePtrInfo);
  }

  TestingControlsAssociatedPtr.prototype =
      Object.create(TestingControlsPtr.prototype);
  TestingControlsAssociatedPtr.prototype.constructor =
      TestingControlsAssociatedPtr;

  function TestingControlsProxy(receiver) {
    this.receiver_ = receiver;
  }
  TestingControlsPtr.prototype.crash = function() {
    return TestingControlsProxy.prototype.crash
        .apply(this.ptr.getProxy(), arguments);
  };

  TestingControlsProxy.prototype.crash = function() {
    var params_ = new TestingControls_Crash_Params();
    var builder = new codec.MessageV0Builder(
        kTestingControls_Crash_Name,
        codec.align(TestingControls_Crash_Params.encodedSize));
    builder.encodeStruct(TestingControls_Crash_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TestingControlsStub(delegate) {
    this.delegate_ = delegate;
  }
  TestingControlsStub.prototype.crash = function() {
    return this.delegate_ && this.delegate_.crash && this.delegate_.crash();
  }

  TestingControlsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTestingControls_Crash_Name:
      var params = reader.decodeStruct(TestingControls_Crash_Params);
      this.crash();
      return true;
    default:
      return false;
    }
  };

  TestingControlsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTestingControlsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTestingControls_Crash_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TestingControls_Crash_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTestingControlsResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TestingControls = {
    name: 'video_capture.mojom.TestingControls',
    kVersion: 0,
    ptrClass: TestingControlsPtr,
    proxyClass: TestingControlsProxy,
    stubClass: TestingControlsStub,
    validateRequest: validateTestingControlsRequest,
    validateResponse: null,
    mojomId: 'services/video_capture/public/mojom/testing_controls.mojom',
    fuzzMethods: {
      crash: {
        params: TestingControls_Crash_Params,
      },
    },
  };
  TestingControlsStub.prototype.validator = validateTestingControlsRequest;
  TestingControlsProxy.prototype.validator = null;
  exports.TestingControls = TestingControls;
  exports.TestingControlsPtr = TestingControlsPtr;
  exports.TestingControlsAssociatedPtr = TestingControlsAssociatedPtr;
})();