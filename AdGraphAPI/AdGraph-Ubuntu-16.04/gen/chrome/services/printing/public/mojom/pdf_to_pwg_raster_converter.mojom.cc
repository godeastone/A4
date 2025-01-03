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

#include "chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter.mojom.h"

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

#include "chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter.mojom-shared-message-ids.h"
#include "chrome/services/printing/public/mojom/pdf_render_settings_mojom_traits.h"
#include "chrome/services/printing/public/mojom/pdf_to_pwg_raster_converter_mojom_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace printing {
namespace mojom {
PwgRasterSettings::PwgRasterSettings()
    : odd_page_transform(),
      rotate_all_pages(),
      reverse_page_order(),
      use_color() {}

PwgRasterSettings::PwgRasterSettings(
    PwgRasterSettings::TransformType odd_page_transform_in,
    bool rotate_all_pages_in,
    bool reverse_page_order_in,
    bool use_color_in)
    : odd_page_transform(std::move(odd_page_transform_in)),
      rotate_all_pages(std::move(rotate_all_pages_in)),
      reverse_page_order(std::move(reverse_page_order_in)),
      use_color(std::move(use_color_in)) {}

PwgRasterSettings::~PwgRasterSettings() = default;

bool PwgRasterSettings::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PdfToPwgRasterConverter::Name_[] = "printing.mojom.PdfToPwgRasterConverter";

class PdfToPwgRasterConverter_Convert_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PdfToPwgRasterConverter_Convert_ForwardToCallback(
      PdfToPwgRasterConverter::ConvertCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PdfToPwgRasterConverter::ConvertCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PdfToPwgRasterConverter_Convert_ForwardToCallback);
};

