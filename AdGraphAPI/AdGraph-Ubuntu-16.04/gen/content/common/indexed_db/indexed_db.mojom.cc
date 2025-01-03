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

#include "content/common/indexed_db/indexed_db.mojom.h"

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

#include "content/common/indexed_db/indexed_db.mojom-shared-message-ids.h"
#include "content/common/indexed_db/indexed_db_struct_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
namespace indexed_db {
namespace mojom {
Key::Key()
    : data() {}

Key::Key(
    KeyDataPtr data_in)
    : data(std::move(data_in)) {}

Key::~Key() = default;

bool Key::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
KeyPath::KeyPath()
    : data() {}

KeyPath::KeyPath(
    KeyPathDataPtr data_in)
    : data(std::move(data_in)) {}

KeyPath::~KeyPath() = default;

bool KeyPath::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
KeyRange::KeyRange()
    : lower(),
      upper(),
      lower_open(),
      upper_open() {}

KeyRange::KeyRange(
    const content::IndexedDBKey& lower_in,
    const content::IndexedDBKey& upper_in,
    bool lower_open_in,
    bool upper_open_in)
    : lower(std::move(lower_in)),
      upper(std::move(upper_in)),
      lower_open(std::move(lower_open_in)),
      upper_open(std::move(upper_open_in)) {}

KeyRange::~KeyRange() = default;

bool KeyRange::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IndexMetadata::IndexMetadata()
    : id(),
      name(),
      key_path(),
      unique(),
      multi_entry() {}

IndexMetadata::IndexMetadata(
    int64_t id_in,
    const base::string16& name_in,
    const content::IndexedDBKeyPath& key_path_in,
    bool unique_in,
    bool multi_entry_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      key_path(std::move(key_path_in)),
      unique(std::move(unique_in)),
      multi_entry(std::move(multi_entry_in)) {}

IndexMetadata::~IndexMetadata() = default;

bool IndexMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ObjectStoreMetadata::ObjectStoreMetadata()
    : id(),
      name(),
      key_path(),
      auto_increment(),
      max_index_id(),
      indexes() {}

ObjectStoreMetadata::ObjectStoreMetadata(
    int64_t id_in,
    const base::string16& name_in,
    const content::IndexedDBKeyPath& key_path_in,
    bool auto_increment_in,
    int64_t max_index_id_in,
    const std::vector<content::IndexedDBIndexMetadata>& indexes_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      key_path(std::move(key_path_in)),
      auto_increment(std::move(auto_increment_in)),
      max_index_id(std::move(max_index_id_in)),
      indexes(std::move(indexes_in)) {}

ObjectStoreMetadata::~ObjectStoreMetadata() = default;

bool ObjectStoreMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DatabaseMetadata::DatabaseMetadata()
    : id(),
      name(),
      version(),
      max_object_store_id(),
      object_stores() {}

DatabaseMetadata::DatabaseMetadata(
    int64_t id_in,
    const base::string16& name_in,
    int64_t version_in,
    int64_t max_object_store_id_in,
    const std::vector<content::IndexedDBObjectStoreMetadata>& object_stores_in)
    : id(std::move(id_in)),
      name(std::move(name_in)),
      version(std::move(version_in)),
      max_object_store_id(std::move(max_object_store_id_in)),
      object_stores(std::move(object_stores_in)) {}

DatabaseMetadata::~DatabaseMetadata() = default;

bool DatabaseMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IndexKeys::IndexKeys()
    : index_id(),
      index_keys() {}

IndexKeys::IndexKeys(
    int64_t index_id_in,
    const std::vector<content::IndexedDBKey>& index_keys_in)
    : index_id(std::move(index_id_in)),
      index_keys(std::move(index_keys_in)) {}

IndexKeys::~IndexKeys() = default;

bool IndexKeys::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FileInfo::FileInfo()
    : path(),
      name(),
      last_modified() {}

FileInfo::FileInfo(
    const base::FilePath& path_in,
    const base::string16& name_in,
    base::Time last_modified_in)
    : path(std::move(path_in)),
      name(std::move(name_in)),
      last_modified(std::move(last_modified_in)) {}

FileInfo::~FileInfo() = default;

bool FileInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BlobInfo::BlobInfo()
    : blob(),
      uuid(),
      mime_type(),
      size(),
      file() {}

BlobInfo::BlobInfo(
    ::blink::mojom::BlobPtrInfo blob_in,
    const std::string& uuid_in,
    const base::string16& mime_type_in,
    int64_t size_in,
    FileInfoPtr file_in)
    : blob(std::move(blob_in)),
      uuid(std::move(uuid_in)),
      mime_type(std::move(mime_type_in)),
      size(std::move(size_in)),
      file(std::move(file_in)) {}

BlobInfo::~BlobInfo() = default;

bool BlobInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Value::Value()
    : bits(),
      blob_or_file_info() {}

Value::Value(
    const std::string& bits_in,
    std::vector<BlobInfoPtr> blob_or_file_info_in)
    : bits(std::move(bits_in)),
      blob_or_file_info(std::move(blob_or_file_info_in)) {}

Value::~Value() = default;

bool Value::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ReturnValue::ReturnValue()
    : value(),
      primary_key(),
      key_path() {}

ReturnValue::ReturnValue(
    ValuePtr value_in,
    const content::IndexedDBKey& primary_key_in,
    const content::IndexedDBKeyPath& key_path_in)
    : value(std::move(value_in)),
      primary_key(std::move(primary_key_in)),
      key_path(std::move(key_path_in)) {}

ReturnValue::~ReturnValue() = default;

bool ReturnValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Observation::Observation()
    : object_store_id(),
      type(),
      key_range(),
      value() {}

Observation::Observation(
    int64_t object_store_id_in,
    blink::WebIDBOperationType type_in,
    const content::IndexedDBKeyRange& key_range_in,
    ValuePtr value_in)
    : object_store_id(std::move(object_store_id_in)),
      type(std::move(type_in)),
      key_range(std::move(key_range_in)),
      value(std::move(value_in)) {}

Observation::~Observation() = default;

bool Observation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ObserverTransaction::ObserverTransaction()
    : id(),
      scope() {}

ObserverTransaction::ObserverTransaction(
    int64_t id_in,
    const std::vector<int64_t>& scope_in)
    : id(std::move(id_in)),
      scope(std::move(scope_in)) {}

ObserverTransaction::~ObserverTransaction() = default;

bool ObserverTransaction::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ObserverChanges::ObserverChanges()
    : observation_index_map(),
      transaction_map(),
      observations() {}

ObserverChanges::ObserverChanges(
    const base::flat_map<int32_t, std::vector<int32_t>>& observation_index_map_in,
    base::flat_map<int32_t, ObserverTransactionPtr> transaction_map_in,
    std::vector<ObservationPtr> observations_in)
    : observation_index_map(std::move(observation_index_map_in)),
      transaction_map(std::move(transaction_map_in)),
      observations(std::move(observations_in)) {}

ObserverChanges::~ObserverChanges() = default;

bool ObserverChanges::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
KeyData::KeyData() : tag_(Tag::KEY_ARRAY) {
  data_.key_array = new std::vector<content::IndexedDBKey>;
}

KeyData::~KeyData() {
  DestroyActive();
}


void KeyData::set_key_array(
    const std::vector<content::IndexedDBKey>& key_array) {
  if (tag_ == Tag::KEY_ARRAY) {
    *(data_.key_array) = std::move(key_array);
  } else {
    DestroyActive();
    tag_ = Tag::KEY_ARRAY;
    data_.key_array = new std::vector<content::IndexedDBKey>(
        std::move(key_array));
  }
}
void KeyData::set_binary(
    const std::vector<uint8_t>& binary) {
  if (tag_ == Tag::BINARY) {
    *(data_.binary) = std::move(binary);
  } else {
    DestroyActive();
    tag_ = Tag::BINARY;
    data_.binary = new std::vector<uint8_t>(
        std::move(binary));
  }
}
void KeyData::set_string(
    const base::string16& string) {
  if (tag_ == Tag::STRING) {
    *(data_.string) = std::move(string);
  } else {
    DestroyActive();
    tag_ = Tag::STRING;
    data_.string = new base::string16(
        std::move(string));
  }
}
void KeyData::set_date(
    double date) {
  if (tag_ != Tag::DATE) {
    DestroyActive();
    tag_ = Tag::DATE;
  }
  data_.date = date;
}
void KeyData::set_number(
    double number) {
  if (tag_ != Tag::NUMBER) {
    DestroyActive();
    tag_ = Tag::NUMBER;
  }
  data_.number = number;
}
void KeyData::set_other(
    DatalessKeyType other) {
  if (tag_ != Tag::OTHER) {
    DestroyActive();
    tag_ = Tag::OTHER;
  }
  data_.other = other;
}

void KeyData::DestroyActive() {
  switch (tag_) {

    case Tag::KEY_ARRAY:

      delete data_.key_array;
      break;
    case Tag::BINARY:

      delete data_.binary;
      break;
    case Tag::STRING:

      delete data_.string;
      break;
    case Tag::DATE:

      break;
    case Tag::NUMBER:

      break;
    case Tag::OTHER:

      break;
  }
}

bool KeyData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
KeyPathData::KeyPathData() : tag_(Tag::STRING) {
  data_.string = new base::string16;
}

KeyPathData::~KeyPathData() {
  DestroyActive();
}


void KeyPathData::set_string(
    const base::string16& string) {
  if (tag_ == Tag::STRING) {
    *(data_.string) = std::move(string);
  } else {
    DestroyActive();
    tag_ = Tag::STRING;
    data_.string = new base::string16(
        std::move(string));
  }
}
void KeyPathData::set_string_array(
    const std::vector<base::string16>& string_array) {
  if (tag_ == Tag::STRING_ARRAY) {
    *(data_.string_array) = std::move(string_array);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_ARRAY;
    data_.string_array = new std::vector<base::string16>(
        std::move(string_array));
  }
}

void KeyPathData::DestroyActive() {
  switch (tag_) {

    case Tag::STRING:

      delete data_.string;
      break;
    case Tag::STRING_ARRAY:

      delete data_.string_array;
      break;
  }
}

bool KeyPathData::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char Callbacks::Name_[] = "indexed_db.mojom.Callbacks";

CallbacksProxy::CallbacksProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CallbacksProxy::Error(
    int32_t in_code, const base::string16& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::Error");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_Error_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_Error_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->code = in_code;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in Callbacks.Error request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessStringList(
    const std::vector<base::string16>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessStringList");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessStringList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessStringList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in Callbacks.SuccessStringList request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::Blocked(
    int64_t in_existing_version) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::Blocked");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_Blocked_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_Blocked_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->existing_version = in_existing_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::UpgradeNeeded(
    DatabaseAssociatedPtrInfo in_database, int64_t in_old_version, blink::WebIDBDataLoss in_data_loss, const std::string& in_data_loss_message, const content::IndexedDBDatabaseMetadata& in_db_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::UpgradeNeeded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_UpgradeNeeded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_UpgradeNeeded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::DatabaseAssociatedPtrInfoDataView>(
      in_database, &params->database, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database in Callbacks.UpgradeNeeded request");
  params->old_version = in_old_version;
  mojo::internal::Serialize<::indexed_db::mojom::DataLoss>(
      in_data_loss, &params->data_loss);
  typename decltype(params->data_loss_message)::BaseType::BufferWriter
      data_loss_message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_data_loss_message, buffer, &data_loss_message_writer, &serialization_context);
  params->data_loss_message.Set(
      data_loss_message_writer.is_null() ? nullptr : data_loss_message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data_loss_message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data_loss_message in Callbacks.UpgradeNeeded request");
  typename decltype(params->db_metadata)::BaseType::BufferWriter
      db_metadata_writer;
  mojo::internal::Serialize<::indexed_db::mojom::DatabaseMetadataDataView>(
      in_db_metadata, buffer, &db_metadata_writer, &serialization_context);
  params->db_metadata.Set(
      db_metadata_writer.is_null() ? nullptr : db_metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->db_metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null db_metadata in Callbacks.UpgradeNeeded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessDatabase(
    DatabaseAssociatedPtrInfo in_database, const content::IndexedDBDatabaseMetadata& in_metadata) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessDatabase");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::DatabaseAssociatedPtrInfoDataView>(
      in_database, &params->database, &serialization_context);
  typename decltype(params->metadata)::BaseType::BufferWriter
      metadata_writer;
  mojo::internal::Serialize<::indexed_db::mojom::DatabaseMetadataDataView>(
      in_metadata, buffer, &metadata_writer, &serialization_context);
  params->metadata.Set(
      metadata_writer.is_null() ? nullptr : metadata_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->metadata.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null metadata in Callbacks.SuccessDatabase request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessCursor(
    CursorAssociatedPtrInfo in_cursor, const content::IndexedDBKey& in_key, const content::IndexedDBKey& in_primary_key, ValuePtr in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::CursorAssociatedPtrInfoDataView>(
      in_cursor, &params->cursor, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cursor),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid cursor in Callbacks.SuccessCursor request");
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in Callbacks.SuccessCursor request");
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in Callbacks.SuccessCursor request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::indexed_db::mojom::ValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessValue(
    ReturnValuePtr in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessValue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::indexed_db::mojom::ReturnValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessCursorContinue(
    const content::IndexedDBKey& in_key, const content::IndexedDBKey& in_primary_key, ValuePtr in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessCursorContinue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessCursorContinue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessCursorContinue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in Callbacks.SuccessCursorContinue request");
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in Callbacks.SuccessCursorContinue request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::indexed_db::mojom::ValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessCursorPrefetch(
    const std::vector<content::IndexedDBKey>& in_keys, const std::vector<content::IndexedDBKey>& in_primary_keys, std::vector<ValuePtr> in_values) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessCursorPrefetch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessCursorPrefetch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessCursorPrefetch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->keys)::BaseType::BufferWriter
      keys_writer;
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
      in_keys, buffer, &keys_writer, &keys_validate_params,
      &serialization_context);
  params->keys.Set(
      keys_writer.is_null() ? nullptr : keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keys in Callbacks.SuccessCursorPrefetch request");
  typename decltype(params->primary_keys)::BaseType::BufferWriter
      primary_keys_writer;
  const mojo::internal::ContainerValidateParams primary_keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::KeyDataView>>(
      in_primary_keys, buffer, &primary_keys_writer, &primary_keys_validate_params,
      &serialization_context);
  params->primary_keys.Set(
      primary_keys_writer.is_null() ? nullptr : primary_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_keys in Callbacks.SuccessCursorPrefetch request");
  typename decltype(params->values)::BaseType::BufferWriter
      values_writer;
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::ValueDataView>>(
      in_values, buffer, &values_writer, &values_validate_params,
      &serialization_context);
  params->values.Set(
      values_writer.is_null() ? nullptr : values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in Callbacks.SuccessCursorPrefetch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessArray(
    std::vector<ReturnValuePtr> in_values) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessArray");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessArray_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessArray_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->values)::BaseType::BufferWriter
      values_writer;
  const mojo::internal::ContainerValidateParams values_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::ReturnValueDataView>>(
      in_values, buffer, &values_writer, &values_validate_params,
      &serialization_context);
  params->values.Set(
      values_writer.is_null() ? nullptr : values_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->values.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null values in Callbacks.SuccessArray request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessKey(
    const content::IndexedDBKey& in_key) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessKey");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessKey_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessKey_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in Callbacks.SuccessKey request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CallbacksProxy::SuccessInteger(
    int64_t in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::SuccessInteger");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_SuccessInteger_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_SuccessInteger_Params_Data::BufferWriter
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

void CallbacksProxy::Success(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Callbacks::Success");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCallbacks_Success_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Callbacks_Success_Params_Data::BufferWriter
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
bool CallbacksStubDispatch::Accept(
    Callbacks* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCallbacks_Error_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::Error",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_Error_Params_Data* params =
          reinterpret_cast<internal::Callbacks_Error_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_code{};
      base::string16 p_message{};
      Callbacks_Error_ParamsDataView input_data_view(params, &serialization_context);
      
      p_code = input_data_view.code();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::Error deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Error(
std::move(p_code), 
std::move(p_message));
      return true;
    }
    case internal::kCallbacks_SuccessStringList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessStringList",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessStringList_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessStringList_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<base::string16> p_value{};
      Callbacks_SuccessStringList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessStringList deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessStringList(
std::move(p_value));
      return true;
    }
    case internal::kCallbacks_Blocked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::Blocked",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_Blocked_Params_Data* params =
          reinterpret_cast<internal::Callbacks_Blocked_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_existing_version{};
      Callbacks_Blocked_ParamsDataView input_data_view(params, &serialization_context);
      
      p_existing_version = input_data_view.existing_version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::Blocked deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Blocked(
std::move(p_existing_version));
      return true;
    }
    case internal::kCallbacks_UpgradeNeeded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::UpgradeNeeded",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_UpgradeNeeded_Params_Data* params =
          reinterpret_cast<internal::Callbacks_UpgradeNeeded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DatabaseAssociatedPtrInfo p_database{};
      int64_t p_old_version{};
      blink::WebIDBDataLoss p_data_loss{};
      std::string p_data_loss_message{};
      content::IndexedDBDatabaseMetadata p_db_metadata{};
      Callbacks_UpgradeNeeded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      p_old_version = input_data_view.old_version();
      if (!input_data_view.ReadDataLoss(&p_data_loss))
        success = false;
      if (!input_data_view.ReadDataLossMessage(&p_data_loss_message))
        success = false;
      if (!input_data_view.ReadDbMetadata(&p_db_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::UpgradeNeeded deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->UpgradeNeeded(
std::move(p_database), 
std::move(p_old_version), 
std::move(p_data_loss), 
std::move(p_data_loss_message), 
std::move(p_db_metadata));
      return true;
    }
    case internal::kCallbacks_SuccessDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessDatabase",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessDatabase_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessDatabase_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DatabaseAssociatedPtrInfo p_database{};
      content::IndexedDBDatabaseMetadata p_metadata{};
      Callbacks_SuccessDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      p_database =
          input_data_view.TakeDatabase<decltype(p_database)>();
      if (!input_data_view.ReadMetadata(&p_metadata))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessDatabase deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessDatabase(
std::move(p_database), 
std::move(p_metadata));
      return true;
    }
    case internal::kCallbacks_SuccessCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessCursor_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CursorAssociatedPtrInfo p_cursor{};
      content::IndexedDBKey p_key{};
      content::IndexedDBKey p_primary_key{};
      ValuePtr p_value{};
      Callbacks_SuccessCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cursor =
          input_data_view.TakeCursor<decltype(p_cursor)>();
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessCursor(
std::move(p_cursor), 
std::move(p_key), 
std::move(p_primary_key), 
std::move(p_value));
      return true;
    }
    case internal::kCallbacks_SuccessValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessValue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessValue_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessValue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ReturnValuePtr p_value{};
      Callbacks_SuccessValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessValue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessValue(
std::move(p_value));
      return true;
    }
    case internal::kCallbacks_SuccessCursorContinue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessCursorContinue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessCursorContinue_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessCursorContinue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::IndexedDBKey p_key{};
      content::IndexedDBKey p_primary_key{};
      ValuePtr p_value{};
      Callbacks_SuccessCursorContinue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessCursorContinue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessCursorContinue(
std::move(p_key), 
std::move(p_primary_key), 
std::move(p_value));
      return true;
    }
    case internal::kCallbacks_SuccessCursorPrefetch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessCursorPrefetch",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessCursorPrefetch_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessCursorPrefetch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<content::IndexedDBKey> p_keys{};
      std::vector<content::IndexedDBKey> p_primary_keys{};
      std::vector<ValuePtr> p_values{};
      Callbacks_SuccessCursorPrefetch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeys(&p_keys))
        success = false;
      if (!input_data_view.ReadPrimaryKeys(&p_primary_keys))
        success = false;
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessCursorPrefetch deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessCursorPrefetch(
std::move(p_keys), 
std::move(p_primary_keys), 
std::move(p_values));
      return true;
    }
    case internal::kCallbacks_SuccessArray_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessArray",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessArray_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessArray_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<ReturnValuePtr> p_values{};
      Callbacks_SuccessArray_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadValues(&p_values))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessArray deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessArray(
std::move(p_values));
      return true;
    }
    case internal::kCallbacks_SuccessKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessKey",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessKey_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessKey_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::IndexedDBKey p_key{};
      Callbacks_SuccessKey_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessKey deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessKey(
std::move(p_key));
      return true;
    }
    case internal::kCallbacks_SuccessInteger_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessInteger",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_SuccessInteger_Params_Data* params =
          reinterpret_cast<internal::Callbacks_SuccessInteger_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_value{};
      Callbacks_SuccessInteger_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::SuccessInteger deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SuccessInteger(
std::move(p_value));
      return true;
    }
    case internal::kCallbacks_Success_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::Success",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Callbacks_Success_Params_Data* params =
          reinterpret_cast<internal::Callbacks_Success_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Callbacks_Success_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Callbacks::Success deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Success();
      return true;
    }
  }
  return false;
}

