// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/xr/xr_session_creation_options.h"

#include "third_party/blink/renderer/modules/xr/xr_presentation_context.h"

namespace blink {

XRSessionCreationOptions::XRSessionCreationOptions() {
  setExclusive(false);
}

XRSessionCreationOptions::~XRSessionCreationOptions() {}

XRSessionCreationOptions::XRSessionCreationOptions(const XRSessionCreationOptions&) = default;

XRSessionCreationOptions& XRSessionCreationOptions::operator=(const XRSessionCreationOptions&) = default;

void XRSessionCreationOptions::Trace(blink::Visitor* visitor) {
  visitor->Trace(output_context_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
