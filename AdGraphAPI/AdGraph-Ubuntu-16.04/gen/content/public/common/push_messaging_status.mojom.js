// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/push_messaging_status.mojom';
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


  var PushDeliveryStatus = {};
  PushDeliveryStatus.SUCCESS = 0;
  PushDeliveryStatus.UNKNOWN_APP_ID = 2;
  PushDeliveryStatus.PERMISSION_DENIED = 3;
  PushDeliveryStatus.NO_SERVICE_WORKER = 4;
  PushDeliveryStatus.SERVICE_WORKER_ERROR = 5;
  PushDeliveryStatus.EVENT_WAITUNTIL_REJECTED = 6;
  PushDeliveryStatus.TIMEOUT = 7;

  PushDeliveryStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  PushDeliveryStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PushGetRegistrationStatus = {};
  PushGetRegistrationStatus.SUCCESS = 0;
  PushGetRegistrationStatus.SERVICE_NOT_AVAILABLE = 1;
  PushGetRegistrationStatus.STORAGE_ERROR = 2;
  PushGetRegistrationStatus.REGISTRATION_NOT_FOUND = 3;
  PushGetRegistrationStatus.INCOGNITO_REGISTRATION_NOT_FOUND = 4;
  PushGetRegistrationStatus.STORAGE_CORRUPT = 6;
  PushGetRegistrationStatus.RENDERER_SHUTDOWN = 7;
  PushGetRegistrationStatus.NO_LIVE_SERVICE_WORKER = 8;

  PushGetRegistrationStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
      return true;
    }
    return false;
  };

  PushGetRegistrationStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PushRegistrationStatus = {};
  PushRegistrationStatus.SUCCESS_FROM_PUSH_SERVICE = 0;
  PushRegistrationStatus.NO_SERVICE_WORKER = 1;
  PushRegistrationStatus.SERVICE_NOT_AVAILABLE = 2;
  PushRegistrationStatus.LIMIT_REACHED = 3;
  PushRegistrationStatus.PERMISSION_DENIED = 4;
  PushRegistrationStatus.SERVICE_ERROR = 5;
  PushRegistrationStatus.NO_SENDER_ID = 6;
  PushRegistrationStatus.STORAGE_ERROR = 7;
  PushRegistrationStatus.SUCCESS_FROM_CACHE = 8;
  PushRegistrationStatus.NETWORK_ERROR = 9;
  PushRegistrationStatus.INCOGNITO_PERMISSION_DENIED = 10;
  PushRegistrationStatus.PUBLIC_KEY_UNAVAILABLE = 11;
  PushRegistrationStatus.MANIFEST_EMPTY_OR_MISSING = 12;
  PushRegistrationStatus.SENDER_ID_MISMATCH = 13;
  PushRegistrationStatus.STORAGE_CORRUPT = 14;
  PushRegistrationStatus.RENDERER_SHUTDOWN = 15;
  PushRegistrationStatus.SUCCESS_NEW_SUBSCRIPTION_FROM_PUSH_SERVICE = 16;

  PushRegistrationStatus.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  PushRegistrationStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PushUnregistrationReason = {};
  PushUnregistrationReason.UNKNOWN = 0;
  PushUnregistrationReason.JAVASCRIPT_API = 1;
  PushUnregistrationReason.PERMISSION_REVOKED = 2;
  PushUnregistrationReason.DELIVERY_UNKNOWN_APP_ID = 3;
  PushUnregistrationReason.DELIVERY_PERMISSION_DENIED = 4;
  PushUnregistrationReason.DELIVERY_NO_SERVICE_WORKER = 5;
  PushUnregistrationReason.GCM_STORE_RESET = 6;
  PushUnregistrationReason.SERVICE_WORKER_UNREGISTERED = 7;
  PushUnregistrationReason.SUBSCRIBE_STORAGE_CORRUPT = 8;
  PushUnregistrationReason.GET_SUBSCRIPTION_STORAGE_CORRUPT = 9;
  PushUnregistrationReason.SERVICE_WORKER_DATABASE_WIPED = 10;

  PushUnregistrationReason.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  PushUnregistrationReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PushUnregistrationStatus = {};
  PushUnregistrationStatus.SUCCESS_UNREGISTERED = 0;
  PushUnregistrationStatus.SUCCESS_WAS_NOT_REGISTERED = 1;
  PushUnregistrationStatus.PENDING_NETWORK_ERROR = 2;
  PushUnregistrationStatus.NO_SERVICE_WORKER = 3;
  PushUnregistrationStatus.SERVICE_NOT_AVAILABLE = 4;
  PushUnregistrationStatus.PENDING_SERVICE_ERROR = 5;
  PushUnregistrationStatus.STORAGE_ERROR = 6;
  PushUnregistrationStatus.NETWORK_ERROR = 7;

  PushUnregistrationStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  PushUnregistrationStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PushUserVisibleStatus = {};
  PushUserVisibleStatus.REQUIRED_AND_SHOWN = 0;
  PushUserVisibleStatus.NOT_REQUIRED_BUT_SHOWN = 1;
  PushUserVisibleStatus.NOT_REQUIRED_AND_NOT_SHOWN = 2;
  PushUserVisibleStatus.REQUIRED_BUT_NOT_SHOWN_USED_GRACE = 3;
  PushUserVisibleStatus.REQUIRED_BUT_NOT_SHOWN_GRACE_EXCEEDED = 4;

  PushUserVisibleStatus.isKnownEnumValue = function(value) {
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

  PushUserVisibleStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.PushDeliveryStatus = PushDeliveryStatus;
  exports.PushGetRegistrationStatus = PushGetRegistrationStatus;
  exports.PushRegistrationStatus = PushRegistrationStatus;
  exports.PushUnregistrationReason = PushUnregistrationReason;
  exports.PushUnregistrationStatus = PushUnregistrationStatus;
  exports.PushUserVisibleStatus = PushUserVisibleStatus;
})();