// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/child.mojom';
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




  function ChildPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Child,
                                                   handleOrPtrInfo);
  }

  function ChildAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Child, associatedInterfacePtrInfo);
  }

  ChildAssociatedPtr.prototype =
      Object.create(ChildPtr.prototype);
  ChildAssociatedPtr.prototype.constructor =
      ChildAssociatedPtr;

  function ChildProxy(receiver) {
    this.receiver_ = receiver;
  }

  function ChildStub(delegate) {
    this.delegate_ = delegate;
  }

  ChildStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ChildStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateChildRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateChildResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Child = {
    name: 'content.mojom.Child',
    kVersion: 0,
    ptrClass: ChildPtr,
    proxyClass: ChildProxy,
    stubClass: ChildStub,
    validateRequest: validateChildRequest,
    validateResponse: null,
    mojomId: 'content/common/child.mojom',
    fuzzMethods: {
    },
  };
  ChildStub.prototype.validator = validateChildRequest;
  ChildProxy.prototype.validator = null;
  exports.Child = Child;
  exports.ChildPtr = ChildPtr;
  exports.ChildAssociatedPtr = ChildAssociatedPtr;
})();