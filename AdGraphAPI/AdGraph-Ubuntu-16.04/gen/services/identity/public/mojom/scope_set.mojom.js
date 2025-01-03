// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/identity/public/mojom/scope_set.mojom';
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



  function ScopeSet(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScopeSet.prototype.initDefaults_ = function() {
    this.scopes = null;
  };
  ScopeSet.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ScopeSet.generate = function(generator_) {
    var generated = new ScopeSet;
    generated.scopes = generator_.generateArray(function() {
      return generator_.generateString(false);
    });
    return generated;
  };

  ScopeSet.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.scopes = mutator_.mutateArray(this.scopes, function(val) {
        return mutator_.mutateString(val, false);
      });
    }
    return this;
  };
  ScopeSet.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ScopeSet.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ScopeSet.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ScopeSet.validate = function(messageValidator, offset) {
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


    // validate ScopeSet.scopes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScopeSet.encodedSize = codec.kStructHeaderSize + 8;

  ScopeSet.decode = function(decoder) {
    var packed;
    var val = new ScopeSet();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.scopes = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ScopeSet.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScopeSet.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.scopes);
  };
  exports.ScopeSet = ScopeSet;
})();