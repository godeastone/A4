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

#include "third_party/blink/public/mojom/frame/find_in_page.mojom.h"

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

#include "third_party/blink/public/mojom/frame/find_in_page.mojom-shared-message-ids.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
namespace blink {
namespace mojom {
const char FindInPage::Name_[] = "blink.mojom.FindInPage";

class FindInPage_GetNearestFindResult_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FindInPage_GetNearestFindResult_ForwardToCallback(
      FindInPage::GetNearestFindResultCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FindInPage::GetNearestFindResultCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FindInPage_GetNearestFindResult_ForwardToCallback);
};

class FindInPage_ActivateNearestFindResult_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FindInPage_ActivateNearestFindResult_ForwardToCallback(
      FindInPage::ActivateNearestFindResultCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FindInPage::ActivateNearestFindResultCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FindInPage_ActivateNearestFindResult_ForwardToCallback);
};

class FindInPage_FindMatchRects_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FindInPage_FindMatchRects_ForwardToCallback(
      FindInPage::FindMatchRectsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FindInPage::FindMatchRectsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FindInPage_FindMatchRects_ForwardToCallback);
};

FindInPageProxy::FindInPageProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FindInPageProxy::StopFinding(
    StopFindAction in_action) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FindInPage::StopFinding");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_StopFinding_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_StopFinding_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::StopFindAction>(
      in_action, &params->action);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::ClearActiveFindMatch(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FindInPage::ClearActiveFindMatch");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_ClearActiveFindMatch_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_ClearActiveFindMatch_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FindInPageProxy::GetNearestFindResult(
    const gfx::PointF& in_point, GetNearestFindResultCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FindInPage::GetNearestFindResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_GetNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_GetNearestFindResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in FindInPage.GetNearestFindResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FindInPage_GetNearestFindResult_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FindInPageProxy::ActivateNearestFindResult(
    const gfx::PointF& in_point, ActivateNearestFindResultCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FindInPage::ActivateNearestFindResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_ActivateNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_ActivateNearestFindResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->point)::BaseType::BufferWriter
      point_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_point, buffer, &point_writer, &serialization_context);
  params->point.Set(
      point_writer.is_null() ? nullptr : point_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->point.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null point in FindInPage.ActivateNearestFindResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FindInPage_ActivateNearestFindResult_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FindInPageProxy::FindMatchRects(
    int32_t in_current_version, FindMatchRectsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "blink::mojom::FindInPage::FindMatchRects");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_FindMatchRects_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_FindMatchRects_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->current_version = in_current_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FindInPage_FindMatchRects_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FindInPage_GetNearestFindResult_ProxyToResponder {
 public:
  static FindInPage::GetNearestFindResultCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FindInPage_GetNearestFindResult_ProxyToResponder> proxy(
        new FindInPage_GetNearestFindResult_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FindInPage_GetNearestFindResult_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FindInPage_GetNearestFindResult_ProxyToResponder() {
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
  FindInPage_GetNearestFindResult_ProxyToResponder(
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
        << "FindInPage::GetNearestFindResultCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      float in_distance);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FindInPage_GetNearestFindResult_ProxyToResponder);
};

bool FindInPage_GetNearestFindResult_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::FindInPage::GetNearestFindResultCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FindInPage_GetNearestFindResult_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FindInPage_GetNearestFindResult_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  float p_distance{};
  FindInPage_GetNearestFindResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_distance = input_data_view.distance();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FindInPage::GetNearestFindResult response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_distance));
  return true;
}

void FindInPage_GetNearestFindResult_ProxyToResponder::Run(
    float in_distance) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_GetNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_GetNearestFindResult_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->distance = in_distance;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::GetNearestFindResultCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FindInPage_ActivateNearestFindResult_ProxyToResponder {
 public:
  static FindInPage::ActivateNearestFindResultCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FindInPage_ActivateNearestFindResult_ProxyToResponder> proxy(
        new FindInPage_ActivateNearestFindResult_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FindInPage_ActivateNearestFindResult_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FindInPage_ActivateNearestFindResult_ProxyToResponder() {
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
  FindInPage_ActivateNearestFindResult_ProxyToResponder(
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
        << "FindInPage::ActivateNearestFindResultCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gfx::Rect& in_active_match_rect, int32_t in_number_of_matches, int32_t in_active_match_ordinal, bool in_final_update);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FindInPage_ActivateNearestFindResult_ProxyToResponder);
};

bool FindInPage_ActivateNearestFindResult_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::FindInPage::ActivateNearestFindResultCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FindInPage_ActivateNearestFindResult_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FindInPage_ActivateNearestFindResult_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gfx::Rect p_active_match_rect{};
  int32_t p_number_of_matches{};
  int32_t p_active_match_ordinal{};
  bool p_final_update{};
  FindInPage_ActivateNearestFindResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadActiveMatchRect(&p_active_match_rect))
    success = false;
  p_number_of_matches = input_data_view.number_of_matches();
  p_active_match_ordinal = input_data_view.active_match_ordinal();
  p_final_update = input_data_view.final_update();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FindInPage::ActivateNearestFindResult response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_active_match_rect), 
std::move(p_number_of_matches), 
std::move(p_active_match_ordinal), 
std::move(p_final_update));
  return true;
}

