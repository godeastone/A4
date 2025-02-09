// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'extensions/common/mojo/keep_alive.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('extensions');




  function KeepAlivePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(KeepAlive,
                                                   handleOrPtrInfo);
  }

  function KeepAliveAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        KeepAlive, associatedInterfacePtrInfo);
  }

  KeepAliveAssociatedPtr.prototype =
      Object.create(KeepAlivePtr.prototype);
  KeepAliveAssociatedPtr.prototype.constructor =
      KeepAliveAssociatedPtr;

  function KeepAliveProxy(receiver) {
    this.receiver_ = receiver;
  }

  function KeepAliveStub(delegate) {
    this.delegate_ = delegate;
  }

  KeepAliveStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  KeepAliveStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateKeepAliveRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateKeepAliveResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var KeepAlive = {
    name: 'extensions.KeepAlive',
    kVersion: 0,
    ptrClass: KeepAlivePtr,
    proxyClass: KeepAliveProxy,
    stubClass: KeepAliveStub,
    validateRequest: validateKeepAliveRequest,
    validateResponse: null,
    mojomId: 'extensions/common/mojo/keep_alive.mojom',
    fuzzMethods: {
    },
  };
  KeepAliveStub.prototype.validator = validateKeepAliveRequest;
  KeepAliveProxy.prototype.validator = null;
  exports.KeepAlive = KeepAlive;
  exports.KeepAlivePtr = KeepAlivePtr;
  exports.KeepAliveAssociatedPtr = KeepAliveAssociatedPtr;
})();