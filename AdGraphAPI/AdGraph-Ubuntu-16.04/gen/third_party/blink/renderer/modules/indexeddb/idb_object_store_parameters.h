// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef IDBObjectStoreParameters_h
#define IDBObjectStoreParameters_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/string_or_string_sequence.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT IDBObjectStoreParameters : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  IDBObjectStoreParameters();
  virtual ~IDBObjectStoreParameters();
  IDBObjectStoreParameters(const IDBObjectStoreParameters&);
  IDBObjectStoreParameters& operator=(const IDBObjectStoreParameters&);

  bool hasAutoIncrement() const { return has_auto_increment_; }
  bool autoIncrement() const {
    DCHECK(has_auto_increment_);
    return auto_increment_;
  }
  inline void setAutoIncrement(bool);

  bool hasKeyPath() const { return !key_path_.IsNull(); }
  const StringOrStringSequence& keyPath() const {
    return key_path_;
  }
  void setKeyPath(const StringOrStringSequence&);
  void setKeyPathToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_auto_increment_ = false;

  bool auto_increment_;
  StringOrStringSequence key_path_;

  friend class V8IDBObjectStoreParameters;
};

void IDBObjectStoreParameters::setAutoIncrement(bool value) {
  auto_increment_ = value;
  has_auto_increment_ = true;
}

}  // namespace blink

#endif  // IDBObjectStoreParameters_h
