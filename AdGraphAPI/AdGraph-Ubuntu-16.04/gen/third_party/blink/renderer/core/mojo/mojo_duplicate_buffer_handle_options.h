// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MojoDuplicateBufferHandleOptions_h
#define MojoDuplicateBufferHandleOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT MojoDuplicateBufferHandleOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MojoDuplicateBufferHandleOptions();
  virtual ~MojoDuplicateBufferHandleOptions();
  MojoDuplicateBufferHandleOptions(const MojoDuplicateBufferHandleOptions&);
  MojoDuplicateBufferHandleOptions& operator=(const MojoDuplicateBufferHandleOptions&);

  bool hasReadOnly() const { return has_read_only_; }
  bool readOnly() const {
    DCHECK(has_read_only_);
    return read_only_;
  }
  inline void setReadOnly(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_read_only_ = false;

  bool read_only_;

  friend class V8MojoDuplicateBufferHandleOptions;
};

void MojoDuplicateBufferHandleOptions::setReadOnly(bool value) {
  read_only_ = value;
  has_read_only_ = true;
}

}  // namespace blink

#endif  // MojoDuplicateBufferHandleOptions_h
