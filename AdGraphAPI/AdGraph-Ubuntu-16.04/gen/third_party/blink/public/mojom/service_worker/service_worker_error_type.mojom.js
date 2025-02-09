// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom';
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


  var ServiceWorkerErrorType = {};
  ServiceWorkerErrorType.kNone = 0;
  ServiceWorkerErrorType.kAbort = ServiceWorkerErrorType.kNone + 1;
  ServiceWorkerErrorType.kActivate = ServiceWorkerErrorType.kAbort + 1;
  ServiceWorkerErrorType.kDisabled = ServiceWorkerErrorType.kActivate + 1;
  ServiceWorkerErrorType.kInstall = ServiceWorkerErrorType.kDisabled + 1;
  ServiceWorkerErrorType.kNavigation = ServiceWorkerErrorType.kInstall + 1;
  ServiceWorkerErrorType.kNetwork = ServiceWorkerErrorType.kNavigation + 1;
  ServiceWorkerErrorType.kNotFound = ServiceWorkerErrorType.kNetwork + 1;
  ServiceWorkerErrorType.kScriptEvaluateFailed = ServiceWorkerErrorType.kNotFound + 1;
  ServiceWorkerErrorType.kSecurity = ServiceWorkerErrorType.kScriptEvaluateFailed + 1;
  ServiceWorkerErrorType.kState = ServiceWorkerErrorType.kSecurity + 1;
  ServiceWorkerErrorType.kTimeout = ServiceWorkerErrorType.kState + 1;
  ServiceWorkerErrorType.kType = ServiceWorkerErrorType.kTimeout + 1;
  ServiceWorkerErrorType.kUnknown = ServiceWorkerErrorType.kType + 1;

  ServiceWorkerErrorType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
      return true;
    }
    return false;
  };

  ServiceWorkerErrorType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ServiceWorkerResponseError = {};
  ServiceWorkerResponseError.kUnknown = 0;
  ServiceWorkerResponseError.kPromiseRejected = 1;
  ServiceWorkerResponseError.kDefaultPrevented = 2;
  ServiceWorkerResponseError.kNoV8Instance = 3;
  ServiceWorkerResponseError.kResponseTypeError = 4;
  ServiceWorkerResponseError.kResponseTypeOpaque = 5;
  ServiceWorkerResponseError.kResponseTypeNotBasicOrDefault = 6;
  ServiceWorkerResponseError.kBodyUsed = 7;
  ServiceWorkerResponseError.kResponseTypeOpaqueForClientRequest = 8;
  ServiceWorkerResponseError.kResponseTypeOpaqueRedirect = 9;
  ServiceWorkerResponseError.kBodyLocked = 10;
  ServiceWorkerResponseError.kRedirectedResponseForNotFollowRequest = 14;
  ServiceWorkerResponseError.kDataPipeCreationFailed = 15;
  ServiceWorkerResponseError.kResponseTypeCORSForRequestModeSameOrigin = 16;

  ServiceWorkerResponseError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 14:
    case 15:
    case 16:
      return true;
    }
    return false;
  };

  ServiceWorkerResponseError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.ServiceWorkerErrorType = ServiceWorkerErrorType;
  exports.ServiceWorkerResponseError = ServiceWorkerResponseError;
})();