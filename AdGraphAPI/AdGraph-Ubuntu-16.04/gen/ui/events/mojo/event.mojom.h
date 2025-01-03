// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/events/mojo/keyboard_codes.mojom.h"
#include "ui/latency/mojo/latency_info.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "ui/events/event.h"


namespace ui {
namespace mojom {
class KeyData;
using KeyDataPtr = mojo::StructPtr<KeyData>;

class LocationData;
using LocationDataPtr = mojo::InlinedStructPtr<LocationData>;

class PointerData;
using PointerDataPtr = mojo::StructPtr<PointerData>;

class WheelData;
using WheelDataPtr = mojo::InlinedStructPtr<WheelData>;

class BrushData;
using BrushDataPtr = mojo::StructPtr<BrushData>;

class GestureData;
using GestureDataPtr = mojo::StructPtr<GestureData>;

class ScrollData;
using ScrollDataPtr = mojo::StructPtr<ScrollData>;

class Event;
using EventPtr = mojo::StructPtr<Event>;




class  LocationData {
 public:
  using DataView = LocationDataDataView;
  using Data_ = internal::LocationData_Data;

  template <typename... Args>
  static LocationDataPtr New(Args&&... args) {
    return LocationDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LocationDataPtr From(const U& u) {
    return mojo::TypeConverter<LocationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LocationData>::Convert(*this);
  }


  LocationData();

  LocationData(
      float x,
      float y,
      float screen_x,
      float screen_y);

  ~LocationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LocationDataPtr>
  LocationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LocationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LocationData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LocationData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LocationData_UnserializedMessageContext<
            UserType, LocationData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LocationData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LocationData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LocationData_UnserializedMessageContext<
            UserType, LocationData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LocationData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float x;
  float y;
  float screen_x;
  float screen_y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  WheelData {
 public:
  using DataView = WheelDataDataView;
  using Data_ = internal::WheelData_Data;

  template <typename... Args>
  static WheelDataPtr New(Args&&... args) {
    return WheelDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WheelDataPtr From(const U& u) {
    return mojo::TypeConverter<WheelDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WheelData>::Convert(*this);
  }


  WheelData();

  WheelData(
      ::ui::mojom::WheelMode mode,
      float delta_x,
      float delta_y,
      float delta_z);

  ~WheelData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WheelDataPtr>
  WheelDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WheelData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WheelData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WheelData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WheelData_UnserializedMessageContext<
            UserType, WheelData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WheelData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WheelData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WheelData_UnserializedMessageContext<
            UserType, WheelData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WheelData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::ui::mojom::WheelMode mode;
  float delta_x;
  float delta_y;
  float delta_z;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  KeyData {
 public:
  using DataView = KeyDataDataView;
  using Data_ = internal::KeyData_Data;

  template <typename... Args>
  static KeyDataPtr New(Args&&... args) {
    return KeyDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyData>::Convert(*this);
  }


  KeyData();

  KeyData(
      int32_t key_code,
      bool is_char,
      uint16_t character,
      ::ui::mojom::KeyboardCode windows_key_code,
      int32_t native_key_code,
      uint16_t text,
      uint16_t unmodified_text,
      const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& properties);

  ~KeyData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyDataPtr>
  KeyDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyData_UnserializedMessageContext<
            UserType, KeyData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyData_UnserializedMessageContext<
            UserType, KeyData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t key_code;
  bool is_char;
  uint16_t character;
  ::ui::mojom::KeyboardCode windows_key_code;
  int32_t native_key_code;
  uint16_t text;
  uint16_t unmodified_text;
  base::Optional<base::flat_map<std::string, std::vector<uint8_t>>> properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  PointerData {
 public:
  using DataView = PointerDataDataView;
  using Data_ = internal::PointerData_Data;

  template <typename... Args>
  static PointerDataPtr New(Args&&... args) {
    return PointerDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointerDataPtr From(const U& u) {
    return mojo::TypeConverter<PointerDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerData>::Convert(*this);
  }


  PointerData();

  PointerData(
      int32_t pointer_id,
      int32_t changed_button_flags,
      ::ui::mojom::PointerKind kind,
      LocationDataPtr location,
      BrushDataPtr brush_data,
      WheelDataPtr wheel_data);

  ~PointerData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerDataPtr>
  PointerDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PointerData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointerData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PointerData_UnserializedMessageContext<
            UserType, PointerData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PointerData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PointerData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PointerData_UnserializedMessageContext<
            UserType, PointerData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PointerData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t pointer_id;
  int32_t changed_button_flags;
  ::ui::mojom::PointerKind kind;
  LocationDataPtr location;
  BrushDataPtr brush_data;
  WheelDataPtr wheel_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PointerData);
};



class  BrushData {
 public:
  using DataView = BrushDataDataView;
  using Data_ = internal::BrushData_Data;

  template <typename... Args>
  static BrushDataPtr New(Args&&... args) {
    return BrushDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BrushDataPtr From(const U& u) {
    return mojo::TypeConverter<BrushDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BrushData>::Convert(*this);
  }


  BrushData();

  BrushData(
      float width,
      float height,
      float pressure,
      float tilt_x,
      float tilt_y,
      float tangential_pressure,
      int32_t twist);

  ~BrushData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BrushDataPtr>
  BrushDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BrushData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BrushData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BrushData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BrushData_UnserializedMessageContext<
            UserType, BrushData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BrushData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BrushData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BrushData_UnserializedMessageContext<
            UserType, BrushData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BrushData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float width;
  float height;
  float pressure;
  float tilt_x;
  float tilt_y;
  float tangential_pressure;
  int32_t twist;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  GestureData {
 public:
  using DataView = GestureDataDataView;
  using Data_ = internal::GestureData_Data;

  template <typename... Args>
  static GestureDataPtr New(Args&&... args) {
    return GestureDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GestureDataPtr From(const U& u) {
    return mojo::TypeConverter<GestureDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GestureData>::Convert(*this);
  }


  GestureData();

  explicit GestureData(
      LocationDataPtr location);

  ~GestureData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GestureDataPtr>
  GestureDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GestureData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GestureData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GestureData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GestureData_UnserializedMessageContext<
            UserType, GestureData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GestureData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GestureData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GestureData_UnserializedMessageContext<
            UserType, GestureData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GestureData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  LocationDataPtr location;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GestureData);
};


class  ScrollData {
 public:
  using DataView = ScrollDataDataView;
  using Data_ = internal::ScrollData_Data;

  template <typename... Args>
  static ScrollDataPtr New(Args&&... args) {
    return ScrollDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ScrollDataPtr From(const U& u) {
    return mojo::TypeConverter<ScrollDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ScrollData>::Convert(*this);
  }


  ScrollData();

  ScrollData(
      LocationDataPtr location,
      float x_offset,
      float y_offset,
      float x_offset_ordinal,
      float y_offset_ordinal,
      int32_t finger_count,
      ui::EventMomentumPhase momentum_phase,
      ui::ScrollEventPhase scroll_event_phase);

  ~ScrollData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ScrollDataPtr>
  ScrollDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ScrollData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ScrollData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ScrollData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ScrollData_UnserializedMessageContext<
            UserType, ScrollData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ScrollData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ScrollData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ScrollData_UnserializedMessageContext<
            UserType, ScrollData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ScrollData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  LocationDataPtr location;
  float x_offset;
  float y_offset;
  float x_offset_ordinal;
  float y_offset_ordinal;
  int32_t finger_count;
  ui::EventMomentumPhase momentum_phase;
  ui::ScrollEventPhase scroll_event_phase;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ScrollData);
};


class  Event {
 public:
  using DataView = EventDataView;
  using Data_ = internal::Event_Data;

  template <typename... Args>
  static EventPtr New(Args&&... args) {
    return EventPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EventPtr From(const U& u) {
    return mojo::TypeConverter<EventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Event>::Convert(*this);
  }


  Event();

  Event(
      ::ui::mojom::EventType action,
      int32_t flags,
      base::TimeTicks time_stamp,
      const ui::LatencyInfo& latency,
      KeyDataPtr key_data,
      PointerDataPtr pointer_data,
      GestureDataPtr gesture_data,
      ScrollDataPtr scroll_data);

  ~Event();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventPtr>
  EventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Event>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Event::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Event::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Event_UnserializedMessageContext<
            UserType, Event::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Event::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Event::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Event_UnserializedMessageContext<
            UserType, Event::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Event::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::ui::mojom::EventType action;
  int32_t flags;
  base::TimeTicks time_stamp;
  ui::LatencyInfo latency;
  KeyDataPtr key_data;
  PointerDataPtr pointer_data;
  GestureDataPtr gesture_data;
  ScrollDataPtr scroll_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Event);
};

template <typename StructPtrType>
KeyDataPtr KeyData::Clone() const {
  return New(
      mojo::Clone(key_code),
      mojo::Clone(is_char),
      mojo::Clone(character),
      mojo::Clone(windows_key_code),
      mojo::Clone(native_key_code),
      mojo::Clone(text),
      mojo::Clone(unmodified_text),
      mojo::Clone(properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyData>::value>::type*>
bool KeyData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key_code, other_struct.key_code))
    return false;
  if (!mojo::Equals(this->is_char, other_struct.is_char))
    return false;
  if (!mojo::Equals(this->character, other_struct.character))
    return false;
  if (!mojo::Equals(this->windows_key_code, other_struct.windows_key_code))
    return false;
  if (!mojo::Equals(this->native_key_code, other_struct.native_key_code))
    return false;
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->unmodified_text, other_struct.unmodified_text))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  return true;
}
template <typename StructPtrType>
LocationDataPtr LocationData::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(screen_x),
      mojo::Clone(screen_y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LocationData>::value>::type*>
bool LocationData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->screen_x, other_struct.screen_x))
    return false;
  if (!mojo::Equals(this->screen_y, other_struct.screen_y))
    return false;
  return true;
}
template <typename StructPtrType>
PointerDataPtr PointerData::Clone() const {
  return New(
      mojo::Clone(pointer_id),
      mojo::Clone(changed_button_flags),
      mojo::Clone(kind),
      mojo::Clone(location),
      mojo::Clone(brush_data),
      mojo::Clone(wheel_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerData>::value>::type*>
bool PointerData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pointer_id, other_struct.pointer_id))
    return false;
  if (!mojo::Equals(this->changed_button_flags, other_struct.changed_button_flags))
    return false;
  if (!mojo::Equals(this->kind, other_struct.kind))
    return false;
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->brush_data, other_struct.brush_data))
    return false;
  if (!mojo::Equals(this->wheel_data, other_struct.wheel_data))
    return false;
  return true;
}
template <typename StructPtrType>
WheelDataPtr WheelData::Clone() const {
  return New(
      mojo::Clone(mode),
      mojo::Clone(delta_x),
      mojo::Clone(delta_y),
      mojo::Clone(delta_z)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WheelData>::value>::type*>
bool WheelData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->delta_x, other_struct.delta_x))
    return false;
  if (!mojo::Equals(this->delta_y, other_struct.delta_y))
    return false;
  if (!mojo::Equals(this->delta_z, other_struct.delta_z))
    return false;
  return true;
}
template <typename StructPtrType>
BrushDataPtr BrushData::Clone() const {
  return New(
      mojo::Clone(width),
      mojo::Clone(height),
      mojo::Clone(pressure),
      mojo::Clone(tilt_x),
      mojo::Clone(tilt_y),
      mojo::Clone(tangential_pressure),
      mojo::Clone(twist)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BrushData>::value>::type*>
bool BrushData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  if (!mojo::Equals(this->pressure, other_struct.pressure))
    return false;
  if (!mojo::Equals(this->tilt_x, other_struct.tilt_x))
    return false;
  if (!mojo::Equals(this->tilt_y, other_struct.tilt_y))
    return false;
  if (!mojo::Equals(this->tangential_pressure, other_struct.tangential_pressure))
    return false;
  if (!mojo::Equals(this->twist, other_struct.twist))
    return false;
  return true;
}
template <typename StructPtrType>
GestureDataPtr GestureData::Clone() const {
  return New(
      mojo::Clone(location)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GestureData>::value>::type*>
bool GestureData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  return true;
}
template <typename StructPtrType>
ScrollDataPtr ScrollData::Clone() const {
  return New(
      mojo::Clone(location),
      mojo::Clone(x_offset),
      mojo::Clone(y_offset),
      mojo::Clone(x_offset_ordinal),
      mojo::Clone(y_offset_ordinal),
      mojo::Clone(finger_count),
      mojo::Clone(momentum_phase),
      mojo::Clone(scroll_event_phase)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ScrollData>::value>::type*>
bool ScrollData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->location, other_struct.location))
    return false;
  if (!mojo::Equals(this->x_offset, other_struct.x_offset))
    return false;
  if (!mojo::Equals(this->y_offset, other_struct.y_offset))
    return false;
  if (!mojo::Equals(this->x_offset_ordinal, other_struct.x_offset_ordinal))
    return false;
  if (!mojo::Equals(this->y_offset_ordinal, other_struct.y_offset_ordinal))
    return false;
  if (!mojo::Equals(this->finger_count, other_struct.finger_count))
    return false;
  if (!mojo::Equals(this->momentum_phase, other_struct.momentum_phase))
    return false;
  if (!mojo::Equals(this->scroll_event_phase, other_struct.scroll_event_phase))
    return false;
  return true;
}
template <typename StructPtrType>
EventPtr Event::Clone() const {
  return New(
      mojo::Clone(action),
      mojo::Clone(flags),
      mojo::Clone(time_stamp),
      mojo::Clone(latency),
      mojo::Clone(key_data),
      mojo::Clone(pointer_data),
      mojo::Clone(gesture_data),
      mojo::Clone(scroll_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Event>::value>::type*>
bool Event::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->time_stamp, other_struct.time_stamp))
    return false;
  if (!mojo::Equals(this->latency, other_struct.latency))
    return false;
  if (!mojo::Equals(this->key_data, other_struct.key_data))
    return false;
  if (!mojo::Equals(this->pointer_data, other_struct.pointer_data))
    return false;
  if (!mojo::Equals(this->gesture_data, other_struct.gesture_data))
    return false;
  if (!mojo::Equals(this->scroll_data, other_struct.scroll_data))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::KeyData::DataView,
                                         ::ui::mojom::KeyDataPtr> {
  static bool IsNull(const ::ui::mojom::KeyDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::KeyDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::KeyData::key_code) key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->key_code;
  }

  static decltype(::ui::mojom::KeyData::is_char) is_char(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->is_char;
  }

  static decltype(::ui::mojom::KeyData::character) character(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->character;
  }

  static decltype(::ui::mojom::KeyData::windows_key_code) windows_key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->windows_key_code;
  }

  static decltype(::ui::mojom::KeyData::native_key_code) native_key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->native_key_code;
  }

