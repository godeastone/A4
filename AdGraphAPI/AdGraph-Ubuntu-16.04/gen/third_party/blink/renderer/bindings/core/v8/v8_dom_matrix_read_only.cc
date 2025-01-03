// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cpp.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/exception_state.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_matrix_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point_init.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float64_array.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DOMMatrixReadOnly::wrapperTypeInfo = {
    gin::kEmbedderBlink,
    V8DOMMatrixReadOnly::domTemplate,
    V8DOMMatrixReadOnly::InstallConditionalFeatures,
    "DOMMatrixReadOnly",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMMatrixReadOnly.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMMatrixReadOnly::wrapper_type_info_ = V8DOMMatrixReadOnly::wrapperTypeInfo;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMMatrixReadOnly>::value,
    "DOMMatrixReadOnly inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMMatrixReadOnly::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMMatrixReadOnly is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMMatrixReadOnlyV8Internal {

static void aAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->a());
}

static void bAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->b());
}

static void cAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->c());
}

static void dAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->d());
}

static void eAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->e());
}

static void fAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->f());
}

static void m11AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m11());
}

static void m12AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m12());
}

static void m13AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m13());
}

static void m14AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m14());
}

static void m21AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m21());
}

static void m22AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m22());
}

static void m23AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m23());
}

static void m24AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m24());
}

static void m31AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m31());
}

static void m32AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m32());
}

static void m33AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m33());
}

static void m34AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m34());
}

static void m41AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m41());
}

static void m42AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m42());
}

static void m43AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m43());
}

static void m44AttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValue(info, impl->m44());
}

static void is2DAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValueBool(info, impl->is2D());
}

static void isIdentityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(holder);

  V8SetReturnValueBool(info, impl->isIdentity());
}

static void fromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "fromMatrix");

  DOMMatrixInit other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  V8DOMMatrixInit::ToImpl(info.GetIsolate(), info[0], other, exceptionState);
  if (exceptionState.HadException())
    return;

  DOMMatrixReadOnly* result = DOMMatrixReadOnly::fromMatrix(other, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void fromFloat32ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "fromFloat32Array");

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat32Array> array32;
  array32 = ToNotShared<NotShared<DOMFloat32Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array32) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Float32Array'.");
    return;
  }

  DOMMatrixReadOnly* result = DOMMatrixReadOnly::fromFloat32Array(array32, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void fromFloat64ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "fromFloat64Array");

  if (UNLIKELY(info.Length() < 1)) {
    exceptionState.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  NotShared<DOMFloat64Array> array64;
  array64 = ToNotShared<NotShared<DOMFloat64Array>>(info.GetIsolate(), info[0], exceptionState);
  if (exceptionState.HadException())
    return;
  if (!array64) {
    exceptionState.ThrowTypeError("parameter 1 is not of type 'Float64Array'.");
    return;
  }

  DOMMatrixReadOnly* result = DOMMatrixReadOnly::fromFloat64Array(array64, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void translateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "translate");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double tx;
  double ty;
  double tz;
  if (!info[0]->IsUndefined()) {
    tx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    tx = 0;
  }
  if (!info[1]->IsUndefined()) {
    ty = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    ty = 0;
  }
  if (!info[2]->IsUndefined()) {
    tz = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    tz = 0;
  }

  V8SetReturnValue(info, impl->translate(tx, ty, tz));
}

static void scaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "scale");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double scaleX;
  double scaleY;
  double scaleZ;
  double originX;
  double originY;
  double originZ;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (!info[0]->IsUndefined()) {
    scaleX = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    scaleX = 1;
  }
  if (UNLIKELY(numArgsPassed <= 1)) {
    V8SetReturnValue(info, impl->scale(scaleX));
    return;
  }
  scaleY = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    scaleZ = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    scaleZ = 1;
  }
  if (!info[3]->IsUndefined()) {
    originX = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    originX = 0;
  }
  if (!info[4]->IsUndefined()) {
    originY = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[4], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    originY = 0;
  }
  if (!info[5]->IsUndefined()) {
    originZ = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[5], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    originZ = 0;
  }

  V8SetReturnValue(info, impl->scale(scaleX, scaleY, scaleZ, originX, originY, originZ));
}

