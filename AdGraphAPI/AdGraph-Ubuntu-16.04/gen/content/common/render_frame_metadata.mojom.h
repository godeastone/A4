// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_H_
#define CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_H_

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
#include "content/common/render_frame_metadata.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"
#include "services/viz/public/interfaces/compositing/selection.mojom.h"
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
#include "cc/trees/render_frame_metadata.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class RenderFrameMetadataObserver;
using RenderFrameMetadataObserverPtr = mojo::InterfacePtr<RenderFrameMetadataObserver>;
using RenderFrameMetadataObserverPtrInfo = mojo::InterfacePtrInfo<RenderFrameMetadataObserver>;
using ThreadSafeRenderFrameMetadataObserverPtr =
    mojo::ThreadSafeInterfacePtr<RenderFrameMetadataObserver>;
using RenderFrameMetadataObserverRequest = mojo::InterfaceRequest<RenderFrameMetadataObserver>;
using RenderFrameMetadataObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderFrameMetadataObserver>;
using ThreadSafeRenderFrameMetadataObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RenderFrameMetadataObserver>;
using RenderFrameMetadataObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderFrameMetadataObserver>;
using RenderFrameMetadataObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RenderFrameMetadataObserver>;

class RenderFrameMetadataObserverClient;
using RenderFrameMetadataObserverClientPtr = mojo::InterfacePtr<RenderFrameMetadataObserverClient>;
using RenderFrameMetadataObserverClientPtrInfo = mojo::InterfacePtrInfo<RenderFrameMetadataObserverClient>;
using ThreadSafeRenderFrameMetadataObserverClientPtr =
    mojo::ThreadSafeInterfacePtr<RenderFrameMetadataObserverClient>;
using RenderFrameMetadataObserverClientRequest = mojo::InterfaceRequest<RenderFrameMetadataObserverClient>;
using RenderFrameMetadataObserverClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<RenderFrameMetadataObserverClient>;
using ThreadSafeRenderFrameMetadataObserverClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RenderFrameMetadataObserverClient>;
using RenderFrameMetadataObserverClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RenderFrameMetadataObserverClient>;
using RenderFrameMetadataObserverClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RenderFrameMetadataObserverClient>;

class RenderFrameMetadata;
using RenderFrameMetadataPtr = mojo::StructPtr<RenderFrameMetadata>;


class RenderFrameMetadataObserverProxy;

template <typename ImplRefTraits>
class RenderFrameMetadataObserverStub;

class RenderFrameMetadataObserverRequestValidator;

class CONTENT_EXPORT RenderFrameMetadataObserver
    : public RenderFrameMetadataObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RenderFrameMetadataObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderFrameMetadataObserverStub<ImplRefTraits>;

  using RequestValidator_ = RenderFrameMetadataObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kReportAllFrameSubmissionsForTestingMinVersion = 0,
  };
  virtual ~RenderFrameMetadataObserver() {}

  virtual void ReportAllFrameSubmissionsForTesting(bool enabled) = 0;
};
class CONTENT_EXPORT RenderFrameMetadataObserverInterceptorForTesting : public RenderFrameMetadataObserver {
  virtual RenderFrameMetadataObserver* GetForwardingInterface() = 0;
  void ReportAllFrameSubmissionsForTesting(bool enabled) override;
};
class CONTENT_EXPORT RenderFrameMetadataObserverAsyncWaiter {
 public:
  explicit RenderFrameMetadataObserverAsyncWaiter(RenderFrameMetadataObserver* proxy);
  ~RenderFrameMetadataObserverAsyncWaiter();

 private:
  RenderFrameMetadataObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RenderFrameMetadataObserverAsyncWaiter);
};

class RenderFrameMetadataObserverClientProxy;

template <typename ImplRefTraits>
class RenderFrameMetadataObserverClientStub;

class RenderFrameMetadataObserverClientRequestValidator;

