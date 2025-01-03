// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/identity/public/mojom/account.mojom';
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
  var account_info$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/account_info.mojom', 'account_info.mojom.js');
  }
  var account_state$ =
      mojo.internal.exposeNamespace('identity.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/identity/public/mojom/account_state.mojom', 'account_state.mojom.js');
  }



  function Account(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Account.prototype.initDefaults_ = function() {
    this.info = null;
    this.state = null;
  };
  Account.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Account.generate = function(generator_) {
    var generated = new Account;
    generated.info = generator_.generateStruct(identity.mojom.AccountInfo, false);
    generated.state = generator_.generateStruct(identity.mojom.AccountState, false);
    return generated;
  };

  Account.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.info = mutator_.mutateStruct(identity.mojom.AccountInfo, false);
    }
    if (mutator_.chooseMutateField()) {
      this.state = mutator_.mutateStruct(identity.mojom.AccountState, false);
    }
    return this;
  };
  Account.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Account.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Account.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Account.validate = function(messageValidator, offset) {
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


    // validate Account.info
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, account_info$.AccountInfo, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate Account.state
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, account_state$.AccountState, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Account.encodedSize = codec.kStructHeaderSize + 16;

  Account.decode = function(decoder) {
    var packed;
    var val = new Account();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.info = decoder.decodeStructPointer(account_info$.AccountInfo);
    val.state = decoder.decodeStructPointer(account_state$.AccountState);
    return val;
  };

  Account.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Account.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(account_info$.AccountInfo, val.info);
    encoder.encodeStructPointer(account_state$.AccountState, val.state);
  };
  exports.Account = Account;
})();