// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/device/public/mojom/public_ip_address_geolocation_provider.mojom';
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
  var mutable_partial_network_traffic_annotation_tag$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom', '../../../network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom.js');
  }
  var geolocation$ =
      mojo.internal.exposeNamespace('device.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/device/public/mojom/geolocation.mojom', 'geolocation.mojom.js');
  }



  function PublicIpAddressGeolocationProvider_CreateGeolocation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.prototype.initDefaults_ = function() {
    this.tag = null;
    this.request = new bindings.InterfaceRequest();
  };
  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.generate = function(generator_) {
    var generated = new PublicIpAddressGeolocationProvider_CreateGeolocation_Params;
    generated.tag = generator_.generateStruct(network.mojom.MutablePartialNetworkTrafficAnnotationTag, false);
    generated.request = generator_.generateInterfaceRequest("device.mojom.Geolocation", false);
    return generated;
  };

  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.tag = mutator_.mutateStruct(network.mojom.MutablePartialNetworkTrafficAnnotationTag, false);
    }
    if (mutator_.chooseMutateField()) {
      this.request = mutator_.mutateInterfaceRequest(this.request, "device.mojom.Geolocation", false);
    }
    return this;
  };
  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.request !== null) {
      Array.prototype.push.apply(handles, ["device.mojom.GeolocationRequest"]);
    }
    return handles;
  };

  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.request = handles[idx++];;
    return idx;
  };

  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.validate = function(messageValidator, offset) {
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


    // validate PublicIpAddressGeolocationProvider_CreateGeolocation_Params.tag
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, mutable_partial_network_traffic_annotation_tag$.MutablePartialNetworkTrafficAnnotationTag, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PublicIpAddressGeolocationProvider_CreateGeolocation_Params.request
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.encodedSize = codec.kStructHeaderSize + 16;

  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.decode = function(decoder) {
    var packed;
    var val = new PublicIpAddressGeolocationProvider_CreateGeolocation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.tag = decoder.decodeStructPointer(mutable_partial_network_traffic_annotation_tag$.MutablePartialNetworkTrafficAnnotationTag);
    val.request = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PublicIpAddressGeolocationProvider_CreateGeolocation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PublicIpAddressGeolocationProvider_CreateGeolocation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(mutable_partial_network_traffic_annotation_tag$.MutablePartialNetworkTrafficAnnotationTag, val.tag);
    encoder.encodeStruct(codec.InterfaceRequest, val.request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kPublicIpAddressGeolocationProvider_CreateGeolocation_Name = 859859403;

  function PublicIpAddressGeolocationProviderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PublicIpAddressGeolocationProvider,
                                                   handleOrPtrInfo);
  }

  function PublicIpAddressGeolocationProviderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PublicIpAddressGeolocationProvider, associatedInterfacePtrInfo);
  }

  PublicIpAddressGeolocationProviderAssociatedPtr.prototype =
      Object.create(PublicIpAddressGeolocationProviderPtr.prototype);
  PublicIpAddressGeolocationProviderAssociatedPtr.prototype.constructor =
      PublicIpAddressGeolocationProviderAssociatedPtr;

  function PublicIpAddressGeolocationProviderProxy(receiver) {
    this.receiver_ = receiver;
  }
  PublicIpAddressGeolocationProviderPtr.prototype.createGeolocation = function() {
    return PublicIpAddressGeolocationProviderProxy.prototype.createGeolocation
        .apply(this.ptr.getProxy(), arguments);
  };

  PublicIpAddressGeolocationProviderProxy.prototype.createGeolocation = function(tag, request) {
    var params_ = new PublicIpAddressGeolocationProvider_CreateGeolocation_Params();
    params_.tag = tag;
    params_.request = request;
    var builder = new codec.MessageV0Builder(
        kPublicIpAddressGeolocationProvider_CreateGeolocation_Name,
        codec.align(PublicIpAddressGeolocationProvider_CreateGeolocation_Params.encodedSize));
    builder.encodeStruct(PublicIpAddressGeolocationProvider_CreateGeolocation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PublicIpAddressGeolocationProviderStub(delegate) {
    this.delegate_ = delegate;
  }
  PublicIpAddressGeolocationProviderStub.prototype.createGeolocation = function(tag, request) {
    return this.delegate_ && this.delegate_.createGeolocation && this.delegate_.createGeolocation(tag, request);
  }

  PublicIpAddressGeolocationProviderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPublicIpAddressGeolocationProvider_CreateGeolocation_Name:
      var params = reader.decodeStruct(PublicIpAddressGeolocationProvider_CreateGeolocation_Params);
      this.createGeolocation(params.tag, params.request);
      return true;
    default:
      return false;
    }
  };

  PublicIpAddressGeolocationProviderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePublicIpAddressGeolocationProviderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPublicIpAddressGeolocationProvider_CreateGeolocation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PublicIpAddressGeolocationProvider_CreateGeolocation_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePublicIpAddressGeolocationProviderResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PublicIpAddressGeolocationProvider = {
    name: 'device.mojom.PublicIpAddressGeolocationProvider',
    kVersion: 0,
    ptrClass: PublicIpAddressGeolocationProviderPtr,
    proxyClass: PublicIpAddressGeolocationProviderProxy,
    stubClass: PublicIpAddressGeolocationProviderStub,
    validateRequest: validatePublicIpAddressGeolocationProviderRequest,
    validateResponse: null,
    mojomId: 'services/device/public/mojom/public_ip_address_geolocation_provider.mojom',
    fuzzMethods: {
      createGeolocation: {
        params: PublicIpAddressGeolocationProvider_CreateGeolocation_Params,
      },
    },
  };
  PublicIpAddressGeolocationProviderStub.prototype.validator = validatePublicIpAddressGeolocationProviderRequest;
  PublicIpAddressGeolocationProviderProxy.prototype.validator = null;
  exports.PublicIpAddressGeolocationProvider = PublicIpAddressGeolocationProvider;
  exports.PublicIpAddressGeolocationProviderPtr = PublicIpAddressGeolocationProviderPtr;
  exports.PublicIpAddressGeolocationProviderAssociatedPtr = PublicIpAddressGeolocationProviderAssociatedPtr;
})();