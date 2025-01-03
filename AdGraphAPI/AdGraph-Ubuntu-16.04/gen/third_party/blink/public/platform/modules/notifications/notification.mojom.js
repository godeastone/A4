// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/notifications/notification.mojom';
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
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../../url/mojom/url.mojom.js');
  }


  var NotificationDirection = {};
  NotificationDirection.LEFT_TO_RIGHT = 0;
  NotificationDirection.RIGHT_TO_LEFT = NotificationDirection.LEFT_TO_RIGHT + 1;
  NotificationDirection.AUTO = NotificationDirection.RIGHT_TO_LEFT + 1;

  NotificationDirection.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  NotificationDirection.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var NotificationActionType = {};
  NotificationActionType.BUTTON = 0;
  NotificationActionType.TEXT = NotificationActionType.BUTTON + 1;

  NotificationActionType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  NotificationActionType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function NotificationAction(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationAction.prototype.initDefaults_ = function() {
    this.type = 0;
    this.action = null;
    this.title = null;
    this.icon = null;
    this.placeholder = null;
  };
  NotificationAction.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationAction.generate = function(generator_) {
    var generated = new NotificationAction;
    generated.type = generator_.generateEnum(0, 1);
    generated.action = generator_.generateString(false);
    generated.title = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.icon = generator_.generateStruct(url.mojom.Url, false);
    generated.placeholder = generator_.generateStruct(mojoBase.mojom.String16, true);
    return generated;
  };

  NotificationAction.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.action = mutator_.mutateString(this.action, false);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.icon = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.placeholder = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    return this;
  };
  NotificationAction.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationAction.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationAction.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationAction.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationAction.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, NotificationActionType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationAction.action
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationAction.title
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationAction.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationAction.placeholder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationAction.encodedSize = codec.kStructHeaderSize + 40;

  NotificationAction.decode = function(decoder) {
    var packed;
    var val = new NotificationAction();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.action = decoder.decodeStruct(codec.String);
    val.title = decoder.decodeStructPointer(string16$.String16);
    val.icon = decoder.decodeStructPointer(url$.Url);
    val.placeholder = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  NotificationAction.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationAction.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.action);
    encoder.encodeStructPointer(string16$.String16, val.title);
    encoder.encodeStructPointer(url$.Url, val.icon);
    encoder.encodeStructPointer(string16$.String16, val.placeholder);
  };
  function NotificationData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationData.kMaximumDeveloperDataSize = 1048576;
  NotificationData.prototype.initDefaults_ = function() {
    this.title = null;
    this.direction = 0;
    this.renotify = false;
    this.silent = false;
    this.requireInteraction = false;
    this.lang = null;
    this.body = null;
    this.tag = null;
    this.image = null;
    this.icon = null;
    this.badge = null;
    this.vibrationPattern = null;
    this.timestamp = 0;
    this.data = null;
    this.actions = null;
  };
  NotificationData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationData.generate = function(generator_) {
    var generated = new NotificationData;
    generated.title = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.direction = generator_.generateEnum(0, 2);
    generated.lang = generator_.generateString(true);
    generated.body = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.tag = generator_.generateString(false);
    generated.image = generator_.generateStruct(url.mojom.Url, false);
    generated.icon = generator_.generateStruct(url.mojom.Url, false);
    generated.badge = generator_.generateStruct(url.mojom.Url, false);
    generated.vibrationPattern = generator_.generateArray(function() {
      return generator_.generateInt32();
    });
    generated.timestamp = generator_.generateDouble();
    generated.renotify = generator_.generateBool();
    generated.silent = generator_.generateBool();
    generated.requireInteraction = generator_.generateBool();
    generated.data = generator_.generateArray(function() {
      return generator_.generateInt8();
    });
    generated.actions = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.NotificationAction, false);
    });
    return generated;
  };

  NotificationData.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.direction = mutator_.mutateEnum(this.direction, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.lang = mutator_.mutateString(this.lang, true);
    }
    if (mutator_.chooseMutateField()) {
      this.body = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.tag = mutator_.mutateString(this.tag, false);
    }
    if (mutator_.chooseMutateField()) {
      this.image = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.icon = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.badge = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.vibrationPattern = mutator_.mutateArray(this.vibrationPattern, function(val) {
        return mutator_.mutateInt32(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.timestamp = mutator_.mutateDouble(this.timestamp);
    }
    if (mutator_.chooseMutateField()) {
      this.renotify = mutator_.mutateBool(this.renotify);
    }
    if (mutator_.chooseMutateField()) {
      this.silent = mutator_.mutateBool(this.silent);
    }
    if (mutator_.chooseMutateField()) {
      this.requireInteraction = mutator_.mutateBool(this.requireInteraction);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateInt8(val);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.actions = mutator_.mutateArray(this.actions, function(val) {
        return mutator_.mutateStruct(blink.mojom.NotificationAction, false);
      });
    }
    return this;
  };
  NotificationData.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NotificationData.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationData.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NotificationData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 104}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.title
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.direction
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, NotificationDirection);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.lang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.body
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.tag
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.image
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.badge
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.vibrationPattern
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 4, codec.Int32, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;






    // validate NotificationData.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 80, 1, codec.Int8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationData.actions
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 88, 8, new codec.PointerTo(NotificationAction), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationData.encodedSize = codec.kStructHeaderSize + 96;

  NotificationData.decode = function(decoder) {
    var packed;
    var val = new NotificationData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.title = decoder.decodeStructPointer(string16$.String16);
    val.direction = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.renotify = (packed >> 0) & 1 ? true : false;
    val.silent = (packed >> 1) & 1 ? true : false;
    val.requireInteraction = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.lang = decoder.decodeStruct(codec.NullableString);
    val.body = decoder.decodeStructPointer(string16$.String16);
    val.tag = decoder.decodeStruct(codec.String);
    val.image = decoder.decodeStructPointer(url$.Url);
    val.icon = decoder.decodeStructPointer(url$.Url);
    val.badge = decoder.decodeStructPointer(url$.Url);
    val.vibrationPattern = decoder.decodeArrayPointer(codec.Int32);
    val.timestamp = decoder.decodeStruct(codec.Double);
    val.data = decoder.decodeArrayPointer(codec.Int8);
    val.actions = decoder.decodeArrayPointer(new codec.PointerTo(NotificationAction));
    return val;
  };

  NotificationData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.title);
    encoder.encodeStruct(codec.Int32, val.direction);
    packed = 0;
    packed |= (val.renotify & 1) << 0
    packed |= (val.silent & 1) << 1
    packed |= (val.requireInteraction & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.NullableString, val.lang);
    encoder.encodeStructPointer(string16$.String16, val.body);
    encoder.encodeStruct(codec.String, val.tag);
    encoder.encodeStructPointer(url$.Url, val.image);
    encoder.encodeStructPointer(url$.Url, val.icon);
    encoder.encodeStructPointer(url$.Url, val.badge);
    encoder.encodeArrayPointer(codec.Int32, val.vibrationPattern);
    encoder.encodeStruct(codec.Double, val.timestamp);
    encoder.encodeArrayPointer(codec.Int8, val.data);
    encoder.encodeArrayPointer(new codec.PointerTo(NotificationAction), val.actions);
  };
  function NotificationResources(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NotificationResources.prototype.initDefaults_ = function() {
    this.image = null;
    this.icon = null;
    this.badge = null;
    this.actionIcons = null;
  };
  NotificationResources.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NotificationResources.generate = function(generator_) {
    var generated = new NotificationResources;
    generated.image = generator_.generateStruct(skia.mojom.Bitmap, true);
    generated.icon = generator_.generateStruct(skia.mojom.Bitmap, true);
    generated.badge = generator_.generateStruct(skia.mojom.Bitmap, true);
    generated.actionIcons = generator_.generateArray(function() {
      return generator_.generateStruct(skia.mojom.Bitmap, true);
    });
    return generated;
  };

  NotificationResources.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.image = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    if (mutator_.chooseMutateField()) {
      this.icon = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    if (mutator_.chooseMutateField()) {
      this.badge = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    if (mutator_.chooseMutateField()) {
      this.actionIcons = mutator_.mutateArray(this.actionIcons, function(val) {
        return mutator_.mutateStruct(skia.mojom.Bitmap, true);
      });
    }
    return this;
  };
  NotificationResources.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.image !== null) {
      Array.prototype.push.apply(handles, this.image.getHandleDeps());
    }
    if (this.icon !== null) {
      Array.prototype.push.apply(handles, this.icon.getHandleDeps());
    }
    if (this.badge !== null) {
      Array.prototype.push.apply(handles, this.badge.getHandleDeps());
    }
    if (this.actionIcons !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.actionIcons.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  NotificationResources.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NotificationResources.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.image.setHandlesInternal_(handles, idx);
    idx = this.icon.setHandlesInternal_(handles, idx);
    idx = this.badge.setHandlesInternal_(handles, idx);
    this.actionIcons.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  NotificationResources.validate = function(messageValidator, offset) {
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


    // validate NotificationResources.image
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationResources.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationResources.badge
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NotificationResources.actionIcons
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.NullablePointerTo(bitmap$.Bitmap), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NotificationResources.encodedSize = codec.kStructHeaderSize + 32;

  NotificationResources.decode = function(decoder) {
    var packed;
    var val = new NotificationResources();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.image = decoder.decodeStructPointer(bitmap$.Bitmap);
    val.icon = decoder.decodeStructPointer(bitmap$.Bitmap);
    val.badge = decoder.decodeStructPointer(bitmap$.Bitmap);
    val.actionIcons = decoder.decodeArrayPointer(new codec.NullablePointerTo(bitmap$.Bitmap));
    return val;
  };

  NotificationResources.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NotificationResources.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.image);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.icon);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.badge);
    encoder.encodeArrayPointer(new codec.NullablePointerTo(bitmap$.Bitmap), val.actionIcons);
  };
  exports.NotificationDirection = NotificationDirection;
  exports.NotificationActionType = NotificationActionType;
  exports.NotificationAction = NotificationAction;
  exports.NotificationData = NotificationData;
  exports.NotificationResources = NotificationResources;
})();