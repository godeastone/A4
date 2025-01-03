// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/modules/indexeddb/indexed_db_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXED_DB_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXED_DB_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/platform/platform_export.h"

namespace blink {
namespace IndexedDBNames {

extern const WTF::AtomicString& IndexedDB;
extern const WTF::AtomicString& add;
extern const WTF::AtomicString& clear;
extern const WTF::AtomicString& done;
extern const WTF::AtomicString& next;
extern const WTF::AtomicString& nextunique;
extern const WTF::AtomicString& none;
extern const WTF::AtomicString& pending;
extern const WTF::AtomicString& prev;
extern const WTF::AtomicString& prevunique;
extern const WTF::AtomicString& put;
extern const WTF::AtomicString& readonly;
extern const WTF::AtomicString& readwrite;
extern const WTF::AtomicString& total;
extern const WTF::AtomicString& versionchange;
extern const WTF::AtomicString& kDelete;

const unsigned IndexedDBNamesCount = 16;

void init();

}  // IndexedDBNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_INDEXED_DB_NAMES_H_
