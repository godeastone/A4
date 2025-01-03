// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_PLUGIN_MOJOM_H_
#define CHROME_COMMON_PLUGIN_MOJOM_H_

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
#include "chrome/common/plugin.mojom-shared.h"
#include "content/public/common/webplugininfo.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
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


namespace chrome {
namespace mojom {
class PluginHost;
using PluginHostPtr = mojo::InterfacePtr<PluginHost>;
using PluginHostPtrInfo = mojo::InterfacePtrInfo<PluginHost>;
using ThreadSafePluginHostPtr =
    mojo::ThreadSafeInterfacePtr<PluginHost>;
using PluginHostRequest = mojo::InterfaceRequest<PluginHost>;
using PluginHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<PluginHost>;
using ThreadSafePluginHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PluginHost>;
using PluginHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PluginHost>;
using PluginHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PluginHost>;

class PluginAuthHost;
using PluginAuthHostPtr = mojo::InterfacePtr<PluginAuthHost>;
using PluginAuthHostPtrInfo = mojo::InterfacePtrInfo<PluginAuthHost>;
using ThreadSafePluginAuthHostPtr =
    mojo::ThreadSafeInterfacePtr<PluginAuthHost>;
using PluginAuthHostRequest = mojo::InterfaceRequest<PluginAuthHost>;
using PluginAuthHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<PluginAuthHost>;
using ThreadSafePluginAuthHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PluginAuthHost>;
using PluginAuthHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PluginAuthHost>;
using PluginAuthHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PluginAuthHost>;

class PluginInfoHost;
using PluginInfoHostPtr = mojo::InterfacePtr<PluginInfoHost>;
using PluginInfoHostPtrInfo = mojo::InterfacePtrInfo<PluginInfoHost>;
using ThreadSafePluginInfoHostPtr =
    mojo::ThreadSafeInterfacePtr<PluginInfoHost>;
using PluginInfoHostRequest = mojo::InterfaceRequest<PluginInfoHost>;
using PluginInfoHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<PluginInfoHost>;
using ThreadSafePluginInfoHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PluginInfoHost>;
using PluginInfoHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PluginInfoHost>;
using PluginInfoHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PluginInfoHost>;

class PluginRenderer;
using PluginRendererPtr = mojo::InterfacePtr<PluginRenderer>;
using PluginRendererPtrInfo = mojo::InterfacePtrInfo<PluginRenderer>;
using ThreadSafePluginRendererPtr =
    mojo::ThreadSafeInterfacePtr<PluginRenderer>;
using PluginRendererRequest = mojo::InterfaceRequest<PluginRenderer>;
using PluginRendererAssociatedPtr =
    mojo::AssociatedInterfacePtr<PluginRenderer>;
using ThreadSafePluginRendererAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PluginRenderer>;
using PluginRendererAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PluginRenderer>;
using PluginRendererAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PluginRenderer>;

class PluginInfo;
using PluginInfoPtr = mojo::StructPtr<PluginInfo>;

class PluginParam;
using PluginParamPtr = mojo::StructPtr<PluginParam>;


class PluginHostProxy;

template <typename ImplRefTraits>
class PluginHostStub;

class PluginHostRequestValidator;

class  PluginHost
    : public PluginHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PluginHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PluginHostStub<ImplRefTraits>;

  using RequestValidator_ = PluginHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kShowFlashPermissionBubbleMinVersion = 0,
    kCouldNotLoadPluginMinVersion = 0,
    kBlockedOutdatedPluginMinVersion = 0,
    kBlockedComponentUpdatedPluginMinVersion = 0,
  };
  virtual ~PluginHost() {}

  virtual void ShowFlashPermissionBubble() = 0;

  virtual void CouldNotLoadPlugin(const base::FilePath& file_path) = 0;

  virtual void BlockedOutdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) = 0;

  virtual void BlockedComponentUpdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) = 0;
};
class  PluginHostInterceptorForTesting : public PluginHost {
  virtual PluginHost* GetForwardingInterface() = 0;
  void ShowFlashPermissionBubble() override;
  void CouldNotLoadPlugin(const base::FilePath& file_path) override;
  void BlockedOutdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) override;
  void BlockedComponentUpdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) override;
};
class  PluginHostAsyncWaiter {
 public:
  explicit PluginHostAsyncWaiter(PluginHost* proxy);
  ~PluginHostAsyncWaiter();

 private:
  PluginHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PluginHostAsyncWaiter);
};

class PluginAuthHostProxy;

template <typename ImplRefTraits>
class PluginAuthHostStub;

class PluginAuthHostRequestValidator;

class  PluginAuthHost
    : public PluginAuthHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PluginAuthHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PluginAuthHostStub<ImplRefTraits>;

  using RequestValidator_ = PluginAuthHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBlockedUnauthorizedPluginMinVersion = 0,
  };
  virtual ~PluginAuthHost() {}

  virtual void BlockedUnauthorizedPlugin(const base::string16& name, const std::string& group_id) = 0;
};
class  PluginAuthHostInterceptorForTesting : public PluginAuthHost {
  virtual PluginAuthHost* GetForwardingInterface() = 0;
  void BlockedUnauthorizedPlugin(const base::string16& name, const std::string& group_id) override;
};
class  PluginAuthHostAsyncWaiter {
 public:
  explicit PluginAuthHostAsyncWaiter(PluginAuthHost* proxy);
  ~PluginAuthHostAsyncWaiter();

