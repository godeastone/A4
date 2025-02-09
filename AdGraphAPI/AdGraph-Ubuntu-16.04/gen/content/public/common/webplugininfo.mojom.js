// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/public/common/webplugininfo.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('content.mojom');



  function WebPluginInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebPluginInfo.prototype.initDefaults_ = function() {
  };
  WebPluginInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  WebPluginInfo.generate = function(generator_) {
    var generated = new WebPluginInfo;
    return generated;
  };

  WebPluginInfo.prototype.mutate = function(mutator_) {
    return this;
  };
  WebPluginInfo.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  WebPluginInfo.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  WebPluginInfo.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  WebPluginInfo.validate = function(messageValidator, offset) {
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

  WebPluginInfo.encodedSize = codec.kStructHeaderSize + 0;

  WebPluginInfo.decode = function(decoder) {
    var packed;
    var val = new WebPluginInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  WebPluginInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebPluginInfo.encodedSize);
    encoder.writeUint32(0);
  };
  exports.WebPluginInfo = WebPluginInfo;
})();