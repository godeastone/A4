// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_H_

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
#include "ui/latency/mojo/latency_info.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#include "ipc/ipc_message_utils.h"
#include "ui/latency/latency_info.h"


namespace ui {
namespace mojom {
class LatencyComponentId;
using LatencyComponentIdPtr = mojo::InlinedStructPtr<LatencyComponentId>;

class LatencyComponent;
using LatencyComponentPtr = mojo::StructPtr<LatencyComponent>;

class LatencyComponentPair;
using LatencyComponentPairPtr = mojo::StructPtr<LatencyComponentPair>;

class LatencyInfo;
using LatencyInfoPtr = mojo::StructPtr<LatencyInfo>;



class  LatencyComponentId {
 public:
  using DataView = LatencyComponentIdDataView;
  using Data_ = internal::LatencyComponentId_Data;

  template <typename... Args>
  static LatencyComponentIdPtr New(Args&&... args) {
    return LatencyComponentIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LatencyComponentIdPtr From(const U& u) {
    return mojo::TypeConverter<LatencyComponentIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyComponentId>::Convert(*this);
  }


  LatencyComponentId();

  LatencyComponentId(
      LatencyComponentType type,
      int64_t id);

  ~LatencyComponentId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyComponentIdPtr>
  LatencyComponentIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyComponentId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LatencyComponentId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LatencyComponentId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LatencyComponentId_UnserializedMessageContext<
            UserType, LatencyComponentId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LatencyComponentId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LatencyComponentId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LatencyComponentId_UnserializedMessageContext<
            UserType, LatencyComponentId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LatencyComponentId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  LatencyComponentType type;
  int64_t id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  LatencyComponent {
 public:
  using DataView = LatencyComponentDataView;
  using Data_ = internal::LatencyComponent_Data;

  template <typename... Args>
  static LatencyComponentPtr New(Args&&... args) {
    return LatencyComponentPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LatencyComponentPtr From(const U& u) {
    return mojo::TypeConverter<LatencyComponentPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyComponent>::Convert(*this);
  }


  LatencyComponent();

  LatencyComponent(
      base::TimeTicks event_time,
      uint32_t event_count,
      base::TimeTicks first_event_time,
      base::TimeTicks last_event_time);

  ~LatencyComponent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyComponentPtr>
  LatencyComponentPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyComponent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LatencyComponent::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LatencyComponent::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LatencyComponent_UnserializedMessageContext<
            UserType, LatencyComponent::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LatencyComponent::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LatencyComponent::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LatencyComponent_UnserializedMessageContext<
            UserType, LatencyComponent::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LatencyComponent::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::TimeTicks event_time;
  uint32_t event_count;
  base::TimeTicks first_event_time;
  base::TimeTicks last_event_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  LatencyComponentPair {
 public:
  using DataView = LatencyComponentPairDataView;
  using Data_ = internal::LatencyComponentPair_Data;

  template <typename... Args>
  static LatencyComponentPairPtr New(Args&&... args) {
    return LatencyComponentPairPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LatencyComponentPairPtr From(const U& u) {
    return mojo::TypeConverter<LatencyComponentPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyComponentPair>::Convert(*this);
  }


  LatencyComponentPair();

  LatencyComponentPair(
      const std::pair<ui::LatencyComponentType, int64_t>& key,
      const ui::LatencyInfo::LatencyComponent& value);

  ~LatencyComponentPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyComponentPairPtr>
  LatencyComponentPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyComponentPair>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LatencyComponentPair::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LatencyComponentPair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LatencyComponentPair_UnserializedMessageContext<
            UserType, LatencyComponentPair::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LatencyComponentPair::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LatencyComponentPair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LatencyComponentPair_UnserializedMessageContext<
            UserType, LatencyComponentPair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LatencyComponentPair::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::pair<ui::LatencyComponentType, int64_t> key;
  ui::LatencyInfo::LatencyComponent value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  LatencyInfo {
 public:
  using DataView = LatencyInfoDataView;
  using Data_ = internal::LatencyInfo_Data;

  template <typename... Args>
  static LatencyInfoPtr New(Args&&... args) {
    return LatencyInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LatencyInfoPtr From(const U& u) {
    return mojo::TypeConverter<LatencyInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyInfo>::Convert(*this);
  }


  LatencyInfo();

  LatencyInfo(
      const std::string& trace_name,
      std::vector<LatencyComponentPairPtr> latency_components,
      int64_t trace_id,
      const base::flat_map<int64_t, int64_t>& snapshots,
      int64_t ukm_source_id,
      bool coalesced,
      bool began,
      bool terminated,
      SourceEventType source_event_type);

  ~LatencyInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyInfoPtr>
  LatencyInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LatencyInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LatencyInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LatencyInfo_UnserializedMessageContext<
            UserType, LatencyInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LatencyInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LatencyInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LatencyInfo_UnserializedMessageContext<
            UserType, LatencyInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LatencyInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string trace_name;
  std::vector<LatencyComponentPairPtr> latency_components;
  int64_t trace_id;
  base::flat_map<int64_t, int64_t> snapshots;
  int64_t ukm_source_id;
  bool coalesced;
  bool began;
  bool terminated;
  SourceEventType source_event_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(LatencyInfo);
};

template <typename StructPtrType>
LatencyComponentIdPtr LatencyComponentId::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyComponentId>::value>::type*>
bool LatencyComponentId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
LatencyComponentPtr LatencyComponent::Clone() const {
  return New(
      mojo::Clone(event_time),
      mojo::Clone(event_count),
      mojo::Clone(first_event_time),
      mojo::Clone(last_event_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyComponent>::value>::type*>
bool LatencyComponent::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->event_time, other_struct.event_time))
    return false;
  if (!mojo::Equals(this->event_count, other_struct.event_count))
    return false;
  if (!mojo::Equals(this->first_event_time, other_struct.first_event_time))
    return false;
  if (!mojo::Equals(this->last_event_time, other_struct.last_event_time))
    return false;
  return true;
}
template <typename StructPtrType>
LatencyComponentPairPtr LatencyComponentPair::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyComponentPair>::value>::type*>
bool LatencyComponentPair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
LatencyInfoPtr LatencyInfo::Clone() const {
  return New(
      mojo::Clone(trace_name),
      mojo::Clone(latency_components),
      mojo::Clone(trace_id),
      mojo::Clone(snapshots),
      mojo::Clone(ukm_source_id),
      mojo::Clone(coalesced),
      mojo::Clone(began),
      mojo::Clone(terminated),
      mojo::Clone(source_event_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyInfo>::value>::type*>
bool LatencyInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->trace_name, other_struct.trace_name))
    return false;
  if (!mojo::Equals(this->latency_components, other_struct.latency_components))
    return false;
  if (!mojo::Equals(this->trace_id, other_struct.trace_id))
    return false;
  if (!mojo::Equals(this->snapshots, other_struct.snapshots))
    return false;
  if (!mojo::Equals(this->ukm_source_id, other_struct.ukm_source_id))
    return false;
  if (!mojo::Equals(this->coalesced, other_struct.coalesced))
    return false;
  if (!mojo::Equals(this->began, other_struct.began))
    return false;
  if (!mojo::Equals(this->terminated, other_struct.terminated))
    return false;
  if (!mojo::Equals(this->source_event_type, other_struct.source_event_type))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::LatencyComponentId::DataView,
                                         ::ui::mojom::LatencyComponentIdPtr> {
  static bool IsNull(const ::ui::mojom::LatencyComponentIdPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyComponentIdPtr* output) { output->reset(); }

  static decltype(::ui::mojom::LatencyComponentId::type) type(
      const ::ui::mojom::LatencyComponentIdPtr& input) {
    return input->type;
  }

  static decltype(::ui::mojom::LatencyComponentId::id) id(
      const ::ui::mojom::LatencyComponentIdPtr& input) {
    return input->id;
  }

  static bool Read(::ui::mojom::LatencyComponentId::DataView input, ::ui::mojom::LatencyComponentIdPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::LatencyComponent::DataView,
                                         ::ui::mojom::LatencyComponentPtr> {
  static bool IsNull(const ::ui::mojom::LatencyComponentPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyComponentPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::LatencyComponent::event_time)& event_time(
      const ::ui::mojom::LatencyComponentPtr& input) {
    return input->event_time;
  }

  static decltype(::ui::mojom::LatencyComponent::event_count) event_count(
      const ::ui::mojom::LatencyComponentPtr& input) {
    return input->event_count;
  }

  static const decltype(::ui::mojom::LatencyComponent::first_event_time)& first_event_time(
      const ::ui::mojom::LatencyComponentPtr& input) {
    return input->first_event_time;
  }

  static const decltype(::ui::mojom::LatencyComponent::last_event_time)& last_event_time(
      const ::ui::mojom::LatencyComponentPtr& input) {
    return input->last_event_time;
  }

  static bool Read(::ui::mojom::LatencyComponent::DataView input, ::ui::mojom::LatencyComponentPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::LatencyComponentPair::DataView,
                                         ::ui::mojom::LatencyComponentPairPtr> {
  static bool IsNull(const ::ui::mojom::LatencyComponentPairPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyComponentPairPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::LatencyComponentPair::key)& key(
      const ::ui::mojom::LatencyComponentPairPtr& input) {
    return input->key;
  }

  static const decltype(::ui::mojom::LatencyComponentPair::value)& value(
      const ::ui::mojom::LatencyComponentPairPtr& input) {
    return input->value;
  }

  static bool Read(::ui::mojom::LatencyComponentPair::DataView input, ::ui::mojom::LatencyComponentPairPtr* output);
};


template <>
struct  StructTraits<::ui::mojom::LatencyInfo::DataView,
                                         ::ui::mojom::LatencyInfoPtr> {
  static bool IsNull(const ::ui::mojom::LatencyInfoPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyInfoPtr* output) { output->reset(); }

  static const decltype(::ui::mojom::LatencyInfo::trace_name)& trace_name(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->trace_name;
  }

  static const decltype(::ui::mojom::LatencyInfo::latency_components)& latency_components(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->latency_components;
  }

  static decltype(::ui::mojom::LatencyInfo::trace_id) trace_id(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->trace_id;
  }

  static const decltype(::ui::mojom::LatencyInfo::snapshots)& snapshots(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->snapshots;
  }

  static decltype(::ui::mojom::LatencyInfo::ukm_source_id) ukm_source_id(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->ukm_source_id;
  }

  static decltype(::ui::mojom::LatencyInfo::coalesced) coalesced(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->coalesced;
  }

  static decltype(::ui::mojom::LatencyInfo::began) began(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->began;
  }

  static decltype(::ui::mojom::LatencyInfo::terminated) terminated(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->terminated;
  }

  static decltype(::ui::mojom::LatencyInfo::source_event_type) source_event_type(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->source_event_type;
  }

  static bool Read(::ui::mojom::LatencyInfo::DataView input, ::ui::mojom::LatencyInfoPtr* output);
};

}  // namespace mojo

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_H_