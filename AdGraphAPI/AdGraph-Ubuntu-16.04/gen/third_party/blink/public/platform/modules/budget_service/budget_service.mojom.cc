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

#include "third_party/blink/public/platform/modules/budget_service/budget_service.mojom.h"

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

#include "third_party/blink/public/platform/modules/budget_service/budget_service.mojom-shared-message-ids.h"
namespace blink {
namespace mojom {
BudgetState::BudgetState()
    : budget_at(),
      time() {}

BudgetState::BudgetState(
    double budget_at_in,
    double time_in)
    : budget_at(std::move(budget_at_in)),
      time(std::move(time_in)) {}

BudgetState::~BudgetState() = default;
size_t BudgetState::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->budget_at);
  seed = mojo::internal::Hash(seed, this->time);
  return seed;
}

bool BudgetState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char BudgetService::Name_[] = "blink.mojom.BudgetService";

class BudgetService_GetCost_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BudgetService_GetCost_ForwardToCallback(
      BudgetService::GetCostCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BudgetService::GetCostCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BudgetService_GetCost_ForwardToCallback);
};

class BudgetService_GetBudget_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BudgetService_GetBudget_ForwardToCallback(
      BudgetService::GetBudgetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BudgetService::GetBudgetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BudgetService_GetBudget_ForwardToCallback);
};

class BudgetService_Reserve_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BudgetService_Reserve_ForwardToCallback(
      BudgetService::ReserveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BudgetService::ReserveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BudgetService_Reserve_ForwardToCallback);
};

BudgetServiceProxy::BudgetServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BudgetServiceProxy::GetCost(
    BudgetOperationType in_operation, GetCostCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BudgetService::GetCost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBudgetService_GetCost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BudgetService_GetCost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BudgetOperationType>(
      in_operation, &params->operation);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BudgetService_GetCost_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BudgetServiceProxy::GetBudget(
    GetBudgetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BudgetService::GetBudget");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBudgetService_GetBudget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BudgetService_GetBudget_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BudgetService_GetBudget_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BudgetServiceProxy::Reserve(
    BudgetOperationType in_operation, ReserveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::BudgetService::Reserve");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBudgetService_Reserve_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BudgetService_Reserve_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BudgetOperationType>(
      in_operation, &params->operation);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BudgetService_Reserve_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class BudgetService_GetCost_ProxyToResponder {
 public:
  static BudgetService::GetCostCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BudgetService_GetCost_ProxyToResponder> proxy(
        new BudgetService_GetCost_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BudgetService_GetCost_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BudgetService_GetCost_ProxyToResponder() {
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
  BudgetService_GetCost_ProxyToResponder(
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
        << "BudgetService::GetCostCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      double in_cost);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BudgetService_GetCost_ProxyToResponder);
};

bool BudgetService_GetCost_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BudgetService::GetCostCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BudgetService_GetCost_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BudgetService_GetCost_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  double p_cost{};
  BudgetService_GetCost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_cost = input_data_view.cost();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BudgetService::GetCost response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cost));
  return true;
}

void BudgetService_GetCost_ProxyToResponder::Run(
    double in_cost) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBudgetService_GetCost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BudgetService_GetCost_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->cost = in_cost;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::GetCostCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BudgetService_GetBudget_ProxyToResponder {
 public:
  static BudgetService::GetBudgetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BudgetService_GetBudget_ProxyToResponder> proxy(
        new BudgetService_GetBudget_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BudgetService_GetBudget_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BudgetService_GetBudget_ProxyToResponder() {
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
  BudgetService_GetBudget_ProxyToResponder(
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
        << "BudgetService::GetBudgetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BudgetServiceErrorType in_error_type, std::vector<BudgetStatePtr> in_budget);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BudgetService_GetBudget_ProxyToResponder);
};

bool BudgetService_GetBudget_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BudgetService::GetBudgetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BudgetService_GetBudget_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BudgetService_GetBudget_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BudgetServiceErrorType p_error_type{};
  std::vector<BudgetStatePtr> p_budget{};
  BudgetService_GetBudget_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorType(&p_error_type))
    success = false;
  if (!input_data_view.ReadBudget(&p_budget))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BudgetService::GetBudget response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_type), 
std::move(p_budget));
  return true;
}

void BudgetService_GetBudget_ProxyToResponder::Run(
    BudgetServiceErrorType in_error_type, std::vector<BudgetStatePtr> in_budget) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBudgetService_GetBudget_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BudgetService_GetBudget_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BudgetServiceErrorType>(
      in_error_type, &params->error_type);
  typename decltype(params->budget)::BaseType::BufferWriter
      budget_writer;
  const mojo::internal::ContainerValidateParams budget_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::BudgetStateDataView>>(
      in_budget, buffer, &budget_writer, &budget_validate_params,
      &serialization_context);
  params->budget.Set(
      budget_writer.is_null() ? nullptr : budget_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->budget.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null budget in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::GetBudgetCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BudgetService_Reserve_ProxyToResponder {
 public:
  static BudgetService::ReserveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BudgetService_Reserve_ProxyToResponder> proxy(
        new BudgetService_Reserve_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BudgetService_Reserve_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BudgetService_Reserve_ProxyToResponder() {
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
  BudgetService_Reserve_ProxyToResponder(
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
        << "BudgetService::ReserveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BudgetServiceErrorType in_error_type, bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BudgetService_Reserve_ProxyToResponder);
};

bool BudgetService_Reserve_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::BudgetService::ReserveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BudgetService_Reserve_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BudgetService_Reserve_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BudgetServiceErrorType p_error_type{};
  bool p_success{};
  BudgetService_Reserve_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadErrorType(&p_error_type))
    success = false;
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BudgetService::Reserve response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_type), 
std::move(p_success));
  return true;
}

