// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef DragEventInit_h
#define DragEventInit_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/mouse_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DataTransfer;

class CORE_EXPORT DragEventInit : public MouseEventInit {
  DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
 public:
  DragEventInit();
  virtual ~DragEventInit();
  DragEventInit(const DragEventInit&);
  DragEventInit& operator=(const DragEventInit&);

  bool hasGetDataTransfer() const { return get_data_transfer_; }
  DataTransfer* getDataTransfer() const {
    return get_data_transfer_;
  }
  inline void setGetDataTransfer(DataTransfer*);
  inline void setGetDataTransferToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<DataTransfer> get_data_transfer_;

  friend class V8DragEventInit;
};

void DragEventInit::setGetDataTransfer(DataTransfer* value) {
  get_data_transfer_ = value;
}
void DragEventInit::setGetDataTransferToNull() {
  get_data_transfer_ = Member<DataTransfer>();
}

}  // namespace blink

#endif  // DragEventInit_h
