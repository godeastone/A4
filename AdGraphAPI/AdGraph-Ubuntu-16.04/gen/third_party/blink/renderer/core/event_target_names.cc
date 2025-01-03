// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/events/event_target_names.json5


#include "third_party/blink/renderer/core/event_target_names.h"

#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace EventTargetNames {

void* NamesStorage[EventTargetNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& Animation = reinterpret_cast<AtomicString*>(&NamesStorage)[0];
const AtomicString& Clipboard = reinterpret_cast<AtomicString*>(&NamesStorage)[1];
const AtomicString& FontFaceSet = reinterpret_cast<AtomicString*>(&NamesStorage)[2];
const AtomicString& MediaQueryList = reinterpret_cast<AtomicString*>(&NamesStorage)[3];
const AtomicString& AccessibleNode = reinterpret_cast<AtomicString*>(&NamesStorage)[4];
const AtomicString& BroadcastChannel = reinterpret_cast<AtomicString*>(&NamesStorage)[5];
const AtomicString& MessagePort = reinterpret_cast<AtomicString*>(&NamesStorage)[6];
const AtomicString& Node = reinterpret_cast<AtomicString*>(&NamesStorage)[7];
const AtomicString& EventTargetImpl = reinterpret_cast<AtomicString*>(&NamesStorage)[8];
const AtomicString& AbortSignal = reinterpret_cast<AtomicString*>(&NamesStorage)[9];
const AtomicString& FileReader = reinterpret_cast<AtomicString*>(&NamesStorage)[10];
const AtomicString& DOMVisualViewport = reinterpret_cast<AtomicString*>(&NamesStorage)[11];
const AtomicString& DOMWindow = reinterpret_cast<AtomicString*>(&NamesStorage)[12];
const AtomicString& InputMethodContext = reinterpret_cast<AtomicString*>(&NamesStorage)[13];
const AtomicString& AudioTrackList = reinterpret_cast<AtomicString*>(&NamesStorage)[14];
const AtomicString& TextTrack = reinterpret_cast<AtomicString*>(&NamesStorage)[15];
const AtomicString& TextTrackCue = reinterpret_cast<AtomicString*>(&NamesStorage)[16];
const AtomicString& TextTrackList = reinterpret_cast<AtomicString*>(&NamesStorage)[17];
const AtomicString& VideoTrackList = reinterpret_cast<AtomicString*>(&NamesStorage)[18];
const AtomicString& ApplicationCache = reinterpret_cast<AtomicString*>(&NamesStorage)[19];
const AtomicString& MojoInterfaceInterceptor = reinterpret_cast<AtomicString*>(&NamesStorage)[20];
const AtomicString& OffscreenCanvas = reinterpret_cast<AtomicString*>(&NamesStorage)[21];
const AtomicString& EventSource = reinterpret_cast<AtomicString*>(&NamesStorage)[22];
const AtomicString& Performance = reinterpret_cast<AtomicString*>(&NamesStorage)[23];
const AtomicString& DedicatedWorkerGlobalScope = reinterpret_cast<AtomicString*>(&NamesStorage)[24];
const AtomicString& SharedWorker = reinterpret_cast<AtomicString*>(&NamesStorage)[25];
const AtomicString& SharedWorkerGlobalScope = reinterpret_cast<AtomicString*>(&NamesStorage)[26];
const AtomicString& Worker = reinterpret_cast<AtomicString*>(&NamesStorage)[27];
const AtomicString& XMLHttpRequest = reinterpret_cast<AtomicString*>(&NamesStorage)[28];
const AtomicString& XMLHttpRequestUpload = reinterpret_cast<AtomicString*>(&NamesStorage)[29];

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
    { "Animation", 15388009, 9 },
    { "Clipboard", 10684453, 9 },
    { "FontFaceSet", 15992392, 11 },
    { "MediaQueryList", 4446762, 14 },
    { "AccessibleNode", 1695511, 14 },
    { "BroadcastChannel", 13095884, 16 },
    { "MessagePort", 7675160, 11 },
    { "Node", 7481749, 4 },
    { "EventTargetImpl", 4459774, 15 },
    { "AbortSignal", 2804293, 11 },
    { "FileReader", 1122872, 10 },
    { "DOMVisualViewport", 4690116, 17 },
    { "DOMWindow", 5154002, 9 },
    { "InputMethodContext", 6735798, 18 },
    { "AudioTrackList", 4289573, 14 },
    { "TextTrack", 6141630, 9 },
    { "TextTrackCue", 12570487, 12 },
    { "TextTrackList", 15622086, 13 },
    { "VideoTrackList", 12436801, 14 },
    { "ApplicationCache", 14896278, 16 },
    { "MojoInterfaceInterceptor", 9014877, 24 },
    { "OffscreenCanvas", 6734153, 15 },
    { "EventSource", 10057717, 11 },
    { "Performance", 16508941, 11 },
    { "DedicatedWorkerGlobalScope", 16739179, 26 },
    { "SharedWorker", 5095866, 12 },
    { "SharedWorkerGlobalScope", 14997459, 23 },
    { "Worker", 14821068, 6 },
    { "XMLHttpRequest", 5139743, 14 },
    { "XMLHttpRequestUpload", 16716896, 20 },
  };

  for (size_t i = 0; i < arraysize(kNames); i++) {
    StringImpl* stringImpl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&NamesStorage) + i;
    new (address) AtomicString(stringImpl);
  }
}

} // EventTargetNames
} // namespace blink