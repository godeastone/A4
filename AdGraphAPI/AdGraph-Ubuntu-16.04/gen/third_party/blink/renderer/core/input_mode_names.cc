// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/editing/input_mode_names.json5


#include "third_party/blink/renderer/core/input_mode_names.h"

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace InputModeNames {

void* NamesStorage[InputModeNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& decimal = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& email = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& none = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& numeric = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& search = reinterpret_cast<AtomicString*>(&NamesStorage)[4];
const AtomicString& tel = reinterpret_cast<AtomicString*>(&NamesStorage)[5];
const AtomicString& text = reinterpret_cast<AtomicString*>(&NamesStorage)[6];
const AtomicString& url = reinterpret_cast<AtomicString*>(&NamesStorage)[7];

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
    { "decimal", 15005416, 7 },
    { "email", 13948917, 5 },
    { "none", 3454253, 4 },
    { "numeric", 14288860, 7 },
    { "search", 6906057, 6 },
    { "tel", 1681717, 3 },
    { "text", 2784654, 4 },
    { "url", 10560150, 3 },
  };

  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
    new (address) AtomicString(stringImpl);
  }
}

} // InputModeNames
} // namespace blink
