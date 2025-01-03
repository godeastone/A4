// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_H_

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
#include "media/mojo/interfaces/mirror_service_remoting.mojom-shared.h"
#include "media/mojo/interfaces/remoting_common.mojom.h"
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
class MirrorServiceRemoter;
using MirrorServiceRemoterPtr = mojo::InterfacePtr<MirrorServiceRemoter>;
using MirrorServiceRemoterPtrInfo = mojo::InterfacePtrInfo<MirrorServiceRemoter>;
using ThreadSafeMirrorServiceRemoterPtr =
    mojo::ThreadSafeInterfacePtr<MirrorServiceRemoter>;
using MirrorServiceRemoterRequest = mojo::InterfaceRequest<MirrorServiceRemoter>;
using MirrorServiceRemoterAssociatedPtr =
    mojo::AssociatedInterfacePtr<MirrorServiceRemoter>;
using ThreadSafeMirrorServiceRemoterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MirrorServiceRemoter>;
using MirrorServiceRemoterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MirrorServiceRemoter>;
using MirrorServiceRemoterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MirrorServiceRemoter>;

class MirrorServiceRemotingSource;
using MirrorServiceRemotingSourcePtr = mojo::InterfacePtr<MirrorServiceRemotingSource>;
using MirrorServiceRemotingSourcePtrInfo = mojo::InterfacePtrInfo<MirrorServiceRemotingSource>;
using ThreadSafeMirrorServiceRemotingSourcePtr =
    mojo::ThreadSafeInterfacePtr<MirrorServiceRemotingSource>;
using MirrorServiceRemotingSourceRequest = mojo::InterfaceRequest<MirrorServiceRemotingSource>;
using MirrorServiceRemotingSourceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MirrorServiceRemotingSource>;
using ThreadSafeMirrorServiceRemotingSourceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MirrorServiceRemotingSource>;
using MirrorServiceRemotingSourceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MirrorServiceRemotingSource>;
using MirrorServiceRemotingSourceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MirrorServiceRemotingSource>;


class MirrorServiceRemoterProxy;

template <typename ImplRefTraits>
class MirrorServiceRemoterStub;

class MirrorServiceRemoterRequestValidator;
class MirrorServiceRemoterResponseValidator;

class  MirrorServiceRemoter
    : public MirrorServiceRemoterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MirrorServiceRemoterProxy;

  template <typename ImplRefTraits>
  using Stub_ = MirrorServiceRemoterStub<ImplRefTraits>;

  using RequestValidator_ = MirrorServiceRemoterRequestValidator;
  using ResponseValidator_ = MirrorServiceRemoterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStartDataStreamsMinVersion = 0,
    kStopMinVersion = 0,
    kSendMessageToSinkMinVersion = 0,
    kEstimateTransmissionCapacityMinVersion = 0,
  };
  virtual ~MirrorServiceRemoter() {}

  virtual void Start() = 0;


  using StartDataStreamsCallback = base::OnceCallback<void(int32_t, int32_t)>;
  virtual void StartDataStreams(bool has_audio, bool has_video, StartDataStreamsCallback callback) = 0;

  virtual void Stop(::media::mojom::RemotingStopReason reason) = 0;

  virtual void SendMessageToSink(const std::vector<uint8_t>& message) = 0;


  using EstimateTransmissionCapacityCallback = base::OnceCallback<void(double)>;
  virtual void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) = 0;
};
class  MirrorServiceRemoterInterceptorForTesting : public MirrorServiceRemoter {
  virtual MirrorServiceRemoter* GetForwardingInterface() = 0;
  void Start() override;
  void StartDataStreams(bool has_audio, bool has_video, StartDataStreamsCallback callback) override;
  void Stop(::media::mojom::RemotingStopReason reason) override;
  void SendMessageToSink(const std::vector<uint8_t>& message) override;
  void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) override;
};
class  MirrorServiceRemoterAsyncWaiter {
 public:
  explicit MirrorServiceRemoterAsyncWaiter(MirrorServiceRemoter* proxy);
  ~MirrorServiceRemoterAsyncWaiter();
  void StartDataStreams(
      bool has_audio, bool has_video, int32_t* out_audio_stream_id, int32_t* out_video_stream_id);
  void EstimateTransmissionCapacity(
      double* out_rate);

