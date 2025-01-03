// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef NFCMessage_h
#define NFCMessage_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/nfc/nfc_record.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT NFCMessage : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  NFCMessage();
  virtual ~NFCMessage();
  NFCMessage(const NFCMessage&);
  NFCMessage& operator=(const NFCMessage&);

  bool hasRecords() const { return has_records_; }
  const HeapVector<NFCRecord>& records() const {
    DCHECK(has_records_);
    return records_;
  }
  void setRecords(const HeapVector<NFCRecord>&);

  bool hasURL() const { return !url_.IsNull(); }
  const String& url() const {
    return url_;
  }
  inline void setURL(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_records_ = false;

  HeapVector<NFCRecord> records_;
  String url_;

  friend class V8NFCMessage;
};

void NFCMessage::setURL(const String& value) {
  url_ = value;
}

}  // namespace blink

#endif  // NFCMessage_h