 private:
  PluginAuthHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PluginAuthHostAsyncWaiter);
};

class PluginInfoHostProxy;

template <typename ImplRefTraits>
class PluginInfoHostStub;

class PluginInfoHostRequestValidator;
class PluginInfoHostResponseValidator;

class  PluginInfoHost
    : public PluginInfoHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Proxy_ = PluginInfoHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PluginInfoHostStub<ImplRefTraits>;

  using RequestValidator_ = PluginInfoHostRequestValidator;
  using ResponseValidator_ = PluginInfoHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPluginInfoMinVersion = 0,
  };
  virtual ~PluginInfoHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, PluginInfoPtr* out_plugin_info);

  using GetPluginInfoCallback = base::Callback<void(PluginInfoPtr)>;
  virtual void GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, const GetPluginInfoCallback& callback) = 0;
};
class  PluginInfoHostInterceptorForTesting : public PluginInfoHost {
  virtual PluginInfoHost* GetForwardingInterface() = 0;
  void GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, const GetPluginInfoCallback& callback) override;
};
class  PluginInfoHostAsyncWaiter {
 public:
  explicit PluginInfoHostAsyncWaiter(PluginInfoHost* proxy);
  ~PluginInfoHostAsyncWaiter();
  void GetPluginInfo(
      int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, PluginInfoPtr* out_plugin_info);

 private:
  PluginInfoHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PluginInfoHostAsyncWaiter);
};

class PluginRendererProxy;

template <typename ImplRefTraits>
class PluginRendererStub;

class PluginRendererRequestValidator;

class  PluginRenderer
    : public PluginRendererInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PluginRendererProxy;

  template <typename ImplRefTraits>
  using Stub_ = PluginRendererStub<ImplRefTraits>;

  using RequestValidator_ = PluginRendererRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFinishedDownloadingMinVersion = 0,
    kUpdateSuccessMinVersion = 0,
    kUpdateFailureMinVersion = 0,
    kUpdateDownloadingMinVersion = 0,
  };
  virtual ~PluginRenderer() {}

  virtual void FinishedDownloading() = 0;

  virtual void UpdateSuccess() = 0;

  virtual void UpdateFailure() = 0;

  virtual void UpdateDownloading() = 0;
};
class  PluginRendererInterceptorForTesting : public PluginRenderer {
  virtual PluginRenderer* GetForwardingInterface() = 0;
  void FinishedDownloading() override;
  void UpdateSuccess() override;
  void UpdateFailure() override;
  void UpdateDownloading() override;
};
class  PluginRendererAsyncWaiter {
 public:
  explicit PluginRendererAsyncWaiter(PluginRenderer* proxy);
  ~PluginRendererAsyncWaiter();

 private:
  PluginRenderer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PluginRendererAsyncWaiter);
};

