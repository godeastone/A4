// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "components/services/pdf_compositor/public/interfaces/pdf_compositor.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "components/services/pdf_compositor/public/interfaces/pdf_compositor.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace printing {
namespace mojom {
const char kServiceName[] = "pdf_compositor";
const char PdfCompositor::Name_[] = "printing.mojom.PdfCompositor";

class PdfCompositor_CompositePageToPdf_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PdfCompositor_CompositePageToPdf_ForwardToCallback(
      PdfCompositor::CompositePageToPdfCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PdfCompositor::CompositePageToPdfCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PdfCompositor_CompositePageToPdf_ForwardToCallback);
};

class PdfCompositor_CompositeDocumentToPdf_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PdfCompositor_CompositeDocumentToPdf_ForwardToCallback(
      PdfCompositor::CompositeDocumentToPdfCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PdfCompositor::CompositeDocumentToPdfCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PdfCompositor_CompositeDocumentToPdf_ForwardToCallback);
};

PdfCompositorProxy::PdfCompositorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PdfCompositorProxy::NotifyUnavailableSubframe(
    uint64_t in_frame_guid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "printing::mojom::PdfCompositor::NotifyUnavailableSubframe");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_NotifyUnavailableSubframe_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_NotifyUnavailableSubframe_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_guid = in_frame_guid;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfCompositorProxy::AddSubframeContent(
    uint64_t in_frame_guid, mojo::ScopedSharedBufferHandle in_serialized_content, const base::flat_map<uint32_t, uint64_t>& in_subframe_content_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "printing::mojom::PdfCompositor::AddSubframeContent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_AddSubframeContent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_AddSubframeContent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_guid = in_frame_guid;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_serialized_content, &params->serialized_content, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->serialized_content),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid serialized_content in PdfCompositor.AddSubframeContent request");
  typename decltype(params->subframe_content_info)::BaseType::BufferWriter
      subframe_content_info_writer;
  const mojo::internal::ContainerValidateParams subframe_content_info_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<uint32_t, uint64_t>>(
      in_subframe_content_info, buffer, &subframe_content_info_writer, &subframe_content_info_validate_params,
      &serialization_context);
  params->subframe_content_info.Set(
      subframe_content_info_writer.is_null() ? nullptr : subframe_content_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subframe_content_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subframe_content_info in PdfCompositor.AddSubframeContent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PdfCompositorProxy::CompositePageToPdf(
    uint64_t in_frame_guid, uint32_t in_page_num, mojo::ScopedSharedBufferHandle in_sk_handle, const base::flat_map<uint32_t, uint64_t>& in_subframe_content_info, CompositePageToPdfCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "printing::mojom::PdfCompositor::CompositePageToPdf");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_CompositePageToPdf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_CompositePageToPdf_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_guid = in_frame_guid;
  params->page_num = in_page_num;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_sk_handle, &params->sk_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->sk_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid sk_handle in PdfCompositor.CompositePageToPdf request");
  typename decltype(params->subframe_content_info)::BaseType::BufferWriter
      subframe_content_info_writer;
  const mojo::internal::ContainerValidateParams subframe_content_info_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<uint32_t, uint64_t>>(
      in_subframe_content_info, buffer, &subframe_content_info_writer, &subframe_content_info_validate_params,
      &serialization_context);
  params->subframe_content_info.Set(
      subframe_content_info_writer.is_null() ? nullptr : subframe_content_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subframe_content_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subframe_content_info in PdfCompositor.CompositePageToPdf request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PdfCompositor_CompositePageToPdf_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PdfCompositorProxy::CompositeDocumentToPdf(
    uint64_t in_frame_guid, mojo::ScopedSharedBufferHandle in_sk_handle, const base::flat_map<uint32_t, uint64_t>& in_subframe_content_info, CompositeDocumentToPdfCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "printing::mojom::PdfCompositor::CompositeDocumentToPdf");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_CompositeDocumentToPdf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_CompositeDocumentToPdf_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->frame_guid = in_frame_guid;
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_sk_handle, &params->sk_handle, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->sk_handle),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid sk_handle in PdfCompositor.CompositeDocumentToPdf request");
  typename decltype(params->subframe_content_info)::BaseType::BufferWriter
      subframe_content_info_writer;
  const mojo::internal::ContainerValidateParams subframe_content_info_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<uint32_t, uint64_t>>(
      in_subframe_content_info, buffer, &subframe_content_info_writer, &subframe_content_info_validate_params,
      &serialization_context);
  params->subframe_content_info.Set(
      subframe_content_info_writer.is_null() ? nullptr : subframe_content_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->subframe_content_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null subframe_content_info in PdfCompositor.CompositeDocumentToPdf request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PdfCompositor_CompositeDocumentToPdf_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PdfCompositorProxy::SetWebContentsURL(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "printing::mojom::PdfCompositor::SetWebContentsURL");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_SetWebContentsURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_SetWebContentsURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PdfCompositor.SetWebContentsURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PdfCompositor_CompositePageToPdf_ProxyToResponder {
 public:
  static PdfCompositor::CompositePageToPdfCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PdfCompositor_CompositePageToPdf_ProxyToResponder> proxy(
        new PdfCompositor_CompositePageToPdf_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PdfCompositor_CompositePageToPdf_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PdfCompositor_CompositePageToPdf_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PdfCompositor_CompositePageToPdf_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PdfCompositor::CompositePageToPdfCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PdfCompositor::Status in_status, base::ReadOnlySharedMemoryRegion in_pdf_region);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PdfCompositor_CompositePageToPdf_ProxyToResponder);
};

bool PdfCompositor_CompositePageToPdf_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "printing::mojom::PdfCompositor::CompositePageToPdfCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PdfCompositor_CompositePageToPdf_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PdfCompositor_CompositePageToPdf_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PdfCompositor::Status p_status{};
  base::ReadOnlySharedMemoryRegion p_pdf_region{};
  PdfCompositor_CompositePageToPdf_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadPdfRegion(&p_pdf_region))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PdfCompositor::CompositePageToPdf response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_pdf_region));
  return true;
}