static void scale3dMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "scale3d");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double scale;
  double originX;
  double originY;
  double originZ;
  if (!info[0]->IsUndefined()) {
    scale = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    scale = 1;
  }
  if (!info[1]->IsUndefined()) {
    originX = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    originX = 0;
  }
  if (!info[2]->IsUndefined()) {
    originY = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    originY = 0;
  }
  if (!info[3]->IsUndefined()) {
    originZ = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    originZ = 0;
  }

  V8SetReturnValue(info, impl->scale3d(scale, originX, originY, originZ));
}

static void rotateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "rotate");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double rotX;
  double rotY;
  double rotZ;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (!info[0]->IsUndefined()) {
    rotX = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    rotX = 0;
  }
  if (UNLIKELY(numArgsPassed <= 1)) {
    V8SetReturnValue(info, impl->rotate(rotX));
    return;
  }
  rotY = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
  if (exceptionState.HadException())
    return;

  if (UNLIKELY(numArgsPassed <= 2)) {
    V8SetReturnValue(info, impl->rotate(rotX, rotY));
    return;
  }
  rotZ = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->rotate(rotX, rotY, rotZ));
}

static void rotateFromVectorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "rotateFromVector");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double x;
  double y;
  if (!info[0]->IsUndefined()) {
    x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    x = 0;
  }
  if (!info[1]->IsUndefined()) {
    y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    y = 0;
  }

  V8SetReturnValue(info, impl->rotateFromVector(x, y));
}

static void rotateAxisAngleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "rotateAxisAngle");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double x;
  double y;
  double z;
  double angle;
  if (!info[0]->IsUndefined()) {
    x = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    x = 0;
  }
  if (!info[1]->IsUndefined()) {
    y = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[1], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    y = 0;
  }
  if (!info[2]->IsUndefined()) {
    z = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[2], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    z = 0;
  }
  if (!info[3]->IsUndefined()) {
    angle = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[3], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    angle = 0;
  }

  V8SetReturnValue(info, impl->rotateAxisAngle(x, y, z, angle));
}

static void skewXMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "skewX");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double sx;
  if (!info[0]->IsUndefined()) {
    sx = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    sx = 0;
  }

  V8SetReturnValue(info, impl->skewX(sx));
}

static void skewYMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "skewY");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  double sy;
  if (!info[0]->IsUndefined()) {
    sy = NativeValueTraits<IDLUnrestrictedDouble>::NativeValue(info.GetIsolate(), info[0], exceptionState);
    if (exceptionState.HadException())
      return;
  } else {
    sy = 0;
  }

  V8SetReturnValue(info, impl->skewY(sy));
}

static void multiplyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "multiply");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  DOMMatrixInit other;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('other') is not an object.");
    return;
  }
  V8DOMMatrixInit::ToImpl(info.GetIsolate(), info[0], other, exceptionState);
  if (exceptionState.HadException())
    return;

  DOMMatrix* result = impl->multiply(other, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void flipXMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->flipX());
}

static void flipYMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->flipY());
}

static void inverseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->inverse());
}

static void transformPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "transformPoint");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  DOMPointInit point;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exceptionState.ThrowTypeError("parameter 1 ('point') is not an object.");
    return;
  }
  V8DOMPointInit::ToImpl(info.GetIsolate(), info[0], point, exceptionState);
  if (exceptionState.HadException())
    return;

  V8SetReturnValue(info, impl->transformPoint(point));
}

static void toFloat32ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->toFloat32Array());
}

static void toFloat64ArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->toFloat64Array());
}

