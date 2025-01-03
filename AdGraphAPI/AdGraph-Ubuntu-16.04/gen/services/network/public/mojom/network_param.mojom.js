// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/network_param.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');



  function AuthChallengeInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AuthChallengeInfo.prototype.initDefaults_ = function() {
  };
  AuthChallengeInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AuthChallengeInfo.generate = function(generator_) {
    var generated = new AuthChallengeInfo;
    return generated;
  };

  AuthChallengeInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  AuthChallengeInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AuthChallengeInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AuthChallengeInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AuthChallengeInfo.validate = function(messageValidator, offset) {
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

  AuthChallengeInfo.encodedSize = codec.kStructHeaderSize + 0;

  AuthChallengeInfo.decode = function(decoder) {
    var packed;
    var val = new AuthChallengeInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AuthChallengeInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AuthChallengeInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function AuthCredentials(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AuthCredentials.prototype.initDefaults_ = function() {
  };
  AuthCredentials.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AuthCredentials.generate = function(generator_) {
    var generated = new AuthCredentials;
    return generated;
  };

  AuthCredentials.prototype.mutate = function(mutator_) {
    return this;
  };
  AuthCredentials.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AuthCredentials.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AuthCredentials.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AuthCredentials.validate = function(messageValidator, offset) {
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

  AuthCredentials.encodedSize = codec.kStructHeaderSize + 0;

  AuthCredentials.decode = function(decoder) {
    var packed;
    var val = new AuthCredentials();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  AuthCredentials.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AuthCredentials.encodedSize);
    encoder.writeUint32(0);
  };
  function CertVerifyResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CertVerifyResult.prototype.initDefaults_ = function() {
  };
  CertVerifyResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  CertVerifyResult.generate = function(generator_) {
    var generated = new CertVerifyResult;
    return generated;
  };

  CertVerifyResult.prototype.mutate = function(mutator_) {
    return this;
  };
  CertVerifyResult.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  CertVerifyResult.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  CertVerifyResult.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  CertVerifyResult.validate = function(messageValidator, offset) {
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

  CertVerifyResult.encodedSize = codec.kStructHeaderSize + 0;

  CertVerifyResult.decode = function(decoder) {
    var packed;
    var val = new CertVerifyResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CertVerifyResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CertVerifyResult.encodedSize);
    encoder.writeUint32(0);
  };
  function HostPortPair(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HostPortPair.prototype.initDefaults_ = function() {
  };
  HostPortPair.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  HostPortPair.generate = function(generator_) {
    var generated = new HostPortPair;
    return generated;
  };

  HostPortPair.prototype.mutate = function(mutator_) {
    return this;
  };
  HostPortPair.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  HostPortPair.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  HostPortPair.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  HostPortPair.validate = function(messageValidator, offset) {
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

  HostPortPair.encodedSize = codec.kStructHeaderSize + 0;

  HostPortPair.decode = function(decoder) {
    var packed;
    var val = new HostPortPair();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  HostPortPair.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HostPortPair.encodedSize);
    encoder.writeUint32(0);
  };
  function X509Certificate(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  X509Certificate.prototype.initDefaults_ = function() {
  };
  X509Certificate.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  X509Certificate.generate = function(generator_) {
    var generated = new X509Certificate;
    return generated;
  };

  X509Certificate.prototype.mutate = function(mutator_) {
    return this;
  };
  X509Certificate.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  X509Certificate.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  X509Certificate.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  X509Certificate.validate = function(messageValidator, offset) {
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

  X509Certificate.encodedSize = codec.kStructHeaderSize + 0;

  X509Certificate.decode = function(decoder) {
    var packed;
    var val = new X509Certificate();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  X509Certificate.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(X509Certificate.encodedSize);
    encoder.writeUint32(0);
  };
  function SSLCertRequestInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SSLCertRequestInfo.prototype.initDefaults_ = function() {
  };
  SSLCertRequestInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SSLCertRequestInfo.generate = function(generator_) {
    var generated = new SSLCertRequestInfo;
    return generated;
  };

  SSLCertRequestInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  SSLCertRequestInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SSLCertRequestInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SSLCertRequestInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SSLCertRequestInfo.validate = function(messageValidator, offset) {
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

  SSLCertRequestInfo.encodedSize = codec.kStructHeaderSize + 0;

  SSLCertRequestInfo.decode = function(decoder) {
    var packed;
    var val = new SSLCertRequestInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SSLCertRequestInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SSLCertRequestInfo.encodedSize);
    encoder.writeUint32(0);
  };
  function SSLInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SSLInfo.prototype.initDefaults_ = function() {
  };
  SSLInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  SSLInfo.generate = function(generator_) {
    var generated = new SSLInfo;
    return generated;
  };

  SSLInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  SSLInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  SSLInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  SSLInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  SSLInfo.validate = function(messageValidator, offset) {
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

  SSLInfo.encodedSize = codec.kStructHeaderSize + 0;

  SSLInfo.decode = function(decoder) {
    var packed;
    var val = new SSLInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  SSLInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SSLInfo.encodedSize);
    encoder.writeUint32(0);
  };
  exports.AuthChallengeInfo = AuthChallengeInfo;
  exports.AuthCredentials = AuthCredentials;
  exports.CertVerifyResult = CertVerifyResult;
  exports.HostPortPair = HostPortPair;
  exports.X509Certificate = X509Certificate;
  exports.SSLCertRequestInfo = SSLCertRequestInfo;
  exports.SSLInfo = SSLInfo;
})();