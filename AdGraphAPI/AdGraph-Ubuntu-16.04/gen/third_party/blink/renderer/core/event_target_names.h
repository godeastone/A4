// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/events/event_target_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_TARGET_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_TARGET_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace EventTargetNames {

CORE_EXPORT extern const WTF::AtomicString& Animation;
CORE_EXPORT extern const WTF::AtomicString& Clipboard;
CORE_EXPORT extern const WTF::AtomicString& FontFaceSet;
CORE_EXPORT extern const WTF::AtomicString& MediaQueryList;
CORE_EXPORT extern const WTF::AtomicString& AccessibleNode;
CORE_EXPORT extern const WTF::AtomicString& BroadcastChannel;
CORE_EXPORT extern const WTF::AtomicString& MessagePort;
CORE_EXPORT extern const WTF::AtomicString& Node;
CORE_EXPORT extern const WTF::AtomicString& EventTargetImpl;
CORE_EXPORT extern const WTF::AtomicString& AbortSignal;
CORE_EXPORT extern const WTF::AtomicString& FileReader;
CORE_EXPORT extern const WTF::AtomicString& InputMethodContext;
CORE_EXPORT extern const WTF::AtomicString& AudioTrackList;
CORE_EXPORT extern const WTF::AtomicString& TextTrack;
CORE_EXPORT extern const WTF::AtomicString& TextTrackCue;
CORE_EXPORT extern const WTF::AtomicString& TextTrackList;
CORE_EXPORT extern const WTF::AtomicString& VideoTrackList;
CORE_EXPORT extern const WTF::AtomicString& ApplicationCache;
CORE_EXPORT extern const WTF::AtomicString& MojoInterfaceInterceptor;
CORE_EXPORT extern const WTF::AtomicString& OffscreenCanvas;
CORE_EXPORT extern const WTF::AtomicString& EventSource;
CORE_EXPORT extern const WTF::AtomicString& Performance;
CORE_EXPORT extern const WTF::AtomicString& DedicatedWorkerGlobalScope;
CORE_EXPORT extern const WTF::AtomicString& SharedWorker;
CORE_EXPORT extern const WTF::AtomicString& SharedWorkerGlobalScope;
CORE_EXPORT extern const WTF::AtomicString& Worker;
CORE_EXPORT extern const WTF::AtomicString& XMLHttpRequest;
CORE_EXPORT extern const WTF::AtomicString& XMLHttpRequestUpload;
CORE_EXPORT extern const WTF::AtomicString& DOMVisualViewport;
CORE_EXPORT extern const WTF::AtomicString& DOMWindow;

const unsigned EventTargetNamesCount = 30;

CORE_EXPORT void init();

}  // EventTargetNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_TARGET_NAMES_H_
