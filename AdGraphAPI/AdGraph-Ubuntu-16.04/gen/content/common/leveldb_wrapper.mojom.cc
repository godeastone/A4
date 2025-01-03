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

#include "content/common/leveldb_wrapper.mojom.h"

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

#include "content/common/leveldb_wrapper.mojom-shared-message-ids.h"
namespace content {
namespace mojom {
KeyValue::KeyValue()
    : key(),
      value() {}

KeyValue::KeyValue(
    const std::vector<uint8_t>& key_in,
    const std::vector<uint8_t>& value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

KeyValue::~KeyValue() = default;

bool KeyValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char LevelDBObserver::Name_[] = "content.mojom.LevelDBObserver";

LevelDBObserverProxy::LevelDBObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LevelDBObserverProxy::KeyAdded(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_value, const std::string& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBObserver::KeyAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBObserver_KeyAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBObserver_KeyAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBObserver.KeyAdded request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBObserver.KeyAdded request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.KeyAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LevelDBObserverProxy::KeyChanged(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_new_value, const std::vector<uint8_t>& in_old_value, const std::string& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBObserver::KeyChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBObserver_KeyChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBObserver_KeyChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBObserver.KeyChanged request");
  typename decltype(params->new_value)::BaseType::BufferWriter
      new_value_writer;
  const mojo::internal::ContainerValidateParams new_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_new_value, buffer, &new_value_writer, &new_value_validate_params,
      &serialization_context);
  params->new_value.Set(
      new_value_writer.is_null() ? nullptr : new_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_value in LevelDBObserver.KeyChanged request");
  typename decltype(params->old_value)::BaseType::BufferWriter
      old_value_writer;
  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_old_value, buffer, &old_value_writer, &old_value_validate_params,
      &serialization_context);
  params->old_value.Set(
      old_value_writer.is_null() ? nullptr : old_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_value in LevelDBObserver.KeyChanged request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.KeyChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LevelDBObserverProxy::KeyDeleted(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_old_value, const std::string& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBObserver::KeyDeleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBObserver_KeyDeleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBObserver_KeyDeleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBObserver.KeyDeleted request");
  typename decltype(params->old_value)::BaseType::BufferWriter
      old_value_writer;
  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_old_value, buffer, &old_value_writer, &old_value_validate_params,
      &serialization_context);
  params->old_value.Set(
      old_value_writer.is_null() ? nullptr : old_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_value in LevelDBObserver.KeyDeleted request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.KeyDeleted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LevelDBObserverProxy::AllDeleted(
    const std::string& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBObserver::AllDeleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBObserver_AllDeleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBObserver_AllDeleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBObserver.AllDeleted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LevelDBObserverProxy::ShouldSendOldValueOnMutations(
    bool in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBObserver::ShouldSendOldValueOnMutations");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBObserver_ShouldSendOldValueOnMutations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool LevelDBObserverStubDispatch::Accept(
    LevelDBObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLevelDBObserver_KeyAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::KeyAdded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBObserver_KeyAdded_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_KeyAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_value{};
      std::string p_source{};
      LevelDBObserver_KeyAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::KeyAdded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->KeyAdded(
std::move(p_key), 
std::move(p_value), 
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_KeyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::KeyChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBObserver_KeyChanged_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_KeyChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_new_value{};
      std::vector<uint8_t> p_old_value{};
      std::string p_source{};
      LevelDBObserver_KeyChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadNewValue(&p_new_value))
        success = false;
      if (!input_data_view.ReadOldValue(&p_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::KeyChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->KeyChanged(
std::move(p_key), 
std::move(p_new_value), 
std::move(p_old_value), 
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_KeyDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::KeyDeleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBObserver_KeyDeleted_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_KeyDeleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_old_value{};
      std::string p_source{};
      LevelDBObserver_KeyDeleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadOldValue(&p_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::KeyDeleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->KeyDeleted(
std::move(p_key), 
std::move(p_old_value), 
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_AllDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::AllDeleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBObserver_AllDeleted_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_AllDeleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_source{};
      LevelDBObserver_AllDeleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::AllDeleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AllDeleted(
std::move(p_source));
      return true;
    }
    case internal::kLevelDBObserver_ShouldSendOldValueOnMutations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::ShouldSendOldValueOnMutations",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data* params =
          reinterpret_cast<internal::LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_value{};
      LevelDBObserver_ShouldSendOldValueOnMutations_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBObserver::ShouldSendOldValueOnMutations deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ShouldSendOldValueOnMutations(
std::move(p_value));
      return true;
    }
  }
  return false;
}

// static
bool LevelDBObserverStubDispatch::AcceptWithResponder(
    LevelDBObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLevelDBObserver_KeyAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::KeyAdded",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBObserver_KeyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::KeyChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBObserver_KeyDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::KeyDeleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBObserver_AllDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::AllDeleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBObserver_ShouldSendOldValueOnMutations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBObserver::ShouldSendOldValueOnMutations",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool LevelDBObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kLevelDBObserver_KeyAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_KeyAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBObserver_KeyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_KeyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBObserver_KeyDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_KeyDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBObserver_AllDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_AllDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBObserver_ShouldSendOldValueOnMutations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBObserver_ShouldSendOldValueOnMutations_Params_Data>(
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

void LevelDBObserverInterceptorForTesting::KeyAdded(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const std::string& source) {
  GetForwardingInterface()->KeyAdded(std::move(key), std::move(value), std::move(source));
}
void LevelDBObserverInterceptorForTesting::KeyChanged(const std::vector<uint8_t>& key, const std::vector<uint8_t>& new_value, const std::vector<uint8_t>& old_value, const std::string& source) {
  GetForwardingInterface()->KeyChanged(std::move(key), std::move(new_value), std::move(old_value), std::move(source));
}
void LevelDBObserverInterceptorForTesting::KeyDeleted(const std::vector<uint8_t>& key, const std::vector<uint8_t>& old_value, const std::string& source) {
  GetForwardingInterface()->KeyDeleted(std::move(key), std::move(old_value), std::move(source));
}
void LevelDBObserverInterceptorForTesting::AllDeleted(const std::string& source) {
  GetForwardingInterface()->AllDeleted(std::move(source));
}
void LevelDBObserverInterceptorForTesting::ShouldSendOldValueOnMutations(bool value) {
  GetForwardingInterface()->ShouldSendOldValueOnMutations(std::move(value));
}
LevelDBObserverAsyncWaiter::LevelDBObserverAsyncWaiter(
    LevelDBObserver* proxy) : proxy_(proxy) {}

LevelDBObserverAsyncWaiter::~LevelDBObserverAsyncWaiter() = default;


const char LevelDBWrapperGetAllCallback::Name_[] = "content.mojom.LevelDBWrapperGetAllCallback";

LevelDBWrapperGetAllCallbackProxy::LevelDBWrapperGetAllCallbackProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LevelDBWrapperGetAllCallbackProxy::Complete(
    bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapperGetAllCallback::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapperGetAllCallback_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapperGetAllCallback_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool LevelDBWrapperGetAllCallbackStubDispatch::Accept(
    LevelDBWrapperGetAllCallback* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLevelDBWrapperGetAllCallback_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapperGetAllCallback::Complete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBWrapperGetAllCallback_Complete_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapperGetAllCallback_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_success{};
      LevelDBWrapperGetAllCallback_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapperGetAllCallback::Complete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Complete(
std::move(p_success));
      return true;
    }
  }
  return false;
}

// static
bool LevelDBWrapperGetAllCallbackStubDispatch::AcceptWithResponder(
    LevelDBWrapperGetAllCallback* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLevelDBWrapperGetAllCallback_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapperGetAllCallback::Complete",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool LevelDBWrapperGetAllCallbackRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBWrapperGetAllCallback RequestValidator");

  switch (message->header()->name) {
    case internal::kLevelDBWrapperGetAllCallback_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapperGetAllCallback_Complete_Params_Data>(
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

void LevelDBWrapperGetAllCallbackInterceptorForTesting::Complete(bool success) {
  GetForwardingInterface()->Complete(std::move(success));
}
LevelDBWrapperGetAllCallbackAsyncWaiter::LevelDBWrapperGetAllCallbackAsyncWaiter(
    LevelDBWrapperGetAllCallback* proxy) : proxy_(proxy) {}

LevelDBWrapperGetAllCallbackAsyncWaiter::~LevelDBWrapperGetAllCallbackAsyncWaiter() = default;


const char LevelDBWrapper::Name_[] = "content.mojom.LevelDBWrapper";
bool LevelDBWrapper::GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data) {
  NOTREACHED();
  return false;
}

class LevelDBWrapper_Put_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_Put_ForwardToCallback(
      LevelDBWrapper::PutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::PutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Put_ForwardToCallback);
};

class LevelDBWrapper_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_Delete_ForwardToCallback(
      LevelDBWrapper::DeleteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::DeleteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Delete_ForwardToCallback);
};

class LevelDBWrapper_DeleteAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_DeleteAll_ForwardToCallback(
      LevelDBWrapper::DeleteAllCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::DeleteAllCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_DeleteAll_ForwardToCallback);
};

class LevelDBWrapper_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_Get_ForwardToCallback(
      LevelDBWrapper::GetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::GetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Get_ForwardToCallback);
};
class LevelDBWrapper_GetAll_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_GetAll_HandleSyncResponse(
      bool* result, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data)
      : result_(result), out_status_(out_status), out_data_(out_data) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::leveldb::mojom::DatabaseError* out_status_;
  std::vector<KeyValuePtr>* out_data_;DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_GetAll_HandleSyncResponse);
};

class LevelDBWrapper_GetAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  LevelDBWrapper_GetAll_ForwardToCallback(
      LevelDBWrapper::GetAllCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  LevelDBWrapper::GetAllCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_GetAll_ForwardToCallback);
};

LevelDBWrapperProxy::LevelDBWrapperProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LevelDBWrapperProxy::AddObserver(
    LevelDBObserverAssociatedPtrInfo in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::LevelDBObserverAssociatedPtrInfoDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid observer in LevelDBWrapper.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void LevelDBWrapperProxy::Put(
    const std::vector<uint8_t>& in_key, const std::vector<uint8_t>& in_value, const base::Optional<std::vector<uint8_t>>& in_client_old_value, const std::string& in_source, PutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::Put");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_Put_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBWrapper.Put request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in LevelDBWrapper.Put request");
  typename decltype(params->client_old_value)::BaseType::BufferWriter
      client_old_value_writer;
  const mojo::internal::ContainerValidateParams client_old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_client_old_value, buffer, &client_old_value_writer, &client_old_value_validate_params,
      &serialization_context);
  params->client_old_value.Set(
      client_old_value_writer.is_null() ? nullptr : client_old_value_writer.data());
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.Put request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBWrapper_Put_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void LevelDBWrapperProxy::Delete(
    const std::vector<uint8_t>& in_key, const base::Optional<std::vector<uint8_t>>& in_client_old_value, const std::string& in_source, DeleteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBWrapper.Delete request");
  typename decltype(params->client_old_value)::BaseType::BufferWriter
      client_old_value_writer;
  const mojo::internal::ContainerValidateParams client_old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_client_old_value, buffer, &client_old_value_writer, &client_old_value_validate_params,
      &serialization_context);
  params->client_old_value.Set(
      client_old_value_writer.is_null() ? nullptr : client_old_value_writer.data());
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.Delete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBWrapper_Delete_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void LevelDBWrapperProxy::DeleteAll(
    const std::string& in_source, DeleteAllCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::DeleteAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_DeleteAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_DeleteAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in LevelDBWrapper.DeleteAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBWrapper_DeleteAll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void LevelDBWrapperProxy::Get(
    const std::vector<uint8_t>& in_key, GetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::Get");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_Get_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in LevelDBWrapper.Get request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBWrapper_Get_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool LevelDBWrapperProxy::GetAll(
    LevelDBWrapperGetAllCallbackAssociatedPtrInfo param_complete_callback, ::leveldb::mojom::DatabaseError* out_param_status, std::vector<KeyValuePtr>* out_param_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::GetAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_GetAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::LevelDBWrapperGetAllCallbackAssociatedPtrInfoDataView>(
      param_complete_callback, &params->complete_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->complete_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid complete_callback in LevelDBWrapper.GetAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBWrapper_GetAll_HandleSyncResponse(
          &result, out_param_status, out_param_data));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void LevelDBWrapperProxy::GetAll(
    LevelDBWrapperGetAllCallbackAssociatedPtrInfo in_complete_callback, GetAllCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "content::mojom::LevelDBWrapper::GetAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_GetAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::content::mojom::LevelDBWrapperGetAllCallbackAssociatedPtrInfoDataView>(
      in_complete_callback, &params->complete_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->complete_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid complete_callback in LevelDBWrapper.GetAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new LevelDBWrapper_GetAll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class LevelDBWrapper_Put_ProxyToResponder {
 public:
  static LevelDBWrapper::PutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBWrapper_Put_ProxyToResponder> proxy(
        new LevelDBWrapper_Put_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBWrapper_Put_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBWrapper_Put_ProxyToResponder() {
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
  LevelDBWrapper_Put_ProxyToResponder(
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
        << "LevelDBWrapper::PutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Put_ProxyToResponder);
};

bool LevelDBWrapper_Put_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::LevelDBWrapper::PutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBWrapper_Put_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBWrapper_Put_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  LevelDBWrapper_Put_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::Put response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void LevelDBWrapper_Put_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_Put_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::PutCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBWrapper_Delete_ProxyToResponder {
 public:
  static LevelDBWrapper::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBWrapper_Delete_ProxyToResponder> proxy(
        new LevelDBWrapper_Delete_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBWrapper_Delete_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBWrapper_Delete_ProxyToResponder() {
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
  LevelDBWrapper_Delete_ProxyToResponder(
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
        << "LevelDBWrapper::DeleteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Delete_ProxyToResponder);
};

bool LevelDBWrapper_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::LevelDBWrapper::DeleteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBWrapper_Delete_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBWrapper_Delete_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  LevelDBWrapper_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::Delete response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void LevelDBWrapper_Delete_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_Delete_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::DeleteCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBWrapper_DeleteAll_ProxyToResponder {
 public:
  static LevelDBWrapper::DeleteAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBWrapper_DeleteAll_ProxyToResponder> proxy(
        new LevelDBWrapper_DeleteAll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBWrapper_DeleteAll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBWrapper_DeleteAll_ProxyToResponder() {
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
  LevelDBWrapper_DeleteAll_ProxyToResponder(
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
        << "LevelDBWrapper::DeleteAllCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_DeleteAll_ProxyToResponder);
};

bool LevelDBWrapper_DeleteAll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::LevelDBWrapper::DeleteAllCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBWrapper_DeleteAll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBWrapper_DeleteAll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  LevelDBWrapper_DeleteAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::DeleteAll response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void LevelDBWrapper_DeleteAll_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_DeleteAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_DeleteAll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::DeleteAllCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBWrapper_Get_ProxyToResponder {
 public:
  static LevelDBWrapper::GetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBWrapper_Get_ProxyToResponder> proxy(
        new LevelDBWrapper_Get_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBWrapper_Get_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBWrapper_Get_ProxyToResponder() {
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
  LevelDBWrapper_Get_ProxyToResponder(
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
        << "LevelDBWrapper::GetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const std::vector<uint8_t>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_Get_ProxyToResponder);
};

bool LevelDBWrapper_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::LevelDBWrapper::GetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBWrapper_Get_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBWrapper_Get_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  std::vector<uint8_t> p_value{};
  LevelDBWrapper_Get_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::Get response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_value));
  return true;
}

void LevelDBWrapper_Get_ProxyToResponder::Run(
    bool in_success, const std::vector<uint8_t>& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_Get_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::GetCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class LevelDBWrapper_GetAll_ProxyToResponder {
 public:
  static LevelDBWrapper::GetAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<LevelDBWrapper_GetAll_ProxyToResponder> proxy(
        new LevelDBWrapper_GetAll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&LevelDBWrapper_GetAll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~LevelDBWrapper_GetAll_ProxyToResponder() {
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
  LevelDBWrapper_GetAll_ProxyToResponder(
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
        << "LevelDBWrapper::GetAllCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::leveldb::mojom::DatabaseError in_status, std::vector<KeyValuePtr> in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBWrapper_GetAll_ProxyToResponder);
};

bool LevelDBWrapper_GetAll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "content::mojom::LevelDBWrapper::GetAllCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::LevelDBWrapper_GetAll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::LevelDBWrapper_GetAll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::leveldb::mojom::DatabaseError p_status{};
  std::vector<KeyValuePtr> p_data{};
  LevelDBWrapper_GetAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::GetAll response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_data));
  return true;
}

void LevelDBWrapper_GetAll_ProxyToResponder::Run(
    ::leveldb::mojom::DatabaseError in_status, std::vector<KeyValuePtr> in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kLevelDBWrapper_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::content::mojom::internal::LevelDBWrapper_GetAll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::leveldb::mojom::DatabaseError>(
      in_status, &params->status);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::content::mojom::KeyValueDataView>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::GetAllCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool LevelDBWrapper_GetAll_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::LevelDBWrapper_GetAll_ResponseParams_Data* params =
      reinterpret_cast<internal::LevelDBWrapper_GetAll_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::leveldb::mojom::DatabaseError p_status{};
  std::vector<KeyValuePtr> p_data{};
  LevelDBWrapper_GetAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "LevelDBWrapper::GetAll response deserializer");
    return false;
  }
  *out_status_ = std::move(p_status);
  *out_data_ = std::move(p_data);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool LevelDBWrapperStubDispatch::Accept(
    LevelDBWrapper* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLevelDBWrapper_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::AddObserver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::LevelDBWrapper_AddObserver_Params_Data* params =
          reinterpret_cast<internal::LevelDBWrapper_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LevelDBObserverAssociatedPtrInfo p_observer{};
      LevelDBWrapper_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::AddObserver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
    case internal::kLevelDBWrapper_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::Put",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBWrapper_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::Delete",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::DeleteAll",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBWrapper_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::Get",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::GetAll",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool LevelDBWrapperStubDispatch::AcceptWithResponder(
    LevelDBWrapper* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kLevelDBWrapper_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::AddObserver",
               "message", message->name());
#endif
      break;
    }
    case internal::kLevelDBWrapper_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::Put",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBWrapper_Put_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBWrapper_Put_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      std::vector<uint8_t> p_value{};
      base::Optional<std::vector<uint8_t>> p_client_old_value{};
      std::string p_source{};
      LevelDBWrapper_Put_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadClientOldValue(&p_client_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::Put deserializer");
        return false;
      }
      LevelDBWrapper::PutCallback callback =
          LevelDBWrapper_Put_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Put(
std::move(p_key), 
std::move(p_value), 
std::move(p_client_old_value), 
std::move(p_source), std::move(callback));
      return true;
    }
    case internal::kLevelDBWrapper_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::Delete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBWrapper_Delete_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBWrapper_Delete_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      base::Optional<std::vector<uint8_t>> p_client_old_value{};
      std::string p_source{};
      LevelDBWrapper_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadClientOldValue(&p_client_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::Delete deserializer");
        return false;
      }
      LevelDBWrapper::DeleteCallback callback =
          LevelDBWrapper_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Delete(
std::move(p_key), 
std::move(p_client_old_value), 
std::move(p_source), std::move(callback));
      return true;
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::DeleteAll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBWrapper_DeleteAll_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBWrapper_DeleteAll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_source{};
      LevelDBWrapper_DeleteAll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::DeleteAll deserializer");
        return false;
      }
      LevelDBWrapper::DeleteAllCallback callback =
          LevelDBWrapper_DeleteAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteAll(
std::move(p_source), std::move(callback));
      return true;
    }
    case internal::kLevelDBWrapper_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::Get",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBWrapper_Get_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBWrapper_Get_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint8_t> p_key{};
      LevelDBWrapper_Get_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::Get deserializer");
        return false;
      }
      LevelDBWrapper::GetCallback callback =
          LevelDBWrapper_Get_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Get(
std::move(p_key), std::move(callback));
      return true;
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)content::mojom::LevelDBWrapper::GetAll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::LevelDBWrapper_GetAll_Params_Data* params =
          reinterpret_cast<
              internal::LevelDBWrapper_GetAll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      LevelDBWrapperGetAllCallbackAssociatedPtrInfo p_complete_callback{};
      LevelDBWrapper_GetAll_ParamsDataView input_data_view(params, &serialization_context);
      
      p_complete_callback =
          input_data_view.TakeCompleteCallback<decltype(p_complete_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "LevelDBWrapper::GetAll deserializer");
        return false;
      }
      LevelDBWrapper::GetAllCallback callback =
          LevelDBWrapper_GetAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAll(
std::move(p_complete_callback), std::move(callback));
      return true;
    }
  }
  return false;
}

bool LevelDBWrapperRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBWrapper RequestValidator");

  switch (message->header()->name) {
    case internal::kLevelDBWrapper_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_Put_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Put_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_DeleteAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Get_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_GetAll_Params_Data>(
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

bool LevelDBWrapperResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "LevelDBWrapper ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kLevelDBWrapper_Put_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Put_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_DeleteAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_DeleteAll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_Get_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kLevelDBWrapper_GetAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::LevelDBWrapper_GetAll_ResponseParams_Data>(
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
void LevelDBWrapperInterceptorForTesting::AddObserver(LevelDBObserverAssociatedPtrInfo observer) {
  GetForwardingInterface()->AddObserver(std::move(observer));
}
void LevelDBWrapperInterceptorForTesting::Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, PutCallback callback) {
  GetForwardingInterface()->Put(std::move(key), std::move(value), std::move(client_old_value), std::move(source), std::move(callback));
}
void LevelDBWrapperInterceptorForTesting::Delete(const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, DeleteCallback callback) {
  GetForwardingInterface()->Delete(std::move(key), std::move(client_old_value), std::move(source), std::move(callback));
}
void LevelDBWrapperInterceptorForTesting::DeleteAll(const std::string& source, DeleteAllCallback callback) {
  GetForwardingInterface()->DeleteAll(std::move(source), std::move(callback));
}
void LevelDBWrapperInterceptorForTesting::Get(const std::vector<uint8_t>& key, GetCallback callback) {
  GetForwardingInterface()->Get(std::move(key), std::move(callback));
}
void LevelDBWrapperInterceptorForTesting::GetAll(LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) {
  GetForwardingInterface()->GetAll(std::move(complete_callback), std::move(callback));
}
LevelDBWrapperAsyncWaiter::LevelDBWrapperAsyncWaiter(
    LevelDBWrapper* proxy) : proxy_(proxy) {}

LevelDBWrapperAsyncWaiter::~LevelDBWrapperAsyncWaiter() = default;

void LevelDBWrapperAsyncWaiter::Put(
    const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, bool* out_success) {
  base::RunLoop loop;
  proxy_->Put(std::move(key),std::move(value),std::move(client_old_value),std::move(source),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void LevelDBWrapperAsyncWaiter::Delete(
    const std::vector<uint8_t>& key, const base::Optional<std::vector<uint8_t>>& client_old_value, const std::string& source, bool* out_success) {
  base::RunLoop loop;
  proxy_->Delete(std::move(key),std::move(client_old_value),std::move(source),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void LevelDBWrapperAsyncWaiter::DeleteAll(
    const std::string& source, bool* out_success) {
  base::RunLoop loop;
  proxy_->DeleteAll(std::move(source),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void LevelDBWrapperAsyncWaiter::Get(
    const std::vector<uint8_t>& key, bool* out_success, std::vector<uint8_t>* out_value) {
  base::RunLoop loop;
  proxy_->Get(std::move(key),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             std::vector<uint8_t>* out_value
,
             bool success,
             const std::vector<uint8_t>& value) {*out_success = std::move(success);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_success,
          out_value));
  loop.Run();
}
void LevelDBWrapperAsyncWaiter::GetAll(
    LevelDBWrapperGetAllCallbackAssociatedPtrInfo complete_callback, ::leveldb::mojom::DatabaseError* out_status, std::vector<KeyValuePtr>* out_data) {
  base::RunLoop loop;
  proxy_->GetAll(std::move(complete_callback),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::leveldb::mojom::DatabaseError* out_status
,
             std::vector<KeyValuePtr>* out_data
,
             ::leveldb::mojom::DatabaseError status,
             std::vector<KeyValuePtr> data) {*out_status = std::move(status);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_data));
  loop.Run();
}

}  // namespace mojom
}  // namespace content

namespace mojo {


// static
bool StructTraits<::content::mojom::KeyValue::DataView, ::content::mojom::KeyValuePtr>::Read(
    ::content::mojom::KeyValue::DataView input,
    ::content::mojom::KeyValuePtr* output) {
  bool success = true;
  ::content::mojom::KeyValuePtr result(::content::mojom::KeyValue::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
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