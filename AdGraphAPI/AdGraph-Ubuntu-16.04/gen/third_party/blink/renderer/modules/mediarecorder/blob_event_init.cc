// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/mediarecorder/blob_event_init.h"

#include "third_party/blink/renderer/core/fileapi/blob.h"

namespace blink {

BlobEventInit::BlobEventInit() {
}

BlobEventInit::~BlobEventInit() {}

BlobEventInit::BlobEventInit(const BlobEventInit&) = default;

BlobEventInit& BlobEventInit::operator=(const BlobEventInit&) = default;

void BlobEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(data_);
  EventInit::Trace(visitor);
}

}  // namespace blink
