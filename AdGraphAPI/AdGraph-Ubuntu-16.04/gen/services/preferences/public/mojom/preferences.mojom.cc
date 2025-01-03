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

#include "services/preferences/public/mojom/preferences.mojom.h"

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

#include "services/preferences/public/mojom/preferences.mojom-shared-message-ids.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/preferences/public/cpp/preferences_mojom_traits.h"
namespace prefs {
namespace mojom {
const char kServiceName[] = "preferences";
const char kLocalStateServiceName[] = "local_state";
PrefStoreConnection::PrefStoreConnection()
    : observer(),
      initial_prefs(),
      is_initialized() {}

PrefStoreConnection::PrefStoreConnection(
    PrefStoreObserverRequest observer_in,
    base::Value initial_prefs_in,
    bool is_initialized_in)
    : observer(std::move(observer_in)),
      initial_prefs(std::move(initial_prefs_in)),
      is_initialized(std::move(is_initialized_in)) {}

PrefStoreConnection::~PrefStoreConnection() = default;

bool PrefStoreConnection::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PersistentPrefStoreConnection::PersistentPrefStoreConnection()
    : pref_store_connection(),
      pref_store(),
      read_error(),
      read_only() {}

PersistentPrefStoreConnection::PersistentPrefStoreConnection(
    PrefStoreConnectionPtr pref_store_connection_in,
    PersistentPrefStorePtrInfo pref_store_in,
    ::PersistentPrefStore::PrefReadError read_error_in,
    bool read_only_in)
    : pref_store_connection(std::move(pref_store_connection_in)),
      pref_store(std::move(pref_store_in)),
      read_error(std::move(read_error_in)),
      read_only(std::move(read_only_in)) {}

PersistentPrefStoreConnection::~PersistentPrefStoreConnection() = default;

bool PersistentPrefStoreConnection::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IncognitoPersistentPrefStoreConnection::IncognitoPersistentPrefStoreConnection()
    : pref_store_connection(),
      overlay_pref_names() {}

IncognitoPersistentPrefStoreConnection::IncognitoPersistentPrefStoreConnection(
    PersistentPrefStoreConnectionPtr pref_store_connection_in,
    const std::vector<std::string>& overlay_pref_names_in)
    : pref_store_connection(std::move(pref_store_connection_in)),
      overlay_pref_names(std::move(overlay_pref_names_in)) {}

IncognitoPersistentPrefStoreConnection::~IncognitoPersistentPrefStoreConnection() = default;

bool IncognitoPersistentPrefStoreConnection::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SubPrefUpdate::SubPrefUpdate()
    : path(),
      value() {}

SubPrefUpdate::SubPrefUpdate(
    const std::vector<std::string>& path_in,
    base::Optional<base::Value> value_in)
    : path(std::move(path_in)),
      value(std::move(value_in)) {}

SubPrefUpdate::~SubPrefUpdate() = default;

bool SubPrefUpdate::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PrefUpdate::PrefUpdate()
    : key(),
      value(),
      flags() {}

PrefUpdate::PrefUpdate(
    const std::string& key_in,
    PrefUpdateValuePtr value_in,
    uint32_t flags_in)
    : key(std::move(key_in)),
      value(std::move(value_in)),
      flags(std::move(flags_in)) {}

PrefUpdate::~PrefUpdate() = default;

bool PrefUpdate::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PrefRegistry::PrefRegistry()
    : private_registrations(),
      foreign_registrations(),
      public_registrations() {}

PrefRegistry::PrefRegistry(
    const std::vector<std::string>& private_registrations_in,
    const std::vector<std::string>& foreign_registrations_in,
    std::vector<PrefRegistrationPtr> public_registrations_in)
    : private_registrations(std::move(private_registrations_in)),
      foreign_registrations(std::move(foreign_registrations_in)),
      public_registrations(std::move(public_registrations_in)) {}

PrefRegistry::~PrefRegistry() = default;

bool PrefRegistry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PrefRegistration::PrefRegistration()
    : key(),
      default_value(),
      flags() {}

PrefRegistration::PrefRegistration(
    const std::string& key_in,
    base::Value default_value_in,
    uint32_t flags_in)
    : key(std::move(key_in)),
      default_value(std::move(default_value_in)),
      flags(std::move(flags_in)) {}

PrefRegistration::~PrefRegistration() = default;

bool PrefRegistration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TrackedPersistentPrefStoreConfiguration::TrackedPersistentPrefStoreConfiguration()
    : unprotected_pref_filename(),
      protected_pref_filename(),
      tracking_configuration(),
      reporting_ids_count(),
      seed(),
      legacy_device_id(),
      registry_seed(),
      registry_path(),
      validation_delegate(),
      reset_on_load_observer() {}

TrackedPersistentPrefStoreConfiguration::TrackedPersistentPrefStoreConfiguration(
    const base::FilePath& unprotected_pref_filename_in,
    const base::FilePath& protected_pref_filename_in,
    std::vector<TrackedPreferenceMetadataPtr> tracking_configuration_in,
    uint64_t reporting_ids_count_in,
    const std::string& seed_in,
    const std::string& legacy_device_id_in,
    const std::string& registry_seed_in,
    const base::string16& registry_path_in,
    ::prefs::mojom::TrackedPreferenceValidationDelegatePtrInfo validation_delegate_in,
    ResetOnLoadObserverPtrInfo reset_on_load_observer_in)
    : unprotected_pref_filename(std::move(unprotected_pref_filename_in)),
      protected_pref_filename(std::move(protected_pref_filename_in)),
      tracking_configuration(std::move(tracking_configuration_in)),
      reporting_ids_count(std::move(reporting_ids_count_in)),
      seed(std::move(seed_in)),
      legacy_device_id(std::move(legacy_device_id_in)),
      registry_seed(std::move(registry_seed_in)),
      registry_path(std::move(registry_path_in)),
      validation_delegate(std::move(validation_delegate_in)),
      reset_on_load_observer(std::move(reset_on_load_observer_in)) {}

TrackedPersistentPrefStoreConfiguration::~TrackedPersistentPrefStoreConfiguration() = default;

bool TrackedPersistentPrefStoreConfiguration::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TrackedPreferenceMetadata::TrackedPreferenceMetadata()
    : reporting_id(),
      name(),
      enforcement_level(),
      strategy(),
      value_type() {}

TrackedPreferenceMetadata::TrackedPreferenceMetadata(
    uint64_t reporting_id_in,
    const std::string& name_in,
    TrackedPreferenceMetadata::EnforcementLevel enforcement_level_in,
    TrackedPreferenceMetadata::PrefTrackingStrategy strategy_in,
    TrackedPreferenceMetadata::ValueType value_type_in)
    : reporting_id(std::move(reporting_id_in)),
      name(std::move(name_in)),
      enforcement_level(std::move(enforcement_level_in)),
      strategy(std::move(strategy_in)),
      value_type(std::move(value_type_in)) {}

TrackedPreferenceMetadata::~TrackedPreferenceMetadata() = default;
size_t TrackedPreferenceMetadata::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->reporting_id);
  seed = mojo::internal::Hash(seed, this->name);
  seed = mojo::internal::Hash(seed, this->enforcement_level);
  seed = mojo::internal::Hash(seed, this->strategy);
  seed = mojo::internal::Hash(seed, this->value_type);
  return seed;
}

