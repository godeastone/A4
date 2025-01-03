// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_metadata_init.h"

#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_image.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8MediaMetadataInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "album",
    "artist",
    "artwork",
    "title",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, arraysize(kKeys));
}

void V8MediaMetadataInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, MediaMetadataInit& impl, ExceptionState& exceptionState) {
  if (IsUndefinedOrNull(v8Value)) {
    return;
  }
  if (!v8Value->IsObject()) {
    exceptionState.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8Value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8MediaMetadataInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> albumValue;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&albumValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (albumValue.IsEmpty() || albumValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> albumCppValue = albumValue;
    if (!albumCppValue.Prepare(exceptionState))
      return;
    impl.setAlbum(albumCppValue);
  }

  v8::Local<v8::Value> artistValue;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&artistValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (artistValue.IsEmpty() || artistValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> artistCppValue = artistValue;
    if (!artistCppValue.Prepare(exceptionState))
      return;
    impl.setArtist(artistCppValue);
  }

  v8::Local<v8::Value> artworkValue;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&artworkValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (artworkValue.IsEmpty() || artworkValue->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<MediaImage> artworkCppValue = NativeValueTraits<IDLSequence<MediaImage>>::NativeValue(isolate, artworkValue, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.setArtwork(artworkCppValue);
  }

  v8::Local<v8::Value> titleValue;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&titleValue)) {
    exceptionState.RethrowV8Exception(block.Exception());
    return;
  }
  if (titleValue.IsEmpty() || titleValue->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> titleCppValue = titleValue;
    if (!titleCppValue.Prepare(exceptionState))
      return;
    impl.setTitle(titleCppValue);
  }
}

v8::Local<v8::Value> MediaMetadataInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8MediaMetadataInit(*this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8MediaMetadataInit(const MediaMetadataInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8MediaMetadataInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> albumValue;
  bool albumHasValueOrDefault = false;
  if (impl.hasAlbum()) {
    albumValue = V8String(isolate, impl.album());
    albumHasValueOrDefault = true;
  } else {
    albumValue = V8String(isolate, WTF::g_empty_string);
    albumHasValueOrDefault = true;
  }
  if (albumHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[0].Get(isolate), albumValue))) {
    return false;
  }

  v8::Local<v8::Value> artistValue;
  bool artistHasValueOrDefault = false;
  if (impl.hasArtist()) {
    artistValue = V8String(isolate, impl.artist());
    artistHasValueOrDefault = true;
  } else {
    artistValue = V8String(isolate, WTF::g_empty_string);
    artistHasValueOrDefault = true;
  }
  if (artistHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[1].Get(isolate), artistValue))) {
    return false;
  }

  v8::Local<v8::Value> artworkValue;
  bool artworkHasValueOrDefault = false;
  if (impl.hasArtwork()) {
    artworkValue = ToV8(impl.artwork(), creationContext, isolate);
    artworkHasValueOrDefault = true;
  } else {
    artworkValue = ToV8(HeapVector<MediaImage>(), creationContext, isolate);
    artworkHasValueOrDefault = true;
  }
  if (artworkHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[2].Get(isolate), artworkValue))) {
    return false;
  }

  v8::Local<v8::Value> titleValue;
  bool titleHasValueOrDefault = false;
  if (impl.hasTitle()) {
    titleValue = V8String(isolate, impl.title());
    titleHasValueOrDefault = true;
  } else {
    titleValue = V8String(isolate, WTF::g_empty_string);
    titleHasValueOrDefault = true;
  }
  if (titleHasValueOrDefault &&
      !V8CallBoolean(dictionary->CreateDataProperty(context, keys[3].Get(isolate), titleValue))) {
    return false;
  }

  return true;
}

MediaMetadataInit NativeValueTraits<MediaMetadataInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  MediaMetadataInit impl;
  V8MediaMetadataInit::ToImpl(isolate, value, impl, exceptionState);
  return impl;
}

}  // namespace blink
