// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef FetchEventInit_h
#define FetchEventInit_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/serviceworkers/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Request;

class MODULES_EXPORT FetchEventInit : public ExtendableEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  FetchEventInit();
  virtual ~FetchEventInit();
  FetchEventInit(const FetchEventInit&);
  FetchEventInit& operator=(const FetchEventInit&);

  bool hasClientId() const { return !client_id_.IsNull(); }
  const String& clientId() const {
    return client_id_;
  }
  inline void setClientId(const String&);

  bool hasIsReload() const { return has_is_reload_; }
  bool isReload() const {
    DCHECK(has_is_reload_);
    return is_reload_;
  }
  inline void setIsReload(bool);

  bool hasRequest() const { return request_; }
  Request* request() const {
    return request_;
  }
  inline void setRequest(Request*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_is_reload_ = false;

  String client_id_;
  bool is_reload_;
  Member<Request> request_;

  friend class V8FetchEventInit;
};

void FetchEventInit::setClientId(const String& value) {
  client_id_ = value;
}

void FetchEventInit::setIsReload(bool value) {
  is_reload_ = value;
  has_is_reload_ = true;
}

void FetchEventInit::setRequest(Request* value) {
  request_ = value;
}

}  // namespace blink

#endif  // FetchEventInit_h
