// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/jpeg_encode_accelerator.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"

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
struct media_mojom_internal_EncodeStatus_DataHashFn {
  static unsigned GetHash(const ::media::mojom::EncodeStatus& value) {
    using utype = std::underlying_type<::media::mojom::EncodeStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::EncodeStatus& left, const ::media::mojom::EncodeStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct DefaultHash<::media::mojom::EncodeStatus> {
  using Hash = media_mojom_internal_EncodeStatus_DataHashFn;
};

template <>
struct HashTraits<::media::mojom::EncodeStatus>
    : public GenericHashTraits<::media::mojom::EncodeStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::EncodeStatus& value) {
    return value == static_cast<::media::mojom::EncodeStatus>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::EncodeStatus& slot, bool) {
    slot = static_cast<::media::mojom::EncodeStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::EncodeStatus& value) {
    return value == static_cast<::media::mojom::EncodeStatus>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using EncodeStatus = EncodeStatus;  // Alias for definition in the parent namespace.
class JpegEncodeAccelerator;
using JpegEncodeAcceleratorPtr = mojo::InterfacePtr<JpegEncodeAccelerator>;
using RevocableJpegEncodeAcceleratorPtr = ::blink::RevocableInterfacePtr<JpegEncodeAccelerator>;
using JpegEncodeAcceleratorPtrInfo = mojo::InterfacePtrInfo<JpegEncodeAccelerator>;
using ThreadSafeJpegEncodeAcceleratorPtr =
    mojo::ThreadSafeInterfacePtr<JpegEncodeAccelerator>;
using JpegEncodeAcceleratorRequest = mojo::InterfaceRequest<JpegEncodeAccelerator>;
using JpegEncodeAcceleratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<JpegEncodeAccelerator>;
using ThreadSafeJpegEncodeAcceleratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<JpegEncodeAccelerator>;
using JpegEncodeAcceleratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<JpegEncodeAccelerator>;
using JpegEncodeAcceleratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<JpegEncodeAccelerator>;


class JpegEncodeAcceleratorProxy;

template <typename ImplRefTraits>
class JpegEncodeAcceleratorStub;

class JpegEncodeAcceleratorRequestValidator;
class JpegEncodeAcceleratorResponseValidator;

class  JpegEncodeAccelerator
    : public JpegEncodeAcceleratorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = JpegEncodeAcceleratorProxy;

  template <typename ImplRefTraits>
  using Stub_ = JpegEncodeAcceleratorStub<ImplRefTraits>;

  using RequestValidator_ = JpegEncodeAcceleratorRequestValidator;
  using ResponseValidator_ = JpegEncodeAcceleratorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kEncodeWithFDMinVersion = 0,
  };
  virtual ~JpegEncodeAccelerator() {}


  using InitializeCallback = base::OnceCallback<void(bool)>;
  virtual void Initialize(InitializeCallback callback) = 0;


  using EncodeWithFDCallback = base::OnceCallback<void(int32_t, uint32_t, EncodeStatus)>;
  virtual void EncodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle exif_fd, uint32_t exif_buffer_size, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, EncodeWithFDCallback callback) = 0;
};
class  JpegEncodeAcceleratorInterceptorForTesting : public JpegEncodeAccelerator {
  virtual JpegEncodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void EncodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle exif_fd, uint32_t exif_buffer_size, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, EncodeWithFDCallback callback) override;
};
class  JpegEncodeAcceleratorAsyncWaiter {
 public:
  explicit JpegEncodeAcceleratorAsyncWaiter(JpegEncodeAccelerator* proxy);
  ~JpegEncodeAcceleratorAsyncWaiter();
  void Initialize(
      bool* out_success);
  void EncodeWithFD(
      int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle exif_fd, uint32_t exif_buffer_size, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, int32_t* out_buffer_id, uint32_t* out_encoded_buffer_size, EncodeStatus* out_status);

 private:
  JpegEncodeAccelerator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(JpegEncodeAcceleratorAsyncWaiter);
};

class  JpegEncodeAcceleratorProxy
    : public JpegEncodeAccelerator {
 public:
  explicit JpegEncodeAcceleratorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(InitializeCallback callback) final;
  void EncodeWithFD(int32_t buffer_id, mojo::ScopedHandle input_fd, uint32_t input_buffer_size, int32_t coded_size_width, int32_t coded_size_height, mojo::ScopedHandle exif_fd, uint32_t exif_buffer_size, mojo::ScopedHandle output_fd, uint32_t output_buffer_size, EncodeWithFDCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  JpegEncodeAcceleratorStubDispatch {
 public:
  static bool Accept(JpegEncodeAccelerator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      JpegEncodeAccelerator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<JpegEncodeAccelerator>>
class JpegEncodeAcceleratorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  JpegEncodeAcceleratorStub() {}
  ~JpegEncodeAcceleratorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return JpegEncodeAcceleratorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return JpegEncodeAcceleratorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  JpegEncodeAcceleratorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  JpegEncodeAcceleratorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_JPEG_ENCODE_ACCELERATOR_MOJOM_BLINK_H_