static void toJSONMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  ScriptState* scriptState = ScriptState::ForRelevantRealm(info);

  ScriptValue result = impl->toJSONForBinding(scriptState);
  V8SetReturnValue(info, result.V8Value());
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kExecutionContext, "DOMMatrixReadOnly", "toString");

  DOMMatrixReadOnly* impl = V8DOMMatrixReadOnly::ToImpl(info.Holder());

  String result = impl->toString(exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_ConstructorCallback");

  ExceptionState exceptionState(info.GetIsolate(), ExceptionState::kConstructionContext, "DOMMatrixReadOnly");

  StringOrUnrestrictedDoubleSequence init;
  int numArgsPassed = info.Length();
  while (numArgsPassed > 0) {
    if (!info[numArgsPassed - 1]->IsUndefined())
      break;
    --numArgsPassed;
  }
  if (UNLIKELY(numArgsPassed <= 0)) {
    ExecutionContext* executionContext = ToExecutionContext(
        info.NewTarget().As<v8::Object>()->CreationContext());
    DOMMatrixReadOnly* impl = DOMMatrixReadOnly::Create(executionContext, exceptionState);
    if (exceptionState.HadException()) {
      return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8DOMMatrixReadOnly::wrapperTypeInfo, wrapper);
    V8SetReturnValue(info, wrapper);
    return;
  }
  V8StringOrUnrestrictedDoubleSequence::ToImpl(info.GetIsolate(), info[0], init, UnionTypeConversionMode::kNotNullable, exceptionState);
  if (exceptionState.HadException())
    return;

  ExecutionContext* executionContext = ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext());
  DOMMatrixReadOnly* impl = DOMMatrixReadOnly::Create(executionContext, init, exceptionState);
  if (exceptionState.HadException()) {
    return;
  }
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), &V8DOMMatrixReadOnly::wrapperTypeInfo, wrapper);
  V8SetReturnValue(info, wrapper);
}

} // namespace DOMMatrixReadOnlyV8Internal

void V8DOMMatrixReadOnly::aAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_a_Getter");

  DOMMatrixReadOnlyV8Internal::aAttributeGetter(info);
}

void V8DOMMatrixReadOnly::bAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_b_Getter");

  DOMMatrixReadOnlyV8Internal::bAttributeGetter(info);
}

void V8DOMMatrixReadOnly::cAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_c_Getter");

  DOMMatrixReadOnlyV8Internal::cAttributeGetter(info);
}

void V8DOMMatrixReadOnly::dAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_d_Getter");

  DOMMatrixReadOnlyV8Internal::dAttributeGetter(info);
}

void V8DOMMatrixReadOnly::eAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_e_Getter");

  DOMMatrixReadOnlyV8Internal::eAttributeGetter(info);
}

void V8DOMMatrixReadOnly::fAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_f_Getter");

  DOMMatrixReadOnlyV8Internal::fAttributeGetter(info);
}

void V8DOMMatrixReadOnly::m11AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m11_Getter");

  DOMMatrixReadOnlyV8Internal::m11AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m12AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m12_Getter");

  DOMMatrixReadOnlyV8Internal::m12AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m13AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m13_Getter");

  DOMMatrixReadOnlyV8Internal::m13AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m14AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m14_Getter");

  DOMMatrixReadOnlyV8Internal::m14AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m21AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m21_Getter");

  DOMMatrixReadOnlyV8Internal::m21AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m22AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m22_Getter");

  DOMMatrixReadOnlyV8Internal::m22AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m23AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m23_Getter");

  DOMMatrixReadOnlyV8Internal::m23AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m24AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m24_Getter");

  DOMMatrixReadOnlyV8Internal::m24AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m31AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m31_Getter");

  DOMMatrixReadOnlyV8Internal::m31AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m32AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m32_Getter");

  DOMMatrixReadOnlyV8Internal::m32AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m33AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m33_Getter");

  DOMMatrixReadOnlyV8Internal::m33AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m34AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m34_Getter");

  DOMMatrixReadOnlyV8Internal::m34AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m41AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m41_Getter");

  DOMMatrixReadOnlyV8Internal::m41AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m42AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m42_Getter");

  DOMMatrixReadOnlyV8Internal::m42AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m43AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m43_Getter");

  DOMMatrixReadOnlyV8Internal::m43AttributeGetter(info);
}

void V8DOMMatrixReadOnly::m44AttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_m44_Getter");

  DOMMatrixReadOnlyV8Internal::m44AttributeGetter(info);
}

void V8DOMMatrixReadOnly::is2DAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_is2D_Getter");

  DOMMatrixReadOnlyV8Internal::is2DAttributeGetter(info);
}

void V8DOMMatrixReadOnly::isIdentityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_isIdentity_Getter");

  DOMMatrixReadOnlyV8Internal::isIdentityAttributeGetter(info);
}

void V8DOMMatrixReadOnly::fromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_fromMatrix");

  DOMMatrixReadOnlyV8Internal::fromMatrixMethod(info);
}

void V8DOMMatrixReadOnly::fromFloat32ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_fromFloat32Array");

  DOMMatrixReadOnlyV8Internal::fromFloat32ArrayMethod(info);
}

void V8DOMMatrixReadOnly::fromFloat64ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_fromFloat64Array");

  DOMMatrixReadOnlyV8Internal::fromFloat64ArrayMethod(info);
}

void V8DOMMatrixReadOnly::translateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_translate");

  DOMMatrixReadOnlyV8Internal::translateMethod(info);
}

void V8DOMMatrixReadOnly::scaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_scale");

  DOMMatrixReadOnlyV8Internal::scaleMethod(info);
}

void V8DOMMatrixReadOnly::scale3dMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_scale3d");

  DOMMatrixReadOnlyV8Internal::scale3dMethod(info);
}

void V8DOMMatrixReadOnly::rotateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_rotate");

  DOMMatrixReadOnlyV8Internal::rotateMethod(info);
}

void V8DOMMatrixReadOnly::rotateFromVectorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_rotateFromVector");

  DOMMatrixReadOnlyV8Internal::rotateFromVectorMethod(info);
}

void V8DOMMatrixReadOnly::rotateAxisAngleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_rotateAxisAngle");

  DOMMatrixReadOnlyV8Internal::rotateAxisAngleMethod(info);
}

void V8DOMMatrixReadOnly::skewXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_skewX");

  DOMMatrixReadOnlyV8Internal::skewXMethod(info);
}

void V8DOMMatrixReadOnly::skewYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_skewY");

  DOMMatrixReadOnlyV8Internal::skewYMethod(info);
}

void V8DOMMatrixReadOnly::multiplyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_multiply");

  DOMMatrixReadOnlyV8Internal::multiplyMethod(info);
}

void V8DOMMatrixReadOnly::flipXMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_flipX");

  DOMMatrixReadOnlyV8Internal::flipXMethod(info);
}

void V8DOMMatrixReadOnly::flipYMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_flipY");

  DOMMatrixReadOnlyV8Internal::flipYMethod(info);
}

void V8DOMMatrixReadOnly::inverseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_inverse");

  DOMMatrixReadOnlyV8Internal::inverseMethod(info);
}

void V8DOMMatrixReadOnly::transformPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_transformPoint");

  DOMMatrixReadOnlyV8Internal::transformPointMethod(info);
}

void V8DOMMatrixReadOnly::toFloat32ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toFloat32Array");

  DOMMatrixReadOnlyV8Internal::toFloat32ArrayMethod(info);
}

void V8DOMMatrixReadOnly::toFloat64ArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toFloat64Array");

  DOMMatrixReadOnlyV8Internal::toFloat64ArrayMethod(info);
}

void V8DOMMatrixReadOnly::toJSONMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toJSON");

  DOMMatrixReadOnlyV8Internal::toJSONMethod(info);
}

void V8DOMMatrixReadOnly::toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_toString");

  DOMMatrixReadOnlyV8Internal::toStringMethod(info);
}

