// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/resource_coordinator/public/mojom/signals.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('resourceCoordinator.mojom');


  var Event = {};
  Event.kTestEvent = 0;
  Event.kAlertFired = Event.kTestEvent + 1;
  Event.kFaviconUpdated = Event.kAlertFired + 1;
  Event.kNavigationCommitted = Event.kFaviconUpdated + 1;
  Event.kNonPersistentNotificationCreated = Event.kNavigationCommitted + 1;
  Event.kTitleUpdated = Event.kNonPersistentNotificationCreated + 1;
  Event.kProcessCPUUsageReady = Event.kTitleUpdated + 1;

  Event.isKnownEnumValue = function(value) {
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

  Event.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var PropertyType = {};
  PropertyType.kTest = 0;
  PropertyType.kAudible = PropertyType.kTest + 1;
  PropertyType.kCPUUsage = PropertyType.kAudible + 1;
  PropertyType.kExpectedTaskQueueingDuration = PropertyType.kCPUUsage + 1;
  PropertyType.kLaunchTime = PropertyType.kExpectedTaskQueueingDuration + 1;
  PropertyType.kMainThreadTaskLoadIsLow = PropertyType.kLaunchTime + 1;
  PropertyType.kNetworkAlmostIdle = PropertyType.kMainThreadTaskLoadIsLow + 1;
  PropertyType.kPID = PropertyType.kNetworkAlmostIdle + 1;
  PropertyType.kVisible = PropertyType.kPID + 1;
  PropertyType.kUKMSourceId = PropertyType.kVisible + 1;
  PropertyType.kIsLoading = PropertyType.kUKMSourceId + 1;
  PropertyType.kLifecycleState = PropertyType.kIsLoading + 1;

  PropertyType.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  PropertyType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.Event = Event;
  exports.PropertyType = PropertyType;
})();