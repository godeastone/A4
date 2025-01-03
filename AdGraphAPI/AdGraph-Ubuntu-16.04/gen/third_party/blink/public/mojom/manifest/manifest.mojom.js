// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/manifest/manifest.mojom';
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
  var screen_orientation_lock_types$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/screen_orientation_lock_types.mojom', '../../../../../services/device/public/mojom/screen_orientation_lock_types.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var display_mode$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/manifest/display_mode.mojom', 'display_mode.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }



  function Manifest(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Manifest.prototype.initDefaults_ = function() {
    this.name = null;
    this.shortName = null;
    this.startUrl = null;
    this.display = 0;
    this.orientation = 0;
    this.icons = null;
    this.shareTarget = null;
    this.relatedApplications = null;
    this.preferRelatedApplications = false;
    this.hasThemeColor = false;
    this.hasBackgroundColor = false;
    this.themeColor = 0;
    this.backgroundColor = 0;
    this.splashScreenUrl = null;
    this.gcmSenderId = null;
    this.scope = null;
  };
  Manifest.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Manifest.generate = function(generator_) {
    var generated = new Manifest;
    generated.name = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.shortName = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.startUrl = generator_.generateStruct(url.mojom.Url, true);
    generated.display = generator_.generateEnum(0, 4);
    generated.orientation = generator_.generateEnum(0, 8);
    generated.icons = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ManifestIcon, false);
    });
    generated.shareTarget = generator_.generateStruct(blink.mojom.ManifestShareTarget, true);
    generated.relatedApplications = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ManifestRelatedApplication, false);
    });
    generated.preferRelatedApplications = generator_.generateBool();
    generated.hasThemeColor = generator_.generateBool();
    generated.themeColor = generator_.generateUint32();
    generated.hasBackgroundColor = generator_.generateBool();
    generated.backgroundColor = generator_.generateUint32();
    generated.splashScreenUrl = generator_.generateStruct(url.mojom.Url, true);
    generated.gcmSenderId = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.scope = generator_.generateStruct(url.mojom.Url, true);
    return generated;
  };

  Manifest.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.shortName = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.startUrl = mutator_.mutateStruct(url.mojom.Url, true);
    }
    if (mutator_.chooseMutateField()) {
      this.display = mutator_.mutateEnum(this.display, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.orientation = mutator_.mutateEnum(this.orientation, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.icons = mutator_.mutateArray(this.icons, function(val) {
        return mutator_.mutateStruct(blink.mojom.ManifestIcon, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.shareTarget = mutator_.mutateStruct(blink.mojom.ManifestShareTarget, true);
    }
    if (mutator_.chooseMutateField()) {
      this.relatedApplications = mutator_.mutateArray(this.relatedApplications, function(val) {
        return mutator_.mutateStruct(blink.mojom.ManifestRelatedApplication, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.preferRelatedApplications = mutator_.mutateBool(this.preferRelatedApplications);
    }
    if (mutator_.chooseMutateField()) {
      this.hasThemeColor = mutator_.mutateBool(this.hasThemeColor);
    }
    if (mutator_.chooseMutateField()) {
      this.themeColor = mutator_.mutateUint32(this.themeColor);
    }
    if (mutator_.chooseMutateField()) {
      this.hasBackgroundColor = mutator_.mutateBool(this.hasBackgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.backgroundColor = mutator_.mutateUint32(this.backgroundColor);
    }
    if (mutator_.chooseMutateField()) {
      this.splashScreenUrl = mutator_.mutateStruct(url.mojom.Url, true);
    }
    if (mutator_.chooseMutateField()) {
      this.gcmSenderId = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.scope = mutator_.mutateStruct(url.mojom.Url, true);
    }
    return this;
  };
  Manifest.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Manifest.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Manifest.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Manifest.validate = function(messageValidator, offset) {
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


    // validate Manifest.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.shortName
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.startUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.display
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, display_mode$.DisplayMode);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.orientation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 28, screen_orientation_lock_types$.ScreenOrientationLockType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.icons
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 8, new codec.PointerTo(ManifestIcon), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.shareTarget
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, ManifestShareTarget, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.relatedApplications
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 48, 8, new codec.PointerTo(ManifestRelatedApplication), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;







    // validate Manifest.splashScreenUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.gcmSenderId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 80, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Manifest.scope
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 88, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Manifest.encodedSize = codec.kStructHeaderSize + 96;

  Manifest.decode = function(decoder) {
    var packed;
    var val = new Manifest();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStructPointer(string16$.String16);
    val.shortName = decoder.decodeStructPointer(string16$.String16);
    val.startUrl = decoder.decodeStructPointer(url$.Url);
    val.display = decoder.decodeStruct(codec.Int32);
    val.orientation = decoder.decodeStruct(codec.Int32);
    val.icons = decoder.decodeArrayPointer(new codec.PointerTo(ManifestIcon));
    val.shareTarget = decoder.decodeStructPointer(ManifestShareTarget);
    val.relatedApplications = decoder.decodeArrayPointer(new codec.PointerTo(ManifestRelatedApplication));
    packed = decoder.readUint8();
    val.preferRelatedApplications = (packed >> 0) & 1 ? true : false;
    val.hasThemeColor = (packed >> 1) & 1 ? true : false;
    val.hasBackgroundColor = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.themeColor = decoder.decodeStruct(codec.Uint32);
    val.backgroundColor = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.splashScreenUrl = decoder.decodeStructPointer(url$.Url);
    val.gcmSenderId = decoder.decodeStructPointer(string16$.String16);
    val.scope = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  Manifest.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Manifest.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStructPointer(string16$.String16, val.shortName);
    encoder.encodeStructPointer(url$.Url, val.startUrl);
    encoder.encodeStruct(codec.Int32, val.display);
    encoder.encodeStruct(codec.Int32, val.orientation);
    encoder.encodeArrayPointer(new codec.PointerTo(ManifestIcon), val.icons);
    encoder.encodeStructPointer(ManifestShareTarget, val.shareTarget);
    encoder.encodeArrayPointer(new codec.PointerTo(ManifestRelatedApplication), val.relatedApplications);
    packed = 0;
    packed |= (val.preferRelatedApplications & 1) << 0
    packed |= (val.hasThemeColor & 1) << 1
    packed |= (val.hasBackgroundColor & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.themeColor);
    encoder.encodeStruct(codec.Uint32, val.backgroundColor);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.splashScreenUrl);
    encoder.encodeStructPointer(string16$.String16, val.gcmSenderId);
    encoder.encodeStructPointer(url$.Url, val.scope);
  };
  function ManifestIcon(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  ManifestIcon.Purpose = {};
  ManifestIcon.Purpose.ANY = 0;
  ManifestIcon.Purpose.BADGE = ManifestIcon.Purpose.ANY + 1;

  ManifestIcon.Purpose.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  ManifestIcon.Purpose.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  ManifestIcon.prototype.initDefaults_ = function() {
    this.src = null;
    this.type = null;
    this.sizes = null;
    this.purpose = null;
  };
  ManifestIcon.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestIcon.generate = function(generator_) {
    var generated = new ManifestIcon;
    generated.src = generator_.generateStruct(url.mojom.Url, false);
    generated.type = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.sizes = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Size, false);
    });
    generated.purpose = generator_.generateArray(function() {
      return generator_.generateEnum(0, 1);
    });
    return generated;
  };

  ManifestIcon.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.src = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.sizes = mutator_.mutateArray(this.sizes, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Size, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.purpose = mutator_.mutateArray(this.purpose, function(val) {
        return mutator_.mutateEnum(val, 0, 1);
      });
    }
    return this;
  };
  ManifestIcon.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestIcon.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestIcon.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestIcon.validate = function(messageValidator, offset) {
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


    // validate ManifestIcon.src
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestIcon.type
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestIcon.sizes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Size), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestIcon.purpose
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 4, new codec.Enum(ManifestIcon.Purpose), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestIcon.encodedSize = codec.kStructHeaderSize + 32;

  ManifestIcon.decode = function(decoder) {
    var packed;
    var val = new ManifestIcon();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.src = decoder.decodeStructPointer(url$.Url);
    val.type = decoder.decodeStructPointer(string16$.String16);
    val.sizes = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Size));
    val.purpose = decoder.decodeArrayPointer(new codec.Enum(ManifestIcon.Purpose));
    return val;
  };

  ManifestIcon.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestIcon.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.src);
    encoder.encodeStructPointer(string16$.String16, val.type);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Size), val.sizes);
    encoder.encodeArrayPointer(new codec.Enum(ManifestIcon.Purpose), val.purpose);
  };
  function ManifestRelatedApplication(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestRelatedApplication.prototype.initDefaults_ = function() {
    this.platform = null;
    this.url = null;
    this.id = null;
  };
  ManifestRelatedApplication.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestRelatedApplication.generate = function(generator_) {
    var generated = new ManifestRelatedApplication;
    generated.platform = generator_.generateStruct(mojoBase.mojom.String16, true);
    generated.url = generator_.generateStruct(url.mojom.Url, true);
    generated.id = generator_.generateStruct(mojoBase.mojom.String16, true);
    return generated;
  };

  ManifestRelatedApplication.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.platform = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, true);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(mojoBase.mojom.String16, true);
    }
    return this;
  };
  ManifestRelatedApplication.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestRelatedApplication.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestRelatedApplication.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestRelatedApplication.validate = function(messageValidator, offset) {
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


    // validate ManifestRelatedApplication.platform
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestRelatedApplication.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestRelatedApplication.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestRelatedApplication.encodedSize = codec.kStructHeaderSize + 24;

  ManifestRelatedApplication.decode = function(decoder) {
    var packed;
    var val = new ManifestRelatedApplication();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.platform = decoder.decodeStructPointer(string16$.String16);
    val.url = decoder.decodeStructPointer(url$.Url);
    val.id = decoder.decodeStructPointer(string16$.String16);
    return val;
  };

  ManifestRelatedApplication.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestRelatedApplication.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(string16$.String16, val.platform);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(string16$.String16, val.id);
  };
  function ManifestShareTarget(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestShareTarget.prototype.initDefaults_ = function() {
    this.urlTemplate = null;
  };
  ManifestShareTarget.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestShareTarget.generate = function(generator_) {
    var generated = new ManifestShareTarget;
    generated.urlTemplate = generator_.generateStruct(url.mojom.Url, true);
    return generated;
  };

  ManifestShareTarget.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urlTemplate = mutator_.mutateStruct(url.mojom.Url, true);
    }
    return this;
  };
  ManifestShareTarget.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestShareTarget.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestShareTarget.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestShareTarget.validate = function(messageValidator, offset) {
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


    // validate ManifestShareTarget.urlTemplate
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestShareTarget.encodedSize = codec.kStructHeaderSize + 8;

  ManifestShareTarget.decode = function(decoder) {
    var packed;
    var val = new ManifestShareTarget();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.urlTemplate = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  ManifestShareTarget.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestShareTarget.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.urlTemplate);
  };
  function ManifestDebugInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestDebugInfo.prototype.initDefaults_ = function() {
    this.errors = null;
    this.rawManifest = null;
  };
  ManifestDebugInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestDebugInfo.generate = function(generator_) {
    var generated = new ManifestDebugInfo;
    generated.errors = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ManifestError, false);
    });
    generated.rawManifest = generator_.generateString(false);
    return generated;
  };

  ManifestDebugInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.errors = mutator_.mutateArray(this.errors, function(val) {
        return mutator_.mutateStruct(blink.mojom.ManifestError, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.rawManifest = mutator_.mutateString(this.rawManifest, false);
    }
    return this;
  };
  ManifestDebugInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestDebugInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestDebugInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestDebugInfo.validate = function(messageValidator, offset) {
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


    // validate ManifestDebugInfo.errors
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ManifestError), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ManifestDebugInfo.rawManifest
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ManifestDebugInfo.encodedSize = codec.kStructHeaderSize + 16;

  ManifestDebugInfo.decode = function(decoder) {
    var packed;
    var val = new ManifestDebugInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.errors = decoder.decodeArrayPointer(new codec.PointerTo(ManifestError));
    val.rawManifest = decoder.decodeStruct(codec.String);
    return val;
  };

  ManifestDebugInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestDebugInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ManifestError), val.errors);
    encoder.encodeStruct(codec.String, val.rawManifest);
  };
  function ManifestError(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ManifestError.prototype.initDefaults_ = function() {
    this.message = null;
    this.critical = false;
    this.line = 0;
    this.column = 0;
  };
  ManifestError.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ManifestError.generate = function(generator_) {
    var generated = new ManifestError;
    generated.message = generator_.generateString(false);
    generated.critical = generator_.generateBool();
    generated.line = generator_.generateUint32();
    generated.column = generator_.generateUint32();
    return generated;
  };

  ManifestError.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateString(this.message, false);
    }
    if (mutator_.chooseMutateField()) {
      this.critical = mutator_.mutateBool(this.critical);
    }
    if (mutator_.chooseMutateField()) {
      this.line = mutator_.mutateUint32(this.line);
    }
    if (mutator_.chooseMutateField()) {
      this.column = mutator_.mutateUint32(this.column);
    }
    return this;
  };
  ManifestError.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ManifestError.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ManifestError.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ManifestError.validate = function(messageValidator, offset) {
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


    // validate ManifestError.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  ManifestError.encodedSize = codec.kStructHeaderSize + 24;

  ManifestError.decode = function(decoder) {
    var packed;
    var val = new ManifestError();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.critical = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.line = decoder.decodeStruct(codec.Uint32);
    val.column = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ManifestError.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ManifestError.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
    packed = 0;
    packed |= (val.critical & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.line);
    encoder.encodeStruct(codec.Uint32, val.column);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.Manifest = Manifest;
  exports.ManifestIcon = ManifestIcon;
  exports.ManifestRelatedApplication = ManifestRelatedApplication;
  exports.ManifestShareTarget = ManifestShareTarget;
  exports.ManifestDebugInfo = ManifestDebugInfo;
  exports.ManifestError = ManifestError;
})();