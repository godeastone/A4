// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojoBase.mojom');



  function MemoryAllocatorDumpCrossProcessUid(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MemoryAllocatorDumpCrossProcessUid.prototype.initDefaults_ = function() {
    this.value = 0;
  };
  MemoryAllocatorDumpCrossProcessUid.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MemoryAllocatorDumpCrossProcessUid.generate = function(generator_) {
    var generated = new MemoryAllocatorDumpCrossProcessUid;
    generated.value = generator_.generateUint64();
    return generated;
  };

  MemoryAllocatorDumpCrossProcessUid.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.value = mutator_.mutateUint64(this.value);
    }
    return this;
  };
  MemoryAllocatorDumpCrossProcessUid.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MemoryAllocatorDumpCrossProcessUid.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MemoryAllocatorDumpCrossProcessUid.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MemoryAllocatorDumpCrossProcessUid.validate = function(messageValidator, offset) {
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

  MemoryAllocatorDumpCrossProcessUid.encodedSize = codec.kStructHeaderSize + 8;

  MemoryAllocatorDumpCrossProcessUid.decode = function(decoder) {
    var packed;
    var val = new MemoryAllocatorDumpCrossProcessUid();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  MemoryAllocatorDumpCrossProcessUid.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MemoryAllocatorDumpCrossProcessUid.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.value);
  };
  exports.MemoryAllocatorDumpCrossProcessUid = MemoryAllocatorDumpCrossProcessUid;
})();