void PdfCompositor_CompositePageToPdf_ProxyToResponder::Run(
    PdfCompositor::Status in_status, base::ReadOnlySharedMemoryRegion in_pdf_region) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_CompositePageToPdf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_CompositePageToPdf_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::printing::mojom::PdfCompositor_Status>(
      in_status, &params->status);
  typename decltype(params->pdf_region)::BaseType::BufferWriter
      pdf_region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_pdf_region, buffer, &pdf_region_writer, &serialization_context);
  params->pdf_region.Set(
      pdf_region_writer.is_null() ? nullptr : pdf_region_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::CompositePageToPdfCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PdfCompositor_CompositeDocumentToPdf_ProxyToResponder {
 public:
  static PdfCompositor::CompositeDocumentToPdfCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PdfCompositor_CompositeDocumentToPdf_ProxyToResponder> proxy(
        new PdfCompositor_CompositeDocumentToPdf_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PdfCompositor_CompositeDocumentToPdf_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PdfCompositor_CompositeDocumentToPdf_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  PdfCompositor_CompositeDocumentToPdf_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "PdfCompositor::CompositeDocumentToPdfCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PdfCompositor::Status in_status, base::ReadOnlySharedMemoryRegion in_pdf_region);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PdfCompositor_CompositeDocumentToPdf_ProxyToResponder);
};

bool PdfCompositor_CompositeDocumentToPdf_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "printing::mojom::PdfCompositor::CompositeDocumentToPdfCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PdfCompositor::Status p_status{};
  base::ReadOnlySharedMemoryRegion p_pdf_region{};
  PdfCompositor_CompositeDocumentToPdf_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadPdfRegion(&p_pdf_region))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PdfCompositor::CompositeDocumentToPdf response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_pdf_region));
  return true;
}

