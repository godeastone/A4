// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_H_

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
#include "services/ui/public/interfaces/clipboard.mojom-shared.h"
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


namespace ui {
namespace mojom {
extern const char kMimeTypeHTML[];
extern const char kMimeTypeMozillaURL[];
extern const char kMimeTypePNG[];
extern const char kMimeTypeRTF[];
extern const char kMimeTypeText[];
extern const char kMimeTypeURIList[];
extern const char kMimeTypeURL[];
class Clipboard;
using ClipboardPtr = mojo::InterfacePtr<Clipboard>;
using ClipboardPtrInfo = mojo::InterfacePtrInfo<Clipboard>;
using ThreadSafeClipboardPtr =
    mojo::ThreadSafeInterfacePtr<Clipboard>;
using ClipboardRequest = mojo::InterfaceRequest<Clipboard>;
using ClipboardAssociatedPtr =
    mojo::AssociatedInterfacePtr<Clipboard>;
using ThreadSafeClipboardAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Clipboard>;
using ClipboardAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Clipboard>;
using ClipboardAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Clipboard>;


class ClipboardProxy;

template <typename ImplRefTraits>
class ClipboardStub;

class ClipboardRequestValidator;
class ClipboardResponseValidator;

class  Clipboard
    : public ClipboardInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = ClipboardProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClipboardStub<ImplRefTraits>;

  using RequestValidator_ = ClipboardRequestValidator;
  using ResponseValidator_ = ClipboardResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSequenceNumberMinVersion = 0,
    kGetAvailableMimeTypesMinVersion = 0,
    kReadClipboardDataMinVersion = 0,
    kWriteClipboardDataMinVersion = 0,
  };
  using Type = Clipboard_Type;
  virtual ~Clipboard() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetSequenceNumber(Clipboard::Type clipboard_type, uint64_t* out_sequence);

  using GetSequenceNumberCallback = base::OnceCallback<void(uint64_t)>;
  virtual void GetSequenceNumber(Clipboard::Type clipboard_type, GetSequenceNumberCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetAvailableMimeTypes(Clipboard::Type clipboard_types, uint64_t* out_sequence, std::vector<std::string>* out_types);

  using GetAvailableMimeTypesCallback = base::OnceCallback<void(uint64_t, const std::vector<std::string>&)>;
  virtual void GetAvailableMimeTypes(Clipboard::Type clipboard_types, GetAvailableMimeTypesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, uint64_t* out_sequence, base::Optional<std::vector<uint8_t>>* out_data);

  using ReadClipboardDataCallback = base::OnceCallback<void(uint64_t, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, ReadClipboardDataCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, uint64_t* out_sequence);

  using WriteClipboardDataCallback = base::OnceCallback<void(uint64_t)>;
  virtual void WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, WriteClipboardDataCallback callback) = 0;
};
class  ClipboardInterceptorForTesting : public Clipboard {
  virtual Clipboard* GetForwardingInterface() = 0;
  void GetSequenceNumber(Clipboard::Type clipboard_type, GetSequenceNumberCallback callback) override;
  void GetAvailableMimeTypes(Clipboard::Type clipboard_types, GetAvailableMimeTypesCallback callback) override;
  void ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, ReadClipboardDataCallback callback) override;
  void WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, WriteClipboardDataCallback callback) override;
};
class  ClipboardAsyncWaiter {
 public:
  explicit ClipboardAsyncWaiter(Clipboard* proxy);
  ~ClipboardAsyncWaiter();
  void GetSequenceNumber(
      Clipboard::Type clipboard_type, uint64_t* out_sequence);
  void GetAvailableMimeTypes(
      Clipboard::Type clipboard_types, uint64_t* out_sequence, std::vector<std::string>* out_types);
  void ReadClipboardData(
      Clipboard::Type clipboard_type, const std::string& mime_type, uint64_t* out_sequence, base::Optional<std::vector<uint8_t>>* out_data);
  void WriteClipboardData(
      Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, uint64_t* out_sequence);

 private:
  Clipboard* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardAsyncWaiter);
};

class  ClipboardProxy
    : public Clipboard {
 public:
  explicit ClipboardProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetSequenceNumber(Clipboard::Type clipboard_type, uint64_t* out_sequence) final;
  void GetSequenceNumber(Clipboard::Type clipboard_type, GetSequenceNumberCallback callback) final;
  bool GetAvailableMimeTypes(Clipboard::Type clipboard_types, uint64_t* out_sequence, std::vector<std::string>* out_types) final;
  void GetAvailableMimeTypes(Clipboard::Type clipboard_types, GetAvailableMimeTypesCallback callback) final;
  bool ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, uint64_t* out_sequence, base::Optional<std::vector<uint8_t>>* out_data) final;
  void ReadClipboardData(Clipboard::Type clipboard_type, const std::string& mime_type, ReadClipboardDataCallback callback) final;
  bool WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, uint64_t* out_sequence) final;
  void WriteClipboardData(Clipboard::Type clipboard_type, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& data, WriteClipboardDataCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ClipboardStubDispatch {
 public:
  static bool Accept(Clipboard* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Clipboard* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Clipboard>>
class ClipboardStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClipboardStub() {}
  ~ClipboardStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ClipboardRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ClipboardResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_H_