// static
bool CallbacksStubDispatch::AcceptWithResponder(
    Callbacks* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCallbacks_Error_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::Error",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessStringList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessStringList",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_Blocked_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::Blocked",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_UpgradeNeeded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::UpgradeNeeded",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessDatabase",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessValue",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessCursorContinue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessCursorContinue",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessCursorPrefetch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessCursorPrefetch",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessArray_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessArray",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessKey_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessKey",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_SuccessInteger_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::SuccessInteger",
               "message", message->name());
#endif
      break;
    }
    case internal::kCallbacks_Success_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Callbacks::Success",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CallbacksRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Callbacks RequestValidator");

  switch (message->header()->name) {
    case internal::kCallbacks_Error_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_Error_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessStringList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessStringList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_Blocked_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_Blocked_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_UpgradeNeeded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_UpgradeNeeded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessCursorContinue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessCursorContinue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessCursorPrefetch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessCursorPrefetch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessArray_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessArray_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessKey_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessKey_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_SuccessInteger_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_SuccessInteger_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCallbacks_Success_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Callbacks_Success_Params_Data>(
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

void CallbacksInterceptorForTesting::Error(int32_t code, const base::string16& message) {
  GetForwardingInterface()->Error(std::move(code), std::move(message));
}
void CallbacksInterceptorForTesting::SuccessStringList(const std::vector<base::string16>& value) {
  GetForwardingInterface()->SuccessStringList(std::move(value));
}
void CallbacksInterceptorForTesting::Blocked(int64_t existing_version) {
  GetForwardingInterface()->Blocked(std::move(existing_version));
}
void CallbacksInterceptorForTesting::UpgradeNeeded(DatabaseAssociatedPtrInfo database, int64_t old_version, blink::WebIDBDataLoss data_loss, const std::string& data_loss_message, const content::IndexedDBDatabaseMetadata& db_metadata) {
  GetForwardingInterface()->UpgradeNeeded(std::move(database), std::move(old_version), std::move(data_loss), std::move(data_loss_message), std::move(db_metadata));
}
void CallbacksInterceptorForTesting::SuccessDatabase(DatabaseAssociatedPtrInfo database, const content::IndexedDBDatabaseMetadata& metadata) {
  GetForwardingInterface()->SuccessDatabase(std::move(database), std::move(metadata));
}
void CallbacksInterceptorForTesting::SuccessCursor(CursorAssociatedPtrInfo cursor, const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) {
  GetForwardingInterface()->SuccessCursor(std::move(cursor), std::move(key), std::move(primary_key), std::move(value));
}
void CallbacksInterceptorForTesting::SuccessValue(ReturnValuePtr value) {
  GetForwardingInterface()->SuccessValue(std::move(value));
}
void CallbacksInterceptorForTesting::SuccessCursorContinue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, ValuePtr value) {
  GetForwardingInterface()->SuccessCursorContinue(std::move(key), std::move(primary_key), std::move(value));
}
void CallbacksInterceptorForTesting::SuccessCursorPrefetch(const std::vector<content::IndexedDBKey>& keys, const std::vector<content::IndexedDBKey>& primary_keys, std::vector<ValuePtr> values) {
  GetForwardingInterface()->SuccessCursorPrefetch(std::move(keys), std::move(primary_keys), std::move(values));
}
void CallbacksInterceptorForTesting::SuccessArray(std::vector<ReturnValuePtr> values) {
  GetForwardingInterface()->SuccessArray(std::move(values));
}
void CallbacksInterceptorForTesting::SuccessKey(const content::IndexedDBKey& key) {
  GetForwardingInterface()->SuccessKey(std::move(key));
}
void CallbacksInterceptorForTesting::SuccessInteger(int64_t value) {
  GetForwardingInterface()->SuccessInteger(std::move(value));
}
void CallbacksInterceptorForTesting::Success() {
  GetForwardingInterface()->Success();
}
CallbacksAsyncWaiter::CallbacksAsyncWaiter(
    Callbacks* proxy) : proxy_(proxy) {}

CallbacksAsyncWaiter::~CallbacksAsyncWaiter() = default;


const char DatabaseCallbacks::Name_[] = "indexed_db.mojom.DatabaseCallbacks";

DatabaseCallbacksProxy::DatabaseCallbacksProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DatabaseCallbacksProxy::ForcedClose(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::DatabaseCallbacks::ForcedClose");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabaseCallbacks_ForcedClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::DatabaseCallbacks_ForcedClose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseCallbacksProxy::VersionChange(
    int64_t in_old_version, int64_t in_new_version) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::DatabaseCallbacks::VersionChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabaseCallbacks_VersionChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::DatabaseCallbacks_VersionChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->old_version = in_old_version;
  params->new_version = in_new_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseCallbacksProxy::Abort(
    int64_t in_transaction_id, int32_t in_code, const base::string16& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::DatabaseCallbacks::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabaseCallbacks_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::DatabaseCallbacks_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->code = in_code;
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DatabaseCallbacks.Abort request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseCallbacksProxy::Complete(
    int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::DatabaseCallbacks::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabaseCallbacks_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::DatabaseCallbacks_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseCallbacksProxy::Changes(
    ObserverChangesPtr in_changes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::DatabaseCallbacks::Changes");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabaseCallbacks_Changes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::DatabaseCallbacks_Changes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->changes)::BaseType::BufferWriter
      changes_writer;
  mojo::internal::Serialize<::indexed_db::mojom::ObserverChangesDataView>(
      in_changes, buffer, &changes_writer, &serialization_context);
  params->changes.Set(
      changes_writer.is_null() ? nullptr : changes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->changes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null changes in DatabaseCallbacks.Changes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DatabaseCallbacksStubDispatch::Accept(
    DatabaseCallbacks* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDatabaseCallbacks_ForcedClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::ForcedClose",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DatabaseCallbacks_ForcedClose_Params_Data* params =
          reinterpret_cast<internal::DatabaseCallbacks_ForcedClose_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DatabaseCallbacks_ForcedClose_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DatabaseCallbacks::ForcedClose deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ForcedClose();
      return true;
    }
    case internal::kDatabaseCallbacks_VersionChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::VersionChange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DatabaseCallbacks_VersionChange_Params_Data* params =
          reinterpret_cast<internal::DatabaseCallbacks_VersionChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_old_version{};
      int64_t p_new_version{};
      DatabaseCallbacks_VersionChange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_old_version = input_data_view.old_version();
      p_new_version = input_data_view.new_version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DatabaseCallbacks::VersionChange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->VersionChange(
std::move(p_old_version), 
std::move(p_new_version));
      return true;
    }
    case internal::kDatabaseCallbacks_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::Abort",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DatabaseCallbacks_Abort_Params_Data* params =
          reinterpret_cast<internal::DatabaseCallbacks_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int32_t p_code{};
      base::string16 p_message{};
      DatabaseCallbacks_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_code = input_data_view.code();
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DatabaseCallbacks::Abort deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Abort(
std::move(p_transaction_id), 
std::move(p_code), 
std::move(p_message));
      return true;
    }
    case internal::kDatabaseCallbacks_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::Complete",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DatabaseCallbacks_Complete_Params_Data* params =
          reinterpret_cast<internal::DatabaseCallbacks_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      DatabaseCallbacks_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DatabaseCallbacks::Complete deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Complete(
std::move(p_transaction_id));
      return true;
    }
    case internal::kDatabaseCallbacks_Changes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::Changes",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DatabaseCallbacks_Changes_Params_Data* params =
          reinterpret_cast<internal::DatabaseCallbacks_Changes_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ObserverChangesPtr p_changes{};
      DatabaseCallbacks_Changes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadChanges(&p_changes))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DatabaseCallbacks::Changes deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Changes(
std::move(p_changes));
      return true;
    }
  }
  return false;
}

