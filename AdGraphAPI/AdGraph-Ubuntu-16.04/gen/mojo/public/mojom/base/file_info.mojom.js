// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'mojo/public/mojom/base/file_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojoBase.mojom');



  function FileInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FileInfo.prototype.initDefaults_ = function() {
  };
  FileInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  FileInfo.generate = function(generator_) {
    var generated = new FileInfo;
    return generated;
  };

  FileInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  FileInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  FileInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  FileInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  FileInfo.validate = function(messageValidator, offset) {
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

  FileInfo.encodedSize = codec.kStructHeaderSize + 0;

  FileInfo.decode = function(decoder) {
    var packed;
    var val = new FileInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  FileInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FileInfo.encodedSize);
    encoder.writeUint32(0);
  };
  exports.FileInfo = FileInfo;
})();