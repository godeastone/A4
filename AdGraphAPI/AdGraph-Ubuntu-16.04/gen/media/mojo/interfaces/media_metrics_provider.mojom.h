// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_H_

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
#include "media/mojo/interfaces/media_metrics_provider.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/origin.mojom.h"
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
class MediaMetricsProvider;
using MediaMetricsProviderPtr = mojo::InterfacePtr<MediaMetricsProvider>;
using MediaMetricsProviderPtrInfo = mojo::InterfacePtrInfo<MediaMetricsProvider>;
using ThreadSafeMediaMetricsProviderPtr =
    mojo::ThreadSafeInterfacePtr<MediaMetricsProvider>;
using MediaMetricsProviderRequest = mojo::InterfaceRequest<MediaMetricsProvider>;
using MediaMetricsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaMetricsProvider>;
using ThreadSafeMediaMetricsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaMetricsProvider>;
using MediaMetricsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaMetricsProvider>;
using MediaMetricsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaMetricsProvider>;


class MediaMetricsProviderProxy;

template <typename ImplRefTraits>
class MediaMetricsProviderStub;

class MediaMetricsProviderRequestValidator;

class  MediaMetricsProvider
    : public MediaMetricsProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = MediaMetricsProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaMetricsProviderStub<ImplRefTraits>;

  using RequestValidator_ = MediaMetricsProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kOnErrorMinVersion = 0,
    kSetIsEMEMinVersion = 0,
    kSetTimeToMetadataMinVersion = 0,
    kSetTimeToFirstFrameMinVersion = 0,
    kSetTimeToPlayReadyMinVersion = 0,
    kAcquireWatchTimeRecorderMinVersion = 0,
    kAcquireVideoDecodeStatsRecorderMinVersion = 0,
  };
  virtual ~MediaMetricsProvider() {}

  virtual void Initialize(bool is_mse, bool is_top_frame, const url::Origin& untrusted_top_origin) = 0;

  virtual void OnError(media::PipelineStatus status) = 0;

  virtual void SetIsEME() = 0;

  virtual void SetTimeToMetadata(base::TimeDelta elapsed) = 0;

  virtual void SetTimeToFirstFrame(base::TimeDelta elapsed) = 0;

  virtual void SetTimeToPlayReady(base::TimeDelta elapsed) = 0;

  virtual void AcquireWatchTimeRecorder(::media::mojom::PlaybackPropertiesPtr properties, ::media::mojom::WatchTimeRecorderRequest recorder) = 0;

  virtual void AcquireVideoDecodeStatsRecorder(::media::mojom::VideoDecodeStatsRecorderRequest recorder) = 0;
};
class  MediaMetricsProviderInterceptorForTesting : public MediaMetricsProvider {
  virtual MediaMetricsProvider* GetForwardingInterface() = 0;
  void Initialize(bool is_mse, bool is_top_frame, const url::Origin& untrusted_top_origin) override;
  void OnError(media::PipelineStatus status) override;
  void SetIsEME() override;
  void SetTimeToMetadata(base::TimeDelta elapsed) override;
  void SetTimeToFirstFrame(base::TimeDelta elapsed) override;
  void SetTimeToPlayReady(base::TimeDelta elapsed) override;
  void AcquireWatchTimeRecorder(::media::mojom::PlaybackPropertiesPtr properties, ::media::mojom::WatchTimeRecorderRequest recorder) override;
  void AcquireVideoDecodeStatsRecorder(::media::mojom::VideoDecodeStatsRecorderRequest recorder) override;
};
class  MediaMetricsProviderAsyncWaiter {
 public:
  explicit MediaMetricsProviderAsyncWaiter(MediaMetricsProvider* proxy);
  ~MediaMetricsProviderAsyncWaiter();

 private:
  MediaMetricsProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaMetricsProviderAsyncWaiter);
};

class  MediaMetricsProviderProxy
    : public MediaMetricsProvider {
 public:
  explicit MediaMetricsProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(bool is_mse, bool is_top_frame, const url::Origin& untrusted_top_origin) final;
  void OnError(media::PipelineStatus status) final;
  void SetIsEME() final;
  void SetTimeToMetadata(base::TimeDelta elapsed) final;
  void SetTimeToFirstFrame(base::TimeDelta elapsed) final;
  void SetTimeToPlayReady(base::TimeDelta elapsed) final;
  void AcquireWatchTimeRecorder(::media::mojom::PlaybackPropertiesPtr properties, ::media::mojom::WatchTimeRecorderRequest recorder) final;
  void AcquireVideoDecodeStatsRecorder(::media::mojom::VideoDecodeStatsRecorderRequest recorder) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaMetricsProviderStubDispatch {
 public:
  static bool Accept(MediaMetricsProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaMetricsProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaMetricsProvider>>
class MediaMetricsProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaMetricsProviderStub() {}
  ~MediaMetricsProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaMetricsProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaMetricsProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaMetricsProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_H_