// static
bool DatabaseCallbacksStubDispatch::AcceptWithResponder(
    DatabaseCallbacks* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDatabaseCallbacks_ForcedClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::ForcedClose",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabaseCallbacks_VersionChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::VersionChange",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabaseCallbacks_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::Abort",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabaseCallbacks_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::Complete",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabaseCallbacks_Changes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::DatabaseCallbacks::Changes",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DatabaseCallbacksRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DatabaseCallbacks RequestValidator");

  switch (message->header()->name) {
    case internal::kDatabaseCallbacks_ForcedClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DatabaseCallbacks_ForcedClose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabaseCallbacks_VersionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DatabaseCallbacks_VersionChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabaseCallbacks_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DatabaseCallbacks_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabaseCallbacks_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DatabaseCallbacks_Complete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabaseCallbacks_Changes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DatabaseCallbacks_Changes_Params_Data>(
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

void DatabaseCallbacksInterceptorForTesting::ForcedClose() {
  GetForwardingInterface()->ForcedClose();
}
void DatabaseCallbacksInterceptorForTesting::VersionChange(int64_t old_version, int64_t new_version) {
  GetForwardingInterface()->VersionChange(std::move(old_version), std::move(new_version));
}
void DatabaseCallbacksInterceptorForTesting::Abort(int64_t transaction_id, int32_t code, const base::string16& message) {
  GetForwardingInterface()->Abort(std::move(transaction_id), std::move(code), std::move(message));
}
void DatabaseCallbacksInterceptorForTesting::Complete(int64_t transaction_id) {
  GetForwardingInterface()->Complete(std::move(transaction_id));
}
void DatabaseCallbacksInterceptorForTesting::Changes(ObserverChangesPtr changes) {
  GetForwardingInterface()->Changes(std::move(changes));
}
DatabaseCallbacksAsyncWaiter::DatabaseCallbacksAsyncWaiter(
    DatabaseCallbacks* proxy) : proxy_(proxy) {}

DatabaseCallbacksAsyncWaiter::~DatabaseCallbacksAsyncWaiter() = default;


const char Cursor::Name_[] = "indexed_db.mojom.Cursor";

CursorProxy::CursorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CursorProxy::Advance(
    uint32_t in_count, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Cursor::Advance");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCursor_Advance_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Cursor_Advance_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Cursor.Advance request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CursorProxy::Continue(
    const content::IndexedDBKey& in_key, const content::IndexedDBKey& in_primary_key, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Cursor::Continue");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCursor_Continue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Cursor_Continue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in Cursor.Continue request");
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in Cursor.Continue request");
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Cursor.Continue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CursorProxy::Prefetch(
    int32_t in_count, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Cursor::Prefetch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCursor_Prefetch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Cursor_Prefetch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->count = in_count;
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Cursor.Prefetch request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CursorProxy::PrefetchReset(
    int32_t in_used_prefetches, int32_t in_unused_prefetches) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Cursor::PrefetchReset");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCursor_PrefetchReset_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Cursor_PrefetchReset_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->used_prefetches = in_used_prefetches;
  params->unused_prefetches = in_unused_prefetches;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CursorStubDispatch::Accept(
    Cursor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCursor_Advance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::Advance",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Cursor_Advance_Params_Data* params =
          reinterpret_cast<internal::Cursor_Advance_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_count{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Cursor_Advance_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Cursor::Advance deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Advance(
std::move(p_count), 
std::move(p_callbacks));
      return true;
    }
    case internal::kCursor_Continue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::Continue",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Cursor_Continue_Params_Data* params =
          reinterpret_cast<internal::Cursor_Continue_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      content::IndexedDBKey p_key{};
      content::IndexedDBKey p_primary_key{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Cursor_Continue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Cursor::Continue deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Continue(
std::move(p_key), 
std::move(p_primary_key), 
std::move(p_callbacks));
      return true;
    }
    case internal::kCursor_Prefetch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::Prefetch",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Cursor_Prefetch_Params_Data* params =
          reinterpret_cast<internal::Cursor_Prefetch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_count{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Cursor_Prefetch_ParamsDataView input_data_view(params, &serialization_context);
      
      p_count = input_data_view.count();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Cursor::Prefetch deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Prefetch(
std::move(p_count), 
std::move(p_callbacks));
      return true;
    }
    case internal::kCursor_PrefetchReset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::PrefetchReset",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Cursor_PrefetchReset_Params_Data* params =
          reinterpret_cast<internal::Cursor_PrefetchReset_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_used_prefetches{};
      int32_t p_unused_prefetches{};
      Cursor_PrefetchReset_ParamsDataView input_data_view(params, &serialization_context);
      
      p_used_prefetches = input_data_view.used_prefetches();
      p_unused_prefetches = input_data_view.unused_prefetches();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Cursor::PrefetchReset deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->PrefetchReset(
std::move(p_used_prefetches), 
std::move(p_unused_prefetches));
      return true;
    }
  }
  return false;
}

// static
bool CursorStubDispatch::AcceptWithResponder(
    Cursor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCursor_Advance_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::Advance",
               "message", message->name());
#endif
      break;
    }
    case internal::kCursor_Continue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::Continue",
               "message", message->name());
