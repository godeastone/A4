// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/service_manager/public/mojom/constants.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('serviceManager.mojom');


  var kServiceName = "service_manager";
  var kRootUserID = "505C0EE9-3013-43C0-82B0-A84F50CF8D84";
  var kInheritUserID = "D26290E4-4485-4EAE-81A2-66D1EEB40A9D";
  var kInvalidInstanceID = 0;

  function Constants_UnusedStruct_Internal(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Constants_UnusedStruct_Internal.prototype.initDefaults_ = function() {
  };
  Constants_UnusedStruct_Internal.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  Constants_UnusedStruct_Internal.generate = function(generator_) {
    var generated = new Constants_UnusedStruct_Internal;
    return generated;
  };

  Constants_UnusedStruct_Internal.prototype.mutate = function(mutator_) {
    return this;
  };
  Constants_UnusedStruct_Internal.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  Constants_UnusedStruct_Internal.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  Constants_UnusedStruct_Internal.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  Constants_UnusedStruct_Internal.validate = function(messageValidator, offset) {
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

  Constants_UnusedStruct_Internal.encodedSize = codec.kStructHeaderSize + 0;

  Constants_UnusedStruct_Internal.decode = function(decoder) {
    var packed;
    var val = new Constants_UnusedStruct_Internal();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Constants_UnusedStruct_Internal.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Constants_UnusedStruct_Internal.encodedSize);
    encoder.writeUint32(0);
  };
  exports.kServiceName = kServiceName;
  exports.kRootUserID = kRootUserID;
  exports.kInheritUserID = kInheritUserID;
  exports.kInvalidInstanceID = kInvalidInstanceID;
  exports.Constants_UnusedStruct_Internal = Constants_UnusedStruct_Internal;
})();