// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/platform/modules/mediastream/media_devices.mojom-shared.h"
#include "media/capture/mojom/video_capture_types.mojom-blink.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"

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


namespace WTF {
struct blink_mojom_internal_MediaDeviceType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::MediaDeviceType& value) {
    using utype = std::underlying_type<::blink::mojom::MediaDeviceType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::MediaDeviceType& left, const ::blink::mojom::MediaDeviceType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::MediaDeviceType> {
  using Hash = blink_mojom_internal_MediaDeviceType_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::MediaDeviceType>
    : public GenericHashTraits<::blink::mojom::MediaDeviceType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::MediaDeviceType& value) {
    return value == static_cast<::blink::mojom::MediaDeviceType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::MediaDeviceType& slot, bool) {
    slot = static_cast<::blink::mojom::MediaDeviceType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::MediaDeviceType& value) {
    return value == static_cast<::blink::mojom::MediaDeviceType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_FacingMode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FacingMode& value) {
    using utype = std::underlying_type<::blink::mojom::FacingMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FacingMode& left, const ::blink::mojom::FacingMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::blink::mojom::FacingMode> {
  using Hash = blink_mojom_internal_FacingMode_DataHashFn;
};

template <>
struct HashTraits<::blink::mojom::FacingMode>
    : public GenericHashTraits<::blink::mojom::FacingMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FacingMode& value) {
    return value == static_cast<::blink::mojom::FacingMode>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FacingMode& slot, bool) {
    slot = static_cast<::blink::mojom::FacingMode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FacingMode& value) {
    return value == static_cast<::blink::mojom::FacingMode>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using MediaDeviceType = MediaDeviceType;  // Alias for definition in the parent namespace.
using FacingMode = FacingMode;  // Alias for definition in the parent namespace.
class MediaDevicesDispatcherHost;
using MediaDevicesDispatcherHostPtr = mojo::InterfacePtr<MediaDevicesDispatcherHost>;
using RevocableMediaDevicesDispatcherHostPtr = ::blink::RevocableInterfacePtr<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostPtrInfo = mojo::InterfacePtrInfo<MediaDevicesDispatcherHost>;
using ThreadSafeMediaDevicesDispatcherHostPtr =
    mojo::ThreadSafeInterfacePtr<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostRequest = mojo::InterfaceRequest<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDevicesDispatcherHost>;
using ThreadSafeMediaDevicesDispatcherHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDevicesDispatcherHost>;
using MediaDevicesDispatcherHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDevicesDispatcherHost>;

class MediaDevicesListener;
using MediaDevicesListenerPtr = mojo::InterfacePtr<MediaDevicesListener>;
using RevocableMediaDevicesListenerPtr = ::blink::RevocableInterfacePtr<MediaDevicesListener>;
using MediaDevicesListenerPtrInfo = mojo::InterfacePtrInfo<MediaDevicesListener>;
using ThreadSafeMediaDevicesListenerPtr =
    mojo::ThreadSafeInterfacePtr<MediaDevicesListener>;
using MediaDevicesListenerRequest = mojo::InterfaceRequest<MediaDevicesListener>;
using MediaDevicesListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaDevicesListener>;
using ThreadSafeMediaDevicesListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaDevicesListener>;
using MediaDevicesListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaDevicesListener>;
using MediaDevicesListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaDevicesListener>;

class MediaDeviceInfo;
using MediaDeviceInfoPtr = mojo::InlinedStructPtr<MediaDeviceInfo>;

class VideoInputDeviceCapabilities;
using VideoInputDeviceCapabilitiesPtr = mojo::StructPtr<VideoInputDeviceCapabilities>;

class AudioInputDeviceCapabilities;
using AudioInputDeviceCapabilitiesPtr = mojo::StructPtr<AudioInputDeviceCapabilities>;


class MediaDevicesDispatcherHostProxy;

template <typename ImplRefTraits>
class MediaDevicesDispatcherHostStub;

class MediaDevicesDispatcherHostRequestValidator;
class MediaDevicesDispatcherHostResponseValidator;

class  MediaDevicesDispatcherHost
    : public MediaDevicesDispatcherHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaDevicesDispatcherHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDevicesDispatcherHostStub<ImplRefTraits>;

  using RequestValidator_ = MediaDevicesDispatcherHostRequestValidator;
  using ResponseValidator_ = MediaDevicesDispatcherHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEnumerateDevicesMinVersion = 0,
    kGetVideoInputCapabilitiesMinVersion = 0,
    kGetAllVideoInputDeviceFormatsMinVersion = 0,
    kGetAvailableVideoInputDeviceFormatsMinVersion = 0,
    kGetAudioInputCapabilitiesMinVersion = 0,
    kAddMediaDevicesListenerMinVersion = 0,
  };
  virtual ~MediaDevicesDispatcherHost() {}


