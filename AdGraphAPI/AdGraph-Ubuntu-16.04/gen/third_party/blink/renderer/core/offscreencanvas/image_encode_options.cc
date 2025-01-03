// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/offscreencanvas/image_encode_options.h"

namespace blink {

ImageEncodeOptions::ImageEncodeOptions() {
  setQuality(1);
  setType("image/png");
}

ImageEncodeOptions::~ImageEncodeOptions() {}

ImageEncodeOptions::ImageEncodeOptions(const ImageEncodeOptions&) = default;

ImageEncodeOptions& ImageEncodeOptions::operator=(const ImageEncodeOptions&) = default;

void ImageEncodeOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
