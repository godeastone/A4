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

#include "services/data_decoder/public/mojom/xml_parser.mojom.h"

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

#include "services/data_decoder/public/mojom/xml_parser.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
namespace data_decoder {
namespace mojom {
const char XmlParser::Name_[] = "data_decoder.mojom.XmlParser";
const char XmlParser::kTypeKey[] = "type";
const char XmlParser::kTagKey[] = "tag";
const char XmlParser::kTextKey[] = "text";
const char XmlParser::kAttributesKey[] = "attributes";
const char XmlParser::kChildrenKey[] = "children";
const char XmlParser::kNamespacesKey[] = "namespaces";
const char XmlParser::kElementType[] = "element";
const char XmlParser::kTextNodeType[] = "text";
const char XmlParser::kCDataNodeType[] = "cdata";

class XmlParser_Parse_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XmlParser_Parse_ForwardToCallback(
      XmlParser::ParseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  XmlParser::ParseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(XmlParser_Parse_ForwardToCallback);
};

XmlParserProxy::XmlParserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XmlParserProxy::Parse(
    const std::string& in_xml, ParseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "data_decoder::mojom::XmlParser::Parse");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXmlParser_Parse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::data_decoder::mojom::internal::XmlParser_Parse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->xml)::BaseType::BufferWriter
      xml_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_xml, buffer, &xml_writer, &serialization_context);
  params->xml.Set(
      xml_writer.is_null() ? nullptr : xml_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->xml.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null xml in XmlParser.Parse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XmlParser_Parse_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class XmlParser_Parse_ProxyToResponder {
 public:
  static XmlParser::ParseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XmlParser_Parse_ProxyToResponder> proxy(
        new XmlParser_Parse_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&XmlParser_Parse_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XmlParser_Parse_ProxyToResponder() {
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
  XmlParser_Parse_ProxyToResponder(
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
        << "XmlParser::ParseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Optional<base::Value> in_result, const base::Optional<std::string>& in_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(XmlParser_Parse_ProxyToResponder);
};

bool XmlParser_Parse_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "data_decoder::mojom::XmlParser::ParseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::XmlParser_Parse_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XmlParser_Parse_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<base::Value> p_result{};
  base::Optional<std::string> p_error{};
  XmlParser_Parse_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "XmlParser::Parse response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_error));
  return true;
}

void XmlParser_Parse_ProxyToResponder::Run(
    base::Optional<base::Value> in_result, const base::Optional<std::string>& in_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kXmlParser_Parse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::data_decoder::mojom::internal::XmlParser_Parse_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BufferWriter result_writer;
  result_writer.AllocateInline(buffer, &params->result);
  mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
      in_result, buffer, &result_writer, true, &serialization_context);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::XmlParser::ParseCallback",
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
bool XmlParserStubDispatch::Accept(
    XmlParser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXmlParser_Parse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::XmlParser::Parse",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool XmlParserStubDispatch::AcceptWithResponder(
    XmlParser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kXmlParser_Parse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)data_decoder::mojom::XmlParser::Parse",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::XmlParser_Parse_Params_Data* params =
          reinterpret_cast<
              internal::XmlParser_Parse_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_xml{};
      XmlParser_Parse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadXml(&p_xml))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "XmlParser::Parse deserializer");
        return false;
      }
      XmlParser::ParseCallback callback =
          XmlParser_Parse_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Parse(
std::move(p_xml), std::move(callback));
      return true;
    }
  }
  return false;
}

bool XmlParserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XmlParser RequestValidator");

  switch (message->header()->name) {
    case internal::kXmlParser_Parse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::XmlParser_Parse_Params_Data>(
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

bool XmlParserResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "XmlParser ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kXmlParser_Parse_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::XmlParser_Parse_ResponseParams_Data>(
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
void XmlParserInterceptorForTesting::Parse(const std::string& xml, ParseCallback callback) {
  GetForwardingInterface()->Parse(std::move(xml), std::move(callback));
}
XmlParserAsyncWaiter::XmlParserAsyncWaiter(
    XmlParser* proxy) : proxy_(proxy) {}

XmlParserAsyncWaiter::~XmlParserAsyncWaiter() = default;

void XmlParserAsyncWaiter::Parse(
    const std::string& xml, base::Optional<base::Value>* out_result, base::Optional<std::string>* out_error) {
  base::RunLoop loop;
  proxy_->Parse(std::move(xml),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<base::Value>* out_result
,
             base::Optional<std::string>* out_error
,
             base::Optional<base::Value> result,
             const base::Optional<std::string>& error) {*out_result = std::move(result);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_result,
          out_error));
  loop.Run();
}

}  // namespace mojom
}  // namespace data_decoder

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif