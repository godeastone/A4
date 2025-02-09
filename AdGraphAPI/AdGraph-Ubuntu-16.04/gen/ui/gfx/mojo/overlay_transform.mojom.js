// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/overlay_transform.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gfx.mojom');


  var OverlayTransform = {};
  OverlayTransform.OVERLAY_TRANSFORM_INVALID = 0;
  OverlayTransform.OVERLAY_TRANSFORM_NONE = OverlayTransform.OVERLAY_TRANSFORM_INVALID + 1;
  OverlayTransform.OVERLAY_TRANSFORM_FLIP_HORIZONTAL = OverlayTransform.OVERLAY_TRANSFORM_NONE + 1;
  OverlayTransform.OVERLAY_TRANSFORM_FLIP_VERTICAL = OverlayTransform.OVERLAY_TRANSFORM_FLIP_HORIZONTAL + 1;
  OverlayTransform.OVERLAY_TRANSFORM_ROTATE_90 = OverlayTransform.OVERLAY_TRANSFORM_FLIP_VERTICAL + 1;
  OverlayTransform.OVERLAY_TRANSFORM_ROTATE_180 = OverlayTransform.OVERLAY_TRANSFORM_ROTATE_90 + 1;
  OverlayTransform.OVERLAY_TRANSFORM_ROTATE_270 = OverlayTransform.OVERLAY_TRANSFORM_ROTATE_180 + 1;
  OverlayTransform.OVERLAY_TRANSFORM_LAST = OverlayTransform.OVERLAY_TRANSFORM_ROTATE_270;

  OverlayTransform.isKnownEnumValue = function(value) {
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

  OverlayTransform.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.OverlayTransform = OverlayTransform;
})();