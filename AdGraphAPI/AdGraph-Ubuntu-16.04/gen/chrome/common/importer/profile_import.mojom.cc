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

#include "chrome/common/importer/profile_import.mojom.h"

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

#include "chrome/common/importer/profile_import.mojom-shared-message-ids.h"
#include "chrome/common/importer/profile_import_process_param_traits.h"
#include "components/autofill/content/common/autofill_types_struct_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/text_direction_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
namespace chrome {
namespace mojom {
const char kProfileImportServiceName[] = "profile_import";
const char ProfileImportObserver::Name_[] = "chrome.mojom.ProfileImportObserver";

ProfileImportObserverProxy::ProfileImportObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProfileImportObserverProxy::OnImportStart(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnImportStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnImportStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnImportStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnImportFinished(
    bool in_succeeded, const std::string& in_error_msg) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnImportFinished");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnImportFinished_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnImportFinished_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->succeeded = in_succeeded;
  typename decltype(params->error_msg)::BaseType::BufferWriter
      error_msg_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error_msg, buffer, &error_msg_writer, &serialization_context);
  params->error_msg.Set(
      error_msg_writer.is_null() ? nullptr : error_msg_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error_msg.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error_msg in ProfileImportObserver.OnImportFinished request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnImportItemStart(
    ::importer::ImportItem in_item) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnImportItemStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnImportItemStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnImportItemStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::ImportItem>(
      in_item, &params->item);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnImportItemFinished(
    ::importer::ImportItem in_item) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnImportItemFinished");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnImportItemFinished_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnImportItemFinished_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::ImportItem>(
      in_item, &params->item);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnHistoryImportStart(
    uint32_t in_total_history_rows_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnHistoryImportStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnHistoryImportStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnHistoryImportStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->total_history_rows_count = in_total_history_rows_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnHistoryImportGroup(
    const std::vector<::ImporterURLRow>& in_history_rows_group, int32_t in_visit_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnHistoryImportGroup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnHistoryImportGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnHistoryImportGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->history_rows_group)::BaseType::BufferWriter
      history_rows_group_writer;
  const mojo::internal::ContainerValidateParams history_rows_group_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::ImporterURLRowDataView>>(
      in_history_rows_group, buffer, &history_rows_group_writer, &history_rows_group_validate_params,
      &serialization_context);
  params->history_rows_group.Set(
      history_rows_group_writer.is_null() ? nullptr : history_rows_group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->history_rows_group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null history_rows_group in ProfileImportObserver.OnHistoryImportGroup request");
  params->visit_source = in_visit_source;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnHomePageImportReady(
    const GURL& in_home_page) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnHomePageImportReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnHomePageImportReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnHomePageImportReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->home_page)::BaseType::BufferWriter
      home_page_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_home_page, buffer, &home_page_writer, &serialization_context);
  params->home_page.Set(
      home_page_writer.is_null() ? nullptr : home_page_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->home_page.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null home_page in ProfileImportObserver.OnHomePageImportReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnBookmarksImportStart(
    const base::string16& in_first_folder_name, uint32_t in_total_bookmarks_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnBookmarksImportStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnBookmarksImportStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnBookmarksImportStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->first_folder_name)::BaseType::BufferWriter
      first_folder_name_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_first_folder_name, buffer, &first_folder_name_writer, &serialization_context);
  params->first_folder_name.Set(
      first_folder_name_writer.is_null() ? nullptr : first_folder_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_folder_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_folder_name in ProfileImportObserver.OnBookmarksImportStart request");
  params->total_bookmarks_count = in_total_bookmarks_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnBookmarksImportGroup(
    const std::vector<::ImportedBookmarkEntry>& in_bookmarks_group) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnBookmarksImportGroup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnBookmarksImportGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnBookmarksImportGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bookmarks_group)::BaseType::BufferWriter
      bookmarks_group_writer;
  const mojo::internal::ContainerValidateParams bookmarks_group_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::ImportedBookmarkEntryDataView>>(
      in_bookmarks_group, buffer, &bookmarks_group_writer, &bookmarks_group_validate_params,
      &serialization_context);
  params->bookmarks_group.Set(
      bookmarks_group_writer.is_null() ? nullptr : bookmarks_group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bookmarks_group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bookmarks_group in ProfileImportObserver.OnBookmarksImportGroup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnFaviconsImportStart(
    uint32_t in_total_favicons_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnFaviconsImportStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnFaviconsImportStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnFaviconsImportStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->total_favicons_count = in_total_favicons_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnFaviconsImportGroup(
    const ::favicon_base::FaviconUsageDataList& in_favicons_group) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnFaviconsImportGroup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnFaviconsImportGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnFaviconsImportGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->favicons_group)::BaseType::BufferWriter
      favicons_group_writer;
  mojo::internal::Serialize<::chrome::mojom::FaviconUsageDataListDataView>(
      in_favicons_group, buffer, &favicons_group_writer, &serialization_context);
  params->favicons_group.Set(
      favicons_group_writer.is_null() ? nullptr : favicons_group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->favicons_group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null favicons_group in ProfileImportObserver.OnFaviconsImportGroup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnPasswordFormImportReady(
    const autofill::PasswordForm& in_form) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnPasswordFormImportReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnPasswordFormImportReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnPasswordFormImportReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->form)::BaseType::BufferWriter
      form_writer;
  mojo::internal::Serialize<::autofill::mojom::PasswordFormDataView>(
      in_form, buffer, &form_writer, &serialization_context);
  params->form.Set(
      form_writer.is_null() ? nullptr : form_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->form.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null form in ProfileImportObserver.OnPasswordFormImportReady request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnKeywordsImportReady(
    const std::vector<::importer::SearchEngineInfo>& in_search_engines, bool in_unique_on_host_and_path) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnKeywordsImportReady");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnKeywordsImportReady_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnKeywordsImportReady_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->search_engines)::BaseType::BufferWriter
      search_engines_writer;
  const mojo::internal::ContainerValidateParams search_engines_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::SearchEngineInfoDataView>>(
      in_search_engines, buffer, &search_engines_writer, &search_engines_validate_params,
      &serialization_context);
  params->search_engines.Set(
      search_engines_writer.is_null() ? nullptr : search_engines_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->search_engines.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null search_engines in ProfileImportObserver.OnKeywordsImportReady request");
  params->unique_on_host_and_path = in_unique_on_host_and_path;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnFirefoxSearchEngineDataReceived(
    const std::vector<std::string>& in_search_engine_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnFirefoxSearchEngineDataReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->search_engine_data)::BaseType::BufferWriter
      search_engine_data_writer;
  const mojo::internal::ContainerValidateParams search_engine_data_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_search_engine_data, buffer, &search_engine_data_writer, &search_engine_data_validate_params,
      &serialization_context);
  params->search_engine_data.Set(
      search_engine_data_writer.is_null() ? nullptr : search_engine_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->search_engine_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null search_engine_data in ProfileImportObserver.OnFirefoxSearchEngineDataReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnAutofillFormDataImportStart(
    uint32_t in_total_autofill_form_data_entry_count) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnAutofillFormDataImportStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnAutofillFormDataImportStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->total_autofill_form_data_entry_count = in_total_autofill_form_data_entry_count;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnAutofillFormDataImportGroup(
    const std::vector<::ImporterAutofillFormDataEntry>& in_autofill_form_data_entry_group) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnAutofillFormDataImportGroup");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnAutofillFormDataImportGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->autofill_form_data_entry_group)::BaseType::BufferWriter
      autofill_form_data_entry_group_writer;
  const mojo::internal::ContainerValidateParams autofill_form_data_entry_group_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::ImporterAutofillFormDataEntryDataView>>(
      in_autofill_form_data_entry_group, buffer, &autofill_form_data_entry_group_writer, &autofill_form_data_entry_group_validate_params,
      &serialization_context);
  params->autofill_form_data_entry_group.Set(
      autofill_form_data_entry_group_writer.is_null() ? nullptr : autofill_form_data_entry_group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->autofill_form_data_entry_group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null autofill_form_data_entry_group in ProfileImportObserver.OnAutofillFormDataImportGroup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportObserverProxy::OnIE7PasswordReceived(
    const ::importer::ImporterIE7PasswordInfo& in_importer_password_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImportObserver::OnIE7PasswordReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImportObserver_OnIE7PasswordReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImportObserver_OnIE7PasswordReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->importer_password_info)::BaseType::BufferWriter
      importer_password_info_writer;
  mojo::internal::Serialize<::chrome::mojom::ImporterIE7PasswordInfoDataView>(
      in_importer_password_info, buffer, &importer_password_info_writer, &serialization_context);
  params->importer_password_info.Set(
      importer_password_info_writer.is_null() ? nullptr : importer_password_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->importer_password_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null importer_password_info in ProfileImportObserver.OnIE7PasswordReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProfileImportObserverStubDispatch::Accept(
    ProfileImportObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProfileImportObserver_OnImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnImportStart_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnImportStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProfileImportObserver_OnImportStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnImportStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnImportStart();
      return true;
    }
    case internal::kProfileImportObserver_OnImportFinished_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportFinished",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnImportFinished_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnImportFinished_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_succeeded{};
      std::string p_error_msg{};
      ProfileImportObserver_OnImportFinished_ParamsDataView input_data_view(params, &serialization_context);
      
      p_succeeded = input_data_view.succeeded();
      if (!input_data_view.ReadErrorMsg(&p_error_msg))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnImportFinished deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnImportFinished(
std::move(p_succeeded), 
std::move(p_error_msg));
      return true;
    }
    case internal::kProfileImportObserver_OnImportItemStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportItemStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnImportItemStart_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnImportItemStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::importer::ImportItem p_item{};
      ProfileImportObserver_OnImportItemStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadItem(&p_item))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnImportItemStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnImportItemStart(
std::move(p_item));
      return true;
    }
    case internal::kProfileImportObserver_OnImportItemFinished_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportItemFinished",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnImportItemFinished_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnImportItemFinished_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::importer::ImportItem p_item{};
      ProfileImportObserver_OnImportItemFinished_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadItem(&p_item))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnImportItemFinished deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnImportItemFinished(
std::move(p_item));
      return true;
    }
    case internal::kProfileImportObserver_OnHistoryImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnHistoryImportStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnHistoryImportStart_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnHistoryImportStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_total_history_rows_count{};
      ProfileImportObserver_OnHistoryImportStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_total_history_rows_count = input_data_view.total_history_rows_count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnHistoryImportStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnHistoryImportStart(
std::move(p_total_history_rows_count));
      return true;
    }
    case internal::kProfileImportObserver_OnHistoryImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnHistoryImportGroup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnHistoryImportGroup_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnHistoryImportGroup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ImporterURLRow> p_history_rows_group{};
      int32_t p_visit_source{};
      ProfileImportObserver_OnHistoryImportGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHistoryRowsGroup(&p_history_rows_group))
        success = false;
      p_visit_source = input_data_view.visit_source();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnHistoryImportGroup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnHistoryImportGroup(
std::move(p_history_rows_group), 
std::move(p_visit_source));
      return true;
    }
    case internal::kProfileImportObserver_OnHomePageImportReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnHomePageImportReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnHomePageImportReady_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnHomePageImportReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_home_page{};
      ProfileImportObserver_OnHomePageImportReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHomePage(&p_home_page))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnHomePageImportReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnHomePageImportReady(
std::move(p_home_page));
      return true;
    }
    case internal::kProfileImportObserver_OnBookmarksImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnBookmarksImportStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnBookmarksImportStart_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnBookmarksImportStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_first_folder_name{};
      uint32_t p_total_bookmarks_count{};
      ProfileImportObserver_OnBookmarksImportStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFirstFolderName(&p_first_folder_name))
        success = false;
      p_total_bookmarks_count = input_data_view.total_bookmarks_count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnBookmarksImportStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBookmarksImportStart(
std::move(p_first_folder_name), 
std::move(p_total_bookmarks_count));
      return true;
    }
    case internal::kProfileImportObserver_OnBookmarksImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnBookmarksImportGroup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnBookmarksImportGroup_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnBookmarksImportGroup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ImportedBookmarkEntry> p_bookmarks_group{};
      ProfileImportObserver_OnBookmarksImportGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBookmarksGroup(&p_bookmarks_group))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnBookmarksImportGroup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnBookmarksImportGroup(
std::move(p_bookmarks_group));
      return true;
    }
    case internal::kProfileImportObserver_OnFaviconsImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnFaviconsImportStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnFaviconsImportStart_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnFaviconsImportStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_total_favicons_count{};
      ProfileImportObserver_OnFaviconsImportStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_total_favicons_count = input_data_view.total_favicons_count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnFaviconsImportStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFaviconsImportStart(
std::move(p_total_favicons_count));
      return true;
    }
    case internal::kProfileImportObserver_OnFaviconsImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnFaviconsImportGroup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnFaviconsImportGroup_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnFaviconsImportGroup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::favicon_base::FaviconUsageDataList p_favicons_group{};
      ProfileImportObserver_OnFaviconsImportGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFaviconsGroup(&p_favicons_group))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnFaviconsImportGroup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFaviconsImportGroup(
std::move(p_favicons_group));
      return true;
    }
    case internal::kProfileImportObserver_OnPasswordFormImportReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnPasswordFormImportReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnPasswordFormImportReady_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnPasswordFormImportReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      autofill::PasswordForm p_form{};
      ProfileImportObserver_OnPasswordFormImportReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadForm(&p_form))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnPasswordFormImportReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnPasswordFormImportReady(
std::move(p_form));
      return true;
    }
    case internal::kProfileImportObserver_OnKeywordsImportReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnKeywordsImportReady",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnKeywordsImportReady_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnKeywordsImportReady_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::importer::SearchEngineInfo> p_search_engines{};
      bool p_unique_on_host_and_path{};
      ProfileImportObserver_OnKeywordsImportReady_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSearchEngines(&p_search_engines))
        success = false;
      p_unique_on_host_and_path = input_data_view.unique_on_host_and_path();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnKeywordsImportReady deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnKeywordsImportReady(
std::move(p_search_engines), 
std::move(p_unique_on_host_and_path));
      return true;
    }
    case internal::kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnFirefoxSearchEngineDataReceived",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<std::string> p_search_engine_data{};
      ProfileImportObserver_OnFirefoxSearchEngineDataReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSearchEngineData(&p_search_engine_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnFirefoxSearchEngineDataReceived deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnFirefoxSearchEngineDataReceived(
std::move(p_search_engine_data));
      return true;
    }
    case internal::kProfileImportObserver_OnAutofillFormDataImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnAutofillFormDataImportStart",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_total_autofill_form_data_entry_count{};
      ProfileImportObserver_OnAutofillFormDataImportStart_ParamsDataView input_data_view(params, &serialization_context);
      
      p_total_autofill_form_data_entry_count = input_data_view.total_autofill_form_data_entry_count();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnAutofillFormDataImportStart deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAutofillFormDataImportStart(
std::move(p_total_autofill_form_data_entry_count));
      return true;
    }
    case internal::kProfileImportObserver_OnAutofillFormDataImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnAutofillFormDataImportGroup",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ImporterAutofillFormDataEntry> p_autofill_form_data_entry_group{};
      ProfileImportObserver_OnAutofillFormDataImportGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAutofillFormDataEntryGroup(&p_autofill_form_data_entry_group))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnAutofillFormDataImportGroup deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnAutofillFormDataImportGroup(
std::move(p_autofill_form_data_entry_group));
      return true;
    }
    case internal::kProfileImportObserver_OnIE7PasswordReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnIE7PasswordReceived",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImportObserver_OnIE7PasswordReceived_Params_Data* params =
          reinterpret_cast<internal::ProfileImportObserver_OnIE7PasswordReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::importer::ImporterIE7PasswordInfo p_importer_password_info{};
      ProfileImportObserver_OnIE7PasswordReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadImporterPasswordInfo(&p_importer_password_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImportObserver::OnIE7PasswordReceived deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->OnIE7PasswordReceived(
std::move(p_importer_password_info));
      return true;
    }
  }
  return false;
}

