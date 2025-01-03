// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/quota/quota_types.mojom';
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


  var StorageType = {};
  StorageType.kTemporary = 0;
  StorageType.kPersistent = StorageType.kTemporary + 1;
  StorageType.kSyncable = StorageType.kPersistent + 1;
  StorageType.kQuotaNotManaged = StorageType.kSyncable + 1;
  StorageType.kUnknown = StorageType.kQuotaNotManaged + 1;

  StorageType.isKnownEnumValue = function(value) {
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

  StorageType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var QuotaStatusCode = {};
  QuotaStatusCode.kOk = 0;
  QuotaStatusCode.kErrorNotSupported = 7;
  QuotaStatusCode.kErrorInvalidModification = 11;
  QuotaStatusCode.kErrorInvalidAccess = 13;
  QuotaStatusCode.kErrorAbort = 17;
  QuotaStatusCode.kUnknown = -1;

  QuotaStatusCode.isKnownEnumValue = function(value) {
    switch (value) {
    case -1:
    case 0:
    case 7:
    case 11:
    case 13:
    case 17:
      return true;
    }
    return false;
  };

  QuotaStatusCode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.StorageType = StorageType;
  exports.QuotaStatusCode = QuotaStatusCode;
})();