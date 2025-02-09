// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/video_capture/public/mojom/scoped_access_permission.mojom';
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




  function ScopedAccessPermissionPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ScopedAccessPermission,
                                                   handleOrPtrInfo);
  }

  function ScopedAccessPermissionAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ScopedAccessPermission, associatedInterfacePtrInfo);
  }

  ScopedAccessPermissionAssociatedPtr.prototype =
      Object.create(ScopedAccessPermissionPtr.prototype);
  ScopedAccessPermissionAssociatedPtr.prototype.constructor =
      ScopedAccessPermissionAssociatedPtr;

  function ScopedAccessPermissionProxy(receiver) {
    this.receiver_ = receiver;
  }

  function ScopedAccessPermissionStub(delegate) {
    this.delegate_ = delegate;
  }

  ScopedAccessPermissionStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ScopedAccessPermissionStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateScopedAccessPermissionRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateScopedAccessPermissionResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ScopedAccessPermission = {
    name: 'video_capture.mojom.ScopedAccessPermission',
    kVersion: 0,
    ptrClass: ScopedAccessPermissionPtr,
    proxyClass: ScopedAccessPermissionProxy,
    stubClass: ScopedAccessPermissionStub,
    validateRequest: validateScopedAccessPermissionRequest,
    validateResponse: null,
    mojomId: 'services/video_capture/public/mojom/scoped_access_permission.mojom',
    fuzzMethods: {
    },
  };
  ScopedAccessPermissionStub.prototype.validator = validateScopedAccessPermissionRequest;
  ScopedAccessPermissionProxy.prototype.validator = null;
  exports.ScopedAccessPermission = ScopedAccessPermission;
  exports.ScopedAccessPermissionPtr = ScopedAccessPermissionPtr;
  exports.ScopedAccessPermissionAssociatedPtr = ScopedAccessPermissionAssociatedPtr;
})();