  using EnumerateDevicesCallback = base::OnceCallback<void(WTF::Vector<WTF::Vector<MediaDeviceInfoPtr>>, WTF::Vector<VideoInputDeviceCapabilitiesPtr>)>;
  virtual void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, EnumerateDevicesCallback callback) = 0;


  using GetVideoInputCapabilitiesCallback = base::OnceCallback<void(WTF::Vector<VideoInputDeviceCapabilitiesPtr>)>;
  virtual void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) = 0;


  using GetAllVideoInputDeviceFormatsCallback = base::OnceCallback<void(WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>)>;
  virtual void GetAllVideoInputDeviceFormats(const WTF::String& device_id, GetAllVideoInputDeviceFormatsCallback callback) = 0;


  using GetAvailableVideoInputDeviceFormatsCallback = base::OnceCallback<void(WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>)>;
  virtual void GetAvailableVideoInputDeviceFormats(const WTF::String& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) = 0;


  using GetAudioInputCapabilitiesCallback = base::OnceCallback<void(WTF::Vector<AudioInputDeviceCapabilitiesPtr>)>;
  virtual void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) = 0;

  virtual void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) = 0;
};
class  MediaDevicesDispatcherHostInterceptorForTesting : public MediaDevicesDispatcherHost {
  virtual MediaDevicesDispatcherHost* GetForwardingInterface() = 0;
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, EnumerateDevicesCallback callback) override;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) override;
  void GetAllVideoInputDeviceFormats(const WTF::String& device_id, GetAllVideoInputDeviceFormatsCallback callback) override;
  void GetAvailableVideoInputDeviceFormats(const WTF::String& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) override;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) override;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) override;
};
class  MediaDevicesDispatcherHostAsyncWaiter {
 public:
  explicit MediaDevicesDispatcherHostAsyncWaiter(MediaDevicesDispatcherHost* proxy);
  ~MediaDevicesDispatcherHostAsyncWaiter();
  void EnumerateDevices(
      bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, WTF::Vector<WTF::Vector<MediaDeviceInfoPtr>>* out_enumeration, WTF::Vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities);
  void GetVideoInputCapabilities(
      WTF::Vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities);
  void GetAllVideoInputDeviceFormats(
      const WTF::String& device_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats);
  void GetAvailableVideoInputDeviceFormats(
      const WTF::String& device_id, WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>* out_formats);
  void GetAudioInputCapabilities(
      WTF::Vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities);

 private:
  MediaDevicesDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHostAsyncWaiter);
};

class MediaDevicesListenerProxy;

template <typename ImplRefTraits>
class MediaDevicesListenerStub;

class MediaDevicesListenerRequestValidator;

class  MediaDevicesListener
    : public MediaDevicesListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaDevicesListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDevicesListenerStub<ImplRefTraits>;

  using RequestValidator_ = MediaDevicesListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDevicesChangedMinVersion = 0,
  };
  virtual ~MediaDevicesListener() {}

  virtual void OnDevicesChanged(MediaDeviceType type, WTF::Vector<MediaDeviceInfoPtr> device_infos) = 0;
};
class  MediaDevicesListenerInterceptorForTesting : public MediaDevicesListener {
  virtual MediaDevicesListener* GetForwardingInterface() = 0;
  void OnDevicesChanged(MediaDeviceType type, WTF::Vector<MediaDeviceInfoPtr> device_infos) override;
};
class  MediaDevicesListenerAsyncWaiter {
 public:
  explicit MediaDevicesListenerAsyncWaiter(MediaDevicesListener* proxy);
  ~MediaDevicesListenerAsyncWaiter();

