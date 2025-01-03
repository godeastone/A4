// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/resource_type.mojom';
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


  var ResourceType = {};
  ResourceType.RESOURCE_TYPE_MAIN_FRAME = 0;
  ResourceType.RESOURCE_TYPE_SUB_FRAME = 1;
  ResourceType.RESOURCE_TYPE_STYLESHEET = 2;
  ResourceType.RESOURCE_TYPE_SCRIPT = 3;
  ResourceType.RESOURCE_TYPE_IMAGE = 4;
  ResourceType.RESOURCE_TYPE_FONT_RESOURCE = 5;
  ResourceType.RESOURCE_TYPE_SUB_RESOURCE = 6;
  ResourceType.RESOURCE_TYPE_OBJECT = 7;
  ResourceType.RESOURCE_TYPE_MEDIA = 8;
  ResourceType.RESOURCE_TYPE_WORKER = 9;
  ResourceType.RESOURCE_TYPE_SHARED_WORKER = 10;
  ResourceType.RESOURCE_TYPE_PREFETCH = 11;
  ResourceType.RESOURCE_TYPE_FAVICON = 12;
  ResourceType.RESOURCE_TYPE_XHR = 13;
  ResourceType.RESOURCE_TYPE_PING = 14;
  ResourceType.RESOURCE_TYPE_SERVICE_WORKER = 15;
  ResourceType.RESOURCE_TYPE_CSP_REPORT = 16;
  ResourceType.RESOURCE_TYPE_PLUGIN_RESOURCE = 17;
  ResourceType.RESOURCE_TYPE_LAST_TYPE = ResourceType.RESOURCE_TYPE_PLUGIN_RESOURCE + 1;

  ResourceType.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  ResourceType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.ResourceType = ResourceType;
})();