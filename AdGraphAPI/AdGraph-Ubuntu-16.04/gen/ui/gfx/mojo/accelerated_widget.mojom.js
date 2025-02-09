// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'ui/gfx/mojo/accelerated_widget.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('gfx.mojom');



  function AcceleratedWidget(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AcceleratedWidget.prototype.initDefaults_ = function() {
    this.widget = 0;
  };
  AcceleratedWidget.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  AcceleratedWidget.generate = function(generator_) {
    var generated = new AcceleratedWidget;
    generated.widget = generator_.generateUint64();
    return generated;
  };

  AcceleratedWidget.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.widget = mutator_.mutateUint64(this.widget);
    }
    return this;
  };
  AcceleratedWidget.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  AcceleratedWidget.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  AcceleratedWidget.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  AcceleratedWidget.validate = function(messageValidator, offset) {
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

  AcceleratedWidget.encodedSize = codec.kStructHeaderSize + 8;

  AcceleratedWidget.decode = function(decoder) {
    var packed;
    var val = new AcceleratedWidget();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.widget = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  AcceleratedWidget.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AcceleratedWidget.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.widget);
  };
  exports.AcceleratedWidget = AcceleratedWidget;
})();