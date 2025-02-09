// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/blob/blob_registry.mojom';
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
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', 'blob.mojom.js');
  }
  var blob_url_store$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob_url_store.mojom', 'blob_url_store.mojom.js');
  }
  var data_element$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/data_element.mojom', 'data_element.mojom.js');
  }
  var serialized_blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/serialized_blob.mojom', 'serialized_blob.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../url/mojom/origin.mojom.js');
  }



  function ProgressClient_OnProgress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProgressClient_OnProgress_Params.prototype.initDefaults_ = function() {
    this.delta = 0;
  };
  ProgressClient_OnProgress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ProgressClient_OnProgress_Params.generate = function(generator_) {
    var generated = new ProgressClient_OnProgress_Params;
    generated.delta = generator_.generateUint64();
    return generated;
  };

  ProgressClient_OnProgress_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.delta = mutator_.mutateUint64(this.delta);
    }
    return this;
  };
  ProgressClient_OnProgress_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ProgressClient_OnProgress_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ProgressClient_OnProgress_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ProgressClient_OnProgress_Params.validate = function(messageValidator, offset) {
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

  ProgressClient_OnProgress_Params.encodedSize = codec.kStructHeaderSize + 8;

  ProgressClient_OnProgress_Params.decode = function(decoder) {
    var packed;
    var val = new ProgressClient_OnProgress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.delta = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  ProgressClient_OnProgress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProgressClient_OnProgress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.delta);
  };
  function BlobRegistry_Register_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_Register_Params.prototype.initDefaults_ = function() {
    this.blob = new bindings.InterfaceRequest();
    this.uuid = null;
    this.contentType = null;
    this.contentDisposition = null;
    this.elements = null;
  };
  BlobRegistry_Register_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_Register_Params.generate = function(generator_) {
    var generated = new BlobRegistry_Register_Params;
    generated.blob = generator_.generateInterfaceRequest("blink.mojom.Blob", false);
    generated.uuid = generator_.generateString(false);
    generated.contentType = generator_.generateString(false);
    generated.contentDisposition = generator_.generateString(false);
    generated.elements = generator_.generateArray(function() {
      return generator_.generateUnion(blink.mojom.DataElement, false);
    });
    return generated;
  };

  BlobRegistry_Register_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateInterfaceRequest(this.blob, "blink.mojom.Blob", false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateString(this.uuid, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentType = mutator_.mutateString(this.contentType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentDisposition = mutator_.mutateString(this.contentDisposition, false);
    }
    if (mutator_.chooseMutateField()) {
      this.elements = mutator_.mutateArray(this.elements, function(val) {
        return mutator_.mutateUnion(blink.mojom.DataElement, false);
      });
    }
    return this;
  };
  BlobRegistry_Register_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobRequest"]);
    }
    if (this.elements !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.elements.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  BlobRegistry_Register_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_Register_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blob = handles[idx++];;
    this.elements.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  BlobRegistry_Register_Params.validate = function(messageValidator, offset) {
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


    // validate BlobRegistry_Register_Params.blob
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_Register_Params.uuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_Register_Params.contentType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_Register_Params.contentDisposition
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_Register_Params.elements
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 16, data_element$.DataElement, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobRegistry_Register_Params.encodedSize = codec.kStructHeaderSize + 40;

  BlobRegistry_Register_Params.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_Register_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.uuid = decoder.decodeStruct(codec.String);
    val.contentType = decoder.decodeStruct(codec.String);
    val.contentDisposition = decoder.decodeStruct(codec.String);
    val.elements = decoder.decodeArrayPointer(data_element$.DataElement);
    return val;
  };

  BlobRegistry_Register_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_Register_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.blob);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.uuid);
    encoder.encodeStruct(codec.String, val.contentType);
    encoder.encodeStruct(codec.String, val.contentDisposition);
    encoder.encodeArrayPointer(data_element$.DataElement, val.elements);
  };
  function BlobRegistry_Register_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_Register_ResponseParams.prototype.initDefaults_ = function() {
  };
  BlobRegistry_Register_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_Register_ResponseParams.generate = function(generator_) {
    var generated = new BlobRegistry_Register_ResponseParams;
    return generated;
  };

  BlobRegistry_Register_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  BlobRegistry_Register_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobRegistry_Register_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_Register_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobRegistry_Register_ResponseParams.validate = function(messageValidator, offset) {
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

  BlobRegistry_Register_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  BlobRegistry_Register_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_Register_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BlobRegistry_Register_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_Register_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function BlobRegistry_RegisterFromStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_RegisterFromStream_Params.prototype.initDefaults_ = function() {
    this.contentType = null;
    this.contentDisposition = null;
    this.lengthHint = 0;
    this.data = null;
    this.progressClient = new associatedBindings.AssociatedInterfacePtrInfo();
  };
  BlobRegistry_RegisterFromStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_RegisterFromStream_Params.generate = function(generator_) {
    var generated = new BlobRegistry_RegisterFromStream_Params;
    generated.contentType = generator_.generateString(false);
    generated.contentDisposition = generator_.generateString(false);
    generated.lengthHint = generator_.generateUint64();
    generated.data = generator_.generateDataPipeConsumer(false);
    generated.progressClient = generator_.generateAssociatedInterface("blink.mojom.ProgressClient", true);
    return generated;
  };

  BlobRegistry_RegisterFromStream_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.contentType = mutator_.mutateString(this.contentType, false);
    }
    if (mutator_.chooseMutateField()) {
      this.contentDisposition = mutator_.mutateString(this.contentDisposition, false);
    }
    if (mutator_.chooseMutateField()) {
      this.lengthHint = mutator_.mutateUint64(this.lengthHint);
    }
    if (mutator_.chooseMutateField()) {
      this.data = mutator_.mutateDataPipeConsumer(this.data, false);
    }
    if (mutator_.chooseMutateField()) {
      this.progressClient = mutator_.mutateAssociatedInterface(this.progressClient, "blink.mojom.ProgressClient", true);
    }
    return this;
  };
  BlobRegistry_RegisterFromStream_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.data !== null) {
      Array.prototype.push.apply(handles, ["handle<data_pipe_consumer>"]);
    }
    if (this.progressClient !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.ProgressClientAssociatedPtr"]);
    }
    return handles;
  };

  BlobRegistry_RegisterFromStream_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_RegisterFromStream_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.data = handles[idx++];;
    this.progressClient = handles[idx++];;
    return idx;
  };

  BlobRegistry_RegisterFromStream_Params.validate = function(messageValidator, offset) {
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


    // validate BlobRegistry_RegisterFromStream_Params.contentType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_RegisterFromStream_Params.contentDisposition
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate BlobRegistry_RegisterFromStream_Params.data
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_RegisterFromStream_Params.progressClient
    err = messageValidator.validateAssociatedInterface(offset + codec.kStructHeaderSize + 28, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobRegistry_RegisterFromStream_Params.encodedSize = codec.kStructHeaderSize + 40;

  BlobRegistry_RegisterFromStream_Params.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_RegisterFromStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.contentType = decoder.decodeStruct(codec.String);
    val.contentDisposition = decoder.decodeStruct(codec.String);
    val.lengthHint = decoder.decodeStruct(codec.Uint64);
    val.data = decoder.decodeStruct(codec.Handle);
    val.progressClient = decoder.decodeStruct(codec.NullableAssociatedInterfacePtrInfo);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BlobRegistry_RegisterFromStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_RegisterFromStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.contentType);
    encoder.encodeStruct(codec.String, val.contentDisposition);
    encoder.encodeStruct(codec.Uint64, val.lengthHint);
    encoder.encodeStruct(codec.Handle, val.data);
    encoder.encodeStruct(codec.NullableAssociatedInterfacePtrInfo, val.progressClient);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function BlobRegistry_RegisterFromStream_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_RegisterFromStream_ResponseParams.prototype.initDefaults_ = function() {
    this.blob = null;
  };
  BlobRegistry_RegisterFromStream_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_RegisterFromStream_ResponseParams.generate = function(generator_) {
    var generated = new BlobRegistry_RegisterFromStream_ResponseParams;
    generated.blob = generator_.generateStruct(blink.mojom.SerializedBlob, true);
    return generated;
  };

  BlobRegistry_RegisterFromStream_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateStruct(blink.mojom.SerializedBlob, true);
    }
    return this;
  };
  BlobRegistry_RegisterFromStream_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, this.blob.getHandleDeps());
    }
    return handles;
  };

  BlobRegistry_RegisterFromStream_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_RegisterFromStream_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.blob.setHandlesInternal_(handles, idx);
    return idx;
  };

  BlobRegistry_RegisterFromStream_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BlobRegistry_RegisterFromStream_ResponseParams.blob
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, serialized_blob$.SerializedBlob, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobRegistry_RegisterFromStream_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BlobRegistry_RegisterFromStream_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_RegisterFromStream_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStructPointer(serialized_blob$.SerializedBlob);
    return val;
  };

  BlobRegistry_RegisterFromStream_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_RegisterFromStream_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(serialized_blob$.SerializedBlob, val.blob);
  };
  function BlobRegistry_GetBlobFromUUID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_GetBlobFromUUID_Params.prototype.initDefaults_ = function() {
    this.blob = new bindings.InterfaceRequest();
    this.uuid = null;
  };
  BlobRegistry_GetBlobFromUUID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_GetBlobFromUUID_Params.generate = function(generator_) {
    var generated = new BlobRegistry_GetBlobFromUUID_Params;
    generated.blob = generator_.generateInterfaceRequest("blink.mojom.Blob", false);
    generated.uuid = generator_.generateString(false);
    return generated;
  };

  BlobRegistry_GetBlobFromUUID_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.blob = mutator_.mutateInterfaceRequest(this.blob, "blink.mojom.Blob", false);
    }
    if (mutator_.chooseMutateField()) {
      this.uuid = mutator_.mutateString(this.uuid, false);
    }
    return this;
  };
  BlobRegistry_GetBlobFromUUID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blob !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobRequest"]);
    }
    return handles;
  };

  BlobRegistry_GetBlobFromUUID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_GetBlobFromUUID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blob = handles[idx++];;
    return idx;
  };

  BlobRegistry_GetBlobFromUUID_Params.validate = function(messageValidator, offset) {
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


    // validate BlobRegistry_GetBlobFromUUID_Params.blob
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_GetBlobFromUUID_Params.uuid
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobRegistry_GetBlobFromUUID_Params.encodedSize = codec.kStructHeaderSize + 16;

  BlobRegistry_GetBlobFromUUID_Params.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_GetBlobFromUUID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.blob = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.uuid = decoder.decodeStruct(codec.String);
    return val;
  };

  BlobRegistry_GetBlobFromUUID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_GetBlobFromUUID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.blob);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.uuid);
  };
  function BlobRegistry_GetBlobFromUUID_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_GetBlobFromUUID_ResponseParams.prototype.initDefaults_ = function() {
  };
  BlobRegistry_GetBlobFromUUID_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_GetBlobFromUUID_ResponseParams.generate = function(generator_) {
    var generated = new BlobRegistry_GetBlobFromUUID_ResponseParams;
    return generated;
  };

  BlobRegistry_GetBlobFromUUID_ResponseParams.prototype.mutate = function(mutator_) {
    return this;
  };
  BlobRegistry_GetBlobFromUUID_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BlobRegistry_GetBlobFromUUID_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_GetBlobFromUUID_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BlobRegistry_GetBlobFromUUID_ResponseParams.validate = function(messageValidator, offset) {
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

  BlobRegistry_GetBlobFromUUID_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  BlobRegistry_GetBlobFromUUID_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_GetBlobFromUUID_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BlobRegistry_GetBlobFromUUID_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_GetBlobFromUUID_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function BlobRegistry_URLStoreForOrigin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BlobRegistry_URLStoreForOrigin_Params.prototype.initDefaults_ = function() {
    this.origin = null;
    this.urlStore = new associatedBindings.AssociatedInterfaceRequest();
  };
  BlobRegistry_URLStoreForOrigin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BlobRegistry_URLStoreForOrigin_Params.generate = function(generator_) {
    var generated = new BlobRegistry_URLStoreForOrigin_Params;
    generated.origin = generator_.generateStruct(url.mojom.Origin, false);
    generated.urlStore = generator_.generateAssociatedInterfaceRequest("blink.mojom.BlobURLStore", false);
    return generated;
  };

  BlobRegistry_URLStoreForOrigin_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.origin = mutator_.mutateStruct(url.mojom.Origin, false);
    }
    if (mutator_.chooseMutateField()) {
      this.urlStore = mutator_.mutateAssociatedInterfaceRequest(this.urlStore, "blink.mojom.BlobURLStore", false);
    }
    return this;
  };
  BlobRegistry_URLStoreForOrigin_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.urlStore !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobURLStoreAssociatedRequest"]);
    }
    return handles;
  };

  BlobRegistry_URLStoreForOrigin_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BlobRegistry_URLStoreForOrigin_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.urlStore = handles[idx++];;
    return idx;
  };

  BlobRegistry_URLStoreForOrigin_Params.validate = function(messageValidator, offset) {
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


    // validate BlobRegistry_URLStoreForOrigin_Params.origin
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate BlobRegistry_URLStoreForOrigin_Params.urlStore
    err = messageValidator.validateAssociatedInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BlobRegistry_URLStoreForOrigin_Params.encodedSize = codec.kStructHeaderSize + 16;

  BlobRegistry_URLStoreForOrigin_Params.decode = function(decoder) {
    var packed;
    var val = new BlobRegistry_URLStoreForOrigin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.origin = decoder.decodeStructPointer(origin$.Origin);
    val.urlStore = decoder.decodeStruct(codec.AssociatedInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  BlobRegistry_URLStoreForOrigin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BlobRegistry_URLStoreForOrigin_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(origin$.Origin, val.origin);
    encoder.encodeStruct(codec.AssociatedInterfaceRequest, val.urlStore);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kProgressClient_OnProgress_Name = 932372963;

  function ProgressClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProgressClient,
                                                   handleOrPtrInfo);
  }

  function ProgressClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProgressClient, associatedInterfacePtrInfo);
  }

  ProgressClientAssociatedPtr.prototype =
      Object.create(ProgressClientPtr.prototype);
  ProgressClientAssociatedPtr.prototype.constructor =
      ProgressClientAssociatedPtr;

  function ProgressClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProgressClientPtr.prototype.onProgress = function() {
    return ProgressClientProxy.prototype.onProgress
        .apply(this.ptr.getProxy(), arguments);
  };

  ProgressClientProxy.prototype.onProgress = function(delta) {
    var params_ = new ProgressClient_OnProgress_Params();
    params_.delta = delta;
    var builder = new codec.MessageV0Builder(
        kProgressClient_OnProgress_Name,
        codec.align(ProgressClient_OnProgress_Params.encodedSize));
    builder.encodeStruct(ProgressClient_OnProgress_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ProgressClientStub(delegate) {
    this.delegate_ = delegate;
  }
  ProgressClientStub.prototype.onProgress = function(delta) {
    return this.delegate_ && this.delegate_.onProgress && this.delegate_.onProgress(delta);
  }

  ProgressClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProgressClient_OnProgress_Name:
      var params = reader.decodeStruct(ProgressClient_OnProgress_Params);
      this.onProgress(params.delta);
      return true;
    default:
      return false;
    }
  };

  ProgressClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateProgressClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProgressClient_OnProgress_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ProgressClient_OnProgress_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProgressClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ProgressClient = {
    name: 'blink.mojom.ProgressClient',
    kVersion: 0,
    ptrClass: ProgressClientPtr,
    proxyClass: ProgressClientProxy,
    stubClass: ProgressClientStub,
    validateRequest: validateProgressClientRequest,
    validateResponse: null,
    mojomId: 'third_party/blink/public/mojom/blob/blob_registry.mojom',
    fuzzMethods: {
      onProgress: {
        params: ProgressClient_OnProgress_Params,
      },
    },
  };
  ProgressClientStub.prototype.validator = validateProgressClientRequest;
  ProgressClientProxy.prototype.validator = null;
  var kBlobRegistry_Register_Name = 1352543627;
  var kBlobRegistry_RegisterFromStream_Name = 1344976190;
  var kBlobRegistry_GetBlobFromUUID_Name = 334941431;
  var kBlobRegistry_URLStoreForOrigin_Name = 129625147;

  function BlobRegistryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BlobRegistry,
                                                   handleOrPtrInfo);
  }

  function BlobRegistryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BlobRegistry, associatedInterfacePtrInfo);
  }

  BlobRegistryAssociatedPtr.prototype =
      Object.create(BlobRegistryPtr.prototype);
  BlobRegistryAssociatedPtr.prototype.constructor =
      BlobRegistryAssociatedPtr;

  function BlobRegistryProxy(receiver) {
    this.receiver_ = receiver;
  }
  BlobRegistryPtr.prototype.register = function() {
    return BlobRegistryProxy.prototype.register
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobRegistryProxy.prototype.register = function(blob, uuid, contentType, contentDisposition, elements) {
    var params_ = new BlobRegistry_Register_Params();
    params_.blob = blob;
    params_.uuid = uuid;
    params_.contentType = contentType;
    params_.contentDisposition = contentDisposition;
    params_.elements = elements;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBlobRegistry_Register_Name,
          codec.align(BlobRegistry_Register_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BlobRegistry_Register_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BlobRegistry_Register_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BlobRegistryPtr.prototype.registerFromStream = function() {
    return BlobRegistryProxy.prototype.registerFromStream
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobRegistryProxy.prototype.registerFromStream = function(contentType, contentDisposition, lengthHint, data, progressClient) {
    var params_ = new BlobRegistry_RegisterFromStream_Params();
    params_.contentType = contentType;
    params_.contentDisposition = contentDisposition;
    params_.lengthHint = lengthHint;
    params_.data = data;
    params_.progressClient = progressClient;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV2Builder(
          kBlobRegistry_RegisterFromStream_Name,
          codec.align(BlobRegistry_RegisterFromStream_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.setPayload(BlobRegistry_RegisterFromStream_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BlobRegistry_RegisterFromStream_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BlobRegistryPtr.prototype.getBlobFromUUID = function() {
    return BlobRegistryProxy.prototype.getBlobFromUUID
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobRegistryProxy.prototype.getBlobFromUUID = function(blob, uuid) {
    var params_ = new BlobRegistry_GetBlobFromUUID_Params();
    params_.blob = blob;
    params_.uuid = uuid;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBlobRegistry_GetBlobFromUUID_Name,
          codec.align(BlobRegistry_GetBlobFromUUID_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BlobRegistry_GetBlobFromUUID_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BlobRegistry_GetBlobFromUUID_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  BlobRegistryPtr.prototype.uRLStoreForOrigin = function() {
    return BlobRegistryProxy.prototype.uRLStoreForOrigin
        .apply(this.ptr.getProxy(), arguments);
  };

  BlobRegistryProxy.prototype.uRLStoreForOrigin = function(origin, urlStore) {
    var params_ = new BlobRegistry_URLStoreForOrigin_Params();
    params_.origin = origin;
    params_.urlStore = urlStore;
    var builder = new codec.MessageV2Builder(
        kBlobRegistry_URLStoreForOrigin_Name,
        codec.align(BlobRegistry_URLStoreForOrigin_Params.encodedSize));
    builder.setPayload(BlobRegistry_URLStoreForOrigin_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function BlobRegistryStub(delegate) {
    this.delegate_ = delegate;
  }
  BlobRegistryStub.prototype.register = function(blob, uuid, contentType, contentDisposition, elements) {
    return this.delegate_ && this.delegate_.register && this.delegate_.register(blob, uuid, contentType, contentDisposition, elements);
  }
  BlobRegistryStub.prototype.registerFromStream = function(contentType, contentDisposition, lengthHint, data, progressClient) {
    return this.delegate_ && this.delegate_.registerFromStream && this.delegate_.registerFromStream(contentType, contentDisposition, lengthHint, data, progressClient);
  }
  BlobRegistryStub.prototype.getBlobFromUUID = function(blob, uuid) {
    return this.delegate_ && this.delegate_.getBlobFromUUID && this.delegate_.getBlobFromUUID(blob, uuid);
  }
  BlobRegistryStub.prototype.uRLStoreForOrigin = function(origin, urlStore) {
    return this.delegate_ && this.delegate_.uRLStoreForOrigin && this.delegate_.uRLStoreForOrigin(origin, urlStore);
  }

  BlobRegistryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBlobRegistry_URLStoreForOrigin_Name:
      var params = reader.decodeStruct(BlobRegistry_URLStoreForOrigin_Params);
      this.uRLStoreForOrigin(params.origin, params.urlStore);
      return true;
    default:
      return false;
    }
  };

  BlobRegistryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBlobRegistry_Register_Name:
      var params = reader.decodeStruct(BlobRegistry_Register_Params);
      this.register(params.blob, params.uuid, params.contentType, params.contentDisposition, params.elements).then(function(response) {
        var responseParams =
            new BlobRegistry_Register_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kBlobRegistry_Register_Name,
            codec.align(BlobRegistry_Register_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BlobRegistry_Register_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBlobRegistry_RegisterFromStream_Name:
      var params = reader.decodeStruct(BlobRegistry_RegisterFromStream_Params);
      this.registerFromStream(params.contentType, params.contentDisposition, params.lengthHint, params.data, params.progressClient).then(function(response) {
        var responseParams =
            new BlobRegistry_RegisterFromStream_ResponseParams();
        responseParams.blob = response.blob;
        var builder = new codec.MessageV2Builder(
            kBlobRegistry_RegisterFromStream_Name,
            codec.align(BlobRegistry_RegisterFromStream_ResponseParams
                .encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.setPayload(BlobRegistry_RegisterFromStream_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kBlobRegistry_GetBlobFromUUID_Name:
      var params = reader.decodeStruct(BlobRegistry_GetBlobFromUUID_Params);
      this.getBlobFromUUID(params.blob, params.uuid).then(function(response) {
        var responseParams =
            new BlobRegistry_GetBlobFromUUID_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kBlobRegistry_GetBlobFromUUID_Name,
            codec.align(BlobRegistry_GetBlobFromUUID_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BlobRegistry_GetBlobFromUUID_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBlobRegistryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBlobRegistry_Register_Name:
        if (message.expectsResponse())
          paramsClass = BlobRegistry_Register_Params;
      break;
      case kBlobRegistry_RegisterFromStream_Name:
        if (message.expectsResponse())
          paramsClass = BlobRegistry_RegisterFromStream_Params;
      break;
      case kBlobRegistry_GetBlobFromUUID_Name:
        if (message.expectsResponse())
          paramsClass = BlobRegistry_GetBlobFromUUID_Params;
      break;
      case kBlobRegistry_URLStoreForOrigin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = BlobRegistry_URLStoreForOrigin_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBlobRegistryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBlobRegistry_Register_Name:
        if (message.isResponse())
          paramsClass = BlobRegistry_Register_ResponseParams;
        break;
      case kBlobRegistry_RegisterFromStream_Name:
        if (message.isResponse())
          paramsClass = BlobRegistry_RegisterFromStream_ResponseParams;
        break;
      case kBlobRegistry_GetBlobFromUUID_Name:
        if (message.isResponse())
          paramsClass = BlobRegistry_GetBlobFromUUID_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BlobRegistry = {
    name: 'blink.mojom.BlobRegistry',
    kVersion: 0,
    ptrClass: BlobRegistryPtr,
    proxyClass: BlobRegistryProxy,
    stubClass: BlobRegistryStub,
    validateRequest: validateBlobRegistryRequest,
    validateResponse: validateBlobRegistryResponse,
    mojomId: 'third_party/blink/public/mojom/blob/blob_registry.mojom',
    fuzzMethods: {
      register: {
        params: BlobRegistry_Register_Params,
      },
      registerFromStream: {
        params: BlobRegistry_RegisterFromStream_Params,
      },
      getBlobFromUUID: {
        params: BlobRegistry_GetBlobFromUUID_Params,
      },
      uRLStoreForOrigin: {
        params: BlobRegistry_URLStoreForOrigin_Params,
      },
    },
  };
  BlobRegistryStub.prototype.validator = validateBlobRegistryRequest;
  BlobRegistryProxy.prototype.validator = validateBlobRegistryResponse;
  exports.ProgressClient = ProgressClient;
  exports.ProgressClientPtr = ProgressClientPtr;
  exports.ProgressClientAssociatedPtr = ProgressClientAssociatedPtr;
  exports.BlobRegistry = BlobRegistry;
  exports.BlobRegistryPtr = BlobRegistryPtr;
  exports.BlobRegistryAssociatedPtr = BlobRegistryAssociatedPtr;
})();