#endif
      break;
    }
    case internal::kCursor_Prefetch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::Prefetch",
               "message", message->name());
#endif
      break;
    }
    case internal::kCursor_PrefetchReset_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Cursor::PrefetchReset",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool CursorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Cursor RequestValidator");

  switch (message->header()->name) {
    case internal::kCursor_Advance_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Cursor_Advance_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCursor_Continue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Cursor_Continue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCursor_Prefetch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Cursor_Prefetch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCursor_PrefetchReset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Cursor_PrefetchReset_Params_Data>(
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

void CursorInterceptorForTesting::Advance(uint32_t count, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Advance(std::move(count), std::move(callbacks));
}
void CursorInterceptorForTesting::Continue(const content::IndexedDBKey& key, const content::IndexedDBKey& primary_key, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Continue(std::move(key), std::move(primary_key), std::move(callbacks));
}
void CursorInterceptorForTesting::Prefetch(int32_t count, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Prefetch(std::move(count), std::move(callbacks));
}
void CursorInterceptorForTesting::PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) {
  GetForwardingInterface()->PrefetchReset(std::move(used_prefetches), std::move(unused_prefetches));
}
CursorAsyncWaiter::CursorAsyncWaiter(
    Cursor* proxy) : proxy_(proxy) {}

CursorAsyncWaiter::~CursorAsyncWaiter() = default;


const char Database::Name_[] = "indexed_db.mojom.Database";

DatabaseProxy::DatabaseProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DatabaseProxy::CreateObjectStore(
    int64_t in_transaction_id, int64_t in_object_store_id, const base::string16& in_name, const content::IndexedDBKeyPath& in_key_path, bool in_auto_increment) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::CreateObjectStore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_CreateObjectStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_CreateObjectStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in Database.CreateObjectStore request");
  typename decltype(params->key_path)::BaseType::BufferWriter
      key_path_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyPathDataView>(
      in_key_path, buffer, &key_path_writer, &serialization_context);
  params->key_path.Set(
      key_path_writer.is_null() ? nullptr : key_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_path in Database.CreateObjectStore request");
  params->auto_increment = in_auto_increment;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::DeleteObjectStore(
    int64_t in_transaction_id, int64_t in_object_store_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::DeleteObjectStore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_DeleteObjectStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_DeleteObjectStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::RenameObjectStore(
    int64_t in_transaction_id, int64_t in_object_store_id, const base::string16& in_new_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::RenameObjectStore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_RenameObjectStore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_RenameObjectStore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->new_name)::BaseType::BufferWriter
      new_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_new_name, buffer, &new_name_writer, &serialization_context);
  params->new_name.Set(
      new_name_writer.is_null() ? nullptr : new_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_name in Database.RenameObjectStore request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::CreateTransaction(
    int64_t in_transaction_id, const std::vector<int64_t>& in_object_store_ids, blink::WebIDBTransactionMode in_mode) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::CreateTransaction");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_CreateTransaction_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_CreateTransaction_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  typename decltype(params->object_store_ids)::BaseType::BufferWriter
      object_store_ids_writer;
  const mojo::internal::ContainerValidateParams object_store_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
      in_object_store_ids, buffer, &object_store_ids_writer, &object_store_ids_validate_params,
      &serialization_context);
  params->object_store_ids.Set(
      object_store_ids_writer.is_null() ? nullptr : object_store_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->object_store_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null object_store_ids in Database.CreateTransaction request");
  mojo::internal::Serialize<::indexed_db::mojom::TransactionMode>(
      in_mode, &params->mode);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Close(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Close");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Close_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::VersionChangeIgnored(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::VersionChangeIgnored");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_VersionChangeIgnored_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_VersionChangeIgnored_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::AddObserver(
    int64_t in_transaction_id, int32_t in_observer_id, bool in_include_transaction, bool in_no_records, bool in_values, uint16_t in_operation_types) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->observer_id = in_observer_id;
  params->include_transaction = in_include_transaction;
  params->no_records = in_no_records;
  params->values = in_values;
  params->operation_types = in_operation_types;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::RemoveObservers(
    const std::vector<int32_t>& in_observers) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::RemoveObservers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_RemoveObservers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_RemoveObservers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->observers)::BaseType::BufferWriter
      observers_writer;
  const mojo::internal::ContainerValidateParams observers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
      in_observers, buffer, &observers_writer, &observers_validate_params,
      &serialization_context);
  params->observers.Set(
      observers_writer.is_null() ? nullptr : observers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->observers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null observers in Database.RemoveObservers request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Get(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const content::IndexedDBKeyRange& in_key_range, bool in_key_only, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Get");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Get_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in Database.Get request");
  params->key_only = in_key_only;
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.Get request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::GetAll(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const content::IndexedDBKeyRange& in_key_range, bool in_key_only, int64_t in_max_count, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::GetAll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_GetAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in Database.GetAll request");
  params->key_only = in_key_only;
  params->max_count = in_max_count;
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.GetAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Put(
    int64_t in_transaction_id, int64_t in_object_store_id, ValuePtr in_value, const content::IndexedDBKey& in_key, blink::WebIDBPutMode in_mode, const std::vector<content::IndexedDBIndexKeys>& in_index_keys, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Put");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Put_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<::indexed_db::mojom::ValueDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in Database.Put request");
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_key, buffer, &key_writer, &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in Database.Put request");
  mojo::internal::Serialize<::indexed_db::mojom::PutMode>(
      in_mode, &params->mode);
  typename decltype(params->index_keys)::BaseType::BufferWriter
      index_keys_writer;
  const mojo::internal::ContainerValidateParams index_keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::IndexKeysDataView>>(
      in_index_keys, buffer, &index_keys_writer, &index_keys_validate_params,
      &serialization_context);
  params->index_keys.Set(
      index_keys_writer.is_null() ? nullptr : index_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->index_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null index_keys in Database.Put request");
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.Put request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::SetIndexKeys(
    int64_t in_transaction_id, int64_t in_object_store_id, const content::IndexedDBKey& in_primary_key, const std::vector<content::IndexedDBIndexKeys>& in_index_keys) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::SetIndexKeys");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_SetIndexKeys_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_SetIndexKeys_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->primary_key)::BaseType::BufferWriter
      primary_key_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyDataView>(
      in_primary_key, buffer, &primary_key_writer, &serialization_context);
  params->primary_key.Set(
      primary_key_writer.is_null() ? nullptr : primary_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_key in Database.SetIndexKeys request");
  typename decltype(params->index_keys)::BaseType::BufferWriter
      index_keys_writer;
  const mojo::internal::ContainerValidateParams index_keys_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::indexed_db::mojom::IndexKeysDataView>>(
      in_index_keys, buffer, &index_keys_writer, &index_keys_validate_params,
      &serialization_context);
  params->index_keys.Set(
      index_keys_writer.is_null() ? nullptr : index_keys_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->index_keys.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null index_keys in Database.SetIndexKeys request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::SetIndexesReady(
    int64_t in_transaction_id, int64_t in_object_store_id, const std::vector<int64_t>& in_index_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::SetIndexesReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_SetIndexesReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_SetIndexesReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->index_ids)::BaseType::BufferWriter
      index_ids_writer;
  const mojo::internal::ContainerValidateParams index_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
      in_index_ids, buffer, &index_ids_writer, &index_ids_validate_params,
      &serialization_context);
  params->index_ids.Set(
      index_ids_writer.is_null() ? nullptr : index_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->index_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null index_ids in Database.SetIndexesReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::OpenCursor(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const content::IndexedDBKeyRange& in_key_range, blink::WebIDBCursorDirection in_direction, bool in_key_only, blink::WebIDBTaskType in_task_type, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::OpenCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_OpenCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_OpenCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in Database.OpenCursor request");
  mojo::internal::Serialize<::indexed_db::mojom::CursorDirection>(
      in_direction, &params->direction);
  params->key_only = in_key_only;
  mojo::internal::Serialize<::indexed_db::mojom::TaskType>(
      in_task_type, &params->task_type);
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.OpenCursor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Count(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const content::IndexedDBKeyRange& in_key_range, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Count");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Count_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Count_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in Database.Count request");
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.Count request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::DeleteRange(
    int64_t in_transaction_id, int64_t in_object_store_id, const content::IndexedDBKeyRange& in_key_range, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::DeleteRange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_DeleteRange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_DeleteRange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  typename decltype(params->key_range)::BaseType::BufferWriter
      key_range_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyRangeDataView>(
      in_key_range, buffer, &key_range_writer, &serialization_context);
  params->key_range.Set(
      key_range_writer.is_null() ? nullptr : key_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_range in Database.DeleteRange request");
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.DeleteRange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Clear(
    int64_t in_transaction_id, int64_t in_object_store_id, CallbacksAssociatedPtrInfo in_callbacks) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Clear");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Clear_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Clear_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Database.Clear request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::CreateIndex(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const base::string16& in_name, const content::IndexedDBKeyPath& in_key_path, bool in_unique, bool in_multi_entry) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::CreateIndex");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_CreateIndex_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_CreateIndex_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in Database.CreateIndex request");
  typename decltype(params->key_path)::BaseType::BufferWriter
      key_path_writer;
  mojo::internal::Serialize<::indexed_db::mojom::KeyPathDataView>(
      in_key_path, buffer, &key_path_writer, &serialization_context);
  params->key_path.Set(
      key_path_writer.is_null() ? nullptr : key_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_path in Database.CreateIndex request");
  params->unique = in_unique;
  params->multi_entry = in_multi_entry;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::DeleteIndex(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::DeleteIndex");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_DeleteIndex_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_DeleteIndex_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::RenameIndex(
    int64_t in_transaction_id, int64_t in_object_store_id, int64_t in_index_id, const base::string16& in_new_name) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::RenameIndex");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_RenameIndex_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_RenameIndex_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  params->object_store_id = in_object_store_id;
  params->index_id = in_index_id;
  typename decltype(params->new_name)::BaseType::BufferWriter
      new_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_new_name, buffer, &new_name_writer, &serialization_context);
  params->new_name.Set(
      new_name_writer.is_null() ? nullptr : new_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_name in Database.RenameIndex request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Abort(
    int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Abort");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Abort_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Abort_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DatabaseProxy::Commit(
    int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Database::Commit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDatabase_Commit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Database_Commit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DatabaseStubDispatch::Accept(
    Database* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDatabase_CreateObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::CreateObjectStore",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_CreateObjectStore_Params_Data* params =
          reinterpret_cast<internal::Database_CreateObjectStore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      base::string16 p_name{};
      content::IndexedDBKeyPath p_key_path{};
      bool p_auto_increment{};
      Database_CreateObjectStore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadKeyPath(&p_key_path))
        success = false;
      p_auto_increment = input_data_view.auto_increment();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::CreateObjectStore deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateObjectStore(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_name), 
std::move(p_key_path), 
std::move(p_auto_increment));
      return true;
    }
    case internal::kDatabase_DeleteObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::DeleteObjectStore",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_DeleteObjectStore_Params_Data* params =
          reinterpret_cast<internal::Database_DeleteObjectStore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      Database_DeleteObjectStore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::DeleteObjectStore deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteObjectStore(
std::move(p_transaction_id), 
std::move(p_object_store_id));
      return true;
    }
    case internal::kDatabase_RenameObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::RenameObjectStore",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_RenameObjectStore_Params_Data* params =
          reinterpret_cast<internal::Database_RenameObjectStore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      base::string16 p_new_name{};
      Database_RenameObjectStore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadNewName(&p_new_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::RenameObjectStore deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RenameObjectStore(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_new_name));
      return true;
    }
    case internal::kDatabase_CreateTransaction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::CreateTransaction",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_CreateTransaction_Params_Data* params =
          reinterpret_cast<internal::Database_CreateTransaction_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      std::vector<int64_t> p_object_store_ids{};
      blink::WebIDBTransactionMode p_mode{};
      Database_CreateTransaction_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      if (!input_data_view.ReadObjectStoreIds(&p_object_store_ids))
        success = false;
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::CreateTransaction deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateTransaction(
std::move(p_transaction_id), 
std::move(p_object_store_ids), 
std::move(p_mode));
      return true;
    }
    case internal::kDatabase_Close_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Close",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Close_Params_Data* params =
          reinterpret_cast<internal::Database_Close_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Database_Close_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Close deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Close();
      return true;
    }
    case internal::kDatabase_VersionChangeIgnored_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::VersionChangeIgnored",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_VersionChangeIgnored_Params_Data* params =
          reinterpret_cast<internal::Database_VersionChangeIgnored_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Database_VersionChangeIgnored_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::VersionChangeIgnored deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->VersionChangeIgnored();
      return true;
    }
    case internal::kDatabase_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::AddObserver",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_AddObserver_Params_Data* params =
          reinterpret_cast<internal::Database_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int32_t p_observer_id{};
      bool p_include_transaction{};
      bool p_no_records{};
      bool p_values{};
      uint16_t p_operation_types{};
      Database_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_observer_id = input_data_view.observer_id();
      p_include_transaction = input_data_view.include_transaction();
      p_no_records = input_data_view.no_records();
      p_values = input_data_view.values();
      p_operation_types = input_data_view.operation_types();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::AddObserver deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AddObserver(
std::move(p_transaction_id), 
std::move(p_observer_id), 
std::move(p_include_transaction), 
std::move(p_no_records), 
std::move(p_values), 
std::move(p_operation_types));
      return true;
    }
    case internal::kDatabase_RemoveObservers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::RemoveObservers",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_RemoveObservers_Params_Data* params =
          reinterpret_cast<internal::Database_RemoveObservers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<int32_t> p_observers{};
      Database_RemoveObservers_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadObservers(&p_observers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::RemoveObservers deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RemoveObservers(
std::move(p_observers));
      return true;
    }
    case internal::kDatabase_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Get",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Get_Params_Data* params =
          reinterpret_cast<internal::Database_Get_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      content::IndexedDBKeyRange p_key_range{};
      bool p_key_only{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_Get_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_key_only = input_data_view.key_only();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Get deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Get(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_key_only), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_GetAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::GetAll",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_GetAll_Params_Data* params =
          reinterpret_cast<internal::Database_GetAll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      content::IndexedDBKeyRange p_key_range{};
      bool p_key_only{};
      int64_t p_max_count{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_GetAll_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_key_only = input_data_view.key_only();
      p_max_count = input_data_view.max_count();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::GetAll deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetAll(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_key_only), 
std::move(p_max_count), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Put",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Put_Params_Data* params =
          reinterpret_cast<internal::Database_Put_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      ValuePtr p_value{};
      content::IndexedDBKey p_key{};
      blink::WebIDBPutMode p_mode{};
      std::vector<content::IndexedDBIndexKeys> p_index_keys{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_Put_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!input_data_view.ReadIndexKeys(&p_index_keys))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Put deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Put(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_value), 
std::move(p_key), 
std::move(p_mode), 
std::move(p_index_keys), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_SetIndexKeys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::SetIndexKeys",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_SetIndexKeys_Params_Data* params =
          reinterpret_cast<internal::Database_SetIndexKeys_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      content::IndexedDBKey p_primary_key{};
      std::vector<content::IndexedDBIndexKeys> p_index_keys{};
      Database_SetIndexKeys_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadPrimaryKey(&p_primary_key))
        success = false;
      if (!input_data_view.ReadIndexKeys(&p_index_keys))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::SetIndexKeys deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetIndexKeys(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_primary_key), 
std::move(p_index_keys));
      return true;
    }
    case internal::kDatabase_SetIndexesReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::SetIndexesReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_SetIndexesReady_Params_Data* params =
          reinterpret_cast<internal::Database_SetIndexesReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      std::vector<int64_t> p_index_ids{};
      Database_SetIndexesReady_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadIndexIds(&p_index_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::SetIndexesReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetIndexesReady(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_ids));
      return true;
    }
    case internal::kDatabase_OpenCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::OpenCursor",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_OpenCursor_Params_Data* params =
          reinterpret_cast<internal::Database_OpenCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      content::IndexedDBKeyRange p_key_range{};
      blink::WebIDBCursorDirection p_direction{};
      bool p_key_only{};
      blink::WebIDBTaskType p_task_type{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_OpenCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      p_key_only = input_data_view.key_only();
      if (!input_data_view.ReadTaskType(&p_task_type))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::OpenCursor deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OpenCursor(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_direction), 
std::move(p_key_only), 
std::move(p_task_type), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_Count_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Count",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Count_Params_Data* params =
          reinterpret_cast<internal::Database_Count_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      content::IndexedDBKeyRange p_key_range{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_Count_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Count deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Count(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_key_range), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_DeleteRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::DeleteRange",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_DeleteRange_Params_Data* params =
          reinterpret_cast<internal::Database_DeleteRange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      content::IndexedDBKeyRange p_key_range{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_DeleteRange_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      if (!input_data_view.ReadKeyRange(&p_key_range))
        success = false;
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::DeleteRange deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteRange(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_key_range), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_Clear_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Clear",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Clear_Params_Data* params =
          reinterpret_cast<internal::Database_Clear_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      CallbacksAssociatedPtrInfo p_callbacks{};
      Database_Clear_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Clear deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Clear(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_callbacks));
      return true;
    }
    case internal::kDatabase_CreateIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::CreateIndex",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_CreateIndex_Params_Data* params =
          reinterpret_cast<internal::Database_CreateIndex_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      base::string16 p_name{};
      content::IndexedDBKeyPath p_key_path{};
      bool p_unique{};
      bool p_multi_entry{};
      Database_CreateIndex_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadKeyPath(&p_key_path))
        success = false;
      p_unique = input_data_view.unique();
      p_multi_entry = input_data_view.multi_entry();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::CreateIndex deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CreateIndex(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_name), 
