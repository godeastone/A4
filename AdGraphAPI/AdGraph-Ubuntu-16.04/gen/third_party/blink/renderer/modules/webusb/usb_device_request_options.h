// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef USBDeviceRequestOptions_h
#define USBDeviceRequestOptions_h

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webusb/usb_device_filter.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT USBDeviceRequestOptions : public IDLDictionaryBase {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  USBDeviceRequestOptions();
  virtual ~USBDeviceRequestOptions();
  USBDeviceRequestOptions(const USBDeviceRequestOptions&);
  USBDeviceRequestOptions& operator=(const USBDeviceRequestOptions&);

  bool hasFilters() const { return has_filters_; }
  const HeapVector<USBDeviceFilter>& filters() const {
    DCHECK(has_filters_);
    return filters_;
  }
  void setFilters(const HeapVector<USBDeviceFilter>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_filters_ = false;

  HeapVector<USBDeviceFilter> filters_;

  friend class V8USBDeviceRequestOptions;
};

}  // namespace blink

#endif  // USBDeviceRequestOptions_h