static const V8DOMConfiguration::AccessorConfiguration V8DOMMatrixReadOnlyAccessors[] = {
    { "a", V8DOMMatrixReadOnly::aAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "b", V8DOMMatrixReadOnly::bAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "c", V8DOMMatrixReadOnly::cAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "d", V8DOMMatrixReadOnly::dAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "e", V8DOMMatrixReadOnly::eAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "f", V8DOMMatrixReadOnly::fAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m11", V8DOMMatrixReadOnly::m11AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m12", V8DOMMatrixReadOnly::m12AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m13", V8DOMMatrixReadOnly::m13AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m14", V8DOMMatrixReadOnly::m14AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m21", V8DOMMatrixReadOnly::m21AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m22", V8DOMMatrixReadOnly::m22AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m23", V8DOMMatrixReadOnly::m23AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m24", V8DOMMatrixReadOnly::m24AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m31", V8DOMMatrixReadOnly::m31AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m32", V8DOMMatrixReadOnly::m32AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m33", V8DOMMatrixReadOnly::m33AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m34", V8DOMMatrixReadOnly::m34AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m41", V8DOMMatrixReadOnly::m41AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m42", V8DOMMatrixReadOnly::m42AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m43", V8DOMMatrixReadOnly::m43AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "m44", V8DOMMatrixReadOnly::m44AttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "is2D", V8DOMMatrixReadOnly::is2DAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
    { "isIdentity", V8DOMMatrixReadOnly::isIdentityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds },
};

static const V8DOMConfiguration::MethodConfiguration V8DOMMatrixReadOnlyMethods[] = {
    {"fromMatrix", V8DOMMatrixReadOnly::fromMatrixMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fromFloat32Array", V8DOMMatrixReadOnly::fromFloat32ArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fromFloat64Array", V8DOMMatrixReadOnly::fromFloat64ArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"translate", V8DOMMatrixReadOnly::translateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale", V8DOMMatrixReadOnly::scaleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scale3d", V8DOMMatrixReadOnly::scale3dMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotate", V8DOMMatrixReadOnly::rotateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateFromVector", V8DOMMatrixReadOnly::rotateFromVectorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rotateAxisAngle", V8DOMMatrixReadOnly::rotateAxisAngleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skewX", V8DOMMatrixReadOnly::skewXMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"skewY", V8DOMMatrixReadOnly::skewYMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"multiply", V8DOMMatrixReadOnly::multiplyMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flipX", V8DOMMatrixReadOnly::flipXMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flipY", V8DOMMatrixReadOnly::flipYMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"inverse", V8DOMMatrixReadOnly::inverseMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformPoint", V8DOMMatrixReadOnly::transformPointMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toFloat32Array", V8DOMMatrixReadOnly::toFloat32ArrayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toFloat64Array", V8DOMMatrixReadOnly::toFloat64ArrayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toJSON", V8DOMMatrixReadOnly::toJSONMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8DOMMatrixReadOnly::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMMatrixReadOnly_Constructor");

  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::ConstructorNotCallableAsFunction("DOMMatrixReadOnly"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  DOMMatrixReadOnlyV8Internal::constructor(info);
}

static void installV8DOMMatrixReadOnlyTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DOMMatrixReadOnly::wrapperTypeInfo.interface_name, v8::Local<v8::FunctionTemplate>(), V8DOMMatrixReadOnly::internalFieldCount);
  interfaceTemplate->SetCallHandler(V8DOMMatrixReadOnly::constructorCallback);
  interfaceTemplate->SetLength(0);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instanceTemplate);
  v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototypeTemplate);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DOMMatrixReadOnlyAccessors, arraysize(V8DOMMatrixReadOnlyAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate,
      signature, V8DOMMatrixReadOnlyMethods, arraysize(V8DOMMatrixReadOnlyMethods));

  // Custom signature

  V8DOMMatrixReadOnly::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interfaceTemplate);
}

void V8DOMMatrixReadOnly::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8DOMMatrixReadOnly::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMMatrixReadOnlyTemplate);
}

bool V8DOMMatrixReadOnly::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMMatrixReadOnly::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMMatrixReadOnly* V8DOMMatrixReadOnly::ToImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return hasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMMatrixReadOnly* NativeValueTraits<DOMMatrixReadOnly>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState) {
  DOMMatrixReadOnly* nativeValue = V8DOMMatrixReadOnly::ToImplWithTypeCheck(isolate, value);
  if (!nativeValue) {
    exceptionState.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "DOMMatrixReadOnly"));
  }
  return nativeValue;
}

void V8DOMMatrixReadOnly::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instanceObject,
    v8::Local<v8::Object> prototypeObject,
    v8::Local<v8::Function> interfaceObject,
    v8::Local<v8::FunctionTemplate> interfaceTemplate) {
  CHECK(!interfaceTemplate.IsEmpty());
  DCHECK((!prototypeObject.IsEmpty() && !interfaceObject.IsEmpty()) ||
         !instanceObject.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
  ExecutionContext* executionContext = ToExecutionContext(context);
  DCHECK(executionContext);

  if (!prototypeObject.IsEmpty() || !interfaceObject.IsEmpty()) {
    if (executionContext && (executionContext->IsDocument())) {
      const V8DOMConfiguration::MethodConfiguration toStringMethodConfiguration[] = {
        {"toString", V8DOMMatrixReadOnly::toStringMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& methodConfig : toStringMethodConfiguration)
        V8DOMConfiguration::InstallMethod(isolate, world, v8::Local<v8::Object>(), prototypeObject, interfaceObject, signature, methodConfig);
    }
  }
}

}  // namespace blink
