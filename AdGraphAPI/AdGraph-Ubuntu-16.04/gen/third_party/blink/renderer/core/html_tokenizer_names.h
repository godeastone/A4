// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/parser/html_tokenizer_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_TOKENIZER_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_TOKENIZER_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/platform_export.h"

namespace blink {
namespace HTMLTokenizerNames {

extern const WTF::AtomicString& doctype;
extern const WTF::AtomicString& system;
extern const WTF::AtomicString& cdata;
extern const WTF::AtomicString& dashDash;
extern const WTF::AtomicString& publicString;

const unsigned HTMLTokenizerNamesCount = 5;

void init();

}  // HTMLTokenizerNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_TOKENIZER_NAMES_H_
