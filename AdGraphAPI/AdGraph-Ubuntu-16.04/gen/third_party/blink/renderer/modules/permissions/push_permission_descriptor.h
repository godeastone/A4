// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef PushPermissionDescriptor_h
#define PushPermissionDescriptor_h

#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/permissions/permission_descriptor.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT PushPermissionDescriptor : public PermissionDescriptor {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  PushPermissionDescriptor();
  virtual ~PushPermissionDescriptor();
  PushPermissionDescriptor(const PushPermissionDescriptor&);
  PushPermissionDescriptor& operator=(const PushPermissionDescriptor&);

  bool hasUserVisibleOnly() const { return has_user_visible_only_; }
  bool userVisibleOnly() const {
    DCHECK(has_user_visible_only_);
    return user_visible_only_;
  }
  inline void setUserVisibleOnly(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_user_visible_only_ = false;

  bool user_visible_only_;

  friend class V8PushPermissionDescriptor;
};

void PushPermissionDescriptor::setUserVisibleOnly(bool value) {
  user_visible_only_ = value;
  has_user_visible_only_ = true;
}

}  // namespace blink

#endif  // PushPermissionDescriptor_h
