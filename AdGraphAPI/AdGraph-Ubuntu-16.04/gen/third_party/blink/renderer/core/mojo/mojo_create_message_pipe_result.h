// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MojoCreateMessagePipeResult_h
#define MojoCreateMessagePipeResult_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MojoHandle;

class CORE_EXPORT MojoCreateMessagePipeResult : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MojoCreateMessagePipeResult();
  virtual ~MojoCreateMessagePipeResult();
  MojoCreateMessagePipeResult(const MojoCreateMessagePipeResult&);
  MojoCreateMessagePipeResult& operator=(const MojoCreateMessagePipeResult&);

  bool hasHandle0() const { return handle0_; }
  MojoHandle* handle0() const {
    return handle0_;
  }
  inline void setHandle0(MojoHandle*);

  bool hasHandle1() const { return handle1_; }
  MojoHandle* handle1() const {
    return handle1_;
  }
  inline void setHandle1(MojoHandle*);

  bool hasResult() const { return has_result_; }
  uint32_t result() const {
    DCHECK(has_result_);
    return result_;
  }
  inline void setResult(uint32_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_result_ = false;

  Member<MojoHandle> handle0_;
  Member<MojoHandle> handle1_;
  uint32_t result_;

  friend class V8MojoCreateMessagePipeResult;
};

void MojoCreateMessagePipeResult::setHandle0(MojoHandle* value) {
  handle0_ = value;
}

void MojoCreateMessagePipeResult::setHandle1(MojoHandle* value) {
  handle1_ = value;
}

void MojoCreateMessagePipeResult::setResult(uint32_t value) {
  result_ = value;
  has_result_ = true;
}

}  // namespace blink

#endif  // MojoCreateMessagePipeResult_h
