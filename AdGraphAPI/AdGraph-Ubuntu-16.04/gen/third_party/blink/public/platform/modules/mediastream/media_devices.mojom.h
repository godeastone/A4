// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_H_

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
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
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
#include "content/common/media/media_devices.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class MediaDevicesDispatcherHost;
using MediaDevicesDispatcherHostPtr = mojo::InterfacePtr<MediaDevicesDispatcherHost>;
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

class CONTENT_EXPORT MediaDevicesDispatcherHost
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


  using EnumerateDevicesCallback = base::OnceCallback<void(const std::vector<std::vector<content::MediaDeviceInfo>>&, std::vector<VideoInputDeviceCapabilitiesPtr>)>;
  virtual void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, EnumerateDevicesCallback callback) = 0;


  using GetVideoInputCapabilitiesCallback = base::OnceCallback<void(std::vector<VideoInputDeviceCapabilitiesPtr>)>;
  virtual void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) = 0;


  using GetAllVideoInputDeviceFormatsCallback = base::OnceCallback<void(const std::vector<media::VideoCaptureFormat>&)>;
  virtual void GetAllVideoInputDeviceFormats(const std::string& device_id, GetAllVideoInputDeviceFormatsCallback callback) = 0;


  using GetAvailableVideoInputDeviceFormatsCallback = base::OnceCallback<void(const std::vector<media::VideoCaptureFormat>&)>;
  virtual void GetAvailableVideoInputDeviceFormats(const std::string& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) = 0;


  using GetAudioInputCapabilitiesCallback = base::OnceCallback<void(std::vector<AudioInputDeviceCapabilitiesPtr>)>;
  virtual void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) = 0;

  virtual void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) = 0;
};
class CONTENT_EXPORT MediaDevicesDispatcherHostInterceptorForTesting : public MediaDevicesDispatcherHost {
  virtual MediaDevicesDispatcherHost* GetForwardingInterface() = 0;
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, EnumerateDevicesCallback callback) override;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) override;
  void GetAllVideoInputDeviceFormats(const std::string& device_id, GetAllVideoInputDeviceFormatsCallback callback) override;
  void GetAvailableVideoInputDeviceFormats(const std::string& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) override;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) override;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) override;
};
class CONTENT_EXPORT MediaDevicesDispatcherHostAsyncWaiter {
 public:
  explicit MediaDevicesDispatcherHostAsyncWaiter(MediaDevicesDispatcherHost* proxy);
  ~MediaDevicesDispatcherHostAsyncWaiter();
  void EnumerateDevices(
      bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, std::vector<std::vector<content::MediaDeviceInfo>>* out_enumeration, std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities);
  void GetVideoInputCapabilities(
      std::vector<VideoInputDeviceCapabilitiesPtr>* out_video_input_device_capabilities);
  void GetAllVideoInputDeviceFormats(
      const std::string& device_id, std::vector<media::VideoCaptureFormat>* out_formats);
  void GetAvailableVideoInputDeviceFormats(
      const std::string& device_id, std::vector<media::VideoCaptureFormat>* out_formats);
  void GetAudioInputCapabilities(
      std::vector<AudioInputDeviceCapabilitiesPtr>* out_audio_input_device_capabilities);

 private:
  MediaDevicesDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesDispatcherHostAsyncWaiter);
};

class MediaDevicesListenerProxy;

template <typename ImplRefTraits>
class MediaDevicesListenerStub;

class MediaDevicesListenerRequestValidator;

class CONTENT_EXPORT MediaDevicesListener
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

  virtual void OnDevicesChanged(content::MediaDeviceType type, const std::vector<content::MediaDeviceInfo>& device_infos) = 0;
};
class CONTENT_EXPORT MediaDevicesListenerInterceptorForTesting : public MediaDevicesListener {
  virtual MediaDevicesListener* GetForwardingInterface() = 0;
  void OnDevicesChanged(content::MediaDeviceType type, const std::vector<content::MediaDeviceInfo>& device_infos) override;
};
class CONTENT_EXPORT MediaDevicesListenerAsyncWaiter {
 public:
  explicit MediaDevicesListenerAsyncWaiter(MediaDevicesListener* proxy);
  ~MediaDevicesListenerAsyncWaiter();

 private:
  MediaDevicesListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaDevicesListenerAsyncWaiter);
};