std::move(p_key_path), 
std::move(p_unique), 
std::move(p_multi_entry));
      return true;
    }
    case internal::kDatabase_DeleteIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::DeleteIndex",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_DeleteIndex_Params_Data* params =
          reinterpret_cast<internal::Database_DeleteIndex_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      Database_DeleteIndex_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::DeleteIndex deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteIndex(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id));
      return true;
    }
    case internal::kDatabase_RenameIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::RenameIndex",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_RenameIndex_Params_Data* params =
          reinterpret_cast<internal::Database_RenameIndex_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      int64_t p_object_store_id{};
      int64_t p_index_id{};
      base::string16 p_new_name{};
      Database_RenameIndex_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      p_object_store_id = input_data_view.object_store_id();
      p_index_id = input_data_view.index_id();
      if (!input_data_view.ReadNewName(&p_new_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::RenameIndex deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->RenameIndex(
std::move(p_transaction_id), 
std::move(p_object_store_id), 
std::move(p_index_id), 
std::move(p_new_name));
      return true;
    }
    case internal::kDatabase_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Abort",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Abort_Params_Data* params =
          reinterpret_cast<internal::Database_Abort_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      Database_Abort_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Abort deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Abort(
std::move(p_transaction_id));
      return true;
    }
    case internal::kDatabase_Commit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Commit",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Database_Commit_Params_Data* params =
          reinterpret_cast<internal::Database_Commit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_transaction_id{};
      Database_Commit_ParamsDataView input_data_view(params, &serialization_context);
      
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Database::Commit deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Commit(
std::move(p_transaction_id));
      return true;
    }
  }
  return false;
}