class  PluginHostProxy
    : public PluginHost {
 public:
  explicit PluginHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void ShowFlashPermissionBubble() final;
  void CouldNotLoadPlugin(const base::FilePath& file_path) final;
  void BlockedOutdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) final;
  void BlockedComponentUpdatedPlugin(PluginRendererPtr plugin_renderer, const std::string& group_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PluginAuthHostProxy
    : public PluginAuthHost {
 public:
  explicit PluginAuthHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void BlockedUnauthorizedPlugin(const base::string16& name, const std::string& group_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PluginInfoHostProxy
    : public PluginInfoHost {
 public:
  explicit PluginInfoHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, PluginInfoPtr* out_plugin_info) final;
  void GetPluginInfo(int32_t render_frame_id, const GURL& url, const url::Origin& origin, const std::string& mime_type, const GetPluginInfoCallback& callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PluginRendererProxy
    : public PluginRenderer {
 public:
  explicit PluginRendererProxy(mojo::MessageReceiverWithResponder* receiver);
  void FinishedDownloading() final;
  void UpdateSuccess() final;
  void UpdateFailure() final;
  void UpdateDownloading() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PluginHostStubDispatch {
 public:
  static bool Accept(PluginHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PluginHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PluginHost>>
class PluginHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PluginHostStub() {}
  ~PluginHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PluginAuthHostStubDispatch {
 public:
  static bool Accept(PluginAuthHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PluginAuthHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PluginAuthHost>>
class PluginAuthHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PluginAuthHostStub() {}
  ~PluginAuthHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginAuthHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginAuthHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PluginInfoHostStubDispatch {
 public:
  static bool Accept(PluginInfoHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PluginInfoHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PluginInfoHost>>
class PluginInfoHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PluginInfoHostStub() {}
  ~PluginInfoHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginInfoHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginInfoHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PluginRendererStubDispatch {
 public:
  static bool Accept(PluginRenderer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PluginRenderer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PluginRenderer>>
class PluginRendererStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PluginRendererStub() {}
  ~PluginRendererStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginRendererStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PluginRendererStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PluginHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PluginAuthHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PluginInfoHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PluginRendererRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PluginInfoHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  PluginInfo {
 public:
  using DataView = PluginInfoDataView;
  using Data_ = internal::PluginInfo_Data;

  template <typename... Args>
  static PluginInfoPtr New(Args&&... args) {
    return PluginInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PluginInfoPtr From(const U& u) {
    return mojo::TypeConverter<PluginInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PluginInfo>::Convert(*this);
  }


  PluginInfo();

  PluginInfo(
      PluginStatus status,
      const content::WebPluginInfo& plugin,
      const std::string& actual_mime_type,
      const std::string& group_identifier,
      const base::string16& group_name);

  ~PluginInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PluginInfoPtr>
  PluginInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PluginInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PluginInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PluginInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PluginInfo_UnserializedMessageContext<
            UserType, PluginInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PluginInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PluginInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PluginInfo_UnserializedMessageContext<
            UserType, PluginInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PluginInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  PluginStatus status;
  content::WebPluginInfo plugin;
  std::string actual_mime_type;
  std::string group_identifier;
  base::string16 group_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class  PluginParam {
 public:
  using DataView = PluginParamDataView;
  using Data_ = internal::PluginParam_Data;

  template <typename... Args>
  static PluginParamPtr New(Args&&... args) {
    return PluginParamPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PluginParamPtr From(const U& u) {
    return mojo::TypeConverter<PluginParamPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PluginParam>::Convert(*this);
  }


  PluginParam();

  PluginParam(
      const base::string16& name,
      const base::string16& value);

  ~PluginParam();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PluginParamPtr>
  PluginParamPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PluginParam>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PluginParam::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PluginParam::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PluginParam_UnserializedMessageContext<
            UserType, PluginParam::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PluginParam::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PluginParam::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PluginParam_UnserializedMessageContext<
            UserType, PluginParam::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PluginParam::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  base::string16 name;
  base::string16 value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PluginInfoPtr PluginInfo::Clone() const {
  return New(
      mojo::Clone(status),
      mojo::Clone(plugin),
      mojo::Clone(actual_mime_type),
      mojo::Clone(group_identifier),
      mojo::Clone(group_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PluginInfo>::value>::type*>
bool PluginInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->plugin, other_struct.plugin))
    return false;
  if (!mojo::Equals(this->actual_mime_type, other_struct.actual_mime_type))
    return false;
  if (!mojo::Equals(this->group_identifier, other_struct.group_identifier))
    return false;
  if (!mojo::Equals(this->group_name, other_struct.group_name))
    return false;
  return true;
}
template <typename StructPtrType>
PluginParamPtr PluginParam::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PluginParam>::value>::type*>
bool PluginParam::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace chrome

namespace mojo {


template <>
struct  StructTraits<::chrome::mojom::PluginInfo::DataView,
                                         ::chrome::mojom::PluginInfoPtr> {
  static bool IsNull(const ::chrome::mojom::PluginInfoPtr& input) { return !input; }
  static void SetToNull(::chrome::mojom::PluginInfoPtr* output) { output->reset(); }

  static decltype(::chrome::mojom::PluginInfo::status) status(
      const ::chrome::mojom::PluginInfoPtr& input) {
    return input->status;
  }

  static const decltype(::chrome::mojom::PluginInfo::plugin)& plugin(
      const ::chrome::mojom::PluginInfoPtr& input) {
    return input->plugin;
  }

  static const decltype(::chrome::mojom::PluginInfo::actual_mime_type)& actual_mime_type(
      const ::chrome::mojom::PluginInfoPtr& input) {
    return input->actual_mime_type;
  }

  static const decltype(::chrome::mojom::PluginInfo::group_identifier)& group_identifier(
      const ::chrome::mojom::PluginInfoPtr& input) {
    return input->group_identifier;
  }

  static const decltype(::chrome::mojom::PluginInfo::group_name)& group_name(
      const ::chrome::mojom::PluginInfoPtr& input) {
    return input->group_name;
  }

  static bool Read(::chrome::mojom::PluginInfo::DataView input, ::chrome::mojom::PluginInfoPtr* output);
};


template <>
struct  StructTraits<::chrome::mojom::PluginParam::DataView,
                                         ::chrome::mojom::PluginParamPtr> {
  static bool IsNull(const ::chrome::mojom::PluginParamPtr& input) { return !input; }
  static void SetToNull(::chrome::mojom::PluginParamPtr* output) { output->reset(); }

  static const decltype(::chrome::mojom::PluginParam::name)& name(
      const ::chrome::mojom::PluginParamPtr& input) {
    return input->name;
  }

  static const decltype(::chrome::mojom::PluginParam::value)& value(
      const ::chrome::mojom::PluginParamPtr& input) {
    return input->value;
  }

  static bool Read(::chrome::mojom::PluginParam::DataView input, ::chrome::mojom::PluginParamPtr* output);
};

}  // namespace mojo

#endif  // CHROME_COMMON_PLUGIN_MOJOM_H_