void PdfCompositor_CompositeDocumentToPdf_ProxyToResponder::Run(
    PdfCompositor::Status in_status, base::ReadOnlySharedMemoryRegion in_pdf_region) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfCompositor_CompositeDocumentToPdf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::printing::mojom::PdfCompositor_Status>(
      in_status, &params->status);
  typename decltype(params->pdf_region)::BaseType::BufferWriter
      pdf_region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_pdf_region, buffer, &pdf_region_writer, &serialization_context);
  params->pdf_region.Set(
      pdf_region_writer.is_null() ? nullptr : pdf_region_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::CompositeDocumentToPdfCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PdfCompositorStubDispatch::Accept(
    PdfCompositor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPdfCompositor_NotifyUnavailableSubframe_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::NotifyUnavailableSubframe",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfCompositor_NotifyUnavailableSubframe_Params_Data* params =
          reinterpret_cast<internal::PdfCompositor_NotifyUnavailableSubframe_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_frame_guid{};
      PdfCompositor_NotifyUnavailableSubframe_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_guid = input_data_view.frame_guid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfCompositor::NotifyUnavailableSubframe deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->NotifyUnavailableSubframe(
std::move(p_frame_guid));
      return true;
    }
    case internal::kPdfCompositor_AddSubframeContent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::AddSubframeContent",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfCompositor_AddSubframeContent_Params_Data* params =
          reinterpret_cast<internal::PdfCompositor_AddSubframeContent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_frame_guid{};
      mojo::ScopedSharedBufferHandle p_serialized_content{};
      base::flat_map<uint32_t, uint64_t> p_subframe_content_info{};
      PdfCompositor_AddSubframeContent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_guid = input_data_view.frame_guid();
      p_serialized_content = input_data_view.TakeSerializedContent();
      if (!input_data_view.ReadSubframeContentInfo(&p_subframe_content_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfCompositor::AddSubframeContent deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddSubframeContent(
std::move(p_frame_guid), 
std::move(p_serialized_content), 
std::move(p_subframe_content_info));
      return true;
    }
    case internal::kPdfCompositor_CompositePageToPdf_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::CompositePageToPdf",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfCompositor_CompositeDocumentToPdf_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::CompositeDocumentToPdf",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfCompositor_SetWebContentsURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::SetWebContentsURL",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PdfCompositor_SetWebContentsURL_Params_Data* params =
          reinterpret_cast<internal::PdfCompositor_SetWebContentsURL_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      PdfCompositor_SetWebContentsURL_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfCompositor::SetWebContentsURL deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetWebContentsURL(
std::move(p_url));
      return true;
    }
  }
  return false;
}

// static
bool PdfCompositorStubDispatch::AcceptWithResponder(
    PdfCompositor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPdfCompositor_NotifyUnavailableSubframe_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::NotifyUnavailableSubframe",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfCompositor_AddSubframeContent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::AddSubframeContent",
               "message", message->name());