// static
bool DatabaseStubDispatch::AcceptWithResponder(
    Database* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDatabase_CreateObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::CreateObjectStore",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_DeleteObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::DeleteObjectStore",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_RenameObjectStore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::RenameObjectStore",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_CreateTransaction_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::CreateTransaction",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Close_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Close",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_VersionChangeIgnored_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::VersionChangeIgnored",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::AddObserver",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_RemoveObservers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::RemoveObservers",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Get",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_GetAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::GetAll",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Put",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_SetIndexKeys_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::SetIndexKeys",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_SetIndexesReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::SetIndexesReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_OpenCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::OpenCursor",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Count_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Count",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_DeleteRange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::DeleteRange",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Clear_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Clear",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_CreateIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::CreateIndex",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_DeleteIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::DeleteIndex",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_RenameIndex_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::RenameIndex",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Abort_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Abort",
               "message", message->name());
#endif
      break;
    }
    case internal::kDatabase_Commit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Database::Commit",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool DatabaseRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Database RequestValidator");

  switch (message->header()->name) {
    case internal::kDatabase_CreateObjectStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_CreateObjectStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_DeleteObjectStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_DeleteObjectStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_RenameObjectStore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_RenameObjectStore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_CreateTransaction_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_CreateTransaction_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Close_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_VersionChangeIgnored_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_VersionChangeIgnored_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_RemoveObservers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_RemoveObservers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Get_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_GetAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_GetAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Put_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Put_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_SetIndexKeys_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_SetIndexKeys_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_SetIndexesReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_SetIndexesReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_OpenCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_OpenCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Count_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Count_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_DeleteRange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_DeleteRange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Clear_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Clear_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_CreateIndex_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_CreateIndex_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_DeleteIndex_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_DeleteIndex_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_RenameIndex_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_RenameIndex_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDatabase_Commit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Database_Commit_Params_Data>(
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

void DatabaseInterceptorForTesting::CreateObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool auto_increment) {
  GetForwardingInterface()->CreateObjectStore(std::move(transaction_id), std::move(object_store_id), std::move(name), std::move(key_path), std::move(auto_increment));
}
void DatabaseInterceptorForTesting::DeleteObjectStore(int64_t transaction_id, int64_t object_store_id) {
  GetForwardingInterface()->DeleteObjectStore(std::move(transaction_id), std::move(object_store_id));
}
void DatabaseInterceptorForTesting::RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) {
  GetForwardingInterface()->RenameObjectStore(std::move(transaction_id), std::move(object_store_id), std::move(new_name));
}
void DatabaseInterceptorForTesting::CreateTransaction(int64_t transaction_id, const std::vector<int64_t>& object_store_ids, blink::WebIDBTransactionMode mode) {
  GetForwardingInterface()->CreateTransaction(std::move(transaction_id), std::move(object_store_ids), std::move(mode));
}
void DatabaseInterceptorForTesting::Close() {
  GetForwardingInterface()->Close();
}
void DatabaseInterceptorForTesting::VersionChangeIgnored() {
  GetForwardingInterface()->VersionChangeIgnored();
}
void DatabaseInterceptorForTesting::AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint16_t operation_types) {
  GetForwardingInterface()->AddObserver(std::move(transaction_id), std::move(observer_id), std::move(include_transaction), std::move(no_records), std::move(values), std::move(operation_types));
}
void DatabaseInterceptorForTesting::RemoveObservers(const std::vector<int32_t>& observers) {
  GetForwardingInterface()->RemoveObservers(std::move(observers));
}
void DatabaseInterceptorForTesting::Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Get(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(key_only), std::move(callbacks));
}
void DatabaseInterceptorForTesting::GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->GetAll(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(key_only), std::move(max_count), std::move(callbacks));
}
void DatabaseInterceptorForTesting::Put(int64_t transaction_id, int64_t object_store_id, ValuePtr value, const content::IndexedDBKey& key, blink::WebIDBPutMode mode, const std::vector<content::IndexedDBIndexKeys>& index_keys, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Put(std::move(transaction_id), std::move(object_store_id), std::move(value), std::move(key), std::move(mode), std::move(index_keys), std::move(callbacks));
}
void DatabaseInterceptorForTesting::SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKey& primary_key, const std::vector<content::IndexedDBIndexKeys>& index_keys) {
  GetForwardingInterface()->SetIndexKeys(std::move(transaction_id), std::move(object_store_id), std::move(primary_key), std::move(index_keys));
}
void DatabaseInterceptorForTesting::SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) {
  GetForwardingInterface()->SetIndexesReady(std::move(transaction_id), std::move(object_store_id), std::move(index_ids));
}
void DatabaseInterceptorForTesting::OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, blink::WebIDBCursorDirection direction, bool key_only, blink::WebIDBTaskType task_type, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->OpenCursor(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(direction), std::move(key_only), std::move(task_type), std::move(callbacks));
}
void DatabaseInterceptorForTesting::Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Count(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(callbacks));
}
void DatabaseInterceptorForTesting::DeleteRange(int64_t transaction_id, int64_t object_store_id, const content::IndexedDBKeyRange& key_range, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->DeleteRange(std::move(transaction_id), std::move(object_store_id), std::move(key_range), std::move(callbacks));
}
void DatabaseInterceptorForTesting::Clear(int64_t transaction_id, int64_t object_store_id, CallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Clear(std::move(transaction_id), std::move(object_store_id), std::move(callbacks));
}
void DatabaseInterceptorForTesting::CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const content::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) {
  GetForwardingInterface()->CreateIndex(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(name), std::move(key_path), std::move(unique), std::move(multi_entry));
}
void DatabaseInterceptorForTesting::DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) {
  GetForwardingInterface()->DeleteIndex(std::move(transaction_id), std::move(object_store_id), std::move(index_id));
}
void DatabaseInterceptorForTesting::RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) {
  GetForwardingInterface()->RenameIndex(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(new_name));
}
void DatabaseInterceptorForTesting::Abort(int64_t transaction_id) {
  GetForwardingInterface()->Abort(std::move(transaction_id));
}
void DatabaseInterceptorForTesting::Commit(int64_t transaction_id) {
  GetForwardingInterface()->Commit(std::move(transaction_id));
}
DatabaseAsyncWaiter::DatabaseAsyncWaiter(
    Database* proxy) : proxy_(proxy) {}

DatabaseAsyncWaiter::~DatabaseAsyncWaiter() = default;


const char Factory::Name_[] = "indexed_db.mojom.Factory";

class Factory_AbortTransactionsAndCompactDatabase_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Factory_AbortTransactionsAndCompactDatabase_ForwardToCallback(
      Factory::AbortTransactionsAndCompactDatabaseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Factory::AbortTransactionsAndCompactDatabaseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Factory_AbortTransactionsAndCompactDatabase_ForwardToCallback);
};

class Factory_AbortTransactionsForDatabase_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Factory_AbortTransactionsForDatabase_ForwardToCallback(
      Factory::AbortTransactionsForDatabaseCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Factory::AbortTransactionsForDatabaseCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Factory_AbortTransactionsForDatabase_ForwardToCallback);
};

