// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/platform/modules/background_fetch/background_fetch.mojom';
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
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var fetch_api_request$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/modules/fetch/fetch_api_request.mojom', '../fetch/fetch_api_request.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var BackgroundFetchError = {};
  BackgroundFetchError.NONE = 0;
  BackgroundFetchError.DUPLICATED_DEVELOPER_ID = BackgroundFetchError.NONE + 1;
  BackgroundFetchError.INVALID_ARGUMENT = BackgroundFetchError.DUPLICATED_DEVELOPER_ID + 1;
  BackgroundFetchError.INVALID_ID = BackgroundFetchError.INVALID_ARGUMENT + 1;
  BackgroundFetchError.STORAGE_ERROR = BackgroundFetchError.INVALID_ID + 1;

  BackgroundFetchError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    }
    return false;
  };

  BackgroundFetchError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function IconDefinition(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IconDefinition.prototype.initDefaults_ = function() {
    this.src = null;
    this.sizes = null;
    this.type = null;
  };
  IconDefinition.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IconDefinition.generate = function(generator_) {
    var generated = new IconDefinition;
    generated.src = generator_.generateString(false);
    generated.sizes = generator_.generateString(false);
    generated.type = generator_.generateString(false);
    return generated;
  };

  IconDefinition.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.src = mutator_.mutateString(this.src, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sizes = mutator_.mutateString(this.sizes, false);
    }
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateString(this.type, false);
    }
    return this;
  };
  IconDefinition.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IconDefinition.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IconDefinition.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IconDefinition.validate = function(messageValidator, offset) {
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


    // validate IconDefinition.src
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate IconDefinition.sizes
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate IconDefinition.type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IconDefinition.encodedSize = codec.kStructHeaderSize + 24;

  IconDefinition.decode = function(decoder) {
    var packed;
    var val = new IconDefinition();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.src = decoder.decodeStruct(codec.String);
    val.sizes = decoder.decodeStruct(codec.String);
    val.type = decoder.decodeStruct(codec.String);
    return val;
  };

  IconDefinition.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IconDefinition.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.src);
    encoder.encodeStruct(codec.String, val.sizes);
    encoder.encodeStruct(codec.String, val.type);
  };
  function BackgroundFetchOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchOptions.prototype.initDefaults_ = function() {
    this.icons = null;
    this.downloadTotal = 0;
    this.title = null;
  };
  BackgroundFetchOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchOptions.generate = function(generator_) {
    var generated = new BackgroundFetchOptions;
    generated.icons = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.IconDefinition, false);
    });
    generated.downloadTotal = generator_.generateUint64();
    generated.title = generator_.generateString(false);
    return generated;
  };

  BackgroundFetchOptions.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.icons = mutator_.mutateArray(this.icons, function(val) {
        return mutator_.mutateStruct(blink.mojom.IconDefinition, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.downloadTotal = mutator_.mutateUint64(this.downloadTotal);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    return this;
  };
  BackgroundFetchOptions.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchOptions.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchOptions.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchOptions.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchOptions.icons
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(IconDefinition), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate BackgroundFetchOptions.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchOptions.encodedSize = codec.kStructHeaderSize + 24;

  BackgroundFetchOptions.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.icons = decoder.decodeArrayPointer(new codec.PointerTo(IconDefinition));
    val.downloadTotal = decoder.decodeStruct(codec.Uint64);
    val.title = decoder.decodeStruct(codec.String);
    return val;
  };

  BackgroundFetchOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(IconDefinition), val.icons);
    encoder.encodeStruct(codec.Uint64, val.downloadTotal);
    encoder.encodeStruct(codec.String, val.title);
  };
  function BackgroundFetchRegistration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchRegistration.prototype.initDefaults_ = function() {
    this.developerId = null;
    this.uniqueId = null;
    this.uploadTotal = 0;
    this.uploaded = 0;
    this.downloadTotal = 0;
    this.downloaded = 0;
  };
  BackgroundFetchRegistration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchRegistration.generate = function(generator_) {
    var generated = new BackgroundFetchRegistration;
    generated.developerId = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    generated.uploadTotal = generator_.generateUint64();
    generated.uploaded = generator_.generateUint64();
    generated.downloadTotal = generator_.generateUint64();
    generated.downloaded = generator_.generateUint64();
    return generated;
  };

  BackgroundFetchRegistration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uploadTotal = mutator_.mutateUint64(this.uploadTotal);
    }
    if (mutator_.chooseMutateField()) {
      this.uploaded = mutator_.mutateUint64(this.uploaded);
    }
    if (mutator_.chooseMutateField()) {
      this.downloadTotal = mutator_.mutateUint64(this.downloadTotal);
    }
    if (mutator_.chooseMutateField()) {
      this.downloaded = mutator_.mutateUint64(this.downloaded);
    }
    return this;
  };
  BackgroundFetchRegistration.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchRegistration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchRegistration.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchRegistration.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchRegistration.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchRegistration.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  BackgroundFetchRegistration.encodedSize = codec.kStructHeaderSize + 48;

  BackgroundFetchRegistration.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchRegistration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.developerId = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.uploadTotal = decoder.decodeStruct(codec.Uint64);
    val.uploaded = decoder.decodeStruct(codec.Uint64);
    val.downloadTotal = decoder.decodeStruct(codec.Uint64);
    val.downloaded = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  BackgroundFetchRegistration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchRegistration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeStruct(codec.Uint64, val.uploadTotal);
    encoder.encodeStruct(codec.Uint64, val.uploaded);
    encoder.encodeStruct(codec.Uint64, val.downloadTotal);
    encoder.encodeStruct(codec.Uint64, val.downloaded);
  };
  function BackgroundFetchRegistrationObserver_OnProgress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchRegistrationObserver_OnProgress_Params.prototype.initDefaults_ = function() {
    this.uploadTotal = 0;
    this.uploaded = 0;
    this.downloadTotal = 0;
    this.downloaded = 0;
  };
  BackgroundFetchRegistrationObserver_OnProgress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchRegistrationObserver_OnProgress_Params.generate = function(generator_) {
    var generated = new BackgroundFetchRegistrationObserver_OnProgress_Params;
    generated.uploadTotal = generator_.generateUint64();
    generated.uploaded = generator_.generateUint64();
    generated.downloadTotal = generator_.generateUint64();
    generated.downloaded = generator_.generateUint64();
    return generated;
  };

  BackgroundFetchRegistrationObserver_OnProgress_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.uploadTotal = mutator_.mutateUint64(this.uploadTotal);
    }
    if (mutator_.chooseMutateField()) {
      this.uploaded = mutator_.mutateUint64(this.uploaded);
    }
    if (mutator_.chooseMutateField()) {
      this.downloadTotal = mutator_.mutateUint64(this.downloadTotal);
    }
    if (mutator_.chooseMutateField()) {
      this.downloaded = mutator_.mutateUint64(this.downloaded);
    }
    return this;
  };
  BackgroundFetchRegistrationObserver_OnProgress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchRegistrationObserver_OnProgress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchRegistrationObserver_OnProgress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchRegistrationObserver_OnProgress_Params.validate = function(messageValidator, offset) {
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





    return validator.validationError.NONE;
  };

  BackgroundFetchRegistrationObserver_OnProgress_Params.encodedSize = codec.kStructHeaderSize + 32;

  BackgroundFetchRegistrationObserver_OnProgress_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchRegistrationObserver_OnProgress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.uploadTotal = decoder.decodeStruct(codec.Uint64);
    val.uploaded = decoder.decodeStruct(codec.Uint64);
    val.downloadTotal = decoder.decodeStruct(codec.Uint64);
    val.downloaded = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  BackgroundFetchRegistrationObserver_OnProgress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchRegistrationObserver_OnProgress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.uploadTotal);
    encoder.encodeStruct(codec.Uint64, val.uploaded);
    encoder.encodeStruct(codec.Uint64, val.downloadTotal);
    encoder.encodeStruct(codec.Uint64, val.downloaded);
  };
  function BackgroundFetchService_Fetch_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_Fetch_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.developerId = null;
    this.requests = null;
    this.options = null;
    this.icon = null;
  };
  BackgroundFetchService_Fetch_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_Fetch_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_Fetch_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.developerId = generator_.generateString(false);
    generated.requests = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.FetchAPIRequest, false);
    });
    generated.options = generator_.generateStruct(blink.mojom.BackgroundFetchOptions, false);
    generated.icon = generator_.generateStruct(skia.mojom.Bitmap, true);
    return generated;
  };

  BackgroundFetchService_Fetch_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requests = mutator_.mutateArray(this.requests, function(val) {
        return mutator_.mutateStruct(blink.mojom.FetchAPIRequest, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.options = mutator_.mutateStruct(blink.mojom.BackgroundFetchOptions, false);
    }
    if (mutator_.chooseMutateField()) {
      this.icon = mutator_.mutateStruct(skia.mojom.Bitmap, true);
    }
    return this;
  };
  BackgroundFetchService_Fetch_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.requests !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.requests.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    if (this.icon !== null) {
      Array.prototype.push.apply(handles, this.icon.getHandleDeps());
    }
    return handles;
  };

  BackgroundFetchService_Fetch_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_Fetch_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.requests.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    idx = this.icon.setHandlesInternal_(handles, idx);
    return idx;
  };

  BackgroundFetchService_Fetch_Params.validate = function(messageValidator, offset) {
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



    // validate BackgroundFetchService_Fetch_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_Fetch_Params.requests
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(fetch_api_request$.FetchAPIRequest), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_Fetch_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, BackgroundFetchOptions, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_Fetch_Params.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, bitmap$.Bitmap, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_Fetch_Params.encodedSize = codec.kStructHeaderSize + 40;

  BackgroundFetchService_Fetch_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_Fetch_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.developerId = decoder.decodeStruct(codec.String);
    val.requests = decoder.decodeArrayPointer(new codec.PointerTo(fetch_api_request$.FetchAPIRequest));
    val.options = decoder.decodeStructPointer(BackgroundFetchOptions);
    val.icon = decoder.decodeStructPointer(bitmap$.Bitmap);
    return val;
  };

  BackgroundFetchService_Fetch_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_Fetch_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeArrayPointer(new codec.PointerTo(fetch_api_request$.FetchAPIRequest), val.requests);
    encoder.encodeStructPointer(BackgroundFetchOptions, val.options);
    encoder.encodeStructPointer(bitmap$.Bitmap, val.icon);
  };
  function BackgroundFetchService_Fetch_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_Fetch_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.registration = null;
  };
  BackgroundFetchService_Fetch_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_Fetch_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundFetchService_Fetch_ResponseParams;
    generated.error = generator_.generateEnum(0, 4);
    generated.registration = generator_.generateStruct(blink.mojom.BackgroundFetchRegistration, true);
    return generated;
  };

  BackgroundFetchService_Fetch_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.registration = mutator_.mutateStruct(blink.mojom.BackgroundFetchRegistration, true);
    }
    return this;
  };
  BackgroundFetchService_Fetch_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_Fetch_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_Fetch_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_Fetch_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_Fetch_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundFetchError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_Fetch_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, BackgroundFetchRegistration, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_Fetch_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundFetchService_Fetch_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_Fetch_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registration = decoder.decodeStructPointer(BackgroundFetchRegistration);
    return val;
  };

  BackgroundFetchService_Fetch_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_Fetch_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(BackgroundFetchRegistration, val.registration);
  };
  function BackgroundFetchService_UpdateUI_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_UpdateUI_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.developerId = null;
    this.uniqueId = null;
    this.title = null;
  };
  BackgroundFetchService_UpdateUI_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_UpdateUI_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_UpdateUI_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.developerId = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    generated.title = generator_.generateString(false);
    return generated;
  };

  BackgroundFetchService_UpdateUI_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.title = mutator_.mutateString(this.title, false);
    }
    return this;
  };
  BackgroundFetchService_UpdateUI_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_UpdateUI_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_UpdateUI_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_UpdateUI_Params.validate = function(messageValidator, offset) {
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



    // validate BackgroundFetchService_UpdateUI_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_UpdateUI_Params.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_UpdateUI_Params.title
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_UpdateUI_Params.encodedSize = codec.kStructHeaderSize + 32;

  BackgroundFetchService_UpdateUI_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_UpdateUI_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.developerId = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.title = decoder.decodeStruct(codec.String);
    return val;
  };

  BackgroundFetchService_UpdateUI_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_UpdateUI_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeStruct(codec.String, val.title);
  };
  function BackgroundFetchService_UpdateUI_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_UpdateUI_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  BackgroundFetchService_UpdateUI_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_UpdateUI_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundFetchService_UpdateUI_ResponseParams;
    generated.error = generator_.generateEnum(0, 4);
    return generated;
  };

  BackgroundFetchService_UpdateUI_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 4);
    }
    return this;
  };
  BackgroundFetchService_UpdateUI_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_UpdateUI_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_UpdateUI_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_UpdateUI_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_UpdateUI_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundFetchError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_UpdateUI_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundFetchService_UpdateUI_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_UpdateUI_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundFetchService_UpdateUI_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_UpdateUI_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundFetchService_Abort_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_Abort_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.developerId = null;
    this.uniqueId = null;
  };
  BackgroundFetchService_Abort_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_Abort_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_Abort_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.developerId = generator_.generateString(false);
    generated.uniqueId = generator_.generateString(false);
    return generated;
  };

  BackgroundFetchService_Abort_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    return this;
  };
  BackgroundFetchService_Abort_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_Abort_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_Abort_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_Abort_Params.validate = function(messageValidator, offset) {
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



    // validate BackgroundFetchService_Abort_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_Abort_Params.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_Abort_Params.encodedSize = codec.kStructHeaderSize + 24;

  BackgroundFetchService_Abort_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_Abort_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.developerId = decoder.decodeStruct(codec.String);
    val.uniqueId = decoder.decodeStruct(codec.String);
    return val;
  };

  BackgroundFetchService_Abort_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_Abort_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeStruct(codec.String, val.developerId);
    encoder.encodeStruct(codec.String, val.uniqueId);
  };
  function BackgroundFetchService_Abort_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_Abort_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  BackgroundFetchService_Abort_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_Abort_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundFetchService_Abort_ResponseParams;
    generated.error = generator_.generateEnum(0, 4);
    return generated;
  };

  BackgroundFetchService_Abort_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 4);
    }
    return this;
  };
  BackgroundFetchService_Abort_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_Abort_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_Abort_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_Abort_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_Abort_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundFetchError);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_Abort_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundFetchService_Abort_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_Abort_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BackgroundFetchService_Abort_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_Abort_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BackgroundFetchService_GetRegistration_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_GetRegistration_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
    this.developerId = null;
  };
  BackgroundFetchService_GetRegistration_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_GetRegistration_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_GetRegistration_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    generated.developerId = generator_.generateString(false);
    return generated;
  };

  BackgroundFetchService_GetRegistration_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    if (mutator_.chooseMutateField()) {
      this.developerId = mutator_.mutateString(this.developerId, false);
    }
    return this;
  };
  BackgroundFetchService_GetRegistration_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_GetRegistration_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_GetRegistration_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_GetRegistration_Params.validate = function(messageValidator, offset) {
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



    // validate BackgroundFetchService_GetRegistration_Params.developerId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_GetRegistration_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundFetchService_GetRegistration_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_GetRegistration_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    val.developerId = decoder.decodeStruct(codec.String);
    return val;
  };

  BackgroundFetchService_GetRegistration_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_GetRegistration_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
    encoder.encodeStruct(codec.String, val.developerId);
  };
  function BackgroundFetchService_GetRegistration_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_GetRegistration_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.registration = null;
  };
  BackgroundFetchService_GetRegistration_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_GetRegistration_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundFetchService_GetRegistration_ResponseParams;
    generated.error = generator_.generateEnum(0, 4);
    generated.registration = generator_.generateStruct(blink.mojom.BackgroundFetchRegistration, true);
    return generated;
  };

  BackgroundFetchService_GetRegistration_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.registration = mutator_.mutateStruct(blink.mojom.BackgroundFetchRegistration, true);
    }
    return this;
  };
  BackgroundFetchService_GetRegistration_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_GetRegistration_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_GetRegistration_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_GetRegistration_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_GetRegistration_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundFetchError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_GetRegistration_ResponseParams.registration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, BackgroundFetchRegistration, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_GetRegistration_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundFetchService_GetRegistration_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_GetRegistration_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.registration = decoder.decodeStructPointer(BackgroundFetchRegistration);
    return val;
  };

  BackgroundFetchService_GetRegistration_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_GetRegistration_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(BackgroundFetchRegistration, val.registration);
  };
  function BackgroundFetchService_GetDeveloperIds_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_GetDeveloperIds_Params.prototype.initDefaults_ = function() {
    this.serviceWorkerRegistrationId = 0;
  };
  BackgroundFetchService_GetDeveloperIds_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_GetDeveloperIds_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_GetDeveloperIds_Params;
    generated.serviceWorkerRegistrationId = generator_.generateInt64();
    return generated;
  };

  BackgroundFetchService_GetDeveloperIds_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceWorkerRegistrationId = mutator_.mutateInt64(this.serviceWorkerRegistrationId);
    }
    return this;
  };
  BackgroundFetchService_GetDeveloperIds_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_GetDeveloperIds_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_GetDeveloperIds_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_GetDeveloperIds_Params.validate = function(messageValidator, offset) {
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

  BackgroundFetchService_GetDeveloperIds_Params.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundFetchService_GetDeveloperIds_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_GetDeveloperIds_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceWorkerRegistrationId = decoder.decodeStruct(codec.Int64);
    return val;
  };

  BackgroundFetchService_GetDeveloperIds_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_GetDeveloperIds_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.serviceWorkerRegistrationId);
  };
  function BackgroundFetchService_GetDeveloperIds_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_GetDeveloperIds_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.developerIds = null;
  };
  BackgroundFetchService_GetDeveloperIds_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_GetDeveloperIds_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundFetchService_GetDeveloperIds_ResponseParams;
    generated.error = generator_.generateEnum(0, 4);
    generated.developerIds = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  BackgroundFetchService_GetDeveloperIds_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.error = mutator_.mutateEnum(this.error, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.developerIds = mutator_.mutateArray(this.developerIds, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  BackgroundFetchService_GetDeveloperIds_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_GetDeveloperIds_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_GetDeveloperIds_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_GetDeveloperIds_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_GetDeveloperIds_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BackgroundFetchError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_GetDeveloperIds_ResponseParams.developerIds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_GetDeveloperIds_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundFetchService_GetDeveloperIds_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_GetDeveloperIds_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.developerIds = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  BackgroundFetchService_GetDeveloperIds_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_GetDeveloperIds_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.String, val.developerIds);
  };
  function BackgroundFetchService_GetIconDisplaySize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_GetIconDisplaySize_Params.prototype.initDefaults_ = function() {
  };
  BackgroundFetchService_GetIconDisplaySize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_GetIconDisplaySize_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_GetIconDisplaySize_Params;
    return generated;
  };

  BackgroundFetchService_GetIconDisplaySize_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  BackgroundFetchService_GetIconDisplaySize_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_GetIconDisplaySize_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_GetIconDisplaySize_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_GetIconDisplaySize_Params.validate = function(messageValidator, offset) {
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

  BackgroundFetchService_GetIconDisplaySize_Params.encodedSize = codec.kStructHeaderSize + 0;

  BackgroundFetchService_GetIconDisplaySize_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_GetIconDisplaySize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BackgroundFetchService_GetIconDisplaySize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_GetIconDisplaySize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function BackgroundFetchService_GetIconDisplaySize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_GetIconDisplaySize_ResponseParams.prototype.initDefaults_ = function() {
    this.iconSizePixels = null;
  };
  BackgroundFetchService_GetIconDisplaySize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_GetIconDisplaySize_ResponseParams.generate = function(generator_) {
    var generated = new BackgroundFetchService_GetIconDisplaySize_ResponseParams;
    generated.iconSizePixels = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  BackgroundFetchService_GetIconDisplaySize_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.iconSizePixels = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  BackgroundFetchService_GetIconDisplaySize_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BackgroundFetchService_GetIconDisplaySize_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_GetIconDisplaySize_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BackgroundFetchService_GetIconDisplaySize_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_GetIconDisplaySize_ResponseParams.iconSizePixels
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_GetIconDisplaySize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BackgroundFetchService_GetIconDisplaySize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_GetIconDisplaySize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.iconSizePixels = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  BackgroundFetchService_GetIconDisplaySize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_GetIconDisplaySize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.iconSizePixels);
  };
  function BackgroundFetchService_AddRegistrationObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BackgroundFetchService_AddRegistrationObserver_Params.prototype.initDefaults_ = function() {
    this.uniqueId = null;
    this.observer = new BackgroundFetchRegistrationObserverPtr();
  };
  BackgroundFetchService_AddRegistrationObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BackgroundFetchService_AddRegistrationObserver_Params.generate = function(generator_) {
    var generated = new BackgroundFetchService_AddRegistrationObserver_Params;
    generated.uniqueId = generator_.generateString(false);
    generated.observer = generator_.generateInterface("blink.mojom.BackgroundFetchRegistrationObserver", false);
    return generated;
  };

  BackgroundFetchService_AddRegistrationObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.uniqueId = mutator_.mutateString(this.uniqueId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "blink.mojom.BackgroundFetchRegistrationObserver", false);
    }
    return this;
  };
  BackgroundFetchService_AddRegistrationObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BackgroundFetchRegistrationObserverPtr"]);
    }
    return handles;
  };

  BackgroundFetchService_AddRegistrationObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BackgroundFetchService_AddRegistrationObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  BackgroundFetchService_AddRegistrationObserver_Params.validate = function(messageValidator, offset) {
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


    // validate BackgroundFetchService_AddRegistrationObserver_Params.uniqueId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BackgroundFetchService_AddRegistrationObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BackgroundFetchService_AddRegistrationObserver_Params.encodedSize = codec.kStructHeaderSize + 16;

  BackgroundFetchService_AddRegistrationObserver_Params.decode = function(decoder) {
    var packed;
    var val = new BackgroundFetchService_AddRegistrationObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.uniqueId = decoder.decodeStruct(codec.String);
    val.observer = decoder.decodeStruct(new codec.Interface(BackgroundFetchRegistrationObserverPtr));
    return val;
  };

  BackgroundFetchService_AddRegistrationObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BackgroundFetchService_AddRegistrationObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.uniqueId);
    encoder.encodeStruct(new codec.Interface(BackgroundFetchRegistrationObserverPtr), val.observer);
  };
  var kBackgroundFetchRegistrationObserver_OnProgress_Name = 372294729;

  function BackgroundFetchRegistrationObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BackgroundFetchRegistrationObserver,
                                                   handleOrPtrInfo);
  }

  function BackgroundFetchRegistrationObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BackgroundFetchRegistrationObserver, associatedInterfacePtrInfo);
  }

  BackgroundFetchRegistrationObserverAssociatedPtr.prototype =
      Object.create(BackgroundFetchRegistrationObserverPtr.prototype);
  BackgroundFetchRegistrationObserverAssociatedPtr.prototype.constructor =
      BackgroundFetchRegistrationObserverAssociatedPtr;

  function BackgroundFetchRegistrationObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  BackgroundFetchRegistrationObserverPtr.prototype.onProgress = function() {
    return BackgroundFetchRegistrationObserverProxy.prototype.onProgress
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchRegistrationObserverProxy.prototype.onProgress = function(uploadTotal, uploaded, downloadTotal, downloaded) {
    var params_ = new BackgroundFetchRegistrationObserver_OnProgress_Params();
    params_.uploadTotal = uploadTotal;
    params_.uploaded = uploaded;
    params_.downloadTotal = downloadTotal;
    params_.downloaded = downloaded;
    var builder = new codec.MessageV0Builder(
        kBackgroundFetchRegistrationObserver_OnProgress_Name,
        codec.align(BackgroundFetchRegistrationObserver_OnProgress_Params.encodedSize));
    builder.encodeStruct(BackgroundFetchRegistrationObserver_OnProgress_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function BackgroundFetchRegistrationObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  BackgroundFetchRegistrationObserverStub.prototype.onProgress = function(uploadTotal, uploaded, downloadTotal, downloaded) {
    return this.delegate_ && this.delegate_.onProgress && this.delegate_.onProgress(uploadTotal, uploaded, downloadTotal, downloaded);
  }

  BackgroundFetchRegistrationObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundFetchRegistrationObserver_OnProgress_Name:
      var params = reader.decodeStruct(BackgroundFetchRegistrationObserver_OnProgress_Params);
      this.onProgress(params.uploadTotal, params.uploaded, params.downloadTotal, params.downloaded);
      return true;
    default:
      return false;
    }
  };

  BackgroundFetchRegistrationObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateBackgroundFetchRegistrationObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundFetchRegistrationObserver_OnProgress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BackgroundFetchRegistrationObserver_OnProgress_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundFetchRegistrationObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var BackgroundFetchRegistrationObserver = {
    name: 'blink.mojom.BackgroundFetchRegistrationObserver',
    kVersion: 0,
    ptrClass: BackgroundFetchRegistrationObserverPtr,
    proxyClass: BackgroundFetchRegistrationObserverProxy,
    stubClass: BackgroundFetchRegistrationObserverStub,
    validateRequest: validateBackgroundFetchRegistrationObserverRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/platform/modules/background_fetch/background_fetch.mojom',
    fuzzMethods: {
      onProgress: {
        params: BackgroundFetchRegistrationObserver_OnProgress_Params,
      },
    },
  };
  BackgroundFetchRegistrationObserverStub.prototype.validator = validateBackgroundFetchRegistrationObserverRequest;
  BackgroundFetchRegistrationObserverProxy.prototype.validator = null;
  var kBackgroundFetchService_Fetch_Name = 179154092;
  var kBackgroundFetchService_UpdateUI_Name = 607772620;
  var kBackgroundFetchService_Abort_Name = 2085463140;
  var kBackgroundFetchService_GetRegistration_Name = 260971885;
  var kBackgroundFetchService_GetDeveloperIds_Name = 896914755;
  var kBackgroundFetchService_GetIconDisplaySize_Name = 1814898260;
  var kBackgroundFetchService_AddRegistrationObserver_Name = 476345723;

  function BackgroundFetchServicePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BackgroundFetchService,
                                                   handleOrPtrInfo);
  }

  function BackgroundFetchServiceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BackgroundFetchService, associatedInterfacePtrInfo);
  }

  BackgroundFetchServiceAssociatedPtr.prototype =
      Object.create(BackgroundFetchServicePtr.prototype);
  BackgroundFetchServiceAssociatedPtr.prototype.constructor =
      BackgroundFetchServiceAssociatedPtr;

  function BackgroundFetchServiceProxy(receiver) {
    this.receiver_ = receiver;
  }
  BackgroundFetchServicePtr.prototype.fetch = function() {
    return BackgroundFetchServiceProxy.prototype.fetch
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.fetch = function(serviceWorkerRegistrationId, developerId, requests, options, icon) {
    var params_ = new BackgroundFetchService_Fetch_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.developerId = developerId;
    params_.requests = requests;
    params_.options = options;
    params_.icon = icon;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundFetchService_Fetch_Name,
          codec.align(BackgroundFetchService_Fetch_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundFetchService_Fetch_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundFetchService_Fetch_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundFetchServicePtr.prototype.updateUI = function() {
    return BackgroundFetchServiceProxy.prototype.updateUI
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.updateUI = function(serviceWorkerRegistrationId, developerId, uniqueId, title) {
    var params_ = new BackgroundFetchService_UpdateUI_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.developerId = developerId;
    params_.uniqueId = uniqueId;
    params_.title = title;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundFetchService_UpdateUI_Name,
          codec.align(BackgroundFetchService_UpdateUI_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundFetchService_UpdateUI_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundFetchService_UpdateUI_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundFetchServicePtr.prototype.abort = function() {
    return BackgroundFetchServiceProxy.prototype.abort
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.abort = function(serviceWorkerRegistrationId, developerId, uniqueId) {
    var params_ = new BackgroundFetchService_Abort_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.developerId = developerId;
    params_.uniqueId = uniqueId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundFetchService_Abort_Name,
          codec.align(BackgroundFetchService_Abort_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundFetchService_Abort_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundFetchService_Abort_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundFetchServicePtr.prototype.getRegistration = function() {
    return BackgroundFetchServiceProxy.prototype.getRegistration
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.getRegistration = function(serviceWorkerRegistrationId, developerId) {
    var params_ = new BackgroundFetchService_GetRegistration_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    params_.developerId = developerId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundFetchService_GetRegistration_Name,
          codec.align(BackgroundFetchService_GetRegistration_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundFetchService_GetRegistration_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundFetchService_GetRegistration_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundFetchServicePtr.prototype.getDeveloperIds = function() {
    return BackgroundFetchServiceProxy.prototype.getDeveloperIds
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.getDeveloperIds = function(serviceWorkerRegistrationId) {
    var params_ = new BackgroundFetchService_GetDeveloperIds_Params();
    params_.serviceWorkerRegistrationId = serviceWorkerRegistrationId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundFetchService_GetDeveloperIds_Name,
          codec.align(BackgroundFetchService_GetDeveloperIds_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundFetchService_GetDeveloperIds_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundFetchService_GetDeveloperIds_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundFetchServicePtr.prototype.getIconDisplaySize = function() {
    return BackgroundFetchServiceProxy.prototype.getIconDisplaySize
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.getIconDisplaySize = function() {
    var params_ = new BackgroundFetchService_GetIconDisplaySize_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBackgroundFetchService_GetIconDisplaySize_Name,
          codec.align(BackgroundFetchService_GetIconDisplaySize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BackgroundFetchService_GetIconDisplaySize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BackgroundFetchService_GetIconDisplaySize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BackgroundFetchServicePtr.prototype.addRegistrationObserver = function() {
    return BackgroundFetchServiceProxy.prototype.addRegistrationObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  BackgroundFetchServiceProxy.prototype.addRegistrationObserver = function(uniqueId, observer) {
    var params_ = new BackgroundFetchService_AddRegistrationObserver_Params();
    params_.uniqueId = uniqueId;
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kBackgroundFetchService_AddRegistrationObserver_Name,
        codec.align(BackgroundFetchService_AddRegistrationObserver_Params.encodedSize));
    builder.encodeStruct(BackgroundFetchService_AddRegistrationObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function BackgroundFetchServiceStub(delegate) {
    this.delegate_ = delegate;
  }
  BackgroundFetchServiceStub.prototype.fetch = function(serviceWorkerRegistrationId, developerId, requests, options, icon) {
    return this.delegate_ && this.delegate_.fetch && this.delegate_.fetch(serviceWorkerRegistrationId, developerId, requests, options, icon);
  }
  BackgroundFetchServiceStub.prototype.updateUI = function(serviceWorkerRegistrationId, developerId, uniqueId, title) {
    return this.delegate_ && this.delegate_.updateUI && this.delegate_.updateUI(serviceWorkerRegistrationId, developerId, uniqueId, title);
  }
  BackgroundFetchServiceStub.prototype.abort = function(serviceWorkerRegistrationId, developerId, uniqueId) {
    return this.delegate_ && this.delegate_.abort && this.delegate_.abort(serviceWorkerRegistrationId, developerId, uniqueId);
  }
  BackgroundFetchServiceStub.prototype.getRegistration = function(serviceWorkerRegistrationId, developerId) {
    return this.delegate_ && this.delegate_.getRegistration && this.delegate_.getRegistration(serviceWorkerRegistrationId, developerId);
  }
  BackgroundFetchServiceStub.prototype.getDeveloperIds = function(serviceWorkerRegistrationId) {
    return this.delegate_ && this.delegate_.getDeveloperIds && this.delegate_.getDeveloperIds(serviceWorkerRegistrationId);
  }
  BackgroundFetchServiceStub.prototype.getIconDisplaySize = function() {
    return this.delegate_ && this.delegate_.getIconDisplaySize && this.delegate_.getIconDisplaySize();
  }
  BackgroundFetchServiceStub.prototype.addRegistrationObserver = function(uniqueId, observer) {
    return this.delegate_ && this.delegate_.addRegistrationObserver && this.delegate_.addRegistrationObserver(uniqueId, observer);
  }

  BackgroundFetchServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundFetchService_AddRegistrationObserver_Name:
      var params = reader.decodeStruct(BackgroundFetchService_AddRegistrationObserver_Params);
      this.addRegistrationObserver(params.uniqueId, params.observer);
      return true;
    default:
      return false;
    }
  };

  BackgroundFetchServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBackgroundFetchService_Fetch_Name:
      var params = reader.decodeStruct(BackgroundFetchService_Fetch_Params);
      this.fetch(params.serviceWorkerRegistrationId, params.developerId, params.requests, params.options, params.icon).then(function(response) {
        var responseParams =
            new BackgroundFetchService_Fetch_ResponseParams();
        responseParams.error = response.error;
        responseParams.registration = response.registration;
        var builder = new codec.MessageV1Builder(
            kBackgroundFetchService_Fetch_Name,
            codec.align(BackgroundFetchService_Fetch_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundFetchService_Fetch_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBackgroundFetchService_UpdateUI_Name:
      var params = reader.decodeStruct(BackgroundFetchService_UpdateUI_Params);
      this.updateUI(params.serviceWorkerRegistrationId, params.developerId, params.uniqueId, params.title).then(function(response) {
        var responseParams =
            new BackgroundFetchService_UpdateUI_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kBackgroundFetchService_UpdateUI_Name,
            codec.align(BackgroundFetchService_UpdateUI_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundFetchService_UpdateUI_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBackgroundFetchService_Abort_Name:
      var params = reader.decodeStruct(BackgroundFetchService_Abort_Params);
      this.abort(params.serviceWorkerRegistrationId, params.developerId, params.uniqueId).then(function(response) {
        var responseParams =
            new BackgroundFetchService_Abort_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageV1Builder(
            kBackgroundFetchService_Abort_Name,
            codec.align(BackgroundFetchService_Abort_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundFetchService_Abort_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBackgroundFetchService_GetRegistration_Name:
      var params = reader.decodeStruct(BackgroundFetchService_GetRegistration_Params);
      this.getRegistration(params.serviceWorkerRegistrationId, params.developerId).then(function(response) {
        var responseParams =
            new BackgroundFetchService_GetRegistration_ResponseParams();
        responseParams.error = response.error;
        responseParams.registration = response.registration;
        var builder = new codec.MessageV1Builder(
            kBackgroundFetchService_GetRegistration_Name,
            codec.align(BackgroundFetchService_GetRegistration_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundFetchService_GetRegistration_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBackgroundFetchService_GetDeveloperIds_Name:
      var params = reader.decodeStruct(BackgroundFetchService_GetDeveloperIds_Params);
      this.getDeveloperIds(params.serviceWorkerRegistrationId).then(function(response) {
        var responseParams =
            new BackgroundFetchService_GetDeveloperIds_ResponseParams();
        responseParams.error = response.error;
        responseParams.developerIds = response.developerIds;
        var builder = new codec.MessageV1Builder(
            kBackgroundFetchService_GetDeveloperIds_Name,
            codec.align(BackgroundFetchService_GetDeveloperIds_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundFetchService_GetDeveloperIds_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBackgroundFetchService_GetIconDisplaySize_Name:
      var params = reader.decodeStruct(BackgroundFetchService_GetIconDisplaySize_Params);
      this.getIconDisplaySize().then(function(response) {
        var responseParams =
            new BackgroundFetchService_GetIconDisplaySize_ResponseParams();
        responseParams.iconSizePixels = response.iconSizePixels;
        var builder = new codec.MessageV1Builder(
            kBackgroundFetchService_GetIconDisplaySize_Name,
            codec.align(BackgroundFetchService_GetIconDisplaySize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BackgroundFetchService_GetIconDisplaySize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBackgroundFetchServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBackgroundFetchService_Fetch_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundFetchService_Fetch_Params;
      break;
      case kBackgroundFetchService_UpdateUI_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundFetchService_UpdateUI_Params;
      break;
      case kBackgroundFetchService_Abort_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundFetchService_Abort_Params;
      break;
      case kBackgroundFetchService_GetRegistration_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundFetchService_GetRegistration_Params;
      break;
      case kBackgroundFetchService_GetDeveloperIds_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundFetchService_GetDeveloperIds_Params;
      break;
      case kBackgroundFetchService_GetIconDisplaySize_Name:
        if (message.expectsResponse())
          paramsClass = BackgroundFetchService_GetIconDisplaySize_Params;
      break;
      case kBackgroundFetchService_AddRegistrationObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BackgroundFetchService_AddRegistrationObserver_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBackgroundFetchServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBackgroundFetchService_Fetch_Name:
        if (message.isResponse())
          paramsClass = BackgroundFetchService_Fetch_ResponseParams;
        break;
      case kBackgroundFetchService_UpdateUI_Name:
        if (message.isResponse())
          paramsClass = BackgroundFetchService_UpdateUI_ResponseParams;
        break;
      case kBackgroundFetchService_Abort_Name:
        if (message.isResponse())
          paramsClass = BackgroundFetchService_Abort_ResponseParams;
        break;
      case kBackgroundFetchService_GetRegistration_Name:
        if (message.isResponse())
          paramsClass = BackgroundFetchService_GetRegistration_ResponseParams;
        break;
      case kBackgroundFetchService_GetDeveloperIds_Name:
        if (message.isResponse())
          paramsClass = BackgroundFetchService_GetDeveloperIds_ResponseParams;
        break;
      case kBackgroundFetchService_GetIconDisplaySize_Name:
        if (message.isResponse())
          paramsClass = BackgroundFetchService_GetIconDisplaySize_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BackgroundFetchService = {
    name: 'blink.mojom.BackgroundFetchService',
    kVersion: 0,
    ptrClass: BackgroundFetchServicePtr,
    proxyClass: BackgroundFetchServiceProxy,
    stubClass: BackgroundFetchServiceStub,
    validateRequest: validateBackgroundFetchServiceRequest,
    validateResponse: validateBackgroundFetchServiceResponse,
    mojomId: 'third_party/blink/public/platform/modules/background_fetch/background_fetch.mojom',
    fuzzMethods: {
      fetch: {
        params: BackgroundFetchService_Fetch_Params,
      },
      updateUI: {
        params: BackgroundFetchService_UpdateUI_Params,
      },
      abort: {
        params: BackgroundFetchService_Abort_Params,
      },
      getRegistration: {
        params: BackgroundFetchService_GetRegistration_Params,
      },
      getDeveloperIds: {
        params: BackgroundFetchService_GetDeveloperIds_Params,
      },
      getIconDisplaySize: {
        params: BackgroundFetchService_GetIconDisplaySize_Params,
      },
      addRegistrationObserver: {
        params: BackgroundFetchService_AddRegistrationObserver_Params,
      },
    },
  };
  BackgroundFetchServiceStub.prototype.validator = validateBackgroundFetchServiceRequest;
  BackgroundFetchServiceProxy.prototype.validator = validateBackgroundFetchServiceResponse;
  exports.BackgroundFetchError = BackgroundFetchError;
  exports.IconDefinition = IconDefinition;
  exports.BackgroundFetchOptions = BackgroundFetchOptions;
  exports.BackgroundFetchRegistration = BackgroundFetchRegistration;
  exports.BackgroundFetchRegistrationObserver = BackgroundFetchRegistrationObserver;
  exports.BackgroundFetchRegistrationObserverPtr = BackgroundFetchRegistrationObserverPtr;
  exports.BackgroundFetchRegistrationObserverAssociatedPtr = BackgroundFetchRegistrationObserverAssociatedPtr;
  exports.BackgroundFetchService = BackgroundFetchService;
  exports.BackgroundFetchServicePtr = BackgroundFetchServicePtr;
  exports.BackgroundFetchServiceAssociatedPtr = BackgroundFetchServiceAssociatedPtr;
})();