// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/common/image_downloader/image_downloader.mojom';
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
  var bitmap$ =
      mojo.internal.exposeNamespace('skia.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'skia/public/interfaces/bitmap.mojom', '../../../skia/public/interfaces/bitmap.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojo/geometry.mojom', '../../../ui/gfx/geometry/mojo/geometry.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../url/mojom/url.mojom.js');
  }



  function ImageDownloader_DownloadImage_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDownloader_DownloadImage_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.isFavicon = false;
    this.bypassCache = false;
    this.maxBitmapSize = 0;
  };
  ImageDownloader_DownloadImage_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageDownloader_DownloadImage_Params.generate = function(generator_) {
    var generated = new ImageDownloader_DownloadImage_Params;
    generated.url = generator_.generateStruct(url.mojom.Url, false);
    generated.isFavicon = generator_.generateBool();
    generated.maxBitmapSize = generator_.generateUint32();
    generated.bypassCache = generator_.generateBool();
    return generated;
  };

  ImageDownloader_DownloadImage_Params.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.url = mutator_.mutateStruct(url.mojom.Url, false);
    }
    if (mutator_.chooseMutateField()) {
      this.isFavicon = mutator_.mutateBool(this.isFavicon);
    }
    if (mutator_.chooseMutateField()) {
      this.maxBitmapSize = mutator_.mutateUint32(this.maxBitmapSize);
    }
    if (mutator_.chooseMutateField()) {
      this.bypassCache = mutator_.mutateBool(this.bypassCache);
    }
    return this;
  };
  ImageDownloader_DownloadImage_Params.prototype.getHandleDeps = function() {
    var handles = [];
    return handles;
  };

  ImageDownloader_DownloadImage_Params.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageDownloader_DownloadImage_Params.prototype.setHandlesInternal_ = function(handles, idx) {
    return idx;
  };

  ImageDownloader_DownloadImage_Params.validate = function(messageValidator, offset) {
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


    // validate ImageDownloader_DownloadImage_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  ImageDownloader_DownloadImage_Params.encodedSize = codec.kStructHeaderSize + 16;

  ImageDownloader_DownloadImage_Params.decode = function(decoder) {
    var packed;
    var val = new ImageDownloader_DownloadImage_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStructPointer(url$.Url);
    packed = decoder.readUint8();
    val.isFavicon = (packed >> 0) & 1 ? true : false;
    val.bypassCache = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxBitmapSize = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  ImageDownloader_DownloadImage_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDownloader_DownloadImage_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    packed = 0;
    packed |= (val.isFavicon & 1) << 0
    packed |= (val.bypassCache & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint32, val.maxBitmapSize);
  };
  function ImageDownloader_DownloadImage_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ImageDownloader_DownloadImage_ResponseParams.prototype.initDefaults_ = function() {
    this.httpStatusCode = 0;
    this.images = null;
    this.originalImageSizes = null;
  };
  ImageDownloader_DownloadImage_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };
  ImageDownloader_DownloadImage_ResponseParams.generate = function(generator_) {
    var generated = new ImageDownloader_DownloadImage_ResponseParams;
    generated.httpStatusCode = generator_.generateInt32();
    generated.images = generator_.generateArray(function() {
      return generator_.generateStruct(skia.mojom.Bitmap, false);
    });
    generated.originalImageSizes = generator_.generateArray(function() {
      return generator_.generateStruct(gfx.mojom.Size, false);
    });
    return generated;
  };

  ImageDownloader_DownloadImage_ResponseParams.prototype.mutate = function(mutator_) {
    if (mutator_.chooseMutateField()) {
      this.httpStatusCode = mutator_.mutateInt32(this.httpStatusCode);
    }
    if (mutator_.chooseMutateField()) {
      this.images = mutator_.mutateArray(this.images, function(val) {
        return mutator_.mutateStruct(skia.mojom.Bitmap, false);
      });
    }
    if (mutator_.chooseMutateField()) {
      this.originalImageSizes = mutator_.mutateArray(this.originalImageSizes, function(val) {
        return mutator_.mutateStruct(gfx.mojom.Size, false);
      });
    }
    return this;
  };
  ImageDownloader_DownloadImage_ResponseParams.prototype.getHandleDeps = function() {
    var handles = [];
    if (this.images !== null) {
      Array.prototype.push.apply(handles, [].concat.apply([], this.images.map(function(val) {
        if (val) {
          return val.getHandleDeps();
        }
        return [];
      })));
    }
    return handles;
  };

  ImageDownloader_DownloadImage_ResponseParams.prototype.setHandles = function() {
    this.setHandlesInternal_(arguments, 0);
  };
  ImageDownloader_DownloadImage_ResponseParams.prototype.setHandlesInternal_ = function(handles, idx) {
    this.images.forEach(function(val) {
      idx = val.setHandlesInternal_(handles, idx);
    });
    return idx;
  };

  ImageDownloader_DownloadImage_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate ImageDownloader_DownloadImage_ResponseParams.images
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(bitmap$.Bitmap), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ImageDownloader_DownloadImage_ResponseParams.originalImageSizes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(geometry$.Size), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ImageDownloader_DownloadImage_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  ImageDownloader_DownloadImage_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ImageDownloader_DownloadImage_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.httpStatusCode = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.images = decoder.decodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap));
    val.originalImageSizes = decoder.decodeArrayPointer(new codec.PointerTo(geometry$.Size));
    return val;
  };

  ImageDownloader_DownloadImage_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ImageDownloader_DownloadImage_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.httpStatusCode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(bitmap$.Bitmap), val.images);
    encoder.encodeArrayPointer(new codec.PointerTo(geometry$.Size), val.originalImageSizes);
  };
  var kImageDownloader_DownloadImage_Name = 465068447;

  function ImageDownloaderPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ImageDownloader,
                                                   handleOrPtrInfo);
  }

  function ImageDownloaderAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ImageDownloader, associatedInterfacePtrInfo);
  }

  ImageDownloaderAssociatedPtr.prototype =
      Object.create(ImageDownloaderPtr.prototype);
  ImageDownloaderAssociatedPtr.prototype.constructor =
      ImageDownloaderAssociatedPtr;

  function ImageDownloaderProxy(receiver) {
    this.receiver_ = receiver;
  }
  ImageDownloaderPtr.prototype.downloadImage = function() {
    return ImageDownloaderProxy.prototype.downloadImage
        .apply(this.ptr.getProxy(), arguments);
  };

  ImageDownloaderProxy.prototype.downloadImage = function(url, isFavicon, maxBitmapSize, bypassCache) {
    var params_ = new ImageDownloader_DownloadImage_Params();
    params_.url = url;
    params_.isFavicon = isFavicon;
    params_.maxBitmapSize = maxBitmapSize;
    params_.bypassCache = bypassCache;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kImageDownloader_DownloadImage_Name,
          codec.align(ImageDownloader_DownloadImage_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ImageDownloader_DownloadImage_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ImageDownloader_DownloadImage_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ImageDownloaderStub(delegate) {
    this.delegate_ = delegate;
  }
  ImageDownloaderStub.prototype.downloadImage = function(url, isFavicon, maxBitmapSize, bypassCache) {
    return this.delegate_ && this.delegate_.downloadImage && this.delegate_.downloadImage(url, isFavicon, maxBitmapSize, bypassCache);
  }

  ImageDownloaderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ImageDownloaderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kImageDownloader_DownloadImage_Name:
      var params = reader.decodeStruct(ImageDownloader_DownloadImage_Params);
      this.downloadImage(params.url, params.isFavicon, params.maxBitmapSize, params.bypassCache).then(function(response) {
        var responseParams =
            new ImageDownloader_DownloadImage_ResponseParams();
        responseParams.httpStatusCode = response.httpStatusCode;
        responseParams.images = response.images;
        responseParams.originalImageSizes = response.originalImageSizes;
        var builder = new codec.MessageV1Builder(
            kImageDownloader_DownloadImage_Name,
            codec.align(ImageDownloader_DownloadImage_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ImageDownloader_DownloadImage_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateImageDownloaderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kImageDownloader_DownloadImage_Name:
        if (message.expectsResponse())
          paramsClass = ImageDownloader_DownloadImage_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateImageDownloaderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kImageDownloader_DownloadImage_Name:
        if (message.isResponse())
          paramsClass = ImageDownloader_DownloadImage_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ImageDownloader = {
    name: 'content.mojom.ImageDownloader',
    kVersion: 0,
    ptrClass: ImageDownloaderPtr,
    proxyClass: ImageDownloaderProxy,
    stubClass: ImageDownloaderStub,
    validateRequest: validateImageDownloaderRequest,
    validateResponse: validateImageDownloaderResponse,
    mojomId: 'content/common/image_downloader/image_downloader.mojom',
    fuzzMethods: {
      downloadImage: {
        params: ImageDownloader_DownloadImage_Params,
      },
    },
  };
  ImageDownloaderStub.prototype.validator = validateImageDownloaderRequest;
  ImageDownloaderProxy.prototype.validator = validateImageDownloaderResponse;
  exports.ImageDownloader = ImageDownloader;
  exports.ImageDownloaderPtr = ImageDownloaderPtr;
  exports.ImageDownloaderAssociatedPtr = ImageDownloaderAssociatedPtr;
})();