  static decltype(::ui::mojom::KeyData::text) text(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->text;
  }

  static decltype(::ui::mojom::KeyData::unmodified_text) unmodified_text(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->unmodified_text;
  }

  static const decltype(::ui::mojom::KeyData::properties)& properties(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->properties;
  }

  static bool Read(::ui::mojom::KeyData::DataView input, ::ui::mojom::KeyDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::LocationData::DataView,
                                         ::ui::mojom::LocationDataPtr> {
  static bool IsNull(const ::ui::mojom::LocationDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LocationDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::LocationData::x) x(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->x;
  }

  static decltype(::ui::mojom::LocationData::y) y(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->y;
  }

  static decltype(::ui::mojom::LocationData::screen_x) screen_x(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->screen_x;
  }

  static decltype(::ui::mojom::LocationData::screen_y) screen_y(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->screen_y;
  }

  static bool Read(::ui::mojom::LocationData::DataView input, ::ui::mojom::LocationDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::PointerData::DataView,
                                         ::ui::mojom::PointerDataPtr> {
  static bool IsNull(const ::ui::mojom::PointerDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::PointerData::pointer_id) pointer_id(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->pointer_id;
  }

  static decltype(::ui::mojom::PointerData::changed_button_flags) changed_button_flags(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->changed_button_flags;
  }

  static decltype(::ui::mojom::PointerData::kind) kind(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->kind;
  }

  static const decltype(::ui::mojom::PointerData::location)& location(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->location;
  }

  static const decltype(::ui::mojom::PointerData::brush_data)& brush_data(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->brush_data;
  }

  static const decltype(::ui::mojom::PointerData::wheel_data)& wheel_data(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->wheel_data;
  }

  static bool Read(::ui::mojom::PointerData::DataView input, ::ui::mojom::PointerDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::WheelData::DataView,
                                         ::ui::mojom::WheelDataPtr> {
  static bool IsNull(const ::ui::mojom::WheelDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WheelDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::WheelData::mode) mode(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->mode;
  }

  static decltype(::ui::mojom::WheelData::delta_x) delta_x(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->delta_x;
  }

  static decltype(::ui::mojom::WheelData::delta_y) delta_y(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->delta_y;
  }

  static decltype(::ui::mojom::WheelData::delta_z) delta_z(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->delta_z;
  }

  static bool Read(::ui::mojom::WheelData::DataView input, ::ui::mojom::WheelDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::BrushData::DataView,
                                         ::ui::mojom::BrushDataPtr> {
  static bool IsNull(const ::ui::mojom::BrushDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::BrushDataPtr* output) { output->reset(); }

  static decltype(::ui::mojom::BrushData::width) width(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->width;
  }

  static decltype(::ui::mojom::BrushData::height) height(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->height;
  }

  static decltype(::ui::mojom::BrushData::pressure) pressure(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->pressure;
  }

  static decltype(::ui::mojom::BrushData::tilt_x) tilt_x(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->tilt_x;
  }

  static decltype(::ui::mojom::BrushData::tilt_y) tilt_y(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->tilt_y;
  }

  static decltype(::ui::mojom::BrushData::tangential_pressure) tangential_pressure(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->tangential_pressure;
  }

  static decltype(::ui::mojom::BrushData::twist) twist(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->twist;
  }

  static bool Read(::ui::mojom::BrushData::DataView input, ::ui::mojom::BrushDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::GestureData::DataView,
                                         ::ui::mojom::GestureDataPtr> {
  static bool IsNull(const ::ui::mojom::GestureDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::GestureDataPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::GestureData::location)& location(
      const ::ui::mojom::GestureDataPtr& input) {
    return input->location;
  }

  static bool Read(::ui::mojom::GestureData::DataView input, ::ui::mojom::GestureDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::ScrollData::DataView,
                                         ::ui::mojom::ScrollDataPtr> {
  static bool IsNull(const ::ui::mojom::ScrollDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::ScrollDataPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::ScrollData::location)& location(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->location;
  }

  static decltype(::ui::mojom::ScrollData::x_offset) x_offset(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->x_offset;
  }

  static decltype(::ui::mojom::ScrollData::y_offset) y_offset(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->y_offset;
  }

  static decltype(::ui::mojom::ScrollData::x_offset_ordinal) x_offset_ordinal(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->x_offset_ordinal;
  }

  static decltype(::ui::mojom::ScrollData::y_offset_ordinal) y_offset_ordinal(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->y_offset_ordinal;
  }

  static decltype(::ui::mojom::ScrollData::finger_count) finger_count(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->finger_count;
  }

  static decltype(::ui::mojom::ScrollData::momentum_phase) momentum_phase(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->momentum_phase;
  }

  static decltype(::ui::mojom::ScrollData::scroll_event_phase) scroll_event_phase(
      const ::ui::mojom::ScrollDataPtr& input) {
    return input->scroll_event_phase;
  }

  static bool Read(::ui::mojom::ScrollData::DataView input, ::ui::mojom::ScrollDataPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::Event::DataView,
                                         ::ui::mojom::EventPtr> {
  static bool IsNull(const ::ui::mojom::EventPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventPtr* output) { output->reset(); }

  static decltype(::ui::mojom::Event::action) action(
      const ::ui::mojom::EventPtr& input) {
    return input->action;
  }

  static decltype(::ui::mojom::Event::flags) flags(
      const ::ui::mojom::EventPtr& input) {
    return input->flags;
  }

  static const decltype(::ui::mojom::Event::time_stamp)& time_stamp(
      const ::ui::mojom::EventPtr& input) {
    return input->time_stamp;
  }

  static const decltype(::ui::mojom::Event::latency)& latency(
      const ::ui::mojom::EventPtr& input) {
    return input->latency;
  }

  static const decltype(::ui::mojom::Event::key_data)& key_data(
      const ::ui::mojom::EventPtr& input) {
    return input->key_data;
  }

  static const decltype(::ui::mojom::Event::pointer_data)& pointer_data(
      const ::ui::mojom::EventPtr& input) {
    return input->pointer_data;
  }

  static const decltype(::ui::mojom::Event::gesture_data)& gesture_data(
      const ::ui::mojom::EventPtr& input) {
    return input->gesture_data;
  }

  static const decltype(::ui::mojom::Event::scroll_data)& scroll_data(
      const ::ui::mojom::EventPtr& input) {
    return input->scroll_data;
  }

  static bool Read(::ui::mojom::Event::DataView input, ::ui::mojom::EventPtr* output);
};

}  // namespace mojo

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_H_