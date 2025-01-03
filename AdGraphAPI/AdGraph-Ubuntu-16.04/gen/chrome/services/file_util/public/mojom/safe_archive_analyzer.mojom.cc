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

#include "chrome/services/file_util/public/mojom/safe_archive_analyzer.mojom.h"

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

#include "chrome/services/file_util/public/mojom/safe_archive_analyzer.mojom-shared-message-ids.h"
#include "chrome/services/file_util/public/mojom/safe_archive_analyzer_param_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
namespace chrome {
namespace mojom {
const char SafeArchiveAnalyzer::Name_[] = "chrome.mojom.SafeArchiveAnalyzer";

class SafeArchiveAnalyzer_AnalyzeZipFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SafeArchiveAnalyzer_AnalyzeZipFile_ForwardToCallback(
      SafeArchiveAnalyzer::AnalyzeZipFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SafeArchiveAnalyzer::AnalyzeZipFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzer_AnalyzeZipFile_ForwardToCallback);
};

class SafeArchiveAnalyzer_AnalyzeDmgFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SafeArchiveAnalyzer_AnalyzeDmgFile_ForwardToCallback(
      SafeArchiveAnalyzer::AnalyzeDmgFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SafeArchiveAnalyzer::AnalyzeDmgFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzer_AnalyzeDmgFile_ForwardToCallback);
};

class SafeArchiveAnalyzer_AnalyzeRarFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SafeArchiveAnalyzer_AnalyzeRarFile_ForwardToCallback(
      SafeArchiveAnalyzer::AnalyzeRarFileCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SafeArchiveAnalyzer::AnalyzeRarFileCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzer_AnalyzeRarFile_ForwardToCallback);
};

