// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/load_timing_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }



  function LoadTimingInfoConnectTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LoadTimingInfoConnectTiming.prototype.initDefaults_ = function() {
    this.dnsStart = null;
    this.dnsEnd = null;
    this.connectStart = null;
    this.connectEnd = null;
    this.sslStart = null;
    this.sslEnd = null;
  };
  LoadTimingInfoConnectTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LoadTimingInfoConnectTiming.generate = function(generator_) {
    var generated = new LoadTimingInfoConnectTiming;
    generated.dnsStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.dnsEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.connectStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.connectEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.sslStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.sslEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  LoadTimingInfoConnectTiming.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.dnsStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.dnsEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.connectStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.connectEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sslStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sslEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  LoadTimingInfoConnectTiming.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LoadTimingInfoConnectTiming.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LoadTimingInfoConnectTiming.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LoadTimingInfoConnectTiming.validate = function(messageValidator, offset) {
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


    // validate LoadTimingInfoConnectTiming.dnsStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfoConnectTiming.dnsEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfoConnectTiming.connectStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfoConnectTiming.connectEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfoConnectTiming.sslStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfoConnectTiming.sslEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LoadTimingInfoConnectTiming.encodedSize = codec.kStructHeaderSize + 48;

  LoadTimingInfoConnectTiming.decode = function(decoder) {
    var packed;
    var val = new LoadTimingInfoConnectTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dnsStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.dnsEnd = decoder.decodeStructPointer(time$.TimeTicks);
    val.connectStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.connectEnd = decoder.decodeStructPointer(time$.TimeTicks);
    val.sslStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.sslEnd = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  LoadTimingInfoConnectTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LoadTimingInfoConnectTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.dnsStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.dnsEnd);
    encoder.encodeStructPointer(time$.TimeTicks, val.connectStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.connectEnd);
    encoder.encodeStructPointer(time$.TimeTicks, val.sslStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.sslEnd);
  };
  function LoadTimingInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LoadTimingInfo.prototype.initDefaults_ = function() {
    this.socketReused = false;
    this.socketLogId = 0;
    this.requestStartTime = null;
    this.requestStart = null;
    this.proxyResolveStart = null;
    this.proxyResolveEnd = null;
    this.connectTiming = null;
    this.sendStart = null;
    this.sendEnd = null;
    this.receiveHeadersEnd = null;
    this.pushStart = null;
    this.pushEnd = null;
  };
  LoadTimingInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  LoadTimingInfo.generate = function(generator_) {
    var generated = new LoadTimingInfo;
    generated.socketReused = generator_.generateBool();
    generated.socketLogId = generator_.generateUint32();
    generated.requestStartTime = generator_.generateStruct(mojoBase.mojom.Time, false);
    generated.requestStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.proxyResolveStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.proxyResolveEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.connectTiming = generator_.generateStruct(content.mojom.LoadTimingInfoConnectTiming, false);
    generated.sendStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.sendEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.receiveHeadersEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.pushStart = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.pushEnd = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  LoadTimingInfo.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.socketReused = mutator_.mutateBool(this.socketReused);
    }
    if (mutator_.chooseMutateField()) {
      this.socketLogId = mutator_.mutateUint32(this.socketLogId);
    }
    if (mutator_.chooseMutateField()) {
      this.requestStartTime = mutator_.mutateStruct(mojoBase.mojom.Time, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyResolveStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyResolveEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.connectTiming = mutator_.mutateStruct(content.mojom.LoadTimingInfoConnectTiming, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sendStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sendEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.receiveHeadersEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pushStart = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pushEnd = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  LoadTimingInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  LoadTimingInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  LoadTimingInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  LoadTimingInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 96}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;




    // validate LoadTimingInfo.requestStartTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.Time, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.requestStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.proxyResolveStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.proxyResolveEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.connectTiming
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, LoadTimingInfoConnectTiming, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.sendStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.sendEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.receiveHeadersEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.pushStart
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate LoadTimingInfo.pushEnd
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 80, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LoadTimingInfo.encodedSize = codec.kStructHeaderSize + 88;

  LoadTimingInfo.decode = function(decoder) {
    var packed;
    var val = new LoadTimingInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.socketReused = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.socketLogId = decoder.decodeStruct(codec.Uint32);
    val.requestStartTime = decoder.decodeStructPointer(time$.Time);
    val.requestStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.proxyResolveStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.proxyResolveEnd = decoder.decodeStructPointer(time$.TimeTicks);
    val.connectTiming = decoder.decodeStructPointer(LoadTimingInfoConnectTiming);
    val.sendStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.sendEnd = decoder.decodeStructPointer(time$.TimeTicks);
    val.receiveHeadersEnd = decoder.decodeStructPointer(time$.TimeTicks);
    val.pushStart = decoder.decodeStructPointer(time$.TimeTicks);
    val.pushEnd = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  LoadTimingInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LoadTimingInfo.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.socketReused & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.socketLogId);
    encoder.encodeStructPointer(time$.Time, val.requestStartTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.requestStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.proxyResolveStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.proxyResolveEnd);
    encoder.encodeStructPointer(LoadTimingInfoConnectTiming, val.connectTiming);
    encoder.encodeStructPointer(time$.TimeTicks, val.sendStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.sendEnd);
    encoder.encodeStructPointer(time$.TimeTicks, val.receiveHeadersEnd);
    encoder.encodeStructPointer(time$.TimeTicks, val.pushStart);
    encoder.encodeStructPointer(time$.TimeTicks, val.pushEnd);
  };
  exports.LoadTimingInfoConnectTiming = LoadTimingInfoConnectTiming;
  exports.LoadTimingInfo = LoadTimingInfo;
})();