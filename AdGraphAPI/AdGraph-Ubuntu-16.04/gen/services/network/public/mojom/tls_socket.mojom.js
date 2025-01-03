// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/tls_socket.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');
  var ip_endpoint$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_endpoint.mojom', '../../../../net/interfaces/ip_endpoint.mojom.js');
  }




  function TLSClientSocketPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TLSClientSocket,
                                                   handleOrPtrInfo);
  }

  function TLSClientSocketAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TLSClientSocket, associatedInterfacePtrInfo);
  }

  TLSClientSocketAssociatedPtr.prototype =
      Object.create(TLSClientSocketPtr.prototype);
  TLSClientSocketAssociatedPtr.prototype.constructor =
      TLSClientSocketAssociatedPtr;

  function TLSClientSocketProxy(receiver) {
    this.receiver_ = receiver;
  }

  function TLSClientSocketStub(delegate) {
    this.delegate_ = delegate;
  }

  TLSClientSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  TLSClientSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTLSClientSocketRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateTLSClientSocketResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TLSClientSocket = {
    name: 'network.mojom.TLSClientSocket',
    kVersion: 0,
    ptrClass: TLSClientSocketPtr,
    proxyClass: TLSClientSocketProxy,
    stubClass: TLSClientSocketStub,
    validateRequest: validateTLSClientSocketRequest,
    validateResponse: null,
    mojomId: 'services/network/public/mojom/tls_socket.mojom',
    fuzzMethods: {
    },
  };
  TLSClientSocketStub.prototype.validator = validateTLSClientSocketRequest;
  TLSClientSocketProxy.prototype.validator = null;
  exports.TLSClientSocket = TLSClientSocket;
  exports.TLSClientSocketPtr = TLSClientSocketPtr;
  exports.TLSClientSocketAssociatedPtr = TLSClientSocketAssociatedPtr;
})();