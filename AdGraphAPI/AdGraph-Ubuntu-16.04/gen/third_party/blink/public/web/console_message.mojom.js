// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/web/console_message.mojom';
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


  var ConsoleMessageLevel = {};
  ConsoleMessageLevel.Verbose = 0;
  ConsoleMessageLevel.Info = ConsoleMessageLevel.Verbose + 1;
  ConsoleMessageLevel.Warning = ConsoleMessageLevel.Info + 1;
  ConsoleMessageLevel.Error = ConsoleMessageLevel.Warning + 1;

  ConsoleMessageLevel.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  ConsoleMessageLevel.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.ConsoleMessageLevel = ConsoleMessageLevel;
})();