void FindInPage_ActivateNearestFindResult_ProxyToResponder::Run(
    const gfx::Rect& in_active_match_rect, int32_t in_number_of_matches, int32_t in_active_match_ordinal, bool in_final_update) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_ActivateNearestFindResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_ActivateNearestFindResult_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->active_match_rect)::BaseType::BufferWriter
      active_match_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_active_match_rect, buffer, &active_match_rect_writer, &serialization_context);
  params->active_match_rect.Set(
      active_match_rect_writer.is_null() ? nullptr : active_match_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->active_match_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null active_match_rect in ");
  params->number_of_matches = in_number_of_matches;
  params->active_match_ordinal = in_active_match_ordinal;
  params->final_update = in_final_update;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::ActivateNearestFindResultCallback",
               "message", message.name());
#endif
  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FindInPage_FindMatchRects_ProxyToResponder {
 public:
  static FindInPage::FindMatchRectsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FindInPage_FindMatchRects_ProxyToResponder> proxy(
        new FindInPage_FindMatchRects_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FindInPage_FindMatchRects_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FindInPage_FindMatchRects_ProxyToResponder() {
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
  FindInPage_FindMatchRects_ProxyToResponder(
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
        << "FindInPage::FindMatchRectsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_version, const std::vector<gfx::RectF>& in_rects, const gfx::RectF& in_active_match_rect);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FindInPage_FindMatchRects_ProxyToResponder);
};

bool FindInPage_FindMatchRects_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "blink::mojom::FindInPage::FindMatchRectsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FindInPage_FindMatchRects_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FindInPage_FindMatchRects_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_version{};
  std::vector<gfx::RectF> p_rects{};
  gfx::RectF p_active_match_rect{};
  FindInPage_FindMatchRects_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_version = input_data_view.version();
  if (!input_data_view.ReadRects(&p_rects))
    success = false;
  if (!input_data_view.ReadActiveMatchRect(&p_active_match_rect))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "FindInPage::FindMatchRects response deserializer");
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_version), 
std::move(p_rects), 
std::move(p_active_match_rect));
  return true;
}

