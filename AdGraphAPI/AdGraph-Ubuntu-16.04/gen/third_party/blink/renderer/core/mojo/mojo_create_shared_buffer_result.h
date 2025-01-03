// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MojoCreateSharedBufferResult_h
#define MojoCreateSharedBufferResult_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MojoHandle;

class CORE_EXPORT MojoCreateSharedBufferResult : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MojoCreateSharedBufferResult();
  virtual ~MojoCreateSharedBufferResult();
  MojoCreateSharedBufferResult(const MojoCreateSharedBufferResult&);
  MojoCreateSharedBufferResult& operator=(const MojoCreateSharedBufferResult&);

  bool hasHandle() const { return handle_; }
  MojoHandle* handle() const {
    return handle_;
  }
  inline void setHandle(MojoHandle*);

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

  Member<MojoHandle> handle_;
  uint32_t result_;

  friend class V8MojoCreateSharedBufferResult;
};

void MojoCreateSharedBufferResult::setHandle(MojoHandle* value) {
  handle_ = value;
}

void MojoCreateSharedBufferResult::setResult(uint32_t value) {
  result_ = value;
  has_result_ = true;
}

}  // namespace blink

#endif  // MojoCreateSharedBufferResult_h