bool TrackedPreferenceMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PrefUpdateValue::PrefUpdateValue() : tag_(Tag::SPLIT_UPDATES) {
  data_.split_updates = new std::vector<SubPrefUpdatePtr>;
}

PrefUpdateValue::~PrefUpdateValue() {
  DestroyActive();
}


void PrefUpdateValue::set_split_updates(
    std::vector<SubPrefUpdatePtr> split_updates) {
  if (tag_ == Tag::SPLIT_UPDATES) {
    *(data_.split_updates) = std::move(split_updates);
  } else {
    DestroyActive();
    tag_ = Tag::SPLIT_UPDATES;
    data_.split_updates = new std::vector<SubPrefUpdatePtr>(
        std::move(split_updates));
  }
}
void PrefUpdateValue::set_atomic_update(
    base::Optional<base::Value> atomic_update) {
  if (tag_ == Tag::ATOMIC_UPDATE) {
    *(data_.atomic_update) = std::move(atomic_update);
  } else {
    DestroyActive();
    tag_ = Tag::ATOMIC_UPDATE;
    data_.atomic_update = new base::Optional<base::Value>(
        std::move(atomic_update));
  }
}

void PrefUpdateValue::DestroyActive() {
  switch (tag_) {

    case Tag::SPLIT_UPDATES:

      delete data_.split_updates;
      break;
    case Tag::ATOMIC_UPDATE:

      delete data_.atomic_update;
      break;
  }
}

bool PrefUpdateValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char PrefStoreObserver::Name_[] = "prefs.mojom.PrefStoreObserver";

