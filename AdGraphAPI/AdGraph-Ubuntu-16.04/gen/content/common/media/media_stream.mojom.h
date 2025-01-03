// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_H_
#define CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_H_

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
#include "content/common/media/media_stream.mojom-shared.h"
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
#include "content/common/media/media_stream_controls.h"
#include "content/public/common/media_stream_request.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class MediaStreamDeviceObserver;
using MediaStreamDeviceObserverPtr = mojo::InterfacePtr<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverPtrInfo = mojo::InterfacePtrInfo<MediaStreamDeviceObserver>;
using ThreadSafeMediaStreamDeviceObserverPtr =
    mojo::ThreadSafeInterfacePtr<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverRequest = mojo::InterfaceRequest<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStreamDeviceObserver>;
using ThreadSafeMediaStreamDeviceObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStreamDeviceObserver>;
using MediaStreamDeviceObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStreamDeviceObserver>;

class MediaStreamDispatcherHost;
using MediaStreamDispatcherHostPtr = mojo::InterfacePtr<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostPtrInfo = mojo::InterfacePtrInfo<MediaStreamDispatcherHost>;
using ThreadSafeMediaStreamDispatcherHostPtr =
    mojo::ThreadSafeInterfacePtr<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostRequest = mojo::InterfaceRequest<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStreamDispatcherHost>;
using ThreadSafeMediaStreamDispatcherHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStreamDispatcherHost>;
using MediaStreamDispatcherHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStreamDispatcherHost>;

class MediaStreamTrackMetricsHost;
using MediaStreamTrackMetricsHostPtr = mojo::InterfacePtr<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostPtrInfo = mojo::InterfacePtrInfo<MediaStreamTrackMetricsHost>;
using ThreadSafeMediaStreamTrackMetricsHostPtr =
    mojo::ThreadSafeInterfacePtr<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostRequest = mojo::InterfaceRequest<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaStreamTrackMetricsHost>;
using ThreadSafeMediaStreamTrackMetricsHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaStreamTrackMetricsHost>;
using MediaStreamTrackMetricsHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaStreamTrackMetricsHost>;

using MediaStreamDevice = mojo::native::NativeStruct;
using MediaStreamDevicePtr = mojo::native::NativeStructPtr;

class TrackControls;
using TrackControlsPtr = mojo::InlinedStructPtr<TrackControls>;

class StreamControls;
using StreamControlsPtr = mojo::StructPtr<StreamControls>;


class MediaStreamDeviceObserverProxy;

template <typename ImplRefTraits>
class MediaStreamDeviceObserverStub;

class MediaStreamDeviceObserverRequestValidator;

class CONTENT_EXPORT MediaStreamDeviceObserver
    : public MediaStreamDeviceObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaStreamDeviceObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStreamDeviceObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaStreamDeviceObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceStoppedMinVersion = 0,
  };
  virtual ~MediaStreamDeviceObserver() {}

  virtual void OnDeviceStopped(const std::string& label, const content::MediaStreamDevice& device) = 0;
};
class CONTENT_EXPORT MediaStreamDeviceObserverInterceptorForTesting : public MediaStreamDeviceObserver {
  virtual MediaStreamDeviceObserver* GetForwardingInterface() = 0;
  void OnDeviceStopped(const std::string& label, const content::MediaStreamDevice& device) override;
};
class CONTENT_EXPORT MediaStreamDeviceObserverAsyncWaiter {
 public:
  explicit MediaStreamDeviceObserverAsyncWaiter(MediaStreamDeviceObserver* proxy);
  ~MediaStreamDeviceObserverAsyncWaiter();

 private:
  MediaStreamDeviceObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDeviceObserverAsyncWaiter);
};

class MediaStreamDispatcherHostProxy;

template <typename ImplRefTraits>
class MediaStreamDispatcherHostStub;

class MediaStreamDispatcherHostRequestValidator;
class MediaStreamDispatcherHostResponseValidator;

