// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   gen/third_party/blink/renderer/event_modules_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_EVENT_MODULES_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_EVENT_MODULES_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/modules/modules_export.h"

namespace blink {
namespace EventNames {

MODULES_EXPORT extern const WTF::AtomicString& BeforeInstallPromptEvent;
MODULES_EXPORT extern const WTF::AtomicString& SyncEvent;
MODULES_EXPORT extern const WTF::AtomicString& DeviceMotionEvent;
MODULES_EXPORT extern const WTF::AtomicString& DeviceOrientationEvent;
MODULES_EXPORT extern const WTF::AtomicString& MediaEncryptedEvent;
MODULES_EXPORT extern const WTF::AtomicString& MediaKeyMessageEvent;
MODULES_EXPORT extern const WTF::AtomicString& GamepadEvent;
MODULES_EXPORT extern const WTF::AtomicString& IDBVersionChangeEvent;
MODULES_EXPORT extern const WTF::AtomicString& BlobEvent;
MODULES_EXPORT extern const WTF::AtomicString& MediaStreamEvent;
MODULES_EXPORT extern const WTF::AtomicString& MediaStreamTrackEvent;
MODULES_EXPORT extern const WTF::AtomicString& RTCDTMFToneChangeEvent;
MODULES_EXPORT extern const WTF::AtomicString& RTCDataChannelEvent;
MODULES_EXPORT extern const WTF::AtomicString& RTCPeerConnectionIceEvent;
MODULES_EXPORT extern const WTF::AtomicString& SensorErrorEvent;
MODULES_EXPORT extern const WTF::AtomicString& ExtendableEvent;
MODULES_EXPORT extern const WTF::AtomicString& ExtendableMessageEvent;
MODULES_EXPORT extern const WTF::AtomicString& FetchEvent;
MODULES_EXPORT extern const WTF::AtomicString& InstallEvent;
MODULES_EXPORT extern const WTF::AtomicString& SpeechRecognitionError;
MODULES_EXPORT extern const WTF::AtomicString& SpeechRecognitionEvent;
MODULES_EXPORT extern const WTF::AtomicString& StorageEvent;
MODULES_EXPORT extern const WTF::AtomicString& VRDisplayEvent;
MODULES_EXPORT extern const WTF::AtomicString& AudioProcessingEvent;
MODULES_EXPORT extern const WTF::AtomicString& OfflineAudioCompletionEvent;
MODULES_EXPORT extern const WTF::AtomicString& WebGLContextEvent;
MODULES_EXPORT extern const WTF::AtomicString& MIDIConnectionEvent;
MODULES_EXPORT extern const WTF::AtomicString& MIDIMessageEvent;
MODULES_EXPORT extern const WTF::AtomicString& CloseEvent;
MODULES_EXPORT extern const WTF::AtomicString& XRInputSourceEvent;
MODULES_EXPORT extern const WTF::AtomicString& XRSessionEvent;
MODULES_EXPORT extern const WTF::AtomicString& CookieChangeEvent;
MODULES_EXPORT extern const WTF::AtomicString& ExtendableCookieChangeEvent;
MODULES_EXPORT extern const WTF::AtomicString& BackgroundFetchClickEvent;
MODULES_EXPORT extern const WTF::AtomicString& BackgroundFetchEvent;
MODULES_EXPORT extern const WTF::AtomicString& BackgroundFetchFailEvent;
MODULES_EXPORT extern const WTF::AtomicString& BackgroundFetchedEvent;
MODULES_EXPORT extern const WTF::AtomicString& NotificationEvent;
MODULES_EXPORT extern const WTF::AtomicString& AbortPaymentEvent;
MODULES_EXPORT extern const WTF::AtomicString& CanMakePaymentEvent;
MODULES_EXPORT extern const WTF::AtomicString& PaymentRequestEvent;
MODULES_EXPORT extern const WTF::AtomicString& PaymentRequestUpdateEvent;
MODULES_EXPORT extern const WTF::AtomicString& PresentationConnectionAvailableEvent;
MODULES_EXPORT extern const WTF::AtomicString& PresentationConnectionCloseEvent;
MODULES_EXPORT extern const WTF::AtomicString& PushEvent;
MODULES_EXPORT extern const WTF::AtomicString& SpeechSynthesisEvent;

const unsigned EventModulesNamesCount = 46;

MODULES_EXPORT void initModules();

}  // EventNames
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_EVENT_MODULES_NAMES_H_
