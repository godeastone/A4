// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/fetch/response_init.h"

namespace blink {

ResponseInit::ResponseInit() {
  setStatus(200u);
  setStatusText("OK");
}

ResponseInit::~ResponseInit() {}

ResponseInit::ResponseInit(const ResponseInit&) = default;

ResponseInit& ResponseInit::operator=(const ResponseInit&) = default;

void ResponseInit::setHeaders(const ByteStringSequenceSequenceOrByteStringByteStringRecord& value) {
  headers_ = value;
}

void ResponseInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(headers_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
