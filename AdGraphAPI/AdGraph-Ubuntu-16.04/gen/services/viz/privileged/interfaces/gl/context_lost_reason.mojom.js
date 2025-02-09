// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/privileged/interfaces/gl/context_lost_reason.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');


  var ContextLostReason = {};
  ContextLostReason.GUILTY = 0;
  ContextLostReason.INNOCENT = ContextLostReason.GUILTY + 1;
  ContextLostReason.UNKNOWN = ContextLostReason.INNOCENT + 1;
  ContextLostReason.OUT_OF_MEMORY = ContextLostReason.UNKNOWN + 1;
  ContextLostReason.MAKE_CURRENT_FAILED = ContextLostReason.OUT_OF_MEMORY + 1;
  ContextLostReason.GPU_CHANNEL_LOST = ContextLostReason.MAKE_CURRENT_FAILED + 1;
  ContextLostReason.INVALID_GPU_MESSAGE = ContextLostReason.GPU_CHANNEL_LOST + 1;

  ContextLostReason.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  ContextLostReason.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.ContextLostReason = ContextLostReason;
})();