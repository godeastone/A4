// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef FileSystemFlags_h
#define FileSystemFlags_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT FileSystemFlags : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  FileSystemFlags();
  virtual ~FileSystemFlags();
  FileSystemFlags(const FileSystemFlags&);
  FileSystemFlags& operator=(const FileSystemFlags&);

  bool hasCreateFlag() const { return has_create_flag_; }
  bool createFlag() const {
    DCHECK(has_create_flag_);
    return create_flag_;
  }
  inline void setCreateFlag(bool);

  bool hasExclusive() const { return has_exclusive_; }
  bool exclusive() const {
    DCHECK(has_exclusive_);
    return exclusive_;
  }
  inline void setExclusive(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_create_flag_ = false;
  bool has_exclusive_ = false;

  bool create_flag_;
  bool exclusive_;

  friend class V8FileSystemFlags;
};

void FileSystemFlags::setCreateFlag(bool value) {
  create_flag_ = value;
  has_create_flag_ = true;
}

void FileSystemFlags::setExclusive(bool value) {
  exclusive_ = value;
  has_exclusive_ = true;
}

}  // namespace blink

#endif  // FileSystemFlags_h
