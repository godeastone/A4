// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_H_
#define CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_H_

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
#include "chrome/common/media_router/mojo/media_status.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#include "chrome/common/media_router/media_status.h"


namespace media_router {
namespace mojom {
class MediaStatusObserver;
using MediaStatusObserverPtr = mojo::InterfacePtr<MediaStatusObserver>;
using MediaStatusObserverPtrInfo = mojo::InterfacePtrInfo<MediaStatusObserver>;
using ThreadSafeMediaStatusObserverPtr =
    mojo::ThreadSafeInterfacePtr<MediaStatusObserver>;
using MediaStatusObserverRequest = mojo::InterfaceRequest<MediaStatusObserver>;
using MediaStatusObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStatusObserver>;
using ThreadSafeMediaStatusObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStatusObserver>;
using MediaStatusObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStatusObserver>;
using MediaStatusObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStatusObserver>;

class MediaStatus;
using MediaStatusPtr = mojo::StructPtr<MediaStatus>;

class HangoutsMediaStatusExtraData;
using HangoutsMediaStatusExtraDataPtr = mojo::InlinedStructPtr<HangoutsMediaStatusExtraData>;


class MediaStatusObserverProxy;

template <typename ImplRefTraits>
class MediaStatusObserverStub;

class MediaStatusObserverRequestValidator;

class  MediaStatusObserver
    : public MediaStatusObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaStatusObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStatusObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaStatusObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnMediaStatusUpdatedMinVersion = 0,
  };
  virtual ~MediaStatusObserver() {}

  virtual void OnMediaStatusUpdated(const media_router::MediaStatus& status) = 0;
};
class  MediaStatusObserverInterceptorForTesting : public MediaStatusObserver {
  virtual MediaStatusObserver* GetForwardingInterface() = 0;
  void OnMediaStatusUpdated(const media_router::MediaStatus& status) override;
};
class  MediaStatusObserverAsyncWaiter {
 public:
  explicit MediaStatusObserverAsyncWaiter(MediaStatusObserver* proxy);
  ~MediaStatusObserverAsyncWaiter();

 private:
  MediaStatusObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStatusObserverAsyncWaiter);
};

