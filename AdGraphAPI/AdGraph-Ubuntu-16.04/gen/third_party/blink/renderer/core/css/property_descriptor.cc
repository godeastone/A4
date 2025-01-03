// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/css/property_descriptor.h"

namespace blink {

PropertyDescriptor::PropertyDescriptor() {
  setInherits(false);
  setSyntax("*");
}

PropertyDescriptor::~PropertyDescriptor() {}

PropertyDescriptor::PropertyDescriptor(const PropertyDescriptor&) = default;

PropertyDescriptor& PropertyDescriptor::operator=(const PropertyDescriptor&) = default;

void PropertyDescriptor::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
