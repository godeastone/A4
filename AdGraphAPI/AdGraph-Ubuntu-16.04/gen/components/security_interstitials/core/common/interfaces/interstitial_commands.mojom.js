// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'components/security_interstitials/core/common/interfaces/interstitial_commands.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('securityInterstitials.mojom');



  function InterstitialCommands_DontProceed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_DontProceed_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_DontProceed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_DontProceed_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_DontProceed_Params;
    return generated;
  };

  InterstitialCommands_DontProceed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_DontProceed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_DontProceed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_DontProceed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_DontProceed_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_DontProceed_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_DontProceed_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_DontProceed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_DontProceed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_DontProceed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_Proceed_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_Proceed_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_Proceed_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_Proceed_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_Proceed_Params;
    return generated;
  };

  InterstitialCommands_Proceed_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_Proceed_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_Proceed_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_Proceed_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_Proceed_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_Proceed_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_Proceed_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_Proceed_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_Proceed_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_Proceed_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_ShowMoreSection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_ShowMoreSection_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_ShowMoreSection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_ShowMoreSection_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_ShowMoreSection_Params;
    return generated;
  };

  InterstitialCommands_ShowMoreSection_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_ShowMoreSection_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_ShowMoreSection_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_ShowMoreSection_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_ShowMoreSection_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_ShowMoreSection_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_ShowMoreSection_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_ShowMoreSection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_ShowMoreSection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_ShowMoreSection_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_OpenHelpCenter_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_OpenHelpCenter_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_OpenHelpCenter_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_OpenHelpCenter_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_OpenHelpCenter_Params;
    return generated;
  };

  InterstitialCommands_OpenHelpCenter_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_OpenHelpCenter_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_OpenHelpCenter_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_OpenHelpCenter_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_OpenHelpCenter_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_OpenHelpCenter_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_OpenHelpCenter_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_OpenHelpCenter_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_OpenHelpCenter_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_OpenHelpCenter_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_OpenDiagnostic_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_OpenDiagnostic_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_OpenDiagnostic_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_OpenDiagnostic_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_OpenDiagnostic_Params;
    return generated;
  };

  InterstitialCommands_OpenDiagnostic_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_OpenDiagnostic_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_OpenDiagnostic_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_OpenDiagnostic_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_OpenDiagnostic_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_OpenDiagnostic_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_OpenDiagnostic_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_OpenDiagnostic_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_OpenDiagnostic_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_OpenDiagnostic_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_Reload_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_Reload_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_Reload_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_Reload_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_Reload_Params;
    return generated;
  };

  InterstitialCommands_Reload_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_Reload_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_Reload_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_Reload_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_Reload_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_Reload_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_Reload_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_Reload_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_Reload_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_Reload_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_OpenDateSettings_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_OpenDateSettings_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_OpenDateSettings_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_OpenDateSettings_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_OpenDateSettings_Params;
    return generated;
  };

  InterstitialCommands_OpenDateSettings_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_OpenDateSettings_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_OpenDateSettings_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_OpenDateSettings_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_OpenDateSettings_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_OpenDateSettings_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_OpenDateSettings_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_OpenDateSettings_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_OpenDateSettings_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_OpenDateSettings_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_OpenLogin_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_OpenLogin_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_OpenLogin_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_OpenLogin_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_OpenLogin_Params;
    return generated;
  };

  InterstitialCommands_OpenLogin_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_OpenLogin_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_OpenLogin_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_OpenLogin_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_OpenLogin_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_OpenLogin_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_OpenLogin_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_OpenLogin_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_OpenLogin_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_OpenLogin_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_DoReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_DoReport_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_DoReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_DoReport_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_DoReport_Params;
    return generated;
  };

  InterstitialCommands_DoReport_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_DoReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_DoReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_DoReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_DoReport_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_DoReport_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_DoReport_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_DoReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_DoReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_DoReport_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_DontReport_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_DontReport_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_DontReport_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_DontReport_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_DontReport_Params;
    return generated;
  };

  InterstitialCommands_DontReport_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_DontReport_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_DontReport_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_DontReport_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_DontReport_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_DontReport_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_DontReport_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_DontReport_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_DontReport_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_DontReport_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_OpenReportingPrivacy_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_OpenReportingPrivacy_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_OpenReportingPrivacy_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_OpenReportingPrivacy_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_OpenReportingPrivacy_Params;
    return generated;
  };

  InterstitialCommands_OpenReportingPrivacy_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_OpenReportingPrivacy_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_OpenReportingPrivacy_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_OpenReportingPrivacy_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_OpenReportingPrivacy_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_OpenReportingPrivacy_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_OpenReportingPrivacy_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_OpenReportingPrivacy_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_OpenReportingPrivacy_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_OpenReportingPrivacy_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_OpenWhitepaper_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_OpenWhitepaper_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_OpenWhitepaper_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_OpenWhitepaper_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_OpenWhitepaper_Params;
    return generated;
  };

  InterstitialCommands_OpenWhitepaper_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_OpenWhitepaper_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_OpenWhitepaper_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_OpenWhitepaper_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_OpenWhitepaper_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_OpenWhitepaper_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_OpenWhitepaper_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_OpenWhitepaper_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_OpenWhitepaper_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_OpenWhitepaper_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function InterstitialCommands_ReportPhishingError_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InterstitialCommands_ReportPhishingError_Params.prototype.initDefaults_ = function() {
  };
  InterstitialCommands_ReportPhishingError_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  InterstitialCommands_ReportPhishingError_Params.generate = function(generator_) {
    var generated = new InterstitialCommands_ReportPhishingError_Params;
    return generated;
  };

  InterstitialCommands_ReportPhishingError_Params.prototype.mutate = function(mutator_) {
    return this;
  };
  InterstitialCommands_ReportPhishingError_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  InterstitialCommands_ReportPhishingError_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  InterstitialCommands_ReportPhishingError_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  InterstitialCommands_ReportPhishingError_Params.validate = function(messageValidator, offset) {
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

  InterstitialCommands_ReportPhishingError_Params.encodedSize = codec.kStructHeaderSize + 0;

  InterstitialCommands_ReportPhishingError_Params.decode = function(decoder) {
    var packed;
    var val = new InterstitialCommands_ReportPhishingError_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  InterstitialCommands_ReportPhishingError_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InterstitialCommands_ReportPhishingError_Params.encodedSize);
    encoder.writeUint32(0);
  };
  var kInterstitialCommands_DontProceed_Name = 120471663;
  var kInterstitialCommands_Proceed_Name = 51045096;
  var kInterstitialCommands_ShowMoreSection_Name = 1166580056;
  var kInterstitialCommands_OpenHelpCenter_Name = 610808083;
  var kInterstitialCommands_OpenDiagnostic_Name = 1724995818;
  var kInterstitialCommands_Reload_Name = 268347643;
  var kInterstitialCommands_OpenDateSettings_Name = 38950909;
  var kInterstitialCommands_OpenLogin_Name = 306609738;
  var kInterstitialCommands_DoReport_Name = 976738136;
  var kInterstitialCommands_DontReport_Name = 722525424;
  var kInterstitialCommands_OpenReportingPrivacy_Name = 1219899892;
  var kInterstitialCommands_OpenWhitepaper_Name = 510402959;
  var kInterstitialCommands_ReportPhishingError_Name = 314196157;

  function InterstitialCommandsPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InterstitialCommands,
                                                   handleOrPtrInfo);
  }

  function InterstitialCommandsAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InterstitialCommands, associatedInterfacePtrInfo);
  }

  InterstitialCommandsAssociatedPtr.prototype =
      Object.create(InterstitialCommandsPtr.prototype);
  InterstitialCommandsAssociatedPtr.prototype.constructor =
      InterstitialCommandsAssociatedPtr;

  function InterstitialCommandsProxy(receiver) {
    this.receiver_ = receiver;
  }
  InterstitialCommandsPtr.prototype.dontProceed = function() {
    return InterstitialCommandsProxy.prototype.dontProceed
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.dontProceed = function() {
    var params_ = new InterstitialCommands_DontProceed_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_DontProceed_Name,
        codec.align(InterstitialCommands_DontProceed_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_DontProceed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.proceed = function() {
    return InterstitialCommandsProxy.prototype.proceed
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.proceed = function() {
    var params_ = new InterstitialCommands_Proceed_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_Proceed_Name,
        codec.align(InterstitialCommands_Proceed_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_Proceed_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.showMoreSection = function() {
    return InterstitialCommandsProxy.prototype.showMoreSection
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.showMoreSection = function() {
    var params_ = new InterstitialCommands_ShowMoreSection_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_ShowMoreSection_Name,
        codec.align(InterstitialCommands_ShowMoreSection_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_ShowMoreSection_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.openHelpCenter = function() {
    return InterstitialCommandsProxy.prototype.openHelpCenter
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.openHelpCenter = function() {
    var params_ = new InterstitialCommands_OpenHelpCenter_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_OpenHelpCenter_Name,
        codec.align(InterstitialCommands_OpenHelpCenter_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_OpenHelpCenter_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.openDiagnostic = function() {
    return InterstitialCommandsProxy.prototype.openDiagnostic
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.openDiagnostic = function() {
    var params_ = new InterstitialCommands_OpenDiagnostic_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_OpenDiagnostic_Name,
        codec.align(InterstitialCommands_OpenDiagnostic_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_OpenDiagnostic_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.reload = function() {
    return InterstitialCommandsProxy.prototype.reload
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.reload = function() {
    var params_ = new InterstitialCommands_Reload_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_Reload_Name,
        codec.align(InterstitialCommands_Reload_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_Reload_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.openDateSettings = function() {
    return InterstitialCommandsProxy.prototype.openDateSettings
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.openDateSettings = function() {
    var params_ = new InterstitialCommands_OpenDateSettings_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_OpenDateSettings_Name,
        codec.align(InterstitialCommands_OpenDateSettings_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_OpenDateSettings_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.openLogin = function() {
    return InterstitialCommandsProxy.prototype.openLogin
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.openLogin = function() {
    var params_ = new InterstitialCommands_OpenLogin_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_OpenLogin_Name,
        codec.align(InterstitialCommands_OpenLogin_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_OpenLogin_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.doReport = function() {
    return InterstitialCommandsProxy.prototype.doReport
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.doReport = function() {
    var params_ = new InterstitialCommands_DoReport_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_DoReport_Name,
        codec.align(InterstitialCommands_DoReport_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_DoReport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.dontReport = function() {
    return InterstitialCommandsProxy.prototype.dontReport
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.dontReport = function() {
    var params_ = new InterstitialCommands_DontReport_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_DontReport_Name,
        codec.align(InterstitialCommands_DontReport_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_DontReport_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.openReportingPrivacy = function() {
    return InterstitialCommandsProxy.prototype.openReportingPrivacy
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.openReportingPrivacy = function() {
    var params_ = new InterstitialCommands_OpenReportingPrivacy_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_OpenReportingPrivacy_Name,
        codec.align(InterstitialCommands_OpenReportingPrivacy_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_OpenReportingPrivacy_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.openWhitepaper = function() {
    return InterstitialCommandsProxy.prototype.openWhitepaper
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.openWhitepaper = function() {
    var params_ = new InterstitialCommands_OpenWhitepaper_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_OpenWhitepaper_Name,
        codec.align(InterstitialCommands_OpenWhitepaper_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_OpenWhitepaper_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  InterstitialCommandsPtr.prototype.reportPhishingError = function() {
    return InterstitialCommandsProxy.prototype.reportPhishingError
        .apply(this.ptr.getProxy(), arguments);
  };

  InterstitialCommandsProxy.prototype.reportPhishingError = function() {
    var params_ = new InterstitialCommands_ReportPhishingError_Params();
    var builder = new codec.MessageV0Builder(
        kInterstitialCommands_ReportPhishingError_Name,
        codec.align(InterstitialCommands_ReportPhishingError_Params.encodedSize));
    builder.encodeStruct(InterstitialCommands_ReportPhishingError_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function InterstitialCommandsStub(delegate) {
    this.delegate_ = delegate;
  }
  InterstitialCommandsStub.prototype.dontProceed = function() {
    return this.delegate_ && this.delegate_.dontProceed && this.delegate_.dontProceed();
  }
  InterstitialCommandsStub.prototype.proceed = function() {
    return this.delegate_ && this.delegate_.proceed && this.delegate_.proceed();
  }
  InterstitialCommandsStub.prototype.showMoreSection = function() {
    return this.delegate_ && this.delegate_.showMoreSection && this.delegate_.showMoreSection();
  }
  InterstitialCommandsStub.prototype.openHelpCenter = function() {
    return this.delegate_ && this.delegate_.openHelpCenter && this.delegate_.openHelpCenter();
  }
  InterstitialCommandsStub.prototype.openDiagnostic = function() {
    return this.delegate_ && this.delegate_.openDiagnostic && this.delegate_.openDiagnostic();
  }
  InterstitialCommandsStub.prototype.reload = function() {
    return this.delegate_ && this.delegate_.reload && this.delegate_.reload();
  }
  InterstitialCommandsStub.prototype.openDateSettings = function() {
    return this.delegate_ && this.delegate_.openDateSettings && this.delegate_.openDateSettings();
  }
  InterstitialCommandsStub.prototype.openLogin = function() {
    return this.delegate_ && this.delegate_.openLogin && this.delegate_.openLogin();
  }
  InterstitialCommandsStub.prototype.doReport = function() {
    return this.delegate_ && this.delegate_.doReport && this.delegate_.doReport();
  }
  InterstitialCommandsStub.prototype.dontReport = function() {
    return this.delegate_ && this.delegate_.dontReport && this.delegate_.dontReport();
  }
  InterstitialCommandsStub.prototype.openReportingPrivacy = function() {
    return this.delegate_ && this.delegate_.openReportingPrivacy && this.delegate_.openReportingPrivacy();
  }
  InterstitialCommandsStub.prototype.openWhitepaper = function() {
    return this.delegate_ && this.delegate_.openWhitepaper && this.delegate_.openWhitepaper();
  }
  InterstitialCommandsStub.prototype.reportPhishingError = function() {
    return this.delegate_ && this.delegate_.reportPhishingError && this.delegate_.reportPhishingError();
  }

  InterstitialCommandsStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInterstitialCommands_DontProceed_Name:
      var params = reader.decodeStruct(InterstitialCommands_DontProceed_Params);
      this.dontProceed();
      return true;
    case kInterstitialCommands_Proceed_Name:
      var params = reader.decodeStruct(InterstitialCommands_Proceed_Params);
      this.proceed();
      return true;
    case kInterstitialCommands_ShowMoreSection_Name:
      var params = reader.decodeStruct(InterstitialCommands_ShowMoreSection_Params);
      this.showMoreSection();
      return true;
    case kInterstitialCommands_OpenHelpCenter_Name:
      var params = reader.decodeStruct(InterstitialCommands_OpenHelpCenter_Params);
      this.openHelpCenter();
      return true;
    case kInterstitialCommands_OpenDiagnostic_Name:
      var params = reader.decodeStruct(InterstitialCommands_OpenDiagnostic_Params);
      this.openDiagnostic();
      return true;
    case kInterstitialCommands_Reload_Name:
      var params = reader.decodeStruct(InterstitialCommands_Reload_Params);
      this.reload();
      return true;
    case kInterstitialCommands_OpenDateSettings_Name:
      var params = reader.decodeStruct(InterstitialCommands_OpenDateSettings_Params);
      this.openDateSettings();
      return true;
    case kInterstitialCommands_OpenLogin_Name:
      var params = reader.decodeStruct(InterstitialCommands_OpenLogin_Params);
      this.openLogin();
      return true;
    case kInterstitialCommands_DoReport_Name:
      var params = reader.decodeStruct(InterstitialCommands_DoReport_Params);
      this.doReport();
      return true;
    case kInterstitialCommands_DontReport_Name:
      var params = reader.decodeStruct(InterstitialCommands_DontReport_Params);
      this.dontReport();
      return true;
    case kInterstitialCommands_OpenReportingPrivacy_Name:
      var params = reader.decodeStruct(InterstitialCommands_OpenReportingPrivacy_Params);
      this.openReportingPrivacy();
      return true;
    case kInterstitialCommands_OpenWhitepaper_Name:
      var params = reader.decodeStruct(InterstitialCommands_OpenWhitepaper_Params);
      this.openWhitepaper();
      return true;
    case kInterstitialCommands_ReportPhishingError_Name:
      var params = reader.decodeStruct(InterstitialCommands_ReportPhishingError_Params);
      this.reportPhishingError();
      return true;
    default:
      return false;
    }
  };

  InterstitialCommandsStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateInterstitialCommandsRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInterstitialCommands_DontProceed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_DontProceed_Params;
      break;
      case kInterstitialCommands_Proceed_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_Proceed_Params;
      break;
      case kInterstitialCommands_ShowMoreSection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_ShowMoreSection_Params;
      break;
      case kInterstitialCommands_OpenHelpCenter_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_OpenHelpCenter_Params;
      break;
      case kInterstitialCommands_OpenDiagnostic_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_OpenDiagnostic_Params;
      break;
      case kInterstitialCommands_Reload_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_Reload_Params;
      break;
      case kInterstitialCommands_OpenDateSettings_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_OpenDateSettings_Params;
      break;
      case kInterstitialCommands_OpenLogin_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_OpenLogin_Params;
      break;
      case kInterstitialCommands_DoReport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_DoReport_Params;
      break;
      case kInterstitialCommands_DontReport_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_DontReport_Params;
      break;
      case kInterstitialCommands_OpenReportingPrivacy_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_OpenReportingPrivacy_Params;
      break;
      case kInterstitialCommands_OpenWhitepaper_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_OpenWhitepaper_Params;
      break;
      case kInterstitialCommands_ReportPhishingError_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = InterstitialCommands_ReportPhishingError_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInterstitialCommandsResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var InterstitialCommands = {
    name: 'security_interstitials.mojom.InterstitialCommands',
    kVersion: 0,
    ptrClass: InterstitialCommandsPtr,
    proxyClass: InterstitialCommandsProxy,
    stubClass: InterstitialCommandsStub,
    validateRequest: validateInterstitialCommandsRequest,
    validateResponse: null,
    mojomId: 'components/security_interstitials/core/common/interfaces/interstitial_commands.mojom',
    fuzzMethods: {
      dontProceed: {
        params: InterstitialCommands_DontProceed_Params,
      },
      proceed: {
        params: InterstitialCommands_Proceed_Params,
      },
      showMoreSection: {
        params: InterstitialCommands_ShowMoreSection_Params,
      },
      openHelpCenter: {
        params: InterstitialCommands_OpenHelpCenter_Params,
      },
      openDiagnostic: {
        params: InterstitialCommands_OpenDiagnostic_Params,
      },
      reload: {
        params: InterstitialCommands_Reload_Params,
      },
      openDateSettings: {
        params: InterstitialCommands_OpenDateSettings_Params,
      },
      openLogin: {
        params: InterstitialCommands_OpenLogin_Params,
      },
      doReport: {
        params: InterstitialCommands_DoReport_Params,
      },
      dontReport: {
        params: InterstitialCommands_DontReport_Params,
      },
      openReportingPrivacy: {
        params: InterstitialCommands_OpenReportingPrivacy_Params,
      },
      openWhitepaper: {
        params: InterstitialCommands_OpenWhitepaper_Params,
      },
      reportPhishingError: {
        params: InterstitialCommands_ReportPhishingError_Params,
      },
    },
  };
  InterstitialCommandsStub.prototype.validator = validateInterstitialCommandsRequest;
  InterstitialCommandsProxy.prototype.validator = null;
  exports.InterstitialCommands = InterstitialCommands;
  exports.InterstitialCommandsPtr = InterstitialCommandsPtr;
  exports.InterstitialCommandsAssociatedPtr = InterstitialCommandsAssociatedPtr;
})();