PrefStoreObserverProxy::PrefStoreObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PrefStoreObserverProxy::OnPrefsChanged(
    std::vector<PrefUpdatePtr> in_updates) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PrefStoreObserver::OnPrefsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrefStoreObserver_OnPrefsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PrefStoreObserver_OnPrefsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->updates)::BaseType::BufferWriter
      updates_writer;
  const mojo::internal::ContainerValidateParams updates_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::prefs::mojom::PrefUpdateDataView>>(
      in_updates, buffer, &updates_writer, &updates_validate_params,
      &serialization_context);
  params->updates.Set(
      updates_writer.is_null() ? nullptr : updates_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->updates.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null updates in PrefStoreObserver.OnPrefsChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrefStoreObserverProxy::OnInitializationCompleted(
    bool in_succeeded) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PrefStoreObserver::OnInitializationCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrefStoreObserver_OnInitializationCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PrefStoreObserver_OnInitializationCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->succeeded = in_succeeded;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PrefStoreObserverProxy::OnPrefChangeAck(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PrefStoreObserver::OnPrefChangeAck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrefStoreObserver_OnPrefChangeAck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PrefStoreObserver_OnPrefChangeAck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PrefStoreObserverStubDispatch::Accept(
    PrefStoreObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPrefStoreObserver_OnPrefsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreObserver::OnPrefsChanged",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrefStoreObserver_OnPrefsChanged_Params_Data* params =
          reinterpret_cast<internal::PrefStoreObserver_OnPrefsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<PrefUpdatePtr> p_updates{};
      PrefStoreObserver_OnPrefsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdates(&p_updates))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrefStoreObserver::OnPrefsChanged deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPrefsChanged(
std::move(p_updates));
      return true;
    }
    case internal::kPrefStoreObserver_OnInitializationCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreObserver::OnInitializationCompleted",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrefStoreObserver_OnInitializationCompleted_Params_Data* params =
          reinterpret_cast<internal::PrefStoreObserver_OnInitializationCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_succeeded{};
      PrefStoreObserver_OnInitializationCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_succeeded = input_data_view.succeeded();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrefStoreObserver::OnInitializationCompleted deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnInitializationCompleted(
std::move(p_succeeded));
      return true;
    }
    case internal::kPrefStoreObserver_OnPrefChangeAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreObserver::OnPrefChangeAck",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PrefStoreObserver_OnPrefChangeAck_Params_Data* params =
          reinterpret_cast<internal::PrefStoreObserver_OnPrefChangeAck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PrefStoreObserver_OnPrefChangeAck_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrefStoreObserver::OnPrefChangeAck deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPrefChangeAck();
      return true;
    }
  }
  return false;
}

// static
bool PrefStoreObserverStubDispatch::AcceptWithResponder(
    PrefStoreObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPrefStoreObserver_OnPrefsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreObserver::OnPrefsChanged",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrefStoreObserver_OnInitializationCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreObserver::OnInitializationCompleted",
               "message", message->name());
#endif
      break;
    }
    case internal::kPrefStoreObserver_OnPrefChangeAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreObserver::OnPrefChangeAck",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PrefStoreObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PrefStoreObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kPrefStoreObserver_OnPrefsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrefStoreObserver_OnPrefsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrefStoreObserver_OnInitializationCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrefStoreObserver_OnInitializationCompleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPrefStoreObserver_OnPrefChangeAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrefStoreObserver_OnPrefChangeAck_Params_Data>(
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

void PrefStoreObserverInterceptorForTesting::OnPrefsChanged(std::vector<PrefUpdatePtr> updates) {
  GetForwardingInterface()->OnPrefsChanged(std::move(updates));
}
void PrefStoreObserverInterceptorForTesting::OnInitializationCompleted(bool succeeded) {
  GetForwardingInterface()->OnInitializationCompleted(std::move(succeeded));
}
void PrefStoreObserverInterceptorForTesting::OnPrefChangeAck() {
  GetForwardingInterface()->OnPrefChangeAck();
}
PrefStoreObserverAsyncWaiter::PrefStoreObserverAsyncWaiter(
    PrefStoreObserver* proxy) : proxy_(proxy) {}

PrefStoreObserverAsyncWaiter::~PrefStoreObserverAsyncWaiter() = default;


const char PrefStoreConnector::Name_[] = "prefs.mojom.PrefStoreConnector";

class PrefStoreConnector_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PrefStoreConnector_Connect_ForwardToCallback(
      PrefStoreConnector::ConnectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PrefStoreConnector::ConnectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PrefStoreConnector_Connect_ForwardToCallback);
};

PrefStoreConnectorProxy::PrefStoreConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PrefStoreConnectorProxy::Connect(
    PrefRegistryPtr in_pref_registry, ConnectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PrefStoreConnector::Connect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrefStoreConnector_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PrefStoreConnector_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pref_registry)::BaseType::BufferWriter
      pref_registry_writer;
  mojo::internal::Serialize<::prefs::mojom::PrefRegistryDataView>(
      in_pref_registry, buffer, &pref_registry_writer, &serialization_context);
  params->pref_registry.Set(
      pref_registry_writer.is_null() ? nullptr : pref_registry_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pref_registry.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pref_registry in PrefStoreConnector.Connect request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PrefStoreConnector_Connect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PrefStoreConnector_Connect_ProxyToResponder {
 public:
  static PrefStoreConnector::ConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PrefStoreConnector_Connect_ProxyToResponder> proxy(
        new PrefStoreConnector_Connect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PrefStoreConnector_Connect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PrefStoreConnector_Connect_ProxyToResponder() {
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
  PrefStoreConnector_Connect_ProxyToResponder(
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
        << "PrefStoreConnector::ConnectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PersistentPrefStoreConnectionPtr in_connection, IncognitoPersistentPrefStoreConnectionPtr in_underlay, std::vector<PrefRegistrationPtr> in_remote_defaults, base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr> in_connections);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PrefStoreConnector_Connect_ProxyToResponder);
};

bool PrefStoreConnector_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "prefs::mojom::PrefStoreConnector::ConnectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PrefStoreConnector_Connect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PrefStoreConnector_Connect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PersistentPrefStoreConnectionPtr p_connection{};
  IncognitoPersistentPrefStoreConnectionPtr p_underlay{};
  std::vector<PrefRegistrationPtr> p_remote_defaults{};
  base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr> p_connections{};
  PrefStoreConnector_Connect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadConnection(&p_connection))
    success = false;
  if (!input_data_view.ReadUnderlay(&p_underlay))
    success = false;
  if (!input_data_view.ReadRemoteDefaults(&p_remote_defaults))
    success = false;
  if (!input_data_view.ReadConnections(&p_connections))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PrefStoreConnector::Connect response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_connection), 
std::move(p_underlay), 
std::move(p_remote_defaults), 
std::move(p_connections));
  return true;
}