class CONTENT_EXPORT MediaStreamDispatcherHost
    : public MediaStreamDispatcherHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaStreamDispatcherHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStreamDispatcherHostStub<ImplRefTraits>;

  using RequestValidator_ = MediaStreamDispatcherHostRequestValidator;
  using ResponseValidator_ = MediaStreamDispatcherHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGenerateStreamMinVersion = 0,
    kCancelRequestMinVersion = 0,
    kStopStreamDeviceMinVersion = 0,
    kOpenDeviceMinVersion = 0,
    kCloseDeviceMinVersion = 0,
    kSetCapturingLinkSecuredMinVersion = 0,
    kOnStreamStartedMinVersion = 0,
  };
  virtual ~MediaStreamDispatcherHost() {}


  using GenerateStreamCallback = base::OnceCallback<void(content::MediaStreamRequestResult, const std::string&, const std::vector<content::MediaStreamDevice>&, const std::vector<content::MediaStreamDevice>&)>;
  virtual void GenerateStream(int32_t request_id, const content::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) = 0;

  virtual void CancelRequest(int32_t request_id) = 0;

  virtual void StopStreamDevice(const std::string& device_id, int32_t session_id) = 0;


  using OpenDeviceCallback = base::OnceCallback<void(bool, const std::string&, const content::MediaStreamDevice&)>;
  virtual void OpenDevice(int32_t request_id, const std::string& device_id, content::MediaStreamType type, OpenDeviceCallback callback) = 0;

  virtual void CloseDevice(const std::string& label) = 0;

  virtual void SetCapturingLinkSecured(int32_t session_id, content::MediaStreamType type, bool is_secure) = 0;

  virtual void OnStreamStarted(const std::string& label) = 0;
};
class CONTENT_EXPORT MediaStreamDispatcherHostInterceptorForTesting : public MediaStreamDispatcherHost {
  virtual MediaStreamDispatcherHost* GetForwardingInterface() = 0;
  void GenerateStream(int32_t request_id, const content::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) override;
  void CancelRequest(int32_t request_id) override;
  void StopStreamDevice(const std::string& device_id, int32_t session_id) override;
  void OpenDevice(int32_t request_id, const std::string& device_id, content::MediaStreamType type, OpenDeviceCallback callback) override;
  void CloseDevice(const std::string& label) override;
  void SetCapturingLinkSecured(int32_t session_id, content::MediaStreamType type, bool is_secure) override;
  void OnStreamStarted(const std::string& label) override;
};
class CONTENT_EXPORT MediaStreamDispatcherHostAsyncWaiter {
 public:
  explicit MediaStreamDispatcherHostAsyncWaiter(MediaStreamDispatcherHost* proxy);
  ~MediaStreamDispatcherHostAsyncWaiter();
  void GenerateStream(
      int32_t request_id, const content::StreamControls& controls, bool user_gesture, content::MediaStreamRequestResult* out_result, std::string* out_label, std::vector<content::MediaStreamDevice>* out_audio_devices, std::vector<content::MediaStreamDevice>* out_video_devices);
  void OpenDevice(
      int32_t request_id, const std::string& device_id, content::MediaStreamType type, bool* out_success, std::string* out_label, content::MediaStreamDevice* out_device);

 private:
  MediaStreamDispatcherHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamDispatcherHostAsyncWaiter);
};

class MediaStreamTrackMetricsHostProxy;

template <typename ImplRefTraits>
class MediaStreamTrackMetricsHostStub;

class MediaStreamTrackMetricsHostRequestValidator;

