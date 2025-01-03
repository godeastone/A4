// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/renderer.mojom';
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
  var native_types$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/native_types.mojom', 'native_types.mojom.js');
  }
  var embedded_worker$ =
      mojo.internal.exposeNamespace('content.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'content/common/service_worker/embedded_worker.mojom', 'service_worker/embedded_worker.mojom.js');
  }
  var constants$ =
      mojo.internal.exposeNamespace('iPC.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ipc/constants.mojom', '../../ipc/constants.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../mojo/public/mojom/base/time.mojom.js');
  }
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }
  var network_types$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/network_types.mojom', '../../services/network/public/mojom/network_types.mojom.js');
  }
  var interface_provider$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/interface_provider.mojom', '../../services/service_manager/public/mojom/interface_provider.mojom.js');
  }
  var service$ =
      mojo.internal.exposeNamespace('serviceManager.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/service_manager/public/mojom/service.mojom', '../../services/service_manager/public/mojom/service.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var icc_profile$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/icc_profile.mojom', '../../ui/gfx/mojo/icc_profile.mojom.js');
  }



  function CreateViewParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CreateViewParams.prototype.initDefaults_ = function() {
    this.rendererPreferences = null;
    this.webPreferences = null;
    this.viewId = constants$.kRoutingIdNone;
    this.mainFrameRoutingId = constants$.kRoutingIdNone;
    this.mainFrameInterfaceProvider = new interface_provider$.InterfaceProviderPtr();
    this.mainFrameWidgetRoutingId = constants$.kRoutingIdNone;
    this.openerFrameRouteId = constants$.kRoutingIdNone;
    this.sessionStorageNamespaceId = null;
    this.swappedOut = false;
    this.hidden = false;
    this.neverVisible = false;
    this.windowWasCreatedWithOpener = false;
    this.hasCommittedRealLoad = false;
    this.rendererWideNamedFrameLookup = false;
    this.proxyRoutingId = constants$.kRoutingIdNone;
    this.replicatedFrameState = null;
    this.devtoolsMainFrameToken = null;
    this.visualProperties = null;
    this.pageZoomLevel = 0;
  };
  CreateViewParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CreateViewParams.generate = function(generator_) {
    var generated = new CreateViewParams;
    generated.rendererPreferences = generator_.generateStruct(content.mojom.RendererPreferences, false);
    generated.webPreferences = generator_.generateStruct(content.mojom.WebPreferences, false);
    generated.viewId = generator_.generateInt32();
    generated.mainFrameRoutingId = generator_.generateInt32();
    generated.mainFrameInterfaceProvider = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", true);
    generated.mainFrameWidgetRoutingId = generator_.generateInt32();
    generated.sessionStorageNamespaceId = generator_.generateString(false);
    generated.openerFrameRouteId = generator_.generateInt32();
    generated.swappedOut = generator_.generateBool();
    generated.replicatedFrameState = generator_.generateStruct(content.mojom.FrameReplicationState, false);
    generated.devtoolsMainFrameToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.proxyRoutingId = generator_.generateInt32();
    generated.hidden = generator_.generateBool();
    generated.neverVisible = generator_.generateBool();
    generated.windowWasCreatedWithOpener = generator_.generateBool();
    generated.hasCommittedRealLoad = generator_.generateBool();
    generated.visualProperties = generator_.generateStruct(content.mojom.VisualProperties, false);
    generated.pageZoomLevel = generator_.generateDouble();
    generated.rendererWideNamedFrameLookup = generator_.generateBool();
    return generated;
  };

  CreateViewParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.rendererPreferences = mutator_.mutateStruct(content.mojom.RendererPreferences, false);
    }
    if (mutator_.chooseMutateField()) {
      this.webPreferences = mutator_.mutateStruct(content.mojom.WebPreferences, false);
    }
    if (mutator_.chooseMutateField()) {
      this.viewId = mutator_.mutateInt32(this.viewId);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameRoutingId = mutator_.mutateInt32(this.mainFrameRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameInterfaceProvider = mutator_.mutateInterface(this.mainFrameInterfaceProvider, "serviceManager.mojom.InterfaceProvider", true);
    }
    if (mutator_.chooseMutateField()) {
      this.mainFrameWidgetRoutingId = mutator_.mutateInt32(this.mainFrameWidgetRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.sessionStorageNamespaceId = mutator_.mutateString(this.sessionStorageNamespaceId, false);
    }
    if (mutator_.chooseMutateField()) {
      this.openerFrameRouteId = mutator_.mutateInt32(this.openerFrameRouteId);
    }
    if (mutator_.chooseMutateField()) {
      this.swappedOut = mutator_.mutateBool(this.swappedOut);
    }
    if (mutator_.chooseMutateField()) {
      this.replicatedFrameState = mutator_.mutateStruct(content.mojom.FrameReplicationState, false);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsMainFrameToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyRoutingId = mutator_.mutateInt32(this.proxyRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.hidden = mutator_.mutateBool(this.hidden);
    }
    if (mutator_.chooseMutateField()) {
      this.neverVisible = mutator_.mutateBool(this.neverVisible);
    }
    if (mutator_.chooseMutateField()) {
      this.windowWasCreatedWithOpener = mutator_.mutateBool(this.windowWasCreatedWithOpener);
    }
    if (mutator_.chooseMutateField()) {
      this.hasCommittedRealLoad = mutator_.mutateBool(this.hasCommittedRealLoad);
    }
    if (mutator_.chooseMutateField()) {
      this.visualProperties = mutator_.mutateStruct(content.mojom.VisualProperties, false);
    }
    if (mutator_.chooseMutateField()) {
      this.pageZoomLevel = mutator_.mutateDouble(this.pageZoomLevel);
    }
    if (mutator_.chooseMutateField()) {
      this.rendererWideNamedFrameLookup = mutator_.mutateBool(this.rendererWideNamedFrameLookup);
    }
    return this;
  };
  CreateViewParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.mainFrameInterfaceProvider !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  CreateViewParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CreateViewParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.mainFrameInterfaceProvider = handles[idx++];;
    return idx;
  };

  CreateViewParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 96}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateViewParams.rendererPreferences
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, native_types$.RendererPreferences, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateViewParams.webPreferences
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, native_types$.WebPreferences, false);
    if (err !== validator.validationError.NONE)
        return err;




    // validate CreateViewParams.mainFrameInterfaceProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 24, true);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CreateViewParams.sessionStorageNamespaceId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;




    // validate CreateViewParams.replicatedFrameState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, native_types$.FrameReplicationState, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateViewParams.devtoolsMainFrameToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 64, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;







    // validate CreateViewParams.visualProperties
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 72, native_types$.VisualProperties, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  CreateViewParams.encodedSize = codec.kStructHeaderSize + 88;

  CreateViewParams.decode = function(decoder) {
    var packed;
    var val = new CreateViewParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rendererPreferences = decoder.decodeStructPointer(native_types$.RendererPreferences);
    val.webPreferences = decoder.decodeStructPointer(native_types$.WebPreferences);
    val.viewId = decoder.decodeStruct(codec.Int32);
    val.mainFrameRoutingId = decoder.decodeStruct(codec.Int32);
    val.mainFrameInterfaceProvider = decoder.decodeStruct(new codec.NullableInterface(interface_provider$.InterfaceProviderPtr));
    val.mainFrameWidgetRoutingId = decoder.decodeStruct(codec.Int32);
    val.openerFrameRouteId = decoder.decodeStruct(codec.Int32);
    val.sessionStorageNamespaceId = decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.swappedOut = (packed >> 0) & 1 ? true : false;
    val.hidden = (packed >> 1) & 1 ? true : false;
    val.neverVisible = (packed >> 2) & 1 ? true : false;
    val.windowWasCreatedWithOpener = (packed >> 3) & 1 ? true : false;
    val.hasCommittedRealLoad = (packed >> 4) & 1 ? true : false;
    val.rendererWideNamedFrameLookup = (packed >> 5) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.proxyRoutingId = decoder.decodeStruct(codec.Int32);
    val.replicatedFrameState = decoder.decodeStructPointer(native_types$.FrameReplicationState);
    val.devtoolsMainFrameToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.visualProperties = decoder.decodeStructPointer(native_types$.VisualProperties);
    val.pageZoomLevel = decoder.decodeStruct(codec.Double);
    return val;
  };

  CreateViewParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CreateViewParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(native_types$.RendererPreferences, val.rendererPreferences);
    encoder.encodeStructPointer(native_types$.WebPreferences, val.webPreferences);
    encoder.encodeStruct(codec.Int32, val.viewId);
    encoder.encodeStruct(codec.Int32, val.mainFrameRoutingId);
    encoder.encodeStruct(new codec.NullableInterface(interface_provider$.InterfaceProviderPtr), val.mainFrameInterfaceProvider);
    encoder.encodeStruct(codec.Int32, val.mainFrameWidgetRoutingId);
    encoder.encodeStruct(codec.Int32, val.openerFrameRouteId);
    encoder.encodeStruct(codec.String, val.sessionStorageNamespaceId);
    packed = 0;
    packed |= (val.swappedOut & 1) << 0
    packed |= (val.hidden & 1) << 1
    packed |= (val.neverVisible & 1) << 2
    packed |= (val.windowWasCreatedWithOpener & 1) << 3
    packed |= (val.hasCommittedRealLoad & 1) << 4
    packed |= (val.rendererWideNamedFrameLookup & 1) << 5
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.proxyRoutingId);
    encoder.encodeStructPointer(native_types$.FrameReplicationState, val.replicatedFrameState);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsMainFrameToken);
    encoder.encodeStructPointer(native_types$.VisualProperties, val.visualProperties);
    encoder.encodeStruct(codec.Double, val.pageZoomLevel);
  };
  function CreateFrameWidgetParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CreateFrameWidgetParams.prototype.initDefaults_ = function() {
    this.routingId = 0;
    this.hidden = false;
  };
  CreateFrameWidgetParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CreateFrameWidgetParams.generate = function(generator_) {
    var generated = new CreateFrameWidgetParams;
    generated.routingId = generator_.generateInt32();
    generated.hidden = generator_.generateBool();
    return generated;
  };

  CreateFrameWidgetParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateInt32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.hidden = mutator_.mutateBool(this.hidden);
    }
    return this;
  };
  CreateFrameWidgetParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CreateFrameWidgetParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CreateFrameWidgetParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CreateFrameWidgetParams.validate = function(messageValidator, offset) {
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

  CreateFrameWidgetParams.encodedSize = codec.kStructHeaderSize + 8;

  CreateFrameWidgetParams.decode = function(decoder) {
    var packed;
    var val = new CreateFrameWidgetParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routingId = decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.hidden = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  CreateFrameWidgetParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CreateFrameWidgetParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routingId);
    packed = 0;
    packed |= (val.hidden & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function CreateFrameParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CreateFrameParams.prototype.initDefaults_ = function() {
    this.routingId = 0;
    this.proxyRoutingId = 0;
    this.openerRoutingId = 0;
    this.parentRoutingId = 0;
    this.previousSiblingRoutingId = 0;
    this.interfaceProvider = new interface_provider$.InterfaceProviderPtr();
    this.hasCommittedRealLoad = false;
    this.replicationState = null;
    this.devtoolsFrameToken = null;
    this.frameOwnerProperties = null;
    this.widgetParams = null;
  };
  CreateFrameParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CreateFrameParams.generate = function(generator_) {
    var generated = new CreateFrameParams;
    generated.routingId = generator_.generateInt32();
    generated.proxyRoutingId = generator_.generateInt32();
    generated.openerRoutingId = generator_.generateInt32();
    generated.parentRoutingId = generator_.generateInt32();
    generated.previousSiblingRoutingId = generator_.generateInt32();
    generated.interfaceProvider = generator_.generateInterface("serviceManager.mojom.InterfaceProvider", false);
    generated.replicationState = generator_.generateStruct(content.mojom.FrameReplicationState, false);
    generated.devtoolsFrameToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    generated.frameOwnerProperties = generator_.generateStruct(content.mojom.FrameOwnerProperties, false);
    generated.widgetParams = generator_.generateStruct(content.mojom.CreateFrameWidgetParams, false);
    generated.hasCommittedRealLoad = generator_.generateBool();
    return generated;
  };

  CreateFrameParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateInt32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.proxyRoutingId = mutator_.mutateInt32(this.proxyRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.openerRoutingId = mutator_.mutateInt32(this.openerRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.parentRoutingId = mutator_.mutateInt32(this.parentRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.previousSiblingRoutingId = mutator_.mutateInt32(this.previousSiblingRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.interfaceProvider = mutator_.mutateInterface(this.interfaceProvider, "serviceManager.mojom.InterfaceProvider", false);
    }
    if (mutator_.chooseMutateField()) {
      this.replicationState = mutator_.mutateStruct(content.mojom.FrameReplicationState, false);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsFrameToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.frameOwnerProperties = mutator_.mutateStruct(content.mojom.FrameOwnerProperties, false);
    }
    if (mutator_.chooseMutateField()) {
      this.widgetParams = mutator_.mutateStruct(content.mojom.CreateFrameWidgetParams, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hasCommittedRealLoad = mutator_.mutateBool(this.hasCommittedRealLoad);
    }
    return this;
  };
  CreateFrameParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.interfaceProvider !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.InterfaceProviderPtr"]);
    }
    return handles;
  };

  CreateFrameParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CreateFrameParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.interfaceProvider = handles[idx++];;
    return idx;
  };

  CreateFrameParams.validate = function(messageValidator, offset) {
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







    // validate CreateFrameParams.interfaceProvider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 20, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateFrameParams.replicationState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, native_types$.FrameReplicationState, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateFrameParams.devtoolsFrameToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateFrameParams.frameOwnerProperties
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, native_types$.FrameOwnerProperties, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CreateFrameParams.widgetParams
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 56, CreateFrameWidgetParams, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  CreateFrameParams.encodedSize = codec.kStructHeaderSize + 64;

  CreateFrameParams.decode = function(decoder) {
    var packed;
    var val = new CreateFrameParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routingId = decoder.decodeStruct(codec.Int32);
    val.proxyRoutingId = decoder.decodeStruct(codec.Int32);
    val.openerRoutingId = decoder.decodeStruct(codec.Int32);
    val.parentRoutingId = decoder.decodeStruct(codec.Int32);
    val.previousSiblingRoutingId = decoder.decodeStruct(codec.Int32);
    val.interfaceProvider = decoder.decodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr));
    packed = decoder.readUint8();
    val.hasCommittedRealLoad = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.replicationState = decoder.decodeStructPointer(native_types$.FrameReplicationState);
    val.devtoolsFrameToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    val.frameOwnerProperties = decoder.decodeStructPointer(native_types$.FrameOwnerProperties);
    val.widgetParams = decoder.decodeStructPointer(CreateFrameWidgetParams);
    return val;
  };

  CreateFrameParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CreateFrameParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routingId);
    encoder.encodeStruct(codec.Int32, val.proxyRoutingId);
    encoder.encodeStruct(codec.Int32, val.openerRoutingId);
    encoder.encodeStruct(codec.Int32, val.parentRoutingId);
    encoder.encodeStruct(codec.Int32, val.previousSiblingRoutingId);
    encoder.encodeStruct(new codec.Interface(interface_provider$.InterfaceProviderPtr), val.interfaceProvider);
    packed = 0;
    packed |= (val.hasCommittedRealLoad & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(native_types$.FrameReplicationState, val.replicationState);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsFrameToken);
    encoder.encodeStructPointer(native_types$.FrameOwnerProperties, val.frameOwnerProperties);
    encoder.encodeStructPointer(CreateFrameWidgetParams, val.widgetParams);
  };
  function UpdateScrollbarThemeParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UpdateScrollbarThemeParams.prototype.initDefaults_ = function() {
    this.initialButtonDelay = 0;
    this.autoscrollButtonDelay = 0;
    this.jumpOnTrackClick = false;
    this.redraw = false;
    this.scrollViewRubberBanding = false;
    this.preferredScrollerStyle = 0;
    this.buttonPlacement = 0;
  };
  UpdateScrollbarThemeParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  UpdateScrollbarThemeParams.generate = function(generator_) {
    var generated = new UpdateScrollbarThemeParams;
    generated.initialButtonDelay = generator_.generateFloat();
    generated.autoscrollButtonDelay = generator_.generateFloat();
    generated.jumpOnTrackClick = generator_.generateBool();
    generated.preferredScrollerStyle = generator_.generateEnum();
    generated.redraw = generator_.generateBool();
    generated.buttonPlacement = generator_.generateEnum();
    generated.scrollViewRubberBanding = generator_.generateBool();
    return generated;
  };

  UpdateScrollbarThemeParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.initialButtonDelay = mutator_.mutateFloat(this.initialButtonDelay);
    }
    if (mutator_.chooseMutateField()) {
      this.autoscrollButtonDelay = mutator_.mutateFloat(this.autoscrollButtonDelay);
    }
    if (mutator_.chooseMutateField()) {
      this.jumpOnTrackClick = mutator_.mutateBool(this.jumpOnTrackClick);
    }
    if (mutator_.chooseMutateField()) {
      this.preferredScrollerStyle = mutator_.mutateEnum(this.preferredScrollerStyle);
    }
    if (mutator_.chooseMutateField()) {
      this.redraw = mutator_.mutateBool(this.redraw);
    }
    if (mutator_.chooseMutateField()) {
      this.buttonPlacement = mutator_.mutateEnum(this.buttonPlacement);
    }
    if (mutator_.chooseMutateField()) {
      this.scrollViewRubberBanding = mutator_.mutateBool(this.scrollViewRubberBanding);
    }
    return this;
  };
  UpdateScrollbarThemeParams.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  UpdateScrollbarThemeParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  UpdateScrollbarThemeParams.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  UpdateScrollbarThemeParams.validate = function(messageValidator, offset) {
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





    // validate UpdateScrollbarThemeParams.preferredScrollerStyle
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, native_types$.ScrollerStyle);
    if (err !== validator.validationError.NONE)
        return err;



    // validate UpdateScrollbarThemeParams.buttonPlacement
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, native_types$.ScrollbarButtonsPlacement);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UpdateScrollbarThemeParams.encodedSize = codec.kStructHeaderSize + 24;

  UpdateScrollbarThemeParams.decode = function(decoder) {
    var packed;
    var val = new UpdateScrollbarThemeParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.initialButtonDelay = decoder.decodeStruct(codec.Float);
    val.autoscrollButtonDelay = decoder.decodeStruct(codec.Float);
    packed = decoder.readUint8();
    val.jumpOnTrackClick = (packed >> 0) & 1 ? true : false;
    val.redraw = (packed >> 1) & 1 ? true : false;
    val.scrollViewRubberBanding = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.preferredScrollerStyle = decoder.decodeStruct(codec.Int32);
    val.buttonPlacement = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UpdateScrollbarThemeParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UpdateScrollbarThemeParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.initialButtonDelay);
    encoder.encodeStruct(codec.Float, val.autoscrollButtonDelay);
    packed = 0;
    packed |= (val.jumpOnTrackClick & 1) << 0
    packed |= (val.redraw & 1) << 1
    packed |= (val.scrollViewRubberBanding & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.preferredScrollerStyle);
    encoder.encodeStruct(codec.Int32, val.buttonPlacement);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_CreateEmbedderRendererService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_CreateEmbedderRendererService_Params.prototype.initDefaults_ = function() {
    this.serviceRequest = new bindings.InterfaceRequest();
  };
  Renderer_CreateEmbedderRendererService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_CreateEmbedderRendererService_Params.generate = function(generator_) {
    var generated = new Renderer_CreateEmbedderRendererService_Params;
    generated.serviceRequest = generator_.generateInterfaceRequest("serviceManager.mojom.Service", false);
    return generated;
  };

  Renderer_CreateEmbedderRendererService_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.serviceRequest = mutator_.mutateInterfaceRequest(this.serviceRequest, "serviceManager.mojom.Service", false);
    }
    return this;
  };
  Renderer_CreateEmbedderRendererService_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.serviceRequest !== null) {
      Array.prototype.push.apply(handles, ["serviceManager.mojom.ServiceRequest"]);
    }
    return handles;
  };

  Renderer_CreateEmbedderRendererService_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_CreateEmbedderRendererService_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.serviceRequest = handles[idx++];;
    return idx;
  };

  Renderer_CreateEmbedderRendererService_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_CreateEmbedderRendererService_Params.serviceRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_CreateEmbedderRendererService_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_CreateEmbedderRendererService_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_CreateEmbedderRendererService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.serviceRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_CreateEmbedderRendererService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_CreateEmbedderRendererService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.serviceRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_CreateView_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_CreateView_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  Renderer_CreateView_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_CreateView_Params.generate = function(generator_) {
    var generated = new Renderer_CreateView_Params;
    generated.params = generator_.generateStruct(content.mojom.CreateViewParams, false);
    return generated;
  };

  Renderer_CreateView_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.CreateViewParams, false);
    }
    return this;
  };
  Renderer_CreateView_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  Renderer_CreateView_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_CreateView_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  Renderer_CreateView_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_CreateView_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CreateViewParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_CreateView_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_CreateView_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_CreateView_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(CreateViewParams);
    return val;
  };

  Renderer_CreateView_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_CreateView_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CreateViewParams, val.params);
  };
  function Renderer_CreateFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_CreateFrame_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  Renderer_CreateFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_CreateFrame_Params.generate = function(generator_) {
    var generated = new Renderer_CreateFrame_Params;
    generated.params = generator_.generateStruct(content.mojom.CreateFrameParams, false);
    return generated;
  };

  Renderer_CreateFrame_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.CreateFrameParams, false);
    }
    return this;
  };
  Renderer_CreateFrame_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.params !== null) {
      Array.prototype.push.apply(handles, this.params.getHandleDeps());
    }
    return handles;
  };

  Renderer_CreateFrame_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_CreateFrame_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    idx = this.params.setHandlesInternal_(handles, idx);
    return idx;
  };

  Renderer_CreateFrame_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_CreateFrame_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CreateFrameParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_CreateFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_CreateFrame_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_CreateFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(CreateFrameParams);
    return val;
  };

  Renderer_CreateFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_CreateFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CreateFrameParams, val.params);
  };
  function Renderer_CreateFrameProxy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_CreateFrameProxy_Params.prototype.initDefaults_ = function() {
    this.routingId = 0;
    this.renderViewRoutingId = 0;
    this.openerRoutingId = 0;
    this.parentRoutingId = 0;
    this.replicationState = null;
    this.devtoolsFrameToken = null;
  };
  Renderer_CreateFrameProxy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_CreateFrameProxy_Params.generate = function(generator_) {
    var generated = new Renderer_CreateFrameProxy_Params;
    generated.routingId = generator_.generateInt32();
    generated.renderViewRoutingId = generator_.generateInt32();
    generated.openerRoutingId = generator_.generateInt32();
    generated.parentRoutingId = generator_.generateInt32();
    generated.replicationState = generator_.generateStruct(content.mojom.FrameReplicationState, false);
    generated.devtoolsFrameToken = generator_.generateStruct(mojoBase.mojom.UnguessableToken, false);
    return generated;
  };

  Renderer_CreateFrameProxy_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.routingId = mutator_.mutateInt32(this.routingId);
    }
    if (mutator_.chooseMutateField()) {
      this.renderViewRoutingId = mutator_.mutateInt32(this.renderViewRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.openerRoutingId = mutator_.mutateInt32(this.openerRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.parentRoutingId = mutator_.mutateInt32(this.parentRoutingId);
    }
    if (mutator_.chooseMutateField()) {
      this.replicationState = mutator_.mutateStruct(content.mojom.FrameReplicationState, false);
    }
    if (mutator_.chooseMutateField()) {
      this.devtoolsFrameToken = mutator_.mutateStruct(mojoBase.mojom.UnguessableToken, false);
    }
    return this;
  };
  Renderer_CreateFrameProxy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_CreateFrameProxy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_CreateFrameProxy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_CreateFrameProxy_Params.validate = function(messageValidator, offset) {
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






    // validate Renderer_CreateFrameProxy_Params.replicationState
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, native_types$.FrameReplicationState, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_CreateFrameProxy_Params.devtoolsFrameToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, unguessable_token$.UnguessableToken, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_CreateFrameProxy_Params.encodedSize = codec.kStructHeaderSize + 32;

  Renderer_CreateFrameProxy_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_CreateFrameProxy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.routingId = decoder.decodeStruct(codec.Int32);
    val.renderViewRoutingId = decoder.decodeStruct(codec.Int32);
    val.openerRoutingId = decoder.decodeStruct(codec.Int32);
    val.parentRoutingId = decoder.decodeStruct(codec.Int32);
    val.replicationState = decoder.decodeStructPointer(native_types$.FrameReplicationState);
    val.devtoolsFrameToken = decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  Renderer_CreateFrameProxy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_CreateFrameProxy_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.routingId);
    encoder.encodeStruct(codec.Int32, val.renderViewRoutingId);
    encoder.encodeStruct(codec.Int32, val.openerRoutingId);
    encoder.encodeStruct(codec.Int32, val.parentRoutingId);
    encoder.encodeStructPointer(native_types$.FrameReplicationState, val.replicationState);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.devtoolsFrameToken);
  };
  function Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.prototype.initDefaults_ = function() {
    this.clientRequest = new bindings.InterfaceRequest();
  };
  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.generate = function(generator_) {
    var generated = new Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params;
    generated.clientRequest = generator_.generateInterfaceRequest("content.mojom.EmbeddedWorkerInstanceClient", false);
    return generated;
  };

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.clientRequest = mutator_.mutateInterfaceRequest(this.clientRequest, "content.mojom.EmbeddedWorkerInstanceClient", false);
    }
    return this;
  };
  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.clientRequest !== null) {
      Array.prototype.push.apply(handles, ["content.mojom.EmbeddedWorkerInstanceClientRequest"]);
    }
    return handles;
  };

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    this.clientRequest = handles[idx++];;
    return idx;
  };

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.clientRequest
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientRequest = decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.InterfaceRequest, val.clientRequest);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_OnNetworkConnectionChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_OnNetworkConnectionChanged_Params.prototype.initDefaults_ = function() {
    this.connectionType = 0;
    this.maxBandwidthMbps = 0;
  };
  Renderer_OnNetworkConnectionChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_OnNetworkConnectionChanged_Params.generate = function(generator_) {
    var generated = new Renderer_OnNetworkConnectionChanged_Params;
    generated.connectionType = generator_.generateEnum();
    generated.maxBandwidthMbps = generator_.generateDouble();
    return generated;
  };

  Renderer_OnNetworkConnectionChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.connectionType = mutator_.mutateEnum(this.connectionType);
    }
    if (mutator_.chooseMutateField()) {
      this.maxBandwidthMbps = mutator_.mutateDouble(this.maxBandwidthMbps);
    }
    return this;
  };
  Renderer_OnNetworkConnectionChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_OnNetworkConnectionChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_OnNetworkConnectionChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_OnNetworkConnectionChanged_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_OnNetworkConnectionChanged_Params.connectionType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, native_types$.NetworkConnectionType);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_OnNetworkConnectionChanged_Params.encodedSize = codec.kStructHeaderSize + 16;

  Renderer_OnNetworkConnectionChanged_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_OnNetworkConnectionChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.connectionType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxBandwidthMbps = decoder.decodeStruct(codec.Double);
    return val;
  };

  Renderer_OnNetworkConnectionChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_OnNetworkConnectionChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.connectionType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Double, val.maxBandwidthMbps);
  };
  function Renderer_OnNetworkQualityChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_OnNetworkQualityChanged_Params.prototype.initDefaults_ = function() {
    this.effectiveConnectionType = 0;
    this.httpRtt = null;
    this.transportRtt = null;
    this.bandwidthKbps = 0;
  };
  Renderer_OnNetworkQualityChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_OnNetworkQualityChanged_Params.generate = function(generator_) {
    var generated = new Renderer_OnNetworkQualityChanged_Params;
    generated.effectiveConnectionType = generator_.generateEnum();
    generated.httpRtt = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.transportRtt = generator_.generateStruct(mojoBase.mojom.TimeDelta, false);
    generated.bandwidthKbps = generator_.generateDouble();
    return generated;
  };

  Renderer_OnNetworkQualityChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.effectiveConnectionType = mutator_.mutateEnum(this.effectiveConnectionType);
    }
    if (mutator_.chooseMutateField()) {
      this.httpRtt = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.transportRtt = mutator_.mutateStruct(mojoBase.mojom.TimeDelta, false);
    }
    if (mutator_.chooseMutateField()) {
      this.bandwidthKbps = mutator_.mutateDouble(this.bandwidthKbps);
    }
    return this;
  };
  Renderer_OnNetworkQualityChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_OnNetworkQualityChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_OnNetworkQualityChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_OnNetworkQualityChanged_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_OnNetworkQualityChanged_Params.effectiveConnectionType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, network_types$.EffectiveConnectionType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_OnNetworkQualityChanged_Params.httpRtt
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_OnNetworkQualityChanged_Params.transportRtt
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeDelta, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Renderer_OnNetworkQualityChanged_Params.encodedSize = codec.kStructHeaderSize + 32;

  Renderer_OnNetworkQualityChanged_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_OnNetworkQualityChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.effectiveConnectionType = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.httpRtt = decoder.decodeStructPointer(time$.TimeDelta);
    val.transportRtt = decoder.decodeStructPointer(time$.TimeDelta);
    val.bandwidthKbps = decoder.decodeStruct(codec.Double);
    return val;
  };

  Renderer_OnNetworkQualityChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_OnNetworkQualityChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.effectiveConnectionType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(time$.TimeDelta, val.httpRtt);
    encoder.encodeStructPointer(time$.TimeDelta, val.transportRtt);
    encoder.encodeStruct(codec.Double, val.bandwidthKbps);
  };
  function Renderer_SetWebKitSharedTimersSuspended_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetWebKitSharedTimersSuspended_Params.prototype.initDefaults_ = function() {
    this.suspend = false;
  };
  Renderer_SetWebKitSharedTimersSuspended_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetWebKitSharedTimersSuspended_Params.generate = function(generator_) {
    var generated = new Renderer_SetWebKitSharedTimersSuspended_Params;
    generated.suspend = generator_.generateBool();
    return generated;
  };

  Renderer_SetWebKitSharedTimersSuspended_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.suspend = mutator_.mutateBool(this.suspend);
    }
    return this;
  };
  Renderer_SetWebKitSharedTimersSuspended_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetWebKitSharedTimersSuspended_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetWebKitSharedTimersSuspended_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetWebKitSharedTimersSuspended_Params.validate = function(messageValidator, offset) {
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

  Renderer_SetWebKitSharedTimersSuspended_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetWebKitSharedTimersSuspended_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetWebKitSharedTimersSuspended_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.suspend = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetWebKitSharedTimersSuspended_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetWebKitSharedTimersSuspended_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.suspend & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetUserAgent_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetUserAgent_Params.prototype.initDefaults_ = function() {
    this.userAgent = null;
  };
  Renderer_SetUserAgent_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetUserAgent_Params.generate = function(generator_) {
    var generated = new Renderer_SetUserAgent_Params;
    generated.userAgent = generator_.generateString(false);
    return generated;
  };

  Renderer_SetUserAgent_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.userAgent = mutator_.mutateString(this.userAgent, false);
    }
    return this;
  };
  Renderer_SetUserAgent_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetUserAgent_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetUserAgent_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetUserAgent_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_SetUserAgent_Params.userAgent
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_SetUserAgent_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetUserAgent_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetUserAgent_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.userAgent = decoder.decodeStruct(codec.String);
    return val;
  };

  Renderer_SetUserAgent_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetUserAgent_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.userAgent);
  };
  function Renderer_UpdateScrollbarTheme_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_UpdateScrollbarTheme_Params.prototype.initDefaults_ = function() {
    this.params = null;
  };
  Renderer_UpdateScrollbarTheme_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_UpdateScrollbarTheme_Params.generate = function(generator_) {
    var generated = new Renderer_UpdateScrollbarTheme_Params;
    generated.params = generator_.generateStruct(content.mojom.UpdateScrollbarThemeParams, false);
    return generated;
  };

  Renderer_UpdateScrollbarTheme_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.params = mutator_.mutateStruct(content.mojom.UpdateScrollbarThemeParams, false);
    }
    return this;
  };
  Renderer_UpdateScrollbarTheme_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_UpdateScrollbarTheme_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_UpdateScrollbarTheme_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_UpdateScrollbarTheme_Params.validate = function(messageValidator, offset) {
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


    // validate Renderer_UpdateScrollbarTheme_Params.params
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, UpdateScrollbarThemeParams, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_UpdateScrollbarTheme_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_UpdateScrollbarTheme_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_UpdateScrollbarTheme_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.params = decoder.decodeStructPointer(UpdateScrollbarThemeParams);
    return val;
  };

  Renderer_UpdateScrollbarTheme_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_UpdateScrollbarTheme_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(UpdateScrollbarThemeParams, val.params);
  };
  function Renderer_OnSystemColorsChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_OnSystemColorsChanged_Params.prototype.initDefaults_ = function() {
    this.aquaColorVariant = 0;
    this.highlightTextColor = null;
    this.highlightColor = null;
  };
  Renderer_OnSystemColorsChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_OnSystemColorsChanged_Params.generate = function(generator_) {
    var generated = new Renderer_OnSystemColorsChanged_Params;
    generated.aquaColorVariant = generator_.generateInt32();
    generated.highlightTextColor = generator_.generateString(false);
    generated.highlightColor = generator_.generateString(false);
    return generated;
  };

  Renderer_OnSystemColorsChanged_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.aquaColorVariant = mutator_.mutateInt32(this.aquaColorVariant);
    }
    if (mutator_.chooseMutateField()) {
      this.highlightTextColor = mutator_.mutateString(this.highlightTextColor, false);
    }
    if (mutator_.chooseMutateField()) {
      this.highlightColor = mutator_.mutateString(this.highlightColor, false);
    }
    return this;
  };
  Renderer_OnSystemColorsChanged_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_OnSystemColorsChanged_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_OnSystemColorsChanged_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_OnSystemColorsChanged_Params.validate = function(messageValidator, offset) {
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



    // validate Renderer_OnSystemColorsChanged_Params.highlightTextColor
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate Renderer_OnSystemColorsChanged_Params.highlightColor
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Renderer_OnSystemColorsChanged_Params.encodedSize = codec.kStructHeaderSize + 24;

  Renderer_OnSystemColorsChanged_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_OnSystemColorsChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.aquaColorVariant = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.highlightTextColor = decoder.decodeStruct(codec.String);
    val.highlightColor = decoder.decodeStruct(codec.String);
    return val;
  };

  Renderer_OnSystemColorsChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_OnSystemColorsChanged_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.aquaColorVariant);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.highlightTextColor);
    encoder.encodeStruct(codec.String, val.highlightColor);
  };
  function Renderer_PurgePluginListCache_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_PurgePluginListCache_Params.prototype.initDefaults_ = function() {
    this.reloadPages = false;
  };
  Renderer_PurgePluginListCache_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_PurgePluginListCache_Params.generate = function(generator_) {
    var generated = new Renderer_PurgePluginListCache_Params;
    generated.reloadPages = generator_.generateBool();
    return generated;
  };

  Renderer_PurgePluginListCache_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.reloadPages = mutator_.mutateBool(this.reloadPages);
    }
    return this;
  };
  Renderer_PurgePluginListCache_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_PurgePluginListCache_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_PurgePluginListCache_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_PurgePluginListCache_Params.validate = function(messageValidator, offset) {
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

  Renderer_PurgePluginListCache_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_PurgePluginListCache_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_PurgePluginListCache_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.reloadPages = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_PurgePluginListCache_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_PurgePluginListCache_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.reloadPages & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetProcessBackgrounded_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetProcessBackgrounded_Params.prototype.initDefaults_ = function() {
    this.background = false;
  };
  Renderer_SetProcessBackgrounded_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetProcessBackgrounded_Params.generate = function(generator_) {
    var generated = new Renderer_SetProcessBackgrounded_Params;
    generated.background = generator_.generateBool();
    return generated;
  };

  Renderer_SetProcessBackgrounded_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.background = mutator_.mutateBool(this.background);
    }
    return this;
  };
  Renderer_SetProcessBackgrounded_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetProcessBackgrounded_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetProcessBackgrounded_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetProcessBackgrounded_Params.validate = function(messageValidator, offset) {
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

  Renderer_SetProcessBackgrounded_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetProcessBackgrounded_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetProcessBackgrounded_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.background = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetProcessBackgrounded_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetProcessBackgrounded_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.background & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_SetSchedulerKeepActive_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_SetSchedulerKeepActive_Params.prototype.initDefaults_ = function() {
    this.keepActive = false;
  };
  Renderer_SetSchedulerKeepActive_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_SetSchedulerKeepActive_Params.generate = function(generator_) {
    var generated = new Renderer_SetSchedulerKeepActive_Params;
    generated.keepActive = generator_.generateBool();
    return generated;
  };

  Renderer_SetSchedulerKeepActive_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.keepActive = mutator_.mutateBool(this.keepActive);
    }
    return this;
  };
  Renderer_SetSchedulerKeepActive_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_SetSchedulerKeepActive_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_SetSchedulerKeepActive_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_SetSchedulerKeepActive_Params.validate = function(messageValidator, offset) {
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

  Renderer_SetSchedulerKeepActive_Params.encodedSize = codec.kStructHeaderSize + 8;

  Renderer_SetSchedulerKeepActive_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_SetSchedulerKeepActive_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.keepActive = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Renderer_SetSchedulerKeepActive_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_SetSchedulerKeepActive_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.keepActive & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Renderer_ProcessPurgeAndSuspend_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Renderer_ProcessPurgeAndSuspend_Params.prototype.initDefaults_ = function() {
  };
  Renderer_ProcessPurgeAndSuspend_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Renderer_ProcessPurgeAndSuspend_Params.generate = function(generator_) {
    var generated = new Renderer_ProcessPurgeAndSuspend_Params;
    return generated;
  };

  Renderer_ProcessPurgeAndSuspend_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  Renderer_ProcessPurgeAndSuspend_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Renderer_ProcessPurgeAndSuspend_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Renderer_ProcessPurgeAndSuspend_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Renderer_ProcessPurgeAndSuspend_Params.validate = function(messageValidator, offset) {
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

  Renderer_ProcessPurgeAndSuspend_Params.encodedSize = codec.kStructHeaderSize + 0;

  Renderer_ProcessPurgeAndSuspend_Params.decode = function(decoder) {
    var packed;
    var val = new Renderer_ProcessPurgeAndSuspend_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Renderer_ProcessPurgeAndSuspend_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Renderer_ProcessPurgeAndSuspend_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kRenderer_CreateEmbedderRendererService_Name = 296950658;
  var kRenderer_CreateView_Name = 1962837039;
  var kRenderer_CreateFrame_Name = 101082141;
  var kRenderer_CreateFrameProxy_Name = 985547464;
  var kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name = 174756234;
  var kRenderer_OnNetworkConnectionChanged_Name = 987545218;
  var kRenderer_OnNetworkQualityChanged_Name = 572050759;
  var kRenderer_SetWebKitSharedTimersSuspended_Name = 980133610;
  var kRenderer_SetUserAgent_Name = 884936316;
  var kRenderer_UpdateScrollbarTheme_Name = 1064927645;
  var kRenderer_OnSystemColorsChanged_Name = 894354328;
  var kRenderer_PurgePluginListCache_Name = 393975167;
  var kRenderer_SetProcessBackgrounded_Name = 1502247587;
  var kRenderer_SetSchedulerKeepActive_Name = 2094366040;
  var kRenderer_ProcessPurgeAndSuspend_Name = 1602097415;

  function RendererPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Renderer,
                                                   handleOrPtrInfo);
  }

  function RendererAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Renderer, associatedInterfacePtrInfo);
  }

  RendererAssociatedPtr.prototype =
      Object.create(RendererPtr.prototype);
  RendererAssociatedPtr.prototype.constructor =
      RendererAssociatedPtr;

  function RendererProxy(receiver) {
    this.receiver_ = receiver;
  }
  RendererPtr.prototype.createEmbedderRendererService = function() {
    return RendererProxy.prototype.createEmbedderRendererService
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.createEmbedderRendererService = function(serviceRequest) {
    var params_ = new Renderer_CreateEmbedderRendererService_Params();
    params_.serviceRequest = serviceRequest;
    var builder = new codec.MessageV0Builder(
        kRenderer_CreateEmbedderRendererService_Name,
        codec.align(Renderer_CreateEmbedderRendererService_Params.encodedSize));
    builder.encodeStruct(Renderer_CreateEmbedderRendererService_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.createView = function() {
    return RendererProxy.prototype.createView
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.createView = function(params) {
    var params_ = new Renderer_CreateView_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kRenderer_CreateView_Name,
        codec.align(Renderer_CreateView_Params.encodedSize));
    builder.encodeStruct(Renderer_CreateView_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.createFrame = function() {
    return RendererProxy.prototype.createFrame
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.createFrame = function(params) {
    var params_ = new Renderer_CreateFrame_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kRenderer_CreateFrame_Name,
        codec.align(Renderer_CreateFrame_Params.encodedSize));
    builder.encodeStruct(Renderer_CreateFrame_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.createFrameProxy = function() {
    return RendererProxy.prototype.createFrameProxy
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.createFrameProxy = function(routingId, renderViewRoutingId, openerRoutingId, parentRoutingId, replicationState, devtoolsFrameToken) {
    var params_ = new Renderer_CreateFrameProxy_Params();
    params_.routingId = routingId;
    params_.renderViewRoutingId = renderViewRoutingId;
    params_.openerRoutingId = openerRoutingId;
    params_.parentRoutingId = parentRoutingId;
    params_.replicationState = replicationState;
    params_.devtoolsFrameToken = devtoolsFrameToken;
    var builder = new codec.MessageV0Builder(
        kRenderer_CreateFrameProxy_Name,
        codec.align(Renderer_CreateFrameProxy_Params.encodedSize));
    builder.encodeStruct(Renderer_CreateFrameProxy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setUpEmbeddedWorkerChannelForServiceWorker = function() {
    return RendererProxy.prototype.setUpEmbeddedWorkerChannelForServiceWorker
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setUpEmbeddedWorkerChannelForServiceWorker = function(clientRequest) {
    var params_ = new Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params();
    params_.clientRequest = clientRequest;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name,
        codec.align(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params.encodedSize));
    builder.encodeStruct(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.onNetworkConnectionChanged = function() {
    return RendererProxy.prototype.onNetworkConnectionChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.onNetworkConnectionChanged = function(connectionType, maxBandwidthMbps) {
    var params_ = new Renderer_OnNetworkConnectionChanged_Params();
    params_.connectionType = connectionType;
    params_.maxBandwidthMbps = maxBandwidthMbps;
    var builder = new codec.MessageV0Builder(
        kRenderer_OnNetworkConnectionChanged_Name,
        codec.align(Renderer_OnNetworkConnectionChanged_Params.encodedSize));
    builder.encodeStruct(Renderer_OnNetworkConnectionChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.onNetworkQualityChanged = function() {
    return RendererProxy.prototype.onNetworkQualityChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.onNetworkQualityChanged = function(effectiveConnectionType, httpRtt, transportRtt, bandwidthKbps) {
    var params_ = new Renderer_OnNetworkQualityChanged_Params();
    params_.effectiveConnectionType = effectiveConnectionType;
    params_.httpRtt = httpRtt;
    params_.transportRtt = transportRtt;
    params_.bandwidthKbps = bandwidthKbps;
    var builder = new codec.MessageV0Builder(
        kRenderer_OnNetworkQualityChanged_Name,
        codec.align(Renderer_OnNetworkQualityChanged_Params.encodedSize));
    builder.encodeStruct(Renderer_OnNetworkQualityChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setWebKitSharedTimersSuspended = function() {
    return RendererProxy.prototype.setWebKitSharedTimersSuspended
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setWebKitSharedTimersSuspended = function(suspend) {
    var params_ = new Renderer_SetWebKitSharedTimersSuspended_Params();
    params_.suspend = suspend;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetWebKitSharedTimersSuspended_Name,
        codec.align(Renderer_SetWebKitSharedTimersSuspended_Params.encodedSize));
    builder.encodeStruct(Renderer_SetWebKitSharedTimersSuspended_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setUserAgent = function() {
    return RendererProxy.prototype.setUserAgent
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setUserAgent = function(userAgent) {
    var params_ = new Renderer_SetUserAgent_Params();
    params_.userAgent = userAgent;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetUserAgent_Name,
        codec.align(Renderer_SetUserAgent_Params.encodedSize));
    builder.encodeStruct(Renderer_SetUserAgent_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.updateScrollbarTheme = function() {
    return RendererProxy.prototype.updateScrollbarTheme
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.updateScrollbarTheme = function(params) {
    var params_ = new Renderer_UpdateScrollbarTheme_Params();
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kRenderer_UpdateScrollbarTheme_Name,
        codec.align(Renderer_UpdateScrollbarTheme_Params.encodedSize));
    builder.encodeStruct(Renderer_UpdateScrollbarTheme_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.onSystemColorsChanged = function() {
    return RendererProxy.prototype.onSystemColorsChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.onSystemColorsChanged = function(aquaColorVariant, highlightTextColor, highlightColor) {
    var params_ = new Renderer_OnSystemColorsChanged_Params();
    params_.aquaColorVariant = aquaColorVariant;
    params_.highlightTextColor = highlightTextColor;
    params_.highlightColor = highlightColor;
    var builder = new codec.MessageV0Builder(
        kRenderer_OnSystemColorsChanged_Name,
        codec.align(Renderer_OnSystemColorsChanged_Params.encodedSize));
    builder.encodeStruct(Renderer_OnSystemColorsChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.purgePluginListCache = function() {
    return RendererProxy.prototype.purgePluginListCache
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.purgePluginListCache = function(reloadPages) {
    var params_ = new Renderer_PurgePluginListCache_Params();
    params_.reloadPages = reloadPages;
    var builder = new codec.MessageV0Builder(
        kRenderer_PurgePluginListCache_Name,
        codec.align(Renderer_PurgePluginListCache_Params.encodedSize));
    builder.encodeStruct(Renderer_PurgePluginListCache_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setProcessBackgrounded = function() {
    return RendererProxy.prototype.setProcessBackgrounded
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setProcessBackgrounded = function(background) {
    var params_ = new Renderer_SetProcessBackgrounded_Params();
    params_.background = background;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetProcessBackgrounded_Name,
        codec.align(Renderer_SetProcessBackgrounded_Params.encodedSize));
    builder.encodeStruct(Renderer_SetProcessBackgrounded_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.setSchedulerKeepActive = function() {
    return RendererProxy.prototype.setSchedulerKeepActive
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.setSchedulerKeepActive = function(keepActive) {
    var params_ = new Renderer_SetSchedulerKeepActive_Params();
    params_.keepActive = keepActive;
    var builder = new codec.MessageV0Builder(
        kRenderer_SetSchedulerKeepActive_Name,
        codec.align(Renderer_SetSchedulerKeepActive_Params.encodedSize));
    builder.encodeStruct(Renderer_SetSchedulerKeepActive_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  RendererPtr.prototype.processPurgeAndSuspend = function() {
    return RendererProxy.prototype.processPurgeAndSuspend
        .apply(this.ptr.getProxy(), arguments);
  };

  RendererProxy.prototype.processPurgeAndSuspend = function() {
    var params_ = new Renderer_ProcessPurgeAndSuspend_Params();
    var builder = new codec.MessageV0Builder(
        kRenderer_ProcessPurgeAndSuspend_Name,
        codec.align(Renderer_ProcessPurgeAndSuspend_Params.encodedSize));
    builder.encodeStruct(Renderer_ProcessPurgeAndSuspend_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function RendererStub(delegate) {
    this.delegate_ = delegate;
  }
  RendererStub.prototype.createEmbedderRendererService = function(serviceRequest) {
    return this.delegate_ && this.delegate_.createEmbedderRendererService && this.delegate_.createEmbedderRendererService(serviceRequest);
  }
  RendererStub.prototype.createView = function(params) {
    return this.delegate_ && this.delegate_.createView && this.delegate_.createView(params);
  }
  RendererStub.prototype.createFrame = function(params) {
    return this.delegate_ && this.delegate_.createFrame && this.delegate_.createFrame(params);
  }
  RendererStub.prototype.createFrameProxy = function(routingId, renderViewRoutingId, openerRoutingId, parentRoutingId, replicationState, devtoolsFrameToken) {
    return this.delegate_ && this.delegate_.createFrameProxy && this.delegate_.createFrameProxy(routingId, renderViewRoutingId, openerRoutingId, parentRoutingId, replicationState, devtoolsFrameToken);
  }
  RendererStub.prototype.setUpEmbeddedWorkerChannelForServiceWorker = function(clientRequest) {
    return this.delegate_ && this.delegate_.setUpEmbeddedWorkerChannelForServiceWorker && this.delegate_.setUpEmbeddedWorkerChannelForServiceWorker(clientRequest);
  }
  RendererStub.prototype.onNetworkConnectionChanged = function(connectionType, maxBandwidthMbps) {
    return this.delegate_ && this.delegate_.onNetworkConnectionChanged && this.delegate_.onNetworkConnectionChanged(connectionType, maxBandwidthMbps);
  }
  RendererStub.prototype.onNetworkQualityChanged = function(effectiveConnectionType, httpRtt, transportRtt, bandwidthKbps) {
    return this.delegate_ && this.delegate_.onNetworkQualityChanged && this.delegate_.onNetworkQualityChanged(effectiveConnectionType, httpRtt, transportRtt, bandwidthKbps);
  }
  RendererStub.prototype.setWebKitSharedTimersSuspended = function(suspend) {
    return this.delegate_ && this.delegate_.setWebKitSharedTimersSuspended && this.delegate_.setWebKitSharedTimersSuspended(suspend);
  }
  RendererStub.prototype.setUserAgent = function(userAgent) {
    return this.delegate_ && this.delegate_.setUserAgent && this.delegate_.setUserAgent(userAgent);
  }
  RendererStub.prototype.updateScrollbarTheme = function(params) {
    return this.delegate_ && this.delegate_.updateScrollbarTheme && this.delegate_.updateScrollbarTheme(params);
  }
  RendererStub.prototype.onSystemColorsChanged = function(aquaColorVariant, highlightTextColor, highlightColor) {
    return this.delegate_ && this.delegate_.onSystemColorsChanged && this.delegate_.onSystemColorsChanged(aquaColorVariant, highlightTextColor, highlightColor);
  }
  RendererStub.prototype.purgePluginListCache = function(reloadPages) {
    return this.delegate_ && this.delegate_.purgePluginListCache && this.delegate_.purgePluginListCache(reloadPages);
  }
  RendererStub.prototype.setProcessBackgrounded = function(background) {
    return this.delegate_ && this.delegate_.setProcessBackgrounded && this.delegate_.setProcessBackgrounded(background);
  }
  RendererStub.prototype.setSchedulerKeepActive = function(keepActive) {
    return this.delegate_ && this.delegate_.setSchedulerKeepActive && this.delegate_.setSchedulerKeepActive(keepActive);
  }
  RendererStub.prototype.processPurgeAndSuspend = function() {
    return this.delegate_ && this.delegate_.processPurgeAndSuspend && this.delegate_.processPurgeAndSuspend();
  }

  RendererStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kRenderer_CreateEmbedderRendererService_Name:
      var params = reader.decodeStruct(Renderer_CreateEmbedderRendererService_Params);
      this.createEmbedderRendererService(params.serviceRequest);
      return true;
    case kRenderer_CreateView_Name:
      var params = reader.decodeStruct(Renderer_CreateView_Params);
      this.createView(params.params);
      return true;
    case kRenderer_CreateFrame_Name:
      var params = reader.decodeStruct(Renderer_CreateFrame_Params);
      this.createFrame(params.params);
      return true;
    case kRenderer_CreateFrameProxy_Name:
      var params = reader.decodeStruct(Renderer_CreateFrameProxy_Params);
      this.createFrameProxy(params.routingId, params.renderViewRoutingId, params.openerRoutingId, params.parentRoutingId, params.replicationState, params.devtoolsFrameToken);
      return true;
    case kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name:
      var params = reader.decodeStruct(Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params);
      this.setUpEmbeddedWorkerChannelForServiceWorker(params.clientRequest);
      return true;
    case kRenderer_OnNetworkConnectionChanged_Name:
      var params = reader.decodeStruct(Renderer_OnNetworkConnectionChanged_Params);
      this.onNetworkConnectionChanged(params.connectionType, params.maxBandwidthMbps);
      return true;
    case kRenderer_OnNetworkQualityChanged_Name:
      var params = reader.decodeStruct(Renderer_OnNetworkQualityChanged_Params);
      this.onNetworkQualityChanged(params.effectiveConnectionType, params.httpRtt, params.transportRtt, params.bandwidthKbps);
      return true;
    case kRenderer_SetWebKitSharedTimersSuspended_Name:
      var params = reader.decodeStruct(Renderer_SetWebKitSharedTimersSuspended_Params);
      this.setWebKitSharedTimersSuspended(params.suspend);
      return true;
    case kRenderer_SetUserAgent_Name:
      var params = reader.decodeStruct(Renderer_SetUserAgent_Params);
      this.setUserAgent(params.userAgent);
      return true;
    case kRenderer_UpdateScrollbarTheme_Name:
      var params = reader.decodeStruct(Renderer_UpdateScrollbarTheme_Params);
      this.updateScrollbarTheme(params.params);
      return true;
    case kRenderer_OnSystemColorsChanged_Name:
      var params = reader.decodeStruct(Renderer_OnSystemColorsChanged_Params);
      this.onSystemColorsChanged(params.aquaColorVariant, params.highlightTextColor, params.highlightColor);
      return true;
    case kRenderer_PurgePluginListCache_Name:
      var params = reader.decodeStruct(Renderer_PurgePluginListCache_Params);
      this.purgePluginListCache(params.reloadPages);
      return true;
    case kRenderer_SetProcessBackgrounded_Name:
      var params = reader.decodeStruct(Renderer_SetProcessBackgrounded_Params);
      this.setProcessBackgrounded(params.background);
      return true;
    case kRenderer_SetSchedulerKeepActive_Name:
      var params = reader.decodeStruct(Renderer_SetSchedulerKeepActive_Params);
      this.setSchedulerKeepActive(params.keepActive);
      return true;
    case kRenderer_ProcessPurgeAndSuspend_Name:
      var params = reader.decodeStruct(Renderer_ProcessPurgeAndSuspend_Params);
      this.processPurgeAndSuspend();
      return true;
    default:
      return false;
    }
  };

  RendererStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateRendererRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kRenderer_CreateEmbedderRendererService_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_CreateEmbedderRendererService_Params;
      break;
      case kRenderer_CreateView_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_CreateView_Params;
      break;
      case kRenderer_CreateFrame_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_CreateFrame_Params;
      break;
      case kRenderer_CreateFrameProxy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_CreateFrameProxy_Params;
      break;
      case kRenderer_SetUpEmbeddedWorkerChannelForServiceWorker_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params;
      break;
      case kRenderer_OnNetworkConnectionChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_OnNetworkConnectionChanged_Params;
      break;
      case kRenderer_OnNetworkQualityChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_OnNetworkQualityChanged_Params;
      break;
      case kRenderer_SetWebKitSharedTimersSuspended_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetWebKitSharedTimersSuspended_Params;
      break;
      case kRenderer_SetUserAgent_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetUserAgent_Params;
      break;
      case kRenderer_UpdateScrollbarTheme_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_UpdateScrollbarTheme_Params;
      break;
      case kRenderer_OnSystemColorsChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_OnSystemColorsChanged_Params;
      break;
      case kRenderer_PurgePluginListCache_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_PurgePluginListCache_Params;
      break;
      case kRenderer_SetProcessBackgrounded_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetProcessBackgrounded_Params;
      break;
      case kRenderer_SetSchedulerKeepActive_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_SetSchedulerKeepActive_Params;
      break;
      case kRenderer_ProcessPurgeAndSuspend_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Renderer_ProcessPurgeAndSuspend_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateRendererResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Renderer = {
    name: 'content.mojom.Renderer',
    kVersion: 0,
    ptrClass: RendererPtr,
    proxyClass: RendererProxy,
    stubClass: RendererStub,
    validateRequest: validateRendererRequest,
    validateResponse: null,
    mojomId: 'content/common/renderer.mojom',
    fuzzMethods: {
      createEmbedderRendererService: {
        params: Renderer_CreateEmbedderRendererService_Params,
      },
      createView: {
        params: Renderer_CreateView_Params,
      },
      createFrame: {
        params: Renderer_CreateFrame_Params,
      },
      createFrameProxy: {
        params: Renderer_CreateFrameProxy_Params,
      },
      setUpEmbeddedWorkerChannelForServiceWorker: {
        params: Renderer_SetUpEmbeddedWorkerChannelForServiceWorker_Params,
      },
      onNetworkConnectionChanged: {
        params: Renderer_OnNetworkConnectionChanged_Params,
      },
      onNetworkQualityChanged: {
        params: Renderer_OnNetworkQualityChanged_Params,
      },
      setWebKitSharedTimersSuspended: {
        params: Renderer_SetWebKitSharedTimersSuspended_Params,
      },
      setUserAgent: {
        params: Renderer_SetUserAgent_Params,
      },
      updateScrollbarTheme: {
        params: Renderer_UpdateScrollbarTheme_Params,
      },
      onSystemColorsChanged: {
        params: Renderer_OnSystemColorsChanged_Params,
      },
      purgePluginListCache: {
        params: Renderer_PurgePluginListCache_Params,
      },
      setProcessBackgrounded: {
        params: Renderer_SetProcessBackgrounded_Params,
      },
      setSchedulerKeepActive: {
        params: Renderer_SetSchedulerKeepActive_Params,
      },
      processPurgeAndSuspend: {
        params: Renderer_ProcessPurgeAndSuspend_Params,
      },
    },
  };
  RendererStub.prototype.validator = validateRendererRequest;
  RendererProxy.prototype.validator = null;
  exports.CreateViewParams = CreateViewParams;
  exports.CreateFrameWidgetParams = CreateFrameWidgetParams;
  exports.CreateFrameParams = CreateFrameParams;
  exports.UpdateScrollbarThemeParams = UpdateScrollbarThemeParams;
  exports.Renderer = Renderer;
  exports.RendererPtr = RendererPtr;
  exports.RendererAssociatedPtr = RendererAssociatedPtr;
})();