void PrefStoreConnector_Connect_ProxyToResponder::Run(
    PersistentPrefStoreConnectionPtr in_connection, IncognitoPersistentPrefStoreConnectionPtr in_underlay, std::vector<PrefRegistrationPtr> in_remote_defaults, base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr> in_connections) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPrefStoreConnector_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PrefStoreConnector_Connect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->connection)::BaseType::BufferWriter
      connection_writer;
  mojo::internal::Serialize<::prefs::mojom::PersistentPrefStoreConnectionDataView>(
      in_connection, buffer, &connection_writer, &serialization_context);
  params->connection.Set(
      connection_writer.is_null() ? nullptr : connection_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->connection.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null connection in ");
  typename decltype(params->underlay)::BaseType::BufferWriter
      underlay_writer;
  mojo::internal::Serialize<::prefs::mojom::IncognitoPersistentPrefStoreConnectionDataView>(
      in_underlay, buffer, &underlay_writer, &serialization_context);
  params->underlay.Set(
      underlay_writer.is_null() ? nullptr : underlay_writer.data());
  typename decltype(params->remote_defaults)::BaseType::BufferWriter
      remote_defaults_writer;
  const mojo::internal::ContainerValidateParams remote_defaults_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::prefs::mojom::PrefRegistrationDataView>>(
      in_remote_defaults, buffer, &remote_defaults_writer, &remote_defaults_validate_params,
      &serialization_context);
  params->remote_defaults.Set(
      remote_defaults_writer.is_null() ? nullptr : remote_defaults_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_defaults.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_defaults in ");
  typename decltype(params->connections)::BaseType::BufferWriter
      connections_writer;
  const mojo::internal::ContainerValidateParams connections_validate_params(
      new mojo::internal::ContainerValidateParams(0, ::prefs::mojom::internal::PrefStoreType_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<::prefs::mojom::PrefStoreType, ::prefs::mojom::PrefStoreConnectionDataView>>(
      in_connections, buffer, &connections_writer, &connections_validate_params,
      &serialization_context);
  params->connections.Set(
      connections_writer.is_null() ? nullptr : connections_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->connections.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null connections in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreConnector::ConnectCallback",
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
bool PrefStoreConnectorStubDispatch::Accept(
    PrefStoreConnector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPrefStoreConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreConnector::Connect",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool PrefStoreConnectorStubDispatch::AcceptWithResponder(
    PrefStoreConnector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPrefStoreConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PrefStoreConnector::Connect",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PrefStoreConnector_Connect_Params_Data* params =
          reinterpret_cast<
              internal::PrefStoreConnector_Connect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PrefRegistryPtr p_pref_registry{};
      PrefStoreConnector_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPrefRegistry(&p_pref_registry))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PrefStoreConnector::Connect deserializer");
        return false;
      }
      PrefStoreConnector::ConnectCallback callback =
          PrefStoreConnector_Connect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Connect(
std::move(p_pref_registry), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PrefStoreConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PrefStoreConnector RequestValidator");

  switch (message->header()->name) {
    case internal::kPrefStoreConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrefStoreConnector_Connect_Params_Data>(
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

bool PrefStoreConnectorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PrefStoreConnector ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPrefStoreConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PrefStoreConnector_Connect_ResponseParams_Data>(
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
void PrefStoreConnectorInterceptorForTesting::Connect(PrefRegistryPtr pref_registry, ConnectCallback callback) {
  GetForwardingInterface()->Connect(std::move(pref_registry), std::move(callback));
}
PrefStoreConnectorAsyncWaiter::PrefStoreConnectorAsyncWaiter(
    PrefStoreConnector* proxy) : proxy_(proxy) {}

PrefStoreConnectorAsyncWaiter::~PrefStoreConnectorAsyncWaiter() = default;

void PrefStoreConnectorAsyncWaiter::Connect(
    PrefRegistryPtr pref_registry, PersistentPrefStoreConnectionPtr* out_connection, IncognitoPersistentPrefStoreConnectionPtr* out_underlay, std::vector<PrefRegistrationPtr>* out_remote_defaults, base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr>* out_connections) {
  base::RunLoop loop;
  proxy_->Connect(std::move(pref_registry),
      base::BindOnce(
          [](base::RunLoop* loop,
             PersistentPrefStoreConnectionPtr* out_connection
,
             IncognitoPersistentPrefStoreConnectionPtr* out_underlay
,
             std::vector<PrefRegistrationPtr>* out_remote_defaults
,
             base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr>* out_connections
,
             PersistentPrefStoreConnectionPtr connection,
             IncognitoPersistentPrefStoreConnectionPtr underlay,
             std::vector<PrefRegistrationPtr> remote_defaults,
             base::flat_map<::PrefValueStore::PrefStoreType, PrefStoreConnectionPtr> connections) {*out_connection = std::move(connection);*out_underlay = std::move(underlay);*out_remote_defaults = std::move(remote_defaults);*out_connections = std::move(connections);
            loop->Quit();
          },
          &loop,
          out_connection,
          out_underlay,
          out_remote_defaults,
          out_connections));
  loop.Run();
}

const char PersistentPrefStore::Name_[] = "prefs.mojom.PersistentPrefStore";

class PersistentPrefStore_CommitPendingWrite_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PersistentPrefStore_CommitPendingWrite_ForwardToCallback(
      PersistentPrefStore::CommitPendingWriteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PersistentPrefStore::CommitPendingWriteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PersistentPrefStore_CommitPendingWrite_ForwardToCallback);
};

PersistentPrefStoreProxy::PersistentPrefStoreProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PersistentPrefStoreProxy::SetValues(
    std::vector<PrefUpdatePtr> in_updates) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PersistentPrefStore::SetValues");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_SetValues_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_SetValues_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->updates)::BaseType::BufferWriter
      updates_writer;
  const mojo::internal::ContainerValidateParams updates_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::prefs::mojom::PrefUpdateDataView>>(
      in_updates, buffer, &updates_writer, &updates_validate_params,
      &serialization_context);
  params->updates.Set(
      updates_writer.is_null() ? nullptr : updates_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->updates.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null updates in PersistentPrefStore.SetValues request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PersistentPrefStoreProxy::RequestValue(
    const std::string& in_key, const std::vector<std::string>& in_sub_pref_path) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PersistentPrefStore::RequestValue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_RequestValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_RequestValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in PersistentPrefStore.RequestValue request");
  typename decltype(params->sub_pref_path)::BaseType::BufferWriter
      sub_pref_path_writer;
  const mojo::internal::ContainerValidateParams sub_pref_path_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_sub_pref_path, buffer, &sub_pref_path_writer, &sub_pref_path_validate_params,
      &serialization_context);
  params->sub_pref_path.Set(
      sub_pref_path_writer.is_null() ? nullptr : sub_pref_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sub_pref_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sub_pref_path in PersistentPrefStore.RequestValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PersistentPrefStoreProxy::CommitPendingWrite(
    CommitPendingWriteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PersistentPrefStore::CommitPendingWrite");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_CommitPendingWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_CommitPendingWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PersistentPrefStore_CommitPendingWrite_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PersistentPrefStoreProxy::SchedulePendingLossyWrites(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PersistentPrefStore::SchedulePendingLossyWrites");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_SchedulePendingLossyWrites_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PersistentPrefStoreProxy::ClearMutableValues(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PersistentPrefStore::ClearMutableValues");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_ClearMutableValues_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_ClearMutableValues_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PersistentPrefStoreProxy::OnStoreDeletionFromDisk(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::PersistentPrefStore::OnStoreDeletionFromDisk");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_OnStoreDeletionFromDisk_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PersistentPrefStore_CommitPendingWrite_ProxyToResponder {
 public:
  static PersistentPrefStore::CommitPendingWriteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PersistentPrefStore_CommitPendingWrite_ProxyToResponder> proxy(
        new PersistentPrefStore_CommitPendingWrite_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PersistentPrefStore_CommitPendingWrite_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PersistentPrefStore_CommitPendingWrite_ProxyToResponder() {
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
  PersistentPrefStore_CommitPendingWrite_ProxyToResponder(
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
        << "PersistentPrefStore::CommitPendingWriteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PersistentPrefStore_CommitPendingWrite_ProxyToResponder);
};

bool PersistentPrefStore_CommitPendingWrite_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "prefs::mojom::PersistentPrefStore::CommitPendingWriteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PersistentPrefStore_CommitPendingWrite_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "PersistentPrefStore::CommitPendingWrite response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void PersistentPrefStore_CommitPendingWrite_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPersistentPrefStore_CommitPendingWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::CommitPendingWriteCallback",
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
bool PersistentPrefStoreStubDispatch::Accept(
    PersistentPrefStore* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPersistentPrefStore_SetValues_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::SetValues",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PersistentPrefStore_SetValues_Params_Data* params =
          reinterpret_cast<internal::PersistentPrefStore_SetValues_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<PrefUpdatePtr> p_updates{};
      PersistentPrefStore_SetValues_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdates(&p_updates))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PersistentPrefStore::SetValues deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetValues(
std::move(p_updates));
      return true;
    }
    case internal::kPersistentPrefStore_RequestValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::RequestValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PersistentPrefStore_RequestValue_Params_Data* params =
          reinterpret_cast<internal::PersistentPrefStore_RequestValue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_key{};
      std::vector<std::string> p_sub_pref_path{};
      PersistentPrefStore_RequestValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadSubPrefPath(&p_sub_pref_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PersistentPrefStore::RequestValue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RequestValue(
std::move(p_key), 
std::move(p_sub_pref_path));
      return true;
    }
    case internal::kPersistentPrefStore_CommitPendingWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::CommitPendingWrite",
               "message", message->name());
#endif
      break;
    }
    case internal::kPersistentPrefStore_SchedulePendingLossyWrites_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::SchedulePendingLossyWrites",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data* params =
          reinterpret_cast<internal::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PersistentPrefStore_SchedulePendingLossyWrites_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PersistentPrefStore::SchedulePendingLossyWrites deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SchedulePendingLossyWrites();
      return true;
    }
    case internal::kPersistentPrefStore_ClearMutableValues_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::ClearMutableValues",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PersistentPrefStore_ClearMutableValues_Params_Data* params =
          reinterpret_cast<internal::PersistentPrefStore_ClearMutableValues_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PersistentPrefStore_ClearMutableValues_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PersistentPrefStore::ClearMutableValues deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearMutableValues();
      return true;
    }
    case internal::kPersistentPrefStore_OnStoreDeletionFromDisk_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::OnStoreDeletionFromDisk",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data* params =
          reinterpret_cast<internal::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PersistentPrefStore_OnStoreDeletionFromDisk_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PersistentPrefStore::OnStoreDeletionFromDisk deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnStoreDeletionFromDisk();
      return true;
    }
  }
  return false;
}

// static
bool PersistentPrefStoreStubDispatch::AcceptWithResponder(
    PersistentPrefStore* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPersistentPrefStore_SetValues_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::SetValues",
               "message", message->name());
#endif
      break;
    }
    case internal::kPersistentPrefStore_RequestValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::RequestValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kPersistentPrefStore_CommitPendingWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::CommitPendingWrite",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::PersistentPrefStore_CommitPendingWrite_Params_Data* params =
          reinterpret_cast<
              internal::PersistentPrefStore_CommitPendingWrite_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PersistentPrefStore_CommitPendingWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PersistentPrefStore::CommitPendingWrite deserializer");
        return false;
      }
      PersistentPrefStore::CommitPendingWriteCallback callback =
          PersistentPrefStore_CommitPendingWrite_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CommitPendingWrite(std::move(callback));
      return true;
    }
    case internal::kPersistentPrefStore_SchedulePendingLossyWrites_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::SchedulePendingLossyWrites",
               "message", message->name());
