// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/loader/fetch/fetch_initiator_type_names.json5


#include "third_party/blink/renderer/platform/loader/fetch/fetch_initiator_type_names.h"

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace FetchInitiatorTypeNames {

void* NamesStorage[FetchInitiatorTypeNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& beacon = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& css = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& document = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& icon = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& internal = reinterpret_cast<AtomicString*>(&NamesStorage)[4];
const AtomicString& link = reinterpret_cast<AtomicString*>(&NamesStorage)[5];
const AtomicString& ping = reinterpret_cast<AtomicString*>(&NamesStorage)[6];
const AtomicString& processinginstruction = reinterpret_cast<AtomicString*>(&NamesStorage)[7];
const AtomicString& texttrack = reinterpret_cast<AtomicString*>(&NamesStorage)[8];
const AtomicString& uacss = reinterpret_cast<AtomicString*>(&NamesStorage)[9];
const AtomicString& violationreport = reinterpret_cast<AtomicString*>(&NamesStorage)[10];
const AtomicString& xml = reinterpret_cast<AtomicString*>(&NamesStorage)[11];
const AtomicString& xmlhttprequest = reinterpret_cast<AtomicString*>(&NamesStorage)[12];

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
    { "beacon", 12791408, 6 },
    { "css", 12506144, 3 },
    { "document", 13333587, 8 },
    { "icon", 12131262, 4 },
    { "internal", 15376144, 8 },
    { "link", 7010491, 4 },
    { "ping", 9193756, 4 },
    { "processinginstruction", 8687069, 21 },
    { "texttrack", 5772877, 9 },
    { "uacss", 12060526, 5 },
    { "violationreport", 9570399, 15 },
    { "xml", 10322861, 3 },
    { "xmlhttprequest", 10847986, 14 },
  };

  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
    new (address) AtomicString(stringImpl);
  }
}

} // FetchInitiatorTypeNames
} // namespace blink