void FindInPage_FindMatchRects_ProxyToResponder::Run(
    int32_t in_version, const std::vector<gfx::RectF>& in_rects, const gfx::RectF& in_active_match_rect) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFindInPage_FindMatchRects_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FindInPage_FindMatchRects_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->version = in_version;
  typename decltype(params->rects)::BaseType::BufferWriter
      rects_writer;
  const mojo::internal::ContainerValidateParams rects_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectFDataView>>(
      in_rects, buffer, &rects_writer, &rects_validate_params,
      &serialization_context);
  params->rects.Set(
      rects_writer.is_null() ? nullptr : rects_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rects.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rects in ");
  typename decltype(params->active_match_rect)::BaseType::BufferWriter
      active_match_rect_writer;
  mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
      in_active_match_rect, buffer, &active_match_rect_writer, &serialization_context);
  params->active_match_rect.Set(
      active_match_rect_writer.is_null() ? nullptr : active_match_rect_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->active_match_rect.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null active_match_rect in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::FindMatchRectsCallback",
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
bool FindInPageStubDispatch::Accept(
    FindInPage* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFindInPage_StopFinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::StopFinding",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_StopFinding_Params_Data* params =
          reinterpret_cast<internal::FindInPage_StopFinding_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      StopFindAction p_action{};
      FindInPage_StopFinding_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAction(&p_action))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FindInPage::StopFinding deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->StopFinding(
std::move(p_action));
      return true;
    }
    case internal::kFindInPage_ClearActiveFindMatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::ClearActiveFindMatch",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FindInPage_ClearActiveFindMatch_Params_Data* params =
          reinterpret_cast<internal::FindInPage_ClearActiveFindMatch_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FindInPage_ClearActiveFindMatch_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FindInPage::ClearActiveFindMatch deserializer");
        return false;
      }
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ClearActiveFindMatch();
      return true;
    }
    case internal::kFindInPage_GetNearestFindResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::GetNearestFindResult",
               "message", message->name());
#endif
      break;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::ActivateNearestFindResult",
               "message", message->name());
#endif
      break;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::FindMatchRects",
               "message", message->name());
#endif
      break;
    }
  }
  return false;
}

// static
bool FindInPageStubDispatch::AcceptWithResponder(
    FindInPage* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFindInPage_StopFinding_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::StopFinding",
               "message", message->name());
#endif
      break;
    }
    case internal::kFindInPage_ClearActiveFindMatch_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::ClearActiveFindMatch",
               "message", message->name());
#endif
      break;
    }
    case internal::kFindInPage_GetNearestFindResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::GetNearestFindResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FindInPage_GetNearestFindResult_Params_Data* params =
          reinterpret_cast<
              internal::FindInPage_GetNearestFindResult_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_point{};
      FindInPage_GetNearestFindResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FindInPage::GetNearestFindResult deserializer");
        return false;
      }
      FindInPage::GetNearestFindResultCallback callback =
          FindInPage_GetNearestFindResult_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->GetNearestFindResult(
std::move(p_point), std::move(callback));
      return true;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::ActivateNearestFindResult",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FindInPage_ActivateNearestFindResult_Params_Data* params =
          reinterpret_cast<
              internal::FindInPage_ActivateNearestFindResult_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::PointF p_point{};
      FindInPage_ActivateNearestFindResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPoint(&p_point))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FindInPage::ActivateNearestFindResult deserializer");
        return false;
      }
      FindInPage::ActivateNearestFindResultCallback callback =
          FindInPage_ActivateNearestFindResult_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->ActivateNearestFindResult(
std::move(p_point), std::move(callback));
      return true;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)blink::mojom::FindInPage::FindMatchRects",
               "message", message->name());
