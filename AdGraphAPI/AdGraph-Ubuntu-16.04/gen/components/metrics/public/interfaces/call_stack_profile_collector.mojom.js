// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/metrics/public/interfaces/call_stack_profile_collector.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('metrics.mojom');
  var file_path$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file_path.mojom', '../../../../mojo/public/mojom/base/file_path.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }


  var Process = {};
  Process.UNKNOWN_PROCESS = 0;
  Process.BROWSER_PROCESS = Process.UNKNOWN_PROCESS + 1;
  Process.RENDERER_PROCESS = Process.BROWSER_PROCESS + 1;
  Process.GPU_PROCESS = Process.RENDERER_PROCESS + 1;
  Process.UTILITY_PROCESS = Process.GPU_PROCESS + 1;
  Process.ZYGOTE_PROCESS = Process.UTILITY_PROCESS + 1;
  Process.SANDBOX_HELPER_PROCESS = Process.ZYGOTE_PROCESS + 1;
  Process.PPAPI_PLUGIN_PROCESS = Process.SANDBOX_HELPER_PROCESS + 1;
  Process.PPAPI_BROKER_PROCESS = Process.PPAPI_PLUGIN_PROCESS + 1;

  Process.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  Process.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Thread = {};
  Thread.UNKNOWN_THREAD = 0;
  Thread.MAIN_THREAD = Thread.UNKNOWN_THREAD + 1;
  Thread.IO_THREAD = Thread.MAIN_THREAD + 1;
  Thread.COMPOSITOR_THREAD = Thread.IO_THREAD + 1;

  Thread.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  Thread.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var Trigger = {};
  Trigger.UNKNOWN = 0;
  Trigger.PROCESS_STARTUP = Trigger.UNKNOWN + 1;
  Trigger.JANKY_TASK = Trigger.PROCESS_STARTUP + 1;
  Trigger.THREAD_HUNG = Trigger.JANKY_TASK + 1;
  Trigger.PERIODIC_COLLECTION = Trigger.THREAD_HUNG + 1;

  Trigger.isKnownEnumValue = function(value) {
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

  Trigger.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var SampleOrderingSpec = {};
  SampleOrderingSpec.MAY_SHUFFLE = 0;
  SampleOrderingSpec.PRESERVE_ORDER = SampleOrderingSpec.MAY_SHUFFLE + 1;

  SampleOrderingSpec.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  SampleOrderingSpec.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CallStackModule(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CallStackModule.prototype.initDefaults_ = function() {
    this.baseAddress = 0;
    this.id = null;
    this.filename = null;
  };
  CallStackModule.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CallStackModule.generate = function(generator_) {
    var generated = new CallStackModule;
    generated.baseAddress = generator_.generateUint64();
    generated.id = generator_.generateString(false);
    generated.filename = generator_.generateStruct(mojoBase.mojom.FilePath, false);
    return generated;
  };

  CallStackModule.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.baseAddress = mutator_.mutateUint64(this.baseAddress);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateString(this.id, false);
    }
    if (mutator_.chooseMutateField()) {
      this.filename = mutator_.mutateStruct(mojoBase.mojom.FilePath, false);
    }
    return this;
  };
  CallStackModule.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CallStackModule.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CallStackModule.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CallStackModule.validate = function(messageValidator, offset) {
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



    // validate CallStackModule.id
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackModule.filename
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, file_path$.FilePath, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CallStackModule.encodedSize = codec.kStructHeaderSize + 24;

  CallStackModule.decode = function(decoder) {
    var packed;
    var val = new CallStackModule();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.baseAddress = decoder.decodeStruct(codec.Uint64);
    val.id = decoder.decodeStruct(codec.String);
    val.filename = decoder.decodeStructPointer(file_path$.FilePath);
    return val;
  };

  CallStackModule.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CallStackModule.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.baseAddress);
    encoder.encodeStruct(codec.String, val.id);
    encoder.encodeStructPointer(file_path$.FilePath, val.filename);
  };
  function CallStackFrame(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CallStackFrame.prototype.initDefaults_ = function() {
    this.instructionPointer = 0;
    this.moduleIndex = 0;
  };
  CallStackFrame.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CallStackFrame.generate = function(generator_) {
    var generated = new CallStackFrame;
    generated.instructionPointer = generator_.generateUint64();
    generated.moduleIndex = generator_.generateUint64();
    return generated;
  };

  CallStackFrame.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.instructionPointer = mutator_.mutateUint64(this.instructionPointer);
    }
    if (mutator_.chooseMutateField()) {
      this.moduleIndex = mutator_.mutateUint64(this.moduleIndex);
    }
    return this;
  };
  CallStackFrame.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CallStackFrame.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CallStackFrame.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CallStackFrame.validate = function(messageValidator, offset) {
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

  CallStackFrame.encodedSize = codec.kStructHeaderSize + 16;

  CallStackFrame.decode = function(decoder) {
    var packed;
    var val = new CallStackFrame();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.instructionPointer = decoder.decodeStruct(codec.Uint64);
    val.moduleIndex = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  CallStackFrame.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CallStackFrame.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.instructionPointer);
    encoder.encodeStruct(codec.Uint64, val.moduleIndex);
  };
  function CallStackSample(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CallStackSample.prototype.initDefaults_ = function() {
    this.frames = null;
    this.processMilestones = 0;
  };
  CallStackSample.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CallStackSample.generate = function(generator_) {
    var generated = new CallStackSample;
    generated.frames = generator_.generateArray(function() {
      return generator_.generateStruct(metrics.mojom.CallStackFrame, false);
    });
    generated.processMilestones = generator_.generateUint32();
    return generated;
  };

  CallStackSample.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frames = mutator_.mutateArray(this.frames, function(val) {
        return mutator_.mutateStruct(metrics.mojom.CallStackFrame, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.processMilestones = mutator_.mutateUint32(this.processMilestones);
    }
    return this;
  };
  CallStackSample.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CallStackSample.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CallStackSample.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CallStackSample.validate = function(messageValidator, offset) {
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


    // validate CallStackSample.frames
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(CallStackFrame), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CallStackSample.encodedSize = codec.kStructHeaderSize + 16;

  CallStackSample.decode = function(decoder) {
    var packed;
    var val = new CallStackSample();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frames = decoder.decodeArrayPointer(new codec.PointerTo(CallStackFrame));
    val.processMilestones = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CallStackSample.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CallStackSample.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(CallStackFrame), val.frames);
    encoder.encodeStruct(codec.Uint32, val.processMilestones);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CallStackProfile(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CallStackProfile.prototype.initDefaults_ = function() {
    this.modules = null;
    this.samples = null;
    this.profileDuration = null;
    this.samplingPeriod = null;
  };
  CallStackProfile.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CallStackProfile.generate = function(generator_) {
    var generated = new CallStackProfile;
    generated.modules = generator_.generateArray(function() {
      return generator_.generateStruct(metrics.mojom.CallStackModule, false);
    });
    generated.samples = generator_.generateArray(function() {
      return generator_.generateStruct(metrics.mojom.CallStackSample, false);
    });
    generated.profileDuration = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.samplingPeriod = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    return generated;
  };

  CallStackProfile.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.modules = mutator_.mutateArray(this.modules, function(val) {
        return mutator_.mutateStruct(metrics.mojom.CallStackModule, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.samples = mutator_.mutateArray(this.samples, function(val) {
        return mutator_.mutateStruct(metrics.mojom.CallStackSample, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.profileDuration = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.samplingPeriod = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    return this;
  };
  CallStackProfile.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CallStackProfile.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CallStackProfile.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CallStackProfile.validate = function(messageValidator, offset) {
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


    // validate CallStackProfile.modules
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(CallStackModule), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfile.samples
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(CallStackSample), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfile.profileDuration
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfile.samplingPeriod
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CallStackProfile.encodedSize = codec.kStructHeaderSize + 32;

  CallStackProfile.decode = function(decoder) {
    var packed;
    var val = new CallStackProfile();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.modules = decoder.decodeArrayPointer(new codec.PointerTo(CallStackModule));
    val.samples = decoder.decodeArrayPointer(new codec.PointerTo(CallStackSample));
    val.profileDuration = decoder.decodeStructPointer(time$.TimeDelta);
    val.samplingPeriod = decoder.decodeStructPointer(time$.TimeDelta);
    return val;
  };

  CallStackProfile.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CallStackProfile.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(CallStackModule), val.modules);
    encoder.encodeArrayPointer(new codec.PointerTo(CallStackSample), val.samples);
    encoder.encodeStructPointer(time$.TimeDelta, val.profileDuration);
    encoder.encodeStructPointer(time$.TimeDelta, val.samplingPeriod);
  };
  function CallStackProfileParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CallStackProfileParams.prototype.initDefaults_ = function() {
    this.process = 0;
    this.thread = 0;
    this.trigger = 0;
    this.orderingSpec = 0;
  };
  CallStackProfileParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CallStackProfileParams.generate = function(generator_) {
    var generated = new CallStackProfileParams;
    generated.process = generator_.generateEnum(0, 8);
    generated.thread = generator_.generateEnum(0, 3);
    generated.trigger = generator_.generateEnum(0, 4);
    generated.orderingSpec = generator_.generateEnum(0, 1);
    return generated;
  };

  CallStackProfileParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.process = mutator_.mutateEnum(this.process, 0, 8);
    }
    if (mutator_.chooseMutateField()) {
      this.thread = mutator_.mutateEnum(this.thread, 0, 3);
    }
    if (mutator_.chooseMutateField()) {
      this.trigger = mutator_.mutateEnum(this.trigger, 0, 4);
    }
    if (mutator_.chooseMutateField()) {
      this.orderingSpec = mutator_.mutateEnum(this.orderingSpec, 0, 1);
    }
    return this;
  };
  CallStackProfileParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CallStackProfileParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CallStackProfileParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CallStackProfileParams.validate = function(messageValidator, offset) {
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


    // validate CallStackProfileParams.process
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Process);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfileParams.thread
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, Thread);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfileParams.trigger
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, Trigger);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfileParams.orderingSpec
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, SampleOrderingSpec);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CallStackProfileParams.encodedSize = codec.kStructHeaderSize + 16;

  CallStackProfileParams.decode = function(decoder) {
    var packed;
    var val = new CallStackProfileParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.process = decoder.decodeStruct(codec.Int32);
    val.thread = decoder.decodeStruct(codec.Int32);
    val.trigger = decoder.decodeStruct(codec.Int32);
    val.orderingSpec = decoder.decodeStruct(codec.Int32);
    return val;
  };

  CallStackProfileParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CallStackProfileParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.process);
    encoder.encodeStruct(codec.Int32, val.thread);
    encoder.encodeStruct(codec.Int32, val.trigger);
    encoder.encodeStruct(codec.Int32, val.orderingSpec);
  };
  function CallStackProfileCollector_Collect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CallStackProfileCollector_Collect_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.startTimestamp = null;
    this.profiles = null;
  };
  CallStackProfileCollector_Collect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CallStackProfileCollector_Collect_Params.generate = function(generator_) {
    var generated = new CallStackProfileCollector_Collect_Params;
    generated.params = generator_.generateStruct(metrics.mojom.CallStackProfileParams, false);
    generated.startTimestamp = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    generated.profiles = generator_.generateArray(function() {
      return generator_.generateStruct(metrics.mojom.CallStackProfile, false);
    });
    return generated;
  };

  CallStackProfileCollector_Collect_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(metrics.mojom.CallStackProfileParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.startTimestamp = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    if (mutator_.chooseMutateField()) {
      this.profiles = mutator_.mutateArray(this.profiles, function(val) {
        return mutator_.mutateStruct(metrics.mojom.CallStackProfile, false);
      });
    }
    return this;
  };
  CallStackProfileCollector_Collect_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CallStackProfileCollector_Collect_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CallStackProfileCollector_Collect_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CallStackProfileCollector_Collect_Params.validate = function(messageValidator, offset) {
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


    // validate CallStackProfileCollector_Collect_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CallStackProfileParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfileCollector_Collect_Params.startTimestamp
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CallStackProfileCollector_Collect_Params.profiles
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(CallStackProfile), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CallStackProfileCollector_Collect_Params.encodedSize = codec.kStructHeaderSize + 24;

  CallStackProfileCollector_Collect_Params.decode = function(decoder) {
    var packed;
    var val = new CallStackProfileCollector_Collect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(CallStackProfileParams);
    val.startTimestamp = decoder.decodeStructPointer(time$.TimeTicks);
    val.profiles = decoder.decodeArrayPointer(new codec.PointerTo(CallStackProfile));
    return val;
  };

  CallStackProfileCollector_Collect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CallStackProfileCollector_Collect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CallStackProfileParams, val.params);
    encoder.encodeStructPointer(time$.TimeTicks, val.startTimestamp);
    encoder.encodeArrayPointer(new codec.PointerTo(CallStackProfile), val.profiles);
  };
  var kCallStackProfileCollector_Collect_Name = 1243129886;

  function CallStackProfileCollectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CallStackProfileCollector,
                                                   handleOrPtrInfo);
  }

  function CallStackProfileCollectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CallStackProfileCollector, associatedInterfacePtrInfo);
  }

  CallStackProfileCollectorAssociatedPtr.prototype =
      Object.create(CallStackProfileCollectorPtr.prototype);
  CallStackProfileCollectorAssociatedPtr.prototype.constructor =
      CallStackProfileCollectorAssociatedPtr;

  function CallStackProfileCollectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  CallStackProfileCollectorPtr.prototype.collect = function() {
    return CallStackProfileCollectorProxy.prototype.collect
        .apply(this.ptr.getProxy(), arguments);
  };

  CallStackProfileCollectorProxy.prototype.collect = function(params, startTimestamp, profiles) {
    var params_ = new CallStackProfileCollector_Collect_Params();
    params_.params = params;
    params_.startTimestamp = startTimestamp;
    params_.profiles = profiles;
    var builder = new codec.MessageV0Builder(
        kCallStackProfileCollector_Collect_Name,
        codec.align(CallStackProfileCollector_Collect_Params.encodedSize));
    builder.encodeStruct(CallStackProfileCollector_Collect_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function CallStackProfileCollectorStub(delegate) {
    this.delegate_ = delegate;
  }
  CallStackProfileCollectorStub.prototype.collect = function(params, startTimestamp, profiles) {
    return this.delegate_ && this.delegate_.collect && this.delegate_.collect(params, startTimestamp, profiles);
  }

  CallStackProfileCollectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCallStackProfileCollector_Collect_Name:
      var params = reader.decodeStruct(CallStackProfileCollector_Collect_Params);
      this.collect(params.params, params.startTimestamp, params.profiles);
      return true;
    default:
      return false;
    }
  };

  CallStackProfileCollectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateCallStackProfileCollectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCallStackProfileCollector_Collect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = CallStackProfileCollector_Collect_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCallStackProfileCollectorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var CallStackProfileCollector = {
    name: 'metrics.mojom.CallStackProfileCollector',
    kVersion: 0,
    ptrClass: CallStackProfileCollectorPtr,
    proxyClass: CallStackProfileCollectorProxy,
    stubClass: CallStackProfileCollectorStub,
    validateRequest: validateCallStackProfileCollectorRequest,
    validateResponse: null,
    mojomId: 'components/metrics/public/interfaces/call_stack_profile_collector.mojom',
    fuzzMethods: {
      collect: {
        params: CallStackProfileCollector_Collect_Params,
      },
    },
  };
  CallStackProfileCollectorStub.prototype.validator = validateCallStackProfileCollectorRequest;
  CallStackProfileCollectorProxy.prototype.validator = null;
  exports.Process = Process;
  exports.Thread = Thread;
  exports.Trigger = Trigger;
  exports.SampleOrderingSpec = SampleOrderingSpec;
  exports.CallStackModule = CallStackModule;
  exports.CallStackFrame = CallStackFrame;
  exports.CallStackSample = CallStackSample;
  exports.CallStackProfile = CallStackProfile;
  exports.CallStackProfileParams = CallStackProfileParams;
  exports.CallStackProfileCollector = CallStackProfileCollector;
  exports.CallStackProfileCollectorPtr = CallStackProfileCollectorPtr;
  exports.CallStackProfileCollectorAssociatedPtr = CallStackProfileCollectorAssociatedPtr;
})();