// static
bool ProfileImportObserverStubDispatch::AcceptWithResponder(
    ProfileImportObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProfileImportObserver_OnImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnImportFinished_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportFinished",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnImportItemStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportItemStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnImportItemFinished_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnImportItemFinished",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnHistoryImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnHistoryImportStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnHistoryImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnHistoryImportGroup",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnHomePageImportReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnHomePageImportReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnBookmarksImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnBookmarksImportStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnBookmarksImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnBookmarksImportGroup",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnFaviconsImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnFaviconsImportStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnFaviconsImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnFaviconsImportGroup",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnPasswordFormImportReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnPasswordFormImportReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnKeywordsImportReady_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnKeywordsImportReady",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnFirefoxSearchEngineDataReceived",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnAutofillFormDataImportStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnAutofillFormDataImportStart",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnAutofillFormDataImportGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnAutofillFormDataImportGroup",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImportObserver_OnIE7PasswordReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImportObserver::OnIE7PasswordReceived",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProfileImportObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfileImportObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kProfileImportObserver_OnImportStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnImportStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnImportFinished_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnImportFinished_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnImportItemStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnImportItemStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnImportItemFinished_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnImportItemFinished_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnHistoryImportStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnHistoryImportStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnHistoryImportGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnHistoryImportGroup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnHomePageImportReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnHomePageImportReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnBookmarksImportStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnBookmarksImportStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnBookmarksImportGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnBookmarksImportGroup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnFaviconsImportStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnFaviconsImportStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnFaviconsImportGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnFaviconsImportGroup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnPasswordFormImportReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnPasswordFormImportReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnKeywordsImportReady_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnKeywordsImportReady_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnFirefoxSearchEngineDataReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnFirefoxSearchEngineDataReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnAutofillFormDataImportStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnAutofillFormDataImportStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnAutofillFormDataImportGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnAutofillFormDataImportGroup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImportObserver_OnIE7PasswordReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImportObserver_OnIE7PasswordReceived_Params_Data>(
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

void ProfileImportObserverInterceptorForTesting::OnImportStart() {
  GetForwardingInterface()->OnImportStart();
}
void ProfileImportObserverInterceptorForTesting::OnImportFinished(bool succeeded, const std::string& error_msg) {
  GetForwardingInterface()->OnImportFinished(std::move(succeeded), std::move(error_msg));
}
void ProfileImportObserverInterceptorForTesting::OnImportItemStart(::importer::ImportItem item) {
  GetForwardingInterface()->OnImportItemStart(std::move(item));
}
void ProfileImportObserverInterceptorForTesting::OnImportItemFinished(::importer::ImportItem item) {
  GetForwardingInterface()->OnImportItemFinished(std::move(item));
}
void ProfileImportObserverInterceptorForTesting::OnHistoryImportStart(uint32_t total_history_rows_count) {
  GetForwardingInterface()->OnHistoryImportStart(std::move(total_history_rows_count));
}
void ProfileImportObserverInterceptorForTesting::OnHistoryImportGroup(const std::vector<::ImporterURLRow>& history_rows_group, int32_t visit_source) {
  GetForwardingInterface()->OnHistoryImportGroup(std::move(history_rows_group), std::move(visit_source));
}
void ProfileImportObserverInterceptorForTesting::OnHomePageImportReady(const GURL& home_page) {
  GetForwardingInterface()->OnHomePageImportReady(std::move(home_page));
}
void ProfileImportObserverInterceptorForTesting::OnBookmarksImportStart(const base::string16& first_folder_name, uint32_t total_bookmarks_count) {
  GetForwardingInterface()->OnBookmarksImportStart(std::move(first_folder_name), std::move(total_bookmarks_count));
}
void ProfileImportObserverInterceptorForTesting::OnBookmarksImportGroup(const std::vector<::ImportedBookmarkEntry>& bookmarks_group) {
  GetForwardingInterface()->OnBookmarksImportGroup(std::move(bookmarks_group));
}
void ProfileImportObserverInterceptorForTesting::OnFaviconsImportStart(uint32_t total_favicons_count) {
  GetForwardingInterface()->OnFaviconsImportStart(std::move(total_favicons_count));
}
void ProfileImportObserverInterceptorForTesting::OnFaviconsImportGroup(const ::favicon_base::FaviconUsageDataList& favicons_group) {
  GetForwardingInterface()->OnFaviconsImportGroup(std::move(favicons_group));
}
void ProfileImportObserverInterceptorForTesting::OnPasswordFormImportReady(const autofill::PasswordForm& form) {
  GetForwardingInterface()->OnPasswordFormImportReady(std::move(form));
}
void ProfileImportObserverInterceptorForTesting::OnKeywordsImportReady(const std::vector<::importer::SearchEngineInfo>& search_engines, bool unique_on_host_and_path) {
  GetForwardingInterface()->OnKeywordsImportReady(std::move(search_engines), std::move(unique_on_host_and_path));
}
void ProfileImportObserverInterceptorForTesting::OnFirefoxSearchEngineDataReceived(const std::vector<std::string>& search_engine_data) {
  GetForwardingInterface()->OnFirefoxSearchEngineDataReceived(std::move(search_engine_data));
}
void ProfileImportObserverInterceptorForTesting::OnAutofillFormDataImportStart(uint32_t total_autofill_form_data_entry_count) {
  GetForwardingInterface()->OnAutofillFormDataImportStart(std::move(total_autofill_form_data_entry_count));
}
void ProfileImportObserverInterceptorForTesting::OnAutofillFormDataImportGroup(const std::vector<::ImporterAutofillFormDataEntry>& autofill_form_data_entry_group) {
  GetForwardingInterface()->OnAutofillFormDataImportGroup(std::move(autofill_form_data_entry_group));
}
void ProfileImportObserverInterceptorForTesting::OnIE7PasswordReceived(const ::importer::ImporterIE7PasswordInfo& importer_password_info) {
  GetForwardingInterface()->OnIE7PasswordReceived(std::move(importer_password_info));
}
ProfileImportObserverAsyncWaiter::ProfileImportObserverAsyncWaiter(
    ProfileImportObserver* proxy) : proxy_(proxy) {}

ProfileImportObserverAsyncWaiter::~ProfileImportObserverAsyncWaiter() = default;


const char ProfileImport::Name_[] = "chrome.mojom.ProfileImport";

ProfileImportProxy::ProfileImportProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProfileImportProxy::StartImport(
    const ::importer::SourceProfile& in_source_profile, uint16_t in_items, const base::flat_map<uint32_t, std::string>& in_localized_strings, ProfileImportObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImport::StartImport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImport_StartImport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImport_StartImport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_profile)::BaseType::BufferWriter
      source_profile_writer;
  mojo::internal::Serialize<::chrome::mojom::SourceProfileDataView>(
      in_source_profile, buffer, &source_profile_writer, &serialization_context);
  params->source_profile.Set(
      source_profile_writer.is_null() ? nullptr : source_profile_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_profile.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_profile in ProfileImport.StartImport request");
  params->items = in_items;
  typename decltype(params->localized_strings)::BaseType::BufferWriter
      localized_strings_writer;
  const mojo::internal::ContainerValidateParams localized_strings_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<uint32_t, mojo::StringDataView>>(
      in_localized_strings, buffer, &localized_strings_writer, &localized_strings_validate_params,
      &serialization_context);
  params->localized_strings.Set(
      localized_strings_writer.is_null() ? nullptr : localized_strings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->localized_strings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null localized_strings in ProfileImport.StartImport request");
  mojo::internal::Serialize<::chrome::mojom::ProfileImportObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in ProfileImport.StartImport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportProxy::CancelImport(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImport::CancelImport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImport_CancelImport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImport_CancelImport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfileImportProxy::ReportImportItemFinished(
    ::importer::ImportItem in_item) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::ProfileImport::ReportImportItemFinished");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfileImport_ReportImportItemFinished_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::ProfileImport_ReportImportItemFinished_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::chrome::mojom::ImportItem>(
      in_item, &params->item);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProfileImportStubDispatch::Accept(
    ProfileImport* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProfileImport_StartImport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImport::StartImport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImport_StartImport_Params_Data* params =
          reinterpret_cast<internal::ProfileImport_StartImport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::importer::SourceProfile p_source_profile{};
      uint16_t p_items{};
      base::flat_map<uint32_t, std::string> p_localized_strings{};
      ProfileImportObserverPtr p_observer{};
      ProfileImport_StartImport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceProfile(&p_source_profile))
        success = false;
      p_items = input_data_view.items();
      if (!input_data_view.ReadLocalizedStrings(&p_localized_strings))
        success = false;
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImport::StartImport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StartImport(
std::move(p_source_profile), 
std::move(p_items), 
std::move(p_localized_strings), 
std::move(p_observer));
      return true;
    }
    case internal::kProfileImport_CancelImport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImport::CancelImport",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImport_CancelImport_Params_Data* params =
          reinterpret_cast<internal::ProfileImport_CancelImport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProfileImport_CancelImport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImport::CancelImport deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->CancelImport();
      return true;
    }
    case internal::kProfileImport_ReportImportItemFinished_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImport::ReportImportItemFinished",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfileImport_ReportImportItemFinished_Params_Data* params =
          reinterpret_cast<internal::ProfileImport_ReportImportItemFinished_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::importer::ImportItem p_item{};
      ProfileImport_ReportImportItemFinished_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadItem(&p_item))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProfileImport::ReportImportItemFinished deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ReportImportItemFinished(
std::move(p_item));
      return true;
    }
  }
  return false;
}

