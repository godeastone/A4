// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/fonts/font_family_names.json5


#include "third_party/blink/renderer/platform/font_family_names.h"

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace FontFamilyNames {

void* NamesStorage[FontFamilyNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& webkit_cursive = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& webkit_fantasy = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& webkit_monospace = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& webkit_pictograph = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& webkit_sans_serif = reinterpret_cast<AtomicString*>(&NamesStorage)[4];
const AtomicString& webkit_serif = reinterpret_cast<AtomicString*>(&NamesStorage)[5];
const AtomicString& webkit_standard = reinterpret_cast<AtomicString*>(&NamesStorage)[6];
const AtomicString& Arial = reinterpret_cast<AtomicString*>(&NamesStorage)[7];
const AtomicString& BlinkMacSystemFont = reinterpret_cast<AtomicString*>(&NamesStorage)[8];
const AtomicString& Calibri = reinterpret_cast<AtomicString*>(&NamesStorage)[9];
const AtomicString& Courier = reinterpret_cast<AtomicString*>(&NamesStorage)[10];
const AtomicString& Courier_New = reinterpret_cast<AtomicString*>(&NamesStorage)[11];
const AtomicString& Helvetica = reinterpret_cast<AtomicString*>(&NamesStorage)[12];
const AtomicString& Lucida_Grande = reinterpret_cast<AtomicString*>(&NamesStorage)[13];
const AtomicString& MS_Sans_Serif = reinterpret_cast<AtomicString*>(&NamesStorage)[14];
const AtomicString& MS_Serif = reinterpret_cast<AtomicString*>(&NamesStorage)[15];
const AtomicString& MS_UI_Gothic = reinterpret_cast<AtomicString*>(&NamesStorage)[16];
const AtomicString& Microsoft_Sans_Serif = reinterpret_cast<AtomicString*>(&NamesStorage)[17];
const AtomicString& Sans = reinterpret_cast<AtomicString*>(&NamesStorage)[18];
const AtomicString& Segoe_UI = reinterpret_cast<AtomicString*>(&NamesStorage)[19];
const AtomicString& Times = reinterpret_cast<AtomicString*>(&NamesStorage)[20];
const AtomicString& Times_New_Roman = reinterpret_cast<AtomicString*>(&NamesStorage)[21];
const AtomicString& cursive = reinterpret_cast<AtomicString*>(&NamesStorage)[22];
const AtomicString& fantasy = reinterpret_cast<AtomicString*>(&NamesStorage)[23];
const AtomicString& monospace = reinterpret_cast<AtomicString*>(&NamesStorage)[24];
const AtomicString& sans_serif = reinterpret_cast<AtomicString*>(&NamesStorage)[25];
const AtomicString& serif = reinterpret_cast<AtomicString*>(&NamesStorage)[26];
const AtomicString& system_ui = reinterpret_cast<AtomicString*>(&NamesStorage)[27];

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
    { "-webkit-cursive", 7063387, 15 },
    { "-webkit-fantasy", 16384875, 15 },
    { "-webkit-monospace", 14315487, 17 },
    { "-webkit-pictograph", 7921289, 18 },
    { "-webkit-sans-serif", 1961926, 18 },
    { "-webkit-serif", 7070799, 13 },
    { "-webkit-standard", 6994621, 16 },
    { "Arial", 16574340, 5 },
    { "BlinkMacSystemFont", 1851454, 18 },
    { "Calibri", 3430454, 7 },
    { "Courier", 3193356, 7 },
    { "Courier New", 14670458, 11 },
    { "Helvetica", 15124250, 9 },
    { "Lucida Grande", 8192141, 13 },
    { "MS Sans Serif", 3551498, 13 },
    { "MS Serif", 7586295, 8 },
    { "MS UI Gothic", 12187834, 12 },
    { "Microsoft Sans Serif", 10902575, 20 },
    { "Sans", 6668891, 4 },
    { "Segoe UI", 2762116, 8 },
    { "Times", 1178907, 5 },
    { "Times New Roman", 8871567, 15 },
    { "cursive", 10597311, 7 },
    { "fantasy", 16039516, 7 },
    { "monospace", 7438294, 9 },
    { "sans-serif", 5108456, 10 },
    { "serif", 14004670, 5 },
    { "system-ui", 14546067, 9 },
  };

  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
    new (address) AtomicString(stringImpl);
  }
}

} // FontFamilyNames
} // namespace blink
