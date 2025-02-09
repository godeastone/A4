// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/ca_layer_params.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gfx.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../geometry/mojo/geometry.mojom.js');
  }



  function CALayerParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CALayerParams.prototype.initDefaults_ = function() {
    this.isEmpty = false;
    this.scaleFactor = 0;
    this.content = null;
    this.pixelSize = null;
  };
  CALayerParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CALayerParams.generate = function(generator_) {
    var generated = new CALayerParams;
    generated.isEmpty = generator_.generateBool();
    generated.content = generator_.generateUnion(gfx.mojom.CALayerContent, false);
    generated.pixelSize = generator_.generateStruct(gfx.mojom.Size, false);
    generated.scaleFactor = generator_.generateFloat();
    return generated;
  };

  CALayerParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.isEmpty = mutator_.mutateBool(this.isEmpty);
    }
    if (mutator_.chooseMutateField()) {
      this.content = mutator_.mutateUnion(gfx.mojom.CALayerContent, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pixelSize = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    if (mutator_.chooseMutateField()) {
      this.scaleFactor = mutator_.mutateFloat(this.scaleFactor);
    }
    return this;
  };
  CALayerParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.content !== null) {
      Array.prototype.push.apply(handles, this.content.getHandleDeps());
    }
    return handles;
  };

  CALayerParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CALayerParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.content.setHandlesInternal_(handles, idx);
    return idx;
  };

  CALayerParams.validate = function(messageValidator, offset) {
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



    // validate CALayerParams.content
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 8, CALayerContent, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CALayerParams.pixelSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CALayerParams.encodedSize = codec.kStructHeaderSize + 32;

  CALayerParams.decode = function(decoder) {
    var packed;
    var val = new CALayerParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isEmpty = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.scaleFactor = decoder.decodeStruct(codec.Float);
    val.content = decoder.decodeStruct(CALayerContent);
    val.pixelSize = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  CALayerParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CALayerParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isEmpty & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Float, val.scaleFactor);
    encoder.encodeStruct(CALayerContent, val.content);
    encoder.encodeStructPointer(geometry$.Size, val.pixelSize);
  };

  function CALayerContent(value) {
    this.initDefault_();
    this.initValue_(value);
  }


  CALayerContent.Tags = {
    caContextId: 0,
    ioSurfaceMachPort: 1,
  };

  CALayerContent.prototype.initDefault_ = function() {
    this.$data = null;
    this.$tag = undefined;
  }

  CALayerContent.prototype.initValue_ = function(value) {
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
        "caContextId",
        "ioSurfaceMachPort",
    ];

    if (fields.indexOf(keys[0]) < 0) {
      throw new ReferenceError(keys[0] + " is not a CALayerContent member.");

    }

    this[keys[0]] = value[keys[0]];
  }
  CALayerContent.generate = function(generator_) {
    var generated = new CALayerContent;
    var generators = [
      {
        field: "caContextId",

        generator: function() { return generator_.generateUint32(); },
      },
      {
        field: "ioSurfaceMachPort",

        generator: function() { return generator_.generateHandle(false); },
      },
    ];

    var result = generator_.generateUnionField(generators);
    generated[result.field] = result.value;
    return generated;
  }

  CALayerContent.prototype.mutate = function(mutator_) {
    var mutators = [
      {
        field: "caContextId",

        mutator: function() { return mutator_.mutateUint32(this.caContextId); },
      },
      {
        field: "ioSurfaceMachPort",

        mutator: function() { return mutator_.mutateHandle(this.ioSurfaceMachPort, false); },
      },
    ];

    var result = mutator_.mutateUnionField(this, mutators);
    generated[result.field] = result.value;
    return this;
  }
  CALayerContent.prototype.getHandleDeps = function() {
    if (this.$tag == CALayerContent.Tags.ioSurfaceMachPort) {
      return ["None"];
    }
    return [];
  }
  CALayerContent.prototype.setHandles = function() {
    if (this.$tag == CALayerContent.Tags.ioSurfaceMachPort) {
      return this.ioSurfaceMachPort = handles[idx++];;
    }
    return [];
  }
  Object.defineProperty(CALayerContent.prototype, "caContextId", {
    get: function() {
      if (this.$tag != CALayerContent.Tags.caContextId) {
        throw new ReferenceError(
            "CALayerContent.caContextId is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = CALayerContent.Tags.caContextId;
      this.$data = value;
    }
  });
  Object.defineProperty(CALayerContent.prototype, "ioSurfaceMachPort", {
    get: function() {
      if (this.$tag != CALayerContent.Tags.ioSurfaceMachPort) {
        throw new ReferenceError(
            "CALayerContent.ioSurfaceMachPort is not currently set.");
      }
      return this.$data;
    },

    set: function(value) {
      this.$tag = CALayerContent.Tags.ioSurfaceMachPort;
      this.$data = value;
    }
  });


    CALayerContent.encode = function(encoder, val) {
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
        case CALayerContent.Tags.caContextId:
          encoder.encodeStruct(codec.Uint32, val.caContextId);
          break;
        case CALayerContent.Tags.ioSurfaceMachPort:
          encoder.encodeStruct(codec.Handle, val.ioSurfaceMachPort);
          break;
      }
      encoder.align();
    };


    CALayerContent.decode = function(decoder) {
      var size = decoder.readUint32();
      if (size == 0) {
        decoder.readUint32();
        decoder.readUint64();
        return null;
      }

      var result = new CALayerContent();
      var tag = decoder.readUint32();
      switch (tag) {
        case CALayerContent.Tags.caContextId:
          result.caContextId = decoder.decodeStruct(codec.Uint32);
          break;
        case CALayerContent.Tags.ioSurfaceMachPort:
          result.ioSurfaceMachPort = decoder.decodeStruct(codec.Handle);
          break;
      }
      decoder.align();

      return result;
    };


    CALayerContent.validate = function(messageValidator, offset) {
      var size = messageValidator.decodeUnionSize(offset);
      if (size != 16) {
        return validator.validationError.INVALID_UNION_SIZE;
      }

      var tag = messageValidator.decodeUnionTag(offset);
      var data_offset = offset + 8;
      var err;
      switch (tag) {
        case CALayerContent.Tags.caContextId:
          

          break;
        case CALayerContent.Tags.ioSurfaceMachPort:
          

    // validate CALayerContent.ioSurfaceMachPort
    err = messageValidator.validateHandle(data_offset, false)
    if (err !== validator.validationError.NONE)
        return err;
          break;
      }

      return validator.validationError.NONE;
    };

  CALayerContent.encodedSize = 16;
  exports.CALayerParams = CALayerParams;
  exports.CALayerContent = CALayerContent;
})();