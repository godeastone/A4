// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/fetch_api.mojom';
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


  var FetchRequestMode = {};
  FetchRequestMode.kSameOrigin = 0;
  FetchRequestMode.kNoCORS = FetchRequestMode.kSameOrigin + 1;
  FetchRequestMode.kCORS = FetchRequestMode.kNoCORS + 1;
  FetchRequestMode.kCORSWithForcedPreflight = FetchRequestMode.kCORS + 1;
  FetchRequestMode.kNavigate = FetchRequestMode.kCORSWithForcedPreflight + 1;

  FetchRequestMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  FetchRequestMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FetchRedirectMode = {};
  FetchRedirectMode.kFollow = 0;
  FetchRedirectMode.kError = FetchRedirectMode.kFollow + 1;
  FetchRedirectMode.kManual = FetchRedirectMode.kError + 1;

  FetchRedirectMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  FetchRedirectMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FetchCredentialsMode = {};
  FetchCredentialsMode.kOmit = 0;
  FetchCredentialsMode.kSameOrigin = FetchCredentialsMode.kOmit + 1;
  FetchCredentialsMode.kInclude = FetchCredentialsMode.kSameOrigin + 1;

  FetchCredentialsMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  FetchCredentialsMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FetchResponseType = {};
  FetchResponseType.kBasic = 0;
  FetchResponseType.kCORS = FetchResponseType.kBasic + 1;
  FetchResponseType.kDefault = FetchResponseType.kCORS + 1;
  FetchResponseType.kError = FetchResponseType.kDefault + 1;
  FetchResponseType.kOpaque = FetchResponseType.kError + 1;
  FetchResponseType.kOpaqueRedirect = FetchResponseType.kOpaque + 1;

  FetchResponseType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  FetchResponseType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.FetchRequestMode = FetchRequestMode;
  exports.FetchRedirectMode = FetchRedirectMode;
  exports.FetchCredentialsMode = FetchCredentialsMode;
  exports.FetchResponseType = FetchResponseType;
})();