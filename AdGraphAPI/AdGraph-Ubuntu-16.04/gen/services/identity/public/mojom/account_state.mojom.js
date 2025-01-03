// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/identity/public/mojom/account_state.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('identity.mojom');



  function AccountState(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AccountState.prototype.initDefaults_ = function() {
    this.hasRefreshToken = false;
    this.isPrimaryAccount = false;
  };
  AccountState.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AccountState.generate = function(generator_) {
    var generated = new AccountState;
    generated.hasRefreshToken = generator_.generateBool();
    generated.isPrimaryAccount = generator_.generateBool();
    return generated;
  };

  AccountState.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.hasRefreshToken = mutator_.mutateBool(this.hasRefreshToken);
    }
    if (mutator_.chooseMutateField()) {
      this.isPrimaryAccount = mutator_.mutateBool(this.isPrimaryAccount);
    }
    return this;
  };
  AccountState.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AccountState.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AccountState.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AccountState.validate = function(messageValidator, offset) {
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

  AccountState.encodedSize = codec.kStructHeaderSize + 8;

  AccountState.decode = function(decoder) {
    var packed;
    var val = new AccountState();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.hasRefreshToken = (packed >> 0) & 1 ? true : false;
    val.isPrimaryAccount = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  AccountState.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AccountState.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.hasRefreshToken & 1) << 0
    packed |= (val.isPrimaryAccount & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.AccountState = AccountState;
})();