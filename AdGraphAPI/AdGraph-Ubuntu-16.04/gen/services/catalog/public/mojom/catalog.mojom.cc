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

#include "services/catalog/public/mojom/catalog.mojom.h"

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

#include "services/catalog/public/mojom/catalog.mojom-shared-message-ids.h"
namespace catalog {
namespace mojom {
Entry::Entry()
    : name(),
      display_name() {}

Entry::Entry(
    const std::string& name_in,
    const std::string& display_name_in)
    : name(std::move(name_in)),
      display_name(std::move(display_name_in)) {}

Entry::~Entry() = default;
size_t Entry::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->display_name);
  return seed;
}

bool Entry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char Catalog::Name_[] = "catalog.mojom.Catalog";
bool Catalog::GetEntries(const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* out_entries) {
  NOTREACHED();
  return false;
}
class Catalog_GetEntries_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntries_HandleSyncResponse(
      bool* result, std::vector<EntryPtr>* out_entries)
      : result_(result), out_entries_(out_entries) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<EntryPtr>* out_entries_;DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntries_HandleSyncResponse);
};

class Catalog_GetEntries_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntries_ForwardToCallback(
      Catalog::GetEntriesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Catalog::GetEntriesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntries_ForwardToCallback);
};

class Catalog_GetEntriesProvidingCapability_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Catalog_GetEntriesProvidingCapability_ForwardToCallback(
      Catalog::GetEntriesProvidingCapabilityCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Catalog::GetEntriesProvidingCapabilityCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesProvidingCapability_ForwardToCallback);
};

CatalogProxy::CatalogProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool CatalogProxy::GetEntries(
    const base::Optional<std::vector<std::string>>& param_names, std::vector<EntryPtr>* out_param_entries) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "catalog::mojom::Catalog::GetEntries");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCatalog_GetEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::catalog::mojom::internal::Catalog_GetEntries_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->names)::BaseType::BufferWriter
      names_writer;
  const mojo::internal::ContainerValidateParams names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      param_names, buffer, &names_writer, &names_validate_params,
      &serialization_context);
  params->names.Set(
      names_writer.is_null() ? nullptr : names_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Catalog_GetEntries_HandleSyncResponse(
          &result, out_param_entries));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void CatalogProxy::GetEntries(
    const base::Optional<std::vector<std::string>>& in_names, GetEntriesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "catalog::mojom::Catalog::GetEntries");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCatalog_GetEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::catalog::mojom::internal::Catalog_GetEntries_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->names)::BaseType::BufferWriter
      names_writer;
  const mojo::internal::ContainerValidateParams names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_names, buffer, &names_writer, &names_validate_params,
      &serialization_context);
  params->names.Set(
      names_writer.is_null() ? nullptr : names_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Catalog_GetEntries_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CatalogProxy::GetEntriesProvidingCapability(
    const std::string& in_capability, GetEntriesProvidingCapabilityCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "catalog::mojom::Catalog::GetEntriesProvidingCapability");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCatalog_GetEntriesProvidingCapability_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::catalog::mojom::internal::Catalog_GetEntriesProvidingCapability_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->capability)::BaseType::BufferWriter
      capability_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_capability, buffer, &capability_writer, &serialization_context);
  params->capability.Set(
      capability_writer.is_null() ? nullptr : capability_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->capability.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null capability in Catalog.GetEntriesProvidingCapability request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Catalog_GetEntriesProvidingCapability_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Catalog_GetEntries_ProxyToResponder {
 public:
  static Catalog::GetEntriesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Catalog_GetEntries_ProxyToResponder> proxy(
        new Catalog_GetEntries_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Catalog_GetEntries_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Catalog_GetEntries_ProxyToResponder() {
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
  Catalog_GetEntries_ProxyToResponder(
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
        << "Catalog::GetEntriesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<EntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntries_ProxyToResponder);
};

bool Catalog_GetEntries_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "catalog::mojom::Catalog::GetEntriesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Catalog_GetEntries_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Catalog_GetEntries_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntries_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntries response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_entries));
  return true;
}

void Catalog_GetEntries_ProxyToResponder::Run(
    std::vector<EntryPtr> in_entries) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCatalog_GetEntries_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::catalog::mojom::internal::Catalog_GetEntries_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->entries)::BaseType::BufferWriter
      entries_writer;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::catalog::mojom::EntryDataView>>(
      in_entries, buffer, &entries_writer, &entries_validate_params,
      &serialization_context);
  params->entries.Set(
      entries_writer.is_null() ? nullptr : entries_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)catalog::mojom::Catalog::GetEntriesCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Catalog_GetEntries_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Catalog_GetEntries_ResponseParams_Data* params =
      reinterpret_cast<internal::Catalog_GetEntries_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntries_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntries response deserializer");
    return false;
  }
  *out_entries_ = std::move(p_entries);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class Catalog_GetEntriesProvidingCapability_ProxyToResponder {
 public:
  static Catalog::GetEntriesProvidingCapabilityCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Catalog_GetEntriesProvidingCapability_ProxyToResponder> proxy(
        new Catalog_GetEntriesProvidingCapability_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Catalog_GetEntriesProvidingCapability_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Catalog_GetEntriesProvidingCapability_ProxyToResponder() {
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
  Catalog_GetEntriesProvidingCapability_ProxyToResponder(
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
        << "Catalog::GetEntriesProvidingCapabilityCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<EntryPtr> in_entries);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Catalog_GetEntriesProvidingCapability_ProxyToResponder);
};

bool Catalog_GetEntriesProvidingCapability_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "catalog::mojom::Catalog::GetEntriesProvidingCapabilityCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Catalog_GetEntriesProvidingCapability_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Catalog_GetEntriesProvidingCapability_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<EntryPtr> p_entries{};
  Catalog_GetEntriesProvidingCapability_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadEntries(&p_entries))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Catalog::GetEntriesProvidingCapability response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_entries));
  return true;
}

