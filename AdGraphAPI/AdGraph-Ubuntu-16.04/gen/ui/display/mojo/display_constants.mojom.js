// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/display/mojo/display_constants.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('display.mojom');


  var DisplayConnectionType = {};
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_NONE = 0;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_UNKNOWN = 1;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_INTERNAL = 2;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_VGA = 4;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_HDMI = 8;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_DVI = 16;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_DISPLAYPORT = 32;
  DisplayConnectionType.DISPLAY_CONNECTION_TYPE_NETWORK = 64;

  DisplayConnectionType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
      return true;
    }
    return false;
  };

  DisplayConnectionType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var HDCPState = {};
  HDCPState.HDCP_STATE_UNDESIRED = 0;
  HDCPState.HDCP_STATE_DESIRED = HDCPState.HDCP_STATE_UNDESIRED + 1;
  HDCPState.HDCP_STATE_ENABLED = HDCPState.HDCP_STATE_DESIRED + 1;

  HDCPState.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  HDCPState.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.DisplayConnectionType = DisplayConnectionType;
  exports.HDCPState = HDCPState;
})();