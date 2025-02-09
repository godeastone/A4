// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/battery_monitor.mojom';
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
  var battery_status$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/battery_status.mojom', 'battery_status.mojom.js');
  }



  function BatteryMonitor_QueryNextStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BatteryMonitor_QueryNextStatus_Params.prototype.initDefaults_ = function() {
  };
  BatteryMonitor_QueryNextStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BatteryMonitor_QueryNextStatus_Params.generate = function(generator_) {
    var generated = new BatteryMonitor_QueryNextStatus_Params;
    return generated;
  };

  BatteryMonitor_QueryNextStatus_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  BatteryMonitor_QueryNextStatus_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BatteryMonitor_QueryNextStatus_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BatteryMonitor_QueryNextStatus_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BatteryMonitor_QueryNextStatus_Params.validate = function(messageValidator, offset) {
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

  BatteryMonitor_QueryNextStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  BatteryMonitor_QueryNextStatus_Params.decode = function(decoder) {
    var packed;
    var val = new BatteryMonitor_QueryNextStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  BatteryMonitor_QueryNextStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BatteryMonitor_QueryNextStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function BatteryMonitor_QueryNextStatus_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  BatteryMonitor_QueryNextStatus_ResponseParams.prototype.initDefaults_ = function() {
    this.status = null;
  };
  BatteryMonitor_QueryNextStatus_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  BatteryMonitor_QueryNextStatus_ResponseParams.generate = function(generator_) {
    var generated = new BatteryMonitor_QueryNextStatus_ResponseParams;
    generated.status = generator_.generateStruct(device.mojom.BatteryStatus, false);
    return generated;
  };

  BatteryMonitor_QueryNextStatus_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateStruct(device.mojom.BatteryStatus, false);
    }
    return this;
  };
  BatteryMonitor_QueryNextStatus_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  BatteryMonitor_QueryNextStatus_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  BatteryMonitor_QueryNextStatus_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  BatteryMonitor_QueryNextStatus_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate BatteryMonitor_QueryNextStatus_ResponseParams.status
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, battery_status$.BatteryStatus, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  BatteryMonitor_QueryNextStatus_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  BatteryMonitor_QueryNextStatus_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new BatteryMonitor_QueryNextStatus_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStructPointer(battery_status$.BatteryStatus);
    return val;
  };

  BatteryMonitor_QueryNextStatus_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(BatteryMonitor_QueryNextStatus_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(battery_status$.BatteryStatus, val.status);
  };
  var kBatteryMonitor_QueryNextStatus_Name = 34340372;

  function BatteryMonitorPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(BatteryMonitor,
                                                   handleOrPtrInfo);
  }

  function BatteryMonitorAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        BatteryMonitor, associatedInterfacePtrInfo);
  }

  BatteryMonitorAssociatedPtr.prototype =
      Object.create(BatteryMonitorPtr.prototype);
  BatteryMonitorAssociatedPtr.prototype.constructor =
      BatteryMonitorAssociatedPtr;

  function BatteryMonitorProxy(receiver) {
    this.receiver_ = receiver;
  }
  BatteryMonitorPtr.prototype.queryNextStatus = function() {
    return BatteryMonitorProxy.prototype.queryNextStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  BatteryMonitorProxy.prototype.queryNextStatus = function() {
    var params_ = new BatteryMonitor_QueryNextStatus_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kBatteryMonitor_QueryNextStatus_Name,
          codec.align(BatteryMonitor_QueryNextStatus_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(BatteryMonitor_QueryNextStatus_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(BatteryMonitor_QueryNextStatus_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function BatteryMonitorStub(delegate) {
    this.delegate_ = delegate;
  }
  BatteryMonitorStub.prototype.queryNextStatus = function() {
    return this.delegate_ && this.delegate_.queryNextStatus && this.delegate_.queryNextStatus();
  }

  BatteryMonitorStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  BatteryMonitorStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kBatteryMonitor_QueryNextStatus_Name:
      var params = reader.decodeStruct(BatteryMonitor_QueryNextStatus_Params);
      this.queryNextStatus().then(function(response) {
        var responseParams =
            new BatteryMonitor_QueryNextStatus_ResponseParams();
        responseParams.status = response.status;
        var builder = new codec.MessageV1Builder(
            kBatteryMonitor_QueryNextStatus_Name,
            codec.align(BatteryMonitor_QueryNextStatus_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(BatteryMonitor_QueryNextStatus_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateBatteryMonitorRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kBatteryMonitor_QueryNextStatus_Name:
        if (message.expectsResponse())
          paramsClass = BatteryMonitor_QueryNextStatus_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateBatteryMonitorResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kBatteryMonitor_QueryNextStatus_Name:
        if (message.isResponse())
          paramsClass = BatteryMonitor_QueryNextStatus_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var BatteryMonitor = {
    name: 'device.mojom.BatteryMonitor',
    kVersion: 0,
    ptrClass: BatteryMonitorPtr,
    proxyClass: BatteryMonitorProxy,
    stubClass: BatteryMonitorStub,
    validateRequest: validateBatteryMonitorRequest,
    validateResponse: validateBatteryMonitorResponse,
    mojomId: 'services/device/public/mojom/battery_monitor.mojom',
    fuzzMethods: {
      queryNextStatus: {
        params: BatteryMonitor_QueryNextStatus_Params,
      },
    },
  };
  BatteryMonitorStub.prototype.validator = validateBatteryMonitorRequest;
  BatteryMonitorProxy.prototype.validator = validateBatteryMonitorResponse;
  exports.BatteryMonitor = BatteryMonitor;
  exports.BatteryMonitorPtr = BatteryMonitorPtr;
  exports.BatteryMonitorAssociatedPtr = BatteryMonitorAssociatedPtr;
})();