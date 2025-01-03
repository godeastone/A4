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

#include "chrome/browser/ui/webui/discards/discards.mojom.h"

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

#include "chrome/browser/ui/webui/discards/discards.mojom-shared-message-ids.h"
namespace mojom {
TabDiscardsInfo::TabDiscardsInfo()
    : tab_url(),
      title(),
      visibility(),
      is_media(),
      is_discarded(),
      is_frozen(),
      discard_count(),
      utility_rank(),
      last_active_seconds(),
      id(),
      is_auto_discardable(),
      has_reactivation_score(),
      reactivation_score() {}

TabDiscardsInfo::TabDiscardsInfo(
    const std::string& tab_url_in,
    const std::string& title_in,
    LifecycleUnitVisibility visibility_in,
    bool is_media_in,
    bool is_discarded_in,
    bool is_frozen_in,
    int32_t discard_count_in,
    int32_t utility_rank_in,
    int32_t last_active_seconds_in,
    int32_t id_in,
    bool is_auto_discardable_in,
    bool has_reactivation_score_in,
    double reactivation_score_in)
    : tab_url(std::move(tab_url_in)),
      title(std::move(title_in)),
      visibility(std::move(visibility_in)),
      is_media(std::move(is_media_in)),
      is_discarded(std::move(is_discarded_in)),
      is_frozen(std::move(is_frozen_in)),
      discard_count(std::move(discard_count_in)),
      utility_rank(std::move(utility_rank_in)),
      last_active_seconds(std::move(last_active_seconds_in)),
      id(std::move(id_in)),
      is_auto_discardable(std::move(is_auto_discardable_in)),
      has_reactivation_score(std::move(has_reactivation_score_in)),
      reactivation_score(std::move(reactivation_score_in)) {}

TabDiscardsInfo::~TabDiscardsInfo() = default;
size_t TabDiscardsInfo::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->tab_url);
  seed = mojo::internal::Hash(seed, this->title);
  seed = mojo::internal::Hash(seed, this->visibility);
  seed = mojo::internal::Hash(seed, this->is_media);
  seed = mojo::internal::Hash(seed, this->is_discarded);
  seed = mojo::internal::Hash(seed, this->is_frozen);
  seed = mojo::internal::Hash(seed, this->discard_count);
  seed = mojo::internal::Hash(seed, this->utility_rank);
  seed = mojo::internal::Hash(seed, this->last_active_seconds);
  seed = mojo::internal::Hash(seed, this->id);
  seed = mojo::internal::Hash(seed, this->is_auto_discardable);
  seed = mojo::internal::Hash(seed, this->has_reactivation_score);
  seed = mojo::internal::Hash(seed, this->reactivation_score);
  return seed;
}

bool TabDiscardsInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char DiscardsDetailsProvider::Name_[] = "mojom.DiscardsDetailsProvider";

class DiscardsDetailsProvider_GetTabDiscardsInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscardsDetailsProvider_GetTabDiscardsInfo_ForwardToCallback(
      DiscardsDetailsProvider::GetTabDiscardsInfoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscardsDetailsProvider::GetTabDiscardsInfoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_GetTabDiscardsInfo_ForwardToCallback);
};

class DiscardsDetailsProvider_SetAutoDiscardable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscardsDetailsProvider_SetAutoDiscardable_ForwardToCallback(
      DiscardsDetailsProvider::SetAutoDiscardableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscardsDetailsProvider::SetAutoDiscardableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_SetAutoDiscardable_ForwardToCallback);
};

class DiscardsDetailsProvider_DiscardById_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscardsDetailsProvider_DiscardById_ForwardToCallback(
      DiscardsDetailsProvider::DiscardByIdCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscardsDetailsProvider::DiscardByIdCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_DiscardById_ForwardToCallback);
};

class DiscardsDetailsProvider_Discard_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DiscardsDetailsProvider_Discard_ForwardToCallback(
      DiscardsDetailsProvider::DiscardCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DiscardsDetailsProvider::DiscardCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_Discard_ForwardToCallback);
};