// static
bool ProfileImportStubDispatch::AcceptWithResponder(
    ProfileImport* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProfileImport_StartImport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImport::StartImport",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImport_CancelImport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImport::CancelImport",
               "message", message->name());
#endif
      break;
    }
    case internal::kProfileImport_ReportImportItemFinished_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::ProfileImport::ReportImportItemFinished",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

bool ProfileImportRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfileImport RequestValidator");

  switch (message->header()->name) {
    case internal::kProfileImport_StartImport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImport_StartImport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImport_CancelImport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImport_CancelImport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfileImport_ReportImportItemFinished_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfileImport_ReportImportItemFinished_Params_Data>(
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

void ProfileImportInterceptorForTesting::StartImport(const ::importer::SourceProfile& source_profile, uint16_t items, const base::flat_map<uint32_t, std::string>& localized_strings, ProfileImportObserverPtr observer) {
  GetForwardingInterface()->StartImport(std::move(source_profile), std::move(items), std::move(localized_strings), std::move(observer));
}
void ProfileImportInterceptorForTesting::CancelImport() {
  GetForwardingInterface()->CancelImport();
}
void ProfileImportInterceptorForTesting::ReportImportItemFinished(::importer::ImportItem item) {
  GetForwardingInterface()->ReportImportItemFinished(std::move(item));
}
ProfileImportAsyncWaiter::ProfileImportAsyncWaiter(
    ProfileImport* proxy) : proxy_(proxy) {}

ProfileImportAsyncWaiter::~ProfileImportAsyncWaiter() = default;


}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif