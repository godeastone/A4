// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/base/mojo/window_open_disposition.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');


  var WindowOpenDisposition = {};
  WindowOpenDisposition.UNKNOWN = 0;
  WindowOpenDisposition.CURRENT_TAB = WindowOpenDisposition.UNKNOWN + 1;
  WindowOpenDisposition.SINGLETON_TAB = WindowOpenDisposition.CURRENT_TAB + 1;
  WindowOpenDisposition.NEW_FOREGROUND_TAB = WindowOpenDisposition.SINGLETON_TAB + 1;
  WindowOpenDisposition.NEW_BACKGROUND_TAB = WindowOpenDisposition.NEW_FOREGROUND_TAB + 1;
  WindowOpenDisposition.NEW_POPUP = WindowOpenDisposition.NEW_BACKGROUND_TAB + 1;
  WindowOpenDisposition.NEW_WINDOW = WindowOpenDisposition.NEW_POPUP + 1;
  WindowOpenDisposition.SAVE_TO_DISK = WindowOpenDisposition.NEW_WINDOW + 1;
  WindowOpenDisposition.OFF_THE_RECORD = WindowOpenDisposition.SAVE_TO_DISK + 1;
  WindowOpenDisposition.IGNORE_ACTION = WindowOpenDisposition.OFF_THE_RECORD + 1;
  WindowOpenDisposition.SWITCH_TO_TAB = WindowOpenDisposition.IGNORE_ACTION + 1;

  WindowOpenDisposition.isKnownEnumValue = function(value) {
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

  WindowOpenDisposition.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.WindowOpenDisposition = WindowOpenDisposition;
})();