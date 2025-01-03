// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef FontFaceSetLoadEventInit_h
#define FontFaceSetLoadEventInit_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class FontFace;

class CORE_EXPORT FontFaceSetLoadEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  FontFaceSetLoadEventInit();
  virtual ~FontFaceSetLoadEventInit();
  FontFaceSetLoadEventInit(const FontFaceSetLoadEventInit&);
  FontFaceSetLoadEventInit& operator=(const FontFaceSetLoadEventInit&);

  bool hasFontfaces() const { return has_fontfaces_; }
  const HeapVector<Member<FontFace>>& fontfaces() const {
    DCHECK(has_fontfaces_);
    return fontfaces_;
  }
  void setFontfaces(const HeapVector<Member<FontFace>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_fontfaces_ = false;

  HeapVector<Member<FontFace>> fontfaces_;

  friend class V8FontFaceSetLoadEventInit;
};

}  // namespace blink

#endif  // FontFaceSetLoadEventInit_h