class  MediaStatusObserverProxy
    : public MediaStatusObserver {
 public:
  explicit MediaStatusObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnMediaStatusUpdated(const media_router::MediaStatus& status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaStatusObserverStubDispatch {
 public:
  static bool Accept(MediaStatusObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStatusObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStatusObserver>>
class MediaStatusObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStatusObserverStub() {}
  ~MediaStatusObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStatusObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStatusObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaStatusObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



class  HangoutsMediaStatusExtraData {
 public:
  using DataView = HangoutsMediaStatusExtraDataDataView;
  using Data_ = internal::HangoutsMediaStatusExtraData_Data;

  template <typename... Args>
  static HangoutsMediaStatusExtraDataPtr New(Args&&... args) {
    return HangoutsMediaStatusExtraDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HangoutsMediaStatusExtraDataPtr From(const U& u) {
    return mojo::TypeConverter<HangoutsMediaStatusExtraDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HangoutsMediaStatusExtraData>::Convert(*this);
  }


  HangoutsMediaStatusExtraData();

  explicit HangoutsMediaStatusExtraData(
      bool local_present);

  ~HangoutsMediaStatusExtraData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HangoutsMediaStatusExtraDataPtr>
  HangoutsMediaStatusExtraDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HangoutsMediaStatusExtraData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HangoutsMediaStatusExtraData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HangoutsMediaStatusExtraData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HangoutsMediaStatusExtraData_UnserializedMessageContext<
            UserType, HangoutsMediaStatusExtraData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HangoutsMediaStatusExtraData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HangoutsMediaStatusExtraData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HangoutsMediaStatusExtraData_UnserializedMessageContext<
            UserType, HangoutsMediaStatusExtraData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HangoutsMediaStatusExtraData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool local_present;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class  MediaStatus {
 public:
  using DataView = MediaStatusDataView;
  using Data_ = internal::MediaStatus_Data;using PlayState = MediaStatus_PlayState;

  template <typename... Args>
  static MediaStatusPtr New(Args&&... args) {
    return MediaStatusPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaStatusPtr From(const U& u) {
    return mojo::TypeConverter<MediaStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaStatus>::Convert(*this);
  }


  MediaStatus();

  MediaStatus(
      const std::string& title,
      bool can_play_pause,
      bool can_mute,
      bool can_set_volume,
      bool can_seek,
      MediaStatus::PlayState play_state,
      bool is_muted,
      float volume,
      base::TimeDelta duration,
      base::TimeDelta current_time,
      HangoutsMediaStatusExtraDataPtr hangouts_extra_data);

  ~MediaStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaStatusPtr>
  MediaStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaStatus>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaStatus::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaStatus::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaStatus_UnserializedMessageContext<
            UserType, MediaStatus::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaStatus::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaStatus::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaStatus_UnserializedMessageContext<
            UserType, MediaStatus::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaStatus::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string title;
  bool can_play_pause;
  bool can_mute;
  bool can_set_volume;
  bool can_seek;
  MediaStatus::PlayState play_state;
  bool is_muted;
  float volume;
  base::TimeDelta duration;
  base::TimeDelta current_time;
  HangoutsMediaStatusExtraDataPtr hangouts_extra_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaStatus);
};


template <typename StructPtrType>
MediaStatusPtr MediaStatus::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(can_play_pause),
      mojo::Clone(can_mute),
      mojo::Clone(can_set_volume),
      mojo::Clone(can_seek),
      mojo::Clone(play_state),
      mojo::Clone(is_muted),
      mojo::Clone(volume),
      mojo::Clone(duration),
      mojo::Clone(current_time),
      mojo::Clone(hangouts_extra_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaStatus>::value>::type*>
bool MediaStatus::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->can_play_pause, other_struct.can_play_pause))
    return false;
  if (!mojo::Equals(this->can_mute, other_struct.can_mute))
    return false;
  if (!mojo::Equals(this->can_set_volume, other_struct.can_set_volume))
    return false;
  if (!mojo::Equals(this->can_seek, other_struct.can_seek))
    return false;
  if (!mojo::Equals(this->play_state, other_struct.play_state))
    return false;
  if (!mojo::Equals(this->is_muted, other_struct.is_muted))
    return false;
  if (!mojo::Equals(this->volume, other_struct.volume))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->current_time, other_struct.current_time))
    return false;
  if (!mojo::Equals(this->hangouts_extra_data, other_struct.hangouts_extra_data))
    return false;
  return true;
}
template <typename StructPtrType>
HangoutsMediaStatusExtraDataPtr HangoutsMediaStatusExtraData::Clone() const {
  return New(
      mojo::Clone(local_present)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HangoutsMediaStatusExtraData>::value>::type*>
bool HangoutsMediaStatusExtraData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->local_present, other_struct.local_present))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media_router

namespace mojo {


template <>
struct  StructTraits<::media_router::mojom::MediaStatus::DataView,
                                         ::media_router::mojom::MediaStatusPtr> {
  static bool IsNull(const ::media_router::mojom::MediaStatusPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::MediaStatusPtr* output) { output->reset(); }

  static const decltype(::media_router::mojom::MediaStatus::title)& title(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->title;
  }

  static decltype(::media_router::mojom::MediaStatus::can_play_pause) can_play_pause(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_play_pause;
  }

  static decltype(::media_router::mojom::MediaStatus::can_mute) can_mute(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_mute;
  }

  static decltype(::media_router::mojom::MediaStatus::can_set_volume) can_set_volume(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_set_volume;
  }

  static decltype(::media_router::mojom::MediaStatus::can_seek) can_seek(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->can_seek;
  }

  static decltype(::media_router::mojom::MediaStatus::play_state) play_state(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->play_state;
  }

  static decltype(::media_router::mojom::MediaStatus::is_muted) is_muted(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->is_muted;
  }

  static decltype(::media_router::mojom::MediaStatus::volume) volume(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->volume;
  }

  static const decltype(::media_router::mojom::MediaStatus::duration)& duration(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->duration;
  }

  static const decltype(::media_router::mojom::MediaStatus::current_time)& current_time(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->current_time;
  }

  static const decltype(::media_router::mojom::MediaStatus::hangouts_extra_data)& hangouts_extra_data(
      const ::media_router::mojom::MediaStatusPtr& input) {
    return input->hangouts_extra_data;
  }

  static bool Read(::media_router::mojom::MediaStatus::DataView input, ::media_router::mojom::MediaStatusPtr* output);
};


template <>
struct  StructTraits<::media_router::mojom::HangoutsMediaStatusExtraData::DataView,
                                         ::media_router::mojom::HangoutsMediaStatusExtraDataPtr> {
  static bool IsNull(const ::media_router::mojom::HangoutsMediaStatusExtraDataPtr& input) { return !input; }
  static void SetToNull(::media_router::mojom::HangoutsMediaStatusExtraDataPtr* output) { output->reset(); }

  static decltype(::media_router::mojom::HangoutsMediaStatusExtraData::local_present) local_present(
      const ::media_router::mojom::HangoutsMediaStatusExtraDataPtr& input) {
    return input->local_present;
  }

  static bool Read(::media_router::mojom::HangoutsMediaStatusExtraData::DataView input, ::media_router::mojom::HangoutsMediaStatusExtraDataPtr* output);
};

}  // namespace mojo

#endif  // CHROME_COMMON_MEDIA_ROUTER_MOJO_MEDIA_STATUS_MOJOM_H_