class CONTENT_EXPORT RenderFrameMetadataObserverClient
    : public RenderFrameMetadataObserverClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RenderFrameMetadataObserverClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = RenderFrameMetadataObserverClientStub<ImplRefTraits>;

  using RequestValidator_ = RenderFrameMetadataObserverClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnRenderFrameMetadataChangedMinVersion = 0,
    kOnFrameSubmissionForTestingMinVersion = 0,
  };
  virtual ~RenderFrameMetadataObserverClient() {}

  virtual void OnRenderFrameMetadataChanged(uint32_t frame_token, const cc::RenderFrameMetadata& metadata) = 0;

  virtual void OnFrameSubmissionForTesting(uint32_t frame_token) = 0;
};
class CONTENT_EXPORT RenderFrameMetadataObserverClientInterceptorForTesting : public RenderFrameMetadataObserverClient {
  virtual RenderFrameMetadataObserverClient* GetForwardingInterface() = 0;
  void OnRenderFrameMetadataChanged(uint32_t frame_token, const cc::RenderFrameMetadata& metadata) override;
  void OnFrameSubmissionForTesting(uint32_t frame_token) override;
};
class CONTENT_EXPORT RenderFrameMetadataObserverClientAsyncWaiter {
 public:
  explicit RenderFrameMetadataObserverClientAsyncWaiter(RenderFrameMetadataObserverClient* proxy);
  ~RenderFrameMetadataObserverClientAsyncWaiter();

 private:
  RenderFrameMetadataObserverClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RenderFrameMetadataObserverClientAsyncWaiter);
};

