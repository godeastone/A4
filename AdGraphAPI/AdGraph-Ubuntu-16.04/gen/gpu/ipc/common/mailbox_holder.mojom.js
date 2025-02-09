// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'gpu/ipc/common/mailbox_holder.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gpu.mojom');
  var mailbox$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox.mojom', 'mailbox.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', 'sync_token.mojom.js');
  }



  function MailboxHolder(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MailboxHolder.prototype.initDefaults_ = function() {
    this.mailbox = null;
    this.syncToken = null;
    this.textureTarget = 0;
  };
  MailboxHolder.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  MailboxHolder.generate = function(generator_) {
    var generated = new MailboxHolder;
    generated.mailbox = generator_.generateStruct(gpu.mojom.Mailbox, false);
    generated.syncToken = generator_.generateStruct(gpu.mojom.SyncToken, false);
    generated.textureTarget = generator_.generateUint32();
    return generated;
  };

  MailboxHolder.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.mailbox = mutator_.mutateStruct(gpu.mojom.Mailbox, false);
    }
    if (mutator_.chooseMutateField()) {
      this.syncToken = mutator_.mutateStruct(gpu.mojom.SyncToken, false);
    }
    if (mutator_.chooseMutateField()) {
      this.textureTarget = mutator_.mutateUint32(this.textureTarget);
    }
    return this;
  };
  MailboxHolder.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  MailboxHolder.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  MailboxHolder.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  MailboxHolder.validate = function(messageValidator, offset) {
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


    // validate MailboxHolder.mailbox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, mailbox$.Mailbox, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MailboxHolder.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, sync_token$.SyncToken, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MailboxHolder.encodedSize = codec.kStructHeaderSize + 24;

  MailboxHolder.decode = function(decoder) {
    var packed;
    var val = new MailboxHolder();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mailbox = decoder.decodeStructPointer(mailbox$.Mailbox);
    val.syncToken = decoder.decodeStructPointer(sync_token$.SyncToken);
    val.textureTarget = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MailboxHolder.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MailboxHolder.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(mailbox$.Mailbox, val.mailbox);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
    encoder.encodeStruct(codec.Uint32, val.textureTarget);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.MailboxHolder = MailboxHolder;
})();