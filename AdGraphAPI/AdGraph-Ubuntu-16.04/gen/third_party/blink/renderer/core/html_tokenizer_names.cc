// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/parser/html_tokenizer_names.json5


#include "third_party/blink/renderer/core/html_tokenizer_names.h"

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace HTMLTokenizerNames {

void* NamesStorage[HTMLTokenizerNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& dashDash = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& cdata = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& doctype = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& publicString = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& system = reinterpret_cast<AtomicString*>(&NamesStorage)[4];

void init() {
  static bool isLoaded = false;
  if (isLoaded) return;
  isLoaded = true;

  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
  };

  static const NameEntry kNames[] = {
    { "--", 7376722, 2 },
    { "[CDATA[", 11402496, 7 },
    { "doctype", 10540185, 7 },
    { "public", 14399889, 6 },
    { "system", 7974370, 6 },
  };

  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
    new (address) AtomicString(stringImpl);
  }
}

} // HTMLTokenizerNames
} // namespace blink