 private:
  MediaDevicesListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesListenerAsyncWaiter);
};

class  MediaDevicesDispatcherHostProxy
    : public MediaDevicesDispatcherHost {
 public:
  explicit MediaDevicesDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, EnumerateDevicesCallback callback) final;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) final;
  void GetAllVideoInputDeviceFormats(const WTF::String& device_id, GetAllVideoInputDeviceFormatsCallback callback) final;
  void GetAvailableVideoInputDeviceFormats(const WTF::String& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) final;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) final;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaDevicesListenerProxy
    : public MediaDevicesListener {
 public:
  explicit MediaDevicesListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDevicesChanged(MediaDeviceType type, WTF::Vector<MediaDeviceInfoPtr> device_infos) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaDevicesDispatcherHostStubDispatch {
 public:
  static bool Accept(MediaDevicesDispatcherHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDevicesDispatcherHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDevicesDispatcherHost>>
class MediaDevicesDispatcherHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDevicesDispatcherHostStub() {}
  ~MediaDevicesDispatcherHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesDispatcherHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesDispatcherHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaDevicesListenerStubDispatch {
 public:
  static bool Accept(MediaDevicesListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDevicesListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDevicesListener>>
class MediaDevicesListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDevicesListenerStub() {}
  ~MediaDevicesListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaDevicesDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaDevicesListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaDevicesDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class  MediaDeviceInfo {
 public:
  using DataView = MediaDeviceInfoDataView;
  using Data_ = internal::MediaDeviceInfo_Data;

  template <typename... Args>
  static MediaDeviceInfoPtr New(Args&&... args) {
    return MediaDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<MediaDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaDeviceInfo>::Convert(*this);
  }


  MediaDeviceInfo();

  MediaDeviceInfo(
      const WTF::String& device_id,
      const WTF::String& label,
      const WTF::String& group_id);

  ~MediaDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaDeviceInfoPtr>
  MediaDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaDeviceInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaDeviceInfo_UnserializedMessageContext<
            UserType, MediaDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaDeviceInfo_UnserializedMessageContext<
            UserType, MediaDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String device_id;
  WTF::String label;
  WTF::String group_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  VideoInputDeviceCapabilities {
 public:
  using DataView = VideoInputDeviceCapabilitiesDataView;
  using Data_ = internal::VideoInputDeviceCapabilities_Data;

  template <typename... Args>
  static VideoInputDeviceCapabilitiesPtr New(Args&&... args) {
    return VideoInputDeviceCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoInputDeviceCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VideoInputDeviceCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoInputDeviceCapabilities>::Convert(*this);
  }


  VideoInputDeviceCapabilities();

  VideoInputDeviceCapabilities(
      const WTF::String& device_id,
      const WTF::String& group_id,
      WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> formats,
      FacingMode facing_mode);

  ~VideoInputDeviceCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoInputDeviceCapabilitiesPtr>
  VideoInputDeviceCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoInputDeviceCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoInputDeviceCapabilities::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoInputDeviceCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoInputDeviceCapabilities_UnserializedMessageContext<
            UserType, VideoInputDeviceCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoInputDeviceCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoInputDeviceCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoInputDeviceCapabilities_UnserializedMessageContext<
            UserType, VideoInputDeviceCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoInputDeviceCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String device_id;
  WTF::String group_id;
  WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> formats;
  FacingMode facing_mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoInputDeviceCapabilities);
};


class  AudioInputDeviceCapabilities {
 public:
  using DataView = AudioInputDeviceCapabilitiesDataView;
  using Data_ = internal::AudioInputDeviceCapabilities_Data;

  template <typename... Args>
  static AudioInputDeviceCapabilitiesPtr New(Args&&... args) {
    return AudioInputDeviceCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioInputDeviceCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<AudioInputDeviceCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioInputDeviceCapabilities>::Convert(*this);
  }


  AudioInputDeviceCapabilities();

  AudioInputDeviceCapabilities(
      const WTF::String& device_id,
      ::media::mojom::blink::AudioParametersPtr parameters);

  ~AudioInputDeviceCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioInputDeviceCapabilitiesPtr>
  AudioInputDeviceCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioInputDeviceCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioInputDeviceCapabilities::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioInputDeviceCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioInputDeviceCapabilities_UnserializedMessageContext<
            UserType, AudioInputDeviceCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioInputDeviceCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AudioInputDeviceCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioInputDeviceCapabilities_UnserializedMessageContext<
            UserType, AudioInputDeviceCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioInputDeviceCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  WTF::String device_id;
  ::media::mojom::blink::AudioParametersPtr parameters;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AudioInputDeviceCapabilities);
};

template <typename StructPtrType>
MediaDeviceInfoPtr MediaDeviceInfo::Clone() const {
  return New(
      mojo::Clone(device_id),
      mojo::Clone(label),
      mojo::Clone(group_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaDeviceInfo>::value>::type*>
bool MediaDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  return true;
}
template <typename StructPtrType>
VideoInputDeviceCapabilitiesPtr VideoInputDeviceCapabilities::Clone() const {
  return New(
      mojo::Clone(device_id),
      mojo::Clone(group_id),
      mojo::Clone(formats),
      mojo::Clone(facing_mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoInputDeviceCapabilities>::value>::type*>
bool VideoInputDeviceCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  if (!mojo::Equals(this->formats, other_struct.formats))
    return false;
  if (!mojo::Equals(this->facing_mode, other_struct.facing_mode))
    return false;
  return true;
}
template <typename StructPtrType>
AudioInputDeviceCapabilitiesPtr AudioInputDeviceCapabilities::Clone() const {
  return New(
      mojo::Clone(device_id),
      mojo::Clone(parameters)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioInputDeviceCapabilities>::value>::type*>
bool AudioInputDeviceCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->parameters, other_struct.parameters))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct  StructTraits<::blink::mojom::blink::MediaDeviceInfo::DataView,
                                         ::blink::mojom::blink::MediaDeviceInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::MediaDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MediaDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::MediaDeviceInfo::device_id)& device_id(
      const ::blink::mojom::blink::MediaDeviceInfoPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::blink::MediaDeviceInfo::label)& label(
      const ::blink::mojom::blink::MediaDeviceInfoPtr& input) {
    return input->label;
  }

  static const decltype(::blink::mojom::blink::MediaDeviceInfo::group_id)& group_id(
      const ::blink::mojom::blink::MediaDeviceInfoPtr& input) {
    return input->group_id;
  }

  static bool Read(::blink::mojom::blink::MediaDeviceInfo::DataView input, ::blink::mojom::blink::MediaDeviceInfoPtr* output);
};


template <>
struct  StructTraits<::blink::mojom::blink::VideoInputDeviceCapabilities::DataView,
                                         ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr> {
  static bool IsNull(const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::device_id)& device_id(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::group_id)& group_id(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->group_id;
  }

  static const decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::formats)& formats(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->formats;
  }

  static decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::facing_mode) facing_mode(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->facing_mode;
  }

  static bool Read(::blink::mojom::blink::VideoInputDeviceCapabilities::DataView input, ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr* output);
};


template <>
struct  StructTraits<::blink::mojom::blink::AudioInputDeviceCapabilities::DataView,
                                         ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr> {
  static bool IsNull(const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::device_id)& device_id(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::parameters)& parameters(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->parameters;
  }

  static bool Read(::blink::mojom::blink::AudioInputDeviceCapabilities::DataView input, ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_H_