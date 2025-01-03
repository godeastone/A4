// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_RENDERER_MOJOM_H_
#define CONTENT_COMMON_RENDERER_MOJOM_H_

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
#include "content/common/renderer.mojom-shared.h"
#include "content/common/native_types.mojom.h"
#include "content/common/service_worker/embedded_worker.mojom.h"
#include "ipc/constants.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/network_types.mojom.h"
#include "services/service_manager/public/mojom/interface_provider.mojom.h"
#include "services/service_manager/public/mojom/service.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/icc_profile.mojom.h"
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
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class Renderer;
using RendererPtr = mojo::InterfacePtr<Renderer>;
using RendererPtrInfo = mojo::InterfacePtrInfo<Renderer>;
using ThreadSafeRendererPtr =
    mojo::ThreadSafeInterfacePtr<Renderer>;
using RendererRequest = mojo::InterfaceRequest<Renderer>;
using RendererAssociatedPtr =
    mojo::AssociatedInterfacePtr<Renderer>;
using ThreadSafeRendererAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Renderer>;
using RendererAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Renderer>;
using RendererAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Renderer>;

class CreateViewParams;
using CreateViewParamsPtr = mojo::StructPtr<CreateViewParams>;

class CreateFrameWidgetParams;
using CreateFrameWidgetParamsPtr = mojo::InlinedStructPtr<CreateFrameWidgetParams>;

class CreateFrameParams;
using CreateFrameParamsPtr = mojo::StructPtr<CreateFrameParams>;

class UpdateScrollbarThemeParams;
using UpdateScrollbarThemeParamsPtr = mojo::StructPtr<UpdateScrollbarThemeParams>;


class RendererProxy;

template <typename ImplRefTraits>
class RendererStub;

class RendererRequestValidator;

class CONTENT_EXPORT Renderer
    : public RendererInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = RendererProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererStub<ImplRefTraits>;

  using RequestValidator_ = RendererRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateEmbedderRendererServiceMinVersion = 0,
    kCreateViewMinVersion = 0,
    kCreateFrameMinVersion = 0,
    kCreateFrameProxyMinVersion = 0,
    kSetUpEmbeddedWorkerChannelForServiceWorkerMinVersion = 0,
    kOnNetworkConnectionChangedMinVersion = 0,
    kOnNetworkQualityChangedMinVersion = 0,
    kSetWebKitSharedTimersSuspendedMinVersion = 0,
    kSetUserAgentMinVersion = 0,
    kUpdateScrollbarThemeMinVersion = 0,
    kOnSystemColorsChangedMinVersion = 0,
    kPurgePluginListCacheMinVersion = 0,
    kSetProcessBackgroundedMinVersion = 0,
    kSetSchedulerKeepActiveMinVersion = 0,
    kProcessPurgeAndSuspendMinVersion = 0,
  };
  virtual ~Renderer() {}

  virtual void CreateEmbedderRendererService(::service_manager::mojom::ServiceRequest service_request) = 0;

  virtual void CreateView(CreateViewParamsPtr params) = 0;

  virtual void CreateFrame(CreateFrameParamsPtr params) = 0;

  virtual void CreateFrameProxy(int32_t routing_id, int32_t render_view_routing_id, int32_t opener_routing_id, int32_t parent_routing_id, const content::FrameReplicationState& replication_state, const base::UnguessableToken& devtools_frame_token) = 0;

  virtual void SetUpEmbeddedWorkerChannelForServiceWorker(::content::mojom::EmbeddedWorkerInstanceClientRequest client_request) = 0;

  virtual void OnNetworkConnectionChanged(net::NetworkChangeNotifier::ConnectionType connection_type, double max_bandwidth_mbps) = 0;

  virtual void OnNetworkQualityChanged(net::EffectiveConnectionType effective_connection_type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, double bandwidth_kbps) = 0;

  virtual void SetWebKitSharedTimersSuspended(bool suspend) = 0;

  virtual void SetUserAgent(const std::string& user_agent) = 0;

  virtual void UpdateScrollbarTheme(UpdateScrollbarThemeParamsPtr params) = 0;

  virtual void OnSystemColorsChanged(int32_t aqua_color_variant, const std::string& highlight_text_color, const std::string& highlight_color) = 0;

  virtual void PurgePluginListCache(bool reload_pages) = 0;

  virtual void SetProcessBackgrounded(bool background) = 0;

  virtual void SetSchedulerKeepActive(bool keep_active) = 0;

  virtual void ProcessPurgeAndSuspend() = 0;
};
class CONTENT_EXPORT RendererInterceptorForTesting : public Renderer {
  virtual Renderer* GetForwardingInterface() = 0;
  void CreateEmbedderRendererService(::service_manager::mojom::ServiceRequest service_request) override;
  void CreateView(CreateViewParamsPtr params) override;
  void CreateFrame(CreateFrameParamsPtr params) override;
  void CreateFrameProxy(int32_t routing_id, int32_t render_view_routing_id, int32_t opener_routing_id, int32_t parent_routing_id, const content::FrameReplicationState& replication_state, const base::UnguessableToken& devtools_frame_token) override;
  void SetUpEmbeddedWorkerChannelForServiceWorker(::content::mojom::EmbeddedWorkerInstanceClientRequest client_request) override;
  void OnNetworkConnectionChanged(net::NetworkChangeNotifier::ConnectionType connection_type, double max_bandwidth_mbps) override;
  void OnNetworkQualityChanged(net::EffectiveConnectionType effective_connection_type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, double bandwidth_kbps) override;
  void SetWebKitSharedTimersSuspended(bool suspend) override;
  void SetUserAgent(const std::string& user_agent) override;
  void UpdateScrollbarTheme(UpdateScrollbarThemeParamsPtr params) override;
  void OnSystemColorsChanged(int32_t aqua_color_variant, const std::string& highlight_text_color, const std::string& highlight_color) override;
  void PurgePluginListCache(bool reload_pages) override;
  void SetProcessBackgrounded(bool background) override;
  void SetSchedulerKeepActive(bool keep_active) override;
  void ProcessPurgeAndSuspend() override;
};
class CONTENT_EXPORT RendererAsyncWaiter {
 public:
  explicit RendererAsyncWaiter(Renderer* proxy);
  ~RendererAsyncWaiter();

