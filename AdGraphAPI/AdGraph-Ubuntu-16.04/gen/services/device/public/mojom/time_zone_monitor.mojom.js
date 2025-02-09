// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/time_zone_monitor.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('device.mojom');



  function TimeZoneMonitor_AddClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TimeZoneMonitor_AddClient_Params.prototype.initDefaults_ = function() {
    this.client = new TimeZoneMonitorClientPtr();
  };
  TimeZoneMonitor_AddClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TimeZoneMonitor_AddClient_Params.generate = function(generator_) {
    var generated = new TimeZoneMonitor_AddClient_Params;
    generated.client = generator_.generateInterface("device.mojom.TimeZoneMonitorClient", false);
    return generated;
  };

  TimeZoneMonitor_AddClient_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.client = mutator_.mutateInterface(this.client, "device.mojom.TimeZoneMonitorClient", false);
    }
    return this;
  };
  TimeZoneMonitor_AddClient_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.client !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.TimeZoneMonitorClientPtr"]);
    }
    return handles;
  };

  TimeZoneMonitor_AddClient_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TimeZoneMonitor_AddClient_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.client = handles[idx++];;
    return idx;
  };

  TimeZoneMonitor_AddClient_Params.validate = function(messageValidator, offset) {
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


    // validate TimeZoneMonitor_AddClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TimeZoneMonitor_AddClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  TimeZoneMonitor_AddClient_Params.decode = function(decoder) {
    var packed;
    var val = new TimeZoneMonitor_AddClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(new codec.Interface(TimeZoneMonitorClientPtr));
    return val;
  };

  TimeZoneMonitor_AddClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TimeZoneMonitor_AddClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(TimeZoneMonitorClientPtr), val.client);
  };
  function TimeZoneMonitorClient_OnTimeZoneChange_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TimeZoneMonitorClient_OnTimeZoneChange_Params.prototype.initDefaults_ = function() {
    this.tzInfo = null;
  };
  TimeZoneMonitorClient_OnTimeZoneChange_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  TimeZoneMonitorClient_OnTimeZoneChange_Params.generate = function(generator_) {
    var generated = new TimeZoneMonitorClient_OnTimeZoneChange_Params;
    generated.tzInfo = generator_.generateString(false);
    return generated;
  };

  TimeZoneMonitorClient_OnTimeZoneChange_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tzInfo = mutator_.mutateString(this.tzInfo, false);
    }
    return this;
  };
  TimeZoneMonitorClient_OnTimeZoneChange_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  TimeZoneMonitorClient_OnTimeZoneChange_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  TimeZoneMonitorClient_OnTimeZoneChange_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  TimeZoneMonitorClient_OnTimeZoneChange_Params.validate = function(messageValidator, offset) {
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


    // validate TimeZoneMonitorClient_OnTimeZoneChange_Params.tzInfo
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TimeZoneMonitorClient_OnTimeZoneChange_Params.encodedSize = codec.kStructHeaderSize + 8;

  TimeZoneMonitorClient_OnTimeZoneChange_Params.decode = function(decoder) {
    var packed;
    var val = new TimeZoneMonitorClient_OnTimeZoneChange_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tzInfo = decoder.decodeStruct(codec.String);
    return val;
  };

  TimeZoneMonitorClient_OnTimeZoneChange_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TimeZoneMonitorClient_OnTimeZoneChange_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.tzInfo);
  };
  var kTimeZoneMonitor_AddClient_Name = 1932300107;

  function TimeZoneMonitorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TimeZoneMonitor,
                                                   handleOrPtrInfo);
  }

  function TimeZoneMonitorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TimeZoneMonitor, associatedInterfacePtrInfo);
  }

  TimeZoneMonitorAssociatedPtr.prototype =
      Object.create(TimeZoneMonitorPtr.prototype);
  TimeZoneMonitorAssociatedPtr.prototype.constructor =
      TimeZoneMonitorAssociatedPtr;

  function TimeZoneMonitorProxy(receiver) {
    this.receiver_ = receiver;
  }
  TimeZoneMonitorPtr.prototype.addClient = function() {
    return TimeZoneMonitorProxy.prototype.addClient
        .apply(this.ptr.getProxy(), arguments);
  };

  TimeZoneMonitorProxy.prototype.addClient = function(client) {
    var params_ = new TimeZoneMonitor_AddClient_Params();
    params_.client = client;
    var builder = new codec.MessageV0Builder(
        kTimeZoneMonitor_AddClient_Name,
        codec.align(TimeZoneMonitor_AddClient_Params.encodedSize));
    builder.encodeStruct(TimeZoneMonitor_AddClient_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TimeZoneMonitorStub(delegate) {
    this.delegate_ = delegate;
  }
  TimeZoneMonitorStub.prototype.addClient = function(client) {
    return this.delegate_ && this.delegate_.addClient && this.delegate_.addClient(client);
  }

  TimeZoneMonitorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTimeZoneMonitor_AddClient_Name:
      var params = reader.decodeStruct(TimeZoneMonitor_AddClient_Params);
      this.addClient(params.client);
      return true;
    default:
      return false;
    }
  };

  TimeZoneMonitorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTimeZoneMonitorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTimeZoneMonitor_AddClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TimeZoneMonitor_AddClient_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTimeZoneMonitorResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TimeZoneMonitor = {
    name: 'device.mojom.TimeZoneMonitor',
    kVersion: 0,
    ptrClass: TimeZoneMonitorPtr,
    proxyClass: TimeZoneMonitorProxy,
    stubClass: TimeZoneMonitorStub,
    validateRequest: validateTimeZoneMonitorRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/time_zone_monitor.mojom',
    fuzzMethods: {
      addClient: {
        params: TimeZoneMonitor_AddClient_Params,
      },
    },
  };
  TimeZoneMonitorStub.prototype.validator = validateTimeZoneMonitorRequest;
  TimeZoneMonitorProxy.prototype.validator = null;
  var kTimeZoneMonitorClient_OnTimeZoneChange_Name = 1446370289;

  function TimeZoneMonitorClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(TimeZoneMonitorClient,
                                                   handleOrPtrInfo);
  }

  function TimeZoneMonitorClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        TimeZoneMonitorClient, associatedInterfacePtrInfo);
  }

  TimeZoneMonitorClientAssociatedPtr.prototype =
      Object.create(TimeZoneMonitorClientPtr.prototype);
  TimeZoneMonitorClientAssociatedPtr.prototype.constructor =
      TimeZoneMonitorClientAssociatedPtr;

  function TimeZoneMonitorClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  TimeZoneMonitorClientPtr.prototype.onTimeZoneChange = function() {
    return TimeZoneMonitorClientProxy.prototype.onTimeZoneChange
        .apply(this.ptr.getProxy(), arguments);
  };

  TimeZoneMonitorClientProxy.prototype.onTimeZoneChange = function(tzInfo) {
    var params_ = new TimeZoneMonitorClient_OnTimeZoneChange_Params();
    params_.tzInfo = tzInfo;
    var builder = new codec.MessageV0Builder(
        kTimeZoneMonitorClient_OnTimeZoneChange_Name,
        codec.align(TimeZoneMonitorClient_OnTimeZoneChange_Params.encodedSize));
    builder.encodeStruct(TimeZoneMonitorClient_OnTimeZoneChange_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function TimeZoneMonitorClientStub(delegate) {
    this.delegate_ = delegate;
  }
  TimeZoneMonitorClientStub.prototype.onTimeZoneChange = function(tzInfo) {
    return this.delegate_ && this.delegate_.onTimeZoneChange && this.delegate_.onTimeZoneChange(tzInfo);
  }

  TimeZoneMonitorClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kTimeZoneMonitorClient_OnTimeZoneChange_Name:
      var params = reader.decodeStruct(TimeZoneMonitorClient_OnTimeZoneChange_Params);
      this.onTimeZoneChange(params.tzInfo);
      return true;
    default:
      return false;
    }
  };

  TimeZoneMonitorClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateTimeZoneMonitorClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kTimeZoneMonitorClient_OnTimeZoneChange_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = TimeZoneMonitorClient_OnTimeZoneChange_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateTimeZoneMonitorClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var TimeZoneMonitorClient = {
    name: 'device.mojom.TimeZoneMonitorClient',
    kVersion: 0,
    ptrClass: TimeZoneMonitorClientPtr,
    proxyClass: TimeZoneMonitorClientProxy,
    stubClass: TimeZoneMonitorClientStub,
    validateRequest: validateTimeZoneMonitorClientRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/time_zone_monitor.mojom',
    fuzzMethods: {
      onTimeZoneChange: {
        params: TimeZoneMonitorClient_OnTimeZoneChange_Params,
      },
    },
  };
  TimeZoneMonitorClientStub.prototype.validator = validateTimeZoneMonitorClientRequest;
  TimeZoneMonitorClientProxy.prototype.validator = null;
  exports.TimeZoneMonitor = TimeZoneMonitor;
  exports.TimeZoneMonitorPtr = TimeZoneMonitorPtr;
  exports.TimeZoneMonitorAssociatedPtr = TimeZoneMonitorAssociatedPtr;
  exports.TimeZoneMonitorClient = TimeZoneMonitorClient;
  exports.TimeZoneMonitorClientPtr = TimeZoneMonitorClientPtr;
  exports.TimeZoneMonitorClientAssociatedPtr = TimeZoneMonitorClientAssociatedPtr;
})();