class CONTENT_EXPORT MediaDevicesDispatcherHostProxy
    : public MediaDevicesDispatcherHost {
 public:
  explicit MediaDevicesDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, EnumerateDevicesCallback callback) final;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) final;
  void GetAllVideoInputDeviceFormats(const std::string& device_id, GetAllVideoInputDeviceFormatsCallback callback) final;
  void GetAvailableVideoInputDeviceFormats(const std::string& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) final;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) final;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT MediaDevicesListenerProxy
    : public MediaDevicesListener {
 public:
  explicit MediaDevicesListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDevicesChanged(content::MediaDeviceType type, const std::vector<content::MediaDeviceInfo>& device_infos) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT MediaDevicesDispatcherHostStubDispatch {
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
class CONTENT_EXPORT MediaDevicesListenerStubDispatch {
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
class CONTENT_EXPORT MediaDevicesDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MediaDevicesListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MediaDevicesDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class CONTENT_EXPORT MediaDeviceInfo {
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
      const std::string& device_id,
      const std::string& label,
      const std::string& group_id);

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

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaDeviceInfo::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  std::string device_id;
  std::string label;
  std::string group_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class CONTENT_EXPORT VideoInputDeviceCapabilities {
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
      const std::string& device_id,
      const std::string& group_id,
      const std::vector<media::VideoCaptureFormat>& formats,
      media::VideoFacingMode facing_mode);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoInputDeviceCapabilities::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  std::string device_id;
  std::string group_id;
  std::vector<media::VideoCaptureFormat> formats;
  media::VideoFacingMode facing_mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class CONTENT_EXPORT AudioInputDeviceCapabilities {
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
      const std::string& device_id,
      const media::AudioParameters& parameters);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioInputDeviceCapabilities::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  std::string device_id;
  media::AudioParameters parameters;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::MediaDeviceInfo::DataView,
                                         ::blink::mojom::MediaDeviceInfoPtr> {
  static bool IsNull(const ::blink::mojom::MediaDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::MediaDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::MediaDeviceInfo::device_id)& device_id(
      const ::blink::mojom::MediaDeviceInfoPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::MediaDeviceInfo::label)& label(
      const ::blink::mojom::MediaDeviceInfoPtr& input) {
    return input->label;
  }

  static const decltype(::blink::mojom::MediaDeviceInfo::group_id)& group_id(
      const ::blink::mojom::MediaDeviceInfoPtr& input) {
    return input->group_id;
  }

  static bool Read(::blink::mojom::MediaDeviceInfo::DataView input, ::blink::mojom::MediaDeviceInfoPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::VideoInputDeviceCapabilities::DataView,
                                         ::blink::mojom::VideoInputDeviceCapabilitiesPtr> {
  static bool IsNull(const ::blink::mojom::VideoInputDeviceCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::VideoInputDeviceCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::VideoInputDeviceCapabilities::device_id)& device_id(
      const ::blink::mojom::VideoInputDeviceCapabilitiesPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::VideoInputDeviceCapabilities::group_id)& group_id(
      const ::blink::mojom::VideoInputDeviceCapabilitiesPtr& input) {
    return input->group_id;
  }

  static const decltype(::blink::mojom::VideoInputDeviceCapabilities::formats)& formats(
      const ::blink::mojom::VideoInputDeviceCapabilitiesPtr& input) {
    return input->formats;
  }

  static decltype(::blink::mojom::VideoInputDeviceCapabilities::facing_mode) facing_mode(
      const ::blink::mojom::VideoInputDeviceCapabilitiesPtr& input) {
    return input->facing_mode;
  }

  static bool Read(::blink::mojom::VideoInputDeviceCapabilities::DataView input, ::blink::mojom::VideoInputDeviceCapabilitiesPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::AudioInputDeviceCapabilities::DataView,
                                         ::blink::mojom::AudioInputDeviceCapabilitiesPtr> {
  static bool IsNull(const ::blink::mojom::AudioInputDeviceCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::AudioInputDeviceCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::AudioInputDeviceCapabilities::device_id)& device_id(
      const ::blink::mojom::AudioInputDeviceCapabilitiesPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::AudioInputDeviceCapabilities::parameters)& parameters(
      const ::blink::mojom::AudioInputDeviceCapabilitiesPtr& input) {
    return input->parameters;
  }

  static bool Read(::blink::mojom::AudioInputDeviceCapabilities::DataView input, ::blink::mojom::AudioInputDeviceCapabilitiesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_PLATFORM_MODULES_MEDIASTREAM_MEDIA_DEVICES_MOJOM_H_