 private:
  MirrorServiceRemoter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MirrorServiceRemoterAsyncWaiter);
};

class MirrorServiceRemotingSourceProxy;

template <typename ImplRefTraits>
class MirrorServiceRemotingSourceStub;

class MirrorServiceRemotingSourceRequestValidator;

class  MirrorServiceRemotingSource
    : public MirrorServiceRemotingSourceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MirrorServiceRemotingSourceProxy;

  template <typename ImplRefTraits>
  using Stub_ = MirrorServiceRemotingSourceStub<ImplRefTraits>;

  using RequestValidator_ = MirrorServiceRemotingSourceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSinkAvailableMinVersion = 0,
    kOnMessageFromSinkMinVersion = 0,
    kOnStoppedMinVersion = 0,
    kOnErrorMinVersion = 0,
  };
  virtual ~MirrorServiceRemotingSource() {}

  virtual void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) = 0;

  virtual void OnMessageFromSink(const std::vector<uint8_t>& message) = 0;

  virtual void OnStopped(::media::mojom::RemotingStopReason reason) = 0;

  virtual void OnError() = 0;
};
class  MirrorServiceRemotingSourceInterceptorForTesting : public MirrorServiceRemotingSource {
  virtual MirrorServiceRemotingSource* GetForwardingInterface() = 0;
  void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) override;
  void OnMessageFromSink(const std::vector<uint8_t>& message) override;
  void OnStopped(::media::mojom::RemotingStopReason reason) override;
  void OnError() override;
};
class  MirrorServiceRemotingSourceAsyncWaiter {
 public:
  explicit MirrorServiceRemotingSourceAsyncWaiter(MirrorServiceRemotingSource* proxy);
  ~MirrorServiceRemotingSourceAsyncWaiter();

 private:
  MirrorServiceRemotingSource* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MirrorServiceRemotingSourceAsyncWaiter);
};

class  MirrorServiceRemoterProxy
    : public MirrorServiceRemoter {
 public:
  explicit MirrorServiceRemoterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start() final;
  void StartDataStreams(bool has_audio, bool has_video, StartDataStreamsCallback callback) final;
  void Stop(::media::mojom::RemotingStopReason reason) final;
  void SendMessageToSink(const std::vector<uint8_t>& message) final;
  void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MirrorServiceRemotingSourceProxy
    : public MirrorServiceRemotingSource {
 public:
  explicit MirrorServiceRemotingSourceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) final;
  void OnMessageFromSink(const std::vector<uint8_t>& message) final;
  void OnStopped(::media::mojom::RemotingStopReason reason) final;
  void OnError() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MirrorServiceRemoterStubDispatch {
 public:
  static bool Accept(MirrorServiceRemoter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MirrorServiceRemoter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MirrorServiceRemoter>>
class MirrorServiceRemoterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MirrorServiceRemoterStub() {}
  ~MirrorServiceRemoterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MirrorServiceRemoterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MirrorServiceRemoterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MirrorServiceRemotingSourceStubDispatch {
 public:
  static bool Accept(MirrorServiceRemotingSource* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MirrorServiceRemotingSource* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MirrorServiceRemotingSource>>
class MirrorServiceRemotingSourceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MirrorServiceRemotingSourceStub() {}
  ~MirrorServiceRemotingSourceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MirrorServiceRemotingSourceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MirrorServiceRemotingSourceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MirrorServiceRemoterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MirrorServiceRemotingSourceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MirrorServiceRemoterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MIRROR_SERVICE_REMOTING_MOJOM_H_