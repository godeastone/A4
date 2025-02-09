// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'skia/public/interfaces/blur_image_filter_tile_mode.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('skia.mojom');


  var BlurTileMode = {};
  BlurTileMode.CLAMP = 0;
  BlurTileMode.REPEAT = BlurTileMode.CLAMP + 1;
  BlurTileMode.CLAMP_TO_BLACK = BlurTileMode.REPEAT + 1;
  BlurTileMode.BLUR_TILE_MODE_LAST = BlurTileMode.CLAMP_TO_BLACK;

  BlurTileMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  BlurTileMode.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.BlurTileMode = BlurTileMode;
})();