// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/fingerprint.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');



  function FingerprintObserver_OnRestarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FingerprintObserver_OnRestarted_Params.prototype.initDefaults_ = function() {
  };
  FingerprintObserver_OnRestarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FingerprintObserver_OnRestarted_Params.generate = function(generator_) {
    var generated = new FingerprintObserver_OnRestarted_Params;
    return generated;
  };

  FingerprintObserver_OnRestarted_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FingerprintObserver_OnRestarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FingerprintObserver_OnRestarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FingerprintObserver_OnRestarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FingerprintObserver_OnRestarted_Params.validate = function(messageValidator, offset) {
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

  FingerprintObserver_OnRestarted_Params.encodedSize = codec.kStructHeaderSize + 0;

  FingerprintObserver_OnRestarted_Params.decode = function(decoder) {
    var packed;
    var val = new FingerprintObserver_OnRestarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FingerprintObserver_OnRestarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FingerprintObserver_OnRestarted_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FingerprintObserver_OnEnrollScanDone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FingerprintObserver_OnEnrollScanDone_Params.prototype.initDefaults_ = function() {
    this.scanResult = 0;
    this.isComplete = false;
    this.percentComplete = 0;
  };
  FingerprintObserver_OnEnrollScanDone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FingerprintObserver_OnEnrollScanDone_Params.generate = function(generator_) {
    var generated = new FingerprintObserver_OnEnrollScanDone_Params;
    generated.scanResult = generator_.generateUint32();
    generated.isComplete = generator_.generateBool();
    generated.percentComplete = generator_.generateInt32();
    return generated;
  };

  FingerprintObserver_OnEnrollScanDone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scanResult = mutator_.mutateUint32(this.scanResult);
    }
    if (mutator_.chooseMutateField()) {
      this.isComplete = mutator_.mutateBool(this.isComplete);
    }
    if (mutator_.chooseMutateField()) {
      this.percentComplete = mutator_.mutateInt32(this.percentComplete);
    }
    return this;
  };
  FingerprintObserver_OnEnrollScanDone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FingerprintObserver_OnEnrollScanDone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FingerprintObserver_OnEnrollScanDone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FingerprintObserver_OnEnrollScanDone_Params.validate = function(messageValidator, offset) {
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




    return validator.validationError.NONE;
  };

  FingerprintObserver_OnEnrollScanDone_Params.encodedSize = codec.kStructHeaderSize + 16;

  FingerprintObserver_OnEnrollScanDone_Params.decode = function(decoder) {
    var packed;
    var val = new FingerprintObserver_OnEnrollScanDone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scanResult = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.isComplete = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.percentComplete = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FingerprintObserver_OnEnrollScanDone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FingerprintObserver_OnEnrollScanDone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.scanResult);
    packed = 0;
    packed |= (val.isComplete & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.percentComplete);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FingerprintObserver_OnAuthScanDone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FingerprintObserver_OnAuthScanDone_Params.prototype.initDefaults_ = function() {
    this.scanResult = 0;
    this.matches = null;
  };
  FingerprintObserver_OnAuthScanDone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FingerprintObserver_OnAuthScanDone_Params.generate = function(generator_) {
    var generated = new FingerprintObserver_OnAuthScanDone_Params;
    generated.scanResult = generator_.generateUint32();
    generated.matches = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateString(false);
        });
      });
    return generated;
  };

  FingerprintObserver_OnAuthScanDone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scanResult = mutator_.mutateUint32(this.scanResult);
    }
    if (mutator_.chooseMutateField()) {
      this.matches = mutator_.mutateMap(this.matches,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateArray(val, function(val) {
            return mutator_.mutateString(val, false);
          });
        });
    }
    return this;
  };
  FingerprintObserver_OnAuthScanDone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FingerprintObserver_OnAuthScanDone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FingerprintObserver_OnAuthScanDone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FingerprintObserver_OnAuthScanDone_Params.validate = function(messageValidator, offset) {
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



    // validate FingerprintObserver_OnAuthScanDone_Params.matches
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, false, codec.String, new codec.ArrayOf(codec.String), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FingerprintObserver_OnAuthScanDone_Params.encodedSize = codec.kStructHeaderSize + 16;

  FingerprintObserver_OnAuthScanDone_Params.decode = function(decoder) {
    var packed;
    var val = new FingerprintObserver_OnAuthScanDone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scanResult = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.matches = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.String));
    return val;
  };

  FingerprintObserver_OnAuthScanDone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FingerprintObserver_OnAuthScanDone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.scanResult);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.String), val.matches);
  };
  function FingerprintObserver_OnSessionFailed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FingerprintObserver_OnSessionFailed_Params.prototype.initDefaults_ = function() {
  };
  FingerprintObserver_OnSessionFailed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FingerprintObserver_OnSessionFailed_Params.generate = function(generator_) {
    var generated = new FingerprintObserver_OnSessionFailed_Params;
    return generated;
  };

  FingerprintObserver_OnSessionFailed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FingerprintObserver_OnSessionFailed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FingerprintObserver_OnSessionFailed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FingerprintObserver_OnSessionFailed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FingerprintObserver_OnSessionFailed_Params.validate = function(messageValidator, offset) {
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

  FingerprintObserver_OnSessionFailed_Params.encodedSize = codec.kStructHeaderSize + 0;

  FingerprintObserver_OnSessionFailed_Params.decode = function(decoder) {
    var packed;
    var val = new FingerprintObserver_OnSessionFailed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FingerprintObserver_OnSessionFailed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FingerprintObserver_OnSessionFailed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Fingerprint_GetRecordsForUser_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_GetRecordsForUser_Params.prototype.initDefaults_ = function() {
    this.userId = null;
  };
  Fingerprint_GetRecordsForUser_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_GetRecordsForUser_Params.generate = function(generator_) {
    var generated = new Fingerprint_GetRecordsForUser_Params;
    generated.userId = generator_.generateString(false);
    return generated;
  };

  Fingerprint_GetRecordsForUser_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.userId = mutator_.mutateString(this.userId, false);
    }
    return this;
  };
  Fingerprint_GetRecordsForUser_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_GetRecordsForUser_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_GetRecordsForUser_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_GetRecordsForUser_Params.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_GetRecordsForUser_Params.userId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_GetRecordsForUser_Params.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_GetRecordsForUser_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_GetRecordsForUser_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.userId = decoder.decodeStruct(codec.String);
    return val;
  };

  Fingerprint_GetRecordsForUser_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_GetRecordsForUser_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.userId);
  };
  function Fingerprint_GetRecordsForUser_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_GetRecordsForUser_ResponseParams.prototype.initDefaults_ = function() {
    this.records = null;
  };
  Fingerprint_GetRecordsForUser_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_GetRecordsForUser_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_GetRecordsForUser_ResponseParams;
    generated.records = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateString(false);
      });
    return generated;
  };

  Fingerprint_GetRecordsForUser_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.records = mutator_.mutateMap(this.records,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateString(val, false);
        });
    }
    return this;
  };
  Fingerprint_GetRecordsForUser_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_GetRecordsForUser_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_GetRecordsForUser_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_GetRecordsForUser_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_GetRecordsForUser_ResponseParams.records
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_GetRecordsForUser_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_GetRecordsForUser_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_GetRecordsForUser_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.records = decoder.decodeMapPointer(codec.String, codec.String);
    return val;
  };

  Fingerprint_GetRecordsForUser_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_GetRecordsForUser_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(codec.String, codec.String, val.records);
  };
  function Fingerprint_StartEnrollSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_StartEnrollSession_Params.prototype.initDefaults_ = function() {
    this.userId = null;
    this.label = null;
  };
  Fingerprint_StartEnrollSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_StartEnrollSession_Params.generate = function(generator_) {
    var generated = new Fingerprint_StartEnrollSession_Params;
    generated.userId = generator_.generateString(false);
    generated.label = generator_.generateString(false);
    return generated;
  };

  Fingerprint_StartEnrollSession_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.userId = mutator_.mutateString(this.userId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    return this;
  };
  Fingerprint_StartEnrollSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_StartEnrollSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_StartEnrollSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_StartEnrollSession_Params.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_StartEnrollSession_Params.userId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Fingerprint_StartEnrollSession_Params.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_StartEnrollSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  Fingerprint_StartEnrollSession_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_StartEnrollSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.userId = decoder.decodeStruct(codec.String);
    val.label = decoder.decodeStruct(codec.String);
    return val;
  };

  Fingerprint_StartEnrollSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_StartEnrollSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.userId);
    encoder.encodeStruct(codec.String, val.label);
  };
  function Fingerprint_CancelCurrentEnrollSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_CancelCurrentEnrollSession_Params.prototype.initDefaults_ = function() {
  };
  Fingerprint_CancelCurrentEnrollSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_CancelCurrentEnrollSession_Params.generate = function(generator_) {
    var generated = new Fingerprint_CancelCurrentEnrollSession_Params;
    return generated;
  };

  Fingerprint_CancelCurrentEnrollSession_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Fingerprint_CancelCurrentEnrollSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_CancelCurrentEnrollSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_CancelCurrentEnrollSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_CancelCurrentEnrollSession_Params.validate = function(messageValidator, offset) {
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

  Fingerprint_CancelCurrentEnrollSession_Params.encodedSize = codec.kStructHeaderSize + 0;

  Fingerprint_CancelCurrentEnrollSession_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_CancelCurrentEnrollSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Fingerprint_CancelCurrentEnrollSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_CancelCurrentEnrollSession_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Fingerprint_CancelCurrentEnrollSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_CancelCurrentEnrollSession_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Fingerprint_CancelCurrentEnrollSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_CancelCurrentEnrollSession_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_CancelCurrentEnrollSession_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Fingerprint_CancelCurrentEnrollSession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Fingerprint_CancelCurrentEnrollSession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_CancelCurrentEnrollSession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_CancelCurrentEnrollSession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_CancelCurrentEnrollSession_ResponseParams.validate = function(messageValidator, offset) {
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

  Fingerprint_CancelCurrentEnrollSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_CancelCurrentEnrollSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_CancelCurrentEnrollSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Fingerprint_CancelCurrentEnrollSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_CancelCurrentEnrollSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Fingerprint_RequestRecordLabel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_RequestRecordLabel_Params.prototype.initDefaults_ = function() {
    this.recordPath = null;
  };
  Fingerprint_RequestRecordLabel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_RequestRecordLabel_Params.generate = function(generator_) {
    var generated = new Fingerprint_RequestRecordLabel_Params;
    generated.recordPath = generator_.generateString(false);
    return generated;
  };

  Fingerprint_RequestRecordLabel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.recordPath = mutator_.mutateString(this.recordPath, false);
    }
    return this;
  };
  Fingerprint_RequestRecordLabel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_RequestRecordLabel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_RequestRecordLabel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_RequestRecordLabel_Params.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_RequestRecordLabel_Params.recordPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_RequestRecordLabel_Params.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_RequestRecordLabel_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_RequestRecordLabel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.recordPath = decoder.decodeStruct(codec.String);
    return val;
  };

  Fingerprint_RequestRecordLabel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_RequestRecordLabel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.recordPath);
  };
  function Fingerprint_RequestRecordLabel_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_RequestRecordLabel_ResponseParams.prototype.initDefaults_ = function() {
    this.label = null;
  };
  Fingerprint_RequestRecordLabel_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_RequestRecordLabel_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_RequestRecordLabel_ResponseParams;
    generated.label = generator_.generateString(false);
    return generated;
  };

  Fingerprint_RequestRecordLabel_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.label = mutator_.mutateString(this.label, false);
    }
    return this;
  };
  Fingerprint_RequestRecordLabel_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_RequestRecordLabel_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_RequestRecordLabel_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_RequestRecordLabel_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_RequestRecordLabel_ResponseParams.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_RequestRecordLabel_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_RequestRecordLabel_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_RequestRecordLabel_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.label = decoder.decodeStruct(codec.String);
    return val;
  };

  Fingerprint_RequestRecordLabel_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_RequestRecordLabel_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.label);
  };
  function Fingerprint_SetRecordLabel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_SetRecordLabel_Params.prototype.initDefaults_ = function() {
    this.recordPath = null;
    this.newLabel = null;
  };
  Fingerprint_SetRecordLabel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_SetRecordLabel_Params.generate = function(generator_) {
    var generated = new Fingerprint_SetRecordLabel_Params;
    generated.recordPath = generator_.generateString(false);
    generated.newLabel = generator_.generateString(false);
    return generated;
  };

  Fingerprint_SetRecordLabel_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.recordPath = mutator_.mutateString(this.recordPath, false);
    }
    if (mutator_.chooseMutateField()) {
      this.newLabel = mutator_.mutateString(this.newLabel, false);
    }
    return this;
  };
  Fingerprint_SetRecordLabel_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_SetRecordLabel_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_SetRecordLabel_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_SetRecordLabel_Params.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_SetRecordLabel_Params.recordPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Fingerprint_SetRecordLabel_Params.newLabel
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_SetRecordLabel_Params.encodedSize = codec.kStructHeaderSize + 16;

  Fingerprint_SetRecordLabel_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_SetRecordLabel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.recordPath = decoder.decodeStruct(codec.String);
    val.newLabel = decoder.decodeStruct(codec.String);
    return val;
  };

  Fingerprint_SetRecordLabel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_SetRecordLabel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.recordPath);
    encoder.encodeStruct(codec.String, val.newLabel);
  };
  function Fingerprint_SetRecordLabel_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_SetRecordLabel_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Fingerprint_SetRecordLabel_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_SetRecordLabel_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_SetRecordLabel_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Fingerprint_SetRecordLabel_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Fingerprint_SetRecordLabel_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_SetRecordLabel_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_SetRecordLabel_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_SetRecordLabel_ResponseParams.validate = function(messageValidator, offset) {
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

  Fingerprint_SetRecordLabel_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_SetRecordLabel_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_SetRecordLabel_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Fingerprint_SetRecordLabel_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_SetRecordLabel_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Fingerprint_RemoveRecord_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_RemoveRecord_Params.prototype.initDefaults_ = function() {
    this.recordPath = null;
  };
  Fingerprint_RemoveRecord_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_RemoveRecord_Params.generate = function(generator_) {
    var generated = new Fingerprint_RemoveRecord_Params;
    generated.recordPath = generator_.generateString(false);
    return generated;
  };

  Fingerprint_RemoveRecord_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.recordPath = mutator_.mutateString(this.recordPath, false);
    }
    return this;
  };
  Fingerprint_RemoveRecord_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_RemoveRecord_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_RemoveRecord_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_RemoveRecord_Params.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_RemoveRecord_Params.recordPath
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_RemoveRecord_Params.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_RemoveRecord_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_RemoveRecord_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.recordPath = decoder.decodeStruct(codec.String);
    return val;
  };

  Fingerprint_RemoveRecord_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_RemoveRecord_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.recordPath);
  };
  function Fingerprint_RemoveRecord_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_RemoveRecord_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Fingerprint_RemoveRecord_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_RemoveRecord_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_RemoveRecord_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Fingerprint_RemoveRecord_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Fingerprint_RemoveRecord_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_RemoveRecord_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_RemoveRecord_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_RemoveRecord_ResponseParams.validate = function(messageValidator, offset) {
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

  Fingerprint_RemoveRecord_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_RemoveRecord_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_RemoveRecord_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Fingerprint_RemoveRecord_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_RemoveRecord_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Fingerprint_StartAuthSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_StartAuthSession_Params.prototype.initDefaults_ = function() {
  };
  Fingerprint_StartAuthSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_StartAuthSession_Params.generate = function(generator_) {
    var generated = new Fingerprint_StartAuthSession_Params;
    return generated;
  };

  Fingerprint_StartAuthSession_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Fingerprint_StartAuthSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_StartAuthSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_StartAuthSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_StartAuthSession_Params.validate = function(messageValidator, offset) {
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

  Fingerprint_StartAuthSession_Params.encodedSize = codec.kStructHeaderSize + 0;

  Fingerprint_StartAuthSession_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_StartAuthSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Fingerprint_StartAuthSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_StartAuthSession_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Fingerprint_EndCurrentAuthSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_EndCurrentAuthSession_Params.prototype.initDefaults_ = function() {
  };
  Fingerprint_EndCurrentAuthSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_EndCurrentAuthSession_Params.generate = function(generator_) {
    var generated = new Fingerprint_EndCurrentAuthSession_Params;
    return generated;
  };

  Fingerprint_EndCurrentAuthSession_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Fingerprint_EndCurrentAuthSession_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_EndCurrentAuthSession_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_EndCurrentAuthSession_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_EndCurrentAuthSession_Params.validate = function(messageValidator, offset) {
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

  Fingerprint_EndCurrentAuthSession_Params.encodedSize = codec.kStructHeaderSize + 0;

  Fingerprint_EndCurrentAuthSession_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_EndCurrentAuthSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Fingerprint_EndCurrentAuthSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_EndCurrentAuthSession_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Fingerprint_EndCurrentAuthSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_EndCurrentAuthSession_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Fingerprint_EndCurrentAuthSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_EndCurrentAuthSession_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_EndCurrentAuthSession_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Fingerprint_EndCurrentAuthSession_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Fingerprint_EndCurrentAuthSession_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_EndCurrentAuthSession_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_EndCurrentAuthSession_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_EndCurrentAuthSession_ResponseParams.validate = function(messageValidator, offset) {
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

  Fingerprint_EndCurrentAuthSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_EndCurrentAuthSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_EndCurrentAuthSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Fingerprint_EndCurrentAuthSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_EndCurrentAuthSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Fingerprint_DestroyAllRecords_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_DestroyAllRecords_Params.prototype.initDefaults_ = function() {
  };
  Fingerprint_DestroyAllRecords_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_DestroyAllRecords_Params.generate = function(generator_) {
    var generated = new Fingerprint_DestroyAllRecords_Params;
    return generated;
  };

  Fingerprint_DestroyAllRecords_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Fingerprint_DestroyAllRecords_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_DestroyAllRecords_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_DestroyAllRecords_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_DestroyAllRecords_Params.validate = function(messageValidator, offset) {
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

  Fingerprint_DestroyAllRecords_Params.encodedSize = codec.kStructHeaderSize + 0;

  Fingerprint_DestroyAllRecords_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_DestroyAllRecords_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Fingerprint_DestroyAllRecords_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_DestroyAllRecords_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Fingerprint_DestroyAllRecords_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_DestroyAllRecords_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  Fingerprint_DestroyAllRecords_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_DestroyAllRecords_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_DestroyAllRecords_ResponseParams;
    generated.success = generator_.generateBool();
    return generated;
  };

  Fingerprint_DestroyAllRecords_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.success = mutator_.mutateBool(this.success);
    }
    return this;
  };
  Fingerprint_DestroyAllRecords_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_DestroyAllRecords_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_DestroyAllRecords_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_DestroyAllRecords_ResponseParams.validate = function(messageValidator, offset) {
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

  Fingerprint_DestroyAllRecords_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_DestroyAllRecords_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_DestroyAllRecords_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Fingerprint_DestroyAllRecords_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_DestroyAllRecords_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Fingerprint_AddFingerprintObserver_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_AddFingerprintObserver_Params.prototype.initDefaults_ = function() {
    this.observer = new FingerprintObserverPtr();
  };
  Fingerprint_AddFingerprintObserver_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_AddFingerprintObserver_Params.generate = function(generator_) {
    var generated = new Fingerprint_AddFingerprintObserver_Params;
    generated.observer = generator_.generateInterface("device.mojom.FingerprintObserver", false);
    return generated;
  };

  Fingerprint_AddFingerprintObserver_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.observer = mutator_.mutateInterface(this.observer, "device.mojom.FingerprintObserver", false);
    }
    return this;
  };
  Fingerprint_AddFingerprintObserver_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.observer !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.FingerprintObserverPtr"]);
    }
    return handles;
  };

  Fingerprint_AddFingerprintObserver_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_AddFingerprintObserver_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.observer = handles[idx++];;
    return idx;
  };

  Fingerprint_AddFingerprintObserver_Params.validate = function(messageValidator, offset) {
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


    // validate Fingerprint_AddFingerprintObserver_Params.observer
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Fingerprint_AddFingerprintObserver_Params.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_AddFingerprintObserver_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_AddFingerprintObserver_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.observer = decoder.decodeStruct(new codec.Interface(FingerprintObserverPtr));
    return val;
  };

  Fingerprint_AddFingerprintObserver_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_AddFingerprintObserver_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(FingerprintObserverPtr), val.observer);
  };
  function Fingerprint_RequestType_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_RequestType_Params.prototype.initDefaults_ = function() {
  };
  Fingerprint_RequestType_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_RequestType_Params.generate = function(generator_) {
    var generated = new Fingerprint_RequestType_Params;
    return generated;
  };

  Fingerprint_RequestType_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Fingerprint_RequestType_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_RequestType_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_RequestType_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_RequestType_Params.validate = function(messageValidator, offset) {
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

  Fingerprint_RequestType_Params.encodedSize = codec.kStructHeaderSize + 0;

  Fingerprint_RequestType_Params.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_RequestType_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Fingerprint_RequestType_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_RequestType_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Fingerprint_RequestType_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Fingerprint_RequestType_ResponseParams.prototype.initDefaults_ = function() {
    this.type = 0;
  };
  Fingerprint_RequestType_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Fingerprint_RequestType_ResponseParams.generate = function(generator_) {
    var generated = new Fingerprint_RequestType_ResponseParams;
    generated.type = generator_.generateUint32();
    return generated;
  };

  Fingerprint_RequestType_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateUint32(this.type);
    }
    return this;
  };
  Fingerprint_RequestType_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Fingerprint_RequestType_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Fingerprint_RequestType_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Fingerprint_RequestType_ResponseParams.validate = function(messageValidator, offset) {
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

  Fingerprint_RequestType_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Fingerprint_RequestType_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Fingerprint_RequestType_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Fingerprint_RequestType_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Fingerprint_RequestType_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kFingerprintObserver_OnRestarted_Name = 601463666;
  var kFingerprintObserver_OnEnrollScanDone_Name = 1955447640;
  var kFingerprintObserver_OnAuthScanDone_Name = 1612386579;
  var kFingerprintObserver_OnSessionFailed_Name = 70143011;

  function FingerprintObserverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FingerprintObserver,
                                                   handleOrPtrInfo);
  }

  function FingerprintObserverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FingerprintObserver, associatedInterfacePtrInfo);
  }

  FingerprintObserverAssociatedPtr.prototype =
      Object.create(FingerprintObserverPtr.prototype);
  FingerprintObserverAssociatedPtr.prototype.constructor =
      FingerprintObserverAssociatedPtr;

  function FingerprintObserverProxy(receiver) {
    this.receiver_ = receiver;
  }
  FingerprintObserverPtr.prototype.onRestarted = function() {
    return FingerprintObserverProxy.prototype.onRestarted
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintObserverProxy.prototype.onRestarted = function() {
    var params_ = new FingerprintObserver_OnRestarted_Params();
    var builder = new codec.MessageV0Builder(
        kFingerprintObserver_OnRestarted_Name,
        codec.align(FingerprintObserver_OnRestarted_Params.encodedSize));
    builder.encodeStruct(FingerprintObserver_OnRestarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FingerprintObserverPtr.prototype.onEnrollScanDone = function() {
    return FingerprintObserverProxy.prototype.onEnrollScanDone
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintObserverProxy.prototype.onEnrollScanDone = function(scanResult, isComplete, percentComplete) {
    var params_ = new FingerprintObserver_OnEnrollScanDone_Params();
    params_.scanResult = scanResult;
    params_.isComplete = isComplete;
    params_.percentComplete = percentComplete;
    var builder = new codec.MessageV0Builder(
        kFingerprintObserver_OnEnrollScanDone_Name,
        codec.align(FingerprintObserver_OnEnrollScanDone_Params.encodedSize));
    builder.encodeStruct(FingerprintObserver_OnEnrollScanDone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FingerprintObserverPtr.prototype.onAuthScanDone = function() {
    return FingerprintObserverProxy.prototype.onAuthScanDone
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintObserverProxy.prototype.onAuthScanDone = function(scanResult, matches) {
    var params_ = new FingerprintObserver_OnAuthScanDone_Params();
    params_.scanResult = scanResult;
    params_.matches = matches;
    var builder = new codec.MessageV0Builder(
        kFingerprintObserver_OnAuthScanDone_Name,
        codec.align(FingerprintObserver_OnAuthScanDone_Params.encodedSize));
    builder.encodeStruct(FingerprintObserver_OnAuthScanDone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FingerprintObserverPtr.prototype.onSessionFailed = function() {
    return FingerprintObserverProxy.prototype.onSessionFailed
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintObserverProxy.prototype.onSessionFailed = function() {
    var params_ = new FingerprintObserver_OnSessionFailed_Params();
    var builder = new codec.MessageV0Builder(
        kFingerprintObserver_OnSessionFailed_Name,
        codec.align(FingerprintObserver_OnSessionFailed_Params.encodedSize));
    builder.encodeStruct(FingerprintObserver_OnSessionFailed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FingerprintObserverStub(delegate) {
    this.delegate_ = delegate;
  }
  FingerprintObserverStub.prototype.onRestarted = function() {
    return this.delegate_ && this.delegate_.onRestarted && this.delegate_.onRestarted();
  }
  FingerprintObserverStub.prototype.onEnrollScanDone = function(scanResult, isComplete, percentComplete) {
    return this.delegate_ && this.delegate_.onEnrollScanDone && this.delegate_.onEnrollScanDone(scanResult, isComplete, percentComplete);
  }
  FingerprintObserverStub.prototype.onAuthScanDone = function(scanResult, matches) {
    return this.delegate_ && this.delegate_.onAuthScanDone && this.delegate_.onAuthScanDone(scanResult, matches);
  }
  FingerprintObserverStub.prototype.onSessionFailed = function() {
    return this.delegate_ && this.delegate_.onSessionFailed && this.delegate_.onSessionFailed();
  }

  FingerprintObserverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFingerprintObserver_OnRestarted_Name:
      var params = reader.decodeStruct(FingerprintObserver_OnRestarted_Params);
      this.onRestarted();
      return true;
    case kFingerprintObserver_OnEnrollScanDone_Name:
      var params = reader.decodeStruct(FingerprintObserver_OnEnrollScanDone_Params);
      this.onEnrollScanDone(params.scanResult, params.isComplete, params.percentComplete);
      return true;
    case kFingerprintObserver_OnAuthScanDone_Name:
      var params = reader.decodeStruct(FingerprintObserver_OnAuthScanDone_Params);
      this.onAuthScanDone(params.scanResult, params.matches);
      return true;
    case kFingerprintObserver_OnSessionFailed_Name:
      var params = reader.decodeStruct(FingerprintObserver_OnSessionFailed_Params);
      this.onSessionFailed();
      return true;
    default:
      return false;
    }
  };

  FingerprintObserverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFingerprintObserverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFingerprintObserver_OnRestarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FingerprintObserver_OnRestarted_Params;
      break;
      case kFingerprintObserver_OnEnrollScanDone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FingerprintObserver_OnEnrollScanDone_Params;
      break;
      case kFingerprintObserver_OnAuthScanDone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FingerprintObserver_OnAuthScanDone_Params;
      break;
      case kFingerprintObserver_OnSessionFailed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FingerprintObserver_OnSessionFailed_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFingerprintObserverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FingerprintObserver = {
    name: 'device.mojom.FingerprintObserver',
    kVersion: 0,
    ptrClass: FingerprintObserverPtr,
    proxyClass: FingerprintObserverProxy,
    stubClass: FingerprintObserverStub,
    validateRequest: validateFingerprintObserverRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/fingerprint.mojom',
    fuzzMethods: {
      onRestarted: {
        params: FingerprintObserver_OnRestarted_Params,
      },
      onEnrollScanDone: {
        params: FingerprintObserver_OnEnrollScanDone_Params,
      },
      onAuthScanDone: {
        params: FingerprintObserver_OnAuthScanDone_Params,
      },
      onSessionFailed: {
        params: FingerprintObserver_OnSessionFailed_Params,
      },
    },
  };
  FingerprintObserverStub.prototype.validator = validateFingerprintObserverRequest;
  FingerprintObserverProxy.prototype.validator = null;
  var kFingerprint_GetRecordsForUser_Name = 2093471378;
  var kFingerprint_StartEnrollSession_Name = 1939138072;
  var kFingerprint_CancelCurrentEnrollSession_Name = 1833128757;
  var kFingerprint_RequestRecordLabel_Name = 951521425;
  var kFingerprint_SetRecordLabel_Name = 616300526;
  var kFingerprint_RemoveRecord_Name = 1159774024;
  var kFingerprint_StartAuthSession_Name = 719413913;
  var kFingerprint_EndCurrentAuthSession_Name = 437531533;
  var kFingerprint_DestroyAllRecords_Name = 50311172;
  var kFingerprint_AddFingerprintObserver_Name = 1763374939;
  var kFingerprint_RequestType_Name = 1076552549;

  function FingerprintPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Fingerprint,
                                                   handleOrPtrInfo);
  }

  function FingerprintAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Fingerprint, associatedInterfacePtrInfo);
  }

  FingerprintAssociatedPtr.prototype =
      Object.create(FingerprintPtr.prototype);
  FingerprintAssociatedPtr.prototype.constructor =
      FingerprintAssociatedPtr;

  function FingerprintProxy(receiver) {
    this.receiver_ = receiver;
  }
  FingerprintPtr.prototype.getRecordsForUser = function() {
    return FingerprintProxy.prototype.getRecordsForUser
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.getRecordsForUser = function(userId) {
    var params_ = new Fingerprint_GetRecordsForUser_Params();
    params_.userId = userId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_GetRecordsForUser_Name,
          codec.align(Fingerprint_GetRecordsForUser_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_GetRecordsForUser_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_GetRecordsForUser_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.startEnrollSession = function() {
    return FingerprintProxy.prototype.startEnrollSession
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.startEnrollSession = function(userId, label) {
    var params_ = new Fingerprint_StartEnrollSession_Params();
    params_.userId = userId;
    params_.label = label;
    var builder = new codec.MessageV0Builder(
        kFingerprint_StartEnrollSession_Name,
        codec.align(Fingerprint_StartEnrollSession_Params.encodedSize));
    builder.encodeStruct(Fingerprint_StartEnrollSession_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FingerprintPtr.prototype.cancelCurrentEnrollSession = function() {
    return FingerprintProxy.prototype.cancelCurrentEnrollSession
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.cancelCurrentEnrollSession = function() {
    var params_ = new Fingerprint_CancelCurrentEnrollSession_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_CancelCurrentEnrollSession_Name,
          codec.align(Fingerprint_CancelCurrentEnrollSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_CancelCurrentEnrollSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_CancelCurrentEnrollSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.requestRecordLabel = function() {
    return FingerprintProxy.prototype.requestRecordLabel
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.requestRecordLabel = function(recordPath) {
    var params_ = new Fingerprint_RequestRecordLabel_Params();
    params_.recordPath = recordPath;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_RequestRecordLabel_Name,
          codec.align(Fingerprint_RequestRecordLabel_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_RequestRecordLabel_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_RequestRecordLabel_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.setRecordLabel = function() {
    return FingerprintProxy.prototype.setRecordLabel
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.setRecordLabel = function(recordPath, newLabel) {
    var params_ = new Fingerprint_SetRecordLabel_Params();
    params_.recordPath = recordPath;
    params_.newLabel = newLabel;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_SetRecordLabel_Name,
          codec.align(Fingerprint_SetRecordLabel_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_SetRecordLabel_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_SetRecordLabel_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.removeRecord = function() {
    return FingerprintProxy.prototype.removeRecord
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.removeRecord = function(recordPath) {
    var params_ = new Fingerprint_RemoveRecord_Params();
    params_.recordPath = recordPath;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_RemoveRecord_Name,
          codec.align(Fingerprint_RemoveRecord_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_RemoveRecord_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_RemoveRecord_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.startAuthSession = function() {
    return FingerprintProxy.prototype.startAuthSession
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.startAuthSession = function() {
    var params_ = new Fingerprint_StartAuthSession_Params();
    var builder = new codec.MessageV0Builder(
        kFingerprint_StartAuthSession_Name,
        codec.align(Fingerprint_StartAuthSession_Params.encodedSize));
    builder.encodeStruct(Fingerprint_StartAuthSession_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FingerprintPtr.prototype.endCurrentAuthSession = function() {
    return FingerprintProxy.prototype.endCurrentAuthSession
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.endCurrentAuthSession = function() {
    var params_ = new Fingerprint_EndCurrentAuthSession_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_EndCurrentAuthSession_Name,
          codec.align(Fingerprint_EndCurrentAuthSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_EndCurrentAuthSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_EndCurrentAuthSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.destroyAllRecords = function() {
    return FingerprintProxy.prototype.destroyAllRecords
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.destroyAllRecords = function() {
    var params_ = new Fingerprint_DestroyAllRecords_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_DestroyAllRecords_Name,
          codec.align(Fingerprint_DestroyAllRecords_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_DestroyAllRecords_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_DestroyAllRecords_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FingerprintPtr.prototype.addFingerprintObserver = function() {
    return FingerprintProxy.prototype.addFingerprintObserver
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.addFingerprintObserver = function(observer) {
    var params_ = new Fingerprint_AddFingerprintObserver_Params();
    params_.observer = observer;
    var builder = new codec.MessageV0Builder(
        kFingerprint_AddFingerprintObserver_Name,
        codec.align(Fingerprint_AddFingerprintObserver_Params.encodedSize));
    builder.encodeStruct(Fingerprint_AddFingerprintObserver_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FingerprintPtr.prototype.requestType = function() {
    return FingerprintProxy.prototype.requestType
        .apply(this.ptr.getProxy(), arguments);
  };

  FingerprintProxy.prototype.requestType = function() {
    var params_ = new Fingerprint_RequestType_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFingerprint_RequestType_Name,
          codec.align(Fingerprint_RequestType_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Fingerprint_RequestType_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Fingerprint_RequestType_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FingerprintStub(delegate) {
    this.delegate_ = delegate;
  }
  FingerprintStub.prototype.getRecordsForUser = function(userId) {
    return this.delegate_ && this.delegate_.getRecordsForUser && this.delegate_.getRecordsForUser(userId);
  }
  FingerprintStub.prototype.startEnrollSession = function(userId, label) {
    return this.delegate_ && this.delegate_.startEnrollSession && this.delegate_.startEnrollSession(userId, label);
  }
  FingerprintStub.prototype.cancelCurrentEnrollSession = function() {
    return this.delegate_ && this.delegate_.cancelCurrentEnrollSession && this.delegate_.cancelCurrentEnrollSession();
  }
  FingerprintStub.prototype.requestRecordLabel = function(recordPath) {
    return this.delegate_ && this.delegate_.requestRecordLabel && this.delegate_.requestRecordLabel(recordPath);
  }
  FingerprintStub.prototype.setRecordLabel = function(recordPath, newLabel) {
    return this.delegate_ && this.delegate_.setRecordLabel && this.delegate_.setRecordLabel(recordPath, newLabel);
  }
  FingerprintStub.prototype.removeRecord = function(recordPath) {
    return this.delegate_ && this.delegate_.removeRecord && this.delegate_.removeRecord(recordPath);
  }
  FingerprintStub.prototype.startAuthSession = function() {
    return this.delegate_ && this.delegate_.startAuthSession && this.delegate_.startAuthSession();
  }
  FingerprintStub.prototype.endCurrentAuthSession = function() {
    return this.delegate_ && this.delegate_.endCurrentAuthSession && this.delegate_.endCurrentAuthSession();
  }
  FingerprintStub.prototype.destroyAllRecords = function() {
    return this.delegate_ && this.delegate_.destroyAllRecords && this.delegate_.destroyAllRecords();
  }
  FingerprintStub.prototype.addFingerprintObserver = function(observer) {
    return this.delegate_ && this.delegate_.addFingerprintObserver && this.delegate_.addFingerprintObserver(observer);
  }
  FingerprintStub.prototype.requestType = function() {
    return this.delegate_ && this.delegate_.requestType && this.delegate_.requestType();
  }

  FingerprintStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFingerprint_StartEnrollSession_Name:
      var params = reader.decodeStruct(Fingerprint_StartEnrollSession_Params);
      this.startEnrollSession(params.userId, params.label);
      return true;
    case kFingerprint_StartAuthSession_Name:
      var params = reader.decodeStruct(Fingerprint_StartAuthSession_Params);
      this.startAuthSession();
      return true;
    case kFingerprint_AddFingerprintObserver_Name:
      var params = reader.decodeStruct(Fingerprint_AddFingerprintObserver_Params);
      this.addFingerprintObserver(params.observer);
      return true;
    default:
      return false;
    }
  };

  FingerprintStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFingerprint_GetRecordsForUser_Name:
      var params = reader.decodeStruct(Fingerprint_GetRecordsForUser_Params);
      this.getRecordsForUser(params.userId).then(function(response) {
        var responseParams =
            new Fingerprint_GetRecordsForUser_ResponseParams();
        responseParams.records = response.records;
        var builder = new codec.MessageV1Builder(
            kFingerprint_GetRecordsForUser_Name,
            codec.align(Fingerprint_GetRecordsForUser_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_GetRecordsForUser_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_CancelCurrentEnrollSession_Name:
      var params = reader.decodeStruct(Fingerprint_CancelCurrentEnrollSession_Params);
      this.cancelCurrentEnrollSession().then(function(response) {
        var responseParams =
            new Fingerprint_CancelCurrentEnrollSession_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kFingerprint_CancelCurrentEnrollSession_Name,
            codec.align(Fingerprint_CancelCurrentEnrollSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_CancelCurrentEnrollSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_RequestRecordLabel_Name:
      var params = reader.decodeStruct(Fingerprint_RequestRecordLabel_Params);
      this.requestRecordLabel(params.recordPath).then(function(response) {
        var responseParams =
            new Fingerprint_RequestRecordLabel_ResponseParams();
        responseParams.label = response.label;
        var builder = new codec.MessageV1Builder(
            kFingerprint_RequestRecordLabel_Name,
            codec.align(Fingerprint_RequestRecordLabel_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_RequestRecordLabel_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_SetRecordLabel_Name:
      var params = reader.decodeStruct(Fingerprint_SetRecordLabel_Params);
      this.setRecordLabel(params.recordPath, params.newLabel).then(function(response) {
        var responseParams =
            new Fingerprint_SetRecordLabel_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kFingerprint_SetRecordLabel_Name,
            codec.align(Fingerprint_SetRecordLabel_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_SetRecordLabel_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_RemoveRecord_Name:
      var params = reader.decodeStruct(Fingerprint_RemoveRecord_Params);
      this.removeRecord(params.recordPath).then(function(response) {
        var responseParams =
            new Fingerprint_RemoveRecord_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kFingerprint_RemoveRecord_Name,
            codec.align(Fingerprint_RemoveRecord_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_RemoveRecord_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_EndCurrentAuthSession_Name:
      var params = reader.decodeStruct(Fingerprint_EndCurrentAuthSession_Params);
      this.endCurrentAuthSession().then(function(response) {
        var responseParams =
            new Fingerprint_EndCurrentAuthSession_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kFingerprint_EndCurrentAuthSession_Name,
            codec.align(Fingerprint_EndCurrentAuthSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_EndCurrentAuthSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_DestroyAllRecords_Name:
      var params = reader.decodeStruct(Fingerprint_DestroyAllRecords_Params);
      this.destroyAllRecords().then(function(response) {
        var responseParams =
            new Fingerprint_DestroyAllRecords_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kFingerprint_DestroyAllRecords_Name,
            codec.align(Fingerprint_DestroyAllRecords_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_DestroyAllRecords_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kFingerprint_RequestType_Name:
      var params = reader.decodeStruct(Fingerprint_RequestType_Params);
      this.requestType().then(function(response) {
        var responseParams =
            new Fingerprint_RequestType_ResponseParams();
        responseParams.type = response.type;
        var builder = new codec.MessageV1Builder(
            kFingerprint_RequestType_Name,
            codec.align(Fingerprint_RequestType_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Fingerprint_RequestType_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFingerprintRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFingerprint_GetRecordsForUser_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_GetRecordsForUser_Params;
      break;
      case kFingerprint_StartEnrollSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Fingerprint_StartEnrollSession_Params;
      break;
      case kFingerprint_CancelCurrentEnrollSession_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_CancelCurrentEnrollSession_Params;
      break;
      case kFingerprint_RequestRecordLabel_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_RequestRecordLabel_Params;
      break;
      case kFingerprint_SetRecordLabel_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_SetRecordLabel_Params;
      break;
      case kFingerprint_RemoveRecord_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_RemoveRecord_Params;
      break;
      case kFingerprint_StartAuthSession_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Fingerprint_StartAuthSession_Params;
      break;
      case kFingerprint_EndCurrentAuthSession_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_EndCurrentAuthSession_Params;
      break;
      case kFingerprint_DestroyAllRecords_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_DestroyAllRecords_Params;
      break;
      case kFingerprint_AddFingerprintObserver_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Fingerprint_AddFingerprintObserver_Params;
      break;
      case kFingerprint_RequestType_Name:
        if (message.expectsResponse())
          paramsClass = Fingerprint_RequestType_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFingerprintResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFingerprint_GetRecordsForUser_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_GetRecordsForUser_ResponseParams;
        break;
      case kFingerprint_CancelCurrentEnrollSession_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_CancelCurrentEnrollSession_ResponseParams;
        break;
      case kFingerprint_RequestRecordLabel_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_RequestRecordLabel_ResponseParams;
        break;
      case kFingerprint_SetRecordLabel_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_SetRecordLabel_ResponseParams;
        break;
      case kFingerprint_RemoveRecord_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_RemoveRecord_ResponseParams;
        break;
      case kFingerprint_EndCurrentAuthSession_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_EndCurrentAuthSession_ResponseParams;
        break;
      case kFingerprint_DestroyAllRecords_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_DestroyAllRecords_ResponseParams;
        break;
      case kFingerprint_RequestType_Name:
        if (message.isResponse())
          paramsClass = Fingerprint_RequestType_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Fingerprint = {
    name: 'device.mojom.Fingerprint',
    kVersion: 0,
    ptrClass: FingerprintPtr,
    proxyClass: FingerprintProxy,
    stubClass: FingerprintStub,
    validateRequest: validateFingerprintRequest,
    validateResponse: validateFingerprintResponse,
    mojomId: 'services/device/public/mojom/fingerprint.mojom',
    fuzzMethods: {
      getRecordsForUser: {
        params: Fingerprint_GetRecordsForUser_Params,
      },
      startEnrollSession: {
        params: Fingerprint_StartEnrollSession_Params,
      },
      cancelCurrentEnrollSession: {
        params: Fingerprint_CancelCurrentEnrollSession_Params,
      },
      requestRecordLabel: {
        params: Fingerprint_RequestRecordLabel_Params,
      },
      setRecordLabel: {
        params: Fingerprint_SetRecordLabel_Params,
      },
      removeRecord: {
        params: Fingerprint_RemoveRecord_Params,
      },
      startAuthSession: {
        params: Fingerprint_StartAuthSession_Params,
      },
      endCurrentAuthSession: {
        params: Fingerprint_EndCurrentAuthSession_Params,
      },
      destroyAllRecords: {
        params: Fingerprint_DestroyAllRecords_Params,
      },
      addFingerprintObserver: {
        params: Fingerprint_AddFingerprintObserver_Params,
      },
      requestType: {
        params: Fingerprint_RequestType_Params,
      },
    },
  };
  FingerprintStub.prototype.validator = validateFingerprintRequest;
  FingerprintProxy.prototype.validator = validateFingerprintResponse;
  exports.FingerprintObserver = FingerprintObserver;
  exports.FingerprintObserverPtr = FingerprintObserverPtr;
  exports.FingerprintObserverAssociatedPtr = FingerprintObserverAssociatedPtr;
  exports.Fingerprint = Fingerprint;
  exports.FingerprintPtr = FingerprintPtr;
  exports.FingerprintAssociatedPtr = FingerprintAssociatedPtr;
})();