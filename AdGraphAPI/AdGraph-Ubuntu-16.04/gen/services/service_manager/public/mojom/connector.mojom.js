// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/connector.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('serviceManager.mojom');
  var constants$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/constants.mojom', 'constants.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', 'interface_provider.mojom.js');
  }


  var ConnectResult = {};
  ConnectResult.SUCCEEDED = 0;
  ConnectResult.INVALID_ARGUMENT = ConnectResult.SUCCEEDED + 1;
  ConnectResult.ACCESS_DENIED = ConnectResult.INVALID_ARGUMENT + 1;

  ConnectResult.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  ConnectResult.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function Identity(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Identity.prototype.initDefaults_ = function() {
    this.name = null;
    this.userId = null;
    this.instance = null;
  };
  Identity.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Identity.generate = function(generator_) {
    var generated = new Identity;
    generated.name = generator_.generateString(false);
    generated.userId = generator_.generateString(false);
    generated.instance = generator_.generateString(false);
    return generated;
  };

  Identity.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.userId = mutator_.mutateString(this.userId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.instance = mutator_.mutateString(this.instance, false);
    }
    return this;
  };
  Identity.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Identity.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Identity.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Identity.validate = function(messageValidator, offset) {
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


    // validate Identity.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Identity.userId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Identity.instance
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Identity.encodedSize = codec.kStructHeaderSize + 24;

  Identity.decode = function(decoder) {
    var packed;
    var val = new Identity();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.userId = decoder.decodeStruct(codec.String);
    val.instance = decoder.decodeStruct(codec.String);
    return val;
  };

  Identity.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Identity.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.userId);
    encoder.encodeStruct(codec.String, val.instance);
  };
  function PIDReceiver_SetPID_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PIDReceiver_SetPID_Params.prototype.initDefaults_ = function() {
    this.pid = 0;
  };
  PIDReceiver_SetPID_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PIDReceiver_SetPID_Params.generate = function(generator_) {
    var generated = new PIDReceiver_SetPID_Params;
    generated.pid = generator_.generateUint32();
    return generated;
  };

  PIDReceiver_SetPID_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.pid = mutator_.mutateUint32(this.pid);
    }
    return this;
  };
  PIDReceiver_SetPID_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  PIDReceiver_SetPID_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PIDReceiver_SetPID_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  PIDReceiver_SetPID_Params.validate = function(messageValidator, offset) {
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

  PIDReceiver_SetPID_Params.encodedSize = codec.kStructHeaderSize + 8;

  PIDReceiver_SetPID_Params.decode = function(decoder) {
    var packed;
    var val = new PIDReceiver_SetPID_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pid = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PIDReceiver_SetPID_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PIDReceiver_SetPID_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.pid);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connector_BindInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_BindInterface_Params.prototype.initDefaults_ = function() {
    this.target = null;
    this.interfaceName = null;
    this.interfacePipe = null;
  };
  Connector_BindInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_BindInterface_Params.generate = function(generator_) {
    var generated = new Connector_BindInterface_Params;
    generated.target = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.interfaceName = generator_.generateString(false);
    generated.interfacePipe = generator_.generateMessagePipe(false);
    return generated;
  };

  Connector_BindInterface_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceName = mutator_.mutateString(this.interfaceName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interfacePipe = mutator_.mutateMessagePipe(this.interfacePipe, false);
    }
    return this;
  };
  Connector_BindInterface_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.interfacePipe !== null) {
      Array.prototype.push.apply(handles, ["handle<message_pipe>"]);
    }
    return handles;
  };

  Connector_BindInterface_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_BindInterface_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.interfacePipe = handles[idx++];;
    return idx;
  };

  Connector_BindInterface_Params.validate = function(messageValidator, offset) {
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


    // validate Connector_BindInterface_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_BindInterface_Params.interfaceName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_BindInterface_Params.interfacePipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_BindInterface_Params.encodedSize = codec.kStructHeaderSize + 24;

  Connector_BindInterface_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_BindInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target = decoder.decodeStructPointer(Identity);
    val.interfaceName = decoder.decodeStruct(codec.String);
    val.interfacePipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connector_BindInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_BindInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Identity, val.target);
    encoder.encodeStruct(codec.String, val.interfaceName);
    encoder.encodeStruct(codec.Handle, val.interfacePipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connector_BindInterface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_BindInterface_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.userId = null;
  };
  Connector_BindInterface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_BindInterface_ResponseParams.generate = function(generator_) {
    var generated = new Connector_BindInterface_ResponseParams;
    generated.result = generator_.generateEnum(0, 2);
    generated.userId = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  Connector_BindInterface_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.userId = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  Connector_BindInterface_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Connector_BindInterface_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_BindInterface_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Connector_BindInterface_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Connector_BindInterface_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ConnectResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_BindInterface_ResponseParams.userId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_BindInterface_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Connector_BindInterface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connector_BindInterface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.userId = decoder.decodeStructPointer(Identity);
    return val;
  };

  Connector_BindInterface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_BindInterface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Identity, val.userId);
  };
  function Connector_QueryService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_QueryService_Params.prototype.initDefaults_ = function() {
    this.target = null;
  };
  Connector_QueryService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_QueryService_Params.generate = function(generator_) {
    var generated = new Connector_QueryService_Params;
    generated.target = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  Connector_QueryService_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  Connector_QueryService_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Connector_QueryService_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_QueryService_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Connector_QueryService_Params.validate = function(messageValidator, offset) {
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


    // validate Connector_QueryService_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_QueryService_Params.encodedSize = codec.kStructHeaderSize + 8;

  Connector_QueryService_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_QueryService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target = decoder.decodeStructPointer(Identity);
    return val;
  };

  Connector_QueryService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_QueryService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Identity, val.target);
  };
  function Connector_QueryService_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_QueryService_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.sandboxType = null;
  };
  Connector_QueryService_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_QueryService_ResponseParams.generate = function(generator_) {
    var generated = new Connector_QueryService_ResponseParams;
    generated.result = generator_.generateEnum(0, 2);
    generated.sandboxType = generator_.generateString(false);
    return generated;
  };

  Connector_QueryService_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.sandboxType = mutator_.mutateString(this.sandboxType, false);
    }
    return this;
  };
  Connector_QueryService_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Connector_QueryService_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_QueryService_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Connector_QueryService_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Connector_QueryService_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ConnectResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_QueryService_ResponseParams.sandboxType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_QueryService_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Connector_QueryService_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connector_QueryService_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.sandboxType = decoder.decodeStruct(codec.String);
    return val;
  };

  Connector_QueryService_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_QueryService_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.sandboxType);
  };
  function Connector_StartService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_StartService_Params.prototype.initDefaults_ = function() {
    this.target = null;
  };
  Connector_StartService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_StartService_Params.generate = function(generator_) {
    var generated = new Connector_StartService_Params;
    generated.target = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  Connector_StartService_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  Connector_StartService_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Connector_StartService_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_StartService_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Connector_StartService_Params.validate = function(messageValidator, offset) {
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


    // validate Connector_StartService_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_StartService_Params.encodedSize = codec.kStructHeaderSize + 8;

  Connector_StartService_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_StartService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target = decoder.decodeStructPointer(Identity);
    return val;
  };

  Connector_StartService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_StartService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Identity, val.target);
  };
  function Connector_StartService_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_StartService_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.identity = null;
  };
  Connector_StartService_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_StartService_ResponseParams.generate = function(generator_) {
    var generated = new Connector_StartService_ResponseParams;
    generated.result = generator_.generateEnum(0, 2);
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  Connector_StartService_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  Connector_StartService_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Connector_StartService_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_StartService_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Connector_StartService_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Connector_StartService_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ConnectResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_StartService_ResponseParams.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_StartService_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Connector_StartService_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connector_StartService_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.identity = decoder.decodeStructPointer(Identity);
    return val;
  };

  Connector_StartService_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_StartService_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Identity, val.identity);
  };
  function Connector_StartServiceWithProcess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_StartServiceWithProcess_Params.prototype.initDefaults_ = function() {
    this.target = null;
    this.service = null;
    this.pidReceiverRequest = new bindings.InterfaceRequest();
  };
  Connector_StartServiceWithProcess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_StartServiceWithProcess_Params.generate = function(generator_) {
    var generated = new Connector_StartServiceWithProcess_Params;
    generated.target = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.service = generator_.generateMessagePipe(false);
    generated.pidReceiverRequest = generator_.generateInterfaceRequest("serviceManager.mojom.PIDReceiver", false);
    return generated;
  };

  Connector_StartServiceWithProcess_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.service = mutator_.mutateMessagePipe(this.service, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pidReceiverRequest = mutator_.mutateInterfaceRequest(this.pidReceiverRequest, "serviceManager.mojom.PIDReceiver", false);
    }
    return this;
  };
  Connector_StartServiceWithProcess_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.service !== null) {
      Array.prototype.push.apply(handles, ["handle<message_pipe>"]);
    }
    if (this.pidReceiverRequest !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.PIDReceiverRequest"]);
    }
    return handles;
  };

  Connector_StartServiceWithProcess_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_StartServiceWithProcess_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.service = handles[idx++];;
    this.pidReceiverRequest = handles[idx++];;
    return idx;
  };

  Connector_StartServiceWithProcess_Params.validate = function(messageValidator, offset) {
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


    // validate Connector_StartServiceWithProcess_Params.target
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_StartServiceWithProcess_Params.service
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_StartServiceWithProcess_Params.pidReceiverRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 12, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_StartServiceWithProcess_Params.encodedSize = codec.kStructHeaderSize + 16;

  Connector_StartServiceWithProcess_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_StartServiceWithProcess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.target = decoder.decodeStructPointer(Identity);
    val.service = decoder.decodeStruct(codec.Handle);
    val.pidReceiverRequest = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  Connector_StartServiceWithProcess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_StartServiceWithProcess_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Identity, val.target);
    encoder.encodeStruct(codec.Handle, val.service);
    encoder.encodeStruct(codec.InterfaceRequest, val.pidReceiverRequest);
  };
  function Connector_StartServiceWithProcess_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_StartServiceWithProcess_ResponseParams.prototype.initDefaults_ = function() {
    this.result = 0;
    this.identity = null;
  };
  Connector_StartServiceWithProcess_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_StartServiceWithProcess_ResponseParams.generate = function(generator_) {
    var generated = new Connector_StartServiceWithProcess_ResponseParams;
    generated.result = generator_.generateEnum(0, 2);
    generated.identity = generator_.generateStruct(serviceManager.mojom.Identity, false);
    return generated;
  };

  Connector_StartServiceWithProcess_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.result = mutator_.mutateEnum(this.result, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.identity = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    return this;
  };
  Connector_StartServiceWithProcess_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Connector_StartServiceWithProcess_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_StartServiceWithProcess_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Connector_StartServiceWithProcess_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Connector_StartServiceWithProcess_ResponseParams.result
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ConnectResult);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_StartServiceWithProcess_ResponseParams.identity
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_StartServiceWithProcess_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Connector_StartServiceWithProcess_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Connector_StartServiceWithProcess_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.identity = decoder.decodeStructPointer(Identity);
    return val;
  };

  Connector_StartServiceWithProcess_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_StartServiceWithProcess_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.result);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Identity, val.identity);
  };
  function Connector_Clone_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_Clone_Params.prototype.initDefaults_ = function() {
    this.request = new bindings.InterfaceRequest();
  };
  Connector_Clone_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_Clone_Params.generate = function(generator_) {
    var generated = new Connector_Clone_Params;
    generated.request = generator_.generateInterfaceRequest("serviceManager.mojom.Connector", false);
    return generated;
  };

  Connector_Clone_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "serviceManager.mojom.Connector", false);
    }
    return this;
  };
  Connector_Clone_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.ConnectorRequest"]);
    }
    return handles;
  };

  Connector_Clone_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_Clone_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  Connector_Clone_Params.validate = function(messageValidator, offset) {
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


    // validate Connector_Clone_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_Clone_Params.encodedSize = codec.kStructHeaderSize + 8;

  Connector_Clone_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_Clone_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connector_Clone_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_Clone_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Connector_FilterInterfaces_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Connector_FilterInterfaces_Params.prototype.initDefaults_ = function() {
    this.spec = null;
    this.source = null;
    this.sourceRequest = new bindings.InterfaceRequest();
    this.target = new interface_provider$.InterfaceProviderPtr();
  };
  Connector_FilterInterfaces_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Connector_FilterInterfaces_Params.generate = function(generator_) {
    var generated = new Connector_FilterInterfaces_Params;
    generated.spec = generator_.generateString(false);
    generated.source = generator_.generateStruct(serviceManager.mojom.Identity, false);
    generated.sourceRequest = generator_.generateInterfaceRequest("serviceManager.mojom.InterfaceProvider", false);
    generated.target = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", false);
    return generated;
  };

  Connector_FilterInterfaces_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.spec = mutator_.mutateString(this.spec, false);
    }
    if (mutator_.chooseMutateField()) {
      this.source = mutator_.mutateStruct(serviceManager.mojom.Identity, false);
    }
    if (mutator_.chooseMutateField()) {
      this.sourceRequest = mutator_.mutateInterfaceRequest(this.sourceRequest, "serviceManager.mojom.InterfaceProvider", false);
    }
    if (mutator_.chooseMutateField()) {
      this.target = mutator_.mutateInterface(this.target, "serviceManager.mojom.InterfaceProvider", false);
    }
    return this;
  };
  Connector_FilterInterfaces_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.sourceRequest !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderRequest"]);
    }
    if (this.target !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  Connector_FilterInterfaces_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Connector_FilterInterfaces_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.sourceRequest = handles[idx++];;
    this.target = handles[idx++];;
    return idx;
  };

  Connector_FilterInterfaces_Params.validate = function(messageValidator, offset) {
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


    // validate Connector_FilterInterfaces_Params.spec
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_FilterInterfaces_Params.source
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Identity, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_FilterInterfaces_Params.sourceRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Connector_FilterInterfaces_Params.target
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 20, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Connector_FilterInterfaces_Params.encodedSize = codec.kStructHeaderSize + 32;

  Connector_FilterInterfaces_Params.decode = function(decoder) {
    var packed;
    var val = new Connector_FilterInterfaces_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.spec = decoder.decodeStruct(codec.String);
    val.source = decoder.decodeStructPointer(Identity);
    val.sourceRequest = decoder.decodeStruct(codec.InterfaceRequest);
    val.target = decoder.decodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Connector_FilterInterfaces_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Connector_FilterInterfaces_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.spec);
    encoder.encodeStructPointer(Identity, val.source);
    encoder.encodeStruct(codec.InterfaceRequest, val.sourceRequest);
    encoder.encodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr), val.target);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPIDReceiver_SetPID_Name = 1478894947;

  function PIDReceiverPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PIDReceiver,
                                                   handleOrPtrInfo);
  }

  function PIDReceiverAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PIDReceiver, associatedInterfacePtrInfo);
  }

  PIDReceiverAssociatedPtr.prototype =
      Object.create(PIDReceiverPtr.prototype);
  PIDReceiverAssociatedPtr.prototype.constructor =
      PIDReceiverAssociatedPtr;

  function PIDReceiverProxy(receiver) {
    this.receiver_ = receiver;
  }
  PIDReceiverPtr.prototype.setPID = function() {
    return PIDReceiverProxy.prototype.setPID
        .apply(this.ptr.getProxy(), arguments);
  };

  PIDReceiverProxy.prototype.setPID = function(pid) {
    var params_ = new PIDReceiver_SetPID_Params();
    params_.pid = pid;
    var builder = new codec.MessageV0Builder(
        kPIDReceiver_SetPID_Name,
        codec.align(PIDReceiver_SetPID_Params.encodedSize));
    builder.encodeStruct(PIDReceiver_SetPID_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PIDReceiverStub(delegate) {
    this.delegate_ = delegate;
  }
  PIDReceiverStub.prototype.setPID = function(pid) {
    return this.delegate_ && this.delegate_.setPID && this.delegate_.setPID(pid);
  }

  PIDReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPIDReceiver_SetPID_Name:
      var params = reader.decodeStruct(PIDReceiver_SetPID_Params);
      this.setPID(params.pid);
      return true;
    default:
      return false;
    }
  };

  PIDReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePIDReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPIDReceiver_SetPID_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PIDReceiver_SetPID_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePIDReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PIDReceiver = {
    name: 'service_manager.mojom.PIDReceiver',
    kVersion: 0,
    ptrClass: PIDReceiverPtr,
    proxyClass: PIDReceiverProxy,
    stubClass: PIDReceiverStub,
    validateRequest: validatePIDReceiverRequest,
    validateResponse: null,
    mojomId: 'services/service_manager/public/mojom/connector.mojom',
    fuzzMethods: {
      setPID: {
        params: PIDReceiver_SetPID_Params,
      },
    },
  };
  PIDReceiverStub.prototype.validator = validatePIDReceiverRequest;
  PIDReceiverProxy.prototype.validator = null;
  var kConnector_BindInterface_Name = 332803258;
  var kConnector_QueryService_Name = 18254395;
  var kConnector_StartService_Name = 907324192;
  var kConnector_StartServiceWithProcess_Name = 1813486717;
  var kConnector_Clone_Name = 1390571789;
  var kConnector_FilterInterfaces_Name = 531874370;

  function ConnectorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Connector,
                                                   handleOrPtrInfo);
  }

  function ConnectorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Connector, associatedInterfacePtrInfo);
  }

  ConnectorAssociatedPtr.prototype =
      Object.create(ConnectorPtr.prototype);
  ConnectorAssociatedPtr.prototype.constructor =
      ConnectorAssociatedPtr;

  function ConnectorProxy(receiver) {
    this.receiver_ = receiver;
  }
  ConnectorPtr.prototype.bindInterface = function() {
    return ConnectorProxy.prototype.bindInterface
        .apply(this.ptr.getProxy(), arguments);
  };

  ConnectorProxy.prototype.bindInterface = function(target, interfaceName, interfacePipe) {
    var params_ = new Connector_BindInterface_Params();
    params_.target = target;
    params_.interfaceName = interfaceName;
    params_.interfacePipe = interfacePipe;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kConnector_BindInterface_Name,
          codec.align(Connector_BindInterface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connector_BindInterface_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connector_BindInterface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectorPtr.prototype.queryService = function() {
    return ConnectorProxy.prototype.queryService
        .apply(this.ptr.getProxy(), arguments);
  };

  ConnectorProxy.prototype.queryService = function(target) {
    var params_ = new Connector_QueryService_Params();
    params_.target = target;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kConnector_QueryService_Name,
          codec.align(Connector_QueryService_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connector_QueryService_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connector_QueryService_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectorPtr.prototype.startService = function() {
    return ConnectorProxy.prototype.startService
        .apply(this.ptr.getProxy(), arguments);
  };

  ConnectorProxy.prototype.startService = function(target) {
    var params_ = new Connector_StartService_Params();
    params_.target = target;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kConnector_StartService_Name,
          codec.align(Connector_StartService_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connector_StartService_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connector_StartService_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectorPtr.prototype.startServiceWithProcess = function() {
    return ConnectorProxy.prototype.startServiceWithProcess
        .apply(this.ptr.getProxy(), arguments);
  };

  ConnectorProxy.prototype.startServiceWithProcess = function(target, service, pidReceiverRequest) {
    var params_ = new Connector_StartServiceWithProcess_Params();
    params_.target = target;
    params_.service = service;
    params_.pidReceiverRequest = pidReceiverRequest;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kConnector_StartServiceWithProcess_Name,
          codec.align(Connector_StartServiceWithProcess_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Connector_StartServiceWithProcess_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Connector_StartServiceWithProcess_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ConnectorPtr.prototype.clone = function() {
    return ConnectorProxy.prototype.clone
        .apply(this.ptr.getProxy(), arguments);
  };

  ConnectorProxy.prototype.clone = function(request) {
    var params_ = new Connector_Clone_Params();
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kConnector_Clone_Name,
        codec.align(Connector_Clone_Params.encodedSize));
    builder.encodeStruct(Connector_Clone_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ConnectorPtr.prototype.filterInterfaces = function() {
    return ConnectorProxy.prototype.filterInterfaces
        .apply(this.ptr.getProxy(), arguments);
  };

  ConnectorProxy.prototype.filterInterfaces = function(spec, source, sourceRequest, target) {
    var params_ = new Connector_FilterInterfaces_Params();
    params_.spec = spec;
    params_.source = source;
    params_.sourceRequest = sourceRequest;
    params_.target = target;
    var builder = new codec.MessageV0Builder(
        kConnector_FilterInterfaces_Name,
        codec.align(Connector_FilterInterfaces_Params.encodedSize));
    builder.encodeStruct(Connector_FilterInterfaces_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ConnectorStub(delegate) {
    this.delegate_ = delegate;
  }
  ConnectorStub.prototype.bindInterface = function(target, interfaceName, interfacePipe) {
    return this.delegate_ && this.delegate_.bindInterface && this.delegate_.bindInterface(target, interfaceName, interfacePipe);
  }
  ConnectorStub.prototype.queryService = function(target) {
    return this.delegate_ && this.delegate_.queryService && this.delegate_.queryService(target);
  }
  ConnectorStub.prototype.startService = function(target) {
    return this.delegate_ && this.delegate_.startService && this.delegate_.startService(target);
  }
  ConnectorStub.prototype.startServiceWithProcess = function(target, service, pidReceiverRequest) {
    return this.delegate_ && this.delegate_.startServiceWithProcess && this.delegate_.startServiceWithProcess(target, service, pidReceiverRequest);
  }
  ConnectorStub.prototype.clone = function(request) {
    return this.delegate_ && this.delegate_.clone && this.delegate_.clone(request);
  }
  ConnectorStub.prototype.filterInterfaces = function(spec, source, sourceRequest, target) {
    return this.delegate_ && this.delegate_.filterInterfaces && this.delegate_.filterInterfaces(spec, source, sourceRequest, target);
  }

  ConnectorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kConnector_Clone_Name:
      var params = reader.decodeStruct(Connector_Clone_Params);
      this.clone(params.request);
      return true;
    case kConnector_FilterInterfaces_Name:
      var params = reader.decodeStruct(Connector_FilterInterfaces_Params);
      this.filterInterfaces(params.spec, params.source, params.sourceRequest, params.target);
      return true;
    default:
      return false;
    }
  };

  ConnectorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kConnector_BindInterface_Name:
      var params = reader.decodeStruct(Connector_BindInterface_Params);
      this.bindInterface(params.target, params.interfaceName, params.interfacePipe).then(function(response) {
        var responseParams =
            new Connector_BindInterface_ResponseParams();
        responseParams.result = response.result;
        responseParams.userId = response.userId;
        var builder = new codec.MessageV1Builder(
            kConnector_BindInterface_Name,
            codec.align(Connector_BindInterface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connector_BindInterface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kConnector_QueryService_Name:
      var params = reader.decodeStruct(Connector_QueryService_Params);
      this.queryService(params.target).then(function(response) {
        var responseParams =
            new Connector_QueryService_ResponseParams();
        responseParams.result = response.result;
        responseParams.sandboxType = response.sandboxType;
        var builder = new codec.MessageV1Builder(
            kConnector_QueryService_Name,
            codec.align(Connector_QueryService_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connector_QueryService_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kConnector_StartService_Name:
      var params = reader.decodeStruct(Connector_StartService_Params);
      this.startService(params.target).then(function(response) {
        var responseParams =
            new Connector_StartService_ResponseParams();
        responseParams.result = response.result;
        responseParams.identity = response.identity;
        var builder = new codec.MessageV1Builder(
            kConnector_StartService_Name,
            codec.align(Connector_StartService_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connector_StartService_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kConnector_StartServiceWithProcess_Name:
      var params = reader.decodeStruct(Connector_StartServiceWithProcess_Params);
      this.startServiceWithProcess(params.target, params.service, params.pidReceiverRequest).then(function(response) {
        var responseParams =
            new Connector_StartServiceWithProcess_ResponseParams();
        responseParams.result = response.result;
        responseParams.identity = response.identity;
        var builder = new codec.MessageV1Builder(
            kConnector_StartServiceWithProcess_Name,
            codec.align(Connector_StartServiceWithProcess_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Connector_StartServiceWithProcess_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateConnectorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kConnector_BindInterface_Name:
        if (message.expectsResponse())
          paramsClass = Connector_BindInterface_Params;
      break;
      case kConnector_QueryService_Name:
        if (message.expectsResponse())
          paramsClass = Connector_QueryService_Params;
      break;
      case kConnector_StartService_Name:
        if (message.expectsResponse())
          paramsClass = Connector_StartService_Params;
      break;
      case kConnector_StartServiceWithProcess_Name:
        if (message.expectsResponse())
          paramsClass = Connector_StartServiceWithProcess_Params;
      break;
      case kConnector_Clone_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Connector_Clone_Params;
      break;
      case kConnector_FilterInterfaces_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Connector_FilterInterfaces_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateConnectorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kConnector_BindInterface_Name:
        if (message.isResponse())
          paramsClass = Connector_BindInterface_ResponseParams;
        break;
      case kConnector_QueryService_Name:
        if (message.isResponse())
          paramsClass = Connector_QueryService_ResponseParams;
        break;
      case kConnector_StartService_Name:
        if (message.isResponse())
          paramsClass = Connector_StartService_ResponseParams;
        break;
      case kConnector_StartServiceWithProcess_Name:
        if (message.isResponse())
          paramsClass = Connector_StartServiceWithProcess_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Connector = {
    name: 'service_manager.mojom.Connector',
    kVersion: 0,
    ptrClass: ConnectorPtr,
    proxyClass: ConnectorProxy,
    stubClass: ConnectorStub,
    validateRequest: validateConnectorRequest,
    validateResponse: validateConnectorResponse,
    mojomId: 'services/service_manager/public/mojom/connector.mojom',
    fuzzMethods: {
      bindInterface: {
        params: Connector_BindInterface_Params,
      },
      queryService: {
        params: Connector_QueryService_Params,
      },
      startService: {
        params: Connector_StartService_Params,
      },
      startServiceWithProcess: {
        params: Connector_StartServiceWithProcess_Params,
      },
      clone: {
        params: Connector_Clone_Params,
      },
      filterInterfaces: {
        params: Connector_FilterInterfaces_Params,
      },
    },
  };
  ConnectorStub.prototype.validator = validateConnectorRequest;
  ConnectorProxy.prototype.validator = validateConnectorResponse;
  exports.ConnectResult = ConnectResult;
  exports.Identity = Identity;
  exports.PIDReceiver = PIDReceiver;
  exports.PIDReceiverPtr = PIDReceiverPtr;
  exports.PIDReceiverAssociatedPtr = PIDReceiverAssociatedPtr;
  exports.Connector = Connector;
  exports.ConnectorPtr = ConnectorPtr;
  exports.ConnectorAssociatedPtr = ConnectorAssociatedPtr;
})();