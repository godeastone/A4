// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_H_

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
#include "services/data_decoder/public/mojom/xml_parser.mojom-shared.h"
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
class XmlParser;
using XmlParserPtr = mojo::InterfacePtr<XmlParser>;
using XmlParserPtrInfo = mojo::InterfacePtrInfo<XmlParser>;
using ThreadSafeXmlParserPtr =
    mojo::ThreadSafeInterfacePtr<XmlParser>;
using XmlParserRequest = mojo::InterfaceRequest<XmlParser>;
using XmlParserAssociatedPtr =
    mojo::AssociatedInterfacePtr<XmlParser>;
using ThreadSafeXmlParserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XmlParser>;
using XmlParserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XmlParser>;
using XmlParserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XmlParser>;


class XmlParserProxy;

template <typename ImplRefTraits>
class XmlParserStub;

class XmlParserRequestValidator;
class XmlParserResponseValidator;

class  XmlParser
    : public XmlParserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = XmlParserProxy;

  template <typename ImplRefTraits>
  using Stub_ = XmlParserStub<ImplRefTraits>;

  using RequestValidator_ = XmlParserRequestValidator;
  using ResponseValidator_ = XmlParserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kParseMinVersion = 0,
  };
  static const char kTypeKey[];
  static const char kTagKey[];
  static const char kTextKey[];
  static const char kAttributesKey[];
  static const char kChildrenKey[];
  static const char kNamespacesKey[];
  static const char kElementType[];
  static const char kTextNodeType[];
  static const char kCDataNodeType[];
  virtual ~XmlParser() {}


  using ParseCallback = base::OnceCallback<void(base::Optional<base::Value>, const base::Optional<std::string>&)>;
  virtual void Parse(const std::string& xml, ParseCallback callback) = 0;
};
class  XmlParserInterceptorForTesting : public XmlParser {
  virtual XmlParser* GetForwardingInterface() = 0;
  void Parse(const std::string& xml, ParseCallback callback) override;
};
class  XmlParserAsyncWaiter {
 public:
  explicit XmlParserAsyncWaiter(XmlParser* proxy);
  ~XmlParserAsyncWaiter();
  void Parse(
      const std::string& xml, base::Optional<base::Value>* out_result, base::Optional<std::string>* out_error);

 private:
  XmlParser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(XmlParserAsyncWaiter);
};

class  XmlParserProxy
    : public XmlParser {
 public:
  explicit XmlParserProxy(mojo::MessageReceiverWithResponder* receiver);
  void Parse(const std::string& xml, ParseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  XmlParserStubDispatch {
 public:
  static bool Accept(XmlParser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XmlParser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XmlParser>>
class XmlParserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XmlParserStub() {}
  ~XmlParserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XmlParserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XmlParserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  XmlParserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  XmlParserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace data_decoder

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_H_