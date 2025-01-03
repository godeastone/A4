// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/notifications/notification_service.mojom';
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
  var notification$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/notifications/notification.mojom', 'notification.mojom.js');
  }
  var permission_status$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/permissions/permission_status.mojom', '../permissions/permission_status.mojom.js');
  }


  var PersistentNotificationError = {};
  PersistentNotificationError.NONE = 0;
  PersistentNotificationError.INTERNAL_ERROR = PersistentNotificationError.NONE + 1;
  PersistentNotificationError.PERMISSION_DENIED = PersistentNotificationError.INTERNAL_ERROR + 1;

  PersistentNotificationError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  PersistentNotificationError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function NonPersistentNotificationListener_OnShow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NonPersistentNotificationListener_OnShow_Params.prototype.initDefaults_ = function() {
  };
  NonPersistentNotificationListener_OnShow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NonPersistentNotificationListener_OnShow_Params.generate = function(generator_) {
    var generated = new NonPersistentNotificationListener_OnShow_Params;
    return generated;
  };

  NonPersistentNotificationListener_OnShow_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NonPersistentNotificationListener_OnShow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NonPersistentNotificationListener_OnShow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NonPersistentNotificationListener_OnShow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NonPersistentNotificationListener_OnShow_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NonPersistentNotificationListener_OnShow_Params.encodedSize = codec.kStructHeaderSize + 0;

  NonPersistentNotificationListener_OnShow_Params.decode = function(decoder) {
    var packed;
    var val = new NonPersistentNotificationListener_OnShow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NonPersistentNotificationListener_OnShow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NonPersistentNotificationListener_OnShow_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NonPersistentNotificationListener_OnClick_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NonPersistentNotificationListener_OnClick_Params.prototype.initDefaults_ = function() {
  };
  NonPersistentNotificationListener_OnClick_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NonPersistentNotificationListener_OnClick_Params.generate = function(generator_) {
    var generated = new NonPersistentNotificationListener_OnClick_Params;
    return generated;
  };

  NonPersistentNotificationListener_OnClick_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NonPersistentNotificationListener_OnClick_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NonPersistentNotificationListener_OnClick_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NonPersistentNotificationListener_OnClick_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NonPersistentNotificationListener_OnClick_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NonPersistentNotificationListener_OnClick_Params.encodedSize = codec.kStructHeaderSize + 0;

  NonPersistentNotificationListener_OnClick_Params.decode = function(decoder) {
    var packed;
    var val = new NonPersistentNotificationListener_OnClick_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NonPersistentNotificationListener_OnClick_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NonPersistentNotificationListener_OnClick_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NonPersistentNotificationListener_OnClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NonPersistentNotificationListener_OnClose_Params.prototype.initDefaults_ = function() {
  };
  NonPersistentNotificationListener_OnClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NonPersistentNotificationListener_OnClose_Params.generate = function(generator_) {
    var generated = new NonPersistentNotificationListener_OnClose_Params;
    return generated;
  };

  NonPersistentNotificationListener_OnClose_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NonPersistentNotificationListener_OnClose_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NonPersistentNotificationListener_OnClose_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NonPersistentNotificationListener_OnClose_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NonPersistentNotificationListener_OnClose_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NonPersistentNotificationListener_OnClose_Params.encodedSize = codec.kStructHeaderSize + 0;

  NonPersistentNotificationListener_OnClose_Params.decode = function(decoder) {
    var packed;
    var val = new NonPersistentNotificationListener_OnClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NonPersistentNotificationListener_OnClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NonPersistentNotificationListener_OnClose_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NonPersistentNotificationListener_OnClose_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NonPersistentNotificationListener_OnClose_ResponseParams.prototype.initDefaults_ = function() {
  };
  NonPersistentNotificationListener_OnClose_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NonPersistentNotificationListener_OnClose_ResponseParams.generate = function(generator_) {
    var generated = new NonPersistentNotificationListener_OnClose_ResponseParams;
    return generated;
  };

  NonPersistentNotificationListener_OnClose_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  NonPersistentNotificationListener_OnClose_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NonPersistentNotificationListener_OnClose_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NonPersistentNotificationListener_OnClose_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NonPersistentNotificationListener_OnClose_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NonPersistentNotificationListener_OnClose_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  NonPersistentNotificationListener_OnClose_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NonPersistentNotificationListener_OnClose_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NonPersistentNotificationListener_OnClose_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NonPersistentNotificationListener_OnClose_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function NotificationService_GetPermissionStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_GetPermissionStatus_Params.prototype.initDefaults_ = function() {
  };
  NotificationService_GetPermissionStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_GetPermissionStatus_Params.generate = function(generator_) {
    var generated = new NotificationService_GetPermissionStatus_Params;
    return generated;
  };

  NotificationService_GetPermissionStatus_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  NotificationService_GetPermissionStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_GetPermissionStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_GetPermissionStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_GetPermissionStatus_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_GetPermissionStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  NotificationService_GetPermissionStatus_Params.decode = function(decoder) {
    var packed;
    var val = new NotificationService_GetPermissionStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NotificationService_GetPermissionStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_GetPermissionStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function NotificationService_GetPermissionStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_GetPermissionStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  NotificationService_GetPermissionStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_GetPermissionStatus_ResponseParams.generate = function(generator_) {
    var generated = new NotificationService_GetPermissionStatus_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    return generated;
  };

  NotificationService_GetPermissionStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    return this;
  };
  NotificationService_GetPermissionStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_GetPermissionStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_GetPermissionStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_GetPermissionStatus_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_GetPermissionStatus_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, permission_status$.PermissionStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_GetPermissionStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NotificationService_GetPermissionStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NotificationService_GetPermissionStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NotificationService_GetPermissionStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_GetPermissionStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NotificationService_DisplayNonPersistentNotification_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_DisplayNonPersistentNotification_Params.prototype.initDefaults_ = function() {
    this.token = null;
    this.notificationData = null;
    this.notificationResources = null;
    this.eventListener = new NonPersistentNotificationListenerPtr();
  };
  NotificationService_DisplayNonPersistentNotification_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_DisplayNonPersistentNotification_Params.generate = function(generator_) {
    var generated = new NotificationService_DisplayNonPersistentNotification_Params;
    generated.token = generator_.generateString(false);
    generated.notificationData = generator_.generateStruct(blink.mojom.NotificationData, false);
    generated.notificationResources = generator_.generateStruct(blink.mojom.NotificationResources, false);
    generated.eventListener = generator_.generateInterface("blink.mojom.NonPersistentNotificationListener", false);
    return generated;
  };

  NotificationService_DisplayNonPersistentNotification_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateString(this.token, false);
    }
    if (mutator_.chooseMutateField()) {
      this.notificationData = mutator_.mutateStruct(blink.mojom.NotificationData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.notificationResources = mutator_.mutateStruct(blink.mojom.NotificationResources, false);
    }
    if (mutator_.chooseMutateField()) {
      this.eventListener = mutator_.mutateInterface(this.eventListener, "blink.mojom.NonPersistentNotificationListener", false);
    }
    return this;
  };
  NotificationService_DisplayNonPersistentNotification_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.notificationResources !== null) {
      Array.prototype.push.apply(handles, this.notificationResources.getHandleDeps());
    }
    if (this.eventListener !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.NonPersistentNotificationListenerPtr"]);
    }
    return handles;
  };

  NotificationService_DisplayNonPersistentNotification_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_DisplayNonPersistentNotification_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.notificationResources.setHandlesInternal_(handles, idx);
    this.eventListener = handles[idx++];;
    return idx;
  };

  NotificationService_DisplayNonPersistentNotification_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_DisplayNonPersistentNotification_Params.token
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_DisplayNonPersistentNotification_Params.notificationData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, notification$.NotificationData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_DisplayNonPersistentNotification_Params.notificationResources
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, notification$.NotificationResources, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_DisplayNonPersistentNotification_Params.eventListener
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_DisplayNonPersistentNotification_Params.encodedSize = codec.kStructHeaderSize + 32;

  NotificationService_DisplayNonPersistentNotification_Params.decode = function(decoder) {
    var packed;
    var val = new NotificationService_DisplayNonPersistentNotification_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStruct(codec.String);
    val.notificationData = decoder.decodeStructPointer(notification$.NotificationData);
    val.notificationResources = decoder.decodeStructPointer(notification$.NotificationResources);
    val.eventListener = decoder.decodeStruct(new codec.Interface(NonPersistentNotificationListenerPtr));
    return val;
  };

  NotificationService_DisplayNonPersistentNotification_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_DisplayNonPersistentNotification_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.token);
    encoder.encodeStructPointer(notification$.NotificationData, val.notificationData);
    encoder.encodeStructPointer(notification$.NotificationResources, val.notificationResources);
    encoder.encodeStruct(new codec.Interface(NonPersistentNotificationListenerPtr), val.eventListener);
  };
  function NotificationService_CloseNonPersistentNotification_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_CloseNonPersistentNotification_Params.prototype.initDefaults_ = function() {
    this.token = null;
  };
  NotificationService_CloseNonPersistentNotification_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_CloseNonPersistentNotification_Params.generate = function(generator_) {
    var generated = new NotificationService_CloseNonPersistentNotification_Params;
    generated.token = generator_.generateString(false);
    return generated;
  };

  NotificationService_CloseNonPersistentNotification_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.token = mutator_.mutateString(this.token, false);
    }
    return this;
  };
  NotificationService_CloseNonPersistentNotification_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_CloseNonPersistentNotification_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_CloseNonPersistentNotification_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_CloseNonPersistentNotification_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_CloseNonPersistentNotification_Params.token
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_CloseNonPersistentNotification_Params.encodedSize = codec.kStructHeaderSize + 8;

  NotificationService_CloseNonPersistentNotification_Params.decode = function(decoder) {
    var packed;
    var val = new NotificationService_CloseNonPersistentNotification_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.token = decoder.decodeStruct(codec.String);
    return val;
  };

  NotificationService_CloseNonPersistentNotification_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_CloseNonPersistentNotification_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.token);
  };
  function NotificationService_DisplayPersistentNotification_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_DisplayPersistentNotification_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.notificationData = null;
    this.notificationResources = null;
  };
  NotificationService_DisplayPersistentNotification_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_DisplayPersistentNotification_Params.generate = function(generator_) {
    var generated = new NotificationService_DisplayPersistentNotification_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.notificationData = generator_.generateStruct(blink.mojom.NotificationData, false);
    generated.notificationResources = generator_.generateStruct(blink.mojom.NotificationResources, false);
    return generated;
  };

  NotificationService_DisplayPersistentNotification_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.notificationData = mutator_.mutateStruct(blink.mojom.NotificationData, false);
    }
    if (mutator_.chooseMutateField()) {
      this.notificationResources = mutator_.mutateStruct(blink.mojom.NotificationResources, false);
    }
    return this;
  };
  NotificationService_DisplayPersistentNotification_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.notificationResources !== null) {
      Array.prototype.push.apply(handles, this.notificationResources.getHandleDeps());
    }
    return handles;
  };

  NotificationService_DisplayPersistentNotification_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_DisplayPersistentNotification_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.notificationResources.setHandlesInternal_(handles, idx);
    return idx;
  };

  NotificationService_DisplayPersistentNotification_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate NotificationService_DisplayPersistentNotification_Params.notificationData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, notification$.NotificationData, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_DisplayPersistentNotification_Params.notificationResources
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, notification$.NotificationResources, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_DisplayPersistentNotification_Params.encodedSize = codec.kStructHeaderSize + 24;

  NotificationService_DisplayPersistentNotification_Params.decode = function(decoder) {
    var packed;
    var val = new NotificationService_DisplayPersistentNotification_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.notificationData = decoder.decodeStructPointer(notification$.NotificationData);
    val.notificationResources = decoder.decodeStructPointer(notification$.NotificationResources);
    return val;
  };

  NotificationService_DisplayPersistentNotification_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_DisplayPersistentNotification_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeStructPointer(notification$.NotificationData, val.notificationData);
    encoder.encodeStructPointer(notification$.NotificationResources, val.notificationResources);
  };
  function NotificationService_DisplayPersistentNotification_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_DisplayPersistentNotification_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  NotificationService_DisplayPersistentNotification_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_DisplayPersistentNotification_ResponseParams.generate = function(generator_) {
    var generated = new NotificationService_DisplayPersistentNotification_ResponseParams;
    generated.error = generator_.generateEnum(0, 2);
    return generated;
  };

  NotificationService_DisplayPersistentNotification_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 2);
    }
    return this;
  };
  NotificationService_DisplayPersistentNotification_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_DisplayPersistentNotification_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_DisplayPersistentNotification_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_DisplayPersistentNotification_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_DisplayPersistentNotification_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PersistentNotificationError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_DisplayPersistentNotification_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NotificationService_DisplayPersistentNotification_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NotificationService_DisplayPersistentNotification_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NotificationService_DisplayPersistentNotification_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_DisplayPersistentNotification_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NotificationService_ClosePersistentNotification_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_ClosePersistentNotification_Params.prototype.initDefaults_ = function() {
    this.notificationId = null;
  };
  NotificationService_ClosePersistentNotification_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_ClosePersistentNotification_Params.generate = function(generator_) {
    var generated = new NotificationService_ClosePersistentNotification_Params;
    generated.notificationId = generator_.generateString(false);
    return generated;
  };

  NotificationService_ClosePersistentNotification_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.notificationId = mutator_.mutateString(this.notificationId, false);
    }
    return this;
  };
  NotificationService_ClosePersistentNotification_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_ClosePersistentNotification_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_ClosePersistentNotification_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_ClosePersistentNotification_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_ClosePersistentNotification_Params.notificationId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_ClosePersistentNotification_Params.encodedSize = codec.kStructHeaderSize + 8;

  NotificationService_ClosePersistentNotification_Params.decode = function(decoder) {
    var packed;
    var val = new NotificationService_ClosePersistentNotification_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.notificationId = decoder.decodeStruct(codec.String);
    return val;
  };

  NotificationService_ClosePersistentNotification_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_ClosePersistentNotification_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.notificationId);
  };
  function NotificationService_GetNotifications_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_GetNotifications_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.filterTag = null;
  };
  NotificationService_GetNotifications_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_GetNotifications_Params.generate = function(generator_) {
    var generated = new NotificationService_GetNotifications_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.filterTag = generator_.generateString(false);
    return generated;
  };

  NotificationService_GetNotifications_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.filterTag = mutator_.mutateString(this.filterTag, false);
    }
    return this;
  };
  NotificationService_GetNotifications_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_GetNotifications_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_GetNotifications_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_GetNotifications_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate NotificationService_GetNotifications_Params.filterTag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_GetNotifications_Params.encodedSize = codec.kStructHeaderSize + 16;

  NotificationService_GetNotifications_Params.decode = function(decoder) {
    var packed;
    var val = new NotificationService_GetNotifications_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.filterTag = decoder.decodeStruct(codec.String);
    return val;
  };

  NotificationService_GetNotifications_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_GetNotifications_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeStruct(codec.String, val.filterTag);
  };
  function NotificationService_GetNotifications_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationService_GetNotifications_ResponseParams.prototype.initDefaults_ = function() {
    this.notificationIds = null;
    this.notificationDatas = null;
  };
  NotificationService_GetNotifications_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationService_GetNotifications_ResponseParams.generate = function(generator_) {
    var generated = new NotificationService_GetNotifications_ResponseParams;
    generated.notificationIds = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.notificationDatas = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.NotificationData, false);
    });
    return generated;
  };

  NotificationService_GetNotifications_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.notificationIds = mutator_.mutateArray(this.notificationIds, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.notificationDatas = mutator_.mutateArray(this.notificationDatas, function(val) {
        return mutator_.mutateStruct(blink.mojom.NotificationData, false);
      });
    }
    return this;
  };
  NotificationService_GetNotifications_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationService_GetNotifications_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationService_GetNotifications_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationService_GetNotifications_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_GetNotifications_ResponseParams.notificationIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationService_GetNotifications_ResponseParams.notificationDatas
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(notification$.NotificationData), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationService_GetNotifications_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  NotificationService_GetNotifications_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NotificationService_GetNotifications_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.notificationIds = decoder.decodeArrayPointer(codec.String);
    val.notificationDatas = decoder.decodeArrayPointer(new codec.PointerTo(notification$.NotificationData));
    return val;
  };

  NotificationService_GetNotifications_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationService_GetNotifications_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.notificationIds);
    encoder.encodeArrayPointer(new codec.PointerTo(notification$.NotificationData), val.notificationDatas);
  };
  var kNonPersistentNotificationListener_OnShow_Name = 2062207738;
  var kNonPersistentNotificationListener_OnClick_Name = 920549624;
  var kNonPersistentNotificationListener_OnClose_Name = 1399709157;

  function NonPersistentNotificationListenerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NonPersistentNotificationListener,
                                                   handleOrPtrInfo);
  }

  function NonPersistentNotificationListenerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NonPersistentNotificationListener, associatedInterfacePtrInfo);
  }

  NonPersistentNotificationListenerAssociatedPtr.prototype =
      Object.create(NonPersistentNotificationListenerPtr.prototype);
  NonPersistentNotificationListenerAssociatedPtr.prototype.constructor =
      NonPersistentNotificationListenerAssociatedPtr;

  function NonPersistentNotificationListenerProxy(receiver) {
    this.receiver_ = receiver;
  }
  NonPersistentNotificationListenerPtr.prototype.onShow = function() {
    return NonPersistentNotificationListenerProxy.prototype.onShow
        .apply(this.ptr.getProxy(), arguments);
  };

  NonPersistentNotificationListenerProxy.prototype.onShow = function() {
    var params_ = new NonPersistentNotificationListener_OnShow_Params();
    var builder = new codec.MessageV0Builder(
        kNonPersistentNotificationListener_OnShow_Name,
        codec.align(NonPersistentNotificationListener_OnShow_Params.encodedSize));
    builder.encodeStruct(NonPersistentNotificationListener_OnShow_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NonPersistentNotificationListenerPtr.prototype.onClick = function() {
    return NonPersistentNotificationListenerProxy.prototype.onClick
        .apply(this.ptr.getProxy(), arguments);
  };

  NonPersistentNotificationListenerProxy.prototype.onClick = function() {
    var params_ = new NonPersistentNotificationListener_OnClick_Params();
    var builder = new codec.MessageV0Builder(
        kNonPersistentNotificationListener_OnClick_Name,
        codec.align(NonPersistentNotificationListener_OnClick_Params.encodedSize));
    builder.encodeStruct(NonPersistentNotificationListener_OnClick_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NonPersistentNotificationListenerPtr.prototype.onClose = function() {
    return NonPersistentNotificationListenerProxy.prototype.onClose
        .apply(this.ptr.getProxy(), arguments);
  };

  NonPersistentNotificationListenerProxy.prototype.onClose = function() {
    var params_ = new NonPersistentNotificationListener_OnClose_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNonPersistentNotificationListener_OnClose_Name,
          codec.align(NonPersistentNotificationListener_OnClose_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NonPersistentNotificationListener_OnClose_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NonPersistentNotificationListener_OnClose_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NonPersistentNotificationListenerStub(delegate) {
    this.delegate_ = delegate;
  }
  NonPersistentNotificationListenerStub.prototype.onShow = function() {
    return this.delegate_ && this.delegate_.onShow && this.delegate_.onShow();
  }
  NonPersistentNotificationListenerStub.prototype.onClick = function() {
    return this.delegate_ && this.delegate_.onClick && this.delegate_.onClick();
  }
  NonPersistentNotificationListenerStub.prototype.onClose = function() {
    return this.delegate_ && this.delegate_.onClose && this.delegate_.onClose();
  }

  NonPersistentNotificationListenerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNonPersistentNotificationListener_OnShow_Name:
      var params = reader.decodeStruct(NonPersistentNotificationListener_OnShow_Params);
      this.onShow();
      return true;
    case kNonPersistentNotificationListener_OnClick_Name:
      var params = reader.decodeStruct(NonPersistentNotificationListener_OnClick_Params);
      this.onClick();
      return true;
    default:
      return false;
    }
  };

  NonPersistentNotificationListenerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNonPersistentNotificationListener_OnClose_Name:
      var params = reader.decodeStruct(NonPersistentNotificationListener_OnClose_Params);
      this.onClose().then(function(response) {
        var responseParams =
            new NonPersistentNotificationListener_OnClose_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kNonPersistentNotificationListener_OnClose_Name,
            codec.align(NonPersistentNotificationListener_OnClose_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NonPersistentNotificationListener_OnClose_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNonPersistentNotificationListenerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNonPersistentNotificationListener_OnShow_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NonPersistentNotificationListener_OnShow_Params;
      break;
      case kNonPersistentNotificationListener_OnClick_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NonPersistentNotificationListener_OnClick_Params;
      break;
      case kNonPersistentNotificationListener_OnClose_Name:
        if (message.expectsResponse())
          paramsClass = NonPersistentNotificationListener_OnClose_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNonPersistentNotificationListenerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNonPersistentNotificationListener_OnClose_Name:
        if (message.isResponse())
          paramsClass = NonPersistentNotificationListener_OnClose_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NonPersistentNotificationListener = {
    name: 'blink.mojom.NonPersistentNotificationListener',
    kVersion: 0,
    ptrClass: NonPersistentNotificationListenerPtr,
    proxyClass: NonPersistentNotificationListenerProxy,
    stubClass: NonPersistentNotificationListenerStub,
    validateRequest: validateNonPersistentNotificationListenerRequest,
    validateResponse: validateNonPersistentNotificationListenerResponse,
    mojomId: 'third_party/blink/public/platform/modules/notifications/notification_service.mojom',
    fuzzMethods: {
      onShow: {
        params: NonPersistentNotificationListener_OnShow_Params,
      },
      onClick: {
        params: NonPersistentNotificationListener_OnClick_Params,
      },
      onClose: {
        params: NonPersistentNotificationListener_OnClose_Params,
      },
    },
  };
  NonPersistentNotificationListenerStub.prototype.validator = validateNonPersistentNotificationListenerRequest;
  NonPersistentNotificationListenerProxy.prototype.validator = validateNonPersistentNotificationListenerResponse;
  var kNotificationService_GetPermissionStatus_Name = 977188745;
  var kNotificationService_DisplayNonPersistentNotification_Name = 2027264328;
  var kNotificationService_CloseNonPersistentNotification_Name = 873958401;
  var kNotificationService_DisplayPersistentNotification_Name = 1475590281;
  var kNotificationService_ClosePersistentNotification_Name = 289077306;
  var kNotificationService_GetNotifications_Name = 127789112;

  function NotificationServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NotificationService,
                                                   handleOrPtrInfo);
  }

  function NotificationServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NotificationService, associatedInterfacePtrInfo);
  }

  NotificationServiceAssociatedPtr.prototype =
      Object.create(NotificationServicePtr.prototype);
  NotificationServiceAssociatedPtr.prototype.constructor =
      NotificationServiceAssociatedPtr;

  function NotificationServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  NotificationServicePtr.prototype.getPermissionStatus = function() {
    return NotificationServiceProxy.prototype.getPermissionStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  NotificationServiceProxy.prototype.getPermissionStatus = function() {
    var params_ = new NotificationService_GetPermissionStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNotificationService_GetPermissionStatus_Name,
          codec.align(NotificationService_GetPermissionStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NotificationService_GetPermissionStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NotificationService_GetPermissionStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NotificationServicePtr.prototype.displayNonPersistentNotification = function() {
    return NotificationServiceProxy.prototype.displayNonPersistentNotification
        .apply(this.ptr.getProxy(), arguments);
  };

  NotificationServiceProxy.prototype.displayNonPersistentNotification = function(token, notificationData, notificationResources, eventListener) {
    var params_ = new NotificationService_DisplayNonPersistentNotification_Params();
    params_.token = token;
    params_.notificationData = notificationData;
    params_.notificationResources = notificationResources;
    params_.eventListener = eventListener;
    var builder = new codec.MessageV0Builder(
        kNotificationService_DisplayNonPersistentNotification_Name,
        codec.align(NotificationService_DisplayNonPersistentNotification_Params.encodedSize));
    builder.encodeStruct(NotificationService_DisplayNonPersistentNotification_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NotificationServicePtr.prototype.closeNonPersistentNotification = function() {
    return NotificationServiceProxy.prototype.closeNonPersistentNotification
        .apply(this.ptr.getProxy(), arguments);
  };

  NotificationServiceProxy.prototype.closeNonPersistentNotification = function(token) {
    var params_ = new NotificationService_CloseNonPersistentNotification_Params();
    params_.token = token;
    var builder = new codec.MessageV0Builder(
        kNotificationService_CloseNonPersistentNotification_Name,
        codec.align(NotificationService_CloseNonPersistentNotification_Params.encodedSize));
    builder.encodeStruct(NotificationService_CloseNonPersistentNotification_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NotificationServicePtr.prototype.displayPersistentNotification = function() {
    return NotificationServiceProxy.prototype.displayPersistentNotification
        .apply(this.ptr.getProxy(), arguments);
  };

  NotificationServiceProxy.prototype.displayPersistentNotification = function(serviceWorkerRegistrationId, notificationData, notificationResources) {
    var params_ = new NotificationService_DisplayPersistentNotification_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.notificationData = notificationData;
    params_.notificationResources = notificationResources;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNotificationService_DisplayPersistentNotification_Name,
          codec.align(NotificationService_DisplayPersistentNotification_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NotificationService_DisplayPersistentNotification_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NotificationService_DisplayPersistentNotification_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NotificationServicePtr.prototype.closePersistentNotification = function() {
    return NotificationServiceProxy.prototype.closePersistentNotification
        .apply(this.ptr.getProxy(), arguments);
  };

  NotificationServiceProxy.prototype.closePersistentNotification = function(notificationId) {
    var params_ = new NotificationService_ClosePersistentNotification_Params();
    params_.notificationId = notificationId;
    var builder = new codec.MessageV0Builder(
        kNotificationService_ClosePersistentNotification_Name,
        codec.align(NotificationService_ClosePersistentNotification_Params.encodedSize));
    builder.encodeStruct(NotificationService_ClosePersistentNotification_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NotificationServicePtr.prototype.getNotifications = function() {
    return NotificationServiceProxy.prototype.getNotifications
        .apply(this.ptr.getProxy(), arguments);
  };

  NotificationServiceProxy.prototype.getNotifications = function(serviceWorkerRegistrationId, filterTag) {
    var params_ = new NotificationService_GetNotifications_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.filterTag = filterTag;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNotificationService_GetNotifications_Name,
          codec.align(NotificationService_GetNotifications_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NotificationService_GetNotifications_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NotificationService_GetNotifications_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NotificationServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  NotificationServiceStub.prototype.getPermissionStatus = function() {
    return this.delegate_ && this.delegate_.getPermissionStatus && this.delegate_.getPermissionStatus();
  }
  NotificationServiceStub.prototype.displayNonPersistentNotification = function(token, notificationData, notificationResources, eventListener) {
    return this.delegate_ && this.delegate_.displayNonPersistentNotification && this.delegate_.displayNonPersistentNotification(token, notificationData, notificationResources, eventListener);
  }
  NotificationServiceStub.prototype.closeNonPersistentNotification = function(token) {
    return this.delegate_ && this.delegate_.closeNonPersistentNotification && this.delegate_.closeNonPersistentNotification(token);
  }
  NotificationServiceStub.prototype.displayPersistentNotification = function(serviceWorkerRegistrationId, notificationData, notificationResources) {
    return this.delegate_ && this.delegate_.displayPersistentNotification && this.delegate_.displayPersistentNotification(serviceWorkerRegistrationId, notificationData, notificationResources);
  }
  NotificationServiceStub.prototype.closePersistentNotification = function(notificationId) {
    return this.delegate_ && this.delegate_.closePersistentNotification && this.delegate_.closePersistentNotification(notificationId);
  }
  NotificationServiceStub.prototype.getNotifications = function(serviceWorkerRegistrationId, filterTag) {
    return this.delegate_ && this.delegate_.getNotifications && this.delegate_.getNotifications(serviceWorkerRegistrationId, filterTag);
  }

  NotificationServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNotificationService_DisplayNonPersistentNotification_Name:
      var params = reader.decodeStruct(NotificationService_DisplayNonPersistentNotification_Params);
      this.displayNonPersistentNotification(params.token, params.notificationData, params.notificationResources, params.eventListener);
      return true;
    case kNotificationService_CloseNonPersistentNotification_Name:
      var params = reader.decodeStruct(NotificationService_CloseNonPersistentNotification_Params);
      this.closeNonPersistentNotification(params.token);
      return true;
    case kNotificationService_ClosePersistentNotification_Name:
      var params = reader.decodeStruct(NotificationService_ClosePersistentNotification_Params);
      this.closePersistentNotification(params.notificationId);
      return true;
    default:
      return false;
    }
  };

  NotificationServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNotificationService_GetPermissionStatus_Name:
      var params = reader.decodeStruct(NotificationService_GetPermissionStatus_Params);
      this.getPermissionStatus().then(function(response) {
        var responseParams =
            new NotificationService_GetPermissionStatus_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kNotificationService_GetPermissionStatus_Name,
            codec.align(NotificationService_GetPermissionStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NotificationService_GetPermissionStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNotificationService_DisplayPersistentNotification_Name:
      var params = reader.decodeStruct(NotificationService_DisplayPersistentNotification_Params);
      this.displayPersistentNotification(params.serviceWorkerRegistrationId, params.notificationData, params.notificationResources).then(function(response) {
        var responseParams =
            new NotificationService_DisplayPersistentNotification_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kNotificationService_DisplayPersistentNotification_Name,
            codec.align(NotificationService_DisplayPersistentNotification_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NotificationService_DisplayPersistentNotification_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNotificationService_GetNotifications_Name:
      var params = reader.decodeStruct(NotificationService_GetNotifications_Params);
      this.getNotifications(params.serviceWorkerRegistrationId, params.filterTag).then(function(response) {
        var responseParams =
            new NotificationService_GetNotifications_ResponseParams();
        responseParams.notificationIds = response.notificationIds;
        responseParams.notificationDatas = response.notificationDatas;
        var builder = new codec.MessageV1Builder(
            kNotificationService_GetNotifications_Name,
            codec.align(NotificationService_GetNotifications_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NotificationService_GetNotifications_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNotificationServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNotificationService_GetPermissionStatus_Name:
        if (message.expectsResponse())
          paramsClass = NotificationService_GetPermissionStatus_Params;
      break;
      case kNotificationService_DisplayNonPersistentNotification_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NotificationService_DisplayNonPersistentNotification_Params;
      break;
      case kNotificationService_CloseNonPersistentNotification_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NotificationService_CloseNonPersistentNotification_Params;
      break;
      case kNotificationService_DisplayPersistentNotification_Name:
        if (message.expectsResponse())
          paramsClass = NotificationService_DisplayPersistentNotification_Params;
      break;
      case kNotificationService_ClosePersistentNotification_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NotificationService_ClosePersistentNotification_Params;
      break;
      case kNotificationService_GetNotifications_Name:
        if (message.expectsResponse())
          paramsClass = NotificationService_GetNotifications_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNotificationServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNotificationService_GetPermissionStatus_Name:
        if (message.isResponse())
          paramsClass = NotificationService_GetPermissionStatus_ResponseParams;
        break;
      case kNotificationService_DisplayPersistentNotification_Name:
        if (message.isResponse())
          paramsClass = NotificationService_DisplayPersistentNotification_ResponseParams;
        break;
      case kNotificationService_GetNotifications_Name:
        if (message.isResponse())
          paramsClass = NotificationService_GetNotifications_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NotificationService = {
    name: 'blink.mojom.NotificationService',
    kVersion: 0,
    ptrClass: NotificationServicePtr,
    proxyClass: NotificationServiceProxy,
    stubClass: NotificationServiceStub,
    validateRequest: validateNotificationServiceRequest,
    validateResponse: validateNotificationServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/notifications/notification_service.mojom',
    fuzzMethods: {
      getPermissionStatus: {
        params: NotificationService_GetPermissionStatus_Params,
      },
      displayNonPersistentNotification: {
        params: NotificationService_DisplayNonPersistentNotification_Params,
      },
      closeNonPersistentNotification: {
        params: NotificationService_CloseNonPersistentNotification_Params,
      },
      displayPersistentNotification: {
        params: NotificationService_DisplayPersistentNotification_Params,
      },
      closePersistentNotification: {
        params: NotificationService_ClosePersistentNotification_Params,
      },
      getNotifications: {
        params: NotificationService_GetNotifications_Params,
      },
    },
  };
  NotificationServiceStub.prototype.validator = validateNotificationServiceRequest;
  NotificationServiceProxy.prototype.validator = validateNotificationServiceResponse;
  exports.PersistentNotificationError = PersistentNotificationError;
  exports.NonPersistentNotificationListener = NonPersistentNotificationListener;
  exports.NonPersistentNotificationListenerPtr = NonPersistentNotificationListenerPtr;
  exports.NonPersistentNotificationListenerAssociatedPtr = NonPersistentNotificationListenerAssociatedPtr;
  exports.NotificationService = NotificationService;
  exports.NotificationServicePtr = NotificationServicePtr;
  exports.NotificationServiceAssociatedPtr = NotificationServiceAssociatedPtr;
})();