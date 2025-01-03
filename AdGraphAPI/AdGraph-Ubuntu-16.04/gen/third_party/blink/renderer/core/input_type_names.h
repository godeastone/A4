// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/forms/input_type_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_TYPE_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_TYPE_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace InputTypeNames {

CORE_EXPORT extern const WTF::AtomicString& button;
CORE_EXPORT extern const WTF::AtomicString& checkbox;
CORE_EXPORT extern const WTF::AtomicString& color;
CORE_EXPORT extern const WTF::AtomicString& date;
CORE_EXPORT extern const WTF::AtomicString& datetime;
CORE_EXPORT extern const WTF::AtomicString& datetime_local;
CORE_EXPORT extern const WTF::AtomicString& email;
CORE_EXPORT extern const WTF::AtomicString& file;
CORE_EXPORT extern const WTF::AtomicString& hidden;
CORE_EXPORT extern const WTF::AtomicString& image;
CORE_EXPORT extern const WTF::AtomicString& month;
CORE_EXPORT extern const WTF::AtomicString& number;
CORE_EXPORT extern const WTF::AtomicString& password;
CORE_EXPORT extern const WTF::AtomicString& radio;
CORE_EXPORT extern const WTF::AtomicString& range;
CORE_EXPORT extern const WTF::AtomicString& reset;
CORE_EXPORT extern const WTF::AtomicString& search;
CORE_EXPORT extern const WTF::AtomicString& submit;
CORE_EXPORT extern const WTF::AtomicString& tel;
CORE_EXPORT extern const WTF::AtomicString& text;
CORE_EXPORT extern const WTF::AtomicString& time;
CORE_EXPORT extern const WTF::AtomicString& url;
CORE_EXPORT extern const WTF::AtomicString& week;

const unsigned InputTypeNamesCount = 23;

CORE_EXPORT void init();

}  // InputTypeNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_TYPE_NAMES_H_
