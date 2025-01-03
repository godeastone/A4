// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PublicKeyCredentialDescriptor_h
#define PublicKeyCredentialDescriptor_h

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_array_buffer.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT PublicKeyCredentialDescriptor : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PublicKeyCredentialDescriptor();
  virtual ~PublicKeyCredentialDescriptor();
  PublicKeyCredentialDescriptor(const PublicKeyCredentialDescriptor&);
  PublicKeyCredentialDescriptor& operator=(const PublicKeyCredentialDescriptor&);

  bool hasId() const { return !id_.IsNull(); }
  const ArrayBufferOrArrayBufferView& id() const {
    return id_;
  }
  void setId(const ArrayBufferOrArrayBufferView&);

  bool hasTransports() const { return has_transports_; }
  const Vector<String>& transports() const {
    DCHECK(has_transports_);
    return transports_;
  }
  void setTransports(const Vector<String>&);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_transports_ = false;

  ArrayBufferOrArrayBufferView id_;
  Vector<String> transports_;
  String type_;

  friend class V8PublicKeyCredentialDescriptor;
};

void PublicKeyCredentialDescriptor::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // PublicKeyCredentialDescriptor_h