#endif
      break;
    }
    case internal::kPdfCompositor_CompositePageToPdf_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::CompositePageToPdf",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PdfCompositor_CompositePageToPdf_Params_Data* params =
          reinterpret_cast<
              internal::PdfCompositor_CompositePageToPdf_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_frame_guid{};
      uint32_t p_page_num{};
      mojo::ScopedSharedBufferHandle p_sk_handle{};
      base::flat_map<uint32_t, uint64_t> p_subframe_content_info{};
      PdfCompositor_CompositePageToPdf_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_guid = input_data_view.frame_guid();
      p_page_num = input_data_view.page_num();
      p_sk_handle = input_data_view.TakeSkHandle();
      if (!input_data_view.ReadSubframeContentInfo(&p_subframe_content_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfCompositor::CompositePageToPdf deserializer");
        return false;
      }
      PdfCompositor::CompositePageToPdfCallback callback =
          PdfCompositor_CompositePageToPdf_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CompositePageToPdf(
std::move(p_frame_guid), 
std::move(p_page_num), 
std::move(p_sk_handle), 
std::move(p_subframe_content_info), std::move(callback));
      return true;
    }
    case internal::kPdfCompositor_CompositeDocumentToPdf_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::CompositeDocumentToPdf",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PdfCompositor_CompositeDocumentToPdf_Params_Data* params =
          reinterpret_cast<
              internal::PdfCompositor_CompositeDocumentToPdf_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_frame_guid{};
      mojo::ScopedSharedBufferHandle p_sk_handle{};
      base::flat_map<uint32_t, uint64_t> p_subframe_content_info{};
      PdfCompositor_CompositeDocumentToPdf_ParamsDataView input_data_view(params, &serialization_context);
      
      p_frame_guid = input_data_view.frame_guid();
      p_sk_handle = input_data_view.TakeSkHandle();
      if (!input_data_view.ReadSubframeContentInfo(&p_subframe_content_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfCompositor::CompositeDocumentToPdf deserializer");
        return false;
      }
      PdfCompositor::CompositeDocumentToPdfCallback callback =
          PdfCompositor_CompositeDocumentToPdf_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CompositeDocumentToPdf(
std::move(p_frame_guid), 
std::move(p_sk_handle), 
std::move(p_subframe_content_info), std::move(callback));
      return true;
    }
    case internal::kPdfCompositor_SetWebContentsURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfCompositor::SetWebContentsURL",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PdfCompositorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PdfCompositor RequestValidator");

  switch (message->header()->name) {
    case internal::kPdfCompositor_NotifyUnavailableSubframe_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_NotifyUnavailableSubframe_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfCompositor_AddSubframeContent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_AddSubframeContent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfCompositor_CompositePageToPdf_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_CompositePageToPdf_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfCompositor_CompositeDocumentToPdf_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_CompositeDocumentToPdf_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfCompositor_SetWebContentsURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_SetWebContentsURL_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool PdfCompositorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PdfCompositor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPdfCompositor_CompositePageToPdf_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_CompositePageToPdf_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPdfCompositor_CompositeDocumentToPdf_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfCompositor_CompositeDocumentToPdf_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
void PdfCompositorInterceptorForTesting::NotifyUnavailableSubframe(uint64_t frame_guid) {
  GetForwardingInterface()->NotifyUnavailableSubframe(std::move(frame_guid));
}
void PdfCompositorInterceptorForTesting::AddSubframeContent(uint64_t frame_guid, mojo::ScopedSharedBufferHandle serialized_content, const base::flat_map<uint32_t, uint64_t>& subframe_content_info) {
  GetForwardingInterface()->AddSubframeContent(std::move(frame_guid), std::move(serialized_content), std::move(subframe_content_info));
}
void PdfCompositorInterceptorForTesting::CompositePageToPdf(uint64_t frame_guid, uint32_t page_num, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositePageToPdfCallback callback) {
  GetForwardingInterface()->CompositePageToPdf(std::move(frame_guid), std::move(page_num), std::move(sk_handle), std::move(subframe_content_info), std::move(callback));
}
void PdfCompositorInterceptorForTesting::CompositeDocumentToPdf(uint64_t frame_guid, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, CompositeDocumentToPdfCallback callback) {
  GetForwardingInterface()->CompositeDocumentToPdf(std::move(frame_guid), std::move(sk_handle), std::move(subframe_content_info), std::move(callback));
}
void PdfCompositorInterceptorForTesting::SetWebContentsURL(const GURL& url) {
  GetForwardingInterface()->SetWebContentsURL(std::move(url));
}
PdfCompositorAsyncWaiter::PdfCompositorAsyncWaiter(
    PdfCompositor* proxy) : proxy_(proxy) {}

PdfCompositorAsyncWaiter::~PdfCompositorAsyncWaiter() = default;

void PdfCompositorAsyncWaiter::CompositePageToPdf(
    uint64_t frame_guid, uint32_t page_num, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, PdfCompositor::Status* out_status, base::ReadOnlySharedMemoryRegion* out_pdf_region) {
  base::RunLoop loop;
  proxy_->CompositePageToPdf(std::move(frame_guid),std::move(page_num),std::move(sk_handle),std::move(subframe_content_info),
      base::BindOnce(
          [](base::RunLoop* loop,
             PdfCompositor::Status* out_status
,
             base::ReadOnlySharedMemoryRegion* out_pdf_region
,
             PdfCompositor::Status status,
             base::ReadOnlySharedMemoryRegion pdf_region) {*out_status = std::move(status);*out_pdf_region = std::move(pdf_region);
            loop->Quit();
          },
          &loop,
          out_status,
          out_pdf_region));
  loop.Run();
}
void PdfCompositorAsyncWaiter::CompositeDocumentToPdf(
    uint64_t frame_guid, mojo::ScopedSharedBufferHandle sk_handle, const base::flat_map<uint32_t, uint64_t>& subframe_content_info, PdfCompositor::Status* out_status, base::ReadOnlySharedMemoryRegion* out_pdf_region) {
  base::RunLoop loop;
  proxy_->CompositeDocumentToPdf(std::move(frame_guid),std::move(sk_handle),std::move(subframe_content_info),
      base::BindOnce(
          [](base::RunLoop* loop,
             PdfCompositor::Status* out_status
,
             base::ReadOnlySharedMemoryRegion* out_pdf_region
,
             PdfCompositor::Status status,
             base::ReadOnlySharedMemoryRegion pdf_region) {*out_status = std::move(status);*out_pdf_region = std::move(pdf_region);
            loop->Quit();
          },
          &loop,
          out_status,
          out_pdf_region));
  loop.Run();
}

}  // namespace mojom
}  // namespace printing

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif