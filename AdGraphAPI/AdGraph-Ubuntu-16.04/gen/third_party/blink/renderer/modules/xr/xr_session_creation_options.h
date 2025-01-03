// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef XRSessionCreationOptions_h
#define XRSessionCreationOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class XRPresentationContext;

class MODULES_EXPORT XRSessionCreationOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  XRSessionCreationOptions();
  virtual ~XRSessionCreationOptions();
  XRSessionCreationOptions(const XRSessionCreationOptions&);
  XRSessionCreationOptions& operator=(const XRSessionCreationOptions&);

  bool hasExclusive() const { return has_exclusive_; }
  bool exclusive() const {
    DCHECK(has_exclusive_);
    return exclusive_;
  }
  inline void setExclusive(bool);

  bool hasOutputContext() const { return output_context_; }
  XRPresentationContext* outputContext() const {
    return output_context_;
  }
  inline void setOutputContext(XRPresentationContext*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exclusive_ = false;

  bool exclusive_;
  Member<XRPresentationContext> output_context_;

  friend class V8XRSessionCreationOptions;
};

void XRSessionCreationOptions::setExclusive(bool value) {
  exclusive_ = value;
  has_exclusive_ = true;
}

void XRSessionCreationOptions::setOutputContext(XRPresentationContext* value) {
  output_context_ = value;
}

}  // namespace blink

#endif  // XRSessionCreationOptions_h
