// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_H_

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
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "ui/base/clipboard/clipboard_types.h"
#include "third_party/blink/common/common_export.h"


namespace blink {
namespace mojom {
class ClipboardHost;
using ClipboardHostPtr = mojo::InterfacePtr<ClipboardHost>;
using ClipboardHostPtrInfo = mojo::InterfacePtrInfo<ClipboardHost>;
using ThreadSafeClipboardHostPtr =
    mojo::ThreadSafeInterfacePtr<ClipboardHost>;
using ClipboardHostRequest = mojo::InterfaceRequest<ClipboardHost>;
using ClipboardHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClipboardHost>;
using ThreadSafeClipboardHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ClipboardHost>;
using ClipboardHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClipboardHost>;
using ClipboardHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ClipboardHost>;


class ClipboardHostProxy;

template <typename ImplRefTraits>
class ClipboardHostStub;

class ClipboardHostRequestValidator;
class ClipboardHostResponseValidator;

class BLINK_COMMON_EXPORT ClipboardHost
    : public ClipboardHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = ClipboardHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClipboardHostStub<ImplRefTraits>;

  using RequestValidator_ = ClipboardHostRequestValidator;
  using ResponseValidator_ = ClipboardHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSequenceNumberMinVersion = 0,
    kIsFormatAvailableMinVersion = 0,
    kReadAvailableTypesMinVersion = 0,
    kReadTextMinVersion = 0,
    kReadHtmlMinVersion = 0,
    kReadRtfMinVersion = 0,
    kReadImageMinVersion = 0,
    kReadCustomDataMinVersion = 0,
    kWriteTextMinVersion = 0,
    kWriteHtmlMinVersion = 0,
    kWriteSmartPasteMarkerMinVersion = 0,
    kWriteCustomDataMinVersion = 0,
    kWriteBookmarkMinVersion = 0,
    kWriteImageMinVersion = 0,
    kCommitWriteMinVersion = 0,
  };
  virtual ~ClipboardHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetSequenceNumber(ui::ClipboardType buffer, uint64_t* out_result);

  using GetSequenceNumberCallback = base::OnceCallback<void(uint64_t)>;
  virtual void GetSequenceNumber(ui::ClipboardType buffer, GetSequenceNumberCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, bool* out_result);

  using IsFormatAvailableCallback = base::OnceCallback<void(bool)>;
  virtual void IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, IsFormatAvailableCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadAvailableTypes(ui::ClipboardType buffer, std::vector<base::string16>* out_types, bool* out_result);

