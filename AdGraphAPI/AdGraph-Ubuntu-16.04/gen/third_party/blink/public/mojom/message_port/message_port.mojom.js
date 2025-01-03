// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/message_port/message_port.mojom';
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
  var big_buffer$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/big_buffer.mojom', '../../../../../mojo/public/mojom/base/big_buffer.mojom.js');
  }
  var array_buffer_contents$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom', '../array_buffer/array_buffer_contents.mojom.js');
  }
  var serialized_blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/serialized_blob.mojom', '../blob/serialized_blob.mojom.js');
  }
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../../../skia/public/interfaces/bitmap.mojom.js');
  }



  function CloneableMessage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CloneableMessage.prototype.initDefaults_ = function() {
    this.encodedMessage = null;
    this.blobs = null;
    this.stackTraceId = 0;
    this.stackTraceDebuggerIdFirst = 0;
    this.stackTraceDebuggerIdSecond = 0;
  };
  CloneableMessage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CloneableMessage.generate = function(generator_) {
    var generated = new CloneableMessage;
    generated.encodedMessage = generator_.generateUnion(mojoBase.mojom.BigBuffer, false);
    generated.blobs = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.SerializedBlob, false);
    });
    generated.stackTraceId = generator_.generateUint64();
    generated.stackTraceDebuggerIdFirst = generator_.generateInt64();
    generated.stackTraceDebuggerIdSecond = generator_.generateInt64();
    return generated;
  };

  CloneableMessage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.encodedMessage = mutator_.mutateUnion(mojoBase.mojom.BigBuffer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.blobs = mutator_.mutateArray(this.blobs, function(val) {
        return mutator_.mutateStruct(blink.mojom.SerializedBlob, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.stackTraceId = mutator_.mutateUint64(this.stackTraceId);
    }
    if (mutator_.chooseMutateField()) {
      this.stackTraceDebuggerIdFirst = mutator_.mutateInt64(this.stackTraceDebuggerIdFirst);
    }
    if (mutator_.chooseMutateField()) {
      this.stackTraceDebuggerIdSecond = mutator_.mutateInt64(this.stackTraceDebuggerIdSecond);
    }
    return this;
  };
  CloneableMessage.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.encodedMessage !== null) {
      Array.prototype.push.apply(handles, this.encodedMessage.getHandleDeps());
    }
    if (this.blobs !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.blobs.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  CloneableMessage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CloneableMessage.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.encodedMessage.setHandlesInternal_(handles, idx);
    this.blobs.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  CloneableMessage.validate = function(messageValidator, offset) {
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


    // validate CloneableMessage.encodedMessage
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 0, big_buffer$.BigBuffer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CloneableMessage.blobs
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(serialized_blob$.SerializedBlob), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  CloneableMessage.encodedSize = codec.kStructHeaderSize + 48;

  CloneableMessage.decode = function(decoder) {
    var packed;
    var val = new CloneableMessage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.encodedMessage = decoder.decodeStruct(big_buffer$.BigBuffer);
    val.blobs = decoder.decodeArrayPointer(new codec.PointerTo(serialized_blob$.SerializedBlob));
    val.stackTraceId = decoder.decodeStruct(codec.Uint64);
    val.stackTraceDebuggerIdFirst = decoder.decodeStruct(codec.Int64);
    val.stackTraceDebuggerIdSecond = decoder.decodeStruct(codec.Int64);
    return val;
  };

  CloneableMessage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CloneableMessage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(big_buffer$.BigBuffer, val.encodedMessage);
    encoder.encodeArrayPointer(new codec.PointerTo(serialized_blob$.SerializedBlob), val.blobs);
    encoder.encodeStruct(codec.Uint64, val.stackTraceId);
    encoder.encodeStruct(codec.Int64, val.stackTraceDebuggerIdFirst);
    encoder.encodeStruct(codec.Int64, val.stackTraceDebuggerIdSecond);
  };
  function TransferableMessage(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TransferableMessage.prototype.initDefaults_ = function() {
    this.message = null;
    this.ports = null;
    this.arrayBufferContentsArray = null;
    this.imageBitmapContentsArray = null;
    this.hasUserGesture = false;
  };
  TransferableMessage.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TransferableMessage.generate = function(generator_) {
    var generated = new TransferableMessage;
    generated.message = generator_.generateStruct(blink.mojom.CloneableMessage, false);
    generated.ports = generator_.generateArray(function() {
      return generator_.generateMessagePipe(false);
    });
    generated.arrayBufferContentsArray = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.SerializedArrayBufferContents, false);
    });
    generated.imageBitmapContentsArray = generator_.generateArray(function() {
      return generator_.generateStruct(skia.mojom.Bitmap, false);
    });
    generated.hasUserGesture = generator_.generateBool();
    return generated;
  };

  TransferableMessage.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.message = mutator_.mutateStruct(blink.mojom.CloneableMessage, false);
    }
    if (mutator_.chooseMutateField()) {
      this.ports = mutator_.mutateArray(this.ports, function(val) {
        return mutator_.mutateMessagePipe(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.arrayBufferContentsArray = mutator_.mutateArray(this.arrayBufferContentsArray, function(val) {
        return mutator_.mutateStruct(blink.mojom.SerializedArrayBufferContents, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.imageBitmapContentsArray = mutator_.mutateArray(this.imageBitmapContentsArray, function(val) {
        return mutator_.mutateStruct(skia.mojom.Bitmap, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.hasUserGesture = mutator_.mutateBool(this.hasUserGesture);
    }
    return this;
  };
  TransferableMessage.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.message !== null) {
      Array.prototype.push.apply(handles, this.message.getHandleDeps());
    }
    if (this.ports !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.ports.map(function(val) {
        if (val) {
          return ["handle<message_pipe>"];
        }
        return [];
      })));
    }
    if (this.arrayBufferContentsArray !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.arrayBufferContentsArray.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    if (this.imageBitmapContentsArray !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.imageBitmapContentsArray.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  TransferableMessage.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TransferableMessage.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.message.setHandlesInternal_(handles, idx);
    this.ports.forEach(function(val) {
      val = handles[idx++];;
    });
    this.arrayBufferContentsArray.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    this.imageBitmapContentsArray.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  TransferableMessage.validate = function(messageValidator, offset) {
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


    // validate TransferableMessage.message
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CloneableMessage, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferableMessage.ports
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Handle, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferableMessage.arrayBufferContentsArray
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(array_buffer_contents$.SerializedArrayBufferContents), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate TransferableMessage.imageBitmapContentsArray
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(bitmap$.Bitmap), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  TransferableMessage.encodedSize = codec.kStructHeaderSize + 40;

  TransferableMessage.decode = function(decoder) {
    var packed;
    var val = new TransferableMessage();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStructPointer(CloneableMessage);
    val.ports = decoder.decodeArrayPointer(codec.Handle);
    val.arrayBufferContentsArray = decoder.decodeArrayPointer(new codec.PointerTo(array_buffer_contents$.SerializedArrayBufferContents));
    val.imageBitmapContentsArray = decoder.decodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap));
    packed = decoder.readUint8();
    val.hasUserGesture = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  TransferableMessage.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TransferableMessage.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CloneableMessage, val.message);
    encoder.encodeArrayPointer(codec.Handle, val.ports);
    encoder.encodeArrayPointer(new codec.PointerTo(array_buffer_contents$.SerializedArrayBufferContents), val.arrayBufferContentsArray);
    encoder.encodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap), val.imageBitmapContentsArray);
    packed = 0;
    packed |= (val.hasUserGesture & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.CloneableMessage = CloneableMessage;
  exports.TransferableMessage = TransferableMessage;
})();