class CONTENT_EXPORT MediaStreamTrackMetricsHost
    : public MediaStreamTrackMetricsHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaStreamTrackMetricsHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStreamTrackMetricsHostStub<ImplRefTraits>;

  using RequestValidator_ = MediaStreamTrackMetricsHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddTrackMinVersion = 0,
    kRemoveTrackMinVersion = 0,
  };
  virtual ~MediaStreamTrackMetricsHost() {}

  virtual void AddTrack(uint64_t id, bool is_audio, bool is_remote) = 0;

  virtual void RemoveTrack(uint64_t id) = 0;
};
class CONTENT_EXPORT MediaStreamTrackMetricsHostInterceptorForTesting : public MediaStreamTrackMetricsHost {
  virtual MediaStreamTrackMetricsHost* GetForwardingInterface() = 0;
  void AddTrack(uint64_t id, bool is_audio, bool is_remote) override;
  void RemoveTrack(uint64_t id) override;
};
class CONTENT_EXPORT MediaStreamTrackMetricsHostAsyncWaiter {
 public:
  explicit MediaStreamTrackMetricsHostAsyncWaiter(MediaStreamTrackMetricsHost* proxy);
  ~MediaStreamTrackMetricsHostAsyncWaiter();

 private:
  MediaStreamTrackMetricsHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaStreamTrackMetricsHostAsyncWaiter);
};