PdfToPwgRasterConverterProxy::PdfToPwgRasterConverterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PdfToPwgRasterConverterProxy::Convert(
    base::ReadOnlySharedMemoryRegion in_pdf_region, const printing::PdfRenderSettings& in_pdf_settings, const printing::PwgRasterSettings& in_pwg_raster_settings, ConvertCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "printing::mojom::PdfToPwgRasterConverter::Convert");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfToPwgRasterConverter_Convert_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfToPwgRasterConverter_Convert_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pdf_region)::BaseType::BufferWriter
      pdf_region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_pdf_region, buffer, &pdf_region_writer, &serialization_context);
  params->pdf_region.Set(
      pdf_region_writer.is_null() ? nullptr : pdf_region_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pdf_region.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pdf_region in PdfToPwgRasterConverter.Convert request");
  typename decltype(params->pdf_settings)::BaseType::BufferWriter
      pdf_settings_writer;
  mojo::internal::Serialize<::printing::mojom::PdfRenderSettingsDataView>(
      in_pdf_settings, buffer, &pdf_settings_writer, &serialization_context);
  params->pdf_settings.Set(
      pdf_settings_writer.is_null() ? nullptr : pdf_settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pdf_settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pdf_settings in PdfToPwgRasterConverter.Convert request");
  typename decltype(params->pwg_raster_settings)::BaseType::BufferWriter
      pwg_raster_settings_writer;
  mojo::internal::Serialize<::printing::mojom::PwgRasterSettingsDataView>(
      in_pwg_raster_settings, buffer, &pwg_raster_settings_writer, &serialization_context);
  params->pwg_raster_settings.Set(
      pwg_raster_settings_writer.is_null() ? nullptr : pwg_raster_settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pwg_raster_settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pwg_raster_settings in PdfToPwgRasterConverter.Convert request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PdfToPwgRasterConverter_Convert_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PdfToPwgRasterConverter_Convert_ProxyToResponder {
 public:
  static PdfToPwgRasterConverter::ConvertCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PdfToPwgRasterConverter_Convert_ProxyToResponder> proxy(
        new PdfToPwgRasterConverter_Convert_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PdfToPwgRasterConverter_Convert_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PdfToPwgRasterConverter_Convert_ProxyToResponder() {
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
  PdfToPwgRasterConverter_Convert_ProxyToResponder(
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
        << "PdfToPwgRasterConverter::ConvertCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::ReadOnlySharedMemoryRegion in_pwg_raster_region, uint32_t in_page_count);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PdfToPwgRasterConverter_Convert_ProxyToResponder);
};

bool PdfToPwgRasterConverter_Convert_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "printing::mojom::PdfToPwgRasterConverter::ConvertCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PdfToPwgRasterConverter_Convert_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PdfToPwgRasterConverter_Convert_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::ReadOnlySharedMemoryRegion p_pwg_raster_region{};
  uint32_t p_page_count{};
  PdfToPwgRasterConverter_Convert_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPwgRasterRegion(&p_pwg_raster_region))
    success = false;
  p_page_count = input_data_view.page_count();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PdfToPwgRasterConverter::Convert response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_pwg_raster_region), 
std::move(p_page_count));
  return true;
}

void PdfToPwgRasterConverter_Convert_ProxyToResponder::Run(
    base::ReadOnlySharedMemoryRegion in_pwg_raster_region, uint32_t in_page_count) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPdfToPwgRasterConverter_Convert_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::printing::mojom::internal::PdfToPwgRasterConverter_Convert_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pwg_raster_region)::BaseType::BufferWriter
      pwg_raster_region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_pwg_raster_region, buffer, &pwg_raster_region_writer, &serialization_context);
  params->pwg_raster_region.Set(
      pwg_raster_region_writer.is_null() ? nullptr : pwg_raster_region_writer.data());
  params->page_count = in_page_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfToPwgRasterConverter::ConvertCallback",
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
bool PdfToPwgRasterConverterStubDispatch::Accept(
    PdfToPwgRasterConverter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPdfToPwgRasterConverter_Convert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfToPwgRasterConverter::Convert",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool PdfToPwgRasterConverterStubDispatch::AcceptWithResponder(
    PdfToPwgRasterConverter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPdfToPwgRasterConverter_Convert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)printing::mojom::PdfToPwgRasterConverter::Convert",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PdfToPwgRasterConverter_Convert_Params_Data* params =
          reinterpret_cast<
              internal::PdfToPwgRasterConverter_Convert_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::ReadOnlySharedMemoryRegion p_pdf_region{};
      printing::PdfRenderSettings p_pdf_settings{};
      printing::PwgRasterSettings p_pwg_raster_settings{};
      PdfToPwgRasterConverter_Convert_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPdfRegion(&p_pdf_region))
        success = false;
      if (!input_data_view.ReadPdfSettings(&p_pdf_settings))
        success = false;
      if (!input_data_view.ReadPwgRasterSettings(&p_pwg_raster_settings))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PdfToPwgRasterConverter::Convert deserializer");
        return false;
      }
      PdfToPwgRasterConverter::ConvertCallback callback =
          PdfToPwgRasterConverter_Convert_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Convert(
std::move(p_pdf_region), 
std::move(p_pdf_settings), 
std::move(p_pwg_raster_settings), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PdfToPwgRasterConverterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PdfToPwgRasterConverter RequestValidator");

  switch (message->header()->name) {
    case internal::kPdfToPwgRasterConverter_Convert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfToPwgRasterConverter_Convert_Params_Data>(
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

bool PdfToPwgRasterConverterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PdfToPwgRasterConverter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPdfToPwgRasterConverter_Convert_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PdfToPwgRasterConverter_Convert_ResponseParams_Data>(
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
void PdfToPwgRasterConverterInterceptorForTesting::Convert(base::ReadOnlySharedMemoryRegion pdf_region, const printing::PdfRenderSettings& pdf_settings, const printing::PwgRasterSettings& pwg_raster_settings, ConvertCallback callback) {
  GetForwardingInterface()->Convert(std::move(pdf_region), std::move(pdf_settings), std::move(pwg_raster_settings), std::move(callback));
}
PdfToPwgRasterConverterAsyncWaiter::PdfToPwgRasterConverterAsyncWaiter(
    PdfToPwgRasterConverter* proxy) : proxy_(proxy) {}

PdfToPwgRasterConverterAsyncWaiter::~PdfToPwgRasterConverterAsyncWaiter() = default;

void PdfToPwgRasterConverterAsyncWaiter::Convert(
    base::ReadOnlySharedMemoryRegion pdf_region, const printing::PdfRenderSettings& pdf_settings, const printing::PwgRasterSettings& pwg_raster_settings, base::ReadOnlySharedMemoryRegion* out_pwg_raster_region, uint32_t* out_page_count) {
  base::RunLoop loop;
  proxy_->Convert(std::move(pdf_region),std::move(pdf_settings),std::move(pwg_raster_settings),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::ReadOnlySharedMemoryRegion* out_pwg_raster_region
,
             uint32_t* out_page_count
,
             base::ReadOnlySharedMemoryRegion pwg_raster_region,
             uint32_t page_count) {*out_pwg_raster_region = std::move(pwg_raster_region);*out_page_count = std::move(page_count);
            loop->Quit();
          },
          &loop,
          out_pwg_raster_region,
          out_page_count));
  loop.Run();
}

}  // namespace mojom
}  // namespace printing

namespace mojo {


// static
bool StructTraits<::printing::mojom::PwgRasterSettings::DataView, ::printing::mojom::PwgRasterSettingsPtr>::Read(
    ::printing::mojom::PwgRasterSettings::DataView input,
    ::printing::mojom::PwgRasterSettingsPtr* output) {
  bool success = true;
  ::printing::mojom::PwgRasterSettingsPtr result(::printing::mojom::PwgRasterSettings::New());
  
      if (!input.ReadOddPageTransform(&result->odd_page_transform))
        success = false;
      result->rotate_all_pages = input.rotate_all_pages();
      result->reverse_page_order = input.reverse_page_order();
      result->use_color = input.use_color();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif