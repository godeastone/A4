// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_H_

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
#include "services/shape_detection/public/mojom/barcodedetection.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom.h"
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


namespace shape_detection {
namespace mojom {
class BarcodeDetection;
using BarcodeDetectionPtr = mojo::InterfacePtr<BarcodeDetection>;
using BarcodeDetectionPtrInfo = mojo::InterfacePtrInfo<BarcodeDetection>;
using ThreadSafeBarcodeDetectionPtr =
    mojo::ThreadSafeInterfacePtr<BarcodeDetection>;
using BarcodeDetectionRequest = mojo::InterfaceRequest<BarcodeDetection>;
using BarcodeDetectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<BarcodeDetection>;
using ThreadSafeBarcodeDetectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BarcodeDetection>;
using BarcodeDetectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BarcodeDetection>;
using BarcodeDetectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BarcodeDetection>;

class BarcodeDetectionResult;
using BarcodeDetectionResultPtr = mojo::StructPtr<BarcodeDetectionResult>;


class BarcodeDetectionProxy;

template <typename ImplRefTraits>
class BarcodeDetectionStub;

class BarcodeDetectionRequestValidator;
class BarcodeDetectionResponseValidator;

class  BarcodeDetection
    : public BarcodeDetectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = BarcodeDetectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = BarcodeDetectionStub<ImplRefTraits>;

  using RequestValidator_ = BarcodeDetectionRequestValidator;
  using ResponseValidator_ = BarcodeDetectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDetectMinVersion = 0,
  };
  virtual ~BarcodeDetection() {}


  using DetectCallback = base::OnceCallback<void(std::vector<BarcodeDetectionResultPtr>)>;
  virtual void Detect(const SkBitmap& bitmap_data, DetectCallback callback) = 0;
};
class  BarcodeDetectionInterceptorForTesting : public BarcodeDetection {
  virtual BarcodeDetection* GetForwardingInterface() = 0;
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) override;
};
class  BarcodeDetectionAsyncWaiter {
 public:
  explicit BarcodeDetectionAsyncWaiter(BarcodeDetection* proxy);
  ~BarcodeDetectionAsyncWaiter();
  void Detect(
      const SkBitmap& bitmap_data, std::vector<BarcodeDetectionResultPtr>* out_results);

 private:
  BarcodeDetection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BarcodeDetectionAsyncWaiter);
};

class  BarcodeDetectionProxy
    : public BarcodeDetection {
 public:
  explicit BarcodeDetectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BarcodeDetectionStubDispatch {
 public:
  static bool Accept(BarcodeDetection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BarcodeDetection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BarcodeDetection>>
class BarcodeDetectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BarcodeDetectionStub() {}
  ~BarcodeDetectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BarcodeDetectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BarcodeDetectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  BarcodeDetectionResult {
 public:
  using DataView = BarcodeDetectionResultDataView;
  using Data_ = internal::BarcodeDetectionResult_Data;

  template <typename... Args>
  static BarcodeDetectionResultPtr New(Args&&... args) {
    return BarcodeDetectionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BarcodeDetectionResultPtr From(const U& u) {
    return mojo::TypeConverter<BarcodeDetectionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BarcodeDetectionResult>::Convert(*this);
  }


  BarcodeDetectionResult();

  BarcodeDetectionResult(
      const std::string& raw_value,
      const gfx::RectF& bounding_box,
      const std::vector<gfx::PointF>& corner_points);

  ~BarcodeDetectionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BarcodeDetectionResultPtr>
  BarcodeDetectionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BarcodeDetectionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BarcodeDetectionResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BarcodeDetectionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BarcodeDetectionResult_UnserializedMessageContext<
            UserType, BarcodeDetectionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BarcodeDetectionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BarcodeDetectionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BarcodeDetectionResult_UnserializedMessageContext<
            UserType, BarcodeDetectionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BarcodeDetectionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string raw_value;
  gfx::RectF bounding_box;
  std::vector<gfx::PointF> corner_points;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
BarcodeDetectionResultPtr BarcodeDetectionResult::Clone() const {
  return New(
      mojo::Clone(raw_value),
      mojo::Clone(bounding_box),
      mojo::Clone(corner_points)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BarcodeDetectionResult>::value>::type*>
bool BarcodeDetectionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->raw_value, other_struct.raw_value))
    return false;
  if (!mojo::Equals(this->bounding_box, other_struct.bounding_box))
    return false;
  if (!mojo::Equals(this->corner_points, other_struct.corner_points))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


template <>
struct  StructTraits<::shape_detection::mojom::BarcodeDetectionResult::DataView,
                                         ::shape_detection::mojom::BarcodeDetectionResultPtr> {
  static bool IsNull(const ::shape_detection::mojom::BarcodeDetectionResultPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::BarcodeDetectionResultPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::BarcodeDetectionResult::raw_value)& raw_value(
      const ::shape_detection::mojom::BarcodeDetectionResultPtr& input) {
    return input->raw_value;
  }

  static const decltype(::shape_detection::mojom::BarcodeDetectionResult::bounding_box)& bounding_box(
      const ::shape_detection::mojom::BarcodeDetectionResultPtr& input) {
    return input->bounding_box;
  }

  static const decltype(::shape_detection::mojom::BarcodeDetectionResult::corner_points)& corner_points(
      const ::shape_detection::mojom::BarcodeDetectionResultPtr& input) {
    return input->corner_points;
  }

  static bool Read(::shape_detection::mojom::BarcodeDetectionResult::DataView input, ::shape_detection::mojom::BarcodeDetectionResultPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_H_