// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"
#include "third_party/blink/renderer/platform/mojo/revocable_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace media {
namespace mojom {
namespace blink {
class WatchTimeRecorder;
using WatchTimeRecorderPtr = mojo::InterfacePtr<WatchTimeRecorder>;
using RevocableWatchTimeRecorderPtr = ::blink::RevocableInterfacePtr<WatchTimeRecorder>;
using WatchTimeRecorderPtrInfo = mojo::InterfacePtrInfo<WatchTimeRecorder>;
using ThreadSafeWatchTimeRecorderPtr =
    mojo::ThreadSafeInterfacePtr<WatchTimeRecorder>;
using WatchTimeRecorderRequest = mojo::InterfaceRequest<WatchTimeRecorder>;
using WatchTimeRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<WatchTimeRecorder>;
using ThreadSafeWatchTimeRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WatchTimeRecorder>;
using WatchTimeRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WatchTimeRecorder>;
using WatchTimeRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WatchTimeRecorder>;

class PlaybackProperties;
using PlaybackPropertiesPtr = mojo::StructPtr<PlaybackProperties>;


class WatchTimeRecorderProxy;

template <typename ImplRefTraits>
class WatchTimeRecorderStub;

class WatchTimeRecorderRequestValidator;

class  WatchTimeRecorder
    : public WatchTimeRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = WatchTimeRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = WatchTimeRecorderStub<ImplRefTraits>;

  using RequestValidator_ = WatchTimeRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordWatchTimeMinVersion = 0,
    kFinalizeWatchTimeMinVersion = 0,
    kOnErrorMinVersion = 0,
    kSetAudioDecoderNameMinVersion = 0,
    kSetVideoDecoderNameMinVersion = 0,
    kSetAutoplayInitiatedMinVersion = 0,
    kUpdateUnderflowCountMinVersion = 0,
  };
  virtual ~WatchTimeRecorder() {}

  virtual void RecordWatchTime(::media::mojom::blink::WatchTimeKey key, WTF::TimeDelta watch_time) = 0;

  virtual void FinalizeWatchTime(const WTF::Vector<::media::mojom::blink::WatchTimeKey>& watch_time_keys) = 0;

  virtual void OnError(::media::mojom::blink::PipelineStatus status) = 0;

  virtual void SetAudioDecoderName(const WTF::String& name) = 0;

  virtual void SetVideoDecoderName(const WTF::String& name) = 0;

  virtual void SetAutoplayInitiated(bool value) = 0;

  virtual void UpdateUnderflowCount(int32_t count) = 0;
};
class  WatchTimeRecorderInterceptorForTesting : public WatchTimeRecorder {
  virtual WatchTimeRecorder* GetForwardingInterface() = 0;
  void RecordWatchTime(::media::mojom::blink::WatchTimeKey key, WTF::TimeDelta watch_time) override;
  void FinalizeWatchTime(const WTF::Vector<::media::mojom::blink::WatchTimeKey>& watch_time_keys) override;
  void OnError(::media::mojom::blink::PipelineStatus status) override;
  void SetAudioDecoderName(const WTF::String& name) override;
  void SetVideoDecoderName(const WTF::String& name) override;
  void SetAutoplayInitiated(bool value) override;
  void UpdateUnderflowCount(int32_t count) override;
};
class  WatchTimeRecorderAsyncWaiter {
 public:
  explicit WatchTimeRecorderAsyncWaiter(WatchTimeRecorder* proxy);
  ~WatchTimeRecorderAsyncWaiter();

 private:
  WatchTimeRecorder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WatchTimeRecorderAsyncWaiter);
};

