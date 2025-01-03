// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_H_

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
#include "services/ui/public/interfaces/event_matcher.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/events/mojo/keyboard_codes.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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


namespace ui {
namespace mojom {
class KeyEventMatcher;
using KeyEventMatcherPtr = mojo::InlinedStructPtr<KeyEventMatcher>;

class PointerKindMatcher;
using PointerKindMatcherPtr = mojo::InlinedStructPtr<PointerKindMatcher>;

class PointerLocationMatcher;
using PointerLocationMatcherPtr = mojo::StructPtr<PointerLocationMatcher>;

class EventTypeMatcher;
using EventTypeMatcherPtr = mojo::InlinedStructPtr<EventTypeMatcher>;

class EventFlagsMatcher;
using EventFlagsMatcherPtr = mojo::InlinedStructPtr<EventFlagsMatcher>;

class EventMatcher;
using EventMatcherPtr = mojo::StructPtr<EventMatcher>;



class  KeyEventMatcher {
 public:
  using DataView = KeyEventMatcherDataView;
  using Data_ = internal::KeyEventMatcher_Data;

  template <typename... Args>
  static KeyEventMatcherPtr New(Args&&... args) {
    return KeyEventMatcherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyEventMatcherPtr From(const U& u) {
    return mojo::TypeConverter<KeyEventMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyEventMatcher>::Convert(*this);
  }


  KeyEventMatcher();

  explicit KeyEventMatcher(
      ::ui::mojom::KeyboardCode keyboard_code);

  ~KeyEventMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyEventMatcherPtr>
  KeyEventMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyEventMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyEventMatcher::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyEventMatcher::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyEventMatcher_UnserializedMessageContext<
            UserType, KeyEventMatcher::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyEventMatcher::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyEventMatcher::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyEventMatcher_UnserializedMessageContext<
            UserType, KeyEventMatcher::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyEventMatcher::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::ui::mojom::KeyboardCode keyboard_code;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PointerKindMatcher {
 public:
  using DataView = PointerKindMatcherDataView;
  using Data_ = internal::PointerKindMatcher_Data;

  template <typename... Args>
  static PointerKindMatcherPtr New(Args&&... args) {
    return PointerKindMatcherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointerKindMatcherPtr From(const U& u) {
    return mojo::TypeConverter<PointerKindMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerKindMatcher>::Convert(*this);
  }


  PointerKindMatcher();

  explicit PointerKindMatcher(
      ::ui::mojom::PointerKind pointer_kind);

  ~PointerKindMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerKindMatcherPtr>
  PointerKindMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerKindMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PointerKindMatcher::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointerKindMatcher::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PointerKindMatcher_UnserializedMessageContext<
            UserType, PointerKindMatcher::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PointerKindMatcher::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PointerKindMatcher::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PointerKindMatcher_UnserializedMessageContext<
            UserType, PointerKindMatcher::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PointerKindMatcher::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::ui::mojom::PointerKind pointer_kind;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



class  EventTypeMatcher {
 public:
  using DataView = EventTypeMatcherDataView;
  using Data_ = internal::EventTypeMatcher_Data;

  template <typename... Args>
  static EventTypeMatcherPtr New(Args&&... args) {
    return EventTypeMatcherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EventTypeMatcherPtr From(const U& u) {
    return mojo::TypeConverter<EventTypeMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EventTypeMatcher>::Convert(*this);
  }


  EventTypeMatcher();

  explicit EventTypeMatcher(
      ::ui::mojom::EventType type);

  ~EventTypeMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventTypeMatcherPtr>
  EventTypeMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EventTypeMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EventTypeMatcher::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EventTypeMatcher::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EventTypeMatcher_UnserializedMessageContext<
            UserType, EventTypeMatcher::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EventTypeMatcher::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EventTypeMatcher::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EventTypeMatcher_UnserializedMessageContext<
            UserType, EventTypeMatcher::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EventTypeMatcher::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::ui::mojom::EventType type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  EventFlagsMatcher {
 public:
  using DataView = EventFlagsMatcherDataView;
  using Data_ = internal::EventFlagsMatcher_Data;

  template <typename... Args>
  static EventFlagsMatcherPtr New(Args&&... args) {
    return EventFlagsMatcherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EventFlagsMatcherPtr From(const U& u) {
    return mojo::TypeConverter<EventFlagsMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EventFlagsMatcher>::Convert(*this);
  }


  EventFlagsMatcher();

  explicit EventFlagsMatcher(
      int32_t flags);

  ~EventFlagsMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventFlagsMatcherPtr>
  EventFlagsMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EventFlagsMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EventFlagsMatcher::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EventFlagsMatcher::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EventFlagsMatcher_UnserializedMessageContext<
            UserType, EventFlagsMatcher::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EventFlagsMatcher::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EventFlagsMatcher::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EventFlagsMatcher_UnserializedMessageContext<
            UserType, EventFlagsMatcher::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EventFlagsMatcher::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  PointerLocationMatcher {
 public:
  using DataView = PointerLocationMatcherDataView;
  using Data_ = internal::PointerLocationMatcher_Data;

  template <typename... Args>
  static PointerLocationMatcherPtr New(Args&&... args) {
    return PointerLocationMatcherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PointerLocationMatcherPtr From(const U& u) {
    return mojo::TypeConverter<PointerLocationMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerLocationMatcher>::Convert(*this);
  }


  PointerLocationMatcher();

  explicit PointerLocationMatcher(
      const gfx::RectF& region);

  ~PointerLocationMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerLocationMatcherPtr>
  PointerLocationMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerLocationMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PointerLocationMatcher::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PointerLocationMatcher::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PointerLocationMatcher_UnserializedMessageContext<
            UserType, PointerLocationMatcher::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PointerLocationMatcher::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PointerLocationMatcher::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PointerLocationMatcher_UnserializedMessageContext<
            UserType, PointerLocationMatcher::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PointerLocationMatcher::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  gfx::RectF region;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  EventMatcher {
 public:
  using DataView = EventMatcherDataView;
  using Data_ = internal::EventMatcher_Data;

  template <typename... Args>
  static EventMatcherPtr New(Args&&... args) {
    return EventMatcherPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EventMatcherPtr From(const U& u) {
    return mojo::TypeConverter<EventMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EventMatcher>::Convert(*this);
  }


  EventMatcher();

  EventMatcher(
      ::ui::mojom::AcceleratorPhase accelerator_phase,
      EventTypeMatcherPtr type_matcher,
      EventFlagsMatcherPtr flags_matcher,
      EventFlagsMatcherPtr ignore_flags_matcher,
      KeyEventMatcherPtr key_matcher,
      PointerKindMatcherPtr pointer_kind_matcher,
      PointerLocationMatcherPtr pointer_location_matcher);

  ~EventMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventMatcherPtr>
  EventMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EventMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EventMatcher::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EventMatcher::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EventMatcher_UnserializedMessageContext<
            UserType, EventMatcher::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EventMatcher::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EventMatcher::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EventMatcher_UnserializedMessageContext<
            UserType, EventMatcher::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EventMatcher::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::ui::mojom::AcceleratorPhase accelerator_phase;
  EventTypeMatcherPtr type_matcher;
  EventFlagsMatcherPtr flags_matcher;
  EventFlagsMatcherPtr ignore_flags_matcher;
  KeyEventMatcherPtr key_matcher;
  PointerKindMatcherPtr pointer_kind_matcher;
  PointerLocationMatcherPtr pointer_location_matcher;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(EventMatcher);
};

template <typename StructPtrType>
KeyEventMatcherPtr KeyEventMatcher::Clone() const {
  return New(
      mojo::Clone(keyboard_code)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyEventMatcher>::value>::type*>
bool KeyEventMatcher::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->keyboard_code, other_struct.keyboard_code))
    return false;
  return true;
}
template <typename StructPtrType>
PointerKindMatcherPtr PointerKindMatcher::Clone() const {
  return New(
      mojo::Clone(pointer_kind)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerKindMatcher>::value>::type*>
bool PointerKindMatcher::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pointer_kind, other_struct.pointer_kind))
    return false;
  return true;
}
template <typename StructPtrType>
PointerLocationMatcherPtr PointerLocationMatcher::Clone() const {
  return New(
      mojo::Clone(region)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerLocationMatcher>::value>::type*>
bool PointerLocationMatcher::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->region, other_struct.region))
    return false;
  return true;
}
template <typename StructPtrType>
EventTypeMatcherPtr EventTypeMatcher::Clone() const {
  return New(
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EventTypeMatcher>::value>::type*>
bool EventTypeMatcher::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
EventFlagsMatcherPtr EventFlagsMatcher::Clone() const {
  return New(
      mojo::Clone(flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EventFlagsMatcher>::value>::type*>
bool EventFlagsMatcher::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  return true;
}
template <typename StructPtrType>
EventMatcherPtr EventMatcher::Clone() const {
  return New(
      mojo::Clone(accelerator_phase),
      mojo::Clone(type_matcher),
      mojo::Clone(flags_matcher),
      mojo::Clone(ignore_flags_matcher),
      mojo::Clone(key_matcher),
      mojo::Clone(pointer_kind_matcher),
      mojo::Clone(pointer_location_matcher)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EventMatcher>::value>::type*>
bool EventMatcher::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->accelerator_phase, other_struct.accelerator_phase))
    return false;
  if (!mojo::Equals(this->type_matcher, other_struct.type_matcher))
    return false;
  if (!mojo::Equals(this->flags_matcher, other_struct.flags_matcher))
    return false;
  if (!mojo::Equals(this->ignore_flags_matcher, other_struct.ignore_flags_matcher))
    return false;
  if (!mojo::Equals(this->key_matcher, other_struct.key_matcher))
    return false;
  if (!mojo::Equals(this->pointer_kind_matcher, other_struct.pointer_kind_matcher))
    return false;
  if (!mojo::Equals(this->pointer_location_matcher, other_struct.pointer_location_matcher))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::KeyEventMatcher::DataView,
                                         ::ui::mojom::KeyEventMatcherPtr> {
  static bool IsNull(const ::ui::mojom::KeyEventMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::KeyEventMatcherPtr* output) { output->reset(); }

  static decltype(::ui::mojom::KeyEventMatcher::keyboard_code) keyboard_code(
      const ::ui::mojom::KeyEventMatcherPtr& input) {
    return input->keyboard_code;
  }

  static bool Read(::ui::mojom::KeyEventMatcher::DataView input, ::ui::mojom::KeyEventMatcherPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::PointerKindMatcher::DataView,
                                         ::ui::mojom::PointerKindMatcherPtr> {
  static bool IsNull(const ::ui::mojom::PointerKindMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerKindMatcherPtr* output) { output->reset(); }

  static decltype(::ui::mojom::PointerKindMatcher::pointer_kind) pointer_kind(
      const ::ui::mojom::PointerKindMatcherPtr& input) {
    return input->pointer_kind;
  }

  static bool Read(::ui::mojom::PointerKindMatcher::DataView input, ::ui::mojom::PointerKindMatcherPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::PointerLocationMatcher::DataView,
                                         ::ui::mojom::PointerLocationMatcherPtr> {
  static bool IsNull(const ::ui::mojom::PointerLocationMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerLocationMatcherPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::PointerLocationMatcher::region)& region(
      const ::ui::mojom::PointerLocationMatcherPtr& input) {
    return input->region;
  }

  static bool Read(::ui::mojom::PointerLocationMatcher::DataView input, ::ui::mojom::PointerLocationMatcherPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::EventTypeMatcher::DataView,
                                         ::ui::mojom::EventTypeMatcherPtr> {
  static bool IsNull(const ::ui::mojom::EventTypeMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventTypeMatcherPtr* output) { output->reset(); }

  static decltype(::ui::mojom::EventTypeMatcher::type) type(
      const ::ui::mojom::EventTypeMatcherPtr& input) {
    return input->type;
  }

  static bool Read(::ui::mojom::EventTypeMatcher::DataView input, ::ui::mojom::EventTypeMatcherPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::EventFlagsMatcher::DataView,
                                         ::ui::mojom::EventFlagsMatcherPtr> {
  static bool IsNull(const ::ui::mojom::EventFlagsMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventFlagsMatcherPtr* output) { output->reset(); }

  static decltype(::ui::mojom::EventFlagsMatcher::flags) flags(
      const ::ui::mojom::EventFlagsMatcherPtr& input) {
    return input->flags;
  }

  static bool Read(::ui::mojom::EventFlagsMatcher::DataView input, ::ui::mojom::EventFlagsMatcherPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::EventMatcher::DataView,
                                         ::ui::mojom::EventMatcherPtr> {
  static bool IsNull(const ::ui::mojom::EventMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventMatcherPtr* output) { output->reset(); }

  static decltype(::ui::mojom::EventMatcher::accelerator_phase) accelerator_phase(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->accelerator_phase;
  }

  static const decltype(::ui::mojom::EventMatcher::type_matcher)& type_matcher(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->type_matcher;
  }

  static const decltype(::ui::mojom::EventMatcher::flags_matcher)& flags_matcher(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->flags_matcher;
  }

  static const decltype(::ui::mojom::EventMatcher::ignore_flags_matcher)& ignore_flags_matcher(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->ignore_flags_matcher;
  }

  static const decltype(::ui::mojom::EventMatcher::key_matcher)& key_matcher(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->key_matcher;
  }

  static const decltype(::ui::mojom::EventMatcher::pointer_kind_matcher)& pointer_kind_matcher(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->pointer_kind_matcher;
  }

  static const decltype(::ui::mojom::EventMatcher::pointer_location_matcher)& pointer_location_matcher(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->pointer_location_matcher;
  }

  static bool Read(::ui::mojom::EventMatcher::DataView input, ::ui::mojom::EventMatcherPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_H_