  using ReadAvailableTypesCallback = base::OnceCallback<void(const std::vector<base::string16>&, bool)>;
  virtual void ReadAvailableTypes(ui::ClipboardType buffer, ReadAvailableTypesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadText(ui::ClipboardType buffer, base::string16* out_result);

  using ReadTextCallback = base::OnceCallback<void(const base::string16&)>;
  virtual void ReadText(ui::ClipboardType buffer, ReadTextCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadHtml(ui::ClipboardType buffer, base::string16* out_markup, GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);

  using ReadHtmlCallback = base::OnceCallback<void(const base::string16&, const GURL&, uint32_t, uint32_t)>;
  virtual void ReadHtml(ui::ClipboardType buffer, ReadHtmlCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadRtf(ui::ClipboardType buffer, std::string* out_result);

  using ReadRtfCallback = base::OnceCallback<void(const std::string&)>;
  virtual void ReadRtf(ui::ClipboardType buffer, ReadRtfCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadImage(ui::ClipboardType buffer, ::blink::mojom::SerializedBlobPtr* out_blob);

  using ReadImageCallback = base::OnceCallback<void(::blink::mojom::SerializedBlobPtr)>;
  virtual void ReadImage(ui::ClipboardType buffer, ReadImageCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool ReadCustomData(ui::ClipboardType buffer, const base::string16& type, base::string16* out_result);

  using ReadCustomDataCallback = base::OnceCallback<void(const base::string16&)>;
  virtual void ReadCustomData(ui::ClipboardType buffer, const base::string16& type, ReadCustomDataCallback callback) = 0;

  virtual void WriteText(ui::ClipboardType buffer, const base::string16& text) = 0;

  virtual void WriteHtml(ui::ClipboardType buffer, const base::string16& markup, const GURL& url) = 0;

  virtual void WriteSmartPasteMarker(ui::ClipboardType buffer) = 0;

  virtual void WriteCustomData(ui::ClipboardType buffer, const base::flat_map<base::string16, base::string16>& data) = 0;

  virtual void WriteBookmark(ui::ClipboardType buffer, const std::string& url, const base::string16& title) = 0;

  virtual void WriteImage(ui::ClipboardType buffer, const gfx::Size& size_in_pixels, mojo::ScopedSharedBufferHandle shared_buffer_handle) = 0;

  virtual void CommitWrite(ui::ClipboardType buffer) = 0;
};
class BLINK_COMMON_EXPORT ClipboardHostInterceptorForTesting : public ClipboardHost {
  virtual ClipboardHost* GetForwardingInterface() = 0;
  void GetSequenceNumber(ui::ClipboardType buffer, GetSequenceNumberCallback callback) override;
  void IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, IsFormatAvailableCallback callback) override;
  void ReadAvailableTypes(ui::ClipboardType buffer, ReadAvailableTypesCallback callback) override;
  void ReadText(ui::ClipboardType buffer, ReadTextCallback callback) override;
  void ReadHtml(ui::ClipboardType buffer, ReadHtmlCallback callback) override;
  void ReadRtf(ui::ClipboardType buffer, ReadRtfCallback callback) override;
  void ReadImage(ui::ClipboardType buffer, ReadImageCallback callback) override;
  void ReadCustomData(ui::ClipboardType buffer, const base::string16& type, ReadCustomDataCallback callback) override;
  void WriteText(ui::ClipboardType buffer, const base::string16& text) override;
  void WriteHtml(ui::ClipboardType buffer, const base::string16& markup, const GURL& url) override;
  void WriteSmartPasteMarker(ui::ClipboardType buffer) override;
  void WriteCustomData(ui::ClipboardType buffer, const base::flat_map<base::string16, base::string16>& data) override;
  void WriteBookmark(ui::ClipboardType buffer, const std::string& url, const base::string16& title) override;
  void WriteImage(ui::ClipboardType buffer, const gfx::Size& size_in_pixels, mojo::ScopedSharedBufferHandle shared_buffer_handle) override;
  void CommitWrite(ui::ClipboardType buffer) override;
};
class BLINK_COMMON_EXPORT ClipboardHostAsyncWaiter {
 public:
  explicit ClipboardHostAsyncWaiter(ClipboardHost* proxy);
  ~ClipboardHostAsyncWaiter();
  void GetSequenceNumber(
      ui::ClipboardType buffer, uint64_t* out_result);
  void IsFormatAvailable(
      ClipboardFormat format, ui::ClipboardType buffer, bool* out_result);
  void ReadAvailableTypes(
      ui::ClipboardType buffer, std::vector<base::string16>* out_types, bool* out_result);
  void ReadText(
      ui::ClipboardType buffer, base::string16* out_result);
  void ReadHtml(
      ui::ClipboardType buffer, base::string16* out_markup, GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);
  void ReadRtf(
      ui::ClipboardType buffer, std::string* out_result);
  void ReadImage(
      ui::ClipboardType buffer, ::blink::mojom::SerializedBlobPtr* out_blob);
  void ReadCustomData(
      ui::ClipboardType buffer, const base::string16& type, base::string16* out_result);

 private:
  ClipboardHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHostAsyncWaiter);
};

class BLINK_COMMON_EXPORT ClipboardHostProxy
    : public ClipboardHost {
 public:
  explicit ClipboardHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetSequenceNumber(ui::ClipboardType buffer, uint64_t* out_result) final;
  void GetSequenceNumber(ui::ClipboardType buffer, GetSequenceNumberCallback callback) final;
  bool IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, bool* out_result) final;
  void IsFormatAvailable(ClipboardFormat format, ui::ClipboardType buffer, IsFormatAvailableCallback callback) final;
  bool ReadAvailableTypes(ui::ClipboardType buffer, std::vector<base::string16>* out_types, bool* out_result) final;
  void ReadAvailableTypes(ui::ClipboardType buffer, ReadAvailableTypesCallback callback) final;
  bool ReadText(ui::ClipboardType buffer, base::string16* out_result) final;
  void ReadText(ui::ClipboardType buffer, ReadTextCallback callback) final;
  bool ReadHtml(ui::ClipboardType buffer, base::string16* out_markup, GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) final;
  void ReadHtml(ui::ClipboardType buffer, ReadHtmlCallback callback) final;
  bool ReadRtf(ui::ClipboardType buffer, std::string* out_result) final;
  void ReadRtf(ui::ClipboardType buffer, ReadRtfCallback callback) final;
  bool ReadImage(ui::ClipboardType buffer, ::blink::mojom::SerializedBlobPtr* out_blob) final;
  void ReadImage(ui::ClipboardType buffer, ReadImageCallback callback) final;
  bool ReadCustomData(ui::ClipboardType buffer, const base::string16& type, base::string16* out_result) final;
  void ReadCustomData(ui::ClipboardType buffer, const base::string16& type, ReadCustomDataCallback callback) final;
  void WriteText(ui::ClipboardType buffer, const base::string16& text) final;
  void WriteHtml(ui::ClipboardType buffer, const base::string16& markup, const GURL& url) final;
  void WriteSmartPasteMarker(ui::ClipboardType buffer) final;
  void WriteCustomData(ui::ClipboardType buffer, const base::flat_map<base::string16, base::string16>& data) final;
  void WriteBookmark(ui::ClipboardType buffer, const std::string& url, const base::string16& title) final;
  void WriteImage(ui::ClipboardType buffer, const gfx::Size& size_in_pixels, mojo::ScopedSharedBufferHandle shared_buffer_handle) final;
  void CommitWrite(ui::ClipboardType buffer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ClipboardHostStubDispatch {
 public:
  static bool Accept(ClipboardHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ClipboardHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ClipboardHost>>
class ClipboardHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClipboardHostStub() {}
  ~ClipboardHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ClipboardHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ClipboardHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_H_