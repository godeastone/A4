// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/frame.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');
  var navigation_params$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/navigation_params.mojom', 'navigation_params.mojom.js');
  }
  var controller_service_worker$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/controller_service_worker.mojom', 'service_worker/controller_service_worker.mojom.js');
  }
  var url_loader_factory_bundle$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/url_loader_factory_bundle.mojom', 'url_loader_factory_bundle.mojom.js');
  }
  var resource_type$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/resource_type.mojom', '../public/common/resource_type.mojom.js');
  }
  var resource_load_info$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/resource_load_info.mojom', '../public/common/resource_load_info.mojom.js');
  }
  var transferrable_url_loader$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/transferrable_url_loader.mojom', '../public/common/transferrable_url_loader.mojom.js');
  }
  var window_container_type$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/public/common/window_container_type.mojom', '../public/common/window_container_type.mojom.js');
  }
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../mojo/public/mojom/base/string16.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var url_loader$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_loader.mojom', '../../services/network/public/mojom/url_loader.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }
  var surface_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/surface_id.mojom', '../../services/viz/public/interfaces/compositing/surface_id.mojom.js');
  }
  var blob_url_store$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob_url_store.mojom', '../../third_party/blink/public/mojom/blob/blob_url_store.mojom.js');
  }
  var feature_policy$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/feature_policy/feature_policy.mojom', '../../third_party/blink/public/mojom/feature_policy/feature_policy.mojom.js');
  }
  var referrer$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/platform/referrer.mojom', '../../third_party/blink/public/platform/referrer.mojom.js');
  }
  var commit_result$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/commit_result.mojom', '../../third_party/blink/public/web/commit_result.mojom.js');
  }
  var window_features$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/web/window_features.mojom', '../../third_party/blink/public/web/window_features.mojom.js');
  }
  var window_open_disposition$ =
      mojo.internal.exposeNamespace('ui.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/base/mojo/window_open_disposition.mojom', '../../ui/base/mojo/window_open_disposition.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../url/mojom/url.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }


  var kNavigation_FrameSpec = "navigation:frame";
  var CreateNewWindowStatus = {};
  CreateNewWindowStatus.kIgnore = 0;
  CreateNewWindowStatus.kReuse = CreateNewWindowStatus.kIgnore + 1;
  CreateNewWindowStatus.kSuccess = CreateNewWindowStatus.kReuse + 1;

  CreateNewWindowStatus.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CreateNewWindowStatus.validate = function(enumValue) {
    var isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CommonNavigationParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CommonNavigationParams.prototype.initDefaults_ = function() {
  };
  CommonNavigationParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CommonNavigationParams.generate = function(generator_) {
    var generated = new CommonNavigationParams;
    return generated;
  };

  CommonNavigationParams.prototype.mutate = function(mutator_) {
    return this;
  };
  CommonNavigationParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CommonNavigationParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CommonNavigationParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CommonNavigationParams.validate = function(messageValidator, offset) {
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

  CommonNavigationParams.encodedSize = codec.kStructHeaderSize + 0;

  CommonNavigationParams.decode = function(decoder) {
    var packed;
    var val = new CommonNavigationParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CommonNavigationParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CommonNavigationParams.encodedSize);
    encoder.writeUint32(0);
  };
  function RequestNavigationParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RequestNavigationParams.prototype.initDefaults_ = function() {
  };
  RequestNavigationParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RequestNavigationParams.generate = function(generator_) {
    var generated = new RequestNavigationParams;
    return generated;
  };

  RequestNavigationParams.prototype.mutate = function(mutator_) {
    return this;
  };
  RequestNavigationParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  RequestNavigationParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RequestNavigationParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  RequestNavigationParams.validate = function(messageValidator, offset) {
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

  RequestNavigationParams.encodedSize = codec.kStructHeaderSize + 0;

  RequestNavigationParams.decode = function(decoder) {
    var packed;
    var val = new RequestNavigationParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  RequestNavigationParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RequestNavigationParams.encodedSize);
    encoder.writeUint32(0);
  };
  function CreateNewWindowParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CreateNewWindowParams.prototype.initDefaults_ = function() {
    this.userGesture = false;
    this.openerSuppressed = false;
    this.windowContainerType = 0;
    this.sessionStorageNamespaceId = null;
    this.cloneFromSessionStorageNamespaceId = null;
    this.frameName = null;
    this.disposition = 0;
    this.targetUrl = null;
    this.referrer = null;
    this.features = null;
  };
  CreateNewWindowParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CreateNewWindowParams.generate = function(generator_) {
    var generated = new CreateNewWindowParams;
    generated.userGesture = generator_.generateBool();
    generated.windowContainerType = generator_.generateEnum(0, 2);
    generated.sessionStorageNamespaceId = generator_.generateString(false);
    generated.cloneFromSessionStorageNamespaceId = generator_.generateString(false);
    generated.frameName = generator_.generateString(false);
    generated.openerSuppressed = generator_.generateBool();
    generated.disposition = generator_.generateEnum(0, 10);
    generated.targetUrl = generator_.generateStruct(url.mojom.Url, false);
    generated.referrer = generator_.generateStruct(blink.mojom.Referrer, false);
    generated.features = generator_.generateStruct(blink.mojom.WindowFeatures, false);
    return generated;
  };

  CreateNewWindowParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.userGesture = mutator_.mutateBool(this.userGesture);
    }
    if (mutator_.chooseMutateField()) {
      this.windowContainerType = mutator_.mutateEnum(this.windowContainerType, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionStorageNamespaceId = mutator_.mutateString(this.sessionStorageNamespaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.cloneFromSessionStorageNamespaceId = mutator_.mutateString(this.cloneFromSessionStorageNamespaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameName = mutator_.mutateString(this.frameName, false);
    }
    if (mutator_.chooseMutateField()) {
      this.openerSuppressed = mutator_.mutateBool(this.openerSuppressed);
    }
    if (mutator_.chooseMutateField()) {
      this.disposition = mutator_.mutateEnum(this.disposition, 0, 10);
    }
    if (mutator_.chooseMutateField()) {
      this.targetUrl = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.referrer = mutator_.mutateStruct(blink.mojom.Referrer, false);
    }
    if (mutator_.chooseMutateField()) {
      this.features = mutator_.mutateStruct(blink.mojom.WindowFeatures, false);
    }
    return this;
  };
  CreateNewWindowParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CreateNewWindowParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CreateNewWindowParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CreateNewWindowParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CreateNewWindowParams.windowContainerType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, window_container_type$.WindowContainerType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowParams.sessionStorageNamespaceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowParams.cloneFromSessionStorageNamespaceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowParams.frameName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate CreateNewWindowParams.disposition
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 32, window_open_disposition$.WindowOpenDisposition);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowParams.targetUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowParams.referrer
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, referrer$.Referrer, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowParams.features
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, window_features$.WindowFeatures, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CreateNewWindowParams.encodedSize = codec.kStructHeaderSize + 64;

  CreateNewWindowParams.decode = function(decoder) {
    var packed;
    var val = new CreateNewWindowParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.userGesture = (packed >> 0) & 1 ? true : false;
    val.openerSuppressed = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.windowContainerType = decoder.decodeStruct(codec.Int32);
    val.sessionStorageNamespaceId = decoder.decodeStruct(codec.String);
    val.cloneFromSessionStorageNamespaceId = decoder.decodeStruct(codec.String);
    val.frameName = decoder.decodeStruct(codec.String);
    val.disposition = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.targetUrl = decoder.decodeStructPointer(url$.Url);
    val.referrer = decoder.decodeStructPointer(referrer$.Referrer);
    val.features = decoder.decodeStructPointer(window_features$.WindowFeatures);
    return val;
  };

  CreateNewWindowParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CreateNewWindowParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.userGesture & 1) << 0
    packed |= (val.openerSuppressed & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.windowContainerType);
    encoder.encodeStruct(codec.String, val.sessionStorageNamespaceId);
    encoder.encodeStruct(codec.String, val.cloneFromSessionStorageNamespaceId);
    encoder.encodeStruct(codec.String, val.frameName);
    encoder.encodeStruct(codec.Int32, val.disposition);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(url$.Url, val.targetUrl);
    encoder.encodeStructPointer(referrer$.Referrer, val.referrer);
    encoder.encodeStructPointer(window_features$.WindowFeatures, val.features);
  };
  function CreateNewWindowReply(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CreateNewWindowReply.prototype.initDefaults_ = function() {
    this.routeId = 0;
    this.mainFrameRouteId = 0;
    this.mainFrameWidgetRouteId = 0;
    this.mainFrameInterfaceProvider = new interface_provider$.InterfaceProviderPtr();
    this.clonedSessionStorageNamespaceId = null;
    this.devtoolsMainFrameToken = null;
  };
  CreateNewWindowReply.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CreateNewWindowReply.generate = function(generator_) {
    var generated = new CreateNewWindowReply;
    generated.routeId = generator_.generateInt32();
    generated.mainFrameRouteId = generator_.generateInt32();
    generated.mainFrameWidgetRouteId = generator_.generateInt32();
    generated.mainFrameInterfaceProvider = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", false);
    generated.clonedSessionStorageNamespaceId = generator_.generateString(false);
    generated.devtoolsMainFrameToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  CreateNewWindowReply.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routeId = mutator_.mutateInt32(this.routeId);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameRouteId = mutator_.mutateInt32(this.mainFrameRouteId);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameWidgetRouteId = mutator_.mutateInt32(this.mainFrameWidgetRouteId);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameInterfaceProvider = mutator_.mutateInterface(this.mainFrameInterfaceProvider, "serviceManager.mojom.InterfaceProvider", false);
    }
    if (mutator_.chooseMutateField()) {
      this.clonedSessionStorageNamespaceId = mutator_.mutateString(this.clonedSessionStorageNamespaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsMainFrameToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  CreateNewWindowReply.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.mainFrameInterfaceProvider !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  CreateNewWindowReply.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CreateNewWindowReply.prototype.setHandlesInternal_ = function(handles, idx) {
    this.mainFrameInterfaceProvider = handles[idx++];;
    return idx;
  };

  CreateNewWindowReply.validate = function(messageValidator, offset) {
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





    // validate CreateNewWindowReply.mainFrameInterfaceProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 12, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowReply.clonedSessionStorageNamespaceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateNewWindowReply.devtoolsMainFrameToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CreateNewWindowReply.encodedSize = codec.kStructHeaderSize + 40;

  CreateNewWindowReply.decode = function(decoder) {
    var packed;
    var val = new CreateNewWindowReply();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routeId = decoder.decodeStruct(codec.Int32);
    val.mainFrameRouteId = decoder.decodeStruct(codec.Int32);
    val.mainFrameWidgetRouteId = decoder.decodeStruct(codec.Int32);
    val.mainFrameInterfaceProvider = decoder.decodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.clonedSessionStorageNamespaceId = decoder.decodeStruct(codec.String);
    val.devtoolsMainFrameToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  CreateNewWindowReply.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CreateNewWindowReply.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routeId);
    encoder.encodeStruct(codec.Int32, val.mainFrameRouteId);
    encoder.encodeStruct(codec.Int32, val.mainFrameWidgetRouteId);
    encoder.encodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr), val.mainFrameInterfaceProvider);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.clonedSessionStorageNamespaceId);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsMainFrameToken);
  };
  function DidCommitProvisionalLoadParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DidCommitProvisionalLoadParams.prototype.initDefaults_ = function() {
  };
  DidCommitProvisionalLoadParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  DidCommitProvisionalLoadParams.generate = function(generator_) {
    var generated = new DidCommitProvisionalLoadParams;
    return generated;
  };

  DidCommitProvisionalLoadParams.prototype.mutate = function(mutator_) {
    return this;
  };
  DidCommitProvisionalLoadParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  DidCommitProvisionalLoadParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  DidCommitProvisionalLoadParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  DidCommitProvisionalLoadParams.validate = function(messageValidator, offset) {
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

  DidCommitProvisionalLoadParams.encodedSize = codec.kStructHeaderSize + 0;

  DidCommitProvisionalLoadParams.decode = function(decoder) {
    var packed;
    var val = new DidCommitProvisionalLoadParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  DidCommitProvisionalLoadParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DidCommitProvisionalLoadParams.encodedSize);
    encoder.writeUint32(0);
  };
  function Frame_GetInterfaceProvider_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Frame_GetInterfaceProvider_Params.prototype.initDefaults_ = function() {
    this.interfaces = new bindings.InterfaceRequest();
  };
  Frame_GetInterfaceProvider_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Frame_GetInterfaceProvider_Params.generate = function(generator_) {
    var generated = new Frame_GetInterfaceProvider_Params;
    generated.interfaces = generator_.generateInterfaceRequest("serviceManager.mojom.InterfaceProvider", false);
    return generated;
  };

  Frame_GetInterfaceProvider_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.interfaces = mutator_.mutateInterfaceRequest(this.interfaces, "serviceManager.mojom.InterfaceProvider", false);
    }
    return this;
  };
  Frame_GetInterfaceProvider_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.interfaces !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderRequest"]);
    }
    return handles;
  };

  Frame_GetInterfaceProvider_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Frame_GetInterfaceProvider_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.interfaces = handles[idx++];;
    return idx;
  };

  Frame_GetInterfaceProvider_Params.validate = function(messageValidator, offset) {
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


    // validate Frame_GetInterfaceProvider_Params.interfaces
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Frame_GetInterfaceProvider_Params.encodedSize = codec.kStructHeaderSize + 8;

  Frame_GetInterfaceProvider_Params.decode = function(decoder) {
    var packed;
    var val = new Frame_GetInterfaceProvider_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interfaces = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Frame_GetInterfaceProvider_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Frame_GetInterfaceProvider_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.interfaces);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Frame_GetCanonicalUrlForSharing_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Frame_GetCanonicalUrlForSharing_Params.prototype.initDefaults_ = function() {
  };
  Frame_GetCanonicalUrlForSharing_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Frame_GetCanonicalUrlForSharing_Params.generate = function(generator_) {
    var generated = new Frame_GetCanonicalUrlForSharing_Params;
    return generated;
  };

  Frame_GetCanonicalUrlForSharing_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Frame_GetCanonicalUrlForSharing_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Frame_GetCanonicalUrlForSharing_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Frame_GetCanonicalUrlForSharing_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Frame_GetCanonicalUrlForSharing_Params.validate = function(messageValidator, offset) {
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

  Frame_GetCanonicalUrlForSharing_Params.encodedSize = codec.kStructHeaderSize + 0;

  Frame_GetCanonicalUrlForSharing_Params.decode = function(decoder) {
    var packed;
    var val = new Frame_GetCanonicalUrlForSharing_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Frame_GetCanonicalUrlForSharing_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Frame_GetCanonicalUrlForSharing_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function Frame_GetCanonicalUrlForSharing_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Frame_GetCanonicalUrlForSharing_ResponseParams.prototype.initDefaults_ = function() {
    this.canonicalUrl = null;
  };
  Frame_GetCanonicalUrlForSharing_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Frame_GetCanonicalUrlForSharing_ResponseParams.generate = function(generator_) {
    var generated = new Frame_GetCanonicalUrlForSharing_ResponseParams;
    generated.canonicalUrl = generator_.generateStruct(url.mojom.Url, true);
    return generated;
  };

  Frame_GetCanonicalUrlForSharing_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.canonicalUrl = mutator_.mutateStruct(url.mojom.Url, true);
    }
    return this;
  };
  Frame_GetCanonicalUrlForSharing_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Frame_GetCanonicalUrlForSharing_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Frame_GetCanonicalUrlForSharing_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Frame_GetCanonicalUrlForSharing_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate Frame_GetCanonicalUrlForSharing_ResponseParams.canonicalUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Frame_GetCanonicalUrlForSharing_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Frame_GetCanonicalUrlForSharing_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Frame_GetCanonicalUrlForSharing_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.canonicalUrl = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  Frame_GetCanonicalUrlForSharing_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Frame_GetCanonicalUrlForSharing_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.canonicalUrl);
  };
  function FrameNavigationControl_CommitNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameNavigationControl_CommitNavigation_Params.prototype.initDefaults_ = function() {
    this.head = null;
    this.commonParams = null;
    this.requestParams = null;
    this.urlLoaderClientEndpoints = null;
    this.subresourceLoaderFactories = null;
    this.subresourceOverrides = null;
    this.controllerServiceWorkerInfo = null;
    this.devtoolsNavigationToken = null;
  };
  FrameNavigationControl_CommitNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameNavigationControl_CommitNavigation_Params.generate = function(generator_) {
    var generated = new FrameNavigationControl_CommitNavigation_Params;
    generated.head = generator_.generateStruct(network.mojom.URLResponseHead, false);
    generated.commonParams = generator_.generateStruct(content.mojom.CommonNavigationParams, false);
    generated.requestParams = generator_.generateStruct(content.mojom.RequestNavigationParams, false);
    generated.urlLoaderClientEndpoints = generator_.generateStruct(network.mojom.URLLoaderClientEndpoints, true);
    generated.subresourceLoaderFactories = generator_.generateStruct(content.mojom.URLLoaderFactoryBundle, true);
    generated.subresourceOverrides = generator_.generateArray(function() {
      return generator_.generateStruct(content.mojom.TransferrableURLLoader, false);
    });
    generated.controllerServiceWorkerInfo = generator_.generateStruct(content.mojom.ControllerServiceWorkerInfo, true);
    generated.devtoolsNavigationToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  FrameNavigationControl_CommitNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.head = mutator_.mutateStruct(network.mojom.URLResponseHead, false);
    }
    if (mutator_.chooseMutateField()) {
      this.commonParams = mutator_.mutateStruct(content.mojom.CommonNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestParams = mutator_.mutateStruct(content.mojom.RequestNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.urlLoaderClientEndpoints = mutator_.mutateStruct(network.mojom.URLLoaderClientEndpoints, true);
    }
    if (mutator_.chooseMutateField()) {
      this.subresourceLoaderFactories = mutator_.mutateStruct(content.mojom.URLLoaderFactoryBundle, true);
    }
    if (mutator_.chooseMutateField()) {
      this.subresourceOverrides = mutator_.mutateArray(this.subresourceOverrides, function(val) {
        return mutator_.mutateStruct(content.mojom.TransferrableURLLoader, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.controllerServiceWorkerInfo = mutator_.mutateStruct(content.mojom.ControllerServiceWorkerInfo, true);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsNavigationToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  FrameNavigationControl_CommitNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.urlLoaderClientEndpoints !== null) {
      Array.prototype.push.apply(handles, this.urlLoaderClientEndpoints.getHandleDeps());
    }
    if (this.subresourceLoaderFactories !== null) {
      Array.prototype.push.apply(handles, this.subresourceLoaderFactories.getHandleDeps());
    }
    if (this.subresourceOverrides !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.subresourceOverrides.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    if (this.controllerServiceWorkerInfo !== null) {
      Array.prototype.push.apply(handles, this.controllerServiceWorkerInfo.getHandleDeps());
    }
    return handles;
  };

  FrameNavigationControl_CommitNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameNavigationControl_CommitNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.urlLoaderClientEndpoints.setHandlesInternal_(handles, idx);
    idx = this.subresourceLoaderFactories.setHandlesInternal_(handles, idx);
    this.subresourceOverrides.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    idx = this.controllerServiceWorkerInfo.setHandlesInternal_(handles, idx);
    return idx;
  };

  FrameNavigationControl_CommitNavigation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 72}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.head
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url_loader$.URLResponseHead, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.commonParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, CommonNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.requestParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, RequestNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.urlLoaderClientEndpoints
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url_loader$.URLLoaderClientEndpoints, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.subresourceLoaderFactories
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, url_loader_factory_bundle$.URLLoaderFactoryBundle, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.subresourceOverrides
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 40, 8, new codec.PointerTo(transferrable_url_loader$.TransferrableURLLoader), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.controllerServiceWorkerInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, controller_service_worker$.ControllerServiceWorkerInfo, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitNavigation_Params.devtoolsNavigationToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameNavigationControl_CommitNavigation_Params.encodedSize = codec.kStructHeaderSize + 64;

  FrameNavigationControl_CommitNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new FrameNavigationControl_CommitNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.head = decoder.decodeStructPointer(url_loader$.URLResponseHead);
    val.commonParams = decoder.decodeStructPointer(CommonNavigationParams);
    val.requestParams = decoder.decodeStructPointer(RequestNavigationParams);
    val.urlLoaderClientEndpoints = decoder.decodeStructPointer(url_loader$.URLLoaderClientEndpoints);
    val.subresourceLoaderFactories = decoder.decodeStructPointer(url_loader_factory_bundle$.URLLoaderFactoryBundle);
    val.subresourceOverrides = decoder.decodeArrayPointer(new codec.PointerTo(transferrable_url_loader$.TransferrableURLLoader));
    val.controllerServiceWorkerInfo = decoder.decodeStructPointer(controller_service_worker$.ControllerServiceWorkerInfo);
    val.devtoolsNavigationToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  FrameNavigationControl_CommitNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameNavigationControl_CommitNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url_loader$.URLResponseHead, val.head);
    encoder.encodeStructPointer(CommonNavigationParams, val.commonParams);
    encoder.encodeStructPointer(RequestNavigationParams, val.requestParams);
    encoder.encodeStructPointer(url_loader$.URLLoaderClientEndpoints, val.urlLoaderClientEndpoints);
    encoder.encodeStructPointer(url_loader_factory_bundle$.URLLoaderFactoryBundle, val.subresourceLoaderFactories);
    encoder.encodeArrayPointer(new codec.PointerTo(transferrable_url_loader$.TransferrableURLLoader), val.subresourceOverrides);
    encoder.encodeStructPointer(controller_service_worker$.ControllerServiceWorkerInfo, val.controllerServiceWorkerInfo);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsNavigationToken);
  };
  function FrameNavigationControl_CommitFailedNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameNavigationControl_CommitFailedNavigation_Params.prototype.initDefaults_ = function() {
    this.commonParams = null;
    this.requestParams = null;
    this.hasStaleCopyInCache = false;
    this.errorCode = 0;
    this.errorPageContent = null;
    this.subresourceLoaderFactories = null;
  };
  FrameNavigationControl_CommitFailedNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameNavigationControl_CommitFailedNavigation_Params.generate = function(generator_) {
    var generated = new FrameNavigationControl_CommitFailedNavigation_Params;
    generated.commonParams = generator_.generateStruct(content.mojom.CommonNavigationParams, false);
    generated.requestParams = generator_.generateStruct(content.mojom.RequestNavigationParams, false);
    generated.hasStaleCopyInCache = generator_.generateBool();
    generated.errorCode = generator_.generateInt32();
    generated.errorPageContent = generator_.generateString(true);
    generated.subresourceLoaderFactories = generator_.generateStruct(content.mojom.URLLoaderFactoryBundle, true);
    return generated;
  };

  FrameNavigationControl_CommitFailedNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.commonParams = mutator_.mutateStruct(content.mojom.CommonNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestParams = mutator_.mutateStruct(content.mojom.RequestNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hasStaleCopyInCache = mutator_.mutateBool(this.hasStaleCopyInCache);
    }
    if (mutator_.chooseMutateField()) {
      this.errorCode = mutator_.mutateInt32(this.errorCode);
    }
    if (mutator_.chooseMutateField()) {
      this.errorPageContent = mutator_.mutateString(this.errorPageContent, true);
    }
    if (mutator_.chooseMutateField()) {
      this.subresourceLoaderFactories = mutator_.mutateStruct(content.mojom.URLLoaderFactoryBundle, true);
    }
    return this;
  };
  FrameNavigationControl_CommitFailedNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.subresourceLoaderFactories !== null) {
      Array.prototype.push.apply(handles, this.subresourceLoaderFactories.getHandleDeps());
    }
    return handles;
  };

  FrameNavigationControl_CommitFailedNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameNavigationControl_CommitFailedNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.subresourceLoaderFactories.setHandlesInternal_(handles, idx);
    return idx;
  };

  FrameNavigationControl_CommitFailedNavigation_Params.validate = function(messageValidator, offset) {
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


    // validate FrameNavigationControl_CommitFailedNavigation_Params.commonParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CommonNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitFailedNavigation_Params.requestParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, RequestNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate FrameNavigationControl_CommitFailedNavigation_Params.errorPageContent
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitFailedNavigation_Params.subresourceLoaderFactories
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, url_loader_factory_bundle$.URLLoaderFactoryBundle, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameNavigationControl_CommitFailedNavigation_Params.encodedSize = codec.kStructHeaderSize + 40;

  FrameNavigationControl_CommitFailedNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new FrameNavigationControl_CommitFailedNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.commonParams = decoder.decodeStructPointer(CommonNavigationParams);
    val.requestParams = decoder.decodeStructPointer(RequestNavigationParams);
    packed = decoder.readUint8();
    val.hasStaleCopyInCache = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.errorCode = decoder.decodeStruct(codec.Int32);
    val.errorPageContent = decoder.decodeStruct(codec.NullableString);
    val.subresourceLoaderFactories = decoder.decodeStructPointer(url_loader_factory_bundle$.URLLoaderFactoryBundle);
    return val;
  };

  FrameNavigationControl_CommitFailedNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameNavigationControl_CommitFailedNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CommonNavigationParams, val.commonParams);
    encoder.encodeStructPointer(RequestNavigationParams, val.requestParams);
    packed = 0;
    packed |= (val.hasStaleCopyInCache & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.errorCode);
    encoder.encodeStruct(codec.NullableString, val.errorPageContent);
    encoder.encodeStructPointer(url_loader_factory_bundle$.URLLoaderFactoryBundle, val.subresourceLoaderFactories);
  };
  function FrameNavigationControl_CommitSameDocumentNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameNavigationControl_CommitSameDocumentNavigation_Params.prototype.initDefaults_ = function() {
    this.commonParams = null;
    this.requestParams = null;
  };
  FrameNavigationControl_CommitSameDocumentNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameNavigationControl_CommitSameDocumentNavigation_Params.generate = function(generator_) {
    var generated = new FrameNavigationControl_CommitSameDocumentNavigation_Params;
    generated.commonParams = generator_.generateStruct(content.mojom.CommonNavigationParams, false);
    generated.requestParams = generator_.generateStruct(content.mojom.RequestNavigationParams, false);
    return generated;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.commonParams = mutator_.mutateStruct(content.mojom.CommonNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.requestParams = mutator_.mutateStruct(content.mojom.RequestNavigationParams, false);
    }
    return this;
  };
  FrameNavigationControl_CommitSameDocumentNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameNavigationControl_CommitSameDocumentNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_Params.validate = function(messageValidator, offset) {
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


    // validate FrameNavigationControl_CommitSameDocumentNavigation_Params.commonParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CommonNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameNavigationControl_CommitSameDocumentNavigation_Params.requestParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, RequestNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameNavigationControl_CommitSameDocumentNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new FrameNavigationControl_CommitSameDocumentNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.commonParams = decoder.decodeStructPointer(CommonNavigationParams);
    val.requestParams = decoder.decodeStructPointer(RequestNavigationParams);
    return val;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameNavigationControl_CommitSameDocumentNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CommonNavigationParams, val.commonParams);
    encoder.encodeStructPointer(RequestNavigationParams, val.requestParams);
  };
  function FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.prototype.initDefaults_ = function() {
    this.commitResult = 0;
  };
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.generate = function(generator_) {
    var generated = new FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams;
    generated.commitResult = generator_.generateEnum(0, 2);
    return generated;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.commitResult = mutator_.mutateEnum(this.commitResult, 0, 2);
    }
    return this;
  };
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.commitResult
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, commit_result$.CommitResult);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.commitResult = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.commitResult);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameNavigationControl_HandleRendererDebugURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameNavigationControl_HandleRendererDebugURL_Params.prototype.initDefaults_ = function() {
    this.url = null;
  };
  FrameNavigationControl_HandleRendererDebugURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameNavigationControl_HandleRendererDebugURL_Params.generate = function(generator_) {
    var generated = new FrameNavigationControl_HandleRendererDebugURL_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    return generated;
  };

  FrameNavigationControl_HandleRendererDebugURL_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    return this;
  };
  FrameNavigationControl_HandleRendererDebugURL_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameNavigationControl_HandleRendererDebugURL_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameNavigationControl_HandleRendererDebugURL_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameNavigationControl_HandleRendererDebugURL_Params.validate = function(messageValidator, offset) {
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


    // validate FrameNavigationControl_HandleRendererDebugURL_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameNavigationControl_HandleRendererDebugURL_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameNavigationControl_HandleRendererDebugURL_Params.decode = function(decoder) {
    var packed;
    var val = new FrameNavigationControl_HandleRendererDebugURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    return val;
  };

  FrameNavigationControl_HandleRendererDebugURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameNavigationControl_HandleRendererDebugURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
  };
  function FrameNavigationControl_UpdateSubresourceLoaderFactories_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.prototype.initDefaults_ = function() {
    this.subresourceLoaderFactories = null;
  };
  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.generate = function(generator_) {
    var generated = new FrameNavigationControl_UpdateSubresourceLoaderFactories_Params;
    generated.subresourceLoaderFactories = generator_.generateStruct(content.mojom.URLLoaderFactoryBundle, false);
    return generated;
  };

  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.subresourceLoaderFactories = mutator_.mutateStruct(content.mojom.URLLoaderFactoryBundle, false);
    }
    return this;
  };
  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.subresourceLoaderFactories !== null) {
      Array.prototype.push.apply(handles, this.subresourceLoaderFactories.getHandleDeps());
    }
    return handles;
  };

  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.subresourceLoaderFactories.setHandlesInternal_(handles, idx);
    return idx;
  };

  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.validate = function(messageValidator, offset) {
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


    // validate FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.subresourceLoaderFactories
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url_loader_factory_bundle$.URLLoaderFactoryBundle, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.decode = function(decoder) {
    var packed;
    var val = new FrameNavigationControl_UpdateSubresourceLoaderFactories_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.subresourceLoaderFactories = decoder.decodeStructPointer(url_loader_factory_bundle$.URLLoaderFactoryBundle);
    return val;
  };

  FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url_loader_factory_bundle$.URLLoaderFactoryBundle, val.subresourceLoaderFactories);
  };
  function FrameBindingsControl_AllowBindings_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameBindingsControl_AllowBindings_Params.prototype.initDefaults_ = function() {
    this.enabledBindingsFlags = 0;
  };
  FrameBindingsControl_AllowBindings_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameBindingsControl_AllowBindings_Params.generate = function(generator_) {
    var generated = new FrameBindingsControl_AllowBindings_Params;
    generated.enabledBindingsFlags = generator_.generateInt32();
    return generated;
  };

  FrameBindingsControl_AllowBindings_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.enabledBindingsFlags = mutator_.mutateInt32(this.enabledBindingsFlags);
    }
    return this;
  };
  FrameBindingsControl_AllowBindings_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameBindingsControl_AllowBindings_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameBindingsControl_AllowBindings_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameBindingsControl_AllowBindings_Params.validate = function(messageValidator, offset) {
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

  FrameBindingsControl_AllowBindings_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameBindingsControl_AllowBindings_Params.decode = function(decoder) {
    var packed;
    var val = new FrameBindingsControl_AllowBindings_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.enabledBindingsFlags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameBindingsControl_AllowBindings_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameBindingsControl_AllowBindings_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.enabledBindingsFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameFactory_CreateFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameFactory_CreateFrame_Params.prototype.initDefaults_ = function() {
    this.frameRoutingId = 0;
    this.frame = new bindings.InterfaceRequest();
  };
  FrameFactory_CreateFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameFactory_CreateFrame_Params.generate = function(generator_) {
    var generated = new FrameFactory_CreateFrame_Params;
    generated.frameRoutingId = generator_.generateInt32();
    generated.frame = generator_.generateInterfaceRequest("content.mojom.Frame", false);
    return generated;
  };

  FrameFactory_CreateFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.frameRoutingId = mutator_.mutateInt32(this.frameRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.frame = mutator_.mutateInterfaceRequest(this.frame, "content.mojom.Frame", false);
    }
    return this;
  };
  FrameFactory_CreateFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.frame !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.FrameRequest"]);
    }
    return handles;
  };

  FrameFactory_CreateFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameFactory_CreateFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.frame = handles[idx++];;
    return idx;
  };

  FrameFactory_CreateFrame_Params.validate = function(messageValidator, offset) {
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



    // validate FrameFactory_CreateFrame_Params.frame
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameFactory_CreateFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameFactory_CreateFrame_Params.decode = function(decoder) {
    var packed;
    var val = new FrameFactory_CreateFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameRoutingId = decoder.decodeStruct(codec.Int32);
    val.frame = decoder.decodeStruct(codec.InterfaceRequest);
    return val;
  };

  FrameFactory_CreateFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameFactory_CreateFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.frameRoutingId);
    encoder.encodeStruct(codec.InterfaceRequest, val.frame);
  };
  function FrameHost_CreateNewWindow_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_CreateNewWindow_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  FrameHost_CreateNewWindow_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_CreateNewWindow_Params.generate = function(generator_) {
    var generated = new FrameHost_CreateNewWindow_Params;
    generated.params = generator_.generateStruct(content.mojom.CreateNewWindowParams, false);
    return generated;
  };

  FrameHost_CreateNewWindow_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.CreateNewWindowParams, false);
    }
    return this;
  };
  FrameHost_CreateNewWindow_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_CreateNewWindow_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_CreateNewWindow_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_CreateNewWindow_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_CreateNewWindow_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CreateNewWindowParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_CreateNewWindow_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_CreateNewWindow_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_CreateNewWindow_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(CreateNewWindowParams);
    return val;
  };

  FrameHost_CreateNewWindow_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_CreateNewWindow_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CreateNewWindowParams, val.params);
  };
  function FrameHost_CreateNewWindow_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_CreateNewWindow_ResponseParams.prototype.initDefaults_ = function() {
    this.status = 0;
    this.reply = null;
  };
  FrameHost_CreateNewWindow_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_CreateNewWindow_ResponseParams.generate = function(generator_) {
    var generated = new FrameHost_CreateNewWindow_ResponseParams;
    generated.status = generator_.generateEnum(0, 2);
    generated.reply = generator_.generateStruct(content.mojom.CreateNewWindowReply, true);
    return generated;
  };

  FrameHost_CreateNewWindow_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.status = mutator_.mutateEnum(this.status, 0, 2);
    }
    if (mutator_.chooseMutateField()) {
      this.reply = mutator_.mutateStruct(content.mojom.CreateNewWindowReply, true);
    }
    return this;
  };
  FrameHost_CreateNewWindow_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.reply !== null) {
      Array.prototype.push.apply(handles, this.reply.getHandleDeps());
    }
    return handles;
  };

  FrameHost_CreateNewWindow_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_CreateNewWindow_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.reply.setHandlesInternal_(handles, idx);
    return idx;
  };

  FrameHost_CreateNewWindow_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate FrameHost_CreateNewWindow_ResponseParams.status
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CreateNewWindowStatus);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameHost_CreateNewWindow_ResponseParams.reply
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, CreateNewWindowReply, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_CreateNewWindow_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  FrameHost_CreateNewWindow_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new FrameHost_CreateNewWindow_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reply = decoder.decodeStructPointer(CreateNewWindowReply);
    return val;
  };

  FrameHost_CreateNewWindow_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_CreateNewWindow_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.status);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(CreateNewWindowReply, val.reply);
  };
  function FrameHost_IssueKeepAliveHandle_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_IssueKeepAliveHandle_Params.prototype.initDefaults_ = function() {
    this.keepAliveHandle = new bindings.InterfaceRequest();
  };
  FrameHost_IssueKeepAliveHandle_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_IssueKeepAliveHandle_Params.generate = function(generator_) {
    var generated = new FrameHost_IssueKeepAliveHandle_Params;
    generated.keepAliveHandle = generator_.generateInterfaceRequest("content.mojom.KeepAliveHandle", false);
    return generated;
  };

  FrameHost_IssueKeepAliveHandle_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keepAliveHandle = mutator_.mutateInterfaceRequest(this.keepAliveHandle, "content.mojom.KeepAliveHandle", false);
    }
    return this;
  };
  FrameHost_IssueKeepAliveHandle_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.keepAliveHandle !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.KeepAliveHandleRequest"]);
    }
    return handles;
  };

  FrameHost_IssueKeepAliveHandle_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_IssueKeepAliveHandle_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.keepAliveHandle = handles[idx++];;
    return idx;
  };

  FrameHost_IssueKeepAliveHandle_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_IssueKeepAliveHandle_Params.keepAliveHandle
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_IssueKeepAliveHandle_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_IssueKeepAliveHandle_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_IssueKeepAliveHandle_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keepAliveHandle = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameHost_IssueKeepAliveHandle_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_IssueKeepAliveHandle_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.keepAliveHandle);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameHost_DidCommitProvisionalLoad_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_DidCommitProvisionalLoad_Params.prototype.initDefaults_ = function() {
    this.params = null;
    this.interfaceProviderRequest = new bindings.InterfaceRequest();
  };
  FrameHost_DidCommitProvisionalLoad_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_DidCommitProvisionalLoad_Params.generate = function(generator_) {
    var generated = new FrameHost_DidCommitProvisionalLoad_Params;
    generated.params = generator_.generateStruct(content.mojom.DidCommitProvisionalLoadParams, false);
    generated.interfaceProviderRequest = generator_.generateInterfaceRequest("serviceManager.mojom.InterfaceProvider", true);
    return generated;
  };

  FrameHost_DidCommitProvisionalLoad_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.DidCommitProvisionalLoadParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceProviderRequest = mutator_.mutateInterfaceRequest(this.interfaceProviderRequest, "serviceManager.mojom.InterfaceProvider", true);
    }
    return this;
  };
  FrameHost_DidCommitProvisionalLoad_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.interfaceProviderRequest !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderRequest"]);
    }
    return handles;
  };

  FrameHost_DidCommitProvisionalLoad_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_DidCommitProvisionalLoad_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.interfaceProviderRequest = handles[idx++];;
    return idx;
  };

  FrameHost_DidCommitProvisionalLoad_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_DidCommitProvisionalLoad_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, DidCommitProvisionalLoadParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameHost_DidCommitProvisionalLoad_Params.interfaceProviderRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_DidCommitProvisionalLoad_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameHost_DidCommitProvisionalLoad_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_DidCommitProvisionalLoad_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(DidCommitProvisionalLoadParams);
    val.interfaceProviderRequest = decoder.decodeStruct(codec.NullableInterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameHost_DidCommitProvisionalLoad_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_DidCommitProvisionalLoad_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(DidCommitProvisionalLoadParams, val.params);
    encoder.encodeStruct(codec.NullableInterfaceRequest, val.interfaceProviderRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameHost_DidCommitSameDocumentNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_DidCommitSameDocumentNavigation_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  FrameHost_DidCommitSameDocumentNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_DidCommitSameDocumentNavigation_Params.generate = function(generator_) {
    var generated = new FrameHost_DidCommitSameDocumentNavigation_Params;
    generated.params = generator_.generateStruct(content.mojom.DidCommitProvisionalLoadParams, false);
    return generated;
  };

  FrameHost_DidCommitSameDocumentNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.DidCommitProvisionalLoadParams, false);
    }
    return this;
  };
  FrameHost_DidCommitSameDocumentNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_DidCommitSameDocumentNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_DidCommitSameDocumentNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_DidCommitSameDocumentNavigation_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_DidCommitSameDocumentNavigation_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, DidCommitProvisionalLoadParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_DidCommitSameDocumentNavigation_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_DidCommitSameDocumentNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_DidCommitSameDocumentNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(DidCommitProvisionalLoadParams);
    return val;
  };

  FrameHost_DidCommitSameDocumentNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_DidCommitSameDocumentNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(DidCommitProvisionalLoadParams, val.params);
  };
  function FrameHost_BeginNavigation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_BeginNavigation_Params.prototype.initDefaults_ = function() {
    this.commonParams = null;
    this.beginParams = null;
    this.blobUrlToken = new blob_url_store$.BlobURLTokenPtr();
  };
  FrameHost_BeginNavigation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_BeginNavigation_Params.generate = function(generator_) {
    var generated = new FrameHost_BeginNavigation_Params;
    generated.commonParams = generator_.generateStruct(content.mojom.CommonNavigationParams, false);
    generated.beginParams = generator_.generateStruct(content.mojom.BeginNavigationParams, false);
    generated.blobUrlToken = generator_.generateInterface("blink.mojom.BlobURLToken", true);
    return generated;
  };

  FrameHost_BeginNavigation_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.commonParams = mutator_.mutateStruct(content.mojom.CommonNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.beginParams = mutator_.mutateStruct(content.mojom.BeginNavigationParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.blobUrlToken = mutator_.mutateInterface(this.blobUrlToken, "blink.mojom.BlobURLToken", true);
    }
    return this;
  };
  FrameHost_BeginNavigation_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.blobUrlToken !== null) {
      Array.prototype.push.apply(handles, ["blink.mojom.BlobURLTokenPtr"]);
    }
    return handles;
  };

  FrameHost_BeginNavigation_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_BeginNavigation_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.blobUrlToken = handles[idx++];;
    return idx;
  };

  FrameHost_BeginNavigation_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_BeginNavigation_Params.commonParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CommonNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameHost_BeginNavigation_Params.beginParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, navigation_params$.BeginNavigationParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameHost_BeginNavigation_Params.blobUrlToken
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_BeginNavigation_Params.encodedSize = codec.kStructHeaderSize + 24;

  FrameHost_BeginNavigation_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_BeginNavigation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.commonParams = decoder.decodeStructPointer(CommonNavigationParams);
    val.beginParams = decoder.decodeStructPointer(navigation_params$.BeginNavigationParams);
    val.blobUrlToken = decoder.decodeStruct(new codec.NullableInterface(blob_url_store$.BlobURLTokenPtr));
    return val;
  };

  FrameHost_BeginNavigation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_BeginNavigation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CommonNavigationParams, val.commonParams);
    encoder.encodeStructPointer(navigation_params$.BeginNavigationParams, val.beginParams);
    encoder.encodeStruct(new codec.NullableInterface(blob_url_store$.BlobURLTokenPtr), val.blobUrlToken);
  };
  function FrameHost_SubresourceResponseStarted_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_SubresourceResponseStarted_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.certStatus = 0;
  };
  FrameHost_SubresourceResponseStarted_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_SubresourceResponseStarted_Params.generate = function(generator_) {
    var generated = new FrameHost_SubresourceResponseStarted_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.certStatus = generator_.generateUint32();
    return generated;
  };

  FrameHost_SubresourceResponseStarted_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.certStatus = mutator_.mutateUint32(this.certStatus);
    }
    return this;
  };
  FrameHost_SubresourceResponseStarted_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_SubresourceResponseStarted_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_SubresourceResponseStarted_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_SubresourceResponseStarted_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_SubresourceResponseStarted_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FrameHost_SubresourceResponseStarted_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameHost_SubresourceResponseStarted_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_SubresourceResponseStarted_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    val.certStatus = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameHost_SubresourceResponseStarted_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_SubresourceResponseStarted_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStruct(codec.Uint32, val.certStatus);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameHost_ResourceLoadComplete_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_ResourceLoadComplete_Params.prototype.initDefaults_ = function() {
    this.urlLoadInfo = null;
  };
  FrameHost_ResourceLoadComplete_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_ResourceLoadComplete_Params.generate = function(generator_) {
    var generated = new FrameHost_ResourceLoadComplete_Params;
    generated.urlLoadInfo = generator_.generateStruct(content.mojom.ResourceLoadInfo, false);
    return generated;
  };

  FrameHost_ResourceLoadComplete_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.urlLoadInfo = mutator_.mutateStruct(content.mojom.ResourceLoadInfo, false);
    }
    return this;
  };
  FrameHost_ResourceLoadComplete_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_ResourceLoadComplete_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_ResourceLoadComplete_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_ResourceLoadComplete_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_ResourceLoadComplete_Params.urlLoadInfo
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, resource_load_info$.ResourceLoadInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_ResourceLoadComplete_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_ResourceLoadComplete_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_ResourceLoadComplete_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.urlLoadInfo = decoder.decodeStructPointer(resource_load_info$.ResourceLoadInfo);
    return val;
  };

  FrameHost_ResourceLoadComplete_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_ResourceLoadComplete_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(resource_load_info$.ResourceLoadInfo, val.urlLoadInfo);
  };
  function FrameHost_DidChangeName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_DidChangeName_Params.prototype.initDefaults_ = function() {
    this.name = null;
    this.uniqueName = null;
  };
  FrameHost_DidChangeName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_DidChangeName_Params.generate = function(generator_) {
    var generated = new FrameHost_DidChangeName_Params;
    generated.name = generator_.generateString(false);
    generated.uniqueName = generator_.generateString(false);
    return generated;
  };

  FrameHost_DidChangeName_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.name = mutator_.mutateString(this.name, false);
    }
    if (mutator_.chooseMutateField()) {
      this.uniqueName = mutator_.mutateString(this.uniqueName, false);
    }
    return this;
  };
  FrameHost_DidChangeName_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_DidChangeName_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_DidChangeName_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_DidChangeName_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_DidChangeName_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameHost_DidChangeName_Params.uniqueName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_DidChangeName_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameHost_DidChangeName_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_DidChangeName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    val.uniqueName = decoder.decodeStruct(codec.String);
    return val;
  };

  FrameHost_DidChangeName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_DidChangeName_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
    encoder.encodeStruct(codec.String, val.uniqueName);
  };
  function FrameHost_EnforceInsecureRequestPolicy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_EnforceInsecureRequestPolicy_Params.prototype.initDefaults_ = function() {
    this.policyBitmap = 0;
  };
  FrameHost_EnforceInsecureRequestPolicy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_EnforceInsecureRequestPolicy_Params.generate = function(generator_) {
    var generated = new FrameHost_EnforceInsecureRequestPolicy_Params;
    generated.policyBitmap = generator_.generateUint8();
    return generated;
  };

  FrameHost_EnforceInsecureRequestPolicy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.policyBitmap = mutator_.mutateUint8(this.policyBitmap);
    }
    return this;
  };
  FrameHost_EnforceInsecureRequestPolicy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_EnforceInsecureRequestPolicy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_EnforceInsecureRequestPolicy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_EnforceInsecureRequestPolicy_Params.validate = function(messageValidator, offset) {
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

  FrameHost_EnforceInsecureRequestPolicy_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_EnforceInsecureRequestPolicy_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_EnforceInsecureRequestPolicy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.policyBitmap = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FrameHost_EnforceInsecureRequestPolicy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_EnforceInsecureRequestPolicy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.policyBitmap);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FrameHost_EnforceInsecureNavigationsSet_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_EnforceInsecureNavigationsSet_Params.prototype.initDefaults_ = function() {
    this.set = null;
  };
  FrameHost_EnforceInsecureNavigationsSet_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_EnforceInsecureNavigationsSet_Params.generate = function(generator_) {
    var generated = new FrameHost_EnforceInsecureNavigationsSet_Params;
    generated.set = generator_.generateArray(function() {
      return generator_.generateUint32();
    });
    return generated;
  };

  FrameHost_EnforceInsecureNavigationsSet_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.set = mutator_.mutateArray(this.set, function(val) {
        return mutator_.mutateUint32(val);
      });
    }
    return this;
  };
  FrameHost_EnforceInsecureNavigationsSet_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_EnforceInsecureNavigationsSet_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_EnforceInsecureNavigationsSet_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_EnforceInsecureNavigationsSet_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_EnforceInsecureNavigationsSet_Params.set
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 4, codec.Uint32, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_EnforceInsecureNavigationsSet_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_EnforceInsecureNavigationsSet_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_EnforceInsecureNavigationsSet_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.set = decoder.decodeArrayPointer(codec.Uint32);
    return val;
  };

  FrameHost_EnforceInsecureNavigationsSet_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_EnforceInsecureNavigationsSet_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint32, val.set);
  };
  function FrameHost_DidSetFramePolicyHeaders_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_DidSetFramePolicyHeaders_Params.prototype.initDefaults_ = function() {
    this.sandboxFlags = 0;
    this.parsedHeader = null;
  };
  FrameHost_DidSetFramePolicyHeaders_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_DidSetFramePolicyHeaders_Params.generate = function(generator_) {
    var generated = new FrameHost_DidSetFramePolicyHeaders_Params;
    generated.sandboxFlags = generator_.generateEnum(0, 32768);
    generated.parsedHeader = generator_.generateArray(function() {
      return generator_.generateStruct(blink.mojom.ParsedFeaturePolicyDeclaration, false);
    });
    return generated;
  };

  FrameHost_DidSetFramePolicyHeaders_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.sandboxFlags = mutator_.mutateEnum(this.sandboxFlags, 0, 32768);
    }
    if (mutator_.chooseMutateField()) {
      this.parsedHeader = mutator_.mutateArray(this.parsedHeader, function(val) {
        return mutator_.mutateStruct(blink.mojom.ParsedFeaturePolicyDeclaration, false);
      });
    }
    return this;
  };
  FrameHost_DidSetFramePolicyHeaders_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_DidSetFramePolicyHeaders_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_DidSetFramePolicyHeaders_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_DidSetFramePolicyHeaders_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_DidSetFramePolicyHeaders_Params.sandboxFlags
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, feature_policy$.WebSandboxFlags);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FrameHost_DidSetFramePolicyHeaders_Params.parsedHeader
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(feature_policy$.ParsedFeaturePolicyDeclaration), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_DidSetFramePolicyHeaders_Params.encodedSize = codec.kStructHeaderSize + 16;

  FrameHost_DidSetFramePolicyHeaders_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_DidSetFramePolicyHeaders_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sandboxFlags = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.parsedHeader = decoder.decodeArrayPointer(new codec.PointerTo(feature_policy$.ParsedFeaturePolicyDeclaration));
    return val;
  };

  FrameHost_DidSetFramePolicyHeaders_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_DidSetFramePolicyHeaders_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.sandboxFlags);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(feature_policy$.ParsedFeaturePolicyDeclaration), val.parsedHeader);
  };
  function FrameHost_CancelInitialHistoryLoad_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_CancelInitialHistoryLoad_Params.prototype.initDefaults_ = function() {
  };
  FrameHost_CancelInitialHistoryLoad_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_CancelInitialHistoryLoad_Params.generate = function(generator_) {
    var generated = new FrameHost_CancelInitialHistoryLoad_Params;
    return generated;
  };

  FrameHost_CancelInitialHistoryLoad_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  FrameHost_CancelInitialHistoryLoad_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_CancelInitialHistoryLoad_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_CancelInitialHistoryLoad_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_CancelInitialHistoryLoad_Params.validate = function(messageValidator, offset) {
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

  FrameHost_CancelInitialHistoryLoad_Params.encodedSize = codec.kStructHeaderSize + 0;

  FrameHost_CancelInitialHistoryLoad_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_CancelInitialHistoryLoad_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FrameHost_CancelInitialHistoryLoad_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_CancelInitialHistoryLoad_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function FrameHost_UpdateEncoding_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_UpdateEncoding_Params.prototype.initDefaults_ = function() {
    this.encodingName = null;
  };
  FrameHost_UpdateEncoding_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_UpdateEncoding_Params.generate = function(generator_) {
    var generated = new FrameHost_UpdateEncoding_Params;
    generated.encodingName = generator_.generateString(false);
    return generated;
  };

  FrameHost_UpdateEncoding_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.encodingName = mutator_.mutateString(this.encodingName, false);
    }
    return this;
  };
  FrameHost_UpdateEncoding_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_UpdateEncoding_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_UpdateEncoding_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_UpdateEncoding_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_UpdateEncoding_Params.encodingName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_UpdateEncoding_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_UpdateEncoding_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_UpdateEncoding_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.encodingName = decoder.decodeStruct(codec.String);
    return val;
  };

  FrameHost_UpdateEncoding_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_UpdateEncoding_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.encodingName);
  };
  function FrameHost_FrameSizeChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FrameHost_FrameSizeChanged_Params.prototype.initDefaults_ = function() {
    this.size = null;
  };
  FrameHost_FrameSizeChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FrameHost_FrameSizeChanged_Params.generate = function(generator_) {
    var generated = new FrameHost_FrameSizeChanged_Params;
    generated.size = generator_.generateStruct(gfx.mojom.Size, false);
    return generated;
  };

  FrameHost_FrameSizeChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.size = mutator_.mutateStruct(gfx.mojom.Size, false);
    }
    return this;
  };
  FrameHost_FrameSizeChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FrameHost_FrameSizeChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FrameHost_FrameSizeChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FrameHost_FrameSizeChanged_Params.validate = function(messageValidator, offset) {
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


    // validate FrameHost_FrameSizeChanged_Params.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FrameHost_FrameSizeChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  FrameHost_FrameSizeChanged_Params.decode = function(decoder) {
    var packed;
    var val = new FrameHost_FrameSizeChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStructPointer(geometry$.Size);
    return val;
  };

  FrameHost_FrameSizeChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FrameHost_FrameSizeChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.size);
  };
  var kFrame_GetInterfaceProvider_Name = 292232516;
  var kFrame_GetCanonicalUrlForSharing_Name = 902892967;

  function FramePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Frame,
                                                   handleOrPtrInfo);
  }

  function FrameAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Frame, associatedInterfacePtrInfo);
  }

  FrameAssociatedPtr.prototype =
      Object.create(FramePtr.prototype);
  FrameAssociatedPtr.prototype.constructor =
      FrameAssociatedPtr;

  function FrameProxy(receiver) {
    this.receiver_ = receiver;
  }
  FramePtr.prototype.getInterfaceProvider = function() {
    return FrameProxy.prototype.getInterfaceProvider
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameProxy.prototype.getInterfaceProvider = function(interfaces) {
    var params_ = new Frame_GetInterfaceProvider_Params();
    params_.interfaces = interfaces;
    var builder = new codec.MessageV0Builder(
        kFrame_GetInterfaceProvider_Name,
        codec.align(Frame_GetInterfaceProvider_Params.encodedSize));
    builder.encodeStruct(Frame_GetInterfaceProvider_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FramePtr.prototype.getCanonicalUrlForSharing = function() {
    return FrameProxy.prototype.getCanonicalUrlForSharing
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameProxy.prototype.getCanonicalUrlForSharing = function() {
    var params_ = new Frame_GetCanonicalUrlForSharing_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFrame_GetCanonicalUrlForSharing_Name,
          codec.align(Frame_GetCanonicalUrlForSharing_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Frame_GetCanonicalUrlForSharing_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Frame_GetCanonicalUrlForSharing_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FrameStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameStub.prototype.getInterfaceProvider = function(interfaces) {
    return this.delegate_ && this.delegate_.getInterfaceProvider && this.delegate_.getInterfaceProvider(interfaces);
  }
  FrameStub.prototype.getCanonicalUrlForSharing = function() {
    return this.delegate_ && this.delegate_.getCanonicalUrlForSharing && this.delegate_.getCanonicalUrlForSharing();
  }

  FrameStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrame_GetInterfaceProvider_Name:
      var params = reader.decodeStruct(Frame_GetInterfaceProvider_Params);
      this.getInterfaceProvider(params.interfaces);
      return true;
    default:
      return false;
    }
  };

  FrameStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrame_GetCanonicalUrlForSharing_Name:
      var params = reader.decodeStruct(Frame_GetCanonicalUrlForSharing_Params);
      this.getCanonicalUrlForSharing().then(function(response) {
        var responseParams =
            new Frame_GetCanonicalUrlForSharing_ResponseParams();
        responseParams.canonicalUrl = response.canonicalUrl;
        var builder = new codec.MessageV1Builder(
            kFrame_GetCanonicalUrlForSharing_Name,
            codec.align(Frame_GetCanonicalUrlForSharing_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Frame_GetCanonicalUrlForSharing_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFrameRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrame_GetInterfaceProvider_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Frame_GetInterfaceProvider_Params;
      break;
      case kFrame_GetCanonicalUrlForSharing_Name:
        if (message.expectsResponse())
          paramsClass = Frame_GetCanonicalUrlForSharing_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFrame_GetCanonicalUrlForSharing_Name:
        if (message.isResponse())
          paramsClass = Frame_GetCanonicalUrlForSharing_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Frame = {
    name: 'content.mojom.Frame',
    kVersion: 0,
    ptrClass: FramePtr,
    proxyClass: FrameProxy,
    stubClass: FrameStub,
    validateRequest: validateFrameRequest,
    validateResponse: validateFrameResponse,
    mojomId: 'content/common/frame.mojom',
    fuzzMethods: {
      getInterfaceProvider: {
        params: Frame_GetInterfaceProvider_Params,
      },
      getCanonicalUrlForSharing: {
        params: Frame_GetCanonicalUrlForSharing_Params,
      },
    },
  };
  FrameStub.prototype.validator = validateFrameRequest;
  FrameProxy.prototype.validator = validateFrameResponse;
  var kFrameNavigationControl_CommitNavigation_Name = 310106685;
  var kFrameNavigationControl_CommitFailedNavigation_Name = 269527215;
  var kFrameNavigationControl_CommitSameDocumentNavigation_Name = 651697597;
  var kFrameNavigationControl_HandleRendererDebugURL_Name = 236299665;
  var kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name = 1547198475;

  function FrameNavigationControlPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameNavigationControl,
                                                   handleOrPtrInfo);
  }

  function FrameNavigationControlAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameNavigationControl, associatedInterfacePtrInfo);
  }

  FrameNavigationControlAssociatedPtr.prototype =
      Object.create(FrameNavigationControlPtr.prototype);
  FrameNavigationControlAssociatedPtr.prototype.constructor =
      FrameNavigationControlAssociatedPtr;

  function FrameNavigationControlProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameNavigationControlPtr.prototype.commitNavigation = function() {
    return FrameNavigationControlProxy.prototype.commitNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameNavigationControlProxy.prototype.commitNavigation = function(head, commonParams, requestParams, urlLoaderClientEndpoints, subresourceLoaderFactories, subresourceOverrides, controllerServiceWorkerInfo, devtoolsNavigationToken) {
    var params_ = new FrameNavigationControl_CommitNavigation_Params();
    params_.head = head;
    params_.commonParams = commonParams;
    params_.requestParams = requestParams;
    params_.urlLoaderClientEndpoints = urlLoaderClientEndpoints;
    params_.subresourceLoaderFactories = subresourceLoaderFactories;
    params_.subresourceOverrides = subresourceOverrides;
    params_.controllerServiceWorkerInfo = controllerServiceWorkerInfo;
    params_.devtoolsNavigationToken = devtoolsNavigationToken;
    var builder = new codec.MessageV2Builder(
        kFrameNavigationControl_CommitNavigation_Name,
        codec.align(FrameNavigationControl_CommitNavigation_Params.encodedSize));
    builder.setPayload(FrameNavigationControl_CommitNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameNavigationControlPtr.prototype.commitFailedNavigation = function() {
    return FrameNavigationControlProxy.prototype.commitFailedNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameNavigationControlProxy.prototype.commitFailedNavigation = function(commonParams, requestParams, hasStaleCopyInCache, errorCode, errorPageContent, subresourceLoaderFactories) {
    var params_ = new FrameNavigationControl_CommitFailedNavigation_Params();
    params_.commonParams = commonParams;
    params_.requestParams = requestParams;
    params_.hasStaleCopyInCache = hasStaleCopyInCache;
    params_.errorCode = errorCode;
    params_.errorPageContent = errorPageContent;
    params_.subresourceLoaderFactories = subresourceLoaderFactories;
    var builder = new codec.MessageV0Builder(
        kFrameNavigationControl_CommitFailedNavigation_Name,
        codec.align(FrameNavigationControl_CommitFailedNavigation_Params.encodedSize));
    builder.encodeStruct(FrameNavigationControl_CommitFailedNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameNavigationControlPtr.prototype.commitSameDocumentNavigation = function() {
    return FrameNavigationControlProxy.prototype.commitSameDocumentNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameNavigationControlProxy.prototype.commitSameDocumentNavigation = function(commonParams, requestParams) {
    var params_ = new FrameNavigationControl_CommitSameDocumentNavigation_Params();
    params_.commonParams = commonParams;
    params_.requestParams = requestParams;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFrameNavigationControl_CommitSameDocumentNavigation_Name,
          codec.align(FrameNavigationControl_CommitSameDocumentNavigation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FrameNavigationControl_CommitSameDocumentNavigation_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FrameNavigationControlPtr.prototype.handleRendererDebugURL = function() {
    return FrameNavigationControlProxy.prototype.handleRendererDebugURL
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameNavigationControlProxy.prototype.handleRendererDebugURL = function(url) {
    var params_ = new FrameNavigationControl_HandleRendererDebugURL_Params();
    params_.url = url;
    var builder = new codec.MessageV0Builder(
        kFrameNavigationControl_HandleRendererDebugURL_Name,
        codec.align(FrameNavigationControl_HandleRendererDebugURL_Params.encodedSize));
    builder.encodeStruct(FrameNavigationControl_HandleRendererDebugURL_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameNavigationControlPtr.prototype.updateSubresourceLoaderFactories = function() {
    return FrameNavigationControlProxy.prototype.updateSubresourceLoaderFactories
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameNavigationControlProxy.prototype.updateSubresourceLoaderFactories = function(subresourceLoaderFactories) {
    var params_ = new FrameNavigationControl_UpdateSubresourceLoaderFactories_Params();
    params_.subresourceLoaderFactories = subresourceLoaderFactories;
    var builder = new codec.MessageV0Builder(
        kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name,
        codec.align(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params.encodedSize));
    builder.encodeStruct(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameNavigationControlStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameNavigationControlStub.prototype.commitNavigation = function(head, commonParams, requestParams, urlLoaderClientEndpoints, subresourceLoaderFactories, subresourceOverrides, controllerServiceWorkerInfo, devtoolsNavigationToken) {
    return this.delegate_ && this.delegate_.commitNavigation && this.delegate_.commitNavigation(head, commonParams, requestParams, urlLoaderClientEndpoints, subresourceLoaderFactories, subresourceOverrides, controllerServiceWorkerInfo, devtoolsNavigationToken);
  }
  FrameNavigationControlStub.prototype.commitFailedNavigation = function(commonParams, requestParams, hasStaleCopyInCache, errorCode, errorPageContent, subresourceLoaderFactories) {
    return this.delegate_ && this.delegate_.commitFailedNavigation && this.delegate_.commitFailedNavigation(commonParams, requestParams, hasStaleCopyInCache, errorCode, errorPageContent, subresourceLoaderFactories);
  }
  FrameNavigationControlStub.prototype.commitSameDocumentNavigation = function(commonParams, requestParams) {
    return this.delegate_ && this.delegate_.commitSameDocumentNavigation && this.delegate_.commitSameDocumentNavigation(commonParams, requestParams);
  }
  FrameNavigationControlStub.prototype.handleRendererDebugURL = function(url) {
    return this.delegate_ && this.delegate_.handleRendererDebugURL && this.delegate_.handleRendererDebugURL(url);
  }
  FrameNavigationControlStub.prototype.updateSubresourceLoaderFactories = function(subresourceLoaderFactories) {
    return this.delegate_ && this.delegate_.updateSubresourceLoaderFactories && this.delegate_.updateSubresourceLoaderFactories(subresourceLoaderFactories);
  }

  FrameNavigationControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameNavigationControl_CommitNavigation_Name:
      var params = reader.decodeStruct(FrameNavigationControl_CommitNavigation_Params);
      this.commitNavigation(params.head, params.commonParams, params.requestParams, params.urlLoaderClientEndpoints, params.subresourceLoaderFactories, params.subresourceOverrides, params.controllerServiceWorkerInfo, params.devtoolsNavigationToken);
      return true;
    case kFrameNavigationControl_CommitFailedNavigation_Name:
      var params = reader.decodeStruct(FrameNavigationControl_CommitFailedNavigation_Params);
      this.commitFailedNavigation(params.commonParams, params.requestParams, params.hasStaleCopyInCache, params.errorCode, params.errorPageContent, params.subresourceLoaderFactories);
      return true;
    case kFrameNavigationControl_HandleRendererDebugURL_Name:
      var params = reader.decodeStruct(FrameNavigationControl_HandleRendererDebugURL_Params);
      this.handleRendererDebugURL(params.url);
      return true;
    case kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name:
      var params = reader.decodeStruct(FrameNavigationControl_UpdateSubresourceLoaderFactories_Params);
      this.updateSubresourceLoaderFactories(params.subresourceLoaderFactories);
      return true;
    default:
      return false;
    }
  };

  FrameNavigationControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameNavigationControl_CommitSameDocumentNavigation_Name:
      var params = reader.decodeStruct(FrameNavigationControl_CommitSameDocumentNavigation_Params);
      this.commitSameDocumentNavigation(params.commonParams, params.requestParams).then(function(response) {
        var responseParams =
            new FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams();
        responseParams.commitResult = response.commitResult;
        var builder = new codec.MessageV1Builder(
            kFrameNavigationControl_CommitSameDocumentNavigation_Name,
            codec.align(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFrameNavigationControlRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameNavigationControl_CommitNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameNavigationControl_CommitNavigation_Params;
      break;
      case kFrameNavigationControl_CommitFailedNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameNavigationControl_CommitFailedNavigation_Params;
      break;
      case kFrameNavigationControl_CommitSameDocumentNavigation_Name:
        if (message.expectsResponse())
          paramsClass = FrameNavigationControl_CommitSameDocumentNavigation_Params;
      break;
      case kFrameNavigationControl_HandleRendererDebugURL_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameNavigationControl_HandleRendererDebugURL_Params;
      break;
      case kFrameNavigationControl_UpdateSubresourceLoaderFactories_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameNavigationControl_UpdateSubresourceLoaderFactories_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameNavigationControlResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFrameNavigationControl_CommitSameDocumentNavigation_Name:
        if (message.isResponse())
          paramsClass = FrameNavigationControl_CommitSameDocumentNavigation_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FrameNavigationControl = {
    name: 'content.mojom.FrameNavigationControl',
    kVersion: 0,
    ptrClass: FrameNavigationControlPtr,
    proxyClass: FrameNavigationControlProxy,
    stubClass: FrameNavigationControlStub,
    validateRequest: validateFrameNavigationControlRequest,
    validateResponse: validateFrameNavigationControlResponse,
    mojomId: 'content/common/frame.mojom',
    fuzzMethods: {
      commitNavigation: {
        params: FrameNavigationControl_CommitNavigation_Params,
      },
      commitFailedNavigation: {
        params: FrameNavigationControl_CommitFailedNavigation_Params,
      },
      commitSameDocumentNavigation: {
        params: FrameNavigationControl_CommitSameDocumentNavigation_Params,
      },
      handleRendererDebugURL: {
        params: FrameNavigationControl_HandleRendererDebugURL_Params,
      },
      updateSubresourceLoaderFactories: {
        params: FrameNavigationControl_UpdateSubresourceLoaderFactories_Params,
      },
    },
  };
  FrameNavigationControlStub.prototype.validator = validateFrameNavigationControlRequest;
  FrameNavigationControlProxy.prototype.validator = validateFrameNavigationControlResponse;
  var kFrameBindingsControl_AllowBindings_Name = 904928104;

  function FrameBindingsControlPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameBindingsControl,
                                                   handleOrPtrInfo);
  }

  function FrameBindingsControlAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameBindingsControl, associatedInterfacePtrInfo);
  }

  FrameBindingsControlAssociatedPtr.prototype =
      Object.create(FrameBindingsControlPtr.prototype);
  FrameBindingsControlAssociatedPtr.prototype.constructor =
      FrameBindingsControlAssociatedPtr;

  function FrameBindingsControlProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameBindingsControlPtr.prototype.allowBindings = function() {
    return FrameBindingsControlProxy.prototype.allowBindings
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameBindingsControlProxy.prototype.allowBindings = function(enabledBindingsFlags) {
    var params_ = new FrameBindingsControl_AllowBindings_Params();
    params_.enabledBindingsFlags = enabledBindingsFlags;
    var builder = new codec.MessageV0Builder(
        kFrameBindingsControl_AllowBindings_Name,
        codec.align(FrameBindingsControl_AllowBindings_Params.encodedSize));
    builder.encodeStruct(FrameBindingsControl_AllowBindings_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameBindingsControlStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameBindingsControlStub.prototype.allowBindings = function(enabledBindingsFlags) {
    return this.delegate_ && this.delegate_.allowBindings && this.delegate_.allowBindings(enabledBindingsFlags);
  }

  FrameBindingsControlStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameBindingsControl_AllowBindings_Name:
      var params = reader.decodeStruct(FrameBindingsControl_AllowBindings_Params);
      this.allowBindings(params.enabledBindingsFlags);
      return true;
    default:
      return false;
    }
  };

  FrameBindingsControlStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameBindingsControlRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameBindingsControl_AllowBindings_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameBindingsControl_AllowBindings_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameBindingsControlResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameBindingsControl = {
    name: 'content.mojom.FrameBindingsControl',
    kVersion: 0,
    ptrClass: FrameBindingsControlPtr,
    proxyClass: FrameBindingsControlProxy,
    stubClass: FrameBindingsControlStub,
    validateRequest: validateFrameBindingsControlRequest,
    validateResponse: null,
    mojomId: 'content/common/frame.mojom',
    fuzzMethods: {
      allowBindings: {
        params: FrameBindingsControl_AllowBindings_Params,
      },
    },
  };
  FrameBindingsControlStub.prototype.validator = validateFrameBindingsControlRequest;
  FrameBindingsControlProxy.prototype.validator = null;
  var kFrameFactory_CreateFrame_Name = 269220622;

  function FrameFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameFactory,
                                                   handleOrPtrInfo);
  }

  function FrameFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameFactory, associatedInterfacePtrInfo);
  }

  FrameFactoryAssociatedPtr.prototype =
      Object.create(FrameFactoryPtr.prototype);
  FrameFactoryAssociatedPtr.prototype.constructor =
      FrameFactoryAssociatedPtr;

  function FrameFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameFactoryPtr.prototype.createFrame = function() {
    return FrameFactoryProxy.prototype.createFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameFactoryProxy.prototype.createFrame = function(frameRoutingId, frame) {
    var params_ = new FrameFactory_CreateFrame_Params();
    params_.frameRoutingId = frameRoutingId;
    params_.frame = frame;
    var builder = new codec.MessageV0Builder(
        kFrameFactory_CreateFrame_Name,
        codec.align(FrameFactory_CreateFrame_Params.encodedSize));
    builder.encodeStruct(FrameFactory_CreateFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameFactoryStub.prototype.createFrame = function(frameRoutingId, frame) {
    return this.delegate_ && this.delegate_.createFrame && this.delegate_.createFrame(frameRoutingId, frame);
  }

  FrameFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameFactory_CreateFrame_Name:
      var params = reader.decodeStruct(FrameFactory_CreateFrame_Params);
      this.createFrame(params.frameRoutingId, params.frame);
      return true;
    default:
      return false;
    }
  };

  FrameFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFrameFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameFactory_CreateFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameFactory_CreateFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FrameFactory = {
    name: 'content.mojom.FrameFactory',
    kVersion: 0,
    ptrClass: FrameFactoryPtr,
    proxyClass: FrameFactoryProxy,
    stubClass: FrameFactoryStub,
    validateRequest: validateFrameFactoryRequest,
    validateResponse: null,
    mojomId: 'content/common/frame.mojom',
    fuzzMethods: {
      createFrame: {
        params: FrameFactory_CreateFrame_Params,
      },
    },
  };
  FrameFactoryStub.prototype.validator = validateFrameFactoryRequest;
  FrameFactoryProxy.prototype.validator = null;

  function KeepAliveHandlePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(KeepAliveHandle,
                                                   handleOrPtrInfo);
  }

  function KeepAliveHandleAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        KeepAliveHandle, associatedInterfacePtrInfo);
  }

  KeepAliveHandleAssociatedPtr.prototype =
      Object.create(KeepAliveHandlePtr.prototype);
  KeepAliveHandleAssociatedPtr.prototype.constructor =
      KeepAliveHandleAssociatedPtr;

  function KeepAliveHandleProxy(receiver) {
    this.receiver_ = receiver;
  }

  function KeepAliveHandleStub(delegate) {
    this.delegate_ = delegate;
  }

  KeepAliveHandleStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  KeepAliveHandleStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateKeepAliveHandleRequest(messageValidator) {
    return validator.validationError.NONE;
  }

  function validateKeepAliveHandleResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var KeepAliveHandle = {
    name: 'content.mojom.KeepAliveHandle',
    kVersion: 0,
    ptrClass: KeepAliveHandlePtr,
    proxyClass: KeepAliveHandleProxy,
    stubClass: KeepAliveHandleStub,
    validateRequest: validateKeepAliveHandleRequest,
    validateResponse: null,
    mojomId: 'content/common/frame.mojom',
    fuzzMethods: {
    },
  };
  KeepAliveHandleStub.prototype.validator = validateKeepAliveHandleRequest;
  KeepAliveHandleProxy.prototype.validator = null;
  var kFrameHost_CreateNewWindow_Name = 1669494500;
  var kFrameHost_IssueKeepAliveHandle_Name = 1745885026;
  var kFrameHost_DidCommitProvisionalLoad_Name = 1815889953;
  var kFrameHost_DidCommitSameDocumentNavigation_Name = 1005886657;
  var kFrameHost_BeginNavigation_Name = 1090321985;
  var kFrameHost_SubresourceResponseStarted_Name = 1173160704;
  var kFrameHost_ResourceLoadComplete_Name = 1901761499;
  var kFrameHost_DidChangeName_Name = 1308060636;
  var kFrameHost_EnforceInsecureRequestPolicy_Name = 781121074;
  var kFrameHost_EnforceInsecureNavigationsSet_Name = 308644336;
  var kFrameHost_DidSetFramePolicyHeaders_Name = 587224718;
  var kFrameHost_CancelInitialHistoryLoad_Name = 1192139250;
  var kFrameHost_UpdateEncoding_Name = 2075232632;
  var kFrameHost_FrameSizeChanged_Name = 729546372;

  function FrameHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FrameHost,
                                                   handleOrPtrInfo);
  }

  function FrameHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FrameHost, associatedInterfacePtrInfo);
  }

  FrameHostAssociatedPtr.prototype =
      Object.create(FrameHostPtr.prototype);
  FrameHostAssociatedPtr.prototype.constructor =
      FrameHostAssociatedPtr;

  function FrameHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  FrameHostPtr.prototype.createNewWindow = function() {
    return FrameHostProxy.prototype.createNewWindow
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.createNewWindow = function(params) {
    var params_ = new FrameHost_CreateNewWindow_Params();
    params_.params = params;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kFrameHost_CreateNewWindow_Name,
          codec.align(FrameHost_CreateNewWindow_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(FrameHost_CreateNewWindow_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(FrameHost_CreateNewWindow_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FrameHostPtr.prototype.issueKeepAliveHandle = function() {
    return FrameHostProxy.prototype.issueKeepAliveHandle
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.issueKeepAliveHandle = function(keepAliveHandle) {
    var params_ = new FrameHost_IssueKeepAliveHandle_Params();
    params_.keepAliveHandle = keepAliveHandle;
    var builder = new codec.MessageV0Builder(
        kFrameHost_IssueKeepAliveHandle_Name,
        codec.align(FrameHost_IssueKeepAliveHandle_Params.encodedSize));
    builder.encodeStruct(FrameHost_IssueKeepAliveHandle_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.didCommitProvisionalLoad = function() {
    return FrameHostProxy.prototype.didCommitProvisionalLoad
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.didCommitProvisionalLoad = function(params, interfaceProviderRequest) {
    var params_ = new FrameHost_DidCommitProvisionalLoad_Params();
    params_.params = params;
    params_.interfaceProviderRequest = interfaceProviderRequest;
    var builder = new codec.MessageV0Builder(
        kFrameHost_DidCommitProvisionalLoad_Name,
        codec.align(FrameHost_DidCommitProvisionalLoad_Params.encodedSize));
    builder.encodeStruct(FrameHost_DidCommitProvisionalLoad_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.didCommitSameDocumentNavigation = function() {
    return FrameHostProxy.prototype.didCommitSameDocumentNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.didCommitSameDocumentNavigation = function(params) {
    var params_ = new FrameHost_DidCommitSameDocumentNavigation_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kFrameHost_DidCommitSameDocumentNavigation_Name,
        codec.align(FrameHost_DidCommitSameDocumentNavigation_Params.encodedSize));
    builder.encodeStruct(FrameHost_DidCommitSameDocumentNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.beginNavigation = function() {
    return FrameHostProxy.prototype.beginNavigation
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.beginNavigation = function(commonParams, beginParams, blobUrlToken) {
    var params_ = new FrameHost_BeginNavigation_Params();
    params_.commonParams = commonParams;
    params_.beginParams = beginParams;
    params_.blobUrlToken = blobUrlToken;
    var builder = new codec.MessageV0Builder(
        kFrameHost_BeginNavigation_Name,
        codec.align(FrameHost_BeginNavigation_Params.encodedSize));
    builder.encodeStruct(FrameHost_BeginNavigation_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.subresourceResponseStarted = function() {
    return FrameHostProxy.prototype.subresourceResponseStarted
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.subresourceResponseStarted = function(url, certStatus) {
    var params_ = new FrameHost_SubresourceResponseStarted_Params();
    params_.url = url;
    params_.certStatus = certStatus;
    var builder = new codec.MessageV0Builder(
        kFrameHost_SubresourceResponseStarted_Name,
        codec.align(FrameHost_SubresourceResponseStarted_Params.encodedSize));
    builder.encodeStruct(FrameHost_SubresourceResponseStarted_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.resourceLoadComplete = function() {
    return FrameHostProxy.prototype.resourceLoadComplete
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.resourceLoadComplete = function(urlLoadInfo) {
    var params_ = new FrameHost_ResourceLoadComplete_Params();
    params_.urlLoadInfo = urlLoadInfo;
    var builder = new codec.MessageV0Builder(
        kFrameHost_ResourceLoadComplete_Name,
        codec.align(FrameHost_ResourceLoadComplete_Params.encodedSize));
    builder.encodeStruct(FrameHost_ResourceLoadComplete_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.didChangeName = function() {
    return FrameHostProxy.prototype.didChangeName
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.didChangeName = function(name, uniqueName) {
    var params_ = new FrameHost_DidChangeName_Params();
    params_.name = name;
    params_.uniqueName = uniqueName;
    var builder = new codec.MessageV0Builder(
        kFrameHost_DidChangeName_Name,
        codec.align(FrameHost_DidChangeName_Params.encodedSize));
    builder.encodeStruct(FrameHost_DidChangeName_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.enforceInsecureRequestPolicy = function() {
    return FrameHostProxy.prototype.enforceInsecureRequestPolicy
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.enforceInsecureRequestPolicy = function(policyBitmap) {
    var params_ = new FrameHost_EnforceInsecureRequestPolicy_Params();
    params_.policyBitmap = policyBitmap;
    var builder = new codec.MessageV0Builder(
        kFrameHost_EnforceInsecureRequestPolicy_Name,
        codec.align(FrameHost_EnforceInsecureRequestPolicy_Params.encodedSize));
    builder.encodeStruct(FrameHost_EnforceInsecureRequestPolicy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.enforceInsecureNavigationsSet = function() {
    return FrameHostProxy.prototype.enforceInsecureNavigationsSet
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.enforceInsecureNavigationsSet = function(set) {
    var params_ = new FrameHost_EnforceInsecureNavigationsSet_Params();
    params_.set = set;
    var builder = new codec.MessageV0Builder(
        kFrameHost_EnforceInsecureNavigationsSet_Name,
        codec.align(FrameHost_EnforceInsecureNavigationsSet_Params.encodedSize));
    builder.encodeStruct(FrameHost_EnforceInsecureNavigationsSet_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.didSetFramePolicyHeaders = function() {
    return FrameHostProxy.prototype.didSetFramePolicyHeaders
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.didSetFramePolicyHeaders = function(sandboxFlags, parsedHeader) {
    var params_ = new FrameHost_DidSetFramePolicyHeaders_Params();
    params_.sandboxFlags = sandboxFlags;
    params_.parsedHeader = parsedHeader;
    var builder = new codec.MessageV0Builder(
        kFrameHost_DidSetFramePolicyHeaders_Name,
        codec.align(FrameHost_DidSetFramePolicyHeaders_Params.encodedSize));
    builder.encodeStruct(FrameHost_DidSetFramePolicyHeaders_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.cancelInitialHistoryLoad = function() {
    return FrameHostProxy.prototype.cancelInitialHistoryLoad
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.cancelInitialHistoryLoad = function() {
    var params_ = new FrameHost_CancelInitialHistoryLoad_Params();
    var builder = new codec.MessageV0Builder(
        kFrameHost_CancelInitialHistoryLoad_Name,
        codec.align(FrameHost_CancelInitialHistoryLoad_Params.encodedSize));
    builder.encodeStruct(FrameHost_CancelInitialHistoryLoad_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.updateEncoding = function() {
    return FrameHostProxy.prototype.updateEncoding
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.updateEncoding = function(encodingName) {
    var params_ = new FrameHost_UpdateEncoding_Params();
    params_.encodingName = encodingName;
    var builder = new codec.MessageV0Builder(
        kFrameHost_UpdateEncoding_Name,
        codec.align(FrameHost_UpdateEncoding_Params.encodedSize));
    builder.encodeStruct(FrameHost_UpdateEncoding_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FrameHostPtr.prototype.frameSizeChanged = function() {
    return FrameHostProxy.prototype.frameSizeChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  FrameHostProxy.prototype.frameSizeChanged = function(size) {
    var params_ = new FrameHost_FrameSizeChanged_Params();
    params_.size = size;
    var builder = new codec.MessageV0Builder(
        kFrameHost_FrameSizeChanged_Name,
        codec.align(FrameHost_FrameSizeChanged_Params.encodedSize));
    builder.encodeStruct(FrameHost_FrameSizeChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FrameHostStub(delegate) {
    this.delegate_ = delegate;
  }
  FrameHostStub.prototype.createNewWindow = function(params) {
    return this.delegate_ && this.delegate_.createNewWindow && this.delegate_.createNewWindow(params);
  }
  FrameHostStub.prototype.issueKeepAliveHandle = function(keepAliveHandle) {
    return this.delegate_ && this.delegate_.issueKeepAliveHandle && this.delegate_.issueKeepAliveHandle(keepAliveHandle);
  }
  FrameHostStub.prototype.didCommitProvisionalLoad = function(params, interfaceProviderRequest) {
    return this.delegate_ && this.delegate_.didCommitProvisionalLoad && this.delegate_.didCommitProvisionalLoad(params, interfaceProviderRequest);
  }
  FrameHostStub.prototype.didCommitSameDocumentNavigation = function(params) {
    return this.delegate_ && this.delegate_.didCommitSameDocumentNavigation && this.delegate_.didCommitSameDocumentNavigation(params);
  }
  FrameHostStub.prototype.beginNavigation = function(commonParams, beginParams, blobUrlToken) {
    return this.delegate_ && this.delegate_.beginNavigation && this.delegate_.beginNavigation(commonParams, beginParams, blobUrlToken);
  }
  FrameHostStub.prototype.subresourceResponseStarted = function(url, certStatus) {
    return this.delegate_ && this.delegate_.subresourceResponseStarted && this.delegate_.subresourceResponseStarted(url, certStatus);
  }
  FrameHostStub.prototype.resourceLoadComplete = function(urlLoadInfo) {
    return this.delegate_ && this.delegate_.resourceLoadComplete && this.delegate_.resourceLoadComplete(urlLoadInfo);
  }
  FrameHostStub.prototype.didChangeName = function(name, uniqueName) {
    return this.delegate_ && this.delegate_.didChangeName && this.delegate_.didChangeName(name, uniqueName);
  }
  FrameHostStub.prototype.enforceInsecureRequestPolicy = function(policyBitmap) {
    return this.delegate_ && this.delegate_.enforceInsecureRequestPolicy && this.delegate_.enforceInsecureRequestPolicy(policyBitmap);
  }
  FrameHostStub.prototype.enforceInsecureNavigationsSet = function(set) {
    return this.delegate_ && this.delegate_.enforceInsecureNavigationsSet && this.delegate_.enforceInsecureNavigationsSet(set);
  }
  FrameHostStub.prototype.didSetFramePolicyHeaders = function(sandboxFlags, parsedHeader) {
    return this.delegate_ && this.delegate_.didSetFramePolicyHeaders && this.delegate_.didSetFramePolicyHeaders(sandboxFlags, parsedHeader);
  }
  FrameHostStub.prototype.cancelInitialHistoryLoad = function() {
    return this.delegate_ && this.delegate_.cancelInitialHistoryLoad && this.delegate_.cancelInitialHistoryLoad();
  }
  FrameHostStub.prototype.updateEncoding = function(encodingName) {
    return this.delegate_ && this.delegate_.updateEncoding && this.delegate_.updateEncoding(encodingName);
  }
  FrameHostStub.prototype.frameSizeChanged = function(size) {
    return this.delegate_ && this.delegate_.frameSizeChanged && this.delegate_.frameSizeChanged(size);
  }

  FrameHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameHost_IssueKeepAliveHandle_Name:
      var params = reader.decodeStruct(FrameHost_IssueKeepAliveHandle_Params);
      this.issueKeepAliveHandle(params.keepAliveHandle);
      return true;
    case kFrameHost_DidCommitProvisionalLoad_Name:
      var params = reader.decodeStruct(FrameHost_DidCommitProvisionalLoad_Params);
      this.didCommitProvisionalLoad(params.params, params.interfaceProviderRequest);
      return true;
    case kFrameHost_DidCommitSameDocumentNavigation_Name:
      var params = reader.decodeStruct(FrameHost_DidCommitSameDocumentNavigation_Params);
      this.didCommitSameDocumentNavigation(params.params);
      return true;
    case kFrameHost_BeginNavigation_Name:
      var params = reader.decodeStruct(FrameHost_BeginNavigation_Params);
      this.beginNavigation(params.commonParams, params.beginParams, params.blobUrlToken);
      return true;
    case kFrameHost_SubresourceResponseStarted_Name:
      var params = reader.decodeStruct(FrameHost_SubresourceResponseStarted_Params);
      this.subresourceResponseStarted(params.url, params.certStatus);
      return true;
    case kFrameHost_ResourceLoadComplete_Name:
      var params = reader.decodeStruct(FrameHost_ResourceLoadComplete_Params);
      this.resourceLoadComplete(params.urlLoadInfo);
      return true;
    case kFrameHost_DidChangeName_Name:
      var params = reader.decodeStruct(FrameHost_DidChangeName_Params);
      this.didChangeName(params.name, params.uniqueName);
      return true;
    case kFrameHost_EnforceInsecureRequestPolicy_Name:
      var params = reader.decodeStruct(FrameHost_EnforceInsecureRequestPolicy_Params);
      this.enforceInsecureRequestPolicy(params.policyBitmap);
      return true;
    case kFrameHost_EnforceInsecureNavigationsSet_Name:
      var params = reader.decodeStruct(FrameHost_EnforceInsecureNavigationsSet_Params);
      this.enforceInsecureNavigationsSet(params.set);
      return true;
    case kFrameHost_DidSetFramePolicyHeaders_Name:
      var params = reader.decodeStruct(FrameHost_DidSetFramePolicyHeaders_Params);
      this.didSetFramePolicyHeaders(params.sandboxFlags, params.parsedHeader);
      return true;
    case kFrameHost_CancelInitialHistoryLoad_Name:
      var params = reader.decodeStruct(FrameHost_CancelInitialHistoryLoad_Params);
      this.cancelInitialHistoryLoad();
      return true;
    case kFrameHost_UpdateEncoding_Name:
      var params = reader.decodeStruct(FrameHost_UpdateEncoding_Params);
      this.updateEncoding(params.encodingName);
      return true;
    case kFrameHost_FrameSizeChanged_Name:
      var params = reader.decodeStruct(FrameHost_FrameSizeChanged_Params);
      this.frameSizeChanged(params.size);
      return true;
    default:
      return false;
    }
  };

  FrameHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFrameHost_CreateNewWindow_Name:
      var params = reader.decodeStruct(FrameHost_CreateNewWindow_Params);
      this.createNewWindow(params.params).then(function(response) {
        var responseParams =
            new FrameHost_CreateNewWindow_ResponseParams();
        responseParams.status = response.status;
        responseParams.reply = response.reply;
        var builder = new codec.MessageV1Builder(
            kFrameHost_CreateNewWindow_Name,
            codec.align(FrameHost_CreateNewWindow_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(FrameHost_CreateNewWindow_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateFrameHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFrameHost_CreateNewWindow_Name:
        if (message.expectsResponse())
          paramsClass = FrameHost_CreateNewWindow_Params;
      break;
      case kFrameHost_IssueKeepAliveHandle_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_IssueKeepAliveHandle_Params;
      break;
      case kFrameHost_DidCommitProvisionalLoad_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_DidCommitProvisionalLoad_Params;
      break;
      case kFrameHost_DidCommitSameDocumentNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_DidCommitSameDocumentNavigation_Params;
      break;
      case kFrameHost_BeginNavigation_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_BeginNavigation_Params;
      break;
      case kFrameHost_SubresourceResponseStarted_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_SubresourceResponseStarted_Params;
      break;
      case kFrameHost_ResourceLoadComplete_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_ResourceLoadComplete_Params;
      break;
      case kFrameHost_DidChangeName_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_DidChangeName_Params;
      break;
      case kFrameHost_EnforceInsecureRequestPolicy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_EnforceInsecureRequestPolicy_Params;
      break;
      case kFrameHost_EnforceInsecureNavigationsSet_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_EnforceInsecureNavigationsSet_Params;
      break;
      case kFrameHost_DidSetFramePolicyHeaders_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_DidSetFramePolicyHeaders_Params;
      break;
      case kFrameHost_CancelInitialHistoryLoad_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_CancelInitialHistoryLoad_Params;
      break;
      case kFrameHost_UpdateEncoding_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_UpdateEncoding_Params;
      break;
      case kFrameHost_FrameSizeChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FrameHost_FrameSizeChanged_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFrameHostResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFrameHost_CreateNewWindow_Name:
        if (message.isResponse())
          paramsClass = FrameHost_CreateNewWindow_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var FrameHost = {
    name: 'content.mojom.FrameHost',
    kVersion: 0,
    ptrClass: FrameHostPtr,
    proxyClass: FrameHostProxy,
    stubClass: FrameHostStub,
    validateRequest: validateFrameHostRequest,
    validateResponse: validateFrameHostResponse,
    mojomId: 'content/common/frame.mojom',
    fuzzMethods: {
      createNewWindow: {
        params: FrameHost_CreateNewWindow_Params,
      },
      issueKeepAliveHandle: {
        params: FrameHost_IssueKeepAliveHandle_Params,
      },
      didCommitProvisionalLoad: {
        params: FrameHost_DidCommitProvisionalLoad_Params,
      },
      didCommitSameDocumentNavigation: {
        params: FrameHost_DidCommitSameDocumentNavigation_Params,
      },
      beginNavigation: {
        params: FrameHost_BeginNavigation_Params,
      },
      subresourceResponseStarted: {
        params: FrameHost_SubresourceResponseStarted_Params,
      },
      resourceLoadComplete: {
        params: FrameHost_ResourceLoadComplete_Params,
      },
      didChangeName: {
        params: FrameHost_DidChangeName_Params,
      },
      enforceInsecureRequestPolicy: {
        params: FrameHost_EnforceInsecureRequestPolicy_Params,
      },
      enforceInsecureNavigationsSet: {
        params: FrameHost_EnforceInsecureNavigationsSet_Params,
      },
      didSetFramePolicyHeaders: {
        params: FrameHost_DidSetFramePolicyHeaders_Params,
      },
      cancelInitialHistoryLoad: {
        params: FrameHost_CancelInitialHistoryLoad_Params,
      },
      updateEncoding: {
        params: FrameHost_UpdateEncoding_Params,
      },
      frameSizeChanged: {
        params: FrameHost_FrameSizeChanged_Params,
      },
    },
  };
  FrameHostStub.prototype.validator = validateFrameHostRequest;
  FrameHostProxy.prototype.validator = validateFrameHostResponse;
  exports.kNavigation_FrameSpec = kNavigation_FrameSpec;
  exports.CreateNewWindowStatus = CreateNewWindowStatus;
  exports.CommonNavigationParams = CommonNavigationParams;
  exports.RequestNavigationParams = RequestNavigationParams;
  exports.CreateNewWindowParams = CreateNewWindowParams;
  exports.CreateNewWindowReply = CreateNewWindowReply;
  exports.DidCommitProvisionalLoadParams = DidCommitProvisionalLoadParams;
  exports.Frame = Frame;
  exports.FramePtr = FramePtr;
  exports.FrameAssociatedPtr = FrameAssociatedPtr;
  exports.FrameNavigationControl = FrameNavigationControl;
  exports.FrameNavigationControlPtr = FrameNavigationControlPtr;
  exports.FrameNavigationControlAssociatedPtr = FrameNavigationControlAssociatedPtr;
  exports.FrameBindingsControl = FrameBindingsControl;
  exports.FrameBindingsControlPtr = FrameBindingsControlPtr;
  exports.FrameBindingsControlAssociatedPtr = FrameBindingsControlAssociatedPtr;
  exports.FrameFactory = FrameFactory;
  exports.FrameFactoryPtr = FrameFactoryPtr;
  exports.FrameFactoryAssociatedPtr = FrameFactoryAssociatedPtr;
  exports.KeepAliveHandle = KeepAliveHandle;
  exports.KeepAliveHandlePtr = KeepAliveHandlePtr;
  exports.KeepAliveHandleAssociatedPtr = KeepAliveHandleAssociatedPtr;
  exports.FrameHost = FrameHost;
  exports.FrameHostPtr = FrameHostPtr;
  exports.FrameHostAssociatedPtr = FrameHostAssociatedPtr;
})();