// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'net/interfaces/address_list.mojom';
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
  var ip_endpoint$ =
      mojo.internal.exposeNamespace('net.interfaces');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'net/interfaces/ip_endpoint.mojom', 'ip_endpoint.mojom.js');
  }



  function AddressList(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AddressList.prototype.initDefaults_ = function() {
    this.addresses = null;
  };
  AddressList.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AddressList.generate = function(generator_) {
    var generated = new AddressList;
    generated.addresses = generator_.generateArray(function() {
      return generator_.generateStruct(net.interfaces.IPEndPoint, false);
    });
    return generated;
  };

  AddressList.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.addresses = mutator_.mutateArray(this.addresses, function(val) {
        return mutator_.mutateStruct(net.interfaces.IPEndPoint, false);
      });
    }
    return this;
  };
  AddressList.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AddressList.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AddressList.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AddressList.validate = function(messageValidator, offset) {
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


    // validate AddressList.addresses
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ip_endpoint$.IPEndPoint), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AddressList.encodedSize = codec.kStructHeaderSize + 8;

  AddressList.decode = function(decoder) {
    var packed;
    var val = new AddressList();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.addresses = decoder.decodeArrayPointer(new codec.PointerTo(ip_endpoint$.IPEndPoint));
    return val;
  };

  AddressList.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AddressList.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ip_endpoint$.IPEndPoint), val.addresses);
  };
  exports.AddressList = AddressList;
})();