#endif
      mojo::internal::MessageDispatchContext context(message);

      internal::FindInPage_FindMatchRects_Params_Data* params =
          reinterpret_cast<
              internal::FindInPage_FindMatchRects_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_current_version{};
      FindInPage_FindMatchRects_ParamsDataView input_data_view(params, &serialization_context);
      
      p_current_version = input_data_view.current_version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "FindInPage::FindMatchRects deserializer");
        return false;
      }
      FindInPage::FindMatchRectsCallback callback =
          FindInPage_FindMatchRects_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      assert(impl);
      impl->FindMatchRects(
std::move(p_current_version), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FindInPageRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FindInPage RequestValidator");

  switch (message->header()->name) {
    case internal::kFindInPage_StopFinding_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_StopFinding_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_ClearActiveFindMatch_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_ClearActiveFindMatch_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_GetNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_GetNearestFindResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_ActivateNearestFindResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_FindMatchRects_Params_Data>(
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

bool FindInPageResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FindInPage ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFindInPage_GetNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_GetNearestFindResult_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_ActivateNearestFindResult_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_ActivateNearestFindResult_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFindInPage_FindMatchRects_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FindInPage_FindMatchRects_ResponseParams_Data>(
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
void FindInPageInterceptorForTesting::StopFinding(StopFindAction action) {
  GetForwardingInterface()->StopFinding(std::move(action));
}
void FindInPageInterceptorForTesting::ClearActiveFindMatch() {
  GetForwardingInterface()->ClearActiveFindMatch();
}
void FindInPageInterceptorForTesting::GetNearestFindResult(const gfx::PointF& point, GetNearestFindResultCallback callback) {
  GetForwardingInterface()->GetNearestFindResult(std::move(point), std::move(callback));
}
void FindInPageInterceptorForTesting::ActivateNearestFindResult(const gfx::PointF& point, ActivateNearestFindResultCallback callback) {
  GetForwardingInterface()->ActivateNearestFindResult(std::move(point), std::move(callback));
}
void FindInPageInterceptorForTesting::FindMatchRects(int32_t current_version, FindMatchRectsCallback callback) {
  GetForwardingInterface()->FindMatchRects(std::move(current_version), std::move(callback));
}
FindInPageAsyncWaiter::FindInPageAsyncWaiter(
    FindInPage* proxy) : proxy_(proxy) {}

FindInPageAsyncWaiter::~FindInPageAsyncWaiter() = default;

void FindInPageAsyncWaiter::GetNearestFindResult(
    const gfx::PointF& point, float* out_distance) {
  base::RunLoop loop;
  proxy_->GetNearestFindResult(std::move(point),
      base::BindOnce(
          [](base::RunLoop* loop,
             float* out_distance
,
             float distance) {*out_distance = std::move(distance);
            loop->Quit();
          },
          &loop,
          out_distance));
  loop.Run();
}
void FindInPageAsyncWaiter::ActivateNearestFindResult(
    const gfx::PointF& point, gfx::Rect* out_active_match_rect, int32_t* out_number_of_matches, int32_t* out_active_match_ordinal, bool* out_final_update) {
  base::RunLoop loop;
  proxy_->ActivateNearestFindResult(std::move(point),
      base::BindOnce(
          [](base::RunLoop* loop,
             gfx::Rect* out_active_match_rect
,
             int32_t* out_number_of_matches
,
             int32_t* out_active_match_ordinal
,
             bool* out_final_update
,
             const gfx::Rect& active_match_rect,
             int32_t number_of_matches,
             int32_t active_match_ordinal,
             bool final_update) {*out_active_match_rect = std::move(active_match_rect);*out_number_of_matches = std::move(number_of_matches);*out_active_match_ordinal = std::move(active_match_ordinal);*out_final_update = std::move(final_update);
            loop->Quit();
          },
          &loop,
          out_active_match_rect,
          out_number_of_matches,
          out_active_match_ordinal,
          out_final_update));
  loop.Run();
}
void FindInPageAsyncWaiter::FindMatchRects(
    int32_t current_version, int32_t* out_version, std::vector<gfx::RectF>* out_rects, gfx::RectF* out_active_match_rect) {
  base::RunLoop loop;
  proxy_->FindMatchRects(std::move(current_version),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_version
,
             std::vector<gfx::RectF>* out_rects
,
             gfx::RectF* out_active_match_rect
,
             int32_t version,
             const std::vector<gfx::RectF>& rects,
             const gfx::RectF& active_match_rect) {*out_version = std::move(version);*out_rects = std::move(rects);*out_active_match_rect = std::move(active_match_rect);
            loop->Quit();
          },
          &loop,
          out_version,
          out_rects,
          out_active_match_rect));
  loop.Run();
}

}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif