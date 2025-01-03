// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/loader/fetch/fetch_initiator_type_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_FETCH_INITIATOR_TYPE_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_FETCH_INITIATOR_TYPE_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/platform_export.h"

namespace blink {
namespace FetchInitiatorTypeNames {

PLATFORM_EXPORT extern const WTF::AtomicString& beacon;
PLATFORM_EXPORT extern const WTF::AtomicString& css;
PLATFORM_EXPORT extern const WTF::AtomicString& document;
PLATFORM_EXPORT extern const WTF::AtomicString& icon;
PLATFORM_EXPORT extern const WTF::AtomicString& internal;
PLATFORM_EXPORT extern const WTF::AtomicString& link;
PLATFORM_EXPORT extern const WTF::AtomicString& ping;
PLATFORM_EXPORT extern const WTF::AtomicString& processinginstruction;
PLATFORM_EXPORT extern const WTF::AtomicString& texttrack;
PLATFORM_EXPORT extern const WTF::AtomicString& uacss;
PLATFORM_EXPORT extern const WTF::AtomicString& violationreport;
PLATFORM_EXPORT extern const WTF::AtomicString& xml;
PLATFORM_EXPORT extern const WTF::AtomicString& xmlhttprequest;

const unsigned FetchInitiatorTypeNamesCount = 13;

PLATFORM_EXPORT void init();

}  // FetchInitiatorTypeNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_FETCH_INITIATOR_TYPE_NAMES_H_
