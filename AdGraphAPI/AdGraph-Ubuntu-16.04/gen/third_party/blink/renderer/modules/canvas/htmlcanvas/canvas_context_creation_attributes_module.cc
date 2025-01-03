// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/canvas/htmlcanvas/canvas_context_creation_attributes_module.h"

#include "third_party/blink/renderer/modules/xr/xr_device.h"

namespace blink {

CanvasContextCreationAttributesModule::CanvasContextCreationAttributesModule() {
  setAlpha(true);
  setAntialias(true);
  setColorSpace("srgb");
  setDepth(true);
  setFailIfMajorPerformanceCaveat(false);
  setLowLatency(false);
  setPixelFormat("8-8-8-8");
  setPremultipliedAlpha(true);
  setPreserveDrawingBuffer(false);
  setStencil(false);
}

CanvasContextCreationAttributesModule::~CanvasContextCreationAttributesModule() {}

CanvasContextCreationAttributesModule::CanvasContextCreationAttributesModule(const CanvasContextCreationAttributesModule&) = default;

CanvasContextCreationAttributesModule& CanvasContextCreationAttributesModule::operator=(const CanvasContextCreationAttributesModule&) = default;

void CanvasContextCreationAttributesModule::Trace(blink::Visitor* visitor) {
  visitor->Trace(compatible_xr_device_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