DiscardsDetailsProviderProxy::DiscardsDetailsProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DiscardsDetailsProviderProxy::GetTabDiscardsInfo(
    GetTabDiscardsInfoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::DiscardsDetailsProvider::GetTabDiscardsInfo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_GetTabDiscardsInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscardsDetailsProvider_GetTabDiscardsInfo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DiscardsDetailsProviderProxy::SetAutoDiscardable(
    int32_t in_tab_id, bool in_is_auto_discardable, SetAutoDiscardableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::DiscardsDetailsProvider::SetAutoDiscardable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_SetAutoDiscardable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_SetAutoDiscardable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->tab_id = in_tab_id;
  params->is_auto_discardable = in_is_auto_discardable;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscardsDetailsProvider_SetAutoDiscardable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DiscardsDetailsProviderProxy::DiscardById(
    int32_t in_tab_id, bool in_urgent, DiscardByIdCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::DiscardsDetailsProvider::DiscardById");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_DiscardById_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_DiscardById_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->tab_id = in_tab_id;
  params->urgent = in_urgent;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscardsDetailsProvider_DiscardById_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DiscardsDetailsProviderProxy::FreezeById(
    int32_t in_tab_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::DiscardsDetailsProvider::FreezeById");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_FreezeById_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_FreezeById_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->tab_id = in_tab_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DiscardsDetailsProviderProxy::Discard(
    bool in_urgent, DiscardCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "mojom::DiscardsDetailsProvider::Discard");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_Discard_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_Discard_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->urgent = in_urgent;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new DiscardsDetailsProvider_Discard_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder {
 public:
  static DiscardsDetailsProvider::GetTabDiscardsInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder> proxy(
        new DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder() {
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
  DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder(
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
        << "DiscardsDetailsProvider::GetTabDiscardsInfoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<TabDiscardsInfoPtr> in_infos);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder);
};

bool DiscardsDetailsProvider_GetTabDiscardsInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::DiscardsDetailsProvider::GetTabDiscardsInfoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<TabDiscardsInfoPtr> p_infos{};
  DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadInfos(&p_infos))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DiscardsDetailsProvider::GetTabDiscardsInfo response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_infos));
  return true;
}

void DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder::Run(
    std::vector<TabDiscardsInfoPtr> in_infos) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_GetTabDiscardsInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->infos)::BaseType::BufferWriter
      infos_writer;
  const mojo::internal::ContainerValidateParams infos_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojom::TabDiscardsInfoDataView>>(
      in_infos, buffer, &infos_writer, &infos_validate_params,
      &serialization_context);
  params->infos.Set(
      infos_writer.is_null() ? nullptr : infos_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->infos.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null infos in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::GetTabDiscardsInfoCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder {
 public:
  static DiscardsDetailsProvider::SetAutoDiscardableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder> proxy(
        new DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder() {
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
  DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder(
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
        << "DiscardsDetailsProvider::SetAutoDiscardableCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder);
};

bool DiscardsDetailsProvider_SetAutoDiscardable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::DiscardsDetailsProvider::SetAutoDiscardableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DiscardsDetailsProvider_SetAutoDiscardable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DiscardsDetailsProvider::SetAutoDiscardable response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_SetAutoDiscardable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::SetAutoDiscardableCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DiscardsDetailsProvider_DiscardById_ProxyToResponder {
 public:
  static DiscardsDetailsProvider::DiscardByIdCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscardsDetailsProvider_DiscardById_ProxyToResponder> proxy(
        new DiscardsDetailsProvider_DiscardById_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscardsDetailsProvider_DiscardById_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscardsDetailsProvider_DiscardById_ProxyToResponder() {
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
  DiscardsDetailsProvider_DiscardById_ProxyToResponder(
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
        << "DiscardsDetailsProvider::DiscardByIdCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_DiscardById_ProxyToResponder);
};

bool DiscardsDetailsProvider_DiscardById_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::DiscardsDetailsProvider::DiscardByIdCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscardsDetailsProvider_DiscardById_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscardsDetailsProvider_DiscardById_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DiscardsDetailsProvider_DiscardById_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DiscardsDetailsProvider::DiscardById response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void DiscardsDetailsProvider_DiscardById_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_DiscardById_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_DiscardById_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::DiscardByIdCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class DiscardsDetailsProvider_Discard_ProxyToResponder {
 public:
  static DiscardsDetailsProvider::DiscardCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<DiscardsDetailsProvider_Discard_ProxyToResponder> proxy(
        new DiscardsDetailsProvider_Discard_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&DiscardsDetailsProvider_Discard_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~DiscardsDetailsProvider_Discard_ProxyToResponder() {
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
  DiscardsDetailsProvider_Discard_ProxyToResponder(
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
        << "DiscardsDetailsProvider::DiscardCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(DiscardsDetailsProvider_Discard_ProxyToResponder);
};

bool DiscardsDetailsProvider_Discard_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "mojom::DiscardsDetailsProvider::DiscardCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::DiscardsDetailsProvider_Discard_ResponseParams_Data* params =
      reinterpret_cast<
          internal::DiscardsDetailsProvider_Discard_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  DiscardsDetailsProvider_Discard_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DiscardsDetailsProvider::Discard response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void DiscardsDetailsProvider_Discard_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDiscardsDetailsProvider_Discard_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojom::internal::DiscardsDetailsProvider_Discard_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::DiscardCallback",
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
bool DiscardsDetailsProviderStubDispatch::Accept(
    DiscardsDetailsProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDiscardsDetailsProvider_GetTabDiscardsInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::GetTabDiscardsInfo",
               "message", message->name());
#endif
      break;
    }
    case internal::kDiscardsDetailsProvider_SetAutoDiscardable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::SetAutoDiscardable",
               "message", message->name());
#endif
      break;
    }
    case internal::kDiscardsDetailsProvider_DiscardById_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::DiscardById",
               "message", message->name());
#endif
      break;
    }
    case internal::kDiscardsDetailsProvider_FreezeById_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::FreezeById",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DiscardsDetailsProvider_FreezeById_Params_Data* params =
          reinterpret_cast<internal::DiscardsDetailsProvider_FreezeById_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_tab_id{};
      DiscardsDetailsProvider_FreezeById_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tab_id = input_data_view.tab_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscardsDetailsProvider::FreezeById deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FreezeById(
std::move(p_tab_id));
      return true;
    }
    case internal::kDiscardsDetailsProvider_Discard_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::Discard",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool DiscardsDetailsProviderStubDispatch::AcceptWithResponder(
    DiscardsDetailsProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDiscardsDetailsProvider_GetTabDiscardsInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::GetTabDiscardsInfo",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data* params =
          reinterpret_cast<
              internal::DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DiscardsDetailsProvider_GetTabDiscardsInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscardsDetailsProvider::GetTabDiscardsInfo deserializer");
        return false;
      }
      DiscardsDetailsProvider::GetTabDiscardsInfoCallback callback =
          DiscardsDetailsProvider_GetTabDiscardsInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetTabDiscardsInfo(std::move(callback));
      return true;
    }
    case internal::kDiscardsDetailsProvider_SetAutoDiscardable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::SetAutoDiscardable",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscardsDetailsProvider_SetAutoDiscardable_Params_Data* params =
          reinterpret_cast<
              internal::DiscardsDetailsProvider_SetAutoDiscardable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_tab_id{};
      bool p_is_auto_discardable{};
      DiscardsDetailsProvider_SetAutoDiscardable_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tab_id = input_data_view.tab_id();
      p_is_auto_discardable = input_data_view.is_auto_discardable();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscardsDetailsProvider::SetAutoDiscardable deserializer");
        return false;
      }
      DiscardsDetailsProvider::SetAutoDiscardableCallback callback =
          DiscardsDetailsProvider_SetAutoDiscardable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->SetAutoDiscardable(
std::move(p_tab_id), 
std::move(p_is_auto_discardable), std::move(callback));
      return true;
    }
    case internal::kDiscardsDetailsProvider_DiscardById_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::DiscardById",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscardsDetailsProvider_DiscardById_Params_Data* params =
          reinterpret_cast<
              internal::DiscardsDetailsProvider_DiscardById_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_tab_id{};
      bool p_urgent{};
      DiscardsDetailsProvider_DiscardById_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tab_id = input_data_view.tab_id();
      p_urgent = input_data_view.urgent();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscardsDetailsProvider::DiscardById deserializer");
        return false;
      }
      DiscardsDetailsProvider::DiscardByIdCallback callback =
          DiscardsDetailsProvider_DiscardById_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->DiscardById(
std::move(p_tab_id), 
std::move(p_urgent), std::move(callback));
      return true;
    }
    case internal::kDiscardsDetailsProvider_FreezeById_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::FreezeById",
               "message", message->name());
