// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef FilePropertyBag_h
#define FilePropertyBag_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/fileapi/blob_property_bag.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT FilePropertyBag : public BlobPropertyBag {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  FilePropertyBag();
  virtual ~FilePropertyBag();
  FilePropertyBag(const FilePropertyBag&);
  FilePropertyBag& operator=(const FilePropertyBag&);

  bool hasLastModified() const { return has_last_modified_; }
  int64_t lastModified() const {
    DCHECK(has_last_modified_);
    return last_modified_;
  }
  inline void setLastModified(int64_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_last_modified_ = false;

  int64_t last_modified_;

  friend class V8FilePropertyBag;
};

void FilePropertyBag::setLastModified(int64_t value) {
  last_modified_ = value;
  has_last_modified_ = true;
}

}  // namespace blink

#endif  // FilePropertyBag_h
