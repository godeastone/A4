// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef SyncEventInit_h
#define SyncEventInit_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/serviceworkers/extendable_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MODULES_EXPORT SyncEventInit : public ExtendableEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  SyncEventInit();
  virtual ~SyncEventInit();
  SyncEventInit(const SyncEventInit&);
  SyncEventInit& operator=(const SyncEventInit&);

  bool hasLastChance() const { return has_last_chance_; }
  bool lastChance() const {
    DCHECK(has_last_chance_);
    return last_chance_;
  }
  inline void setLastChance(bool);

  bool hasTag() const { return !tag_.IsNull(); }
  const String& tag() const {
    return tag_;
  }
  inline void setTag(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_last_chance_ = false;

  bool last_chance_;
  String tag_;

  friend class V8SyncEventInit;
};

void SyncEventInit::setLastChance(bool value) {
  last_chance_ = value;
  has_last_chance_ = true;
}

void SyncEventInit::setTag(const String& value) {
  tag_ = value;
}

}  // namespace blink

#endif  // SyncEventInit_h