SafeArchiveAnalyzerProxy::SafeArchiveAnalyzerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SafeArchiveAnalyzerProxy::AnalyzeZipFile(
    base::File in_zip_file, base::File in_temporary_file, AnalyzeZipFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::SafeArchiveAnalyzer::AnalyzeZipFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeArchiveAnalyzer_AnalyzeZipFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->zip_file)::BaseType::BufferWriter
      zip_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_zip_file, buffer, &zip_file_writer, &serialization_context);
  params->zip_file.Set(
      zip_file_writer.is_null() ? nullptr : zip_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->zip_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null zip_file in SafeArchiveAnalyzer.AnalyzeZipFile request");
  typename decltype(params->temporary_file)::BaseType::BufferWriter
      temporary_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_temporary_file, buffer, &temporary_file_writer, &serialization_context);
  params->temporary_file.Set(
      temporary_file_writer.is_null() ? nullptr : temporary_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->temporary_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null temporary_file in SafeArchiveAnalyzer.AnalyzeZipFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SafeArchiveAnalyzer_AnalyzeZipFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SafeArchiveAnalyzerProxy::AnalyzeDmgFile(
    base::File in_dmg_file, AnalyzeDmgFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::SafeArchiveAnalyzer::AnalyzeDmgFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeArchiveAnalyzer_AnalyzeDmgFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dmg_file)::BaseType::BufferWriter
      dmg_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_dmg_file, buffer, &dmg_file_writer, &serialization_context);
  params->dmg_file.Set(
      dmg_file_writer.is_null() ? nullptr : dmg_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dmg_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dmg_file in SafeArchiveAnalyzer.AnalyzeDmgFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SafeArchiveAnalyzer_AnalyzeDmgFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void SafeArchiveAnalyzerProxy::AnalyzeRarFile(
    const base::FilePath& in_rar_file, AnalyzeRarFileCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "chrome::mojom::SafeArchiveAnalyzer::AnalyzeRarFile");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeArchiveAnalyzer_AnalyzeRarFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rar_file)::BaseType::BufferWriter
      rar_file_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
      in_rar_file, buffer, &rar_file_writer, &serialization_context);
  params->rar_file.Set(
      rar_file_writer.is_null() ? nullptr : rar_file_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rar_file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rar_file in SafeArchiveAnalyzer.AnalyzeRarFile request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SafeArchiveAnalyzer_AnalyzeRarFile_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder {
 public:
  static SafeArchiveAnalyzer::AnalyzeZipFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder> proxy(
        new SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder() {
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
  SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder(
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
        << "SafeArchiveAnalyzer::AnalyzeZipFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const safe_browsing::ArchiveAnalyzerResults& in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder);
};

bool SafeArchiveAnalyzer_AnalyzeZipFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::SafeArchiveAnalyzer::AnalyzeZipFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  safe_browsing::ArchiveAnalyzerResults p_results{};
  SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SafeArchiveAnalyzer::AnalyzeZipFile response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder::Run(
    const safe_browsing::ArchiveAnalyzerResults& in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeArchiveAnalyzer_AnalyzeZipFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  mojo::internal::Serialize<::chrome::mojom::SafeArchiveAnalyzerResultsDataView>(
      in_results, buffer, &results_writer, &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeZipFileCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder {
 public:
  static SafeArchiveAnalyzer::AnalyzeDmgFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder> proxy(
        new SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder() {
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
  SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder(
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
        << "SafeArchiveAnalyzer::AnalyzeDmgFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const safe_browsing::ArchiveAnalyzerResults& in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder);
};

bool SafeArchiveAnalyzer_AnalyzeDmgFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::SafeArchiveAnalyzer::AnalyzeDmgFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  safe_browsing::ArchiveAnalyzerResults p_results{};
  SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SafeArchiveAnalyzer::AnalyzeDmgFile response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder::Run(
    const safe_browsing::ArchiveAnalyzerResults& in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeArchiveAnalyzer_AnalyzeDmgFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  mojo::internal::Serialize<::chrome::mojom::SafeArchiveAnalyzerResultsDataView>(
      in_results, buffer, &results_writer, &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeDmgFileCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder {
 public:
  static SafeArchiveAnalyzer::AnalyzeRarFileCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder> proxy(
        new SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder() {
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
  SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder(
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
        << "SafeArchiveAnalyzer::AnalyzeRarFileCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const safe_browsing::ArchiveAnalyzerResults& in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder);
};

bool SafeArchiveAnalyzer_AnalyzeRarFile_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "chrome::mojom::SafeArchiveAnalyzer::AnalyzeRarFileCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  safe_browsing::ArchiveAnalyzerResults p_results{};
  SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SafeArchiveAnalyzer::AnalyzeRarFile response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder::Run(
    const safe_browsing::ArchiveAnalyzerResults& in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSafeArchiveAnalyzer_AnalyzeRarFile_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::chrome::mojom::internal::SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  mojo::internal::Serialize<::chrome::mojom::SafeArchiveAnalyzerResultsDataView>(
      in_results, buffer, &results_writer, &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeRarFileCallback",
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
bool SafeArchiveAnalyzerStubDispatch::Accept(
    SafeArchiveAnalyzer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSafeArchiveAnalyzer_AnalyzeZipFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeZipFile",
               "message", message->name());
#endif
      break;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeDmgFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeDmgFile",
               "message", message->name());
#endif
      break;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeRarFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeRarFile",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool SafeArchiveAnalyzerStubDispatch::AcceptWithResponder(
    SafeArchiveAnalyzer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSafeArchiveAnalyzer_AnalyzeZipFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeZipFile",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data* params =
          reinterpret_cast<
              internal::SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_zip_file{};
      base::File p_temporary_file{};
      SafeArchiveAnalyzer_AnalyzeZipFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadZipFile(&p_zip_file))
        success = false;
      if (!input_data_view.ReadTemporaryFile(&p_temporary_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeArchiveAnalyzer::AnalyzeZipFile deserializer");
        return false;
      }
      SafeArchiveAnalyzer::AnalyzeZipFileCallback callback =
          SafeArchiveAnalyzer_AnalyzeZipFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AnalyzeZipFile(
std::move(p_zip_file), 
std::move(p_temporary_file), std::move(callback));
      return true;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeDmgFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeDmgFile",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data* params =
          reinterpret_cast<
              internal::SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::File p_dmg_file{};
      SafeArchiveAnalyzer_AnalyzeDmgFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDmgFile(&p_dmg_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeArchiveAnalyzer::AnalyzeDmgFile deserializer");
        return false;
      }
      SafeArchiveAnalyzer::AnalyzeDmgFileCallback callback =
          SafeArchiveAnalyzer_AnalyzeDmgFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AnalyzeDmgFile(
std::move(p_dmg_file), std::move(callback));
      return true;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeRarFile_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)chrome::mojom::SafeArchiveAnalyzer::AnalyzeRarFile",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data* params =
          reinterpret_cast<
              internal::SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::FilePath p_rar_file{};
      SafeArchiveAnalyzer_AnalyzeRarFile_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRarFile(&p_rar_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SafeArchiveAnalyzer::AnalyzeRarFile deserializer");
        return false;
      }
      SafeArchiveAnalyzer::AnalyzeRarFileCallback callback =
          SafeArchiveAnalyzer_AnalyzeRarFile_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->AnalyzeRarFile(
std::move(p_rar_file), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SafeArchiveAnalyzerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SafeArchiveAnalyzer RequestValidator");

  switch (message->header()->name) {
    case internal::kSafeArchiveAnalyzer_AnalyzeZipFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeArchiveAnalyzer_AnalyzeZipFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeDmgFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeArchiveAnalyzer_AnalyzeDmgFile_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeRarFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeArchiveAnalyzer_AnalyzeRarFile_Params_Data>(
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

bool SafeArchiveAnalyzerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SafeArchiveAnalyzer ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSafeArchiveAnalyzer_AnalyzeZipFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeArchiveAnalyzer_AnalyzeZipFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeDmgFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeArchiveAnalyzer_AnalyzeDmgFile_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSafeArchiveAnalyzer_AnalyzeRarFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SafeArchiveAnalyzer_AnalyzeRarFile_ResponseParams_Data>(
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
void SafeArchiveAnalyzerInterceptorForTesting::AnalyzeZipFile(base::File zip_file, base::File temporary_file, AnalyzeZipFileCallback callback) {
  GetForwardingInterface()->AnalyzeZipFile(std::move(zip_file), std::move(temporary_file), std::move(callback));
}
void SafeArchiveAnalyzerInterceptorForTesting::AnalyzeDmgFile(base::File dmg_file, AnalyzeDmgFileCallback callback) {
  GetForwardingInterface()->AnalyzeDmgFile(std::move(dmg_file), std::move(callback));
}
void SafeArchiveAnalyzerInterceptorForTesting::AnalyzeRarFile(const base::FilePath& rar_file, AnalyzeRarFileCallback callback) {
  GetForwardingInterface()->AnalyzeRarFile(std::move(rar_file), std::move(callback));
}
SafeArchiveAnalyzerAsyncWaiter::SafeArchiveAnalyzerAsyncWaiter(
    SafeArchiveAnalyzer* proxy) : proxy_(proxy) {}

SafeArchiveAnalyzerAsyncWaiter::~SafeArchiveAnalyzerAsyncWaiter() = default;

void SafeArchiveAnalyzerAsyncWaiter::AnalyzeZipFile(
    base::File zip_file, base::File temporary_file, safe_browsing::ArchiveAnalyzerResults* out_results) {
  base::RunLoop loop;
  proxy_->AnalyzeZipFile(std::move(zip_file),std::move(temporary_file),
      base::BindOnce(
          [](base::RunLoop* loop,
             safe_browsing::ArchiveAnalyzerResults* out_results
,
             const safe_browsing::ArchiveAnalyzerResults& results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}
void SafeArchiveAnalyzerAsyncWaiter::AnalyzeDmgFile(
    base::File dmg_file, safe_browsing::ArchiveAnalyzerResults* out_results) {
  base::RunLoop loop;
  proxy_->AnalyzeDmgFile(std::move(dmg_file),
      base::BindOnce(
          [](base::RunLoop* loop,
             safe_browsing::ArchiveAnalyzerResults* out_results
,
             const safe_browsing::ArchiveAnalyzerResults& results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}
void SafeArchiveAnalyzerAsyncWaiter::AnalyzeRarFile(
    const base::FilePath& rar_file, safe_browsing::ArchiveAnalyzerResults* out_results) {
  base::RunLoop loop;
  proxy_->AnalyzeRarFile(std::move(rar_file),
      base::BindOnce(
          [](base::RunLoop* loop,
             safe_browsing::ArchiveAnalyzerResults* out_results
,
             const safe_browsing::ArchiveAnalyzerResults& results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}

}  // namespace mojom
}  // namespace chrome

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif