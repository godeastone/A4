// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'net/interfaces/ip_endpoint.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('net.interfaces');
  var ip_address$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_address.mojom', 'ip_address.mojom.js');
  }



  function IPEndPoint(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IPEndPoint.prototype.initDefaults_ = function() {
    this.address = null;
    this.port = 0;
  };
  IPEndPoint.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  IPEndPoint.generate = function(generator_) {
    var generated = new IPEndPoint;
    generated.address = generator_.generateStruct(net.interfaces.IPAddress, false);
    generated.port = generator_.generateUint16();
    return generated;
  };

  IPEndPoint.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.address = mutator_.mutateStruct(net.interfaces.IPAddress, false);
    }
    if (mutator_.chooseMutateField()) {
      this.port = mutator_.mutateUint16(this.port);
    }
    return this;
  };
  IPEndPoint.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  IPEndPoint.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  IPEndPoint.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  IPEndPoint.validate = function(messageValidator, offset) {
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


    // validate IPEndPoint.address
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ip_address$.IPAddress, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  IPEndPoint.encodedSize = codec.kStructHeaderSize + 16;

  IPEndPoint.decode = function(decoder) {
    var packed;
    var val = new IPEndPoint();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeStructPointer(ip_address$.IPAddress);
    val.port = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IPEndPoint.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IPEndPoint.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ip_address$.IPAddress, val.address);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.IPEndPoint = IPEndPoint;
})();