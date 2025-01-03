// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_CLOUD_PRINT_MOJOM_H_
#define CHROME_COMMON_CLOUD_PRINT_MOJOM_H_

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
#include "chrome/common/cloud_print.mojom-shared.h"
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


namespace cloud_print {
namespace mojom {
class CloudPrint;
using CloudPrintPtr = mojo::InterfacePtr<CloudPrint>;
using CloudPrintPtrInfo = mojo::InterfacePtrInfo<CloudPrint>;
using ThreadSafeCloudPrintPtr =
    mojo::ThreadSafeInterfacePtr<CloudPrint>;
using CloudPrintRequest = mojo::InterfaceRequest<CloudPrint>;
using CloudPrintAssociatedPtr =
    mojo::AssociatedInterfacePtr<CloudPrint>;
using ThreadSafeCloudPrintAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CloudPrint>;
using CloudPrintAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CloudPrint>;
using CloudPrintAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CloudPrint>;


class CloudPrintProxy;

template <typename ImplRefTraits>
class CloudPrintStub;

class CloudPrintRequestValidator;
class CloudPrintResponseValidator;

class  CloudPrint
    : public CloudPrintInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = CloudPrintProxy;

  template <typename ImplRefTraits>
  using Stub_ = CloudPrintStub<ImplRefTraits>;

  using RequestValidator_ = CloudPrintRequestValidator;
  using ResponseValidator_ = CloudPrintResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEnableCloudPrintProxyWithRobotMinVersion = 0,
    kDisableCloudPrintProxyMinVersion = 0,
    kGetCloudPrintProxyInfoMinVersion = 0,
    kGetPrintersMinVersion = 0,
  };
  virtual ~CloudPrint() {}

  virtual void EnableCloudPrintProxyWithRobot(const std::string& robot_auth_code, const std::string& robot_email, const std::string& user_email, base::Value user_settings) = 0;

  virtual void DisableCloudPrintProxy() = 0;


  using GetCloudPrintProxyInfoCallback = base::OnceCallback<void(bool, const std::string&, const std::string&)>;
  virtual void GetCloudPrintProxyInfo(GetCloudPrintProxyInfoCallback callback) = 0;


  using GetPrintersCallback = base::OnceCallback<void(const std::vector<std::string>&)>;
  virtual void GetPrinters(GetPrintersCallback callback) = 0;
};
class  CloudPrintInterceptorForTesting : public CloudPrint {
  virtual CloudPrint* GetForwardingInterface() = 0;
  void EnableCloudPrintProxyWithRobot(const std::string& robot_auth_code, const std::string& robot_email, const std::string& user_email, base::Value user_settings) override;
  void DisableCloudPrintProxy() override;
  void GetCloudPrintProxyInfo(GetCloudPrintProxyInfoCallback callback) override;
  void GetPrinters(GetPrintersCallback callback) override;
};
class  CloudPrintAsyncWaiter {
 public:
  explicit CloudPrintAsyncWaiter(CloudPrint* proxy);
  ~CloudPrintAsyncWaiter();
  void GetCloudPrintProxyInfo(
      bool* out_enabled, std::string* out_email, std::string* out_proxy_id);
  void GetPrinters(
      std::vector<std::string>* out_printers);

 private:
  CloudPrint* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CloudPrintAsyncWaiter);
};

class  CloudPrintProxy
    : public CloudPrint {
 public:
  explicit CloudPrintProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnableCloudPrintProxyWithRobot(const std::string& robot_auth_code, const std::string& robot_email, const std::string& user_email, base::Value user_settings) final;
  void DisableCloudPrintProxy() final;
  void GetCloudPrintProxyInfo(GetCloudPrintProxyInfoCallback callback) final;
  void GetPrinters(GetPrintersCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CloudPrintStubDispatch {
 public:
  static bool Accept(CloudPrint* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CloudPrint* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CloudPrint>>
class CloudPrintStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CloudPrintStub() {}
  ~CloudPrintStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CloudPrintStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CloudPrintStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CloudPrintRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CloudPrintResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace cloud_print

namespace mojo {

}  // namespace mojo

#endif  // CHROME_COMMON_CLOUD_PRINT_MOJOM_H_