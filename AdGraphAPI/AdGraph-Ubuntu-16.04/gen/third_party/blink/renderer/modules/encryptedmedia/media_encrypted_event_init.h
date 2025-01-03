// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef MediaEncryptedEventInit_h
#define MediaEncryptedEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class DOMArrayBuffer;

class MODULES_EXPORT MediaEncryptedEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  MediaEncryptedEventInit();
  virtual ~MediaEncryptedEventInit();
  MediaEncryptedEventInit(const MediaEncryptedEventInit&);
  MediaEncryptedEventInit& operator=(const MediaEncryptedEventInit&);

  bool hasInitData() const { return init_data_; }
  DOMArrayBuffer* initData() const {
    return init_data_;
  }
  inline void setInitData(DOMArrayBuffer*);
  inline void setInitDataToNull();

  bool hasInitDataType() const { return !init_data_type_.IsNull(); }
  const String& initDataType() const {
    return init_data_type_;
  }
  inline void setInitDataType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<DOMArrayBuffer> init_data_;
  String init_data_type_;

  friend class V8MediaEncryptedEventInit;
};

void MediaEncryptedEventInit::setInitData(DOMArrayBuffer* value) {
  init_data_ = value;
}
void MediaEncryptedEventInit::setInitDataToNull() {
  init_data_ = Member<DOMArrayBuffer>();
}

void MediaEncryptedEventInit::setInitDataType(const String& value) {
  init_data_type_ = value;
}

}  // namespace blink

#endif  // MediaEncryptedEventInit_h
