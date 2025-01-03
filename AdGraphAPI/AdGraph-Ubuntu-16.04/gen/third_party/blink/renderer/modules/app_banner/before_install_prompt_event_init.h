// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BeforeInstallPromptEventInit_h
#define BeforeInstallPromptEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT BeforeInstallPromptEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BeforeInstallPromptEventInit();
  virtual ~BeforeInstallPromptEventInit();
  BeforeInstallPromptEventInit(const BeforeInstallPromptEventInit&);
  BeforeInstallPromptEventInit& operator=(const BeforeInstallPromptEventInit&);

  bool hasPlatforms() const { return has_platforms_; }
  const Vector<String>& platforms() const {
    DCHECK(has_platforms_);
    return platforms_;
  }
  void setPlatforms(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_platforms_ = false;

  Vector<String> platforms_;

  friend class V8BeforeInstallPromptEventInit;
};

}  // namespace blink

#endif  // BeforeInstallPromptEventInit_h