class CONTENT_EXPORT MediaStreamDeviceObserverProxy
    : public MediaStreamDeviceObserver {
 public:
  explicit MediaStreamDeviceObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceStopped(const std::string& label, const content::MediaStreamDevice& device) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT MediaStreamDispatcherHostProxy
    : public MediaStreamDispatcherHost {
 public:
  explicit MediaStreamDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GenerateStream(int32_t request_id, const content::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) final;
  void CancelRequest(int32_t request_id) final;
  void StopStreamDevice(const std::string& device_id, int32_t session_id) final;
  void OpenDevice(int32_t request_id, const std::string& device_id, content::MediaStreamType type, OpenDeviceCallback callback) final;
  void CloseDevice(const std::string& label) final;
  void SetCapturingLinkSecured(int32_t session_id, content::MediaStreamType type, bool is_secure) final;
  void OnStreamStarted(const std::string& label) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT MediaStreamTrackMetricsHostProxy
    : public MediaStreamTrackMetricsHost {
 public:
  explicit MediaStreamTrackMetricsHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddTrack(uint64_t id, bool is_audio, bool is_remote) final;
  void RemoveTrack(uint64_t id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT MediaStreamDeviceObserverStubDispatch {
 public:
  static bool Accept(MediaStreamDeviceObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStreamDeviceObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStreamDeviceObserver>>
class MediaStreamDeviceObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStreamDeviceObserverStub() {}
  ~MediaStreamDeviceObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDeviceObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDeviceObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT MediaStreamDispatcherHostStubDispatch {
 public:
  static bool Accept(MediaStreamDispatcherHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStreamDispatcherHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStreamDispatcherHost>>
class MediaStreamDispatcherHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStreamDispatcherHostStub() {}
  ~MediaStreamDispatcherHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDispatcherHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDispatcherHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT MediaStreamTrackMetricsHostStubDispatch {
 public:
  static bool Accept(MediaStreamTrackMetricsHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStreamTrackMetricsHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStreamTrackMetricsHost>>
class MediaStreamTrackMetricsHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStreamTrackMetricsHostStub() {}
  ~MediaStreamTrackMetricsHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamTrackMetricsHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamTrackMetricsHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT MediaStreamDeviceObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MediaStreamDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MediaStreamTrackMetricsHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT MediaStreamDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



class CONTENT_EXPORT TrackControls {
 public:
  using DataView = TrackControlsDataView;
  using Data_ = internal::TrackControls_Data;

  template <typename... Args>
  static TrackControlsPtr New(Args&&... args) {
    return TrackControlsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TrackControlsPtr From(const U& u) {
    return mojo::TypeConverter<TrackControlsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TrackControls>::Convert(*this);
  }


  TrackControls();

  TrackControls(
      bool requested,
      const std::string& stream_source,
      const std::string& device_id);

  ~TrackControls();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TrackControlsPtr>
  TrackControlsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TrackControls>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TrackControls::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TrackControls::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TrackControls_UnserializedMessageContext<
            UserType, TrackControls::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TrackControls::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TrackControls::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TrackControls_UnserializedMessageContext<
            UserType, TrackControls::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TrackControls::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  bool requested;
  std::string stream_source;
  std::string device_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class CONTENT_EXPORT StreamControls {
 public:
  using DataView = StreamControlsDataView;
  using Data_ = internal::StreamControls_Data;

  template <typename... Args>
  static StreamControlsPtr New(Args&&... args) {
    return StreamControlsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StreamControlsPtr From(const U& u) {
    return mojo::TypeConverter<StreamControlsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StreamControls>::Convert(*this);
  }


  StreamControls();

  StreamControls(
      const content::TrackControls& audio,
      const content::TrackControls& video,
      bool hotword_enabled,
      bool disable_local_echo);

  ~StreamControls();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StreamControlsPtr>
  StreamControlsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StreamControls>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StreamControls::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StreamControls::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StreamControls_UnserializedMessageContext<
            UserType, StreamControls::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StreamControls::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StreamControls::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StreamControls_UnserializedMessageContext<
            UserType, StreamControls::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StreamControls::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  content::TrackControls audio;
  content::TrackControls video;
  bool hotword_enabled;
  bool disable_local_echo;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TrackControlsPtr TrackControls::Clone() const {
  return New(
      mojo::Clone(requested),
      mojo::Clone(stream_source),
      mojo::Clone(device_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TrackControls>::value>::type*>
bool TrackControls::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->requested, other_struct.requested))
    return false;
  if (!mojo::Equals(this->stream_source, other_struct.stream_source))
    return false;
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  return true;
}
template <typename StructPtrType>
StreamControlsPtr StreamControls::Clone() const {
  return New(
      mojo::Clone(audio),
      mojo::Clone(video),
      mojo::Clone(hotword_enabled),
      mojo::Clone(disable_local_echo)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StreamControls>::value>::type*>
bool StreamControls::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->audio, other_struct.audio))
    return false;
  if (!mojo::Equals(this->video, other_struct.video))
    return false;
  if (!mojo::Equals(this->hotword_enabled, other_struct.hotword_enabled))
    return false;
  if (!mojo::Equals(this->disable_local_echo, other_struct.disable_local_echo))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::TrackControls::DataView,
                                         ::content::mojom::TrackControlsPtr> {
  static bool IsNull(const ::content::mojom::TrackControlsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::TrackControlsPtr* output) { output->reset(); }

  static decltype(::content::mojom::TrackControls::requested) requested(
      const ::content::mojom::TrackControlsPtr& input) {
    return input->requested;
  }

  static const decltype(::content::mojom::TrackControls::stream_source)& stream_source(
      const ::content::mojom::TrackControlsPtr& input) {
    return input->stream_source;
  }

  static const decltype(::content::mojom::TrackControls::device_id)& device_id(
      const ::content::mojom::TrackControlsPtr& input) {
    return input->device_id;
  }

  static bool Read(::content::mojom::TrackControls::DataView input, ::content::mojom::TrackControlsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::StreamControls::DataView,
                                         ::content::mojom::StreamControlsPtr> {
  static bool IsNull(const ::content::mojom::StreamControlsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::StreamControlsPtr* output) { output->reset(); }

  static const decltype(::content::mojom::StreamControls::audio)& audio(
      const ::content::mojom::StreamControlsPtr& input) {
    return input->audio;
  }

  static const decltype(::content::mojom::StreamControls::video)& video(
      const ::content::mojom::StreamControlsPtr& input) {
    return input->video;
  }

  static decltype(::content::mojom::StreamControls::hotword_enabled) hotword_enabled(
      const ::content::mojom::StreamControlsPtr& input) {
    return input->hotword_enabled;
  }

  static decltype(::content::mojom::StreamControls::disable_local_echo) disable_local_echo(
      const ::content::mojom::StreamControlsPtr& input) {
    return input->disable_local_echo;
  }

  static bool Read(::content::mojom::StreamControls::DataView input, ::content::mojom::StreamControlsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_MEDIA_MEDIA_STREAM_MOJOM_H_