#endif
      break;
    }
    case internal::kPersistentPrefStore_ClearMutableValues_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::ClearMutableValues",
               "message", message->name());
#endif
      break;
    }
    case internal::kPersistentPrefStore_OnStoreDeletionFromDisk_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::PersistentPrefStore::OnStoreDeletionFromDisk",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool PersistentPrefStoreRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PersistentPrefStore RequestValidator");

  switch (message->header()->name) {
    case internal::kPersistentPrefStore_SetValues_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_SetValues_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPersistentPrefStore_RequestValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_RequestValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPersistentPrefStore_CommitPendingWrite_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_CommitPendingWrite_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPersistentPrefStore_SchedulePendingLossyWrites_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_SchedulePendingLossyWrites_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPersistentPrefStore_ClearMutableValues_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_ClearMutableValues_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPersistentPrefStore_OnStoreDeletionFromDisk_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_OnStoreDeletionFromDisk_Params_Data>(
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

bool PersistentPrefStoreResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PersistentPrefStore ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPersistentPrefStore_CommitPendingWrite_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PersistentPrefStore_CommitPendingWrite_ResponseParams_Data>(
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
void PersistentPrefStoreInterceptorForTesting::SetValues(std::vector<PrefUpdatePtr> updates) {
  GetForwardingInterface()->SetValues(std::move(updates));
}
void PersistentPrefStoreInterceptorForTesting::RequestValue(const std::string& key, const std::vector<std::string>& sub_pref_path) {
  GetForwardingInterface()->RequestValue(std::move(key), std::move(sub_pref_path));
}
void PersistentPrefStoreInterceptorForTesting::CommitPendingWrite(CommitPendingWriteCallback callback) {
  GetForwardingInterface()->CommitPendingWrite(std::move(callback));
}
void PersistentPrefStoreInterceptorForTesting::SchedulePendingLossyWrites() {
  GetForwardingInterface()->SchedulePendingLossyWrites();
}
void PersistentPrefStoreInterceptorForTesting::ClearMutableValues() {
  GetForwardingInterface()->ClearMutableValues();
}
void PersistentPrefStoreInterceptorForTesting::OnStoreDeletionFromDisk() {
  GetForwardingInterface()->OnStoreDeletionFromDisk();
}
PersistentPrefStoreAsyncWaiter::PersistentPrefStoreAsyncWaiter(
    PersistentPrefStore* proxy) : proxy_(proxy) {}

PersistentPrefStoreAsyncWaiter::~PersistentPrefStoreAsyncWaiter() = default;

void PersistentPrefStoreAsyncWaiter::CommitPendingWrite(
    ) {
  base::RunLoop loop;
  proxy_->CommitPendingWrite(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

const char ResetOnLoadObserver::Name_[] = "prefs.mojom.ResetOnLoadObserver";

ResetOnLoadObserverProxy::ResetOnLoadObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ResetOnLoadObserverProxy::OnResetOnLoad(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "prefs::mojom::ResetOnLoadObserver::OnResetOnLoad");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResetOnLoadObserver_OnResetOnLoad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::prefs::mojom::internal::ResetOnLoadObserver_OnResetOnLoad_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ResetOnLoadObserverStubDispatch::Accept(
    ResetOnLoadObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kResetOnLoadObserver_OnResetOnLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::ResetOnLoadObserver::OnResetOnLoad",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ResetOnLoadObserver_OnResetOnLoad_Params_Data* params =
          reinterpret_cast<internal::ResetOnLoadObserver_OnResetOnLoad_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ResetOnLoadObserver_OnResetOnLoad_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ResetOnLoadObserver::OnResetOnLoad deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnResetOnLoad();
      return true;
    }
  }
  return false;
}

// static
bool ResetOnLoadObserverStubDispatch::AcceptWithResponder(
    ResetOnLoadObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kResetOnLoadObserver_OnResetOnLoad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)prefs::mojom::ResetOnLoadObserver::OnResetOnLoad",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ResetOnLoadObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ResetOnLoadObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kResetOnLoadObserver_OnResetOnLoad_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResetOnLoadObserver_OnResetOnLoad_Params_Data>(
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

void ResetOnLoadObserverInterceptorForTesting::OnResetOnLoad() {
  GetForwardingInterface()->OnResetOnLoad();
}
ResetOnLoadObserverAsyncWaiter::ResetOnLoadObserverAsyncWaiter(
    ResetOnLoadObserver* proxy) : proxy_(proxy) {}

ResetOnLoadObserverAsyncWaiter::~ResetOnLoadObserverAsyncWaiter() = default;


}  // namespace mojom
}  // namespace prefs

namespace mojo {


// static
bool StructTraits<::prefs::mojom::PrefStoreConnection::DataView, ::prefs::mojom::PrefStoreConnectionPtr>::Read(
    ::prefs::mojom::PrefStoreConnection::DataView input,
    ::prefs::mojom::PrefStoreConnectionPtr* output) {
  bool success = true;
  ::prefs::mojom::PrefStoreConnectionPtr result(::prefs::mojom::PrefStoreConnection::New());
  
      result->observer =
          input.TakeObserver<decltype(result->observer)>();
      if (!input.ReadInitialPrefs(&result->initial_prefs))
        success = false;
      result->is_initialized = input.is_initialized();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::PersistentPrefStoreConnection::DataView, ::prefs::mojom::PersistentPrefStoreConnectionPtr>::Read(
    ::prefs::mojom::PersistentPrefStoreConnection::DataView input,
    ::prefs::mojom::PersistentPrefStoreConnectionPtr* output) {
  bool success = true;
  ::prefs::mojom::PersistentPrefStoreConnectionPtr result(::prefs::mojom::PersistentPrefStoreConnection::New());
  
      if (!input.ReadPrefStoreConnection(&result->pref_store_connection))
        success = false;
      result->pref_store =
          input.TakePrefStore<decltype(result->pref_store)>();
      if (!input.ReadReadError(&result->read_error))
        success = false;
      result->read_only = input.read_only();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::IncognitoPersistentPrefStoreConnection::DataView, ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr>::Read(
    ::prefs::mojom::IncognitoPersistentPrefStoreConnection::DataView input,
    ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr* output) {
  bool success = true;
  ::prefs::mojom::IncognitoPersistentPrefStoreConnectionPtr result(::prefs::mojom::IncognitoPersistentPrefStoreConnection::New());
  
      if (!input.ReadPrefStoreConnection(&result->pref_store_connection))
        success = false;
      if (!input.ReadOverlayPrefNames(&result->overlay_pref_names))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::SubPrefUpdate::DataView, ::prefs::mojom::SubPrefUpdatePtr>::Read(
    ::prefs::mojom::SubPrefUpdate::DataView input,
    ::prefs::mojom::SubPrefUpdatePtr* output) {
  bool success = true;
  ::prefs::mojom::SubPrefUpdatePtr result(::prefs::mojom::SubPrefUpdate::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::PrefUpdate::DataView, ::prefs::mojom::PrefUpdatePtr>::Read(
    ::prefs::mojom::PrefUpdate::DataView input,
    ::prefs::mojom::PrefUpdatePtr* output) {
  bool success = true;
  ::prefs::mojom::PrefUpdatePtr result(::prefs::mojom::PrefUpdate::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
      result->flags = input.flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::PrefRegistry::DataView, ::prefs::mojom::PrefRegistryPtr>::Read(
    ::prefs::mojom::PrefRegistry::DataView input,
    ::prefs::mojom::PrefRegistryPtr* output) {
  bool success = true;
  ::prefs::mojom::PrefRegistryPtr result(::prefs::mojom::PrefRegistry::New());
  
      if (!input.ReadPrivateRegistrations(&result->private_registrations))
        success = false;
      if (!input.ReadForeignRegistrations(&result->foreign_registrations))
        success = false;
      if (!input.ReadPublicRegistrations(&result->public_registrations))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::PrefRegistration::DataView, ::prefs::mojom::PrefRegistrationPtr>::Read(
    ::prefs::mojom::PrefRegistration::DataView input,
    ::prefs::mojom::PrefRegistrationPtr* output) {
  bool success = true;
  ::prefs::mojom::PrefRegistrationPtr result(::prefs::mojom::PrefRegistration::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadDefaultValue(&result->default_value))
        success = false;
      result->flags = input.flags();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::TrackedPersistentPrefStoreConfiguration::DataView, ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr>::Read(
    ::prefs::mojom::TrackedPersistentPrefStoreConfiguration::DataView input,
    ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr* output) {
  bool success = true;
  ::prefs::mojom::TrackedPersistentPrefStoreConfigurationPtr result(::prefs::mojom::TrackedPersistentPrefStoreConfiguration::New());
  
      if (!input.ReadUnprotectedPrefFilename(&result->unprotected_pref_filename))
        success = false;
      if (!input.ReadProtectedPrefFilename(&result->protected_pref_filename))
        success = false;
      if (!input.ReadTrackingConfiguration(&result->tracking_configuration))
        success = false;
      result->reporting_ids_count = input.reporting_ids_count();
      if (!input.ReadSeed(&result->seed))
        success = false;
      if (!input.ReadLegacyDeviceId(&result->legacy_device_id))
        success = false;
      if (!input.ReadRegistrySeed(&result->registry_seed))
        success = false;
      if (!input.ReadRegistryPath(&result->registry_path))
        success = false;
      result->validation_delegate =
          input.TakeValidationDelegate<decltype(result->validation_delegate)>();
      result->reset_on_load_observer =
          input.TakeResetOnLoadObserver<decltype(result->reset_on_load_observer)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::prefs::mojom::TrackedPreferenceMetadata::DataView, ::prefs::mojom::TrackedPreferenceMetadataPtr>::Read(
    ::prefs::mojom::TrackedPreferenceMetadata::DataView input,
    ::prefs::mojom::TrackedPreferenceMetadataPtr* output) {
  bool success = true;
  ::prefs::mojom::TrackedPreferenceMetadataPtr result(::prefs::mojom::TrackedPreferenceMetadata::New());
  
      result->reporting_id = input.reporting_id();
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadEnforcementLevel(&result->enforcement_level))
        success = false;
      if (!input.ReadStrategy(&result->strategy))
        success = false;
      if (!input.ReadValueType(&result->value_type))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::prefs::mojom::PrefUpdateValue::DataView, ::prefs::mojom::PrefUpdateValuePtr>::Read(
    ::prefs::mojom::PrefUpdateValue::DataView input,
    ::prefs::mojom::PrefUpdateValuePtr* output) {
  using UnionType = ::prefs::mojom::PrefUpdateValue;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::SPLIT_UPDATES: {
      std::vector<::prefs::mojom::SubPrefUpdatePtr> result_split_updates;
      if (!input.ReadSplitUpdates(&result_split_updates))
        return false;

      *output = UnionType::NewSplitUpdates(
          std::move(result_split_updates));
      break;
    }
    case Tag::ATOMIC_UPDATE: {
      base::Optional<base::Value> result_atomic_update;
      if (!input.ReadAtomicUpdate(&result_atomic_update))
        return false;

      *output = UnionType::NewAtomicUpdate(
          std::move(result_atomic_update));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif