// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/ui/public/interfaces/clipboard.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('ui.mojom');


  var kMimeTypeHTML = "text/html";
  var kMimeTypeMozillaURL = "text/x-moz-url";
  var kMimeTypePNG = "image/png";
  var kMimeTypeRTF = "text/rtf";
  var kMimeTypeText = "text/plain";
  var kMimeTypeURIList = "text/uri-list";
  var kMimeTypeURL = "text/url";

  function Clipboard_GetSequenceNumber_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetSequenceNumber_Params.prototype.initDefaults_ = function() {
    this.clipboardType = 0;
  };
  Clipboard_GetSequenceNumber_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_GetSequenceNumber_Params.generate = function(generator_) {
    var generated = new Clipboard_GetSequenceNumber_Params;
    generated.clipboardType = generator_.generateEnum(0, 1);
    return generated;
  };

  Clipboard_GetSequenceNumber_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clipboardType = mutator_.mutateEnum(this.clipboardType, 0, 1);
    }
    return this;
  };
  Clipboard_GetSequenceNumber_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_GetSequenceNumber_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_GetSequenceNumber_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_GetSequenceNumber_Params.validate = function(messageValidator, offset) {
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


    // validate Clipboard_GetSequenceNumber_Params.clipboardType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Clipboard.Type);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_GetSequenceNumber_Params.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetSequenceNumber_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetSequenceNumber_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboardType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Clipboard_GetSequenceNumber_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetSequenceNumber_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboardType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Clipboard_GetSequenceNumber_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetSequenceNumber_ResponseParams.prototype.initDefaults_ = function() {
    this.sequence = 0;
  };
  Clipboard_GetSequenceNumber_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_GetSequenceNumber_ResponseParams.generate = function(generator_) {
    var generated = new Clipboard_GetSequenceNumber_ResponseParams;
    generated.sequence = generator_.generateUint64();
    return generated;
  };

  Clipboard_GetSequenceNumber_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sequence = mutator_.mutateUint64(this.sequence);
    }
    return this;
  };
  Clipboard_GetSequenceNumber_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_GetSequenceNumber_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_GetSequenceNumber_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_GetSequenceNumber_ResponseParams.validate = function(messageValidator, offset) {
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

  Clipboard_GetSequenceNumber_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetSequenceNumber_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetSequenceNumber_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sequence = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  Clipboard_GetSequenceNumber_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetSequenceNumber_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sequence);
  };
  function Clipboard_GetAvailableMimeTypes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetAvailableMimeTypes_Params.prototype.initDefaults_ = function() {
    this.clipboardTypes = 0;
  };
  Clipboard_GetAvailableMimeTypes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_GetAvailableMimeTypes_Params.generate = function(generator_) {
    var generated = new Clipboard_GetAvailableMimeTypes_Params;
    generated.clipboardTypes = generator_.generateEnum(0, 1);
    return generated;
  };

  Clipboard_GetAvailableMimeTypes_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clipboardTypes = mutator_.mutateEnum(this.clipboardTypes, 0, 1);
    }
    return this;
  };
  Clipboard_GetAvailableMimeTypes_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_GetAvailableMimeTypes_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_GetAvailableMimeTypes_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_GetAvailableMimeTypes_Params.validate = function(messageValidator, offset) {
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


    // validate Clipboard_GetAvailableMimeTypes_Params.clipboardTypes
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Clipboard.Type);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_GetAvailableMimeTypes_Params.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetAvailableMimeTypes_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetAvailableMimeTypes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboardTypes = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Clipboard_GetAvailableMimeTypes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetAvailableMimeTypes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboardTypes);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Clipboard_GetAvailableMimeTypes_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.initDefaults_ = function() {
    this.sequence = 0;
    this.types = null;
  };
  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_GetAvailableMimeTypes_ResponseParams.generate = function(generator_) {
    var generated = new Clipboard_GetAvailableMimeTypes_ResponseParams;
    generated.sequence = generator_.generateUint64();
    generated.types = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sequence = mutator_.mutateUint64(this.sequence);
    }
    if (mutator_.chooseMutateField()) {
      this.types = mutator_.mutateArray(this.types, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Clipboard_GetAvailableMimeTypes_ResponseParams.types
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Clipboard_GetAvailableMimeTypes_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetAvailableMimeTypes_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sequence = decoder.decodeStruct(codec.Uint64);
    val.types = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sequence);
    encoder.encodeArrayPointer(codec.String, val.types);
  };
  function Clipboard_ReadClipboardData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_ReadClipboardData_Params.prototype.initDefaults_ = function() {
    this.clipboardType = 0;
    this.mimeType = null;
  };
  Clipboard_ReadClipboardData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_ReadClipboardData_Params.generate = function(generator_) {
    var generated = new Clipboard_ReadClipboardData_Params;
    generated.clipboardType = generator_.generateEnum(0, 1);
    generated.mimeType = generator_.generateString(false);
    return generated;
  };

  Clipboard_ReadClipboardData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clipboardType = mutator_.mutateEnum(this.clipboardType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.mimeType = mutator_.mutateString(this.mimeType, false);
    }
    return this;
  };
  Clipboard_ReadClipboardData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_ReadClipboardData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_ReadClipboardData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_ReadClipboardData_Params.validate = function(messageValidator, offset) {
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


    // validate Clipboard_ReadClipboardData_Params.clipboardType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Clipboard.Type);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Clipboard_ReadClipboardData_Params.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_ReadClipboardData_Params.encodedSize = codec.kStructHeaderSize + 16;

  Clipboard_ReadClipboardData_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_ReadClipboardData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboardType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mimeType = decoder.decodeStruct(codec.String);
    return val;
  };

  Clipboard_ReadClipboardData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_ReadClipboardData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboardType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.mimeType);
  };
  function Clipboard_ReadClipboardData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_ReadClipboardData_ResponseParams.prototype.initDefaults_ = function() {
    this.sequence = 0;
    this.data = null;
  };
  Clipboard_ReadClipboardData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_ReadClipboardData_ResponseParams.generate = function(generator_) {
    var generated = new Clipboard_ReadClipboardData_ResponseParams;
    generated.sequence = generator_.generateUint64();
    generated.data = generator_.generateArray(function() {
      return generator_.generateUint8();
    });
    return generated;
  };

  Clipboard_ReadClipboardData_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sequence = mutator_.mutateUint64(this.sequence);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateArray(this.data, function(val) {
        return mutator_.mutateUint8(val);
      });
    }
    return this;
  };
  Clipboard_ReadClipboardData_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_ReadClipboardData_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_ReadClipboardData_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_ReadClipboardData_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate Clipboard_ReadClipboardData_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_ReadClipboardData_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Clipboard_ReadClipboardData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_ReadClipboardData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sequence = decoder.decodeStruct(codec.Uint64);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Clipboard_ReadClipboardData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_ReadClipboardData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sequence);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };
  function Clipboard_WriteClipboardData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_WriteClipboardData_Params.prototype.initDefaults_ = function() {
    this.clipboardType = 0;
    this.data = null;
  };
  Clipboard_WriteClipboardData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_WriteClipboardData_Params.generate = function(generator_) {
    var generated = new Clipboard_WriteClipboardData_Params;
    generated.clipboardType = generator_.generateEnum(0, 1);
    generated.data = generator_.generateMap(
      function() {
        return generator_.generateString(false);
      },
      function() {
        return generator_.generateArray(function() {
          return generator_.generateUint8();
        });
      });
    return generated;
  };

  Clipboard_WriteClipboardData_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clipboardType = mutator_.mutateEnum(this.clipboardType, 0, 1);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateMap(this.data,
        function(val) {
          return mutator_.mutateString(val, false);
        },
        function(val) {
          return mutator_.mutateArray(val, function(val) {
            return mutator_.mutateUint8(val);
          });
        });
    }
    return this;
  };
  Clipboard_WriteClipboardData_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_WriteClipboardData_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_WriteClipboardData_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_WriteClipboardData_Params.validate = function(messageValidator, offset) {
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


    // validate Clipboard_WriteClipboardData_Params.clipboardType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, Clipboard.Type);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Clipboard_WriteClipboardData_Params.data
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, true, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_WriteClipboardData_Params.encodedSize = codec.kStructHeaderSize + 16;

  Clipboard_WriteClipboardData_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_WriteClipboardData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboardType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  Clipboard_WriteClipboardData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_WriteClipboardData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboardType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.data);
  };
  function Clipboard_WriteClipboardData_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_WriteClipboardData_ResponseParams.prototype.initDefaults_ = function() {
    this.sequence = 0;
  };
  Clipboard_WriteClipboardData_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Clipboard_WriteClipboardData_ResponseParams.generate = function(generator_) {
    var generated = new Clipboard_WriteClipboardData_ResponseParams;
    generated.sequence = generator_.generateUint64();
    return generated;
  };

  Clipboard_WriteClipboardData_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sequence = mutator_.mutateUint64(this.sequence);
    }
    return this;
  };
  Clipboard_WriteClipboardData_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Clipboard_WriteClipboardData_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Clipboard_WriteClipboardData_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Clipboard_WriteClipboardData_ResponseParams.validate = function(messageValidator, offset) {
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

  Clipboard_WriteClipboardData_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_WriteClipboardData_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_WriteClipboardData_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sequence = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  Clipboard_WriteClipboardData_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_WriteClipboardData_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sequence);
  };
  var kClipboard_GetSequenceNumber_Name = 2145224323;
  var kClipboard_GetAvailableMimeTypes_Name = 2059186955;
  var kClipboard_ReadClipboardData_Name = 519738601;
  var kClipboard_WriteClipboardData_Name = 343034773;

  function ClipboardPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Clipboard,
                                                   handleOrPtrInfo);
  }

  function ClipboardAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Clipboard, associatedInterfacePtrInfo);
  }

  ClipboardAssociatedPtr.prototype =
      Object.create(ClipboardPtr.prototype);
  ClipboardAssociatedPtr.prototype.constructor =
      ClipboardAssociatedPtr;

  function ClipboardProxy(receiver) {
    this.receiver_ = receiver;
  }
  ClipboardPtr.prototype.getSequenceNumber = function() {
    return ClipboardProxy.prototype.getSequenceNumber
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardProxy.prototype.getSequenceNumber = function(clipboardType) {
    var params_ = new Clipboard_GetSequenceNumber_Params();
    params_.clipboardType = clipboardType;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboard_GetSequenceNumber_Name,
          codec.align(Clipboard_GetSequenceNumber_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_GetSequenceNumber_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_GetSequenceNumber_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardPtr.prototype.getAvailableMimeTypes = function() {
    return ClipboardProxy.prototype.getAvailableMimeTypes
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardProxy.prototype.getAvailableMimeTypes = function(clipboardTypes) {
    var params_ = new Clipboard_GetAvailableMimeTypes_Params();
    params_.clipboardTypes = clipboardTypes;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboard_GetAvailableMimeTypes_Name,
          codec.align(Clipboard_GetAvailableMimeTypes_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_GetAvailableMimeTypes_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_GetAvailableMimeTypes_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardPtr.prototype.readClipboardData = function() {
    return ClipboardProxy.prototype.readClipboardData
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardProxy.prototype.readClipboardData = function(clipboardType, mimeType) {
    var params_ = new Clipboard_ReadClipboardData_Params();
    params_.clipboardType = clipboardType;
    params_.mimeType = mimeType;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboard_ReadClipboardData_Name,
          codec.align(Clipboard_ReadClipboardData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_ReadClipboardData_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_ReadClipboardData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardPtr.prototype.writeClipboardData = function() {
    return ClipboardProxy.prototype.writeClipboardData
        .apply(this.ptr.getProxy(), arguments);
  };

  ClipboardProxy.prototype.writeClipboardData = function(clipboardType, data) {
    var params_ = new Clipboard_WriteClipboardData_Params();
    params_.clipboardType = clipboardType;
    params_.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kClipboard_WriteClipboardData_Name,
          codec.align(Clipboard_WriteClipboardData_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_WriteClipboardData_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_WriteClipboardData_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ClipboardStub(delegate) {
    this.delegate_ = delegate;
  }
  ClipboardStub.prototype.getSequenceNumber = function(clipboardType) {
    return this.delegate_ && this.delegate_.getSequenceNumber && this.delegate_.getSequenceNumber(clipboardType);
  }
  ClipboardStub.prototype.getAvailableMimeTypes = function(clipboardTypes) {
    return this.delegate_ && this.delegate_.getAvailableMimeTypes && this.delegate_.getAvailableMimeTypes(clipboardTypes);
  }
  ClipboardStub.prototype.readClipboardData = function(clipboardType, mimeType) {
    return this.delegate_ && this.delegate_.readClipboardData && this.delegate_.readClipboardData(clipboardType, mimeType);
  }
  ClipboardStub.prototype.writeClipboardData = function(clipboardType, data) {
    return this.delegate_ && this.delegate_.writeClipboardData && this.delegate_.writeClipboardData(clipboardType, data);
  }

  ClipboardStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ClipboardStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClipboard_GetSequenceNumber_Name:
      var params = reader.decodeStruct(Clipboard_GetSequenceNumber_Params);
      this.getSequenceNumber(params.clipboardType).then(function(response) {
        var responseParams =
            new Clipboard_GetSequenceNumber_ResponseParams();
        responseParams.sequence = response.sequence;
        var builder = new codec.MessageV1Builder(
            kClipboard_GetSequenceNumber_Name,
            codec.align(Clipboard_GetSequenceNumber_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_GetSequenceNumber_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboard_GetAvailableMimeTypes_Name:
      var params = reader.decodeStruct(Clipboard_GetAvailableMimeTypes_Params);
      this.getAvailableMimeTypes(params.clipboardTypes).then(function(response) {
        var responseParams =
            new Clipboard_GetAvailableMimeTypes_ResponseParams();
        responseParams.sequence = response.sequence;
        responseParams.types = response.types;
        var builder = new codec.MessageV1Builder(
            kClipboard_GetAvailableMimeTypes_Name,
            codec.align(Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_GetAvailableMimeTypes_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboard_ReadClipboardData_Name:
      var params = reader.decodeStruct(Clipboard_ReadClipboardData_Params);
      this.readClipboardData(params.clipboardType, params.mimeType).then(function(response) {
        var responseParams =
            new Clipboard_ReadClipboardData_ResponseParams();
        responseParams.sequence = response.sequence;
        responseParams.data = response.data;
        var builder = new codec.MessageV1Builder(
            kClipboard_ReadClipboardData_Name,
            codec.align(Clipboard_ReadClipboardData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_ReadClipboardData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kClipboard_WriteClipboardData_Name:
      var params = reader.decodeStruct(Clipboard_WriteClipboardData_Params);
      this.writeClipboardData(params.clipboardType, params.data).then(function(response) {
        var responseParams =
            new Clipboard_WriteClipboardData_ResponseParams();
        responseParams.sequence = response.sequence;
        var builder = new codec.MessageV1Builder(
            kClipboard_WriteClipboardData_Name,
            codec.align(Clipboard_WriteClipboardData_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_WriteClipboardData_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateClipboardRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClipboard_GetSequenceNumber_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_GetSequenceNumber_Params;
      break;
      case kClipboard_GetAvailableMimeTypes_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_GetAvailableMimeTypes_Params;
      break;
      case kClipboard_ReadClipboardData_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_ReadClipboardData_Params;
      break;
      case kClipboard_WriteClipboardData_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_WriteClipboardData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClipboardResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kClipboard_GetSequenceNumber_Name:
        if (message.isResponse())
          paramsClass = Clipboard_GetSequenceNumber_ResponseParams;
        break;
      case kClipboard_GetAvailableMimeTypes_Name:
        if (message.isResponse())
          paramsClass = Clipboard_GetAvailableMimeTypes_ResponseParams;
        break;
      case kClipboard_ReadClipboardData_Name:
        if (message.isResponse())
          paramsClass = Clipboard_ReadClipboardData_ResponseParams;
        break;
      case kClipboard_WriteClipboardData_Name:
        if (message.isResponse())
          paramsClass = Clipboard_WriteClipboardData_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Clipboard = {
    name: 'ui.mojom.Clipboard',
    kVersion: 0,
    ptrClass: ClipboardPtr,
    proxyClass: ClipboardProxy,
    stubClass: ClipboardStub,
    validateRequest: validateClipboardRequest,
    validateResponse: validateClipboardResponse,
    mojomId: 'services/ui/public/interfaces/clipboard.mojom',
    fuzzMethods: {
      getSequenceNumber: {
        params: Clipboard_GetSequenceNumber_Params,
      },
      getAvailableMimeTypes: {
        params: Clipboard_GetAvailableMimeTypes_Params,
      },
      readClipboardData: {
        params: Clipboard_ReadClipboardData_Params,
      },
      writeClipboardData: {
        params: Clipboard_WriteClipboardData_Params,
      },
    },
  };
  Clipboard.Type = {};
  Clipboard.Type.COPY_PASTE = 0;
  Clipboard.Type.SELECTION = 1;

  Clipboard.Type.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  Clipboard.Type.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  ClipboardStub.prototype.validator = validateClipboardRequest;
  ClipboardProxy.prototype.validator = validateClipboardResponse;
  exports.kMimeTypeHTML = kMimeTypeHTML;
  exports.kMimeTypeMozillaURL = kMimeTypeMozillaURL;
  exports.kMimeTypePNG = kMimeTypePNG;
  exports.kMimeTypeRTF = kMimeTypeRTF;
  exports.kMimeTypeText = kMimeTypeText;
  exports.kMimeTypeURIList = kMimeTypeURIList;
  exports.kMimeTypeURL = kMimeTypeURL;
  exports.Clipboard = Clipboard;
  exports.ClipboardPtr = ClipboardPtr;
  exports.ClipboardAssociatedPtr = ClipboardAssociatedPtr;
})();