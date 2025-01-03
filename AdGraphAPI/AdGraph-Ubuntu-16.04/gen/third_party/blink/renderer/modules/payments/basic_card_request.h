// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef BasicCardRequest_h
#define BasicCardRequest_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT BasicCardRequest : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  BasicCardRequest();
  virtual ~BasicCardRequest();
  BasicCardRequest(const BasicCardRequest&);
  BasicCardRequest& operator=(const BasicCardRequest&);

  bool hasSupportedNetworks() const { return has_supported_networks_; }
  const Vector<String>& supportedNetworks() const {
    DCHECK(has_supported_networks_);
    return supported_networks_;
  }
  void setSupportedNetworks(const Vector<String>&);

  bool hasSupportedTypes() const { return has_supported_types_; }
  const Vector<String>& supportedTypes() const {
    DCHECK(has_supported_types_);
    return supported_types_;
  }
  void setSupportedTypes(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_supported_networks_ = false;
  bool has_supported_types_ = false;

  Vector<String> supported_networks_;
  Vector<String> supported_types_;

  friend class V8BasicCardRequest;
};

}  // namespace blink

#endif  // BasicCardRequest_h