#endif
      break;
    }
    case internal::kDiscardsDetailsProvider_Discard_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)mojom::DiscardsDetailsProvider::Discard",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::DiscardsDetailsProvider_Discard_Params_Data* params =
          reinterpret_cast<
              internal::DiscardsDetailsProvider_Discard_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_urgent{};
      DiscardsDetailsProvider_Discard_ParamsDataView input_data_view(params, &serialization_context);
      
      p_urgent = input_data_view.urgent();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DiscardsDetailsProvider::Discard deserializer");
        return false;
      }
      DiscardsDetailsProvider::DiscardCallback callback =
          DiscardsDetailsProvider_Discard_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->Discard(
std::move(p_urgent), std::move(callback));
      return true;
    }
  }
  return false;
}

bool DiscardsDetailsProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DiscardsDetailsProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kDiscardsDetailsProvider_GetTabDiscardsInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_GetTabDiscardsInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_SetAutoDiscardable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_SetAutoDiscardable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_DiscardById_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_DiscardById_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_FreezeById_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_FreezeById_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_Discard_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_Discard_Params_Data>(
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

bool DiscardsDetailsProviderResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DiscardsDetailsProvider ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDiscardsDetailsProvider_GetTabDiscardsInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_GetTabDiscardsInfo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_SetAutoDiscardable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_SetAutoDiscardable_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_DiscardById_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_DiscardById_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDiscardsDetailsProvider_Discard_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DiscardsDetailsProvider_Discard_ResponseParams_Data>(
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
void DiscardsDetailsProviderInterceptorForTesting::GetTabDiscardsInfo(GetTabDiscardsInfoCallback callback) {
  GetForwardingInterface()->GetTabDiscardsInfo(std::move(callback));
}
void DiscardsDetailsProviderInterceptorForTesting::SetAutoDiscardable(int32_t tab_id, bool is_auto_discardable, SetAutoDiscardableCallback callback) {
  GetForwardingInterface()->SetAutoDiscardable(std::move(tab_id), std::move(is_auto_discardable), std::move(callback));
}
void DiscardsDetailsProviderInterceptorForTesting::DiscardById(int32_t tab_id, bool urgent, DiscardByIdCallback callback) {
  GetForwardingInterface()->DiscardById(std::move(tab_id), std::move(urgent), std::move(callback));
}
void DiscardsDetailsProviderInterceptorForTesting::FreezeById(int32_t tab_id) {
  GetForwardingInterface()->FreezeById(std::move(tab_id));
}
void DiscardsDetailsProviderInterceptorForTesting::Discard(bool urgent, DiscardCallback callback) {
  GetForwardingInterface()->Discard(std::move(urgent), std::move(callback));
}
DiscardsDetailsProviderAsyncWaiter::DiscardsDetailsProviderAsyncWaiter(
    DiscardsDetailsProvider* proxy) : proxy_(proxy) {}

DiscardsDetailsProviderAsyncWaiter::~DiscardsDetailsProviderAsyncWaiter() = default;

void DiscardsDetailsProviderAsyncWaiter::GetTabDiscardsInfo(
    std::vector<TabDiscardsInfoPtr>* out_infos) {
  base::RunLoop loop;
  proxy_->GetTabDiscardsInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<TabDiscardsInfoPtr>* out_infos
,
             std::vector<TabDiscardsInfoPtr> infos) {*out_infos = std::move(infos);
            loop->Quit();
          },
          &loop,
          out_infos));
  loop.Run();
}
void DiscardsDetailsProviderAsyncWaiter::SetAutoDiscardable(
    int32_t tab_id, bool is_auto_discardable) {
  base::RunLoop loop;
  proxy_->SetAutoDiscardable(std::move(tab_id),std::move(is_auto_discardable),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void DiscardsDetailsProviderAsyncWaiter::DiscardById(
    int32_t tab_id, bool urgent) {
  base::RunLoop loop;
  proxy_->DiscardById(std::move(tab_id),std::move(urgent),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void DiscardsDetailsProviderAsyncWaiter::Discard(
    bool urgent) {
  base::RunLoop loop;
  proxy_->Discard(std::move(urgent),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}

}  // namespace mojom

namespace mojo {


// static
bool StructTraits<::mojom::TabDiscardsInfo::DataView, ::mojom::TabDiscardsInfoPtr>::Read(
    ::mojom::TabDiscardsInfo::DataView input,
    ::mojom::TabDiscardsInfoPtr* output) {
  bool success = true;
  ::mojom::TabDiscardsInfoPtr result(::mojom::TabDiscardsInfo::New());
  
      if (!input.ReadTabUrl(&result->tab_url))
        success = false;
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadVisibility(&result->visibility))
        success = false;
      result->is_media = input.is_media();
      result->is_discarded = input.is_discarded();
      result->is_frozen = input.is_frozen();
      result->discard_count = input.discard_count();
      result->utility_rank = input.utility_rank();
      result->last_active_seconds = input.last_active_seconds();
      result->id = input.id();
      result->is_auto_discardable = input.is_auto_discardable();
      result->has_reactivation_score = input.has_reactivation_score();
      result->reactivation_score = input.reactivation_score();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif