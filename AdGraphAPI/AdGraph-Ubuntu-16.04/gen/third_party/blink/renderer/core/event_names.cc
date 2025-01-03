// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   gen/third_party/blink/renderer/core/event_names.json5


#include "third_party/blink/renderer/core/event_names.h"

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace EventNames {

void* NamesStorage[EventNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& FontFaceSetLoadEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& MediaQueryListEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& CustomEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& Event = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& AnimationEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[4];
const AtomicString& AnimationPlaybackEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[5];
const AtomicString& ApplicationCacheErrorEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[6];
const AtomicString& BeforeUnloadEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[7];
const AtomicString& ClipboardEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[8];
const AtomicString& CompositionEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[9];
const AtomicString& DragEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[10];
const AtomicString& ErrorEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[11];
const AtomicString& FocusEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[12];
const AtomicString& HashChangeEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[13];
const AtomicString& InputEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[14];
const AtomicString& KeyboardEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[15];
const AtomicString& MessageEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[16];
const AtomicString& MouseEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[17];
const AtomicString& MutationEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[18];
const AtomicString& PageTransitionEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[19];
const AtomicString& PointerEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[20];
const AtomicString& PopStateEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[21];
const AtomicString& ProgressEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[22];
const AtomicString& PromiseRejectionEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[23];
const AtomicString& ResourceProgressEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[24];
const AtomicString& SecurityPolicyViolationEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[25];
const AtomicString& TextEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[26];
const AtomicString& TouchEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[27];
const AtomicString& TransitionEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[28];
const AtomicString& UIEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[29];
const AtomicString& WheelEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[30];
const AtomicString& FormDataEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[31];
const AtomicString& TrackEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[32];
const AtomicString& MojoInterfaceRequestEvent = reinterpret_cast<AtomicString*>(&NamesStorage)[33];

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
    { "FontFaceSetLoadEvent", 3580378, 20 },
    { "MediaQueryListEvent", 2479019, 19 },
    { "CustomEvent", 13370215, 11 },
    { "Event", 14343017, 5 },
    { "AnimationEvent", 6834880, 14 },
    { "AnimationPlaybackEvent", 9080085, 22 },
    { "ApplicationCacheErrorEvent", 10025690, 26 },
    { "BeforeUnloadEvent", 6032602, 17 },
    { "ClipboardEvent", 10110691, 14 },
    { "CompositionEvent", 9205103, 16 },
    { "DragEvent", 16518129, 9 },
    { "ErrorEvent", 3070522, 10 },
    { "FocusEvent", 8217765, 10 },
    { "HashChangeEvent", 15010276, 15 },
    { "InputEvent", 5462086, 10 },
    { "KeyboardEvent", 6959608, 13 },
    { "MessageEvent", 3580588, 12 },
    { "MouseEvent", 12822602, 10 },
    { "MutationEvent", 3855658, 13 },
    { "PageTransitionEvent", 14165289, 19 },
    { "PointerEvent", 14906035, 12 },
    { "PopStateEvent", 13550868, 13 },
    { "ProgressEvent", 457487, 13 },
    { "PromiseRejectionEvent", 1433622, 21 },
    { "ResourceProgressEvent", 3169626, 21 },
    { "SecurityPolicyViolationEvent", 945681, 28 },
    { "TextEvent", 9996370, 9 },
    { "TouchEvent", 8776614, 10 },
    { "TransitionEvent", 4011983, 15 },
    { "UIEvent", 9523113, 7 },
    { "WheelEvent", 580237, 10 },
    { "FormDataEvent", 14553943, 13 },
    { "TrackEvent", 14136022, 10 },
    { "MojoInterfaceRequestEvent", 785425, 25 },
  };

  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
    new (address) AtomicString(stringImpl);
  }
}

} // EventNames
} // namespace blink
