// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DOMMatrixInit_h
#define DOMMatrixInit_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/geometry/dom_matrix_2d_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMMatrixInit : public DOMMatrix2DInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DOMMatrixInit();
  virtual ~DOMMatrixInit();
  DOMMatrixInit(const DOMMatrixInit&);
  DOMMatrixInit& operator=(const DOMMatrixInit&);

  bool hasIs2D() const { return has_is_2d_; }
  bool is2D() const {
    DCHECK(has_is_2d_);
    return is_2d_;
  }
  inline void setIs2D(bool);

  bool hasM13() const { return has_m13_; }
  double m13() const {
    DCHECK(has_m13_);
    return m13_;
  }
  inline void setM13(double);

  bool hasM14() const { return has_m14_; }
  double m14() const {
    DCHECK(has_m14_);
    return m14_;
  }
  inline void setM14(double);

  bool hasM23() const { return has_m23_; }
  double m23() const {
    DCHECK(has_m23_);
    return m23_;
  }
  inline void setM23(double);

  bool hasM24() const { return has_m24_; }
  double m24() const {
    DCHECK(has_m24_);
    return m24_;
  }
  inline void setM24(double);

  bool hasM31() const { return has_m31_; }
  double m31() const {
    DCHECK(has_m31_);
    return m31_;
  }
  inline void setM31(double);

  bool hasM32() const { return has_m32_; }
  double m32() const {
    DCHECK(has_m32_);
    return m32_;
  }
  inline void setM32(double);

  bool hasM33() const { return has_m33_; }
  double m33() const {
    DCHECK(has_m33_);
    return m33_;
  }
  inline void setM33(double);

  bool hasM34() const { return has_m34_; }
  double m34() const {
    DCHECK(has_m34_);
    return m34_;
  }
  inline void setM34(double);

  bool hasM43() const { return has_m43_; }
  double m43() const {
    DCHECK(has_m43_);
    return m43_;
  }
  inline void setM43(double);

  bool hasM44() const { return has_m44_; }
  double m44() const {
    DCHECK(has_m44_);
    return m44_;
  }
  inline void setM44(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_is_2d_ = false;
  bool has_m13_ = false;
  bool has_m14_ = false;
  bool has_m23_ = false;
  bool has_m24_ = false;
  bool has_m31_ = false;
  bool has_m32_ = false;
  bool has_m33_ = false;
  bool has_m34_ = false;
  bool has_m43_ = false;
  bool has_m44_ = false;

  bool is_2d_;
  double m13_;
  double m14_;
  double m23_;
  double m24_;
  double m31_;
  double m32_;
  double m33_;
  double m34_;
  double m43_;
  double m44_;

  friend class V8DOMMatrixInit;
};

void DOMMatrixInit::setIs2D(bool value) {
  is_2d_ = value;
  has_is_2d_ = true;
}

void DOMMatrixInit::setM13(double value) {
  m13_ = value;
  has_m13_ = true;
}

void DOMMatrixInit::setM14(double value) {
  m14_ = value;
  has_m14_ = true;
}

void DOMMatrixInit::setM23(double value) {
  m23_ = value;
  has_m23_ = true;
}

void DOMMatrixInit::setM24(double value) {
  m24_ = value;
  has_m24_ = true;
}

void DOMMatrixInit::setM31(double value) {
  m31_ = value;
  has_m31_ = true;
}

void DOMMatrixInit::setM32(double value) {
  m32_ = value;
  has_m32_ = true;
}

void DOMMatrixInit::setM33(double value) {
  m33_ = value;
  has_m33_ = true;
}

void DOMMatrixInit::setM34(double value) {
  m34_ = value;
  has_m34_ = true;
}

void DOMMatrixInit::setM43(double value) {
  m43_ = value;
  has_m43_ = true;
}

void DOMMatrixInit::setM44(double value) {
  m44_ = value;
  has_m44_ = true;
}

}  // namespace blink

#endif  // DOMMatrixInit_h
