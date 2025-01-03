// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/interfaces/bindings/interface_control_messages.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojo.interfaceControl');


  var kRunMessageId = 0xFFFFFFFF;
  var kRunOrClosePipeMessageId = 0xFFFFFFFE;

  function RunMessageParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RunMessageParams.prototype.initDefaults_ = function() {
    this.input = null;
  };
  RunMessageParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RunMessageParams.generate = function(generator_) {
    var generated = new RunMessageParams;
    generated.input = generator_.generateUnion(mojo.interfaceControl.RunInput, false);
    return generated;
  };

  RunMessageParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.input = mutator_.mutateUnion(mojo.interfaceControl.RunInput, false);
    }
    return this;
  };
  RunMessageParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RunMessageParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RunMessageParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RunMessageParams.validate = function(messageValidator, offset) {
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


    // validate RunMessageParams.input
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, RunInput, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RunMessageParams.encodedSize = codec.kStructHeaderSize + 16;

  RunMessageParams.decode = function(decoder) {
    var packed;
    var val = new RunMessageParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.input = decoder.decodeStruct(RunInput);
    return val;
  };

  RunMessageParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RunMessageParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(RunInput, val.input);
  };
  function RunResponseMessageParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RunResponseMessageParams.prototype.initDefaults_ = function() {
    this.output = null;
  };
  RunResponseMessageParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RunResponseMessageParams.generate = function(generator_) {
    var generated = new RunResponseMessageParams;
    generated.output = generator_.generateUnion(mojo.interfaceControl.RunOutput, true);
    return generated;
  };

  RunResponseMessageParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.output = mutator_.mutateUnion(mojo.interfaceControl.RunOutput, true);
    }
    return this;
  };
  RunResponseMessageParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RunResponseMessageParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RunResponseMessageParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RunResponseMessageParams.validate = function(messageValidator, offset) {
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


    // validate RunResponseMessageParams.output
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, RunOutput, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RunResponseMessageParams.encodedSize = codec.kStructHeaderSize + 16;

  RunResponseMessageParams.decode = function(decoder) {
    var packed;
    var val = new RunResponseMessageParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.output = decoder.decodeStruct(RunOutput);
    return val;
  };

  RunResponseMessageParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RunResponseMessageParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(RunOutput, val.output);
  };
  function QueryVersion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QueryVersion.prototype.initDefaults_ = function() {
  };
  QueryVersion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QueryVersion.generate = function(generator_) {
    var generated = new QueryVersion;
    return generated;
  };

  QueryVersion.prototype.mutate = function(mutator_) {
    return this;
  };
  QueryVersion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QueryVersion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QueryVersion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QueryVersion.validate = function(messageValidator, offset) {
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

  QueryVersion.encodedSize = codec.kStructHeaderSize + 0;

  QueryVersion.decode = function(decoder) {
    var packed;
    var val = new QueryVersion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  QueryVersion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QueryVersion.encodedSize);
    encoder.writeUint32(0);
  };
  function QueryVersionResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  QueryVersionResult.prototype.initDefaults_ = function() {
    this.version = 0;
  };
  QueryVersionResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  QueryVersionResult.generate = function(generator_) {
    var generated = new QueryVersionResult;
    generated.version = generator_.generateUint32();
    return generated;
  };

  QueryVersionResult.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateUint32(this.version);
    }
    return this;
  };
  QueryVersionResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  QueryVersionResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  QueryVersionResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  QueryVersionResult.validate = function(messageValidator, offset) {
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

  QueryVersionResult.encodedSize = codec.kStructHeaderSize + 8;

  QueryVersionResult.decode = function(decoder) {
    var packed;
    var val = new QueryVersionResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  QueryVersionResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(QueryVersionResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FlushForTesting(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FlushForTesting.prototype.initDefaults_ = function() {
  };
  FlushForTesting.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FlushForTesting.generate = function(generator_) {
    var generated = new FlushForTesting;
    return generated;
  };

  FlushForTesting.prototype.mutate = function(mutator_) {
    return this;
  };
  FlushForTesting.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FlushForTesting.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FlushForTesting.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FlushForTesting.validate = function(messageValidator, offset) {
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

  FlushForTesting.encodedSize = codec.kStructHeaderSize + 0;

  FlushForTesting.decode = function(decoder) {
    var packed;
    var val = new FlushForTesting();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FlushForTesting.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FlushForTesting.encodedSize);
    encoder.writeUint32(0);
  };
  function RunOrClosePipeMessageParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RunOrClosePipeMessageParams.prototype.initDefaults_ = function() {
    this.input = null;
  };
  RunOrClosePipeMessageParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RunOrClosePipeMessageParams.generate = function(generator_) {
    var generated = new RunOrClosePipeMessageParams;
    generated.input = generator_.generateUnion(mojo.interfaceControl.RunOrClosePipeInput, false);
    return generated;
  };

  RunOrClosePipeMessageParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.input = mutator_.mutateUnion(mojo.interfaceControl.RunOrClosePipeInput, false);
    }
    return this;
  };
  RunOrClosePipeMessageParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RunOrClosePipeMessageParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RunOrClosePipeMessageParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RunOrClosePipeMessageParams.validate = function(messageValidator, offset) {
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


    // validate RunOrClosePipeMessageParams.input
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, RunOrClosePipeInput, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RunOrClosePipeMessageParams.encodedSize = codec.kStructHeaderSize + 16;

  RunOrClosePipeMessageParams.decode = function(decoder) {
    var packed;
    var val = new RunOrClosePipeMessageParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.input = decoder.decodeStruct(RunOrClosePipeInput);
    return val;
  };

  RunOrClosePipeMessageParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RunOrClosePipeMessageParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(RunOrClosePipeInput, val.input);
  };
  function RequireVersion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RequireVersion.prototype.initDefaults_ = function() {
    this.version = 0;
  };
  RequireVersion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RequireVersion.generate = function(generator_) {
    var generated = new RequireVersion;
    generated.version = generator_.generateUint32();
    return generated;
  };

  RequireVersion.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.version = mutator_.mutateUint32(this.version);
    }
    return this;
  };
  RequireVersion.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RequireVersion.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RequireVersion.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RequireVersion.validate = function(messageValidator, offset) {
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

  RequireVersion.encodedSize = codec.kStructHeaderSize + 8;

  RequireVersion.decode = function(decoder) {
    var packed;
    var val = new RequireVersion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.version = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  RequireVersion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RequireVersion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.version);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function RunInput(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  RunInput.Tags = {
    queryVersion: 0,
    flushForTesting: 1,
  };

  RunInput.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  RunInput.prototype.initValue_ = function(value) {
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
        "queryVersion",
        "flushForTesting",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a RunInput member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  RunInput.generate = function(generator_) {
    var generated = new RunInput;
    var generators = [
      {
        field: "queryVersion",

        generator: function() { return generator_.generateStruct(mojo.interfaceControl.QueryVersion, false); },
      },
      {
        field: "flushForTesting",

        generator: function() { return generator_.generateStruct(mojo.interfaceControl.FlushForTesting, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  RunInput.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "queryVersion",

        mutator: function() { return mutator_.mutateStruct(mojo.interfaceControl.QueryVersion, false); },
      },
      {
        field: "flushForTesting",

        mutator: function() { return mutator_.mutateStruct(mojo.interfaceControl.FlushForTesting, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  RunInput.prototype.getHandleDeps = function() {
    return [];
  }
  RunInput.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(RunInput.prototype, "queryVersion", {
    get: function() {
      if (this.$tag != RunInput.Tags.queryVersion) {
        throw new ReferenceError(
            "RunInput.queryVersion is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RunInput.Tags.queryVersion;
      this.$data = value;
    }
  });
  Object.defineProperty(RunInput.prototype, "flushForTesting", {
    get: function() {
      if (this.$tag != RunInput.Tags.flushForTesting) {
        throw new ReferenceError(
            "RunInput.flushForTesting is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RunInput.Tags.flushForTesting;
      this.$data = value;
    }
  });


    RunInput.encode = function(encoder, val) {
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
        case RunInput.Tags.queryVersion:
          encoder.encodeStructPointer(QueryVersion, val.queryVersion);
          break;
        case RunInput.Tags.flushForTesting:
          encoder.encodeStructPointer(FlushForTesting, val.flushForTesting);
          break;
      }
      encoder.align();
    };


    RunInput.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new RunInput();
      var tag = decoder.readUint32();
      switch (tag) {
        case RunInput.Tags.queryVersion:
          result.queryVersion = decoder.decodeStructPointer(QueryVersion);
          break;
        case RunInput.Tags.flushForTesting:
          result.flushForTesting = decoder.decodeStructPointer(FlushForTesting);
          break;
      }
      decoder.align();

      return result;
    };


    RunInput.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case RunInput.Tags.queryVersion:
          

    // validate RunInput.queryVersion
    err = messageValidator.validateStructPointer(data_offset, QueryVersion, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
        case RunInput.Tags.flushForTesting:
          

    // validate RunInput.flushForTesting
    err = messageValidator.validateStructPointer(data_offset, FlushForTesting, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  RunInput.encodedSize = 16;

  function RunOutput(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  RunOutput.Tags = {
    queryVersionResult: 0,
  };

  RunOutput.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  RunOutput.prototype.initValue_ = function(value) {
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
        "queryVersionResult",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a RunOutput member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  RunOutput.generate = function(generator_) {
    var generated = new RunOutput;
    var generators = [
      {
        field: "queryVersionResult",

        generator: function() { return generator_.generateStruct(mojo.interfaceControl.QueryVersionResult, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  RunOutput.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "queryVersionResult",

        mutator: function() { return mutator_.mutateStruct(mojo.interfaceControl.QueryVersionResult, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  RunOutput.prototype.getHandleDeps = function() {
    return [];
  }
  RunOutput.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(RunOutput.prototype, "queryVersionResult", {
    get: function() {
      if (this.$tag != RunOutput.Tags.queryVersionResult) {
        throw new ReferenceError(
            "RunOutput.queryVersionResult is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RunOutput.Tags.queryVersionResult;
      this.$data = value;
    }
  });


    RunOutput.encode = function(encoder, val) {
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
        case RunOutput.Tags.queryVersionResult:
          encoder.encodeStructPointer(QueryVersionResult, val.queryVersionResult);
          break;
      }
      encoder.align();
    };


    RunOutput.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new RunOutput();
      var tag = decoder.readUint32();
      switch (tag) {
        case RunOutput.Tags.queryVersionResult:
          result.queryVersionResult = decoder.decodeStructPointer(QueryVersionResult);
          break;
      }
      decoder.align();

      return result;
    };


    RunOutput.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case RunOutput.Tags.queryVersionResult:
          

    // validate RunOutput.queryVersionResult
    err = messageValidator.validateStructPointer(data_offset, QueryVersionResult, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  RunOutput.encodedSize = 16;

  function RunOrClosePipeInput(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  RunOrClosePipeInput.Tags = {
    requireVersion: 0,
  };

  RunOrClosePipeInput.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  RunOrClosePipeInput.prototype.initValue_ = function(value) {
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
        "requireVersion",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a RunOrClosePipeInput member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  RunOrClosePipeInput.generate = function(generator_) {
    var generated = new RunOrClosePipeInput;
    var generators = [
      {
        field: "requireVersion",

        generator: function() { return generator_.generateStruct(mojo.interfaceControl.RequireVersion, false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  RunOrClosePipeInput.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "requireVersion",

        mutator: function() { return mutator_.mutateStruct(mojo.interfaceControl.RequireVersion, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  RunOrClosePipeInput.prototype.getHandleDeps = function() {
    return [];
  }
  RunOrClosePipeInput.prototype.setHandles = function() {
    return [];
  }
  Object.defineProperty(RunOrClosePipeInput.prototype, "requireVersion", {
    get: function() {
      if (this.$tag != RunOrClosePipeInput.Tags.requireVersion) {
        throw new ReferenceError(
            "RunOrClosePipeInput.requireVersion is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = RunOrClosePipeInput.Tags.requireVersion;
      this.$data = value;
    }
  });


    RunOrClosePipeInput.encode = function(encoder, val) {
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
        case RunOrClosePipeInput.Tags.requireVersion:
          encoder.encodeStructPointer(RequireVersion, val.requireVersion);
          break;
      }
      encoder.align();
    };


    RunOrClosePipeInput.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new RunOrClosePipeInput();
      var tag = decoder.readUint32();
      switch (tag) {
        case RunOrClosePipeInput.Tags.requireVersion:
          result.requireVersion = decoder.decodeStructPointer(RequireVersion);
          break;
      }
      decoder.align();

      return result;
    };


    RunOrClosePipeInput.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case RunOrClosePipeInput.Tags.requireVersion:
          

    // validate RunOrClosePipeInput.requireVersion
    err = messageValidator.validateStructPointer(data_offset, RequireVersion, false);
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  RunOrClosePipeInput.encodedSize = 16;
  exports.kRunMessageId = kRunMessageId;
  exports.kRunOrClosePipeMessageId = kRunOrClosePipeMessageId;
  exports.RunMessageParams = RunMessageParams;
  exports.RunResponseMessageParams = RunResponseMessageParams;
  exports.QueryVersion = QueryVersion;
  exports.QueryVersionResult = QueryVersionResult;
  exports.FlushForTesting = FlushForTesting;
  exports.RunOrClosePipeMessageParams = RunOrClosePipeMessageParams;
  exports.RequireVersion = RequireVersion;
  exports.RunInput = RunInput;
  exports.RunOutput = RunOutput;
  exports.RunOrClosePipeInput = RunOrClosePipeInput;
})();