void Catalog_GetEntriesProvidingCapability_ProxyToResponder::Run(
    std::vector<EntryPtr> in_entries) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCatalog_GetEntriesProvidingCapability_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::catalog::mojom::internal::Catalog_GetEntriesProvidingCapability_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->entries)::BaseType::BufferWriter
      entries_writer;
  const mojo::internal::ContainerValidateParams entries_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::catalog::mojom::EntryDataView>>(
      in_entries, buffer, &entries_writer, &entries_validate_params,
      &serialization_context);
  params->entries.Set(
      entries_writer.is_null() ? nullptr : entries_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->entries.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null entries in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)catalog::mojom::Catalog::GetEntriesProvidingCapabilityCallback",
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
bool CatalogStubDispatch::Accept(
    Catalog* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)catalog::mojom::Catalog::GetEntries",
               "message", message->name());
#endif
      break;
    }
    case internal::kCatalog_GetEntriesProvidingCapability_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)catalog::mojom::Catalog::GetEntriesProvidingCapability",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool CatalogStubDispatch::AcceptWithResponder(
    Catalog* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)catalog::mojom::Catalog::GetEntries",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Catalog_GetEntries_Params_Data* params =
          reinterpret_cast<
              internal::Catalog_GetEntries_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<std::vector<std::string>> p_names{};
      Catalog_GetEntries_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNames(&p_names))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Catalog::GetEntries deserializer");
        return false;
      }
      Catalog::GetEntriesCallback callback =
          Catalog_GetEntries_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetEntries(
std::move(p_names), std::move(callback));
      return true;
    }
    case internal::kCatalog_GetEntriesProvidingCapability_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)catalog::mojom::Catalog::GetEntriesProvidingCapability",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Catalog_GetEntriesProvidingCapability_Params_Data* params =
          reinterpret_cast<
              internal::Catalog_GetEntriesProvidingCapability_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_capability{};
      Catalog_GetEntriesProvidingCapability_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCapability(&p_capability))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Catalog::GetEntriesProvidingCapability deserializer");
        return false;
      }
      Catalog::GetEntriesProvidingCapabilityCallback callback =
          Catalog_GetEntriesProvidingCapability_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetEntriesProvidingCapability(
std::move(p_capability), std::move(callback));
      return true;
    }
  }
  return false;
}

bool CatalogRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Catalog RequestValidator");

  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntries_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCatalog_GetEntriesProvidingCapability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesProvidingCapability_Params_Data>(
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

bool CatalogResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Catalog ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCatalog_GetEntries_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntries_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCatalog_GetEntriesProvidingCapability_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Catalog_GetEntriesProvidingCapability_ResponseParams_Data>(
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
void CatalogInterceptorForTesting::GetEntries(const base::Optional<std::vector<std::string>>& names, GetEntriesCallback callback) {
  GetForwardingInterface()->GetEntries(std::move(names), std::move(callback));
}
void CatalogInterceptorForTesting::GetEntriesProvidingCapability(const std::string& capability, GetEntriesProvidingCapabilityCallback callback) {
  GetForwardingInterface()->GetEntriesProvidingCapability(std::move(capability), std::move(callback));
}
CatalogAsyncWaiter::CatalogAsyncWaiter(
    Catalog* proxy) : proxy_(proxy) {}

CatalogAsyncWaiter::~CatalogAsyncWaiter() = default;

void CatalogAsyncWaiter::GetEntries(
    const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* out_entries) {
  base::RunLoop loop;
  proxy_->GetEntries(std::move(names),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<EntryPtr>* out_entries
,
             std::vector<EntryPtr> entries) {*out_entries = std::move(entries);
            loop->Quit();
          },
          &loop,
          out_entries));
  loop.Run();
}
void CatalogAsyncWaiter::GetEntriesProvidingCapability(
    const std::string& capability, std::vector<EntryPtr>* out_entries) {
  base::RunLoop loop;
  proxy_->GetEntriesProvidingCapability(std::move(capability),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<EntryPtr>* out_entries
,
             std::vector<EntryPtr> entries) {*out_entries = std::move(entries);
            loop->Quit();
          },
          &loop,
          out_entries));
  loop.Run();
}

}  // namespace mojom
}  // namespace catalog

namespace mojo {


// static
bool StructTraits<::catalog::mojom::Entry::DataView, ::catalog::mojom::EntryPtr>::Read(
    ::catalog::mojom::Entry::DataView input,
    ::catalog::mojom::EntryPtr* output) {
  bool success = true;
  ::catalog::mojom::EntryPtr result(::catalog::mojom::Entry::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif