// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/editing/input_mode_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_MODE_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_MODE_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace InputModeNames {

CORE_EXPORT extern const WTF::AtomicString& decimal;
CORE_EXPORT extern const WTF::AtomicString& email;
CORE_EXPORT extern const WTF::AtomicString& none;
CORE_EXPORT extern const WTF::AtomicString& numeric;
CORE_EXPORT extern const WTF::AtomicString& search;
CORE_EXPORT extern const WTF::AtomicString& tel;
CORE_EXPORT extern const WTF::AtomicString& text;
CORE_EXPORT extern const WTF::AtomicString& url;

const unsigned InputModeNamesCount = 8;

CORE_EXPORT void init();

}  // InputModeNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_MODE_NAMES_H_
