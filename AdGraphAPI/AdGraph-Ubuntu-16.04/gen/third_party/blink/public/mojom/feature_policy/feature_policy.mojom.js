// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/feature_policy/feature_policy.mojom';
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
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../url/mojom/origin.mojom.js');
  }


  var WebSandboxFlags = {};
  WebSandboxFlags.kNone = 0;
  WebSandboxFlags.kNavigation = 1;
  WebSandboxFlags.kPlugins = 2;
  WebSandboxFlags.kOrigin = 4;
  WebSandboxFlags.kForms = 8;
  WebSandboxFlags.kScripts = 16;
  WebSandboxFlags.kTopNavigation = 32;
  WebSandboxFlags.kPopups = 64;
  WebSandboxFlags.kAutomaticFeatures = 128;
  WebSandboxFlags.kPointerLock = 256;
  WebSandboxFlags.kDocumentDomain = 512;
  WebSandboxFlags.kOrientationLock = 1024;
  WebSandboxFlags.kPropagatesToAuxiliaryBrowsingContexts = 2048;
  WebSandboxFlags.kModals = 4096;
  WebSandboxFlags.kPresentationController = 8192;
  WebSandboxFlags.kTopNavigationByUserActivation = 16384;
  WebSandboxFlags.kDownloads = 32768;

  WebSandboxFlags.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
    case 128:
    case 256:
    case 512:
    case 1024:
    case 2048:
    case 4096:
    case 8192:
    case 16384:
    case 32768:
      return true;
    }
    return false;
  };

  WebSandboxFlags.validate = function(enumValue) {
    var isExtensible = true;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var FeaturePolicyFeature = {};
  FeaturePolicyFeature.kNotFound = 0;
  FeaturePolicyFeature.kAutoplay = FeaturePolicyFeature.kNotFound + 1;
  FeaturePolicyFeature.kCamera = FeaturePolicyFeature.kAutoplay + 1;
  FeaturePolicyFeature.kEncryptedMedia = FeaturePolicyFeature.kCamera + 1;
  FeaturePolicyFeature.kFullscreen = FeaturePolicyFeature.kEncryptedMedia + 1;
  FeaturePolicyFeature.kGeolocation = FeaturePolicyFeature.kFullscreen + 1;
  FeaturePolicyFeature.kMicrophone = FeaturePolicyFeature.kGeolocation + 1;
  FeaturePolicyFeature.kMidiFeature = FeaturePolicyFeature.kMicrophone + 1;
  FeaturePolicyFeature.kPayment = FeaturePolicyFeature.kMidiFeature + 1;
  FeaturePolicyFeature.kSpeaker = FeaturePolicyFeature.kPayment + 1;
  FeaturePolicyFeature.kDocumentCookie = FeaturePolicyFeature.kSpeaker + 1;
  FeaturePolicyFeature.kDocumentDomain = FeaturePolicyFeature.kDocumentCookie + 1;
  FeaturePolicyFeature.kSyncScript = FeaturePolicyFeature.kDocumentDomain + 1;
  FeaturePolicyFeature.kSyncXHR = FeaturePolicyFeature.kSyncScript + 1;
  FeaturePolicyFeature.kUsb = FeaturePolicyFeature.kSyncXHR + 1;
  FeaturePolicyFeature.kAccessibilityEvents = FeaturePolicyFeature.kUsb + 1;
  FeaturePolicyFeature.kWebVr = FeaturePolicyFeature.kAccessibilityEvents + 1;
  FeaturePolicyFeature.kAccelerometer = FeaturePolicyFeature.kWebVr + 1;
  FeaturePolicyFeature.kAmbientLightSensor = FeaturePolicyFeature.kAccelerometer + 1;
  FeaturePolicyFeature.kGyroscope = FeaturePolicyFeature.kAmbientLightSensor + 1;
  FeaturePolicyFeature.kMagnetometer = FeaturePolicyFeature.kGyroscope + 1;
  FeaturePolicyFeature.kUnsizedMedia = FeaturePolicyFeature.kMagnetometer + 1;
  FeaturePolicyFeature.kLegacyImageFormats = FeaturePolicyFeature.kUnsizedMedia + 1;
  FeaturePolicyFeature.kImageCompression = FeaturePolicyFeature.kLegacyImageFormats + 1;
  FeaturePolicyFeature.kAnimations = FeaturePolicyFeature.kImageCompression + 1;
  FeaturePolicyFeature.kMaxDownscalingImage = FeaturePolicyFeature.kAnimations + 1;
  FeaturePolicyFeature.kPictureInPicture = FeaturePolicyFeature.kMaxDownscalingImage + 1;
  FeaturePolicyFeature.kVerticalScroll = FeaturePolicyFeature.kPictureInPicture + 1;
  FeaturePolicyFeature.kDocumentStreamInsertion = FeaturePolicyFeature.kVerticalScroll + 1;

  FeaturePolicyFeature.isKnownEnumValue = function(value) {
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
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
      return true;
    }
    return false;
  };

  FeaturePolicyFeature.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function ParsedFeaturePolicyDeclaration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ParsedFeaturePolicyDeclaration.prototype.initDefaults_ = function() {
    this.feature = 0;
    this.matchesAllOrigins = false;
    this.origins = null;
  };
  ParsedFeaturePolicyDeclaration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ParsedFeaturePolicyDeclaration.generate = function(generator_) {
    var generated = new ParsedFeaturePolicyDeclaration;
    generated.feature = generator_.generateEnum(0, 28);
    generated.matchesAllOrigins = generator_.generateBool();
    generated.origins = generator_.generateArray(function() {
      return generator_.generateStruct(url.mojom.Origin, false);
    });
    return generated;
  };

  ParsedFeaturePolicyDeclaration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.feature = mutator_.mutateEnum(this.feature, 0, 28);
    }
    if (mutator_.chooseMutateField()) {
      this.matchesAllOrigins = mutator_.mutateBool(this.matchesAllOrigins);
    }
    if (mutator_.chooseMutateField()) {
      this.origins = mutator_.mutateArray(this.origins, function(val) {
        return mutator_.mutateStruct(url.mojom.Origin, false);
      });
    }
    return this;
  };
  ParsedFeaturePolicyDeclaration.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ParsedFeaturePolicyDeclaration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ParsedFeaturePolicyDeclaration.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ParsedFeaturePolicyDeclaration.validate = function(messageValidator, offset) {
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


    // validate ParsedFeaturePolicyDeclaration.feature
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, FeaturePolicyFeature);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ParsedFeaturePolicyDeclaration.origins
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(origin$.Origin), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ParsedFeaturePolicyDeclaration.encodedSize = codec.kStructHeaderSize + 16;

  ParsedFeaturePolicyDeclaration.decode = function(decoder) {
    var packed;
    var val = new ParsedFeaturePolicyDeclaration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.feature = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.matchesAllOrigins = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.origins = decoder.decodeArrayPointer(new codec.PointerTo(origin$.Origin));
    return val;
  };

  ParsedFeaturePolicyDeclaration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ParsedFeaturePolicyDeclaration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.feature);
    packed = 0;
    packed |= (val.matchesAllOrigins & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(origin$.Origin), val.origins);
  };
  exports.WebSandboxFlags = WebSandboxFlags;
  exports.FeaturePolicyFeature = FeaturePolicyFeature;
  exports.ParsedFeaturePolicyDeclaration = ParsedFeaturePolicyDeclaration;
})();