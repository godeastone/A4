// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/media_type_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MEDIA_TYPE_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MEDIA_TYPE_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace MediaTypeNames {

CORE_EXPORT extern const WTF::AtomicString& all;
CORE_EXPORT extern const WTF::AtomicString& braille;
CORE_EXPORT extern const WTF::AtomicString& embossed;
CORE_EXPORT extern const WTF::AtomicString& handheld;
CORE_EXPORT extern const WTF::AtomicString& print;
CORE_EXPORT extern const WTF::AtomicString& projection;
CORE_EXPORT extern const WTF::AtomicString& screen;
CORE_EXPORT extern const WTF::AtomicString& speech;
CORE_EXPORT extern const WTF::AtomicString& tty;
CORE_EXPORT extern const WTF::AtomicString& tv;

const unsigned MediaTypeNamesCount = 10;

CORE_EXPORT void init();

}  // MediaTypeNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MEDIA_TYPE_NAMES_H_
