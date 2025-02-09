// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/permissions/permission.mojom';
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
  var permission_status$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/permissions/permission_status.mojom', 'permission_status.mojom.js');
  }


  var PermissionName = {};
  PermissionName.GEOLOCATION = 0;
  PermissionName.NOTIFICATIONS = PermissionName.GEOLOCATION + 1;
  PermissionName.MIDI = PermissionName.NOTIFICATIONS + 1;
  PermissionName.PROTECTED_MEDIA_IDENTIFIER = PermissionName.MIDI + 1;
  PermissionName.DURABLE_STORAGE = PermissionName.PROTECTED_MEDIA_IDENTIFIER + 1;
  PermissionName.AUDIO_CAPTURE = PermissionName.DURABLE_STORAGE + 1;
  PermissionName.VIDEO_CAPTURE = PermissionName.AUDIO_CAPTURE + 1;
  PermissionName.BACKGROUND_SYNC = PermissionName.VIDEO_CAPTURE + 1;
  PermissionName.SENSORS = PermissionName.BACKGROUND_SYNC + 1;
  PermissionName.ACCESSIBILITY_EVENTS = PermissionName.SENSORS + 1;
  PermissionName.CLIPBOARD_READ = PermissionName.ACCESSIBILITY_EVENTS + 1;
  PermissionName.CLIPBOARD_WRITE = PermissionName.CLIPBOARD_READ + 1;
  PermissionName.PAYMENT_HANDLER = PermissionName.CLIPBOARD_WRITE + 1;

  PermissionName.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  PermissionName.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function MidiPermissionDescriptor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MidiPermissionDescriptor.prototype.initDefaults_ = function() {
    this.sysex = false;
  };
  MidiPermissionDescriptor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MidiPermissionDescriptor.generate = function(generator_) {
    var generated = new MidiPermissionDescriptor;
    generated.sysex = generator_.generateBool();
    return generated;
  };

  MidiPermissionDescriptor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sysex = mutator_.mutateBool(this.sysex);
    }
    return this;
  };
  MidiPermissionDescriptor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MidiPermissionDescriptor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MidiPermissionDescriptor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MidiPermissionDescriptor.validate = function(messageValidator, offset) {
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


    return validator.validationError.NONE;
  };

  MidiPermissionDescriptor.encodedSize = codec.kStructHeaderSize + 8;

  MidiPermissionDescriptor.decode = function(decoder) {
    var packed;
    var val = new MidiPermissionDescriptor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.sysex = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MidiPermissionDescriptor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MidiPermissionDescriptor.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.sysex & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ClipboardPermissionDescriptor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClipboardPermissionDescriptor.prototype.initDefaults_ = function() {
    this.allowWithoutGesture = false;
  };
  ClipboardPermissionDescriptor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ClipboardPermissionDescriptor.generate = function(generator_) {
    var generated = new ClipboardPermissionDescriptor;
    generated.allowWithoutGesture = generator_.generateBool();
    return generated;
  };

  ClipboardPermissionDescriptor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.allowWithoutGesture = mutator_.mutateBool(this.allowWithoutGesture);
    }
    return this;
  };
  ClipboardPermissionDescriptor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ClipboardPermissionDescriptor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ClipboardPermissionDescriptor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ClipboardPermissionDescriptor.validate = function(messageValidator, offset) {
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


    return validator.validationError.NONE;
  };

  ClipboardPermissionDescriptor.encodedSize = codec.kStructHeaderSize + 8;

  ClipboardPermissionDescriptor.decode = function(decoder) {
    var packed;
    var val = new ClipboardPermissionDescriptor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.allowWithoutGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ClipboardPermissionDescriptor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClipboardPermissionDescriptor.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.allowWithoutGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionDescriptor(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionDescriptor.prototype.initDefaults_ = function() {
    this.name = 0;
    this.extension = null;
  };
  PermissionDescriptor.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionDescriptor.generate = function(generator_) {
    var generated = new PermissionDescriptor;
    generated.name = generator_.generateEnum(0, 12);
    generated.extension = generator_.generateUnion(blink.mojom.PermissionDescriptorExtension, true);
    return generated;
  };

  PermissionDescriptor.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateEnum(this.name, 0, 12);
    }
    if (mutator_.chooseMutateField()) {
      this.extension = mutator_.mutateUnion(blink.mojom.PermissionDescriptorExtension, true);
    }
    return this;
  };
  PermissionDescriptor.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionDescriptor.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionDescriptor.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionDescriptor.validate = function(messageValidator, offset) {
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


    // validate PermissionDescriptor.name
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, PermissionName);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PermissionDescriptor.extension
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, PermissionDescriptorExtension, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionDescriptor.encodedSize = codec.kStructHeaderSize + 24;

  PermissionDescriptor.decode = function(decoder) {
    var packed;
    var val = new PermissionDescriptor();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.extension = decoder.decodeStruct(PermissionDescriptorExtension);
    return val;
  };

  PermissionDescriptor.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionDescriptor.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.name);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(PermissionDescriptorExtension, val.extension);
  };
  function PermissionObserver_OnPermissionStatusChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionObserver_OnPermissionStatusChange_Params.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionObserver_OnPermissionStatusChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionObserver_OnPermissionStatusChange_Params.generate = function(generator_) {
    var generated = new PermissionObserver_OnPermissionStatusChange_Params;
    generated.status = generator_.generateEnum(0, 2);
    return generated;
  };

  PermissionObserver_OnPermissionStatusChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    return this;
  };
  PermissionObserver_OnPermissionStatusChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionObserver_OnPermissionStatusChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionObserver_OnPermissionStatusChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionObserver_OnPermissionStatusChange_Params.validate = function(messageValidator, offset) {
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


    // validate PermissionObserver_OnPermissionStatusChange_Params.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, permission_status$.PermissionStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionObserver_OnPermissionStatusChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  PermissionObserver_OnPermissionStatusChange_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionObserver_OnPermissionStatusChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionObserver_OnPermissionStatusChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionObserver_OnPermissionStatusChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_HasPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_HasPermission_Params.prototype.initDefaults_ = function() {
    this.permission = null;
  };
  PermissionService_HasPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_HasPermission_Params.generate = function(generator_) {
    var generated = new PermissionService_HasPermission_Params;
    generated.permission = generator_.generateStruct(blink.mojom.PermissionDescriptor, false);
    return generated;
  };

  PermissionService_HasPermission_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.permission = mutator_.mutateStruct(blink.mojom.PermissionDescriptor, false);
    }
    return this;
  };
  PermissionService_HasPermission_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_HasPermission_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_HasPermission_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_HasPermission_Params.validate = function(messageValidator, offset) {
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


    // validate PermissionService_HasPermission_Params.permission
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PermissionDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_HasPermission_Params.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_HasPermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_HasPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStructPointer(PermissionDescriptor);
    return val;
  };

  PermissionService_HasPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_HasPermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PermissionDescriptor, val.permission);
  };
  function PermissionService_HasPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_HasPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_HasPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_HasPermission_ResponseParams.generate = function(generator_) {
    var generated = new PermissionService_HasPermission_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    return generated;
  };

  PermissionService_HasPermission_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    return this;
  };
  PermissionService_HasPermission_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_HasPermission_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_HasPermission_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_HasPermission_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PermissionService_HasPermission_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, permission_status$.PermissionStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_HasPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_HasPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_HasPermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_HasPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_HasPermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermission_Params.prototype.initDefaults_ = function() {
    this.permission = null;
    this.userGesture = false;
  };
  PermissionService_RequestPermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_RequestPermission_Params.generate = function(generator_) {
    var generated = new PermissionService_RequestPermission_Params;
    generated.permission = generator_.generateStruct(blink.mojom.PermissionDescriptor, false);
    generated.userGesture = generator_.generateBool();
    return generated;
  };

  PermissionService_RequestPermission_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.permission = mutator_.mutateStruct(blink.mojom.PermissionDescriptor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.userGesture = mutator_.mutateBool(this.userGesture);
    }
    return this;
  };
  PermissionService_RequestPermission_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_RequestPermission_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_RequestPermission_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_RequestPermission_Params.validate = function(messageValidator, offset) {
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


    // validate PermissionService_RequestPermission_Params.permission
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PermissionDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_RequestPermission_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionService_RequestPermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStructPointer(PermissionDescriptor);
    packed = decoder.readUint8();
    val.userGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RequestPermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PermissionDescriptor, val.permission);
    packed = 0;
    packed |= (val.userGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermission_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_RequestPermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_RequestPermission_ResponseParams.generate = function(generator_) {
    var generated = new PermissionService_RequestPermission_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    return generated;
  };

  PermissionService_RequestPermission_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    return this;
  };
  PermissionService_RequestPermission_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_RequestPermission_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_RequestPermission_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_RequestPermission_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PermissionService_RequestPermission_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, permission_status$.PermissionStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RequestPermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RequestPermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RequestPermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermissions_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermissions_Params.prototype.initDefaults_ = function() {
    this.permission = null;
    this.userGesture = false;
  };
  PermissionService_RequestPermissions_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_RequestPermissions_Params.generate = function(generator_) {
    var generated = new PermissionService_RequestPermissions_Params;
    generated.permission = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.PermissionDescriptor, false);
    });
    generated.userGesture = generator_.generateBool();
    return generated;
  };

  PermissionService_RequestPermissions_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.permission = mutator_.mutateArray(this.permission, function(val) {
        return mutator_.mutateStruct(blink.mojom.PermissionDescriptor, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.userGesture = mutator_.mutateBool(this.userGesture);
    }
    return this;
  };
  PermissionService_RequestPermissions_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_RequestPermissions_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_RequestPermissions_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_RequestPermissions_Params.validate = function(messageValidator, offset) {
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


    // validate PermissionService_RequestPermissions_Params.permission
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PermissionDescriptor), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PermissionService_RequestPermissions_Params.encodedSize = codec.kStructHeaderSize + 16;

  PermissionService_RequestPermissions_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermissions_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeArrayPointer(new codec.PointerTo(PermissionDescriptor));
    packed = decoder.readUint8();
    val.userGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RequestPermissions_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermissions_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PermissionDescriptor), val.permission);
    packed = 0;
    packed |= (val.userGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_RequestPermissions_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RequestPermissions_ResponseParams.prototype.initDefaults_ = function() {
    this.statuses = null;
  };
  PermissionService_RequestPermissions_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_RequestPermissions_ResponseParams.generate = function(generator_) {
    var generated = new PermissionService_RequestPermissions_ResponseParams;
    generated.statuses = generator_.generateArray(function() {
      return generator_.generateEnum(0, 2);
    });
    return generated;
  };

  PermissionService_RequestPermissions_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.statuses = mutator_.mutateArray(this.statuses, function(val) {
        return mutator_.mutateEnum(val, 0, 2);
      });
    }
    return this;
  };
  PermissionService_RequestPermissions_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_RequestPermissions_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_RequestPermissions_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_RequestPermissions_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PermissionService_RequestPermissions_ResponseParams.statuses
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, new codec.Enum(permission_status$.PermissionStatus), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RequestPermissions_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RequestPermissions_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RequestPermissions_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.statuses = decoder.decodeArrayPointer(new codec.Enum(permission_status$.PermissionStatus));
    return val;
  };

  PermissionService_RequestPermissions_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RequestPermissions_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.Enum(permission_status$.PermissionStatus), val.statuses);
  };
  function PermissionService_RevokePermission_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RevokePermission_Params.prototype.initDefaults_ = function() {
    this.permission = null;
  };
  PermissionService_RevokePermission_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_RevokePermission_Params.generate = function(generator_) {
    var generated = new PermissionService_RevokePermission_Params;
    generated.permission = generator_.generateStruct(blink.mojom.PermissionDescriptor, false);
    return generated;
  };

  PermissionService_RevokePermission_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.permission = mutator_.mutateStruct(blink.mojom.PermissionDescriptor, false);
    }
    return this;
  };
  PermissionService_RevokePermission_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_RevokePermission_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_RevokePermission_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_RevokePermission_Params.validate = function(messageValidator, offset) {
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


    // validate PermissionService_RevokePermission_Params.permission
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PermissionDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RevokePermission_Params.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RevokePermission_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RevokePermission_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStructPointer(PermissionDescriptor);
    return val;
  };

  PermissionService_RevokePermission_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RevokePermission_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PermissionDescriptor, val.permission);
  };
  function PermissionService_RevokePermission_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_RevokePermission_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
  };
  PermissionService_RevokePermission_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_RevokePermission_ResponseParams.generate = function(generator_) {
    var generated = new PermissionService_RevokePermission_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    return generated;
  };

  PermissionService_RevokePermission_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    return this;
  };
  PermissionService_RevokePermission_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PermissionService_RevokePermission_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_RevokePermission_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PermissionService_RevokePermission_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PermissionService_RevokePermission_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, permission_status$.PermissionStatus);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_RevokePermission_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PermissionService_RevokePermission_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PermissionService_RevokePermission_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_RevokePermission_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_RevokePermission_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PermissionService_AddPermissionObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PermissionService_AddPermissionObserver_Params.prototype.initDefaults_ = function() {
    this.permission = null;
    this.lastKnownStatus = 0;
    this.observer = new PermissionObserverPtr();
  };
  PermissionService_AddPermissionObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PermissionService_AddPermissionObserver_Params.generate = function(generator_) {
    var generated = new PermissionService_AddPermissionObserver_Params;
    generated.permission = generator_.generateStruct(blink.mojom.PermissionDescriptor, false);
    generated.lastKnownStatus = generator_.generateEnum(0, 2);
    generated.observer = generator_.generateInterface("blink.mojom.PermissionObserver", false);
    return generated;
  };

  PermissionService_AddPermissionObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.permission = mutator_.mutateStruct(blink.mojom.PermissionDescriptor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lastKnownStatus = mutator_.mutateEnum(this.lastKnownStatus, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "blink.mojom.PermissionObserver", false);
    }
    return this;
  };
  PermissionService_AddPermissionObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.PermissionObserverPtr"]);
    }
    return handles;
  };

  PermissionService_AddPermissionObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PermissionService_AddPermissionObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  PermissionService_AddPermissionObserver_Params.validate = function(messageValidator, offset) {
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


    // validate PermissionService_AddPermissionObserver_Params.permission
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PermissionDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PermissionService_AddPermissionObserver_Params.lastKnownStatus
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, permission_status$.PermissionStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PermissionService_AddPermissionObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PermissionService_AddPermissionObserver_Params.encodedSize = codec.kStructHeaderSize + 24;

  PermissionService_AddPermissionObserver_Params.decode = function(decoder) {
    var packed;
    var val = new PermissionService_AddPermissionObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.permission = decoder.decodeStructPointer(PermissionDescriptor);
    val.lastKnownStatus = decoder.decodeStruct(codec.Int32);
    val.observer = decoder.decodeStruct(new codec.Interface(PermissionObserverPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PermissionService_AddPermissionObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PermissionService_AddPermissionObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PermissionDescriptor, val.permission);
    encoder.encodeStruct(codec.Int32, val.lastKnownStatus);
    encoder.encodeStruct(new codec.Interface(PermissionObserverPtr), val.observer);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PermissionDescriptorExtension(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  PermissionDescriptorExtension.Tags = {
    midi: 0,
    clipboard: 1,
  };

  PermissionDescriptorExtension.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  PermissionDescriptorExtension.prototype.initValue_ = function(value) {
    if (value == undefined) {
      return;
    }

    var keys = Object.keys(value);
    if (keys.length == 0) {
      return;
    }

    if (keys.length > 1) {
      throw new TypeError("You may set only one member on a union.");
    }

    var fields = [
        "midi",
        "clipboard",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a PermissionDescriptorExtension member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  PermissionDescriptorExtension.generate = function(generator_) {
    var generated = new PermissionDescriptorExtension;
    var generators = [
      {
        field: "midi",

        generator: function() { return generator_.generateStruct(blink.mojom.MidiPermissionDescriptor, false); },
      },
      {
        field: "clipboard",

        generator: function() { return generator_.generateStruct(blink.mojom.ClipboardPermissionDescriptor, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  PermissionDescriptorExtension.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "midi",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.MidiPermissionDescriptor, false); },
      },
      {
        field: "clipboard",

        mutator: function() { return mutator_.mutateStruct(blink.mojom.ClipboardPermissionDescriptor, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  PermissionDescriptorExtension.prototype.getHandleDeps = function() {
    return [];
  }
  PermissionDescriptorExtension.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(PermissionDescriptorExtension.prototype, "midi", {
    get: function() {
      if (this.$tag != PermissionDescriptorExtension.Tags.midi) {
        throw new ReferenceError(
            "PermissionDescriptorExtension.midi is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = PermissionDescriptorExtension.Tags.midi;
      this.$data = value;
    }
  });
  Object.defineProperty(PermissionDescriptorExtension.prototype, "clipboard", {
    get: function() {
      if (this.$tag != PermissionDescriptorExtension.Tags.clipboard) {
        throw new ReferenceError(
            "PermissionDescriptorExtension.clipboard is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = PermissionDescriptorExtension.Tags.clipboard;
      this.$data = value;
    }
  });


    PermissionDescriptorExtension.encode = function(encoder, val) {
      if (val == null) {
        encoder.writeUint64(0);
        encoder.writeUint64(0);
        return;
      }
      if (val.$tag == undefined) {
        throw new TypeError("Cannot encode unions with an unknown member set.");
      }

      encoder.writeUint32(16);
      encoder.writeUint32(val.$tag);
      switch (val.$tag) {
        case PermissionDescriptorExtension.Tags.midi:
          encoder.encodeStructPointer(MidiPermissionDescriptor, val.midi);
          break;
        case PermissionDescriptorExtension.Tags.clipboard:
          encoder.encodeStructPointer(ClipboardPermissionDescriptor, val.clipboard);
          break;
      }
      encoder.align();
    };


    PermissionDescriptorExtension.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new PermissionDescriptorExtension();
      var tag = decoder.readUint32();
      switch (tag) {
        case PermissionDescriptorExtension.Tags.midi:
          result.midi = decoder.decodeStructPointer(MidiPermissionDescriptor);
          break;
        case PermissionDescriptorExtension.Tags.clipboard:
          result.clipboard = decoder.decodeStructPointer(ClipboardPermissionDescriptor);
          break;
      }
      decoder.align();

      return result;
    };


    PermissionDescriptorExtension.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case PermissionDescriptorExtension.Tags.midi:
          

    // validate PermissionDescriptorExtension.midi
    err = messageValidator.validateStructPointer(data_offset, MidiPermissionDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case PermissionDescriptorExtension.Tags.clipboard:
          

    // validate PermissionDescriptorExtension.clipboard
    err = messageValidator.validateStructPointer(data_offset, ClipboardPermissionDescriptor, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  PermissionDescriptorExtension.encodedSize = 16;
  var kPermissionObserver_OnPermissionStatusChange_Name = 2139565163;

  function PermissionObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PermissionObserver,
                                                   handleOrPtrInfo);
  }

  function PermissionObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PermissionObserver, associatedInterfacePtrInfo);
  }

  PermissionObserverAssociatedPtr.prototype =
      Object.create(PermissionObserverPtr.prototype);
  PermissionObserverAssociatedPtr.prototype.constructor =
      PermissionObserverAssociatedPtr;

  function PermissionObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  PermissionObserverPtr.prototype.onPermissionStatusChange = function() {
    return PermissionObserverProxy.prototype.onPermissionStatusChange
        .apply(this.ptr.getProxy(), arguments);
  };

  PermissionObserverProxy.prototype.onPermissionStatusChange = function(status) {
    var params_ = new PermissionObserver_OnPermissionStatusChange_Params();
    params_.status = status;
    var builder = new codec.MessageV0Builder(
        kPermissionObserver_OnPermissionStatusChange_Name,
        codec.align(PermissionObserver_OnPermissionStatusChange_Params.encodedSize));
    builder.encodeStruct(PermissionObserver_OnPermissionStatusChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PermissionObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  PermissionObserverStub.prototype.onPermissionStatusChange = function(status) {
    return this.delegate_ && this.delegate_.onPermissionStatusChange && this.delegate_.onPermissionStatusChange(status);
  }

  PermissionObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPermissionObserver_OnPermissionStatusChange_Name:
      var params = reader.decodeStruct(PermissionObserver_OnPermissionStatusChange_Params);
      this.onPermissionStatusChange(params.status);
      return true;
    default:
      return false;
    }
  };

  PermissionObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePermissionObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPermissionObserver_OnPermissionStatusChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PermissionObserver_OnPermissionStatusChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePermissionObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PermissionObserver = {
    name: 'blink.mojom.PermissionObserver',
    kVersion: 0,
    ptrClass: PermissionObserverPtr,
    proxyClass: PermissionObserverProxy,
    stubClass: PermissionObserverStub,
    validateRequest: validatePermissionObserverRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/permissions/permission.mojom',
    fuzzMethods: {
      onPermissionStatusChange: {
        params: PermissionObserver_OnPermissionStatusChange_Params,
      },
    },
  };
  PermissionObserverStub.prototype.validator = validatePermissionObserverRequest;
  PermissionObserverProxy.prototype.validator = null;
  var kPermissionService_HasPermission_Name = 814299949;
  var kPermissionService_RequestPermission_Name = 513144481;
  var kPermissionService_RequestPermissions_Name = 1918832659;
  var kPermissionService_RevokePermission_Name = 839536071;
  var kPermissionService_AddPermissionObserver_Name = 643282611;

  function PermissionServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PermissionService,
                                                   handleOrPtrInfo);
  }

  function PermissionServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PermissionService, associatedInterfacePtrInfo);
  }

  PermissionServiceAssociatedPtr.prototype =
      Object.create(PermissionServicePtr.prototype);
  PermissionServiceAssociatedPtr.prototype.constructor =
      PermissionServiceAssociatedPtr;

  function PermissionServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  PermissionServicePtr.prototype.hasPermission = function() {
    return PermissionServiceProxy.prototype.hasPermission
        .apply(this.ptr.getProxy(), arguments);
  };

  PermissionServiceProxy.prototype.hasPermission = function(permission) {
    var params_ = new PermissionService_HasPermission_Params();
    params_.permission = permission;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPermissionService_HasPermission_Name,
          codec.align(PermissionService_HasPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_HasPermission_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_HasPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServicePtr.prototype.requestPermission = function() {
    return PermissionServiceProxy.prototype.requestPermission
        .apply(this.ptr.getProxy(), arguments);
  };

  PermissionServiceProxy.prototype.requestPermission = function(permission, userGesture) {
    var params_ = new PermissionService_RequestPermission_Params();
    params_.permission = permission;
    params_.userGesture = userGesture;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPermissionService_RequestPermission_Name,
          codec.align(PermissionService_RequestPermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_RequestPermission_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_RequestPermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServicePtr.prototype.requestPermissions = function() {
    return PermissionServiceProxy.prototype.requestPermissions
        .apply(this.ptr.getProxy(), arguments);
  };

  PermissionServiceProxy.prototype.requestPermissions = function(permission, userGesture) {
    var params_ = new PermissionService_RequestPermissions_Params();
    params_.permission = permission;
    params_.userGesture = userGesture;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPermissionService_RequestPermissions_Name,
          codec.align(PermissionService_RequestPermissions_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_RequestPermissions_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_RequestPermissions_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServicePtr.prototype.revokePermission = function() {
    return PermissionServiceProxy.prototype.revokePermission
        .apply(this.ptr.getProxy(), arguments);
  };

  PermissionServiceProxy.prototype.revokePermission = function(permission) {
    var params_ = new PermissionService_RevokePermission_Params();
    params_.permission = permission;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPermissionService_RevokePermission_Name,
          codec.align(PermissionService_RevokePermission_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PermissionService_RevokePermission_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PermissionService_RevokePermission_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PermissionServicePtr.prototype.addPermissionObserver = function() {
    return PermissionServiceProxy.prototype.addPermissionObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  PermissionServiceProxy.prototype.addPermissionObserver = function(permission, lastKnownStatus, observer) {
    var params_ = new PermissionService_AddPermissionObserver_Params();
    params_.permission = permission;
    params_.lastKnownStatus = lastKnownStatus;
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kPermissionService_AddPermissionObserver_Name,
        codec.align(PermissionService_AddPermissionObserver_Params.encodedSize));
    builder.encodeStruct(PermissionService_AddPermissionObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PermissionServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  PermissionServiceStub.prototype.hasPermission = function(permission) {
    return this.delegate_ && this.delegate_.hasPermission && this.delegate_.hasPermission(permission);
  }
  PermissionServiceStub.prototype.requestPermission = function(permission, userGesture) {
    return this.delegate_ && this.delegate_.requestPermission && this.delegate_.requestPermission(permission, userGesture);
  }
  PermissionServiceStub.prototype.requestPermissions = function(permission, userGesture) {
    return this.delegate_ && this.delegate_.requestPermissions && this.delegate_.requestPermissions(permission, userGesture);
  }
  PermissionServiceStub.prototype.revokePermission = function(permission) {
    return this.delegate_ && this.delegate_.revokePermission && this.delegate_.revokePermission(permission);
  }
  PermissionServiceStub.prototype.addPermissionObserver = function(permission, lastKnownStatus, observer) {
    return this.delegate_ && this.delegate_.addPermissionObserver && this.delegate_.addPermissionObserver(permission, lastKnownStatus, observer);
  }

  PermissionServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPermissionService_AddPermissionObserver_Name:
      var params = reader.decodeStruct(PermissionService_AddPermissionObserver_Params);
      this.addPermissionObserver(params.permission, params.lastKnownStatus, params.observer);
      return true;
    default:
      return false;
    }
  };

  PermissionServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPermissionService_HasPermission_Name:
      var params = reader.decodeStruct(PermissionService_HasPermission_Params);
      this.hasPermission(params.permission).then(function(response) {
        var responseParams =
            new PermissionService_HasPermission_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPermissionService_HasPermission_Name,
            codec.align(PermissionService_HasPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_HasPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPermissionService_RequestPermission_Name:
      var params = reader.decodeStruct(PermissionService_RequestPermission_Params);
      this.requestPermission(params.permission, params.userGesture).then(function(response) {
        var responseParams =
            new PermissionService_RequestPermission_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPermissionService_RequestPermission_Name,
            codec.align(PermissionService_RequestPermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_RequestPermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPermissionService_RequestPermissions_Name:
      var params = reader.decodeStruct(PermissionService_RequestPermissions_Params);
      this.requestPermissions(params.permission, params.userGesture).then(function(response) {
        var responseParams =
            new PermissionService_RequestPermissions_ResponseParams();
        responseParams.statuses = response.statuses;
        var builder = new codec.MessageV1Builder(
            kPermissionService_RequestPermissions_Name,
            codec.align(PermissionService_RequestPermissions_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_RequestPermissions_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kPermissionService_RevokePermission_Name:
      var params = reader.decodeStruct(PermissionService_RevokePermission_Params);
      this.revokePermission(params.permission).then(function(response) {
        var responseParams =
            new PermissionService_RevokePermission_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kPermissionService_RevokePermission_Name,
            codec.align(PermissionService_RevokePermission_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PermissionService_RevokePermission_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePermissionServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPermissionService_HasPermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_HasPermission_Params;
      break;
      case kPermissionService_RequestPermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_RequestPermission_Params;
      break;
      case kPermissionService_RequestPermissions_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_RequestPermissions_Params;
      break;
      case kPermissionService_RevokePermission_Name:
        if (message.expectsResponse())
          paramsClass = PermissionService_RevokePermission_Params;
      break;
      case kPermissionService_AddPermissionObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PermissionService_AddPermissionObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePermissionServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPermissionService_HasPermission_Name:
        if (message.isResponse())
          paramsClass = PermissionService_HasPermission_ResponseParams;
        break;
      case kPermissionService_RequestPermission_Name:
        if (message.isResponse())
          paramsClass = PermissionService_RequestPermission_ResponseParams;
        break;
      case kPermissionService_RequestPermissions_Name:
        if (message.isResponse())
          paramsClass = PermissionService_RequestPermissions_ResponseParams;
        break;
      case kPermissionService_RevokePermission_Name:
        if (message.isResponse())
          paramsClass = PermissionService_RevokePermission_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PermissionService = {
    name: 'blink.mojom.PermissionService',
    kVersion: 0,
    ptrClass: PermissionServicePtr,
    proxyClass: PermissionServiceProxy,
    stubClass: PermissionServiceStub,
    validateRequest: validatePermissionServiceRequest,
    validateResponse: validatePermissionServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/permissions/permission.mojom',
    fuzzMethods: {
      hasPermission: {
        params: PermissionService_HasPermission_Params,
      },
      requestPermission: {
        params: PermissionService_RequestPermission_Params,
      },
      requestPermissions: {
        params: PermissionService_RequestPermissions_Params,
      },
      revokePermission: {
        params: PermissionService_RevokePermission_Params,
      },
      addPermissionObserver: {
        params: PermissionService_AddPermissionObserver_Params,
      },
    },
  };
  PermissionServiceStub.prototype.validator = validatePermissionServiceRequest;
  PermissionServiceProxy.prototype.validator = validatePermissionServiceResponse;
  exports.PermissionName = PermissionName;
  exports.MidiPermissionDescriptor = MidiPermissionDescriptor;
  exports.ClipboardPermissionDescriptor = ClipboardPermissionDescriptor;
  exports.PermissionDescriptor = PermissionDescriptor;
  exports.PermissionDescriptorExtension = PermissionDescriptorExtension;
  exports.PermissionObserver = PermissionObserver;
  exports.PermissionObserverPtr = PermissionObserverPtr;
  exports.PermissionObserverAssociatedPtr = PermissionObserverAssociatedPtr;
  exports.PermissionService = PermissionService;
  exports.PermissionServicePtr = PermissionServicePtr;
  exports.PermissionServiceAssociatedPtr = PermissionServiceAssociatedPtr;
})();