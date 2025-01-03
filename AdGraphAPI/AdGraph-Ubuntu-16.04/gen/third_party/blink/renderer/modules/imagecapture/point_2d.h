// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef Point2D_h
#define Point2D_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT Point2D : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  Point2D();
  virtual ~Point2D();
  Point2D(const Point2D&);
  Point2D& operator=(const Point2D&);

  bool hasX() const { return has_x_; }
  float x() const {
    DCHECK(has_x_);
    return x_;
  }
  inline void setX(float);

  bool hasY() const { return has_y_; }
  float y() const {
    DCHECK(has_y_);
    return y_;
  }
  inline void setY(float);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_x_ = false;
  bool has_y_ = false;

  float x_;
  float y_;

  friend class V8Point2D;
};

void Point2D::setX(float value) {
  x_ = value;
  has_x_ = true;
}

void Point2D::setY(float value) {
  y_ = value;
  has_y_ = true;
}

}  // namespace blink

#endif  // Point2D_h
