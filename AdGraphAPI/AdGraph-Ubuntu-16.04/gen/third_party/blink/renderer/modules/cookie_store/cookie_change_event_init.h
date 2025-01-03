// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef CookieChangeEventInit_h
#define CookieChangeEventInit_h

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/cookie_store/cookie_list_item.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT CookieChangeEventInit : public EventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  CookieChangeEventInit();
  virtual ~CookieChangeEventInit();
  CookieChangeEventInit(const CookieChangeEventInit&);
  CookieChangeEventInit& operator=(const CookieChangeEventInit&);

  bool hasChanged() const { return has_changed_; }
  const HeapVector<CookieListItem>& changed() const {
    DCHECK(has_changed_);
    return changed_;
  }
  void setChanged(const HeapVector<CookieListItem>&);

  bool hasDeleted() const { return has_deleted_; }
  const HeapVector<CookieListItem>& deleted() const {
    DCHECK(has_deleted_);
    return deleted_;
  }
  void setDeleted(const HeapVector<CookieListItem>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_changed_ = false;
  bool has_deleted_ = false;

  HeapVector<CookieListItem> changed_;
  HeapVector<CookieListItem> deleted_;

  friend class V8CookieChangeEventInit;
};

}  // namespace blink

#endif  // CookieChangeEventInit_h
