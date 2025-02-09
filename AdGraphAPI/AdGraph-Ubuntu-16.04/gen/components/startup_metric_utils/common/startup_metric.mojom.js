// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/startup_metric_utils/common/startup_metric.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('startupMetricUtils.mojom');
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../mojo/public/mojom/base/time.mojom.js');
  }



  function StartupMetricHost_RecordRendererMainEntryTime_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.initDefaults_ = function() {
    this.rendererMainEntryTime = null;
  };
  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  StartupMetricHost_RecordRendererMainEntryTime_Params.generate = function(generator_) {
    var generated = new StartupMetricHost_RecordRendererMainEntryTime_Params;
    generated.rendererMainEntryTime = generator_.generateStruct(mojoBase.mojom.TimeTicks, false);
    return generated;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rendererMainEntryTime = mutator_.mutateStruct(mojoBase.mojom.TimeTicks, false);
    }
    return this;
  };
  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  StartupMetricHost_RecordRendererMainEntryTime_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.validate = function(messageValidator, offset) {
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


    // validate StartupMetricHost_RecordRendererMainEntryTime_Params.rendererMainEntryTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize = codec.kStructHeaderSize + 8;

  StartupMetricHost_RecordRendererMainEntryTime_Params.decode = function(decoder) {
    var packed;
    var val = new StartupMetricHost_RecordRendererMainEntryTime_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rendererMainEntryTime = decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  StartupMetricHost_RecordRendererMainEntryTime_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.rendererMainEntryTime);
  };
  var kStartupMetricHost_RecordRendererMainEntryTime_Name = 154218589;

  function StartupMetricHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(StartupMetricHost,
                                                   handleOrPtrInfo);
  }

  function StartupMetricHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        StartupMetricHost, associatedInterfacePtrInfo);
  }

  StartupMetricHostAssociatedPtr.prototype =
      Object.create(StartupMetricHostPtr.prototype);
  StartupMetricHostAssociatedPtr.prototype.constructor =
      StartupMetricHostAssociatedPtr;

  function StartupMetricHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  StartupMetricHostPtr.prototype.recordRendererMainEntryTime = function() {
    return StartupMetricHostProxy.prototype.recordRendererMainEntryTime
        .apply(this.ptr.getProxy(), arguments);
  };

  StartupMetricHostProxy.prototype.recordRendererMainEntryTime = function(rendererMainEntryTime) {
    var params_ = new StartupMetricHost_RecordRendererMainEntryTime_Params();
    params_.rendererMainEntryTime = rendererMainEntryTime;
    var builder = new codec.MessageV0Builder(
        kStartupMetricHost_RecordRendererMainEntryTime_Name,
        codec.align(StartupMetricHost_RecordRendererMainEntryTime_Params.encodedSize));
    builder.encodeStruct(StartupMetricHost_RecordRendererMainEntryTime_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function StartupMetricHostStub(delegate) {
    this.delegate_ = delegate;
  }
  StartupMetricHostStub.prototype.recordRendererMainEntryTime = function(rendererMainEntryTime) {
    return this.delegate_ && this.delegate_.recordRendererMainEntryTime && this.delegate_.recordRendererMainEntryTime(rendererMainEntryTime);
  }

  StartupMetricHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kStartupMetricHost_RecordRendererMainEntryTime_Name:
      var params = reader.decodeStruct(StartupMetricHost_RecordRendererMainEntryTime_Params);
      this.recordRendererMainEntryTime(params.rendererMainEntryTime);
      return true;
    default:
      return false;
    }
  };

  StartupMetricHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateStartupMetricHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kStartupMetricHost_RecordRendererMainEntryTime_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = StartupMetricHost_RecordRendererMainEntryTime_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateStartupMetricHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var StartupMetricHost = {
    name: 'startup_metric_utils.mojom.StartupMetricHost',
    kVersion: 0,
    ptrClass: StartupMetricHostPtr,
    proxyClass: StartupMetricHostProxy,
    stubClass: StartupMetricHostStub,
    validateRequest: validateStartupMetricHostRequest,
    validateResponse: null,
    mojomId: 'components/startup_metric_utils/common/startup_metric.mojom',
    fuzzMethods: {
      recordRendererMainEntryTime: {
        params: StartupMetricHost_RecordRendererMainEntryTime_Params,
      },
    },
  };
  StartupMetricHostStub.prototype.validator = validateStartupMetricHostRequest;
  StartupMetricHostProxy.prototype.validator = null;
  exports.StartupMetricHost = StartupMetricHost;
  exports.StartupMetricHostPtr = StartupMetricHostPtr;
  exports.StartupMetricHostAssociatedPtr = StartupMetricHostAssociatedPtr;
})();