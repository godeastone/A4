// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/buffer_types.mojom';
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


  var BufferFormat = {};
  BufferFormat.ATC = 0;
  BufferFormat.ATCIA = BufferFormat.ATC + 1;
  BufferFormat.DXT1 = BufferFormat.ATCIA + 1;
  BufferFormat.DXT5 = BufferFormat.DXT1 + 1;
  BufferFormat.ETC1 = BufferFormat.DXT5 + 1;
  BufferFormat.R_8 = BufferFormat.ETC1 + 1;
  BufferFormat.R_16 = BufferFormat.R_8 + 1;
  BufferFormat.RG_88 = BufferFormat.R_16 + 1;
  BufferFormat.BGR_565 = BufferFormat.RG_88 + 1;
  BufferFormat.RGBA_4444 = BufferFormat.BGR_565 + 1;
  BufferFormat.RGBX_8888 = BufferFormat.RGBA_4444 + 1;
  BufferFormat.RGBA_8888 = BufferFormat.RGBX_8888 + 1;
  BufferFormat.BGRX_8888 = BufferFormat.RGBA_8888 + 1;
  BufferFormat.BGRX_1010102 = BufferFormat.BGRX_8888 + 1;
  BufferFormat.RGBX_1010102 = BufferFormat.BGRX_1010102 + 1;
  BufferFormat.BGRA_8888 = BufferFormat.RGBX_1010102 + 1;
  BufferFormat.RGBA_F16 = BufferFormat.BGRA_8888 + 1;
  BufferFormat.YVU_420 = BufferFormat.RGBA_F16 + 1;
  BufferFormat.YUV_420_BIPLANAR = BufferFormat.YVU_420 + 1;
  BufferFormat.UYVY_422 = BufferFormat.YUV_420_BIPLANAR + 1;
  BufferFormat.LAST = BufferFormat.UYVY_422;

  BufferFormat.isKnownEnumValue = function(value) {
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
      return true;
    }
    return false;
  };

  BufferFormat.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var BufferUsage = {};
  BufferUsage.GPU_READ = 0;
  BufferUsage.SCANOUT = BufferUsage.GPU_READ + 1;
  BufferUsage.SCANOUT_CAMERA_READ_WRITE = BufferUsage.SCANOUT + 1;
  BufferUsage.CAMERA_AND_CPU_READ_WRITE = BufferUsage.SCANOUT_CAMERA_READ_WRITE + 1;
  BufferUsage.SCANOUT_CPU_READ_WRITE = BufferUsage.CAMERA_AND_CPU_READ_WRITE + 1;
  BufferUsage.SCANOUT_VDA_WRITE = BufferUsage.SCANOUT_CPU_READ_WRITE + 1;
  BufferUsage.GPU_READ_CPU_READ_WRITE = BufferUsage.SCANOUT_VDA_WRITE + 1;
  BufferUsage.GPU_READ_CPU_READ_WRITE_PERSISTENT = BufferUsage.GPU_READ_CPU_READ_WRITE + 1;
  BufferUsage.LAST = BufferUsage.GPU_READ_CPU_READ_WRITE_PERSISTENT;

  BufferUsage.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    }
    return false;
  };

  BufferUsage.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var GpuMemoryBufferType = {};
  GpuMemoryBufferType.EMPTY_BUFFER = 0;
  GpuMemoryBufferType.SHARED_MEMORY_BUFFER = GpuMemoryBufferType.EMPTY_BUFFER + 1;
  GpuMemoryBufferType.IO_SURFACE_BUFFER = GpuMemoryBufferType.SHARED_MEMORY_BUFFER + 1;
  GpuMemoryBufferType.NATIVE_PIXMAP = GpuMemoryBufferType.IO_SURFACE_BUFFER + 1;
  GpuMemoryBufferType.DXGI_SHARED_HANDLE = GpuMemoryBufferType.NATIVE_PIXMAP + 1;
  GpuMemoryBufferType.ANDROID_HARDWARE_BUFFER = GpuMemoryBufferType.DXGI_SHARED_HANDLE + 1;

  GpuMemoryBufferType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    }
    return false;
  };

  GpuMemoryBufferType.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function BufferUsageAndFormat(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BufferUsageAndFormat.prototype.initDefaults_ = function() {
    this.usage = 0;
    this.format = 0;
  };
  BufferUsageAndFormat.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BufferUsageAndFormat.generate = function(generator_) {
    var generated = new BufferUsageAndFormat;
    generated.usage = generator_.generateEnum(0, 7);
    generated.format = generator_.generateEnum(0, 19);
    return generated;
  };

  BufferUsageAndFormat.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.usage = mutator_.mutateEnum(this.usage, 0, 7);
    }
    if (mutator_.chooseMutateField()) {
      this.format = mutator_.mutateEnum(this.format, 0, 19);
    }
    return this;
  };
  BufferUsageAndFormat.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BufferUsageAndFormat.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BufferUsageAndFormat.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BufferUsageAndFormat.validate = function(messageValidator, offset) {
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


    // validate BufferUsageAndFormat.usage
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, BufferUsage);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BufferUsageAndFormat.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, BufferFormat);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BufferUsageAndFormat.encodedSize = codec.kStructHeaderSize + 8;

  BufferUsageAndFormat.decode = function(decoder) {
    var packed;
    var val = new BufferUsageAndFormat();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.usage = decoder.decodeStruct(codec.Int32);
    val.format = decoder.decodeStruct(codec.Int32);
    return val;
  };

  BufferUsageAndFormat.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BufferUsageAndFormat.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.usage);
    encoder.encodeStruct(codec.Int32, val.format);
  };
  function GpuMemoryBufferId(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuMemoryBufferId.prototype.initDefaults_ = function() {
    this.id = 0;
  };
  GpuMemoryBufferId.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuMemoryBufferId.generate = function(generator_) {
    var generated = new GpuMemoryBufferId;
    generated.id = generator_.generateInt32();
    return generated;
  };

  GpuMemoryBufferId.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateInt32(this.id);
    }
    return this;
  };
  GpuMemoryBufferId.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  GpuMemoryBufferId.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuMemoryBufferId.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  GpuMemoryBufferId.validate = function(messageValidator, offset) {
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

  GpuMemoryBufferId.encodedSize = codec.kStructHeaderSize + 8;

  GpuMemoryBufferId.decode = function(decoder) {
    var packed;
    var val = new GpuMemoryBufferId();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuMemoryBufferId.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuMemoryBufferId.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.id);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NativePixmapPlane(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativePixmapPlane.prototype.initDefaults_ = function() {
    this.stride = 0;
    this.offset = 0;
    this.size = 0;
    this.modifier = 0;
  };
  NativePixmapPlane.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativePixmapPlane.generate = function(generator_) {
    var generated = new NativePixmapPlane;
    generated.stride = generator_.generateUint32();
    generated.offset = generator_.generateInt32();
    generated.size = generator_.generateUint64();
    generated.modifier = generator_.generateUint64();
    return generated;
  };

  NativePixmapPlane.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.stride = mutator_.mutateUint32(this.stride);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateInt32(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateUint64(this.size);
    }
    if (mutator_.chooseMutateField()) {
      this.modifier = mutator_.mutateUint64(this.modifier);
    }
    return this;
  };
  NativePixmapPlane.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  NativePixmapPlane.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativePixmapPlane.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  NativePixmapPlane.validate = function(messageValidator, offset) {
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





    return validator.validationError.NONE;
  };

  NativePixmapPlane.encodedSize = codec.kStructHeaderSize + 24;

  NativePixmapPlane.decode = function(decoder) {
    var packed;
    var val = new NativePixmapPlane();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.stride = decoder.decodeStruct(codec.Uint32);
    val.offset = decoder.decodeStruct(codec.Int32);
    val.size = decoder.decodeStruct(codec.Uint64);
    val.modifier = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  NativePixmapPlane.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativePixmapPlane.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.stride);
    encoder.encodeStruct(codec.Int32, val.offset);
    encoder.encodeStruct(codec.Uint64, val.size);
    encoder.encodeStruct(codec.Uint64, val.modifier);
  };
  function NativePixmapHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NativePixmapHandle.prototype.initDefaults_ = function() {
    this.fds = null;
    this.planes = null;
  };
  NativePixmapHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  NativePixmapHandle.generate = function(generator_) {
    var generated = new NativePixmapHandle;
    generated.fds = generator_.generateArray(function() {
      return generator_.generateHandle(false);
    });
    generated.planes = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.NativePixmapPlane, false);
    });
    return generated;
  };

  NativePixmapHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.fds = mutator_.mutateArray(this.fds, function(val) {
        return mutator_.mutateHandle(val, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.planes = mutator_.mutateArray(this.planes, function(val) {
        return mutator_.mutateStruct(gfx.mojom.NativePixmapPlane, false);
      });
    }
    return this;
  };
  NativePixmapHandle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.fds !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.fds.map(function(val) {
        if (val) {
          return ["None"];
        }
        return [];
      })));
    }
    return handles;
  };

  NativePixmapHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  NativePixmapHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.fds.forEach(function(val) {
      val = handles[idx++];;
    });
    return idx;
  };

  NativePixmapHandle.validate = function(messageValidator, offset) {
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


    // validate NativePixmapHandle.fds
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Handle, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NativePixmapHandle.planes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(NativePixmapPlane), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NativePixmapHandle.encodedSize = codec.kStructHeaderSize + 16;

  NativePixmapHandle.decode = function(decoder) {
    var packed;
    var val = new NativePixmapHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fds = decoder.decodeArrayPointer(codec.Handle);
    val.planes = decoder.decodeArrayPointer(new codec.PointerTo(NativePixmapPlane));
    return val;
  };

  NativePixmapHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NativePixmapHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Handle, val.fds);
    encoder.encodeArrayPointer(new codec.PointerTo(NativePixmapPlane), val.planes);
  };
  function GpuMemoryBufferHandle(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  GpuMemoryBufferHandle.prototype.initDefaults_ = function() {
    this.type = 0;
    this.sharedMemoryHandle = null;
    this.id = null;
    this.offset = 0;
    this.stride = 0;
    this.nativePixmapHandle = null;
    this.machPort = null;
  };
  GpuMemoryBufferHandle.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  GpuMemoryBufferHandle.generate = function(generator_) {
    var generated = new GpuMemoryBufferHandle;
    generated.type = generator_.generateEnum(0, 5);
    generated.id = generator_.generateStruct(gfx.mojom.GpuMemoryBufferId, false);
    generated.sharedMemoryHandle = generator_.generateSharedBuffer(true);
    generated.offset = generator_.generateUint32();
    generated.stride = generator_.generateUint32();
    generated.nativePixmapHandle = generator_.generateStruct(gfx.mojom.NativePixmapHandle, true);
    generated.machPort = generator_.generateHandle(true);
    return generated;
  };

  GpuMemoryBufferHandle.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.type = mutator_.mutateEnum(this.type, 0, 5);
    }
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateStruct(gfx.mojom.GpuMemoryBufferId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sharedMemoryHandle = mutator_.mutateSharedBuffer(this.sharedMemoryHandle, true);
    }
    if (mutator_.chooseMutateField()) {
      this.offset = mutator_.mutateUint32(this.offset);
    }
    if (mutator_.chooseMutateField()) {
      this.stride = mutator_.mutateUint32(this.stride);
    }
    if (mutator_.chooseMutateField()) {
      this.nativePixmapHandle = mutator_.mutateStruct(gfx.mojom.NativePixmapHandle, true);
    }
    if (mutator_.chooseMutateField()) {
      this.machPort = mutator_.mutateHandle(this.machPort, true);
    }
    return this;
  };
  GpuMemoryBufferHandle.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sharedMemoryHandle !== null) {
      Array.prototype.push.apply(handles, ["handle<shared_buffer>"]);
    }
    if (this.nativePixmapHandle !== null) {
      Array.prototype.push.apply(handles, this.nativePixmapHandle.getHandleDeps());
    }
    if (this.machPort !== null) {
      Array.prototype.push.apply(handles, ["None"]);
    }
    return handles;
  };

  GpuMemoryBufferHandle.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  GpuMemoryBufferHandle.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sharedMemoryHandle = handles[idx++];;
    idx = this.nativePixmapHandle.setHandlesInternal_(handles, idx);
    this.machPort = handles[idx++];;
    return idx;
  };

  GpuMemoryBufferHandle.validate = function(messageValidator, offset) {
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


    // validate GpuMemoryBufferHandle.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, GpuMemoryBufferType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuMemoryBufferHandle.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, GpuMemoryBufferId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuMemoryBufferHandle.sharedMemoryHandle
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;




    // validate GpuMemoryBufferHandle.nativePixmapHandle
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, NativePixmapHandle, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate GpuMemoryBufferHandle.machPort
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  GpuMemoryBufferHandle.encodedSize = codec.kStructHeaderSize + 40;

  GpuMemoryBufferHandle.decode = function(decoder) {
    var packed;
    var val = new GpuMemoryBufferHandle();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type = decoder.decodeStruct(codec.Int32);
    val.sharedMemoryHandle = decoder.decodeStruct(codec.NullableHandle);
    val.id = decoder.decodeStructPointer(GpuMemoryBufferId);
    val.offset = decoder.decodeStruct(codec.Uint32);
    val.stride = decoder.decodeStruct(codec.Uint32);
    val.nativePixmapHandle = decoder.decodeStructPointer(NativePixmapHandle);
    val.machPort = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  GpuMemoryBufferHandle.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(GpuMemoryBufferHandle.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.NullableHandle, val.sharedMemoryHandle);
    encoder.encodeStructPointer(GpuMemoryBufferId, val.id);
    encoder.encodeStruct(codec.Uint32, val.offset);
    encoder.encodeStruct(codec.Uint32, val.stride);
    encoder.encodeStructPointer(NativePixmapHandle, val.nativePixmapHandle);
    encoder.encodeStruct(codec.NullableHandle, val.machPort);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.BufferFormat = BufferFormat;
  exports.BufferUsage = BufferUsage;
  exports.GpuMemoryBufferType = GpuMemoryBufferType;
  exports.BufferUsageAndFormat = BufferUsageAndFormat;
  exports.GpuMemoryBufferId = GpuMemoryBufferId;
  exports.NativePixmapPlane = NativePixmapPlane;
  exports.NativePixmapHandle = NativePixmapHandle;
  exports.GpuMemoryBufferHandle = GpuMemoryBufferHandle;
})();