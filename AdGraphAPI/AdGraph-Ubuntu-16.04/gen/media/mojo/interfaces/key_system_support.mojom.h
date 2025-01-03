// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_H_

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
#include "media/mojo/interfaces/key_system_support.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom.h"
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
class KeySystemSupport;
using KeySystemSupportPtr = mojo::InterfacePtr<KeySystemSupport>;
using KeySystemSupportPtrInfo = mojo::InterfacePtrInfo<KeySystemSupport>;
using ThreadSafeKeySystemSupportPtr =
    mojo::ThreadSafeInterfacePtr<KeySystemSupport>;
using KeySystemSupportRequest = mojo::InterfaceRequest<KeySystemSupport>;
using KeySystemSupportAssociatedPtr =
    mojo::AssociatedInterfacePtr<KeySystemSupport>;
using ThreadSafeKeySystemSupportAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<KeySystemSupport>;
using KeySystemSupportAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<KeySystemSupport>;
using KeySystemSupportAssociatedRequest =
    mojo::AssociatedInterfaceRequest<KeySystemSupport>;


class KeySystemSupportProxy;

template <typename ImplRefTraits>
class KeySystemSupportStub;

class KeySystemSupportRequestValidator;
class KeySystemSupportResponseValidator;

class  KeySystemSupport
    : public KeySystemSupportInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = KeySystemSupportProxy;

  template <typename ImplRefTraits>
  using Stub_ = KeySystemSupportStub<ImplRefTraits>;

  using RequestValidator_ = KeySystemSupportRequestValidator;
  using ResponseValidator_ = KeySystemSupportResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIsKeySystemSupportedMinVersion = 0,
  };
  virtual ~KeySystemSupport() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IsKeySystemSupported(const std::string& key_system, bool* out_is_supported, std::vector<media::VideoCodec>* out_supported_video_codecs, bool* out_supports_persistent_license, std::vector<media::EncryptionMode>* out_supported_encryption_schemes);

  using IsKeySystemSupportedCallback = base::OnceCallback<void(bool, const std::vector<media::VideoCodec>&, bool, const std::vector<media::EncryptionMode>&)>;
  virtual void IsKeySystemSupported(const std::string& key_system, IsKeySystemSupportedCallback callback) = 0;
};
class  KeySystemSupportInterceptorForTesting : public KeySystemSupport {
  virtual KeySystemSupport* GetForwardingInterface() = 0;
  void IsKeySystemSupported(const std::string& key_system, IsKeySystemSupportedCallback callback) override;
};
class  KeySystemSupportAsyncWaiter {
 public:
  explicit KeySystemSupportAsyncWaiter(KeySystemSupport* proxy);
  ~KeySystemSupportAsyncWaiter();
  void IsKeySystemSupported(
      const std::string& key_system, bool* out_is_supported, std::vector<media::VideoCodec>* out_supported_video_codecs, bool* out_supports_persistent_license, std::vector<media::EncryptionMode>* out_supported_encryption_schemes);

 private:
  KeySystemSupport* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(KeySystemSupportAsyncWaiter);
};

class  KeySystemSupportProxy
    : public KeySystemSupport {
 public:
  explicit KeySystemSupportProxy(mojo::MessageReceiverWithResponder* receiver);
  bool IsKeySystemSupported(const std::string& key_system, bool* out_is_supported, std::vector<media::VideoCodec>* out_supported_video_codecs, bool* out_supports_persistent_license, std::vector<media::EncryptionMode>* out_supported_encryption_schemes) final;
  void IsKeySystemSupported(const std::string& key_system, IsKeySystemSupportedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  KeySystemSupportStubDispatch {
 public:
  static bool Accept(KeySystemSupport* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      KeySystemSupport* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<KeySystemSupport>>
class KeySystemSupportStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  KeySystemSupportStub() {}
  ~KeySystemSupportStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeySystemSupportStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeySystemSupportStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  KeySystemSupportRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  KeySystemSupportResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_H_