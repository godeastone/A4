// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DOMQuadInit_h
#define DOMQuadInit_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/geometry/dom_point_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMQuadInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DOMQuadInit();
  virtual ~DOMQuadInit();
  DOMQuadInit(const DOMQuadInit&);
  DOMQuadInit& operator=(const DOMQuadInit&);

  bool hasP1() const { return has_p1_; }
  const DOMPointInit& p1() const {
    DCHECK(has_p1_);
    return p1_;
  }
  void setP1(const DOMPointInit&);

  bool hasP2() const { return has_p2_; }
  const DOMPointInit& p2() const {
    DCHECK(has_p2_);
    return p2_;
  }
  void setP2(const DOMPointInit&);

  bool hasP3() const { return has_p3_; }
  const DOMPointInit& p3() const {
    DCHECK(has_p3_);
    return p3_;
  }
  void setP3(const DOMPointInit&);

  bool hasP4() const { return has_p4_; }
  const DOMPointInit& p4() const {
    DCHECK(has_p4_);
    return p4_;
  }
  void setP4(const DOMPointInit&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_p1_ = false;
  bool has_p2_ = false;
  bool has_p3_ = false;
  bool has_p4_ = false;

  DOMPointInit p1_;
  DOMPointInit p2_;
  DOMPointInit p3_;
  DOMPointInit p4_;

  friend class V8DOMQuadInit;
};

}  // namespace blink

#endif  // DOMQuadInit_h
