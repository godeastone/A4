// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DOMMatrix2DInit_h
#define DOMMatrix2DInit_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMMatrix2DInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DOMMatrix2DInit();
  virtual ~DOMMatrix2DInit();
  DOMMatrix2DInit(const DOMMatrix2DInit&);
  DOMMatrix2DInit& operator=(const DOMMatrix2DInit&);

  bool hasA() const { return has_a_; }
  double a() const {
    DCHECK(has_a_);
    return a_;
  }
  inline void setA(double);

  bool hasB() const { return has_b_; }
  double b() const {
    DCHECK(has_b_);
    return b_;
  }
  inline void setB(double);

  bool hasC() const { return has_c_; }
  double c() const {
    DCHECK(has_c_);
    return c_;
  }
  inline void setC(double);

  bool hasD() const { return has_d_; }
  double d() const {
    DCHECK(has_d_);
    return d_;
  }
  inline void setD(double);

  bool hasE() const { return has_e_; }
  double e() const {
    DCHECK(has_e_);
    return e_;
  }
  inline void setE(double);

  bool hasF() const { return has_f_; }
  double f() const {
    DCHECK(has_f_);
    return f_;
  }
  inline void setF(double);

  bool hasM11() const { return has_m11_; }
  double m11() const {
    DCHECK(has_m11_);
    return m11_;
  }
  inline void setM11(double);

  bool hasM12() const { return has_m12_; }
  double m12() const {
    DCHECK(has_m12_);
    return m12_;
  }
  inline void setM12(double);

  bool hasM21() const { return has_m21_; }
  double m21() const {
    DCHECK(has_m21_);
    return m21_;
  }
  inline void setM21(double);

  bool hasM22() const { return has_m22_; }
  double m22() const {
    DCHECK(has_m22_);
    return m22_;
  }
  inline void setM22(double);

  bool hasM41() const { return has_m41_; }
  double m41() const {
    DCHECK(has_m41_);
    return m41_;
  }
  inline void setM41(double);

  bool hasM42() const { return has_m42_; }
  double m42() const {
    DCHECK(has_m42_);
    return m42_;
  }
  inline void setM42(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_a_ = false;
  bool has_b_ = false;
  bool has_c_ = false;
  bool has_d_ = false;
  bool has_e_ = false;
  bool has_f_ = false;
  bool has_m11_ = false;
  bool has_m12_ = false;
  bool has_m21_ = false;
  bool has_m22_ = false;
  bool has_m41_ = false;
  bool has_m42_ = false;

  double a_;
  double b_;
  double c_;
  double d_;
  double e_;
  double f_;
  double m11_;
  double m12_;
  double m21_;
  double m22_;
  double m41_;
  double m42_;

  friend class V8DOMMatrix2DInit;
};

void DOMMatrix2DInit::setA(double value) {
  a_ = value;
  has_a_ = true;
}

void DOMMatrix2DInit::setB(double value) {
  b_ = value;
  has_b_ = true;
}

void DOMMatrix2DInit::setC(double value) {
  c_ = value;
  has_c_ = true;
}

void DOMMatrix2DInit::setD(double value) {
  d_ = value;
  has_d_ = true;
}

void DOMMatrix2DInit::setE(double value) {
  e_ = value;
  has_e_ = true;
}

void DOMMatrix2DInit::setF(double value) {
  f_ = value;
  has_f_ = true;
}

void DOMMatrix2DInit::setM11(double value) {
  m11_ = value;
  has_m11_ = true;
}

void DOMMatrix2DInit::setM12(double value) {
  m12_ = value;
  has_m12_ = true;
}

void DOMMatrix2DInit::setM21(double value) {
  m21_ = value;
  has_m21_ = true;
}

void DOMMatrix2DInit::setM22(double value) {
  m22_ = value;
  has_m22_ = true;
}

void DOMMatrix2DInit::setM41(double value) {
  m41_ = value;
  has_m41_ = true;
}

void DOMMatrix2DInit::setM42(double value) {
  m42_ = value;
  has_m42_ = true;
}

}  // namespace blink

#endif  // DOMMatrix2DInit_h
