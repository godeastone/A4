// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/data_decoder/public/mojom/json_parser.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace data_decoder {
namespace mojom {
class JsonParser;
using JsonParserPtr = mojo::InterfacePtr<JsonParser>;
using JsonParserPtrInfo = mojo::InterfacePtrInfo<JsonParser>;
using ThreadSafeJsonParserPtr =
    mojo::ThreadSafeInterfacePtr<JsonParser>;
using JsonParserRequest = mojo::InterfaceRequest<JsonParser>;
using JsonParserAssociatedPtr =
    mojo::AssociatedInterfacePtr<JsonParser>;
using ThreadSafeJsonParserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<JsonParser>;
using JsonParserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<JsonParser>;
using JsonParserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<JsonParser>;


class JsonParserProxy;

template <typename ImplRefTraits>
class JsonParserStub;

class JsonParserRequestValidator;
class JsonParserResponseValidator;

class  JsonParser
    : public JsonParserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = JsonParserProxy;

  template <typename ImplRefTraits>
  using Stub_ = JsonParserStub<ImplRefTraits>;

  using RequestValidator_ = JsonParserRequestValidator;
  using ResponseValidator_ = JsonParserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kParseMinVersion = 0,
  };
  virtual ~JsonParser() {}


  using ParseCallback = base::OnceCallback<void(base::Optional<base::Value>, const base::Optional<std::string>&)>;
  virtual void Parse(const std::string& json, ParseCallback callback) = 0;
};
class  JsonParserInterceptorForTesting : public JsonParser {
  virtual JsonParser* GetForwardingInterface() = 0;
  void Parse(const std::string& json, ParseCallback callback) override;
};
class  JsonParserAsyncWaiter {
 public:
  explicit JsonParserAsyncWaiter(JsonParser* proxy);
  ~JsonParserAsyncWaiter();
  void Parse(
      const std::string& json, base::Optional<base::Value>* out_result, base::Optional<std::string>* out_error);

 private:
  JsonParser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(JsonParserAsyncWaiter);
};

class  JsonParserProxy
    : public JsonParser {
 public:
  explicit JsonParserProxy(mojo::MessageReceiverWithResponder* receiver);
  void Parse(const std::string& json, ParseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  JsonParserStubDispatch {
 public:
  static bool Accept(JsonParser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      JsonParser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<JsonParser>>
class JsonParserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  JsonParserStub() {}
  ~JsonParserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return JsonParserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return JsonParserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  JsonParserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  JsonParserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace data_decoder

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_JSON_PARSER_MOJOM_H_