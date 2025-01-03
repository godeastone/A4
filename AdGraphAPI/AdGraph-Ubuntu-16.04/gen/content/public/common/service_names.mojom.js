// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/service_names.mojom';
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


  var kBrowserServiceName = "content_browser";
  var kGpuServiceName = "content_gpu";
  var kPackagedServicesServiceName = "content_packaged_services";
  var kPluginServiceName = "content_plugin";
  var kRendererServiceName = "content_renderer";
  var kUtilityServiceName = "content_utility";
  var kNetworkServiceName = "network";

  exports.kBrowserServiceName = kBrowserServiceName;
  exports.kGpuServiceName = kGpuServiceName;
  exports.kPackagedServicesServiceName = kPackagedServicesServiceName;
  exports.kPluginServiceName = kPluginServiceName;
  exports.kRendererServiceName = kRendererServiceName;
  exports.kUtilityServiceName = kUtilityServiceName;
  exports.kNetworkServiceName = kNetworkServiceName;
})();