class CONTENT_EXPORT RenderFrameMetadataObserverProxy
    : public RenderFrameMetadataObserver {
 public:
  explicit RenderFrameMetadataObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportAllFrameSubmissionsForTesting(bool enabled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT RenderFrameMetadataObserverClientProxy
    : public RenderFrameMetadataObserverClient {
 public:
  explicit RenderFrameMetadataObserverClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnRenderFrameMetadataChanged(uint32_t frame_token, const cc::RenderFrameMetadata& metadata) final;
  void OnFrameSubmissionForTesting(uint32_t frame_token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RenderFrameMetadataObserverStubDispatch {
 public:
  static bool Accept(RenderFrameMetadataObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderFrameMetadataObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderFrameMetadataObserver>>
class RenderFrameMetadataObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderFrameMetadataObserverStub() {}
  ~RenderFrameMetadataObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RenderFrameMetadataObserverClientStubDispatch {
 public:
  static bool Accept(RenderFrameMetadataObserverClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RenderFrameMetadataObserverClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RenderFrameMetadataObserverClient>>
class RenderFrameMetadataObserverClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RenderFrameMetadataObserverClientStub() {}
  ~RenderFrameMetadataObserverClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RenderFrameMetadataObserverClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RenderFrameMetadataObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT RenderFrameMetadataObserverClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CONTENT_EXPORT RenderFrameMetadata {
 public:
  using DataView = RenderFrameMetadataDataView;
  using Data_ = internal::RenderFrameMetadata_Data;

  template <typename... Args>
  static RenderFrameMetadataPtr New(Args&&... args) {
    return RenderFrameMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RenderFrameMetadataPtr From(const U& u) {
    return mojo::TypeConverter<RenderFrameMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RenderFrameMetadata>::Convert(*this);
  }


  RenderFrameMetadata();

  RenderFrameMetadata(
      uint32_t root_background_color,
      const base::Optional<gfx::Vector2dF>& root_scroll_offset,
      bool is_scroll_offset_at_top,
      const viz::Selection<gfx::SelectionBound>& selection,
      bool is_mobile_optimized,
      float device_scale_factor,
      const gfx::Size& viewport_size_in_pixels,
      const base::Optional<viz::LocalSurfaceId>& local_surface_id,
      float top_controls_height,
      float top_controls_shown_ratio,
      float bottom_controls_height,
      float bottom_controls_shown_ratio);

  ~RenderFrameMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RenderFrameMetadataPtr>
  RenderFrameMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RenderFrameMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RenderFrameMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RenderFrameMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RenderFrameMetadata_UnserializedMessageContext<
            UserType, RenderFrameMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RenderFrameMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RenderFrameMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RenderFrameMetadata_UnserializedMessageContext<
            UserType, RenderFrameMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RenderFrameMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t root_background_color;
  base::Optional<gfx::Vector2dF> root_scroll_offset;
  bool is_scroll_offset_at_top;
  viz::Selection<gfx::SelectionBound> selection;
  bool is_mobile_optimized;
  float device_scale_factor;
  gfx::Size viewport_size_in_pixels;
  base::Optional<viz::LocalSurfaceId> local_surface_id;
  float top_controls_height;
  float top_controls_shown_ratio;
  float bottom_controls_height;
  float bottom_controls_shown_ratio;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RenderFrameMetadataPtr RenderFrameMetadata::Clone() const {
  return New(
      mojo::Clone(root_background_color),
      mojo::Clone(root_scroll_offset),
      mojo::Clone(is_scroll_offset_at_top),
      mojo::Clone(selection),
      mojo::Clone(is_mobile_optimized),
      mojo::Clone(device_scale_factor),
      mojo::Clone(viewport_size_in_pixels),
      mojo::Clone(local_surface_id),
      mojo::Clone(top_controls_height),
      mojo::Clone(top_controls_shown_ratio),
      mojo::Clone(bottom_controls_height),
      mojo::Clone(bottom_controls_shown_ratio)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RenderFrameMetadata>::value>::type*>
bool RenderFrameMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->root_background_color, other_struct.root_background_color))
    return false;
  if (!mojo::Equals(this->root_scroll_offset, other_struct.root_scroll_offset))
    return false;
  if (!mojo::Equals(this->is_scroll_offset_at_top, other_struct.is_scroll_offset_at_top))
    return false;
  if (!mojo::Equals(this->selection, other_struct.selection))
    return false;
  if (!mojo::Equals(this->is_mobile_optimized, other_struct.is_mobile_optimized))
    return false;
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  if (!mojo::Equals(this->viewport_size_in_pixels, other_struct.viewport_size_in_pixels))
    return false;
  if (!mojo::Equals(this->local_surface_id, other_struct.local_surface_id))
    return false;
  if (!mojo::Equals(this->top_controls_height, other_struct.top_controls_height))
    return false;
  if (!mojo::Equals(this->top_controls_shown_ratio, other_struct.top_controls_shown_ratio))
    return false;
  if (!mojo::Equals(this->bottom_controls_height, other_struct.bottom_controls_height))
    return false;
  if (!mojo::Equals(this->bottom_controls_shown_ratio, other_struct.bottom_controls_shown_ratio))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::RenderFrameMetadata::DataView,
                                         ::content::mojom::RenderFrameMetadataPtr> {
  static bool IsNull(const ::content::mojom::RenderFrameMetadataPtr& input) { return !input; }
  static void SetToNull(::content::mojom::RenderFrameMetadataPtr* output) { output->reset(); }

  static decltype(::content::mojom::RenderFrameMetadata::root_background_color) root_background_color(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->root_background_color;
  }

  static const decltype(::content::mojom::RenderFrameMetadata::root_scroll_offset)& root_scroll_offset(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->root_scroll_offset;
  }

  static decltype(::content::mojom::RenderFrameMetadata::is_scroll_offset_at_top) is_scroll_offset_at_top(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->is_scroll_offset_at_top;
  }

  static const decltype(::content::mojom::RenderFrameMetadata::selection)& selection(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->selection;
  }

  static decltype(::content::mojom::RenderFrameMetadata::is_mobile_optimized) is_mobile_optimized(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->is_mobile_optimized;
  }

  static decltype(::content::mojom::RenderFrameMetadata::device_scale_factor) device_scale_factor(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->device_scale_factor;
  }

  static const decltype(::content::mojom::RenderFrameMetadata::viewport_size_in_pixels)& viewport_size_in_pixels(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->viewport_size_in_pixels;
  }

  static const decltype(::content::mojom::RenderFrameMetadata::local_surface_id)& local_surface_id(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->local_surface_id;
  }

  static decltype(::content::mojom::RenderFrameMetadata::top_controls_height) top_controls_height(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->top_controls_height;
  }

  static decltype(::content::mojom::RenderFrameMetadata::top_controls_shown_ratio) top_controls_shown_ratio(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->top_controls_shown_ratio;
  }

  static decltype(::content::mojom::RenderFrameMetadata::bottom_controls_height) bottom_controls_height(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->bottom_controls_height;
  }

  static decltype(::content::mojom::RenderFrameMetadata::bottom_controls_shown_ratio) bottom_controls_shown_ratio(
      const ::content::mojom::RenderFrameMetadataPtr& input) {
    return input->bottom_controls_shown_ratio;
  }

  static bool Read(::content::mojom::RenderFrameMetadata::DataView input, ::content::mojom::RenderFrameMetadataPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_RENDER_FRAME_METADATA_MOJOM_H_