FactoryProxy::FactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FactoryProxy::GetDatabaseNames(
    CallbacksAssociatedPtrInfo in_callbacks, const url::Origin& in_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Factory::GetDatabaseNames");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_GetDatabaseNames_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_GetDatabaseNames_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Factory.GetDatabaseNames request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in Factory.GetDatabaseNames request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FactoryProxy::Open(
    CallbacksAssociatedPtrInfo in_callbacks, DatabaseCallbacksAssociatedPtrInfo in_database_callbacks, const url::Origin& in_origin, const base::string16& in_name, int64_t in_version, int64_t in_transaction_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Factory::Open");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_Open_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_Open_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Factory.Open request");
  mojo::internal::Serialize<::indexed_db::mojom::DatabaseCallbacksAssociatedPtrInfoDataView>(
      in_database_callbacks, &params->database_callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->database_callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid database_callbacks in Factory.Open request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in Factory.Open request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in Factory.Open request");
  params->version = in_version;
  params->transaction_id = in_transaction_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FactoryProxy::DeleteDatabase(
    CallbacksAssociatedPtrInfo in_callbacks, const url::Origin& in_origin, const base::string16& in_name, bool in_force_close) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Factory::DeleteDatabase");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_DeleteDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_DeleteDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::CallbacksAssociatedPtrInfoDataView>(
      in_callbacks, &params->callbacks, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->callbacks),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid callbacks in Factory.DeleteDatabase request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in Factory.DeleteDatabase request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in Factory.DeleteDatabase request");
  params->force_close = in_force_close;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FactoryProxy::AbortTransactionsAndCompactDatabase(
    const url::Origin& in_origin, AbortTransactionsAndCompactDatabaseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Factory::AbortTransactionsAndCompactDatabase");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_AbortTransactionsAndCompactDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_AbortTransactionsAndCompactDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in Factory.AbortTransactionsAndCompactDatabase request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Factory_AbortTransactionsAndCompactDatabase_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FactoryProxy::AbortTransactionsForDatabase(
    const url::Origin& in_origin, AbortTransactionsForDatabaseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "indexed_db::mojom::Factory::AbortTransactionsForDatabase");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_AbortTransactionsForDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_AbortTransactionsForDatabase_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in Factory.AbortTransactionsForDatabase request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Factory_AbortTransactionsForDatabase_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder {
 public:
  static Factory::AbortTransactionsAndCompactDatabaseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder> proxy(
        new Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder() {
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
  Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder(
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
        << "Factory::AbortTransactionsAndCompactDatabaseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      Status in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder);
};

bool Factory_AbortTransactionsAndCompactDatabase_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "indexed_db::mojom::Factory::AbortTransactionsAndCompactDatabaseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  Status p_status{};
  Factory_AbortTransactionsAndCompactDatabase_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Factory::AbortTransactionsAndCompactDatabase response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder::Run(
    Status in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_AbortTransactionsAndCompactDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::Status>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::AbortTransactionsAndCompactDatabaseCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Factory_AbortTransactionsForDatabase_ProxyToResponder {
 public:
  static Factory::AbortTransactionsForDatabaseCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Factory_AbortTransactionsForDatabase_ProxyToResponder> proxy(
        new Factory_AbortTransactionsForDatabase_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Factory_AbortTransactionsForDatabase_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Factory_AbortTransactionsForDatabase_ProxyToResponder() {
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
  Factory_AbortTransactionsForDatabase_ProxyToResponder(
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
        << "Factory::AbortTransactionsForDatabaseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      Status in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Factory_AbortTransactionsForDatabase_ProxyToResponder);
};

bool Factory_AbortTransactionsForDatabase_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "indexed_db::mojom::Factory::AbortTransactionsForDatabaseCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Factory_AbortTransactionsForDatabase_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Factory_AbortTransactionsForDatabase_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  Status p_status{};
  Factory_AbortTransactionsForDatabase_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Factory::AbortTransactionsForDatabase response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void Factory_AbortTransactionsForDatabase_ProxyToResponder::Run(
    Status in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFactory_AbortTransactionsForDatabase_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::indexed_db::mojom::internal::Factory_AbortTransactionsForDatabase_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::indexed_db::mojom::Status>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::AbortTransactionsForDatabaseCallback",
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
bool FactoryStubDispatch::Accept(
    Factory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFactory_GetDatabaseNames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::GetDatabaseNames",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Factory_GetDatabaseNames_Params_Data* params =
          reinterpret_cast<internal::Factory_GetDatabaseNames_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CallbacksAssociatedPtrInfo p_callbacks{};
      url::Origin p_origin{};
      Factory_GetDatabaseNames_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Factory::GetDatabaseNames deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetDatabaseNames(
std::move(p_callbacks), 
std::move(p_origin));
      return true;
    }
    case internal::kFactory_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::Open",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Factory_Open_Params_Data* params =
          reinterpret_cast<internal::Factory_Open_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CallbacksAssociatedPtrInfo p_callbacks{};
      DatabaseCallbacksAssociatedPtrInfo p_database_callbacks{};
      url::Origin p_origin{};
      base::string16 p_name{};
      int64_t p_version{};
      int64_t p_transaction_id{};
      Factory_Open_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      p_database_callbacks =
          input_data_view.TakeDatabaseCallbacks<decltype(p_database_callbacks)>();
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_version = input_data_view.version();
      p_transaction_id = input_data_view.transaction_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Factory::Open deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Open(
std::move(p_callbacks), 
std::move(p_database_callbacks), 
std::move(p_origin), 
std::move(p_name), 
std::move(p_version), 
std::move(p_transaction_id));
      return true;
    }
    case internal::kFactory_DeleteDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::DeleteDatabase",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Factory_DeleteDatabase_Params_Data* params =
          reinterpret_cast<internal::Factory_DeleteDatabase_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CallbacksAssociatedPtrInfo p_callbacks{};
      url::Origin p_origin{};
      base::string16 p_name{};
      bool p_force_close{};
      Factory_DeleteDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      p_callbacks =
          input_data_view.TakeCallbacks<decltype(p_callbacks)>();
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_force_close = input_data_view.force_close();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Factory::DeleteDatabase deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DeleteDatabase(
std::move(p_callbacks), 
std::move(p_origin), 
std::move(p_name), 
std::move(p_force_close));
      return true;
    }
    case internal::kFactory_AbortTransactionsAndCompactDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::AbortTransactionsAndCompactDatabase",
               "message", message->name());
#endif
      break;
    }
    case internal::kFactory_AbortTransactionsForDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::AbortTransactionsForDatabase",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FactoryStubDispatch::AcceptWithResponder(
    Factory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFactory_GetDatabaseNames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::GetDatabaseNames",
               "message", message->name());
#endif
      break;
    }
    case internal::kFactory_Open_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::Open",
               "message", message->name());
#endif
      break;
    }
    case internal::kFactory_DeleteDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::DeleteDatabase",
               "message", message->name());
