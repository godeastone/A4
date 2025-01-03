// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PerformanceObserverInit_h
#define PerformanceObserverInit_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT PerformanceObserverInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PerformanceObserverInit();
  virtual ~PerformanceObserverInit();
  PerformanceObserverInit(const PerformanceObserverInit&);
  PerformanceObserverInit& operator=(const PerformanceObserverInit&);

  bool hasEntryTypes() const { return has_entry_types_; }
  const Vector<String>& entryTypes() const {
    DCHECK(has_entry_types_);
    return entry_types_;
  }
  void setEntryTypes(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_entry_types_ = false;

  Vector<String> entry_types_;

  friend class V8PerformanceObserverInit;
};

}  // namespace blink

#endif  // PerformanceObserverInit_h
