// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/core/geometry/dom_quad_init.h"

namespace blink {

DOMQuadInit::DOMQuadInit() {
}

DOMQuadInit::~DOMQuadInit() {}

DOMQuadInit::DOMQuadInit(const DOMQuadInit&) = default;

DOMQuadInit& DOMQuadInit::operator=(const DOMQuadInit&) = default;

void DOMQuadInit::setP1(const DOMPointInit& value) {
  p1_ = value;
  has_p1_ = true;
}

void DOMQuadInit::setP2(const DOMPointInit& value) {
  p2_ = value;
  has_p2_ = true;
}

void DOMQuadInit::setP3(const DOMPointInit& value) {
  p3_ = value;
  has_p3_ = true;
}

void DOMQuadInit::setP4(const DOMPointInit& value) {
  p4_ = value;
  has_p4_ = true;
}

void DOMQuadInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(p1_);
  visitor->Trace(p2_);
  visitor->Trace(p3_);
  visitor->Trace(p4_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
