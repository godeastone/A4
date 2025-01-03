// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/interfaces/compositing/render_pass.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var copy_output_request$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/copy_output_request.mojom', 'copy_output_request.mojom.js');
  }
  var filter_operations$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/filter_operations.mojom', 'filter_operations.mojom.js');
  }
  var quads$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/interfaces/compositing/quads.mojom', 'quads.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/color_space.mojom', '../../../../../ui/gfx/mojo/color_space.mojom.js');
  }
  var transform$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojo/transform.mojom', '../../../../../ui/gfx/mojo/transform.mojom.js');
  }



  function RenderPass(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  RenderPass.prototype.initDefaults_ = function() {
    this.id = 0;
    this.outputRect = null;
    this.damageRect = null;
    this.transformToRootTarget = null;
    this.filters = null;
    this.backgroundFilters = null;
    this.colorSpace = null;
    this.hasTransparentBackground = false;
    this.cacheRenderPass = false;
    this.hasDamageFromContributingContent = false;
    this.generateMipmap = false;
    this.copyRequests = null;
    this.quadList = null;
  };
  RenderPass.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  RenderPass.generate = function(generator_) {
    var generated = new RenderPass;
    generated.id = generator_.generateUint64();
    generated.outputRect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.damageRect = generator_.generateStruct(gfx.mojom.Rect, false);
    generated.transformToRootTarget = generator_.generateStruct(gfx.mojom.Transform, false);
    generated.filters = generator_.generateStruct(viz.mojom.FilterOperations, false);
    generated.backgroundFilters = generator_.generateStruct(viz.mojom.FilterOperations, false);
    generated.colorSpace = generator_.generateStruct(gfx.mojom.ColorSpace, false);
    generated.hasTransparentBackground = generator_.generateBool();
    generated.cacheRenderPass = generator_.generateBool();
    generated.hasDamageFromContributingContent = generator_.generateBool();
    generated.generateMipmap = generator_.generateBool();
    generated.copyRequests = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.CopyOutputRequest, false);
    });
    generated.quadList = generator_.generateArray(function() {
      return generator_.generateStruct(viz.mojom.DrawQuad, false);
    });
    return generated;
  };

  RenderPass.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.id = mutator_.mutateUint64(this.id);
    }
    if (mutator_.chooseMutateField()) {
      this.outputRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.damageRect = mutator_.mutateStruct(gfx.mojom.Rect, false);
    }
    if (mutator_.chooseMutateField()) {
      this.transformToRootTarget = mutator_.mutateStruct(gfx.mojom.Transform, false);
    }
    if (mutator_.chooseMutateField()) {
      this.filters = mutator_.mutateStruct(viz.mojom.FilterOperations, false);
    }
    if (mutator_.chooseMutateField()) {
      this.backgroundFilters = mutator_.mutateStruct(viz.mojom.FilterOperations, false);
    }
    if (mutator_.chooseMutateField()) {
      this.colorSpace = mutator_.mutateStruct(gfx.mojom.ColorSpace, false);
    }
    if (mutator_.chooseMutateField()) {
      this.hasTransparentBackground = mutator_.mutateBool(this.hasTransparentBackground);
    }
    if (mutator_.chooseMutateField()) {
      this.cacheRenderPass = mutator_.mutateBool(this.cacheRenderPass);
    }
    if (mutator_.chooseMutateField()) {
      this.hasDamageFromContributingContent = mutator_.mutateBool(this.hasDamageFromContributingContent);
    }
    if (mutator_.chooseMutateField()) {
      this.generateMipmap = mutator_.mutateBool(this.generateMipmap);
    }
    if (mutator_.chooseMutateField()) {
      this.copyRequests = mutator_.mutateArray(this.copyRequests, function(val) {
        return mutator_.mutateStruct(viz.mojom.CopyOutputRequest, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.quadList = mutator_.mutateArray(this.quadList, function(val) {
        return mutator_.mutateStruct(viz.mojom.DrawQuad, false);
      });
    }
    return this;
  };
  RenderPass.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.copyRequests !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.copyRequests.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  RenderPass.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  RenderPass.prototype.setHandlesInternal_ = function(handles, idx) {
    this.copyRequests.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  RenderPass.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 88}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;



    // validate RenderPass.outputRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPass.damageRect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPass.transformToRootTarget
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, transform$.Transform, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPass.filters
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, filter_operations$.FilterOperations, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPass.backgroundFilters
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, filter_operations$.FilterOperations, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPass.colorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 48, color_space$.ColorSpace, false);
    if (err !== validator.validationError.NONE)
        return err;






    // validate RenderPass.copyRequests
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 64, 8, new codec.PointerTo(copy_output_request$.CopyOutputRequest), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate RenderPass.quadList
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 72, 8, new codec.PointerTo(quads$.DrawQuad), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  RenderPass.encodedSize = codec.kStructHeaderSize + 80;

  RenderPass.decode = function(decoder) {
    var packed;
    var val = new RenderPass();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint64);
    val.outputRect = decoder.decodeStructPointer(geometry$.Rect);
    val.damageRect = decoder.decodeStructPointer(geometry$.Rect);
    val.transformToRootTarget = decoder.decodeStructPointer(transform$.Transform);
    val.filters = decoder.decodeStructPointer(filter_operations$.FilterOperations);
    val.backgroundFilters = decoder.decodeStructPointer(filter_operations$.FilterOperations);
    val.colorSpace = decoder.decodeStructPointer(color_space$.ColorSpace);
    packed = decoder.readUint8();
    val.hasTransparentBackground = (packed >> 0) & 1 ? true : false;
    val.cacheRenderPass = (packed >> 1) & 1 ? true : false;
    val.hasDamageFromContributingContent = (packed >> 2) & 1 ? true : false;
    val.generateMipmap = (packed >> 3) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.copyRequests = decoder.decodeArrayPointer(new codec.PointerTo(copy_output_request$.CopyOutputRequest));
    val.quadList = decoder.decodeArrayPointer(new codec.PointerTo(quads$.DrawQuad));
    return val;
  };

  RenderPass.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(RenderPass.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.id);
    encoder.encodeStructPointer(geometry$.Rect, val.outputRect);
    encoder.encodeStructPointer(geometry$.Rect, val.damageRect);
    encoder.encodeStructPointer(transform$.Transform, val.transformToRootTarget);
    encoder.encodeStructPointer(filter_operations$.FilterOperations, val.filters);
    encoder.encodeStructPointer(filter_operations$.FilterOperations, val.backgroundFilters);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.colorSpace);
    packed = 0;
    packed |= (val.hasTransparentBackground & 1) << 0
    packed |= (val.cacheRenderPass & 1) << 1
    packed |= (val.hasDamageFromContributingContent & 1) << 2
    packed |= (val.generateMipmap & 1) << 3
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(copy_output_request$.CopyOutputRequest), val.copyRequests);
    encoder.encodeArrayPointer(new codec.PointerTo(quads$.DrawQuad), val.quadList);
  };
  exports.RenderPass = RenderPass;
})();