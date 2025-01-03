// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_H_
#define CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_H_

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
#include "chrome/browser/media/media_engagement_score_details.mojom-shared.h"
#include "url/mojom/url.mojom.h"
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


namespace media {
namespace mojom {
class MediaEngagementScoreDetailsProvider;
using MediaEngagementScoreDetailsProviderPtr = mojo::InterfacePtr<MediaEngagementScoreDetailsProvider>;
using MediaEngagementScoreDetailsProviderPtrInfo = mojo::InterfacePtrInfo<MediaEngagementScoreDetailsProvider>;
using ThreadSafeMediaEngagementScoreDetailsProviderPtr =
    mojo::ThreadSafeInterfacePtr<MediaEngagementScoreDetailsProvider>;
using MediaEngagementScoreDetailsProviderRequest = mojo::InterfaceRequest<MediaEngagementScoreDetailsProvider>;
using MediaEngagementScoreDetailsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaEngagementScoreDetailsProvider>;
using ThreadSafeMediaEngagementScoreDetailsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaEngagementScoreDetailsProvider>;
using MediaEngagementScoreDetailsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaEngagementScoreDetailsProvider>;
using MediaEngagementScoreDetailsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaEngagementScoreDetailsProvider>;

class MediaEngagementScoreDetails;
using MediaEngagementScoreDetailsPtr = mojo::StructPtr<MediaEngagementScoreDetails>;

class MediaEngagementConfig;
using MediaEngagementConfigPtr = mojo::StructPtr<MediaEngagementConfig>;


class MediaEngagementScoreDetailsProviderProxy;

template <typename ImplRefTraits>
class MediaEngagementScoreDetailsProviderStub;

class MediaEngagementScoreDetailsProviderRequestValidator;
class MediaEngagementScoreDetailsProviderResponseValidator;

class  MediaEngagementScoreDetailsProvider
    : public MediaEngagementScoreDetailsProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaEngagementScoreDetailsProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaEngagementScoreDetailsProviderStub<ImplRefTraits>;

  using RequestValidator_ = MediaEngagementScoreDetailsProviderRequestValidator;
  using ResponseValidator_ = MediaEngagementScoreDetailsProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetMediaEngagementScoreDetailsMinVersion = 0,
    kGetMediaEngagementConfigMinVersion = 0,
  };
  virtual ~MediaEngagementScoreDetailsProvider() {}


  using GetMediaEngagementScoreDetailsCallback = base::OnceCallback<void(std::vector<MediaEngagementScoreDetailsPtr>)>;
  virtual void GetMediaEngagementScoreDetails(GetMediaEngagementScoreDetailsCallback callback) = 0;


  using GetMediaEngagementConfigCallback = base::OnceCallback<void(MediaEngagementConfigPtr)>;
  virtual void GetMediaEngagementConfig(GetMediaEngagementConfigCallback callback) = 0;
};
class  MediaEngagementScoreDetailsProviderInterceptorForTesting : public MediaEngagementScoreDetailsProvider {
  virtual MediaEngagementScoreDetailsProvider* GetForwardingInterface() = 0;
  void GetMediaEngagementScoreDetails(GetMediaEngagementScoreDetailsCallback callback) override;
  void GetMediaEngagementConfig(GetMediaEngagementConfigCallback callback) override;
};
class  MediaEngagementScoreDetailsProviderAsyncWaiter {
 public:
  explicit MediaEngagementScoreDetailsProviderAsyncWaiter(MediaEngagementScoreDetailsProvider* proxy);
  ~MediaEngagementScoreDetailsProviderAsyncWaiter();
  void GetMediaEngagementScoreDetails(
      std::vector<MediaEngagementScoreDetailsPtr>* out_info);
  void GetMediaEngagementConfig(
      MediaEngagementConfigPtr* out_config);

 private:
  MediaEngagementScoreDetailsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaEngagementScoreDetailsProviderAsyncWaiter);
};

