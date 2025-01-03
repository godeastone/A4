// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef ResponseInit_h
#define ResponseInit_h

#include "third_party/blink/renderer/bindings/core/v8/byte_string_sequence_sequence_or_byte_string_byte_string_record.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT ResponseInit : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  ResponseInit();
  virtual ~ResponseInit();
  ResponseInit(const ResponseInit&);
  ResponseInit& operator=(const ResponseInit&);

  bool hasHeaders() const { return !headers_.IsNull(); }
  const ByteStringSequenceSequenceOrByteStringByteStringRecord& headers() const {
    return headers_;
  }
  void setHeaders(const ByteStringSequenceSequenceOrByteStringByteStringRecord&);

  bool hasStatus() const { return has_status_; }
  uint16_t status() const {
    DCHECK(has_status_);
    return status_;
  }
  inline void setStatus(uint16_t);

  bool hasStatusText() const { return !status_text_.IsNull(); }
  const String& statusText() const {
    return status_text_;
  }
  inline void setStatusText(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_status_ = false;

  ByteStringSequenceSequenceOrByteStringByteStringRecord headers_;
  uint16_t status_;
  String status_text_;

  friend class V8ResponseInit;
};

void ResponseInit::setStatus(uint16_t value) {
  status_ = value;
  has_status_ = true;
}

void ResponseInit::setStatusText(const String& value) {
  status_text_ = value;
}

}  // namespace blink

#endif  // ResponseInit_h
