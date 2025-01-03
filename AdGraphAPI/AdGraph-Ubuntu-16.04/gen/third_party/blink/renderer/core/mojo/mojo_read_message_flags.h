// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MojoReadMessageFlags_h
#define MojoReadMessageFlags_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT MojoReadMessageFlags : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MojoReadMessageFlags();
  virtual ~MojoReadMessageFlags();
  MojoReadMessageFlags(const MojoReadMessageFlags&);
  MojoReadMessageFlags& operator=(const MojoReadMessageFlags&);

  bool hasMayDiscard() const { return has_may_discard_; }
  bool mayDiscard() const {
    DCHECK(has_may_discard_);
    return may_discard_;
  }
  inline void setMayDiscard(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_may_discard_ = false;

  bool may_discard_;

  friend class V8MojoReadMessageFlags;
};

void MojoReadMessageFlags::setMayDiscard(bool value) {
  may_discard_ = value;
  has_may_discard_ = true;
}

}  // namespace blink

#endif  // MojoReadMessageFlags_h
