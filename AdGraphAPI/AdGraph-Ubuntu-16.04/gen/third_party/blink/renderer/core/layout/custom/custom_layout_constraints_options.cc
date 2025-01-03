// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/layout/custom/custom_layout_constraints_options.h"

namespace blink {

CustomLayoutConstraintsOptions::CustomLayoutConstraintsOptions() {
  setAvailableBlockSize(0);
  setAvailableInlineSize(0);
}

CustomLayoutConstraintsOptions::~CustomLayoutConstraintsOptions() {}

CustomLayoutConstraintsOptions::CustomLayoutConstraintsOptions(const CustomLayoutConstraintsOptions&) = default;

CustomLayoutConstraintsOptions& CustomLayoutConstraintsOptions::operator=(const CustomLayoutConstraintsOptions&) = default;

void CustomLayoutConstraintsOptions::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