class  MediaEngagementScoreDetailsProviderProxy
    : public MediaEngagementScoreDetailsProvider {
 public:
  explicit MediaEngagementScoreDetailsProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetMediaEngagementScoreDetails(GetMediaEngagementScoreDetailsCallback callback) final;
  void GetMediaEngagementConfig(GetMediaEngagementConfigCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaEngagementScoreDetailsProviderStubDispatch {
 public:
  static bool Accept(MediaEngagementScoreDetailsProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaEngagementScoreDetailsProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaEngagementScoreDetailsProvider>>
class MediaEngagementScoreDetailsProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaEngagementScoreDetailsProviderStub() {}
  ~MediaEngagementScoreDetailsProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaEngagementScoreDetailsProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaEngagementScoreDetailsProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaEngagementScoreDetailsProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaEngagementScoreDetailsProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  MediaEngagementScoreDetails {
 public:
  using DataView = MediaEngagementScoreDetailsDataView;
  using Data_ = internal::MediaEngagementScoreDetails_Data;

  template <typename... Args>
  static MediaEngagementScoreDetailsPtr New(Args&&... args) {
    return MediaEngagementScoreDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaEngagementScoreDetailsPtr From(const U& u) {
    return mojo::TypeConverter<MediaEngagementScoreDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaEngagementScoreDetails>::Convert(*this);
  }


  MediaEngagementScoreDetails();

  MediaEngagementScoreDetails(
      const GURL& origin,
      double total_score,
      int32_t visits,
      int32_t media_playbacks,
      double last_media_playback_time,
      bool is_high,
      int32_t audible_playbacks,
      int32_t significant_playbacks,
      int32_t high_score_changes);

  ~MediaEngagementScoreDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaEngagementScoreDetailsPtr>
  MediaEngagementScoreDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaEngagementScoreDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaEngagementScoreDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaEngagementScoreDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaEngagementScoreDetails_UnserializedMessageContext<
            UserType, MediaEngagementScoreDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaEngagementScoreDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaEngagementScoreDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaEngagementScoreDetails_UnserializedMessageContext<
            UserType, MediaEngagementScoreDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaEngagementScoreDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  GURL origin;
  double total_score;
  int32_t visits;
  int32_t media_playbacks;
  double last_media_playback_time;
  bool is_high;
  int32_t audible_playbacks;
  int32_t significant_playbacks;
  int32_t high_score_changes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  MediaEngagementConfig {
 public:
  using DataView = MediaEngagementConfigDataView;
  using Data_ = internal::MediaEngagementConfig_Data;

  template <typename... Args>
  static MediaEngagementConfigPtr New(Args&&... args) {
    return MediaEngagementConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaEngagementConfigPtr From(const U& u) {
    return mojo::TypeConverter<MediaEngagementConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaEngagementConfig>::Convert(*this);
  }


  MediaEngagementConfig();

  MediaEngagementConfig(
      int32_t score_min_visits,
      double high_score_lower_threshold,
      double high_score_upper_threshold,
      bool feature_record_data,
      bool feature_bypass_autoplay,
      bool feature_preload_data,
      const std::string& autoplay_policy,
      const std::string& preload_version);

  ~MediaEngagementConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaEngagementConfigPtr>
  MediaEngagementConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaEngagementConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaEngagementConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaEngagementConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaEngagementConfig_UnserializedMessageContext<
            UserType, MediaEngagementConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaEngagementConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return MediaEngagementConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaEngagementConfig_UnserializedMessageContext<
            UserType, MediaEngagementConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaEngagementConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t score_min_visits;
  double high_score_lower_threshold;
  double high_score_upper_threshold;
  bool feature_record_data;
  bool feature_bypass_autoplay;
  bool feature_preload_data;
  std::string autoplay_policy;
  std::string preload_version;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
MediaEngagementScoreDetailsPtr MediaEngagementScoreDetails::Clone() const {
  return New(
      mojo::Clone(origin),
      mojo::Clone(total_score),
      mojo::Clone(visits),
      mojo::Clone(media_playbacks),
      mojo::Clone(last_media_playback_time),
      mojo::Clone(is_high),
      mojo::Clone(audible_playbacks),
      mojo::Clone(significant_playbacks),
      mojo::Clone(high_score_changes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaEngagementScoreDetails>::value>::type*>
bool MediaEngagementScoreDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->total_score, other_struct.total_score))
    return false;
  if (!mojo::Equals(this->visits, other_struct.visits))
    return false;
  if (!mojo::Equals(this->media_playbacks, other_struct.media_playbacks))
    return false;
  if (!mojo::Equals(this->last_media_playback_time, other_struct.last_media_playback_time))
    return false;
  if (!mojo::Equals(this->is_high, other_struct.is_high))
    return false;
  if (!mojo::Equals(this->audible_playbacks, other_struct.audible_playbacks))
    return false;
  if (!mojo::Equals(this->significant_playbacks, other_struct.significant_playbacks))
    return false;
  if (!mojo::Equals(this->high_score_changes, other_struct.high_score_changes))
    return false;
  return true;
}
template <typename StructPtrType>
MediaEngagementConfigPtr MediaEngagementConfig::Clone() const {
  return New(
      mojo::Clone(score_min_visits),
      mojo::Clone(high_score_lower_threshold),
      mojo::Clone(high_score_upper_threshold),
      mojo::Clone(feature_record_data),
      mojo::Clone(feature_bypass_autoplay),
      mojo::Clone(feature_preload_data),
      mojo::Clone(autoplay_policy),
      mojo::Clone(preload_version)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaEngagementConfig>::value>::type*>
bool MediaEngagementConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->score_min_visits, other_struct.score_min_visits))
    return false;
  if (!mojo::Equals(this->high_score_lower_threshold, other_struct.high_score_lower_threshold))
    return false;
  if (!mojo::Equals(this->high_score_upper_threshold, other_struct.high_score_upper_threshold))
    return false;
  if (!mojo::Equals(this->feature_record_data, other_struct.feature_record_data))
    return false;
  if (!mojo::Equals(this->feature_bypass_autoplay, other_struct.feature_bypass_autoplay))
    return false;
  if (!mojo::Equals(this->feature_preload_data, other_struct.feature_preload_data))
    return false;
  if (!mojo::Equals(this->autoplay_policy, other_struct.autoplay_policy))
    return false;
  if (!mojo::Equals(this->preload_version, other_struct.preload_version))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::MediaEngagementScoreDetails::DataView,
                                         ::media::mojom::MediaEngagementScoreDetailsPtr> {
  static bool IsNull(const ::media::mojom::MediaEngagementScoreDetailsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::MediaEngagementScoreDetailsPtr* output) { output->reset(); }

  static const decltype(::media::mojom::MediaEngagementScoreDetails::origin)& origin(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->origin;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::total_score) total_score(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->total_score;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::visits) visits(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->visits;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::media_playbacks) media_playbacks(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->media_playbacks;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::last_media_playback_time) last_media_playback_time(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->last_media_playback_time;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::is_high) is_high(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->is_high;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::audible_playbacks) audible_playbacks(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->audible_playbacks;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::significant_playbacks) significant_playbacks(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->significant_playbacks;
  }

  static decltype(::media::mojom::MediaEngagementScoreDetails::high_score_changes) high_score_changes(
      const ::media::mojom::MediaEngagementScoreDetailsPtr& input) {
    return input->high_score_changes;
  }

  static bool Read(::media::mojom::MediaEngagementScoreDetails::DataView input, ::media::mojom::MediaEngagementScoreDetailsPtr* output);
};


template <>
struct  StructTraits<::media::mojom::MediaEngagementConfig::DataView,
                                         ::media::mojom::MediaEngagementConfigPtr> {
  static bool IsNull(const ::media::mojom::MediaEngagementConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::MediaEngagementConfigPtr* output) { output->reset(); }

  static decltype(::media::mojom::MediaEngagementConfig::score_min_visits) score_min_visits(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->score_min_visits;
  }

  static decltype(::media::mojom::MediaEngagementConfig::high_score_lower_threshold) high_score_lower_threshold(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->high_score_lower_threshold;
  }

  static decltype(::media::mojom::MediaEngagementConfig::high_score_upper_threshold) high_score_upper_threshold(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->high_score_upper_threshold;
  }

  static decltype(::media::mojom::MediaEngagementConfig::feature_record_data) feature_record_data(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->feature_record_data;
  }

  static decltype(::media::mojom::MediaEngagementConfig::feature_bypass_autoplay) feature_bypass_autoplay(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->feature_bypass_autoplay;
  }

  static decltype(::media::mojom::MediaEngagementConfig::feature_preload_data) feature_preload_data(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->feature_preload_data;
  }

  static const decltype(::media::mojom::MediaEngagementConfig::autoplay_policy)& autoplay_policy(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->autoplay_policy;
  }

  static const decltype(::media::mojom::MediaEngagementConfig::preload_version)& preload_version(
      const ::media::mojom::MediaEngagementConfigPtr& input) {
    return input->preload_version;
  }

  static bool Read(::media::mojom::MediaEngagementConfig::DataView input, ::media::mojom::MediaEngagementConfigPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_MEDIA_MEDIA_ENGAGEMENT_SCORE_DETAILS_MOJOM_H_