class  WatchTimeRecorderProxy
    : public WatchTimeRecorder {
 public:
  explicit WatchTimeRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RecordWatchTime(::media::mojom::blink::WatchTimeKey key, WTF::TimeDelta watch_time) final;
  void FinalizeWatchTime(const WTF::Vector<::media::mojom::blink::WatchTimeKey>& watch_time_keys) final;
  void OnError(::media::mojom::blink::PipelineStatus status) final;
  void SetAudioDecoderName(const WTF::String& name) final;
  void SetVideoDecoderName(const WTF::String& name) final;
  void SetAutoplayInitiated(bool value) final;
  void UpdateUnderflowCount(int32_t count) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WatchTimeRecorderStubDispatch {
 public:
  static bool Accept(WatchTimeRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WatchTimeRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WatchTimeRecorder>>
class WatchTimeRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WatchTimeRecorderStub() {}
  ~WatchTimeRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WatchTimeRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WatchTimeRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WatchTimeRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  PlaybackProperties {
 public:
  using DataView = PlaybackPropertiesDataView;
  using Data_ = internal::PlaybackProperties_Data;

  template <typename... Args>
  static PlaybackPropertiesPtr New(Args&&... args) {
    return PlaybackPropertiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PlaybackPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<PlaybackPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PlaybackProperties>::Convert(*this);
  }


  PlaybackProperties();

  PlaybackProperties(
      ::media::mojom::blink::AudioCodec audio_codec,
      ::media::mojom::blink::VideoCodec video_codec,
      bool has_audio,
      bool has_video,
      bool is_background,
      bool is_muted,
      bool is_mse,
      bool is_eme,
      bool is_embedded_media_experience,
      const ::blink::WebSize& natural_size);

  ~PlaybackProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PlaybackPropertiesPtr>
  PlaybackPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PlaybackProperties>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PlaybackProperties::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PlaybackProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PlaybackProperties_UnserializedMessageContext<
            UserType, PlaybackProperties::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PlaybackProperties::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PlaybackProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PlaybackProperties_UnserializedMessageContext<
            UserType, PlaybackProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PlaybackProperties::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  ::media::mojom::blink::AudioCodec audio_codec;
  ::media::mojom::blink::VideoCodec video_codec;
  bool has_audio;
  bool has_video;
  bool is_background;
  bool is_muted;
  bool is_mse;
  bool is_eme;
  bool is_embedded_media_experience;
  ::blink::WebSize natural_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PlaybackPropertiesPtr PlaybackProperties::Clone() const {
  return New(
      mojo::Clone(audio_codec),
      mojo::Clone(video_codec),
      mojo::Clone(has_audio),
      mojo::Clone(has_video),
      mojo::Clone(is_background),
      mojo::Clone(is_muted),
      mojo::Clone(is_mse),
      mojo::Clone(is_eme),
      mojo::Clone(is_embedded_media_experience),
      mojo::Clone(natural_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PlaybackProperties>::value>::type*>
bool PlaybackProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->audio_codec, other_struct.audio_codec))
    return false;
  if (!mojo::Equals(this->video_codec, other_struct.video_codec))
    return false;
  if (!mojo::Equals(this->has_audio, other_struct.has_audio))
    return false;
  if (!mojo::Equals(this->has_video, other_struct.has_video))
    return false;
  if (!mojo::Equals(this->is_background, other_struct.is_background))
    return false;
  if (!mojo::Equals(this->is_muted, other_struct.is_muted))
    return false;
  if (!mojo::Equals(this->is_mse, other_struct.is_mse))
    return false;
  if (!mojo::Equals(this->is_eme, other_struct.is_eme))
    return false;
  if (!mojo::Equals(this->is_embedded_media_experience, other_struct.is_embedded_media_experience))
    return false;
  if (!mojo::Equals(this->natural_size, other_struct.natural_size))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::blink::PlaybackProperties::DataView,
                                         ::media::mojom::blink::PlaybackPropertiesPtr> {
  static bool IsNull(const ::media::mojom::blink::PlaybackPropertiesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::PlaybackPropertiesPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::PlaybackProperties::audio_codec) audio_codec(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->audio_codec;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::video_codec) video_codec(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->video_codec;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::has_audio) has_audio(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->has_audio;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::has_video) has_video(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->has_video;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::is_background) is_background(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->is_background;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::is_muted) is_muted(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->is_muted;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::is_mse) is_mse(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->is_mse;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::is_eme) is_eme(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->is_eme;
  }

  static decltype(::media::mojom::blink::PlaybackProperties::is_embedded_media_experience) is_embedded_media_experience(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->is_embedded_media_experience;
  }

  static const decltype(::media::mojom::blink::PlaybackProperties::natural_size)& natural_size(
      const ::media::mojom::blink::PlaybackPropertiesPtr& input) {
    return input->natural_size;
  }

  static bool Read(::media::mojom::blink::PlaybackProperties::DataView input, ::media::mojom::blink::PlaybackPropertiesPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_H_