#endif
      break;
    }
    case internal::kFactory_AbortTransactionsAndCompactDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::AbortTransactionsAndCompactDatabase",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Factory_AbortTransactionsAndCompactDatabase_Params_Data* params =
          reinterpret_cast<
              internal::Factory_AbortTransactionsAndCompactDatabase_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      Factory_AbortTransactionsAndCompactDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Factory::AbortTransactionsAndCompactDatabase deserializer");
        return false;
      }
      Factory::AbortTransactionsAndCompactDatabaseCallback callback =
          Factory_AbortTransactionsAndCompactDatabase_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AbortTransactionsAndCompactDatabase(
std::move(p_origin), std::move(callback));
      return true;
    }
    case internal::kFactory_AbortTransactionsForDatabase_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)indexed_db::mojom::Factory::AbortTransactionsForDatabase",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::Factory_AbortTransactionsForDatabase_Params_Data* params =
          reinterpret_cast<
              internal::Factory_AbortTransactionsForDatabase_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      Factory_AbortTransactionsForDatabase_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Factory::AbortTransactionsForDatabase deserializer");
        return false;
      }
      Factory::AbortTransactionsForDatabaseCallback callback =
          Factory_AbortTransactionsForDatabase_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AbortTransactionsForDatabase(
std::move(p_origin), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Factory RequestValidator");

  switch (message->header()->name) {
    case internal::kFactory_GetDatabaseNames_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_GetDatabaseNames_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFactory_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_Open_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFactory_DeleteDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_DeleteDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFactory_AbortTransactionsAndCompactDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_AbortTransactionsAndCompactDatabase_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFactory_AbortTransactionsForDatabase_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_AbortTransactionsForDatabase_Params_Data>(
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

bool FactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Factory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFactory_AbortTransactionsAndCompactDatabase_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_AbortTransactionsAndCompactDatabase_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFactory_AbortTransactionsForDatabase_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Factory_AbortTransactionsForDatabase_ResponseParams_Data>(
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
void FactoryInterceptorForTesting::GetDatabaseNames(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin) {
  GetForwardingInterface()->GetDatabaseNames(std::move(callbacks), std::move(origin));
}
void FactoryInterceptorForTesting::Open(CallbacksAssociatedPtrInfo callbacks, DatabaseCallbacksAssociatedPtrInfo database_callbacks, const url::Origin& origin, const base::string16& name, int64_t version, int64_t transaction_id) {
  GetForwardingInterface()->Open(std::move(callbacks), std::move(database_callbacks), std::move(origin), std::move(name), std::move(version), std::move(transaction_id));
}
void FactoryInterceptorForTesting::DeleteDatabase(CallbacksAssociatedPtrInfo callbacks, const url::Origin& origin, const base::string16& name, bool force_close) {
  GetForwardingInterface()->DeleteDatabase(std::move(callbacks), std::move(origin), std::move(name), std::move(force_close));
}
void FactoryInterceptorForTesting::AbortTransactionsAndCompactDatabase(const url::Origin& origin, AbortTransactionsAndCompactDatabaseCallback callback) {
  GetForwardingInterface()->AbortTransactionsAndCompactDatabase(std::move(origin), std::move(callback));
}
void FactoryInterceptorForTesting::AbortTransactionsForDatabase(const url::Origin& origin, AbortTransactionsForDatabaseCallback callback) {
  GetForwardingInterface()->AbortTransactionsForDatabase(std::move(origin), std::move(callback));
}
FactoryAsyncWaiter::FactoryAsyncWaiter(
    Factory* proxy) : proxy_(proxy) {}

FactoryAsyncWaiter::~FactoryAsyncWaiter() = default;

void FactoryAsyncWaiter::AbortTransactionsAndCompactDatabase(
    const url::Origin& origin, Status* out_status) {
  base::RunLoop loop;
  proxy_->AbortTransactionsAndCompactDatabase(std::move(origin),
      base::BindOnce(
          [](base::RunLoop* loop,
             Status* out_status
,
             Status status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void FactoryAsyncWaiter::AbortTransactionsForDatabase(
    const url::Origin& origin, Status* out_status) {
  base::RunLoop loop;
  proxy_->AbortTransactionsForDatabase(std::move(origin),
      base::BindOnce(
          [](base::RunLoop* loop,
             Status* out_status
,
             Status status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}

}  // namespace mojom
}  // namespace indexed_db

namespace mojo {


// static
bool StructTraits<::indexed_db::mojom::Key::DataView, ::indexed_db::mojom::KeyPtr>::Read(
    ::indexed_db::mojom::Key::DataView input,
    ::indexed_db::mojom::KeyPtr* output) {
  bool success = true;
  ::indexed_db::mojom::KeyPtr result(::indexed_db::mojom::Key::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::KeyPath::DataView, ::indexed_db::mojom::KeyPathPtr>::Read(
    ::indexed_db::mojom::KeyPath::DataView input,
    ::indexed_db::mojom::KeyPathPtr* output) {
  bool success = true;
  ::indexed_db::mojom::KeyPathPtr result(::indexed_db::mojom::KeyPath::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::KeyRange::DataView, ::indexed_db::mojom::KeyRangePtr>::Read(
    ::indexed_db::mojom::KeyRange::DataView input,
    ::indexed_db::mojom::KeyRangePtr* output) {
  bool success = true;
  ::indexed_db::mojom::KeyRangePtr result(::indexed_db::mojom::KeyRange::New());
  
      if (!input.ReadLower(&result->lower))
        success = false;
      if (!input.ReadUpper(&result->upper))
        success = false;
      result->lower_open = input.lower_open();
      result->upper_open = input.upper_open();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::IndexMetadata::DataView, ::indexed_db::mojom::IndexMetadataPtr>::Read(
    ::indexed_db::mojom::IndexMetadata::DataView input,
    ::indexed_db::mojom::IndexMetadataPtr* output) {
  bool success = true;
  ::indexed_db::mojom::IndexMetadataPtr result(::indexed_db::mojom::IndexMetadata::New());
  
      result->id = input.id();
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadKeyPath(&result->key_path))
        success = false;
      result->unique = input.unique();
      result->multi_entry = input.multi_entry();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::ObjectStoreMetadata::DataView, ::indexed_db::mojom::ObjectStoreMetadataPtr>::Read(
    ::indexed_db::mojom::ObjectStoreMetadata::DataView input,
    ::indexed_db::mojom::ObjectStoreMetadataPtr* output) {
  bool success = true;
  ::indexed_db::mojom::ObjectStoreMetadataPtr result(::indexed_db::mojom::ObjectStoreMetadata::New());
  
      result->id = input.id();
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadKeyPath(&result->key_path))
        success = false;
      result->auto_increment = input.auto_increment();
      result->max_index_id = input.max_index_id();
      if (!input.ReadIndexes(&result->indexes))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::DatabaseMetadata::DataView, ::indexed_db::mojom::DatabaseMetadataPtr>::Read(
    ::indexed_db::mojom::DatabaseMetadata::DataView input,
    ::indexed_db::mojom::DatabaseMetadataPtr* output) {
  bool success = true;
  ::indexed_db::mojom::DatabaseMetadataPtr result(::indexed_db::mojom::DatabaseMetadata::New());
  
      result->id = input.id();
      if (!input.ReadName(&result->name))
        success = false;
      result->version = input.version();
      result->max_object_store_id = input.max_object_store_id();
      if (!input.ReadObjectStores(&result->object_stores))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::IndexKeys::DataView, ::indexed_db::mojom::IndexKeysPtr>::Read(
    ::indexed_db::mojom::IndexKeys::DataView input,
    ::indexed_db::mojom::IndexKeysPtr* output) {
  bool success = true;
  ::indexed_db::mojom::IndexKeysPtr result(::indexed_db::mojom::IndexKeys::New());
  
      result->index_id = input.index_id();
      if (!input.ReadIndexKeys(&result->index_keys))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::FileInfo::DataView, ::indexed_db::mojom::FileInfoPtr>::Read(
    ::indexed_db::mojom::FileInfo::DataView input,
    ::indexed_db::mojom::FileInfoPtr* output) {
  bool success = true;
  ::indexed_db::mojom::FileInfoPtr result(::indexed_db::mojom::FileInfo::New());
  
      if (!input.ReadPath(&result->path))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadLastModified(&result->last_modified))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::BlobInfo::DataView, ::indexed_db::mojom::BlobInfoPtr>::Read(
    ::indexed_db::mojom::BlobInfo::DataView input,
    ::indexed_db::mojom::BlobInfoPtr* output) {
  bool success = true;
  ::indexed_db::mojom::BlobInfoPtr result(::indexed_db::mojom::BlobInfo::New());
  
      result->blob =
          input.TakeBlob<decltype(result->blob)>();
      if (!input.ReadUuid(&result->uuid))
        success = false;
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      result->size = input.size();
      if (!input.ReadFile(&result->file))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::Value::DataView, ::indexed_db::mojom::ValuePtr>::Read(
    ::indexed_db::mojom::Value::DataView input,
    ::indexed_db::mojom::ValuePtr* output) {
  bool success = true;
  ::indexed_db::mojom::ValuePtr result(::indexed_db::mojom::Value::New());
  
      if (!input.ReadBits(&result->bits))
        success = false;
      if (!input.ReadBlobOrFileInfo(&result->blob_or_file_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::ReturnValue::DataView, ::indexed_db::mojom::ReturnValuePtr>::Read(
    ::indexed_db::mojom::ReturnValue::DataView input,
    ::indexed_db::mojom::ReturnValuePtr* output) {
  bool success = true;
  ::indexed_db::mojom::ReturnValuePtr result(::indexed_db::mojom::ReturnValue::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadPrimaryKey(&result->primary_key))
        success = false;
      if (!input.ReadKeyPath(&result->key_path))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::Observation::DataView, ::indexed_db::mojom::ObservationPtr>::Read(
    ::indexed_db::mojom::Observation::DataView input,
    ::indexed_db::mojom::ObservationPtr* output) {
  bool success = true;
  ::indexed_db::mojom::ObservationPtr result(::indexed_db::mojom::Observation::New());
  
      result->object_store_id = input.object_store_id();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadKeyRange(&result->key_range))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::ObserverTransaction::DataView, ::indexed_db::mojom::ObserverTransactionPtr>::Read(
    ::indexed_db::mojom::ObserverTransaction::DataView input,
    ::indexed_db::mojom::ObserverTransactionPtr* output) {
  bool success = true;
  ::indexed_db::mojom::ObserverTransactionPtr result(::indexed_db::mojom::ObserverTransaction::New());
  
      result->id = input.id();
      if (!input.ReadScope(&result->scope))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::indexed_db::mojom::ObserverChanges::DataView, ::indexed_db::mojom::ObserverChangesPtr>::Read(
    ::indexed_db::mojom::ObserverChanges::DataView input,
    ::indexed_db::mojom::ObserverChangesPtr* output) {
  bool success = true;
  ::indexed_db::mojom::ObserverChangesPtr result(::indexed_db::mojom::ObserverChanges::New());
  
      if (!input.ReadObservationIndexMap(&result->observation_index_map))
        success = false;
      if (!input.ReadTransactionMap(&result->transaction_map))
        success = false;
      if (!input.ReadObservations(&result->observations))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::indexed_db::mojom::KeyData::DataView, ::indexed_db::mojom::KeyDataPtr>::Read(
    ::indexed_db::mojom::KeyData::DataView input,
    ::indexed_db::mojom::KeyDataPtr* output) {
  using UnionType = ::indexed_db::mojom::KeyData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::KEY_ARRAY: {
      std::vector<content::IndexedDBKey> result_key_array;
      if (!input.ReadKeyArray(&result_key_array))
        return false;

      *output = UnionType::NewKeyArray(
          std::move(result_key_array));
      break;
    }
    case Tag::BINARY: {
      std::vector<uint8_t> result_binary;
      if (!input.ReadBinary(&result_binary))
        return false;

      *output = UnionType::NewBinary(
          std::move(result_binary));
      break;
    }
    case Tag::STRING: {
      base::string16 result_string;
      if (!input.ReadString(&result_string))
        return false;

      *output = UnionType::NewString(
          std::move(result_string));
      break;
    }
    case Tag::DATE: {
      *output = UnionType::NewDate(input.date());
      break;
    }
    case Tag::NUMBER: {
      *output = UnionType::NewNumber(input.number());
      break;
    }
    case Tag::OTHER: {
      ::indexed_db::mojom::DatalessKeyType result_other;
      if (!input.ReadOther(&result_other))
        return false;

      *output = UnionType::NewOther(result_other);
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::indexed_db::mojom::KeyPathData::DataView, ::indexed_db::mojom::KeyPathDataPtr>::Read(
    ::indexed_db::mojom::KeyPathData::DataView input,
    ::indexed_db::mojom::KeyPathDataPtr* output) {
  using UnionType = ::indexed_db::mojom::KeyPathData;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::STRING: {
      base::string16 result_string;
      if (!input.ReadString(&result_string))
        return false;

      *output = UnionType::NewString(
          std::move(result_string));
      break;
    }
    case Tag::STRING_ARRAY: {
      std::vector<base::string16> result_string_array;
      if (!input.ReadStringArray(&result_string_array))
        return false;

      *output = UnionType::NewStringArray(
          std::move(result_string_array));
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