void BudgetService_Reserve_ProxyToResponder::Run(
    BudgetServiceErrorType in_error_type, bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBudgetService_Reserve_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BudgetService_Reserve_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BudgetServiceErrorType>(
      in_error_type, &params->error_type);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::ReserveCallback",
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
bool BudgetServiceStubDispatch::Accept(
    BudgetService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBudgetService_GetCost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::GetCost",
               "message", message->name());
#endif
      break;
    }
    case internal::kBudgetService_GetBudget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::GetBudget",
               "message", message->name());
#endif
      break;
    }
    case internal::kBudgetService_Reserve_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::Reserve",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool BudgetServiceStubDispatch::AcceptWithResponder(
    BudgetService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBudgetService_GetCost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::GetCost",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BudgetService_GetCost_Params_Data* params =
          reinterpret_cast<
              internal::BudgetService_GetCost_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BudgetOperationType p_operation{};
      BudgetService_GetCost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOperation(&p_operation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BudgetService::GetCost deserializer");
        return false;
      }
      BudgetService::GetCostCallback callback =
          BudgetService_GetCost_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetCost(
std::move(p_operation), std::move(callback));
      return true;
    }
    case internal::kBudgetService_GetBudget_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::GetBudget",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BudgetService_GetBudget_Params_Data* params =
          reinterpret_cast<
              internal::BudgetService_GetBudget_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BudgetService_GetBudget_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BudgetService::GetBudget deserializer");
        return false;
      }
      BudgetService::GetBudgetCallback callback =
          BudgetService_GetBudget_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetBudget(std::move(callback));
      return true;
    }
    case internal::kBudgetService_Reserve_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::BudgetService::Reserve",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::BudgetService_Reserve_Params_Data* params =
          reinterpret_cast<
              internal::BudgetService_Reserve_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      BudgetOperationType p_operation{};
      BudgetService_Reserve_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOperation(&p_operation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BudgetService::Reserve deserializer");
        return false;
      }
      BudgetService::ReserveCallback callback =
          BudgetService_Reserve_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Reserve(
std::move(p_operation), std::move(callback));
      return true;
    }
  }
  return false;
}

bool BudgetServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BudgetService RequestValidator");

  switch (message->header()->name) {
    case internal::kBudgetService_GetCost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BudgetService_GetCost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBudgetService_GetBudget_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BudgetService_GetBudget_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBudgetService_Reserve_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BudgetService_Reserve_Params_Data>(
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

bool BudgetServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BudgetService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBudgetService_GetCost_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BudgetService_GetCost_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBudgetService_GetBudget_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BudgetService_GetBudget_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBudgetService_Reserve_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BudgetService_Reserve_ResponseParams_Data>(
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
void BudgetServiceInterceptorForTesting::GetCost(BudgetOperationType operation, GetCostCallback callback) {
  GetForwardingInterface()->GetCost(std::move(operation), std::move(callback));
}
void BudgetServiceInterceptorForTesting::GetBudget(GetBudgetCallback callback) {
  GetForwardingInterface()->GetBudget(std::move(callback));
}
void BudgetServiceInterceptorForTesting::Reserve(BudgetOperationType operation, ReserveCallback callback) {
  GetForwardingInterface()->Reserve(std::move(operation), std::move(callback));
}
BudgetServiceAsyncWaiter::BudgetServiceAsyncWaiter(
    BudgetService* proxy) : proxy_(proxy) {}

BudgetServiceAsyncWaiter::~BudgetServiceAsyncWaiter() = default;

void BudgetServiceAsyncWaiter::GetCost(
    BudgetOperationType operation, double* out_cost) {
  base::RunLoop loop;
  proxy_->GetCost(std::move(operation),
      base::BindOnce(
          [](base::RunLoop* loop,
             double* out_cost
,
             double cost) {*out_cost = std::move(cost);
            loop->Quit();
          },
          &loop,
          out_cost));
  loop.Run();
}
void BudgetServiceAsyncWaiter::GetBudget(
    BudgetServiceErrorType* out_error_type, std::vector<BudgetStatePtr>* out_budget) {
  base::RunLoop loop;
  proxy_->GetBudget(
      base::BindOnce(
          [](base::RunLoop* loop,
             BudgetServiceErrorType* out_error_type
,
             std::vector<BudgetStatePtr>* out_budget
,
             BudgetServiceErrorType error_type,
             std::vector<BudgetStatePtr> budget) {*out_error_type = std::move(error_type);*out_budget = std::move(budget);
            loop->Quit();
          },
          &loop,
          out_error_type,
          out_budget));
  loop.Run();
}
void BudgetServiceAsyncWaiter::Reserve(
    BudgetOperationType operation, BudgetServiceErrorType* out_error_type, bool* out_success) {
  base::RunLoop loop;
  proxy_->Reserve(std::move(operation),
      base::BindOnce(
          [](base::RunLoop* loop,
             BudgetServiceErrorType* out_error_type
,
             bool* out_success
,
             BudgetServiceErrorType error_type,
             bool success) {*out_error_type = std::move(error_type);*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_error_type,
          out_success));
  loop.Run();
}

}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::BudgetState::DataView, ::blink::mojom::BudgetStatePtr>::Read(
    ::blink::mojom::BudgetState::DataView input,
    ::blink::mojom::BudgetStatePtr* output) {
  bool success = true;
  ::blink::mojom::BudgetStatePtr result(::blink::mojom::BudgetState::New());
  
      result->budget_at = input.budget_at();
      result->time = input.time();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif