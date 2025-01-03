// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/preferences/public/mojom/preferences.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('prefs.mojom');
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../mojo/public/mojom/base/values.mojom.js');
  }
  var tracked_preference_validation_delegate$ =
      mojo.internal.exposeNamespace('prefs.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/preferences/public/mojom/tracked_preference_validation_delegate.mojom', 'tracked_preference_validation_delegate.mojom.js');
  }


  var kServiceName = "preferences";
  var kLocalStateServiceName = "local_state";
  var PrefStoreType = {};
  PrefStoreType.MANAGED = 0;
  PrefStoreType.SUPERVISED_USER = PrefStoreType.MANAGED + 1;
  PrefStoreType.EXTENSION = PrefStoreType.SUPERVISED_USER + 1;
  PrefStoreType.COMMAND_LINE = PrefStoreType.EXTENSION + 1;
  PrefStoreType.USER = PrefStoreType.COMMAND_LINE + 1;
  PrefStoreType.RECOMMENDED = PrefStoreType.USER + 1;
  PrefStoreType.DEFAULT = PrefStoreType.RECOMMENDED + 1;

  PrefStoreType.isKnownEnumValue = function(value) {
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

  PrefStoreType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function PrefStoreConnection(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefStoreConnection.prototype.initDefaults_ = function() {
    this.observer = new bindings.InterfaceRequest();
    this.isInitialized = false;
    this.initialPrefs = null;
  };
  PrefStoreConnection.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefStoreConnection.generate = function(generator_) {
    var generated = new PrefStoreConnection;
    generated.observer = generator_.generateInterfaceRequest("prefs.mojom.PrefStoreObserver", false);
    generated.initialPrefs = generator_.generateStruct(mojoBase.mojom.DictionaryValue, false);
    generated.isInitialized = generator_.generateBool();
    return generated;
  };

  PrefStoreConnection.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterfaceRequest(this.observer, "prefs.mojom.PrefStoreObserver", false);
    }
    if (mutator_.chooseMutateField()) {
      this.initialPrefs = mutator_.mutateStruct(mojoBase.mojom.DictionaryValue, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isInitialized = mutator_.mutateBool(this.isInitialized);
    }
    return this;
  };
  PrefStoreConnection.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["prefs.mojom.PrefStoreObserverRequest"]);
    }
    return handles;
  };

  PrefStoreConnection.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefStoreConnection.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  PrefStoreConnection.validate = function(messageValidator, offset) {
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


    // validate PrefStoreConnection.observer
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefStoreConnection.initialPrefs
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PrefStoreConnection.encodedSize = codec.kStructHeaderSize + 16;

  PrefStoreConnection.decode = function(decoder) {
    var packed;
    var val = new PrefStoreConnection();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(codec.InterfaceRequest);
    packed = decoder.readUint8();
    val.isInitialized = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.initialPrefs = decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  PrefStoreConnection.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefStoreConnection.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.observer);
    packed = 0;
    packed |= (val.isInitialized & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(values$.DictionaryValue, val.initialPrefs);
  };
  function PersistentPrefStoreConnection(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  PersistentPrefStoreConnection.ReadError = {};
  PersistentPrefStoreConnection.ReadError.NONE = 0;
  PersistentPrefStoreConnection.ReadError.JSON_PARSE = 1;
  PersistentPrefStoreConnection.ReadError.JSON_TYPE = 2;
  PersistentPrefStoreConnection.ReadError.ACCESS_DENIED = 3;
  PersistentPrefStoreConnection.ReadError.FILE_OTHER = 4;
  PersistentPrefStoreConnection.ReadError.FILE_LOCKED = 5;
  PersistentPrefStoreConnection.ReadError.NO_FILE = 6;
  PersistentPrefStoreConnection.ReadError.JSON_REPEAT = 7;
  PersistentPrefStoreConnection.ReadError.FILE_NOT_SPECIFIED = 9;
  PersistentPrefStoreConnection.ReadError.ASYNCHRONOUS_TASK_INCOMPLETE = 10;

  PersistentPrefStoreConnection.ReadError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
      return true;
    }
    return false;
  };

  PersistentPrefStoreConnection.ReadError.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  PersistentPrefStoreConnection.prototype.initDefaults_ = function() {
    this.prefStoreConnection = null;
    this.prefStore = new PersistentPrefStorePtr();
    this.readError = 0;
    this.readOnly = false;
  };
  PersistentPrefStoreConnection.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStoreConnection.generate = function(generator_) {
    var generated = new PersistentPrefStoreConnection;
    generated.prefStoreConnection = generator_.generateStruct(prefs.mojom.PrefStoreConnection, true);
    generated.prefStore = generator_.generateInterface("prefs.mojom.PersistentPrefStore", true);
    generated.readError = generator_.generateEnum(0, 10);
    generated.readOnly = generator_.generateBool();
    return generated;
  };

  PersistentPrefStoreConnection.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prefStoreConnection = mutator_.mutateStruct(prefs.mojom.PrefStoreConnection, true);
    }
    if (mutator_.chooseMutateField()) {
      this.prefStore = mutator_.mutateInterface(this.prefStore, "prefs.mojom.PersistentPrefStore", true);
    }
    if (mutator_.chooseMutateField()) {
      this.readError = mutator_.mutateEnum(this.readError, 0, 10);
    }
    if (mutator_.chooseMutateField()) {
      this.readOnly = mutator_.mutateBool(this.readOnly);
    }
    return this;
  };
  PersistentPrefStoreConnection.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.prefStoreConnection !== null) {
      Array.prototype.push.apply(handles, this.prefStoreConnection.getHandleDeps());
    }
    if (this.prefStore !== null) {
      Array.prototype.push.apply(handles, ["prefs.mojom.PersistentPrefStorePtr"]);
    }
    return handles;
  };

  PersistentPrefStoreConnection.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStoreConnection.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.prefStoreConnection.setHandlesInternal_(handles, idx);
    this.prefStore = handles[idx++];;
    return idx;
  };

  PersistentPrefStoreConnection.validate = function(messageValidator, offset) {
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


    // validate PersistentPrefStoreConnection.prefStoreConnection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PrefStoreConnection, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PersistentPrefStoreConnection.prefStore
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PersistentPrefStoreConnection.readError
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, PersistentPrefStoreConnection.ReadError);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PersistentPrefStoreConnection.encodedSize = codec.kStructHeaderSize + 24;

  PersistentPrefStoreConnection.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStoreConnection();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prefStoreConnection = decoder.decodeStructPointer(PrefStoreConnection);
    val.prefStore = decoder.decodeStruct(new codec.NullableInterface(PersistentPrefStorePtr));
    val.readError = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.readOnly = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PersistentPrefStoreConnection.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStoreConnection.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PrefStoreConnection, val.prefStoreConnection);
    encoder.encodeStruct(new codec.NullableInterface(PersistentPrefStorePtr), val.prefStore);
    encoder.encodeStruct(codec.Int32, val.readError);
    packed = 0;
    packed |= (val.readOnly & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function IncognitoPersistentPrefStoreConnection(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IncognitoPersistentPrefStoreConnection.prototype.initDefaults_ = function() {
    this.prefStoreConnection = null;
    this.overlayPrefNames = null;
  };
  IncognitoPersistentPrefStoreConnection.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IncognitoPersistentPrefStoreConnection.generate = function(generator_) {
    var generated = new IncognitoPersistentPrefStoreConnection;
    generated.prefStoreConnection = generator_.generateStruct(prefs.mojom.PersistentPrefStoreConnection, false);
    generated.overlayPrefNames = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  IncognitoPersistentPrefStoreConnection.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prefStoreConnection = mutator_.mutateStruct(prefs.mojom.PersistentPrefStoreConnection, false);
    }
    if (mutator_.chooseMutateField()) {
      this.overlayPrefNames = mutator_.mutateArray(this.overlayPrefNames, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  IncognitoPersistentPrefStoreConnection.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.prefStoreConnection !== null) {
      Array.prototype.push.apply(handles, this.prefStoreConnection.getHandleDeps());
    }
    return handles;
  };

  IncognitoPersistentPrefStoreConnection.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IncognitoPersistentPrefStoreConnection.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.prefStoreConnection.setHandlesInternal_(handles, idx);
    return idx;
  };

  IncognitoPersistentPrefStoreConnection.validate = function(messageValidator, offset) {
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


    // validate IncognitoPersistentPrefStoreConnection.prefStoreConnection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PersistentPrefStoreConnection, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate IncognitoPersistentPrefStoreConnection.overlayPrefNames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IncognitoPersistentPrefStoreConnection.encodedSize = codec.kStructHeaderSize + 16;

  IncognitoPersistentPrefStoreConnection.decode = function(decoder) {
    var packed;
    var val = new IncognitoPersistentPrefStoreConnection();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prefStoreConnection = decoder.decodeStructPointer(PersistentPrefStoreConnection);
    val.overlayPrefNames = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  IncognitoPersistentPrefStoreConnection.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IncognitoPersistentPrefStoreConnection.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PersistentPrefStoreConnection, val.prefStoreConnection);
    encoder.encodeArrayPointer(codec.String, val.overlayPrefNames);
  };
  function SubPrefUpdate(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SubPrefUpdate.prototype.initDefaults_ = function() {
    this.path = null;
    this.value = null;
  };
  SubPrefUpdate.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SubPrefUpdate.generate = function(generator_) {
    var generated = new SubPrefUpdate;
    generated.path = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.value = generator_.generateUnion(mojoBase.mojom.Value, true);
    return generated;
  };

  SubPrefUpdate.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.path = mutator_.mutateArray(this.path, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUnion(mojoBase.mojom.Value, true);
    }
    return this;
  };
  SubPrefUpdate.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SubPrefUpdate.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SubPrefUpdate.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SubPrefUpdate.validate = function(messageValidator, offset) {
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


    // validate SubPrefUpdate.path
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SubPrefUpdate.value
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, values$.Value, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SubPrefUpdate.encodedSize = codec.kStructHeaderSize + 24;

  SubPrefUpdate.decode = function(decoder) {
    var packed;
    var val = new SubPrefUpdate();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.path = decoder.decodeArrayPointer(codec.String);
    val.value = decoder.decodeStruct(values$.Value);
    return val;
  };

  SubPrefUpdate.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SubPrefUpdate.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.path);
    encoder.encodeStruct(values$.Value, val.value);
  };
  function PrefUpdate(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefUpdate.prototype.initDefaults_ = function() {
    this.key = null;
    this.value = null;
    this.flags = 0;
  };
  PrefUpdate.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefUpdate.generate = function(generator_) {
    var generated = new PrefUpdate;
    generated.key = generator_.generateString(false);
    generated.value = generator_.generateUnion(prefs.mojom.PrefUpdateValue, false);
    generated.flags = generator_.generateUint32();
    return generated;
  };

  PrefUpdate.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUnion(prefs.mojom.PrefUpdateValue, false);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateUint32(this.flags);
    }
    return this;
  };
  PrefUpdate.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefUpdate.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefUpdate.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefUpdate.validate = function(messageValidator, offset) {
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


    // validate PrefUpdate.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefUpdate.value
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, PrefUpdateValue, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PrefUpdate.encodedSize = codec.kStructHeaderSize + 32;

  PrefUpdate.decode = function(decoder) {
    var packed;
    var val = new PrefUpdate();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.value = decoder.decodeStruct(PrefUpdateValue);
    val.flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrefUpdate.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefUpdate.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(PrefUpdateValue, val.value);
    encoder.encodeStruct(codec.Uint32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PrefRegistry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefRegistry.prototype.initDefaults_ = function() {
    this.privateRegistrations = null;
    this.foreignRegistrations = null;
    this.publicRegistrations = null;
  };
  PrefRegistry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefRegistry.generate = function(generator_) {
    var generated = new PrefRegistry;
    generated.privateRegistrations = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.foreignRegistrations = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    generated.publicRegistrations = generator_.generateArray(function() {
      return generator_.generateStruct(prefs.mojom.PrefRegistration, false);
    });
    return generated;
  };

  PrefRegistry.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.privateRegistrations = mutator_.mutateArray(this.privateRegistrations, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.foreignRegistrations = mutator_.mutateArray(this.foreignRegistrations, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.publicRegistrations = mutator_.mutateArray(this.publicRegistrations, function(val) {
        return mutator_.mutateStruct(prefs.mojom.PrefRegistration, false);
      });
    }
    return this;
  };
  PrefRegistry.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefRegistry.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefRegistry.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefRegistry.validate = function(messageValidator, offset) {
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


    // validate PrefRegistry.privateRegistrations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefRegistry.foreignRegistrations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefRegistry.publicRegistrations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(PrefRegistration), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrefRegistry.encodedSize = codec.kStructHeaderSize + 24;

  PrefRegistry.decode = function(decoder) {
    var packed;
    var val = new PrefRegistry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.privateRegistrations = decoder.decodeArrayPointer(codec.String);
    val.foreignRegistrations = decoder.decodeArrayPointer(codec.String);
    val.publicRegistrations = decoder.decodeArrayPointer(new codec.PointerTo(PrefRegistration));
    return val;
  };

  PrefRegistry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefRegistry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.privateRegistrations);
    encoder.encodeArrayPointer(codec.String, val.foreignRegistrations);
    encoder.encodeArrayPointer(new codec.PointerTo(PrefRegistration), val.publicRegistrations);
  };
  function PrefRegistration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefRegistration.prototype.initDefaults_ = function() {
    this.key = null;
    this.defaultValue = null;
    this.flags = 0;
  };
  PrefRegistration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefRegistration.generate = function(generator_) {
    var generated = new PrefRegistration;
    generated.key = generator_.generateString(false);
    generated.defaultValue = generator_.generateUnion(mojoBase.mojom.Value, false);
    generated.flags = generator_.generateUint32();
    return generated;
  };

  PrefRegistration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.defaultValue = mutator_.mutateUnion(mojoBase.mojom.Value, false);
    }
    if (mutator_.chooseMutateField()) {
      this.flags = mutator_.mutateUint32(this.flags);
    }
    return this;
  };
  PrefRegistration.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefRegistration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefRegistration.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefRegistration.validate = function(messageValidator, offset) {
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


    // validate PrefRegistration.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefRegistration.defaultValue
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, values$.Value, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PrefRegistration.encodedSize = codec.kStructHeaderSize + 32;

  PrefRegistration.decode = function(decoder) {
    var packed;
    var val = new PrefRegistration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.defaultValue = decoder.decodeStruct(values$.Value);
    val.flags = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrefRegistration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefRegistration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeStruct(values$.Value, val.defaultValue);
    encoder.encodeStruct(codec.Uint32, val.flags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function TrackedPersistentPrefStoreConfiguration(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TrackedPersistentPrefStoreConfiguration.prototype.initDefaults_ = function() {
    this.unprotectedPrefFilename = null;
    this.protectedPrefFilename = null;
    this.trackingConfiguration = null;
    this.reportingIdsCount = 0;
    this.seed = null;
    this.legacyDeviceId = null;
    this.registrySeed = null;
    this.registryPath = null;
    this.validationDelegate = new tracked_preference_validation_delegate$.TrackedPreferenceValidationDelegatePtr();
    this.resetOnLoadObserver = new ResetOnLoadObserverPtr();
  };
  TrackedPersistentPrefStoreConfiguration.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TrackedPersistentPrefStoreConfiguration.generate = function(generator_) {
    var generated = new TrackedPersistentPrefStoreConfiguration;
    generated.unprotectedPrefFilename = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.protectedPrefFilename = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    generated.trackingConfiguration = generator_.generateArray(function() {
      return generator_.generateStruct(prefs.mojom.TrackedPreferenceMetadata, false);
    });
    generated.reportingIdsCount = generator_.generateUint64();
    generated.seed = generator_.generateString(false);
    generated.legacyDeviceId = generator_.generateString(false);
    generated.registrySeed = generator_.generateString(false);
    generated.registryPath = generator_.generateStruct(mojoBase.mojom.String16, false);
    generated.validationDelegate = generator_.generateInterface("prefs.mojom.TrackedPreferenceValidationDelegate", true);
    generated.resetOnLoadObserver = generator_.generateInterface("prefs.mojom.ResetOnLoadObserver", true);
    return generated;
  };

  TrackedPersistentPrefStoreConfiguration.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.unprotectedPrefFilename = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.protectedPrefFilename = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.trackingConfiguration = mutator_.mutateArray(this.trackingConfiguration, function(val) {
        return mutator_.mutateStruct(prefs.mojom.TrackedPreferenceMetadata, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.reportingIdsCount = mutator_.mutateUint64(this.reportingIdsCount);
    }
    if (mutator_.chooseMutateField()) {
      this.seed = mutator_.mutateString(this.seed, false);
    }
    if (mutator_.chooseMutateField()) {
      this.legacyDeviceId = mutator_.mutateString(this.legacyDeviceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.registrySeed = mutator_.mutateString(this.registrySeed, false);
    }
    if (mutator_.chooseMutateField()) {
      this.registryPath = mutator_.mutateStruct(mojoBase.mojom.String16, false);
    }
    if (mutator_.chooseMutateField()) {
      this.validationDelegate = mutator_.mutateInterface(this.validationDelegate, "prefs.mojom.TrackedPreferenceValidationDelegate", true);
    }
    if (mutator_.chooseMutateField()) {
      this.resetOnLoadObserver = mutator_.mutateInterface(this.resetOnLoadObserver, "prefs.mojom.ResetOnLoadObserver", true);
    }
    return this;
  };
  TrackedPersistentPrefStoreConfiguration.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.validationDelegate !== null) {
      Array.prototype.push.apply(handles, ["prefs.mojom.TrackedPreferenceValidationDelegatePtr"]);
    }
    if (this.resetOnLoadObserver !== null) {
      Array.prototype.push.apply(handles, ["prefs.mojom.ResetOnLoadObserverPtr"]);
    }
    return handles;
  };

  TrackedPersistentPrefStoreConfiguration.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TrackedPersistentPrefStoreConfiguration.prototype.setHandlesInternal_ = function(handles, idx) {
    this.validationDelegate = handles[idx++];;
    this.resetOnLoadObserver = handles[idx++];;
    return idx;
  };

  TrackedPersistentPrefStoreConfiguration.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 88}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.unprotectedPrefFilename
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.protectedPrefFilename
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.trackingConfiguration
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(TrackedPreferenceMetadata), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;



    // validate TrackedPersistentPrefStoreConfiguration.seed
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.legacyDeviceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.registrySeed
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.registryPath
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, string16$.String16, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.validationDelegate
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 64, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPersistentPrefStoreConfiguration.resetOnLoadObserver
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 72, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TrackedPersistentPrefStoreConfiguration.encodedSize = codec.kStructHeaderSize + 80;

  TrackedPersistentPrefStoreConfiguration.decode = function(decoder) {
    var packed;
    var val = new TrackedPersistentPrefStoreConfiguration();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.unprotectedPrefFilename = decoder.decodeStructPointer(file_path$.FilePath);
    val.protectedPrefFilename = decoder.decodeStructPointer(file_path$.FilePath);
    val.trackingConfiguration = decoder.decodeArrayPointer(new codec.PointerTo(TrackedPreferenceMetadata));
    val.reportingIdsCount = decoder.decodeStruct(codec.Uint64);
    val.seed = decoder.decodeStruct(codec.String);
    val.legacyDeviceId = decoder.decodeStruct(codec.String);
    val.registrySeed = decoder.decodeStruct(codec.String);
    val.registryPath = decoder.decodeStructPointer(string16$.String16);
    val.validationDelegate = decoder.decodeStruct(new codec.NullableInterface(tracked_preference_validation_delegate$.TrackedPreferenceValidationDelegatePtr));
    val.resetOnLoadObserver = decoder.decodeStruct(new codec.NullableInterface(ResetOnLoadObserverPtr));
    return val;
  };

  TrackedPersistentPrefStoreConfiguration.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TrackedPersistentPrefStoreConfiguration.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file_path$.FilePath, val.unprotectedPrefFilename);
    encoder.encodeStructPointer(file_path$.FilePath, val.protectedPrefFilename);
    encoder.encodeArrayPointer(new codec.PointerTo(TrackedPreferenceMetadata), val.trackingConfiguration);
    encoder.encodeStruct(codec.Uint64, val.reportingIdsCount);
    encoder.encodeStruct(codec.String, val.seed);
    encoder.encodeStruct(codec.String, val.legacyDeviceId);
    encoder.encodeStruct(codec.String, val.registrySeed);
    encoder.encodeStructPointer(string16$.String16, val.registryPath);
    encoder.encodeStruct(new codec.NullableInterface(tracked_preference_validation_delegate$.TrackedPreferenceValidationDelegatePtr), val.validationDelegate);
    encoder.encodeStruct(new codec.NullableInterface(ResetOnLoadObserverPtr), val.resetOnLoadObserver);
  };
  function TrackedPreferenceMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  TrackedPreferenceMetadata.EnforcementLevel = {};
  TrackedPreferenceMetadata.EnforcementLevel.NO_ENFORCEMENT = 0;
  TrackedPreferenceMetadata.EnforcementLevel.ENFORCE_ON_LOAD = TrackedPreferenceMetadata.EnforcementLevel.NO_ENFORCEMENT + 1;

  TrackedPreferenceMetadata.EnforcementLevel.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  TrackedPreferenceMetadata.EnforcementLevel.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  TrackedPreferenceMetadata.PrefTrackingStrategy = {};
  TrackedPreferenceMetadata.PrefTrackingStrategy.ATOMIC = 0;
  TrackedPreferenceMetadata.PrefTrackingStrategy.SPLIT = TrackedPreferenceMetadata.PrefTrackingStrategy.ATOMIC + 1;

  TrackedPreferenceMetadata.PrefTrackingStrategy.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  TrackedPreferenceMetadata.PrefTrackingStrategy.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  TrackedPreferenceMetadata.ValueType = {};
  TrackedPreferenceMetadata.ValueType.IMPERSONAL = 0;
  TrackedPreferenceMetadata.ValueType.PERSONAL = TrackedPreferenceMetadata.ValueType.IMPERSONAL + 1;

  TrackedPreferenceMetadata.ValueType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  TrackedPreferenceMetadata.ValueType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  TrackedPreferenceMetadata.prototype.initDefaults_ = function() {
    this.reportingId = 0;
    this.name = null;
    this.enforcementLevel = 0;
    this.strategy = 0;
    this.valueType = 0;
  };
  TrackedPreferenceMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TrackedPreferenceMetadata.generate = function(generator_) {
    var generated = new TrackedPreferenceMetadata;
    generated.reportingId = generator_.generateUint64();
    generated.name = generator_.generateString(false);
    generated.enforcementLevel = generator_.generateEnum(0, 1);
    generated.strategy = generator_.generateEnum(0, 1);
    generated.valueType = generator_.generateEnum(0, 1);
    return generated;
  };

  TrackedPreferenceMetadata.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reportingId = mutator_.mutateUint64(this.reportingId);
    }
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.enforcementLevel = mutator_.mutateEnum(this.enforcementLevel, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.strategy = mutator_.mutateEnum(this.strategy, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.valueType = mutator_.mutateEnum(this.valueType, 0, 1);
    }
    return this;
  };
  TrackedPreferenceMetadata.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TrackedPreferenceMetadata.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TrackedPreferenceMetadata.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TrackedPreferenceMetadata.validate = function(messageValidator, offset) {
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



    // validate TrackedPreferenceMetadata.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceMetadata.enforcementLevel
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, TrackedPreferenceMetadata.EnforcementLevel);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceMetadata.strategy
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 20, TrackedPreferenceMetadata.PrefTrackingStrategy);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TrackedPreferenceMetadata.valueType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, TrackedPreferenceMetadata.ValueType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TrackedPreferenceMetadata.encodedSize = codec.kStructHeaderSize + 32;

  TrackedPreferenceMetadata.decode = function(decoder) {
    var packed;
    var val = new TrackedPreferenceMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.reportingId = decoder.decodeStruct(codec.Uint64);
    val.name = decoder.decodeStruct(codec.String);
    val.enforcementLevel = decoder.decodeStruct(codec.Int32);
    val.strategy = decoder.decodeStruct(codec.Int32);
    val.valueType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TrackedPreferenceMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TrackedPreferenceMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.reportingId);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.Int32, val.enforcementLevel);
    encoder.encodeStruct(codec.Int32, val.strategy);
    encoder.encodeStruct(codec.Int32, val.valueType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PrefStoreObserver_OnPrefsChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefStoreObserver_OnPrefsChanged_Params.prototype.initDefaults_ = function() {
    this.updates = null;
  };
  PrefStoreObserver_OnPrefsChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefStoreObserver_OnPrefsChanged_Params.generate = function(generator_) {
    var generated = new PrefStoreObserver_OnPrefsChanged_Params;
    generated.updates = generator_.generateArray(function() {
      return generator_.generateStruct(prefs.mojom.PrefUpdate, false);
    });
    return generated;
  };

  PrefStoreObserver_OnPrefsChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.updates = mutator_.mutateArray(this.updates, function(val) {
        return mutator_.mutateStruct(prefs.mojom.PrefUpdate, false);
      });
    }
    return this;
  };
  PrefStoreObserver_OnPrefsChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefStoreObserver_OnPrefsChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefStoreObserver_OnPrefsChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefStoreObserver_OnPrefsChanged_Params.validate = function(messageValidator, offset) {
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


    // validate PrefStoreObserver_OnPrefsChanged_Params.updates
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PrefUpdate), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrefStoreObserver_OnPrefsChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrefStoreObserver_OnPrefsChanged_Params.decode = function(decoder) {
    var packed;
    var val = new PrefStoreObserver_OnPrefsChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.updates = decoder.decodeArrayPointer(new codec.PointerTo(PrefUpdate));
    return val;
  };

  PrefStoreObserver_OnPrefsChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefStoreObserver_OnPrefsChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PrefUpdate), val.updates);
  };
  function PrefStoreObserver_OnInitializationCompleted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefStoreObserver_OnInitializationCompleted_Params.prototype.initDefaults_ = function() {
    this.succeeded = false;
  };
  PrefStoreObserver_OnInitializationCompleted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefStoreObserver_OnInitializationCompleted_Params.generate = function(generator_) {
    var generated = new PrefStoreObserver_OnInitializationCompleted_Params;
    generated.succeeded = generator_.generateBool();
    return generated;
  };

  PrefStoreObserver_OnInitializationCompleted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.succeeded = mutator_.mutateBool(this.succeeded);
    }
    return this;
  };
  PrefStoreObserver_OnInitializationCompleted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefStoreObserver_OnInitializationCompleted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefStoreObserver_OnInitializationCompleted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefStoreObserver_OnInitializationCompleted_Params.validate = function(messageValidator, offset) {
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

  PrefStoreObserver_OnInitializationCompleted_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrefStoreObserver_OnInitializationCompleted_Params.decode = function(decoder) {
    var packed;
    var val = new PrefStoreObserver_OnInitializationCompleted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.succeeded = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PrefStoreObserver_OnInitializationCompleted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefStoreObserver_OnInitializationCompleted_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.succeeded & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PrefStoreObserver_OnPrefChangeAck_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefStoreObserver_OnPrefChangeAck_Params.prototype.initDefaults_ = function() {
  };
  PrefStoreObserver_OnPrefChangeAck_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefStoreObserver_OnPrefChangeAck_Params.generate = function(generator_) {
    var generated = new PrefStoreObserver_OnPrefChangeAck_Params;
    return generated;
  };

  PrefStoreObserver_OnPrefChangeAck_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PrefStoreObserver_OnPrefChangeAck_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefStoreObserver_OnPrefChangeAck_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefStoreObserver_OnPrefChangeAck_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefStoreObserver_OnPrefChangeAck_Params.validate = function(messageValidator, offset) {
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

  PrefStoreObserver_OnPrefChangeAck_Params.encodedSize = codec.kStructHeaderSize + 0;

  PrefStoreObserver_OnPrefChangeAck_Params.decode = function(decoder) {
    var packed;
    var val = new PrefStoreObserver_OnPrefChangeAck_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PrefStoreObserver_OnPrefChangeAck_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefStoreObserver_OnPrefChangeAck_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PrefStoreConnector_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefStoreConnector_Connect_Params.prototype.initDefaults_ = function() {
    this.prefRegistry = null;
  };
  PrefStoreConnector_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefStoreConnector_Connect_Params.generate = function(generator_) {
    var generated = new PrefStoreConnector_Connect_Params;
    generated.prefRegistry = generator_.generateStruct(prefs.mojom.PrefRegistry, false);
    return generated;
  };

  PrefStoreConnector_Connect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.prefRegistry = mutator_.mutateStruct(prefs.mojom.PrefRegistry, false);
    }
    return this;
  };
  PrefStoreConnector_Connect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PrefStoreConnector_Connect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefStoreConnector_Connect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PrefStoreConnector_Connect_Params.validate = function(messageValidator, offset) {
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


    // validate PrefStoreConnector_Connect_Params.prefRegistry
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PrefRegistry, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrefStoreConnector_Connect_Params.encodedSize = codec.kStructHeaderSize + 8;

  PrefStoreConnector_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new PrefStoreConnector_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.prefRegistry = decoder.decodeStructPointer(PrefRegistry);
    return val;
  };

  PrefStoreConnector_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefStoreConnector_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PrefRegistry, val.prefRegistry);
  };
  function PrefStoreConnector_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PrefStoreConnector_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.connection = null;
    this.underlay = null;
    this.remoteDefaults = null;
    this.connections = null;
  };
  PrefStoreConnector_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PrefStoreConnector_Connect_ResponseParams.generate = function(generator_) {
    var generated = new PrefStoreConnector_Connect_ResponseParams;
    generated.connection = generator_.generateStruct(prefs.mojom.PersistentPrefStoreConnection, false);
    generated.underlay = generator_.generateStruct(prefs.mojom.IncognitoPersistentPrefStoreConnection, true);
    generated.remoteDefaults = generator_.generateArray(function() {
      return generator_.generateStruct(prefs.mojom.PrefRegistration, false);
    });
    generated.connections = generator_.generateMap(
      function() {
        return generator_.generateEnum(0, 6);
      },
      function() {
        return generator_.generateStruct(prefs.mojom.PrefStoreConnection, false);
      });
    return generated;
  };

  PrefStoreConnector_Connect_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.connection = mutator_.mutateStruct(prefs.mojom.PersistentPrefStoreConnection, false);
    }
    if (mutator_.chooseMutateField()) {
      this.underlay = mutator_.mutateStruct(prefs.mojom.IncognitoPersistentPrefStoreConnection, true);
    }
    if (mutator_.chooseMutateField()) {
      this.remoteDefaults = mutator_.mutateArray(this.remoteDefaults, function(val) {
        return mutator_.mutateStruct(prefs.mojom.PrefRegistration, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.connections = mutator_.mutateMap(this.connections,
        function(val) {
          return mutator_.mutateEnum(val, 0, 6);
        },
        function(val) {
          return mutator_.mutateStruct(prefs.mojom.PrefStoreConnection, false);
        });
    }
    return this;
  };
  PrefStoreConnector_Connect_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.connection !== null) {
      Array.prototype.push.apply(handles, this.connection.getHandleDeps());
    }
    if (this.underlay !== null) {
      Array.prototype.push.apply(handles, this.underlay.getHandleDeps());
    }
    if (this.connections !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], Array.from(this.connections.values()).map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  PrefStoreConnector_Connect_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PrefStoreConnector_Connect_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.connection.setHandlesInternal_(handles, idx);
    idx = this.underlay.setHandlesInternal_(handles, idx);
    this.connections.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  PrefStoreConnector_Connect_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate PrefStoreConnector_Connect_ResponseParams.connection
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, PersistentPrefStoreConnection, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefStoreConnector_Connect_ResponseParams.underlay
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, IncognitoPersistentPrefStoreConnection, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefStoreConnector_Connect_ResponseParams.remoteDefaults
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(PrefRegistration), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PrefStoreConnector_Connect_ResponseParams.connections
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 24, false, new codec.Enum(PrefStoreType), new codec.PointerTo(PrefStoreConnection), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PrefStoreConnector_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 32;

  PrefStoreConnector_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PrefStoreConnector_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connection = decoder.decodeStructPointer(PersistentPrefStoreConnection);
    val.underlay = decoder.decodeStructPointer(IncognitoPersistentPrefStoreConnection);
    val.remoteDefaults = decoder.decodeArrayPointer(new codec.PointerTo(PrefRegistration));
    val.connections = decoder.decodeMapPointer(new codec.Enum(PrefStoreType), new codec.PointerTo(PrefStoreConnection));
    return val;
  };

  PrefStoreConnector_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PrefStoreConnector_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(PersistentPrefStoreConnection, val.connection);
    encoder.encodeStructPointer(IncognitoPersistentPrefStoreConnection, val.underlay);
    encoder.encodeArrayPointer(new codec.PointerTo(PrefRegistration), val.remoteDefaults);
    encoder.encodeMapPointer(new codec.Enum(PrefStoreType), new codec.PointerTo(PrefStoreConnection), val.connections);
  };
  function PersistentPrefStore_SetValues_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_SetValues_Params.prototype.initDefaults_ = function() {
    this.updates = null;
  };
  PersistentPrefStore_SetValues_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_SetValues_Params.generate = function(generator_) {
    var generated = new PersistentPrefStore_SetValues_Params;
    generated.updates = generator_.generateArray(function() {
      return generator_.generateStruct(prefs.mojom.PrefUpdate, false);
    });
    return generated;
  };

  PersistentPrefStore_SetValues_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.updates = mutator_.mutateArray(this.updates, function(val) {
        return mutator_.mutateStruct(prefs.mojom.PrefUpdate, false);
      });
    }
    return this;
  };
  PersistentPrefStore_SetValues_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_SetValues_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_SetValues_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_SetValues_Params.validate = function(messageValidator, offset) {
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


    // validate PersistentPrefStore_SetValues_Params.updates
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(PrefUpdate), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PersistentPrefStore_SetValues_Params.encodedSize = codec.kStructHeaderSize + 8;

  PersistentPrefStore_SetValues_Params.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_SetValues_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.updates = decoder.decodeArrayPointer(new codec.PointerTo(PrefUpdate));
    return val;
  };

  PersistentPrefStore_SetValues_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_SetValues_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(PrefUpdate), val.updates);
  };
  function PersistentPrefStore_RequestValue_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_RequestValue_Params.prototype.initDefaults_ = function() {
    this.key = null;
    this.subPrefPath = null;
  };
  PersistentPrefStore_RequestValue_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_RequestValue_Params.generate = function(generator_) {
    var generated = new PersistentPrefStore_RequestValue_Params;
    generated.key = generator_.generateString(false);
    generated.subPrefPath = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  PersistentPrefStore_RequestValue_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.key = mutator_.mutateString(this.key, false);
    }
    if (mutator_.chooseMutateField()) {
      this.subPrefPath = mutator_.mutateArray(this.subPrefPath, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  PersistentPrefStore_RequestValue_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_RequestValue_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_RequestValue_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_RequestValue_Params.validate = function(messageValidator, offset) {
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


    // validate PersistentPrefStore_RequestValue_Params.key
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate PersistentPrefStore_RequestValue_Params.subPrefPath
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PersistentPrefStore_RequestValue_Params.encodedSize = codec.kStructHeaderSize + 16;

  PersistentPrefStore_RequestValue_Params.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_RequestValue_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.key = decoder.decodeStruct(codec.String);
    val.subPrefPath = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  PersistentPrefStore_RequestValue_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_RequestValue_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.key);
    encoder.encodeArrayPointer(codec.String, val.subPrefPath);
  };
  function PersistentPrefStore_CommitPendingWrite_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_CommitPendingWrite_Params.prototype.initDefaults_ = function() {
  };
  PersistentPrefStore_CommitPendingWrite_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_CommitPendingWrite_Params.generate = function(generator_) {
    var generated = new PersistentPrefStore_CommitPendingWrite_Params;
    return generated;
  };

  PersistentPrefStore_CommitPendingWrite_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PersistentPrefStore_CommitPendingWrite_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_CommitPendingWrite_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_CommitPendingWrite_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_CommitPendingWrite_Params.validate = function(messageValidator, offset) {
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

  PersistentPrefStore_CommitPendingWrite_Params.encodedSize = codec.kStructHeaderSize + 0;

  PersistentPrefStore_CommitPendingWrite_Params.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_CommitPendingWrite_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PersistentPrefStore_CommitPendingWrite_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_CommitPendingWrite_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PersistentPrefStore_CommitPendingWrite_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_CommitPendingWrite_ResponseParams.prototype.initDefaults_ = function() {
  };
  PersistentPrefStore_CommitPendingWrite_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_CommitPendingWrite_ResponseParams.generate = function(generator_) {
    var generated = new PersistentPrefStore_CommitPendingWrite_ResponseParams;
    return generated;
  };

  PersistentPrefStore_CommitPendingWrite_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  PersistentPrefStore_CommitPendingWrite_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_CommitPendingWrite_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_CommitPendingWrite_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_CommitPendingWrite_ResponseParams.validate = function(messageValidator, offset) {
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

  PersistentPrefStore_CommitPendingWrite_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  PersistentPrefStore_CommitPendingWrite_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_CommitPendingWrite_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PersistentPrefStore_CommitPendingWrite_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_CommitPendingWrite_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function PersistentPrefStore_SchedulePendingLossyWrites_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_SchedulePendingLossyWrites_Params.prototype.initDefaults_ = function() {
  };
  PersistentPrefStore_SchedulePendingLossyWrites_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_SchedulePendingLossyWrites_Params.generate = function(generator_) {
    var generated = new PersistentPrefStore_SchedulePendingLossyWrites_Params;
    return generated;
  };

  PersistentPrefStore_SchedulePendingLossyWrites_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PersistentPrefStore_SchedulePendingLossyWrites_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_SchedulePendingLossyWrites_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_SchedulePendingLossyWrites_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_SchedulePendingLossyWrites_Params.validate = function(messageValidator, offset) {
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

  PersistentPrefStore_SchedulePendingLossyWrites_Params.encodedSize = codec.kStructHeaderSize + 0;

  PersistentPrefStore_SchedulePendingLossyWrites_Params.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_SchedulePendingLossyWrites_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PersistentPrefStore_SchedulePendingLossyWrites_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_SchedulePendingLossyWrites_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PersistentPrefStore_ClearMutableValues_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_ClearMutableValues_Params.prototype.initDefaults_ = function() {
  };
  PersistentPrefStore_ClearMutableValues_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_ClearMutableValues_Params.generate = function(generator_) {
    var generated = new PersistentPrefStore_ClearMutableValues_Params;
    return generated;
  };

  PersistentPrefStore_ClearMutableValues_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PersistentPrefStore_ClearMutableValues_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_ClearMutableValues_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_ClearMutableValues_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_ClearMutableValues_Params.validate = function(messageValidator, offset) {
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

  PersistentPrefStore_ClearMutableValues_Params.encodedSize = codec.kStructHeaderSize + 0;

  PersistentPrefStore_ClearMutableValues_Params.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_ClearMutableValues_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PersistentPrefStore_ClearMutableValues_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_ClearMutableValues_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PersistentPrefStore_OnStoreDeletionFromDisk_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PersistentPrefStore_OnStoreDeletionFromDisk_Params.prototype.initDefaults_ = function() {
  };
  PersistentPrefStore_OnStoreDeletionFromDisk_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PersistentPrefStore_OnStoreDeletionFromDisk_Params.generate = function(generator_) {
    var generated = new PersistentPrefStore_OnStoreDeletionFromDisk_Params;
    return generated;
  };

  PersistentPrefStore_OnStoreDeletionFromDisk_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  PersistentPrefStore_OnStoreDeletionFromDisk_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PersistentPrefStore_OnStoreDeletionFromDisk_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PersistentPrefStore_OnStoreDeletionFromDisk_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PersistentPrefStore_OnStoreDeletionFromDisk_Params.validate = function(messageValidator, offset) {
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

  PersistentPrefStore_OnStoreDeletionFromDisk_Params.encodedSize = codec.kStructHeaderSize + 0;

  PersistentPrefStore_OnStoreDeletionFromDisk_Params.decode = function(decoder) {
    var packed;
    var val = new PersistentPrefStore_OnStoreDeletionFromDisk_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PersistentPrefStore_OnStoreDeletionFromDisk_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PersistentPrefStore_OnStoreDeletionFromDisk_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ResetOnLoadObserver_OnResetOnLoad_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResetOnLoadObserver_OnResetOnLoad_Params.prototype.initDefaults_ = function() {
  };
  ResetOnLoadObserver_OnResetOnLoad_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ResetOnLoadObserver_OnResetOnLoad_Params.generate = function(generator_) {
    var generated = new ResetOnLoadObserver_OnResetOnLoad_Params;
    return generated;
  };

  ResetOnLoadObserver_OnResetOnLoad_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  ResetOnLoadObserver_OnResetOnLoad_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ResetOnLoadObserver_OnResetOnLoad_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ResetOnLoadObserver_OnResetOnLoad_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ResetOnLoadObserver_OnResetOnLoad_Params.validate = function(messageValidator, offset) {
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

  ResetOnLoadObserver_OnResetOnLoad_Params.encodedSize = codec.kStructHeaderSize + 0;

  ResetOnLoadObserver_OnResetOnLoad_Params.decode = function(decoder) {
    var packed;
    var val = new ResetOnLoadObserver_OnResetOnLoad_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ResetOnLoadObserver_OnResetOnLoad_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResetOnLoadObserver_OnResetOnLoad_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function PrefUpdateValue(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  PrefUpdateValue.Tags = {
    splitUpdates: 0,
    atomicUpdate: 1,
  };

  PrefUpdateValue.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  PrefUpdateValue.prototype.initValue_ = function(value) {
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
        "splitUpdates",
        "atomicUpdate",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a PrefUpdateValue member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  PrefUpdateValue.generate = function(generator_) {
    var generated = new PrefUpdateValue;
    var generators = [
      {
        field: "splitUpdates",

        generator: function() { return generator_.generateArray(function() {
          return generator_.generateStruct(prefs.mojom.SubPrefUpdate, false);
        }); },
      },
      {
        field: "atomicUpdate",

        generator: function() { return generator_.generateUnion(mojoBase.mojom.Value, true); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  PrefUpdateValue.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "splitUpdates",

        mutator: function() { return mutator_.mutateArray(this.splitUpdates, function(val) {
          return mutator_.mutateStruct(prefs.mojom.SubPrefUpdate, false);
        }); },
      },
      {
        field: "atomicUpdate",

        mutator: function() { return mutator_.mutateUnion(mojoBase.mojom.Value, true); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  PrefUpdateValue.prototype.getHandleDeps = function() {
    return [];
  }
  PrefUpdateValue.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(PrefUpdateValue.prototype, "splitUpdates", {
    get: function() {
      if (this.$tag != PrefUpdateValue.Tags.splitUpdates) {
        throw new ReferenceError(
            "PrefUpdateValue.splitUpdates is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = PrefUpdateValue.Tags.splitUpdates;
      this.$data = value;
    }
  });
  Object.defineProperty(PrefUpdateValue.prototype, "atomicUpdate", {
    get: function() {
      if (this.$tag != PrefUpdateValue.Tags.atomicUpdate) {
        throw new ReferenceError(
            "PrefUpdateValue.atomicUpdate is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = PrefUpdateValue.Tags.atomicUpdate;
      this.$data = value;
    }
  });


    PrefUpdateValue.encode = function(encoder, val) {
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
        case PrefUpdateValue.Tags.splitUpdates:
          encoder.encodeArrayPointer(new codec.PointerTo(SubPrefUpdate), val.splitUpdates);
          break;
        case PrefUpdateValue.Tags.atomicUpdate:
          encoder.encodeStructPointer(values$.Value, val.atomicUpdate);
          break;
      }
      encoder.align();
    };


    PrefUpdateValue.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new PrefUpdateValue();
      var tag = decoder.readUint32();
      switch (tag) {
        case PrefUpdateValue.Tags.splitUpdates:
          result.splitUpdates = decoder.decodeArrayPointer(new codec.PointerTo(SubPrefUpdate));
          break;
        case PrefUpdateValue.Tags.atomicUpdate:
          result.atomicUpdate = decoder.decodeStructPointer(values$.Value);
          break;
      }
      decoder.align();

      return result;
    };


    PrefUpdateValue.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case PrefUpdateValue.Tags.splitUpdates:
          

    // validate PrefUpdateValue.splitUpdates
    err = messageValidator.validateArrayPointer(data_offset, 8, new codec.PointerTo(SubPrefUpdate), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case PrefUpdateValue.Tags.atomicUpdate:
          
    // validate PrefUpdateValue.atomicUpdate
    err = messageValidator.validateNestedUnion(data_offset, values$.Value, true);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  PrefUpdateValue.encodedSize = 16;
  var kPrefStoreObserver_OnPrefsChanged_Name = 1742021376;
  var kPrefStoreObserver_OnInitializationCompleted_Name = 100146566;
  var kPrefStoreObserver_OnPrefChangeAck_Name = 16289728;

  function PrefStoreObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PrefStoreObserver,
                                                   handleOrPtrInfo);
  }

  function PrefStoreObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PrefStoreObserver, associatedInterfacePtrInfo);
  }

  PrefStoreObserverAssociatedPtr.prototype =
      Object.create(PrefStoreObserverPtr.prototype);
  PrefStoreObserverAssociatedPtr.prototype.constructor =
      PrefStoreObserverAssociatedPtr;

  function PrefStoreObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  PrefStoreObserverPtr.prototype.onPrefsChanged = function() {
    return PrefStoreObserverProxy.prototype.onPrefsChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  PrefStoreObserverProxy.prototype.onPrefsChanged = function(updates) {
    var params_ = new PrefStoreObserver_OnPrefsChanged_Params();
    params_.updates = updates;
    var builder = new codec.MessageV0Builder(
        kPrefStoreObserver_OnPrefsChanged_Name,
        codec.align(PrefStoreObserver_OnPrefsChanged_Params.encodedSize));
    builder.encodeStruct(PrefStoreObserver_OnPrefsChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrefStoreObserverPtr.prototype.onInitializationCompleted = function() {
    return PrefStoreObserverProxy.prototype.onInitializationCompleted
        .apply(this.ptr.getProxy(), arguments);
  };

  PrefStoreObserverProxy.prototype.onInitializationCompleted = function(succeeded) {
    var params_ = new PrefStoreObserver_OnInitializationCompleted_Params();
    params_.succeeded = succeeded;
    var builder = new codec.MessageV0Builder(
        kPrefStoreObserver_OnInitializationCompleted_Name,
        codec.align(PrefStoreObserver_OnInitializationCompleted_Params.encodedSize));
    builder.encodeStruct(PrefStoreObserver_OnInitializationCompleted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PrefStoreObserverPtr.prototype.onPrefChangeAck = function() {
    return PrefStoreObserverProxy.prototype.onPrefChangeAck
        .apply(this.ptr.getProxy(), arguments);
  };

  PrefStoreObserverProxy.prototype.onPrefChangeAck = function() {
    var params_ = new PrefStoreObserver_OnPrefChangeAck_Params();
    var builder = new codec.MessageV0Builder(
        kPrefStoreObserver_OnPrefChangeAck_Name,
        codec.align(PrefStoreObserver_OnPrefChangeAck_Params.encodedSize));
    builder.encodeStruct(PrefStoreObserver_OnPrefChangeAck_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PrefStoreObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  PrefStoreObserverStub.prototype.onPrefsChanged = function(updates) {
    return this.delegate_ && this.delegate_.onPrefsChanged && this.delegate_.onPrefsChanged(updates);
  }
  PrefStoreObserverStub.prototype.onInitializationCompleted = function(succeeded) {
    return this.delegate_ && this.delegate_.onInitializationCompleted && this.delegate_.onInitializationCompleted(succeeded);
  }
  PrefStoreObserverStub.prototype.onPrefChangeAck = function() {
    return this.delegate_ && this.delegate_.onPrefChangeAck && this.delegate_.onPrefChangeAck();
  }

  PrefStoreObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPrefStoreObserver_OnPrefsChanged_Name:
      var params = reader.decodeStruct(PrefStoreObserver_OnPrefsChanged_Params);
      this.onPrefsChanged(params.updates);
      return true;
    case kPrefStoreObserver_OnInitializationCompleted_Name:
      var params = reader.decodeStruct(PrefStoreObserver_OnInitializationCompleted_Params);
      this.onInitializationCompleted(params.succeeded);
      return true;
    case kPrefStoreObserver_OnPrefChangeAck_Name:
      var params = reader.decodeStruct(PrefStoreObserver_OnPrefChangeAck_Params);
      this.onPrefChangeAck();
      return true;
    default:
      return false;
    }
  };

  PrefStoreObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePrefStoreObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPrefStoreObserver_OnPrefsChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrefStoreObserver_OnPrefsChanged_Params;
      break;
      case kPrefStoreObserver_OnInitializationCompleted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrefStoreObserver_OnInitializationCompleted_Params;
      break;
      case kPrefStoreObserver_OnPrefChangeAck_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PrefStoreObserver_OnPrefChangeAck_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePrefStoreObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PrefStoreObserver = {
    name: 'prefs.mojom.PrefStoreObserver',
    kVersion: 0,
    ptrClass: PrefStoreObserverPtr,
    proxyClass: PrefStoreObserverProxy,
    stubClass: PrefStoreObserverStub,
    validateRequest: validatePrefStoreObserverRequest,
    validateResponse: null,
    mojomId: 'services/preferences/public/mojom/preferences.mojom',
    fuzzMethods: {
      onPrefsChanged: {
        params: PrefStoreObserver_OnPrefsChanged_Params,
      },
      onInitializationCompleted: {
        params: PrefStoreObserver_OnInitializationCompleted_Params,
      },
      onPrefChangeAck: {
        params: PrefStoreObserver_OnPrefChangeAck_Params,
      },
    },
  };
  PrefStoreObserverStub.prototype.validator = validatePrefStoreObserverRequest;
  PrefStoreObserverProxy.prototype.validator = null;
  var kPrefStoreConnector_Connect_Name = 463378864;

  function PrefStoreConnectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PrefStoreConnector,
                                                   handleOrPtrInfo);
  }

  function PrefStoreConnectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PrefStoreConnector, associatedInterfacePtrInfo);
  }

  PrefStoreConnectorAssociatedPtr.prototype =
      Object.create(PrefStoreConnectorPtr.prototype);
  PrefStoreConnectorAssociatedPtr.prototype.constructor =
      PrefStoreConnectorAssociatedPtr;

  function PrefStoreConnectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  PrefStoreConnectorPtr.prototype.connect = function() {
    return PrefStoreConnectorProxy.prototype.connect
        .apply(this.ptr.getProxy(), arguments);
  };

  PrefStoreConnectorProxy.prototype.connect = function(prefRegistry) {
    var params_ = new PrefStoreConnector_Connect_Params();
    params_.prefRegistry = prefRegistry;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPrefStoreConnector_Connect_Name,
          codec.align(PrefStoreConnector_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PrefStoreConnector_Connect_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PrefStoreConnector_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function PrefStoreConnectorStub(delegate) {
    this.delegate_ = delegate;
  }
  PrefStoreConnectorStub.prototype.connect = function(prefRegistry) {
    return this.delegate_ && this.delegate_.connect && this.delegate_.connect(prefRegistry);
  }

  PrefStoreConnectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  PrefStoreConnectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPrefStoreConnector_Connect_Name:
      var params = reader.decodeStruct(PrefStoreConnector_Connect_Params);
      this.connect(params.prefRegistry).then(function(response) {
        var responseParams =
            new PrefStoreConnector_Connect_ResponseParams();
        responseParams.connection = response.connection;
        responseParams.underlay = response.underlay;
        responseParams.remoteDefaults = response.remoteDefaults;
        responseParams.connections = response.connections;
        var builder = new codec.MessageV1Builder(
            kPrefStoreConnector_Connect_Name,
            codec.align(PrefStoreConnector_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PrefStoreConnector_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePrefStoreConnectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPrefStoreConnector_Connect_Name:
        if (message.expectsResponse())
          paramsClass = PrefStoreConnector_Connect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePrefStoreConnectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPrefStoreConnector_Connect_Name:
        if (message.isResponse())
          paramsClass = PrefStoreConnector_Connect_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PrefStoreConnector = {
    name: 'prefs.mojom.PrefStoreConnector',
    kVersion: 0,
    ptrClass: PrefStoreConnectorPtr,
    proxyClass: PrefStoreConnectorProxy,
    stubClass: PrefStoreConnectorStub,
    validateRequest: validatePrefStoreConnectorRequest,
    validateResponse: validatePrefStoreConnectorResponse,
    mojomId: 'services/preferences/public/mojom/preferences.mojom',
    fuzzMethods: {
      connect: {
        params: PrefStoreConnector_Connect_Params,
      },
    },
  };
  PrefStoreConnectorStub.prototype.validator = validatePrefStoreConnectorRequest;
  PrefStoreConnectorProxy.prototype.validator = validatePrefStoreConnectorResponse;
  var kPersistentPrefStore_SetValues_Name = 1636660291;
  var kPersistentPrefStore_RequestValue_Name = 1787249327;
  var kPersistentPrefStore_CommitPendingWrite_Name = 2116824076;
  var kPersistentPrefStore_SchedulePendingLossyWrites_Name = 65381140;
  var kPersistentPrefStore_ClearMutableValues_Name = 634285844;
  var kPersistentPrefStore_OnStoreDeletionFromDisk_Name = 677434478;

  function PersistentPrefStorePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PersistentPrefStore,
                                                   handleOrPtrInfo);
  }

  function PersistentPrefStoreAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PersistentPrefStore, associatedInterfacePtrInfo);
  }

  PersistentPrefStoreAssociatedPtr.prototype =
      Object.create(PersistentPrefStorePtr.prototype);
  PersistentPrefStoreAssociatedPtr.prototype.constructor =
      PersistentPrefStoreAssociatedPtr;

  function PersistentPrefStoreProxy(receiver) {
    this.receiver_ = receiver;
  }
  PersistentPrefStorePtr.prototype.setValues = function() {
    return PersistentPrefStoreProxy.prototype.setValues
        .apply(this.ptr.getProxy(), arguments);
  };

  PersistentPrefStoreProxy.prototype.setValues = function(updates) {
    var params_ = new PersistentPrefStore_SetValues_Params();
    params_.updates = updates;
    var builder = new codec.MessageV0Builder(
        kPersistentPrefStore_SetValues_Name,
        codec.align(PersistentPrefStore_SetValues_Params.encodedSize));
    builder.encodeStruct(PersistentPrefStore_SetValues_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PersistentPrefStorePtr.prototype.requestValue = function() {
    return PersistentPrefStoreProxy.prototype.requestValue
        .apply(this.ptr.getProxy(), arguments);
  };

  PersistentPrefStoreProxy.prototype.requestValue = function(key, subPrefPath) {
    var params_ = new PersistentPrefStore_RequestValue_Params();
    params_.key = key;
    params_.subPrefPath = subPrefPath;
    var builder = new codec.MessageV0Builder(
        kPersistentPrefStore_RequestValue_Name,
        codec.align(PersistentPrefStore_RequestValue_Params.encodedSize));
    builder.encodeStruct(PersistentPrefStore_RequestValue_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PersistentPrefStorePtr.prototype.commitPendingWrite = function() {
    return PersistentPrefStoreProxy.prototype.commitPendingWrite
        .apply(this.ptr.getProxy(), arguments);
  };

  PersistentPrefStoreProxy.prototype.commitPendingWrite = function() {
    var params_ = new PersistentPrefStore_CommitPendingWrite_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kPersistentPrefStore_CommitPendingWrite_Name,
          codec.align(PersistentPrefStore_CommitPendingWrite_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PersistentPrefStore_CommitPendingWrite_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PersistentPrefStore_CommitPendingWrite_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PersistentPrefStorePtr.prototype.schedulePendingLossyWrites = function() {
    return PersistentPrefStoreProxy.prototype.schedulePendingLossyWrites
        .apply(this.ptr.getProxy(), arguments);
  };

  PersistentPrefStoreProxy.prototype.schedulePendingLossyWrites = function() {
    var params_ = new PersistentPrefStore_SchedulePendingLossyWrites_Params();
    var builder = new codec.MessageV0Builder(
        kPersistentPrefStore_SchedulePendingLossyWrites_Name,
        codec.align(PersistentPrefStore_SchedulePendingLossyWrites_Params.encodedSize));
    builder.encodeStruct(PersistentPrefStore_SchedulePendingLossyWrites_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PersistentPrefStorePtr.prototype.clearMutableValues = function() {
    return PersistentPrefStoreProxy.prototype.clearMutableValues
        .apply(this.ptr.getProxy(), arguments);
  };

  PersistentPrefStoreProxy.prototype.clearMutableValues = function() {
    var params_ = new PersistentPrefStore_ClearMutableValues_Params();
    var builder = new codec.MessageV0Builder(
        kPersistentPrefStore_ClearMutableValues_Name,
        codec.align(PersistentPrefStore_ClearMutableValues_Params.encodedSize));
    builder.encodeStruct(PersistentPrefStore_ClearMutableValues_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PersistentPrefStorePtr.prototype.onStoreDeletionFromDisk = function() {
    return PersistentPrefStoreProxy.prototype.onStoreDeletionFromDisk
        .apply(this.ptr.getProxy(), arguments);
  };

  PersistentPrefStoreProxy.prototype.onStoreDeletionFromDisk = function() {
    var params_ = new PersistentPrefStore_OnStoreDeletionFromDisk_Params();
    var builder = new codec.MessageV0Builder(
        kPersistentPrefStore_OnStoreDeletionFromDisk_Name,
        codec.align(PersistentPrefStore_OnStoreDeletionFromDisk_Params.encodedSize));
    builder.encodeStruct(PersistentPrefStore_OnStoreDeletionFromDisk_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PersistentPrefStoreStub(delegate) {
    this.delegate_ = delegate;
  }
  PersistentPrefStoreStub.prototype.setValues = function(updates) {
    return this.delegate_ && this.delegate_.setValues && this.delegate_.setValues(updates);
  }
  PersistentPrefStoreStub.prototype.requestValue = function(key, subPrefPath) {
    return this.delegate_ && this.delegate_.requestValue && this.delegate_.requestValue(key, subPrefPath);
  }
  PersistentPrefStoreStub.prototype.commitPendingWrite = function() {
    return this.delegate_ && this.delegate_.commitPendingWrite && this.delegate_.commitPendingWrite();
  }
  PersistentPrefStoreStub.prototype.schedulePendingLossyWrites = function() {
    return this.delegate_ && this.delegate_.schedulePendingLossyWrites && this.delegate_.schedulePendingLossyWrites();
  }
  PersistentPrefStoreStub.prototype.clearMutableValues = function() {
    return this.delegate_ && this.delegate_.clearMutableValues && this.delegate_.clearMutableValues();
  }
  PersistentPrefStoreStub.prototype.onStoreDeletionFromDisk = function() {
    return this.delegate_ && this.delegate_.onStoreDeletionFromDisk && this.delegate_.onStoreDeletionFromDisk();
  }

  PersistentPrefStoreStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPersistentPrefStore_SetValues_Name:
      var params = reader.decodeStruct(PersistentPrefStore_SetValues_Params);
      this.setValues(params.updates);
      return true;
    case kPersistentPrefStore_RequestValue_Name:
      var params = reader.decodeStruct(PersistentPrefStore_RequestValue_Params);
      this.requestValue(params.key, params.subPrefPath);
      return true;
    case kPersistentPrefStore_SchedulePendingLossyWrites_Name:
      var params = reader.decodeStruct(PersistentPrefStore_SchedulePendingLossyWrites_Params);
      this.schedulePendingLossyWrites();
      return true;
    case kPersistentPrefStore_ClearMutableValues_Name:
      var params = reader.decodeStruct(PersistentPrefStore_ClearMutableValues_Params);
      this.clearMutableValues();
      return true;
    case kPersistentPrefStore_OnStoreDeletionFromDisk_Name:
      var params = reader.decodeStruct(PersistentPrefStore_OnStoreDeletionFromDisk_Params);
      this.onStoreDeletionFromDisk();
      return true;
    default:
      return false;
    }
  };

  PersistentPrefStoreStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPersistentPrefStore_CommitPendingWrite_Name:
      var params = reader.decodeStruct(PersistentPrefStore_CommitPendingWrite_Params);
      this.commitPendingWrite().then(function(response) {
        var responseParams =
            new PersistentPrefStore_CommitPendingWrite_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kPersistentPrefStore_CommitPendingWrite_Name,
            codec.align(PersistentPrefStore_CommitPendingWrite_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PersistentPrefStore_CommitPendingWrite_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validatePersistentPrefStoreRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPersistentPrefStore_SetValues_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PersistentPrefStore_SetValues_Params;
      break;
      case kPersistentPrefStore_RequestValue_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PersistentPrefStore_RequestValue_Params;
      break;
      case kPersistentPrefStore_CommitPendingWrite_Name:
        if (message.expectsResponse())
          paramsClass = PersistentPrefStore_CommitPendingWrite_Params;
      break;
      case kPersistentPrefStore_SchedulePendingLossyWrites_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PersistentPrefStore_SchedulePendingLossyWrites_Params;
      break;
      case kPersistentPrefStore_ClearMutableValues_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PersistentPrefStore_ClearMutableValues_Params;
      break;
      case kPersistentPrefStore_OnStoreDeletionFromDisk_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PersistentPrefStore_OnStoreDeletionFromDisk_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePersistentPrefStoreResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPersistentPrefStore_CommitPendingWrite_Name:
        if (message.isResponse())
          paramsClass = PersistentPrefStore_CommitPendingWrite_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PersistentPrefStore = {
    name: 'prefs.mojom.PersistentPrefStore',
    kVersion: 0,
    ptrClass: PersistentPrefStorePtr,
    proxyClass: PersistentPrefStoreProxy,
    stubClass: PersistentPrefStoreStub,
    validateRequest: validatePersistentPrefStoreRequest,
    validateResponse: validatePersistentPrefStoreResponse,
    mojomId: 'services/preferences/public/mojom/preferences.mojom',
    fuzzMethods: {
      setValues: {
        params: PersistentPrefStore_SetValues_Params,
      },
      requestValue: {
        params: PersistentPrefStore_RequestValue_Params,
      },
      commitPendingWrite: {
        params: PersistentPrefStore_CommitPendingWrite_Params,
      },
      schedulePendingLossyWrites: {
        params: PersistentPrefStore_SchedulePendingLossyWrites_Params,
      },
      clearMutableValues: {
        params: PersistentPrefStore_ClearMutableValues_Params,
      },
      onStoreDeletionFromDisk: {
        params: PersistentPrefStore_OnStoreDeletionFromDisk_Params,
      },
    },
  };
  PersistentPrefStoreStub.prototype.validator = validatePersistentPrefStoreRequest;
  PersistentPrefStoreProxy.prototype.validator = validatePersistentPrefStoreResponse;
  var kResetOnLoadObserver_OnResetOnLoad_Name = 1936927769;

  function ResetOnLoadObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ResetOnLoadObserver,
                                                   handleOrPtrInfo);
  }

  function ResetOnLoadObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ResetOnLoadObserver, associatedInterfacePtrInfo);
  }

  ResetOnLoadObserverAssociatedPtr.prototype =
      Object.create(ResetOnLoadObserverPtr.prototype);
  ResetOnLoadObserverAssociatedPtr.prototype.constructor =
      ResetOnLoadObserverAssociatedPtr;

  function ResetOnLoadObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  ResetOnLoadObserverPtr.prototype.onResetOnLoad = function() {
    return ResetOnLoadObserverProxy.prototype.onResetOnLoad
        .apply(this.ptr.getProxy(), arguments);
  };

  ResetOnLoadObserverProxy.prototype.onResetOnLoad = function() {
    var params_ = new ResetOnLoadObserver_OnResetOnLoad_Params();
    var builder = new codec.MessageV0Builder(
        kResetOnLoadObserver_OnResetOnLoad_Name,
        codec.align(ResetOnLoadObserver_OnResetOnLoad_Params.encodedSize));
    builder.encodeStruct(ResetOnLoadObserver_OnResetOnLoad_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ResetOnLoadObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  ResetOnLoadObserverStub.prototype.onResetOnLoad = function() {
    return this.delegate_ && this.delegate_.onResetOnLoad && this.delegate_.onResetOnLoad();
  }

  ResetOnLoadObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kResetOnLoadObserver_OnResetOnLoad_Name:
      var params = reader.decodeStruct(ResetOnLoadObserver_OnResetOnLoad_Params);
      this.onResetOnLoad();
      return true;
    default:
      return false;
    }
  };

  ResetOnLoadObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateResetOnLoadObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kResetOnLoadObserver_OnResetOnLoad_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ResetOnLoadObserver_OnResetOnLoad_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateResetOnLoadObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ResetOnLoadObserver = {
    name: 'prefs.mojom.ResetOnLoadObserver',
    kVersion: 0,
    ptrClass: ResetOnLoadObserverPtr,
    proxyClass: ResetOnLoadObserverProxy,
    stubClass: ResetOnLoadObserverStub,
    validateRequest: validateResetOnLoadObserverRequest,
    validateResponse: null,
    mojomId: 'services/preferences/public/mojom/preferences.mojom',
    fuzzMethods: {
      onResetOnLoad: {
        params: ResetOnLoadObserver_OnResetOnLoad_Params,
      },
    },
  };
  ResetOnLoadObserverStub.prototype.validator = validateResetOnLoadObserverRequest;
  ResetOnLoadObserverProxy.prototype.validator = null;
  exports.kServiceName = kServiceName;
  exports.kLocalStateServiceName = kLocalStateServiceName;
  exports.PrefStoreType = PrefStoreType;
  exports.PrefStoreConnection = PrefStoreConnection;
  exports.PersistentPrefStoreConnection = PersistentPrefStoreConnection;
  exports.IncognitoPersistentPrefStoreConnection = IncognitoPersistentPrefStoreConnection;
  exports.SubPrefUpdate = SubPrefUpdate;
  exports.PrefUpdate = PrefUpdate;
  exports.PrefRegistry = PrefRegistry;
  exports.PrefRegistration = PrefRegistration;
  exports.TrackedPersistentPrefStoreConfiguration = TrackedPersistentPrefStoreConfiguration;
  exports.TrackedPreferenceMetadata = TrackedPreferenceMetadata;
  exports.PrefUpdateValue = PrefUpdateValue;
  exports.PrefStoreObserver = PrefStoreObserver;
  exports.PrefStoreObserverPtr = PrefStoreObserverPtr;
  exports.PrefStoreObserverAssociatedPtr = PrefStoreObserverAssociatedPtr;
  exports.PrefStoreConnector = PrefStoreConnector;
  exports.PrefStoreConnectorPtr = PrefStoreConnectorPtr;
  exports.PrefStoreConnectorAssociatedPtr = PrefStoreConnectorAssociatedPtr;
  exports.PersistentPrefStore = PersistentPrefStore;
  exports.PersistentPrefStorePtr = PersistentPrefStorePtr;
  exports.PersistentPrefStoreAssociatedPtr = PersistentPrefStoreAssociatedPtr;
  exports.ResetOnLoadObserver = ResetOnLoadObserver;
  exports.ResetOnLoadObserverPtr = ResetOnLoadObserverPtr;
  exports.ResetOnLoadObserverAssociatedPtr = ResetOnLoadObserverAssociatedPtr;
})();