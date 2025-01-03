// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/tracing/public/mojom/constants.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('tracing.mojom');


  var kStopTracingRetryTimeMilliseconds = 100;
  var kServiceName = "tracing";
  var kChromeTraceEventLabel = "traceEvents";

  exports.kStopTracingRetryTimeMilliseconds = kStopTracingRetryTimeMilliseconds;
  exports.kServiceName = kServiceName;
  exports.kChromeTraceEventLabel = kChromeTraceEventLabel;
})();