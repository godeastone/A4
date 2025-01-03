// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/cors.mojom';
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


  var CORSPreflightPolicy = {};
  CORSPreflightPolicy.kConsiderPreflight = 0;
  CORSPreflightPolicy.kPreventPreflight = CORSPreflightPolicy.kConsiderPreflight + 1;

  CORSPreflightPolicy.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  CORSPreflightPolicy.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CORSError = {};
  CORSError.kDisallowedByMode = 0;
  CORSError.kInvalidResponse = CORSError.kDisallowedByMode + 1;
  CORSError.kWildcardOriginNotAllowed = CORSError.kInvalidResponse + 1;
  CORSError.kMissingAllowOriginHeader = CORSError.kWildcardOriginNotAllowed + 1;
  CORSError.kMultipleAllowOriginValues = CORSError.kMissingAllowOriginHeader + 1;
  CORSError.kInvalidAllowOriginValue = CORSError.kMultipleAllowOriginValues + 1;
  CORSError.kAllowOriginMismatch = CORSError.kInvalidAllowOriginValue + 1;
  CORSError.kInvalidAllowCredentials = CORSError.kAllowOriginMismatch + 1;
  CORSError.kPreflightInvalidStatus = CORSError.kInvalidAllowCredentials + 1;
  CORSError.kPreflightDisallowedRedirect = CORSError.kPreflightInvalidStatus + 1;
  CORSError.kPreflightWildcardOriginNotAllowed = CORSError.kPreflightDisallowedRedirect + 1;
  CORSError.kPreflightMissingAllowOriginHeader = CORSError.kPreflightWildcardOriginNotAllowed + 1;
  CORSError.kPreflightMultipleAllowOriginValues = CORSError.kPreflightMissingAllowOriginHeader + 1;
  CORSError.kPreflightInvalidAllowOriginValue = CORSError.kPreflightMultipleAllowOriginValues + 1;
  CORSError.kPreflightAllowOriginMismatch = CORSError.kPreflightInvalidAllowOriginValue + 1;
  CORSError.kPreflightInvalidAllowCredentials = CORSError.kPreflightAllowOriginMismatch + 1;
  CORSError.kPreflightMissingAllowExternal = CORSError.kPreflightInvalidAllowCredentials + 1;
  CORSError.kPreflightInvalidAllowExternal = CORSError.kPreflightMissingAllowExternal + 1;
  CORSError.kInvalidAllowMethodsPreflightResponse = CORSError.kPreflightInvalidAllowExternal + 1;
  CORSError.kInvalidAllowHeadersPreflightResponse = CORSError.kInvalidAllowMethodsPreflightResponse + 1;
  CORSError.kMethodDisallowedByPreflightResponse = CORSError.kInvalidAllowHeadersPreflightResponse + 1;
  CORSError.kHeaderDisallowedByPreflightResponse = CORSError.kMethodDisallowedByPreflightResponse + 1;
  CORSError.kRedirectDisallowedScheme = CORSError.kHeaderDisallowedByPreflightResponse + 1;
  CORSError.kRedirectContainsCredentials = CORSError.kRedirectDisallowedScheme + 1;

  CORSError.isKnownEnumValue = function(value) {
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
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      return true;
    }
    return false;
  };

  CORSError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.CORSPreflightPolicy = CORSPreflightPolicy;
  exports.CORSError = CORSError;
})();