 private:
  Renderer* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RendererAsyncWaiter);
};

class CONTENT_EXPORT RendererProxy
    : public Renderer {
 public:
  explicit RendererProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateEmbedderRendererService(::service_manager::mojom::ServiceRequest service_request) final;
  void CreateView(CreateViewParamsPtr params) final;
  void CreateFrame(CreateFrameParamsPtr params) final;
  void CreateFrameProxy(int32_t routing_id, int32_t render_view_routing_id, int32_t opener_routing_id, int32_t parent_routing_id, const content::FrameReplicationState& replication_state, const base::UnguessableToken& devtools_frame_token) final;
  void SetUpEmbeddedWorkerChannelForServiceWorker(::content::mojom::EmbeddedWorkerInstanceClientRequest client_request) final;
  void OnNetworkConnectionChanged(net::NetworkChangeNotifier::ConnectionType connection_type, double max_bandwidth_mbps) final;
  void OnNetworkQualityChanged(net::EffectiveConnectionType effective_connection_type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, double bandwidth_kbps) final;
  void SetWebKitSharedTimersSuspended(bool suspend) final;
  void SetUserAgent(const std::string& user_agent) final;
  void UpdateScrollbarTheme(UpdateScrollbarThemeParamsPtr params) final;
  void OnSystemColorsChanged(int32_t aqua_color_variant, const std::string& highlight_text_color, const std::string& highlight_color) final;
  void PurgePluginListCache(bool reload_pages) final;
  void SetProcessBackgrounded(bool background) final;
  void SetSchedulerKeepActive(bool keep_active) final;
  void ProcessPurgeAndSuspend() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT RendererStubDispatch {
 public:
  static bool Accept(Renderer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Renderer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Renderer>>
class RendererStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererStub() {}
  ~RendererStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT RendererRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



class CONTENT_EXPORT CreateFrameWidgetParams {
 public:
  using DataView = CreateFrameWidgetParamsDataView;
  using Data_ = internal::CreateFrameWidgetParams_Data;

  template <typename... Args>
  static CreateFrameWidgetParamsPtr New(Args&&... args) {
    return CreateFrameWidgetParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CreateFrameWidgetParamsPtr From(const U& u) {
    return mojo::TypeConverter<CreateFrameWidgetParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CreateFrameWidgetParams>::Convert(*this);
  }


  CreateFrameWidgetParams();

  CreateFrameWidgetParams(
      int32_t routing_id,
      bool hidden);

  ~CreateFrameWidgetParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CreateFrameWidgetParamsPtr>
  CreateFrameWidgetParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CreateFrameWidgetParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CreateFrameWidgetParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CreateFrameWidgetParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CreateFrameWidgetParams_UnserializedMessageContext<
            UserType, CreateFrameWidgetParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CreateFrameWidgetParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CreateFrameWidgetParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CreateFrameWidgetParams_UnserializedMessageContext<
            UserType, CreateFrameWidgetParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CreateFrameWidgetParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t routing_id;
  bool hidden;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class CONTENT_EXPORT CreateViewParams {
 public:
  using DataView = CreateViewParamsDataView;
  using Data_ = internal::CreateViewParams_Data;

  template <typename... Args>
  static CreateViewParamsPtr New(Args&&... args) {
    return CreateViewParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CreateViewParamsPtr From(const U& u) {
    return mojo::TypeConverter<CreateViewParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CreateViewParams>::Convert(*this);
  }


  CreateViewParams();

  CreateViewParams(
      const content::RendererPreferences& renderer_preferences,
      const content::WebPreferences& web_preferences,
      int32_t view_id,
      int32_t main_frame_routing_id,
      ::service_manager::mojom::InterfaceProviderPtrInfo main_frame_interface_provider,
      int32_t main_frame_widget_routing_id,
      const std::string& session_storage_namespace_id,
      int32_t opener_frame_route_id,
      bool swapped_out,
      const content::FrameReplicationState& replicated_frame_state,
      const base::UnguessableToken& devtools_main_frame_token,
      int32_t proxy_routing_id,
      bool hidden,
      bool never_visible,
      bool window_was_created_with_opener,
      bool has_committed_real_load,
      const content::VisualProperties& visual_properties,
      double page_zoom_level,
      bool renderer_wide_named_frame_lookup);

  ~CreateViewParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CreateViewParamsPtr>
  CreateViewParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CreateViewParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CreateViewParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CreateViewParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CreateViewParams_UnserializedMessageContext<
            UserType, CreateViewParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CreateViewParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CreateViewParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CreateViewParams_UnserializedMessageContext<
            UserType, CreateViewParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CreateViewParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  content::RendererPreferences renderer_preferences;
  content::WebPreferences web_preferences;
  int32_t view_id;
  int32_t main_frame_routing_id;
  ::service_manager::mojom::InterfaceProviderPtrInfo main_frame_interface_provider;
  int32_t main_frame_widget_routing_id;
  std::string session_storage_namespace_id;
  int32_t opener_frame_route_id;
  bool swapped_out;
  content::FrameReplicationState replicated_frame_state;
  base::UnguessableToken devtools_main_frame_token;
  int32_t proxy_routing_id;
  bool hidden;
  bool never_visible;
  bool window_was_created_with_opener;
  bool has_committed_real_load;
  content::VisualProperties visual_properties;
  double page_zoom_level;
  bool renderer_wide_named_frame_lookup;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CreateViewParams);
};



class CONTENT_EXPORT CreateFrameParams {
 public:
  using DataView = CreateFrameParamsDataView;
  using Data_ = internal::CreateFrameParams_Data;

  template <typename... Args>
  static CreateFrameParamsPtr New(Args&&... args) {
    return CreateFrameParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CreateFrameParamsPtr From(const U& u) {
    return mojo::TypeConverter<CreateFrameParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CreateFrameParams>::Convert(*this);
  }


  CreateFrameParams();

  CreateFrameParams(
      int32_t routing_id,
      int32_t proxy_routing_id,
      int32_t opener_routing_id,
      int32_t parent_routing_id,
      int32_t previous_sibling_routing_id,
      ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider,
      const content::FrameReplicationState& replication_state,
      const base::UnguessableToken& devtools_frame_token,
      const content::FrameOwnerProperties& frame_owner_properties,
      CreateFrameWidgetParamsPtr widget_params,
      bool has_committed_real_load);

  ~CreateFrameParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CreateFrameParamsPtr>
  CreateFrameParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CreateFrameParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CreateFrameParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CreateFrameParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CreateFrameParams_UnserializedMessageContext<
            UserType, CreateFrameParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CreateFrameParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CreateFrameParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CreateFrameParams_UnserializedMessageContext<
            UserType, CreateFrameParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CreateFrameParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  int32_t routing_id;
  int32_t proxy_routing_id;
  int32_t opener_routing_id;
  int32_t parent_routing_id;
  int32_t previous_sibling_routing_id;
  ::service_manager::mojom::InterfaceProviderPtrInfo interface_provider;
  content::FrameReplicationState replication_state;
  base::UnguessableToken devtools_frame_token;
  content::FrameOwnerProperties frame_owner_properties;
  CreateFrameWidgetParamsPtr widget_params;
  bool has_committed_real_load;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CreateFrameParams);
};


class CONTENT_EXPORT UpdateScrollbarThemeParams {
 public:
  using DataView = UpdateScrollbarThemeParamsDataView;
  using Data_ = internal::UpdateScrollbarThemeParams_Data;

  template <typename... Args>
  static UpdateScrollbarThemeParamsPtr New(Args&&... args) {
    return UpdateScrollbarThemeParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UpdateScrollbarThemeParamsPtr From(const U& u) {
    return mojo::TypeConverter<UpdateScrollbarThemeParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UpdateScrollbarThemeParams>::Convert(*this);
  }


  UpdateScrollbarThemeParams();

  UpdateScrollbarThemeParams(
      float initial_button_delay,
      float autoscroll_button_delay,
      bool jump_on_track_click,
      ::content::mojom::ScrollerStyle preferred_scroller_style,
      bool redraw,
      ::content::mojom::ScrollbarButtonsPlacement button_placement,
      bool scroll_view_rubber_banding);

  ~UpdateScrollbarThemeParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UpdateScrollbarThemeParamsPtr>
  UpdateScrollbarThemeParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UpdateScrollbarThemeParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UpdateScrollbarThemeParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UpdateScrollbarThemeParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UpdateScrollbarThemeParams_UnserializedMessageContext<
            UserType, UpdateScrollbarThemeParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UpdateScrollbarThemeParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UpdateScrollbarThemeParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UpdateScrollbarThemeParams_UnserializedMessageContext<
            UserType, UpdateScrollbarThemeParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UpdateScrollbarThemeParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  float initial_button_delay;
  float autoscroll_button_delay;
  bool jump_on_track_click;
  ::content::mojom::ScrollerStyle preferred_scroller_style;
  bool redraw;
  ::content::mojom::ScrollbarButtonsPlacement button_placement;
  bool scroll_view_rubber_banding;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CreateViewParamsPtr CreateViewParams::Clone() const {
  return New(
      mojo::Clone(renderer_preferences),
      mojo::Clone(web_preferences),
      mojo::Clone(view_id),
      mojo::Clone(main_frame_routing_id),
      mojo::Clone(main_frame_interface_provider),
      mojo::Clone(main_frame_widget_routing_id),
      mojo::Clone(session_storage_namespace_id),
      mojo::Clone(opener_frame_route_id),
      mojo::Clone(swapped_out),
      mojo::Clone(replicated_frame_state),
      mojo::Clone(devtools_main_frame_token),
      mojo::Clone(proxy_routing_id),
      mojo::Clone(hidden),
      mojo::Clone(never_visible),
      mojo::Clone(window_was_created_with_opener),
      mojo::Clone(has_committed_real_load),
      mojo::Clone(visual_properties),
      mojo::Clone(page_zoom_level),
      mojo::Clone(renderer_wide_named_frame_lookup)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CreateViewParams>::value>::type*>
bool CreateViewParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->renderer_preferences, other_struct.renderer_preferences))
    return false;
  if (!mojo::Equals(this->web_preferences, other_struct.web_preferences))
    return false;
  if (!mojo::Equals(this->view_id, other_struct.view_id))
    return false;
  if (!mojo::Equals(this->main_frame_routing_id, other_struct.main_frame_routing_id))
    return false;
  if (!mojo::Equals(this->main_frame_interface_provider, other_struct.main_frame_interface_provider))
    return false;
  if (!mojo::Equals(this->main_frame_widget_routing_id, other_struct.main_frame_widget_routing_id))
    return false;
  if (!mojo::Equals(this->session_storage_namespace_id, other_struct.session_storage_namespace_id))
    return false;
  if (!mojo::Equals(this->opener_frame_route_id, other_struct.opener_frame_route_id))
    return false;
  if (!mojo::Equals(this->swapped_out, other_struct.swapped_out))
    return false;
  if (!mojo::Equals(this->replicated_frame_state, other_struct.replicated_frame_state))
    return false;
  if (!mojo::Equals(this->devtools_main_frame_token, other_struct.devtools_main_frame_token))
    return false;
  if (!mojo::Equals(this->proxy_routing_id, other_struct.proxy_routing_id))
    return false;
  if (!mojo::Equals(this->hidden, other_struct.hidden))
    return false;
  if (!mojo::Equals(this->never_visible, other_struct.never_visible))
    return false;
  if (!mojo::Equals(this->window_was_created_with_opener, other_struct.window_was_created_with_opener))
    return false;
  if (!mojo::Equals(this->has_committed_real_load, other_struct.has_committed_real_load))
    return false;
  if (!mojo::Equals(this->visual_properties, other_struct.visual_properties))
    return false;
  if (!mojo::Equals(this->page_zoom_level, other_struct.page_zoom_level))
    return false;
  if (!mojo::Equals(this->renderer_wide_named_frame_lookup, other_struct.renderer_wide_named_frame_lookup))
    return false;
  return true;
}
template <typename StructPtrType>
CreateFrameWidgetParamsPtr CreateFrameWidgetParams::Clone() const {
  return New(
      mojo::Clone(routing_id),
      mojo::Clone(hidden)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CreateFrameWidgetParams>::value>::type*>
bool CreateFrameWidgetParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->routing_id, other_struct.routing_id))
    return false;
  if (!mojo::Equals(this->hidden, other_struct.hidden))
    return false;
  return true;
}
template <typename StructPtrType>
CreateFrameParamsPtr CreateFrameParams::Clone() const {
  return New(
      mojo::Clone(routing_id),
      mojo::Clone(proxy_routing_id),
      mojo::Clone(opener_routing_id),
      mojo::Clone(parent_routing_id),
      mojo::Clone(previous_sibling_routing_id),
      mojo::Clone(interface_provider),
      mojo::Clone(replication_state),
      mojo::Clone(devtools_frame_token),
      mojo::Clone(frame_owner_properties),
      mojo::Clone(widget_params),
      mojo::Clone(has_committed_real_load)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CreateFrameParams>::value>::type*>
bool CreateFrameParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->routing_id, other_struct.routing_id))
    return false;
  if (!mojo::Equals(this->proxy_routing_id, other_struct.proxy_routing_id))
    return false;
  if (!mojo::Equals(this->opener_routing_id, other_struct.opener_routing_id))
    return false;
  if (!mojo::Equals(this->parent_routing_id, other_struct.parent_routing_id))
    return false;
  if (!mojo::Equals(this->previous_sibling_routing_id, other_struct.previous_sibling_routing_id))
    return false;
  if (!mojo::Equals(this->interface_provider, other_struct.interface_provider))
    return false;
  if (!mojo::Equals(this->replication_state, other_struct.replication_state))
    return false;
  if (!mojo::Equals(this->devtools_frame_token, other_struct.devtools_frame_token))
    return false;
  if (!mojo::Equals(this->frame_owner_properties, other_struct.frame_owner_properties))
    return false;
  if (!mojo::Equals(this->widget_params, other_struct.widget_params))
    return false;
  if (!mojo::Equals(this->has_committed_real_load, other_struct.has_committed_real_load))
    return false;
  return true;
}
template <typename StructPtrType>
UpdateScrollbarThemeParamsPtr UpdateScrollbarThemeParams::Clone() const {
  return New(
      mojo::Clone(initial_button_delay),
      mojo::Clone(autoscroll_button_delay),
      mojo::Clone(jump_on_track_click),
      mojo::Clone(preferred_scroller_style),
      mojo::Clone(redraw),
      mojo::Clone(button_placement),
      mojo::Clone(scroll_view_rubber_banding)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UpdateScrollbarThemeParams>::value>::type*>
bool UpdateScrollbarThemeParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->initial_button_delay, other_struct.initial_button_delay))
    return false;
  if (!mojo::Equals(this->autoscroll_button_delay, other_struct.autoscroll_button_delay))
    return false;
  if (!mojo::Equals(this->jump_on_track_click, other_struct.jump_on_track_click))
    return false;
  if (!mojo::Equals(this->preferred_scroller_style, other_struct.preferred_scroller_style))
    return false;
  if (!mojo::Equals(this->redraw, other_struct.redraw))
    return false;
  if (!mojo::Equals(this->button_placement, other_struct.button_placement))
    return false;
  if (!mojo::Equals(this->scroll_view_rubber_banding, other_struct.scroll_view_rubber_banding))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace content

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::CreateViewParams::DataView,
                                         ::content::mojom::CreateViewParamsPtr> {
  static bool IsNull(const ::content::mojom::CreateViewParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::CreateViewParamsPtr* output) { output->reset(); }

  static const decltype(::content::mojom::CreateViewParams::renderer_preferences)& renderer_preferences(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->renderer_preferences;
  }

  static const decltype(::content::mojom::CreateViewParams::web_preferences)& web_preferences(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->web_preferences;
  }

  static decltype(::content::mojom::CreateViewParams::view_id) view_id(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->view_id;
  }

  static decltype(::content::mojom::CreateViewParams::main_frame_routing_id) main_frame_routing_id(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->main_frame_routing_id;
  }

  static  decltype(::content::mojom::CreateViewParams::main_frame_interface_provider)& main_frame_interface_provider(
       ::content::mojom::CreateViewParamsPtr& input) {
    return input->main_frame_interface_provider;
  }

  static decltype(::content::mojom::CreateViewParams::main_frame_widget_routing_id) main_frame_widget_routing_id(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->main_frame_widget_routing_id;
  }

  static const decltype(::content::mojom::CreateViewParams::session_storage_namespace_id)& session_storage_namespace_id(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->session_storage_namespace_id;
  }

  static decltype(::content::mojom::CreateViewParams::opener_frame_route_id) opener_frame_route_id(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->opener_frame_route_id;
  }

  static decltype(::content::mojom::CreateViewParams::swapped_out) swapped_out(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->swapped_out;
  }

  static const decltype(::content::mojom::CreateViewParams::replicated_frame_state)& replicated_frame_state(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->replicated_frame_state;
  }

  static const decltype(::content::mojom::CreateViewParams::devtools_main_frame_token)& devtools_main_frame_token(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->devtools_main_frame_token;
  }

  static decltype(::content::mojom::CreateViewParams::proxy_routing_id) proxy_routing_id(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->proxy_routing_id;
  }

  static decltype(::content::mojom::CreateViewParams::hidden) hidden(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->hidden;
  }

  static decltype(::content::mojom::CreateViewParams::never_visible) never_visible(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->never_visible;
  }

  static decltype(::content::mojom::CreateViewParams::window_was_created_with_opener) window_was_created_with_opener(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->window_was_created_with_opener;
  }

  static decltype(::content::mojom::CreateViewParams::has_committed_real_load) has_committed_real_load(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->has_committed_real_load;
  }

  static const decltype(::content::mojom::CreateViewParams::visual_properties)& visual_properties(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->visual_properties;
  }

  static decltype(::content::mojom::CreateViewParams::page_zoom_level) page_zoom_level(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->page_zoom_level;
  }

  static decltype(::content::mojom::CreateViewParams::renderer_wide_named_frame_lookup) renderer_wide_named_frame_lookup(
      const ::content::mojom::CreateViewParamsPtr& input) {
    return input->renderer_wide_named_frame_lookup;
  }

  static bool Read(::content::mojom::CreateViewParams::DataView input, ::content::mojom::CreateViewParamsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::CreateFrameWidgetParams::DataView,
                                         ::content::mojom::CreateFrameWidgetParamsPtr> {
  static bool IsNull(const ::content::mojom::CreateFrameWidgetParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::CreateFrameWidgetParamsPtr* output) { output->reset(); }

  static decltype(::content::mojom::CreateFrameWidgetParams::routing_id) routing_id(
      const ::content::mojom::CreateFrameWidgetParamsPtr& input) {
    return input->routing_id;
  }

  static decltype(::content::mojom::CreateFrameWidgetParams::hidden) hidden(
      const ::content::mojom::CreateFrameWidgetParamsPtr& input) {
    return input->hidden;
  }

  static bool Read(::content::mojom::CreateFrameWidgetParams::DataView input, ::content::mojom::CreateFrameWidgetParamsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::CreateFrameParams::DataView,
                                         ::content::mojom::CreateFrameParamsPtr> {
  static bool IsNull(const ::content::mojom::CreateFrameParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::CreateFrameParamsPtr* output) { output->reset(); }

  static decltype(::content::mojom::CreateFrameParams::routing_id) routing_id(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->routing_id;
  }

  static decltype(::content::mojom::CreateFrameParams::proxy_routing_id) proxy_routing_id(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->proxy_routing_id;
  }

  static decltype(::content::mojom::CreateFrameParams::opener_routing_id) opener_routing_id(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->opener_routing_id;
  }

  static decltype(::content::mojom::CreateFrameParams::parent_routing_id) parent_routing_id(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->parent_routing_id;
  }

  static decltype(::content::mojom::CreateFrameParams::previous_sibling_routing_id) previous_sibling_routing_id(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->previous_sibling_routing_id;
  }

  static  decltype(::content::mojom::CreateFrameParams::interface_provider)& interface_provider(
       ::content::mojom::CreateFrameParamsPtr& input) {
    return input->interface_provider;
  }

  static const decltype(::content::mojom::CreateFrameParams::replication_state)& replication_state(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->replication_state;
  }

  static const decltype(::content::mojom::CreateFrameParams::devtools_frame_token)& devtools_frame_token(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->devtools_frame_token;
  }

  static const decltype(::content::mojom::CreateFrameParams::frame_owner_properties)& frame_owner_properties(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->frame_owner_properties;
  }

  static const decltype(::content::mojom::CreateFrameParams::widget_params)& widget_params(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->widget_params;
  }

  static decltype(::content::mojom::CreateFrameParams::has_committed_real_load) has_committed_real_load(
      const ::content::mojom::CreateFrameParamsPtr& input) {
    return input->has_committed_real_load;
  }

  static bool Read(::content::mojom::CreateFrameParams::DataView input, ::content::mojom::CreateFrameParamsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::content::mojom::UpdateScrollbarThemeParams::DataView,
                                         ::content::mojom::UpdateScrollbarThemeParamsPtr> {
  static bool IsNull(const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) { return !input; }
  static void SetToNull(::content::mojom::UpdateScrollbarThemeParamsPtr* output) { output->reset(); }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::initial_button_delay) initial_button_delay(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->initial_button_delay;
  }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::autoscroll_button_delay) autoscroll_button_delay(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->autoscroll_button_delay;
  }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::jump_on_track_click) jump_on_track_click(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->jump_on_track_click;
  }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::preferred_scroller_style) preferred_scroller_style(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->preferred_scroller_style;
  }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::redraw) redraw(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->redraw;
  }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::button_placement) button_placement(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->button_placement;
  }

  static decltype(::content::mojom::UpdateScrollbarThemeParams::scroll_view_rubber_banding) scroll_view_rubber_banding(
      const ::content::mojom::UpdateScrollbarThemeParamsPtr& input) {
    return input->scroll_view_rubber_banding;
  }

  static bool Read(::content::mojom::UpdateScrollbarThemeParams::DataView input, ::content::mojom::UpdateScrollbarThemeParamsPtr* output);
};

}  // namespace mojo

#endif  // CONTENT_COMMON_RENDERER_MOJOM_H_