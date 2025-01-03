// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/file_or_usv_string.h"

#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"

namespace blink {

FileOrUSVString::FileOrUSVString() : type_(SpecificType::kNone) {}

File* FileOrUSVString::GetAsFile() const {
  DCHECK(IsFile());
  return file_;
}

void FileOrUSVString::SetFile(File* value) {
  DCHECK(IsNull());
  file_ = value;
  type_ = SpecificType::kFile;
}

FileOrUSVString FileOrUSVString::FromFile(File* value) {
  FileOrUSVString container;
  container.SetFile(value);
  return container;
}

const String& FileOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void FileOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

FileOrUSVString FileOrUSVString::FromUSVString(const String& value) {
  FileOrUSVString container;
  container.SetUSVString(value);
  return container;
}

FileOrUSVString::FileOrUSVString(const FileOrUSVString&) = default;
FileOrUSVString::~FileOrUSVString() = default;
FileOrUSVString& FileOrUSVString::operator=(const FileOrUSVString&) = default;

void FileOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(file_);
}

void V8FileOrUSVString::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, FileOrUSVString& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState) {
  if (v8Value.IsEmpty())
    return;

  if (conversionMode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8Value))
    return;

  if (V8File::hasInstance(v8Value, isolate)) {
    File* cppValue = V8File::ToImpl(v8::Local<v8::Object>::Cast(v8Value));
    impl.SetFile(cppValue);
    return;
  }

  {
    V8StringResource<> cppValue = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8Value, exceptionState);
    if (exceptionState.HadException())
      return;
    impl.SetUSVString(cppValue);
    return;
  }
}

v8::Local<v8::Value> ToV8(const FileOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case FileOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case FileOrUSVString::SpecificType::kFile:
      return ToV8(impl.GetAsFile(), creationContext, isolate);
    case FileOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

FileOrUSVString NativeValueTraits<FileOrUSVString>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  FileOrUSVString impl;
  V8FileOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exceptionState);
  return impl;
}

}  // namespace blink
