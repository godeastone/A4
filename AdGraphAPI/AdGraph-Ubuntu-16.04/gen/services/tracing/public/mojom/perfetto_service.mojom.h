// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_H_

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
#include "services/tracing/public/mojom/perfetto_service.mojom-shared.h"
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
#include "base/component_export.h"


namespace tracing {
namespace mojom {
COMPONENT_EXPORT(TRACING_MOJOM) extern const char kTraceEventDataSourceName[];
class ProducerHost;
using ProducerHostPtr = mojo::InterfacePtr<ProducerHost>;
using ProducerHostPtrInfo = mojo::InterfacePtrInfo<ProducerHost>;
using ThreadSafeProducerHostPtr =
    mojo::ThreadSafeInterfacePtr<ProducerHost>;
using ProducerHostRequest = mojo::InterfaceRequest<ProducerHost>;
using ProducerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProducerHost>;
using ThreadSafeProducerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProducerHost>;
using ProducerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProducerHost>;
using ProducerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProducerHost>;

class ProducerClient;
using ProducerClientPtr = mojo::InterfacePtr<ProducerClient>;
using ProducerClientPtrInfo = mojo::InterfacePtrInfo<ProducerClient>;
using ThreadSafeProducerClientPtr =
    mojo::ThreadSafeInterfacePtr<ProducerClient>;
using ProducerClientRequest = mojo::InterfaceRequest<ProducerClient>;
using ProducerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProducerClient>;
using ThreadSafeProducerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProducerClient>;
using ProducerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProducerClient>;
using ProducerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProducerClient>;

class PerfettoService;
using PerfettoServicePtr = mojo::InterfacePtr<PerfettoService>;
using PerfettoServicePtrInfo = mojo::InterfacePtrInfo<PerfettoService>;
using ThreadSafePerfettoServicePtr =
    mojo::ThreadSafeInterfacePtr<PerfettoService>;
using PerfettoServiceRequest = mojo::InterfaceRequest<PerfettoService>;
using PerfettoServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PerfettoService>;
using ThreadSafePerfettoServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PerfettoService>;
using PerfettoServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PerfettoService>;
using PerfettoServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PerfettoService>;

class ChunksToMove;
using ChunksToMovePtr = mojo::InlinedStructPtr<ChunksToMove>;

class ChunkPatch;
using ChunkPatchPtr = mojo::InlinedStructPtr<ChunkPatch>;

class ChunksToPatch;
using ChunksToPatchPtr = mojo::StructPtr<ChunksToPatch>;

class CommitDataRequest;
using CommitDataRequestPtr = mojo::StructPtr<CommitDataRequest>;

class DataSourceConfig;
using DataSourceConfigPtr = mojo::InlinedStructPtr<DataSourceConfig>;


class ProducerHostProxy;

template <typename ImplRefTraits>
class ProducerHostStub;

class ProducerHostRequestValidator;

class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHost
    : public ProducerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProducerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProducerHostStub<ImplRefTraits>;

  using RequestValidator_ = ProducerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCommitDataMinVersion = 0,
  };
  virtual ~ProducerHost() {}

  virtual void CommitData(CommitDataRequestPtr data_request) = 0;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostInterceptorForTesting : public ProducerHost {
  virtual ProducerHost* GetForwardingInterface() = 0;
  void CommitData(CommitDataRequestPtr data_request) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostAsyncWaiter {
 public:
  explicit ProducerHostAsyncWaiter(ProducerHost* proxy);
  ~ProducerHostAsyncWaiter();

 private:
  ProducerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProducerHostAsyncWaiter);
};

class ProducerClientProxy;

template <typename ImplRefTraits>
class ProducerClientStub;

class ProducerClientRequestValidator;

class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClient
    : public ProducerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = ProducerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProducerClientStub<ImplRefTraits>;

  using RequestValidator_ = ProducerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnTracingStartMinVersion = 0,
    kCreateDataSourceInstanceMinVersion = 0,
    kTearDownDataSourceInstanceMinVersion = 0,
    kFlushMinVersion = 0,
  };
  virtual ~ProducerClient() {}

  virtual void OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) = 0;

  virtual void CreateDataSourceInstance(uint64_t id, DataSourceConfigPtr data_source_config) = 0;

  virtual void TearDownDataSourceInstance(uint64_t id) = 0;

  virtual void Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) = 0;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientInterceptorForTesting : public ProducerClient {
  virtual ProducerClient* GetForwardingInterface() = 0;
  void OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) override;
  void CreateDataSourceInstance(uint64_t id, DataSourceConfigPtr data_source_config) override;
  void TearDownDataSourceInstance(uint64_t id) override;
  void Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientAsyncWaiter {
 public:
  explicit ProducerClientAsyncWaiter(ProducerClient* proxy);
  ~ProducerClientAsyncWaiter();

 private:
  ProducerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProducerClientAsyncWaiter);
};

class PerfettoServiceProxy;

template <typename ImplRefTraits>
class PerfettoServiceStub;

class PerfettoServiceRequestValidator;

class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoService
    : public PerfettoServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Proxy_ = PerfettoServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PerfettoServiceStub<ImplRefTraits>;

  using RequestValidator_ = PerfettoServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectToProducerHostMinVersion = 0,
  };
  virtual ~PerfettoService() {}

  virtual void ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) = 0;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceInterceptorForTesting : public PerfettoService {
  virtual PerfettoService* GetForwardingInterface() = 0;
  void ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceAsyncWaiter {
 public:
  explicit PerfettoServiceAsyncWaiter(PerfettoService* proxy);
  ~PerfettoServiceAsyncWaiter();

 private:
  PerfettoService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PerfettoServiceAsyncWaiter);
};

class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostProxy
    : public ProducerHost {
 public:
  explicit ProducerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void CommitData(CommitDataRequestPtr data_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientProxy
    : public ProducerClient {
 public:
  explicit ProducerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTracingStart(mojo::ScopedSharedBufferHandle shared_memory) final;
  void CreateDataSourceInstance(uint64_t id, DataSourceConfigPtr data_source_config) final;
  void TearDownDataSourceInstance(uint64_t id) final;
  void Flush(uint64_t flush_request_id, const std::vector<uint64_t>& data_source_ids) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceProxy
    : public PerfettoService {
 public:
  explicit PerfettoServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void ConnectToProducerHost(ProducerClientPtr producer_client, ProducerHostRequest producer_host) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostStubDispatch {
 public:
  static bool Accept(ProducerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProducerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProducerHost>>
class ProducerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProducerHostStub() {}
  ~ProducerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientStubDispatch {
 public:
  static bool Accept(ProducerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProducerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProducerClient>>
class ProducerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProducerClientStub() {}
  ~ProducerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProducerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceStubDispatch {
 public:
  static bool Accept(PerfettoService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PerfettoService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PerfettoService>>
class PerfettoServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PerfettoServiceStub() {}
  ~PerfettoServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PerfettoServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PerfettoServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) ProducerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(TRACING_MOJOM) PerfettoServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};


class COMPONENT_EXPORT(TRACING_MOJOM) ChunksToMove {
 public:
  using DataView = ChunksToMoveDataView;
  using Data_ = internal::ChunksToMove_Data;

  template <typename... Args>
  static ChunksToMovePtr New(Args&&... args) {
    return ChunksToMovePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChunksToMovePtr From(const U& u) {
    return mojo::TypeConverter<ChunksToMovePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChunksToMove>::Convert(*this);
  }


  ChunksToMove();

  ChunksToMove(
      uint32_t page,
      uint32_t chunk,
      uint32_t target_buffer);

  ~ChunksToMove();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChunksToMovePtr>
  ChunksToMovePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChunksToMove>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChunksToMove::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChunksToMove::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChunksToMove_UnserializedMessageContext<
            UserType, ChunksToMove::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChunksToMove::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChunksToMove::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChunksToMove_UnserializedMessageContext<
            UserType, ChunksToMove::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChunksToMove::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t page;
  uint32_t chunk;
  uint32_t target_buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


class COMPONENT_EXPORT(TRACING_MOJOM) ChunkPatch {
 public:
  using DataView = ChunkPatchDataView;
  using Data_ = internal::ChunkPatch_Data;

  template <typename... Args>
  static ChunkPatchPtr New(Args&&... args) {
    return ChunkPatchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChunkPatchPtr From(const U& u) {
    return mojo::TypeConverter<ChunkPatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChunkPatch>::Convert(*this);
  }


  ChunkPatch();

  ChunkPatch(
      uint32_t offset,
      const std::string& data);

  ~ChunkPatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChunkPatchPtr>
  ChunkPatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChunkPatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChunkPatch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChunkPatch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChunkPatch_UnserializedMessageContext<
            UserType, ChunkPatch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChunkPatch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChunkPatch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChunkPatch_UnserializedMessageContext<
            UserType, ChunkPatch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChunkPatch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t offset;
  std::string data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




class COMPONENT_EXPORT(TRACING_MOJOM) DataSourceConfig {
 public:
  using DataView = DataSourceConfigDataView;
  using Data_ = internal::DataSourceConfig_Data;

  template <typename... Args>
  static DataSourceConfigPtr New(Args&&... args) {
    return DataSourceConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataSourceConfigPtr From(const U& u) {
    return mojo::TypeConverter<DataSourceConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataSourceConfig>::Convert(*this);
  }


  DataSourceConfig();

  DataSourceConfig(
      const std::string& name,
      const std::string& trace_config,
      uint32_t target_buffer);

  ~DataSourceConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataSourceConfigPtr>
  DataSourceConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataSourceConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataSourceConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataSourceConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataSourceConfig_UnserializedMessageContext<
            UserType, DataSourceConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataSourceConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DataSourceConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataSourceConfig_UnserializedMessageContext<
            UserType, DataSourceConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataSourceConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::string name;
  std::string trace_config;
  uint32_t target_buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(TRACING_MOJOM) ChunksToPatch {
 public:
  using DataView = ChunksToPatchDataView;
  using Data_ = internal::ChunksToPatch_Data;

  template <typename... Args>
  static ChunksToPatchPtr New(Args&&... args) {
    return ChunksToPatchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChunksToPatchPtr From(const U& u) {
    return mojo::TypeConverter<ChunksToPatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChunksToPatch>::Convert(*this);
  }


  ChunksToPatch();

  ChunksToPatch(
      uint32_t target_buffer,
      uint32_t writer_id,
      uint32_t chunk_id,
      std::vector<ChunkPatchPtr> patches,
      bool has_more_patches);

  ~ChunksToPatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChunksToPatchPtr>
  ChunksToPatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChunksToPatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChunksToPatch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChunksToPatch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChunksToPatch_UnserializedMessageContext<
            UserType, ChunksToPatch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChunksToPatch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ChunksToPatch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChunksToPatch_UnserializedMessageContext<
            UserType, ChunksToPatch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChunksToPatch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  uint32_t target_buffer;
  uint32_t writer_id;
  uint32_t chunk_id;
  std::vector<ChunkPatchPtr> patches;
  bool has_more_patches;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ChunksToPatch);
};


class COMPONENT_EXPORT(TRACING_MOJOM) CommitDataRequest {
 public:
  using DataView = CommitDataRequestDataView;
  using Data_ = internal::CommitDataRequest_Data;

  template <typename... Args>
  static CommitDataRequestPtr New(Args&&... args) {
    return CommitDataRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommitDataRequestPtr From(const U& u) {
    return mojo::TypeConverter<CommitDataRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommitDataRequest>::Convert(*this);
  }


  CommitDataRequest();

  CommitDataRequest(
      std::vector<ChunksToMovePtr> chunks_to_move,
      std::vector<ChunksToPatchPtr> chunks_to_patch);

  ~CommitDataRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommitDataRequestPtr>
  CommitDataRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CommitDataRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommitDataRequest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommitDataRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommitDataRequest_UnserializedMessageContext<
            UserType, CommitDataRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CommitDataRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CommitDataRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommitDataRequest_UnserializedMessageContext<
            UserType, CommitDataRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommitDataRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  std::vector<ChunksToMovePtr> chunks_to_move;
  std::vector<ChunksToPatchPtr> chunks_to_patch;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CommitDataRequest);
};


template <typename StructPtrType>
ChunksToMovePtr ChunksToMove::Clone() const {
  return New(
      mojo::Clone(page),
      mojo::Clone(chunk),
      mojo::Clone(target_buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChunksToMove>::value>::type*>
bool ChunksToMove::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->page, other_struct.page))
    return false;
  if (!mojo::Equals(this->chunk, other_struct.chunk))
    return false;
  if (!mojo::Equals(this->target_buffer, other_struct.target_buffer))
    return false;
  return true;
}
template <typename StructPtrType>
ChunkPatchPtr ChunkPatch::Clone() const {
  return New(
      mojo::Clone(offset),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChunkPatch>::value>::type*>
bool ChunkPatch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
ChunksToPatchPtr ChunksToPatch::Clone() const {
  return New(
      mojo::Clone(target_buffer),
      mojo::Clone(writer_id),
      mojo::Clone(chunk_id),
      mojo::Clone(patches),
      mojo::Clone(has_more_patches)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChunksToPatch>::value>::type*>
bool ChunksToPatch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->target_buffer, other_struct.target_buffer))
    return false;
  if (!mojo::Equals(this->writer_id, other_struct.writer_id))
    return false;
  if (!mojo::Equals(this->chunk_id, other_struct.chunk_id))
    return false;
  if (!mojo::Equals(this->patches, other_struct.patches))
    return false;
  if (!mojo::Equals(this->has_more_patches, other_struct.has_more_patches))
    return false;
  return true;
}
template <typename StructPtrType>
CommitDataRequestPtr CommitDataRequest::Clone() const {
  return New(
      mojo::Clone(chunks_to_move),
      mojo::Clone(chunks_to_patch)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CommitDataRequest>::value>::type*>
bool CommitDataRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->chunks_to_move, other_struct.chunks_to_move))
    return false;
  if (!mojo::Equals(this->chunks_to_patch, other_struct.chunks_to_patch))
    return false;
  return true;
}
template <typename StructPtrType>
DataSourceConfigPtr DataSourceConfig::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(trace_config),
      mojo::Clone(target_buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataSourceConfig>::value>::type*>
bool DataSourceConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->trace_config, other_struct.trace_config))
    return false;
  if (!mojo::Equals(this->target_buffer, other_struct.target_buffer))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace tracing

namespace mojo {


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChunksToMove::DataView,
                                         ::tracing::mojom::ChunksToMovePtr> {
  static bool IsNull(const ::tracing::mojom::ChunksToMovePtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChunksToMovePtr* output) { output->reset(); }

  static decltype(::tracing::mojom::ChunksToMove::page) page(
      const ::tracing::mojom::ChunksToMovePtr& input) {
    return input->page;
  }

  static decltype(::tracing::mojom::ChunksToMove::chunk) chunk(
      const ::tracing::mojom::ChunksToMovePtr& input) {
    return input->chunk;
  }

  static decltype(::tracing::mojom::ChunksToMove::target_buffer) target_buffer(
      const ::tracing::mojom::ChunksToMovePtr& input) {
    return input->target_buffer;
  }

  static bool Read(::tracing::mojom::ChunksToMove::DataView input, ::tracing::mojom::ChunksToMovePtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChunkPatch::DataView,
                                         ::tracing::mojom::ChunkPatchPtr> {
  static bool IsNull(const ::tracing::mojom::ChunkPatchPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChunkPatchPtr* output) { output->reset(); }

  static decltype(::tracing::mojom::ChunkPatch::offset) offset(
      const ::tracing::mojom::ChunkPatchPtr& input) {
    return input->offset;
  }

  static const decltype(::tracing::mojom::ChunkPatch::data)& data(
      const ::tracing::mojom::ChunkPatchPtr& input) {
    return input->data;
  }

  static bool Read(::tracing::mojom::ChunkPatch::DataView input, ::tracing::mojom::ChunkPatchPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::ChunksToPatch::DataView,
                                         ::tracing::mojom::ChunksToPatchPtr> {
  static bool IsNull(const ::tracing::mojom::ChunksToPatchPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::ChunksToPatchPtr* output) { output->reset(); }

  static decltype(::tracing::mojom::ChunksToPatch::target_buffer) target_buffer(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->target_buffer;
  }

  static decltype(::tracing::mojom::ChunksToPatch::writer_id) writer_id(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->writer_id;
  }

  static decltype(::tracing::mojom::ChunksToPatch::chunk_id) chunk_id(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->chunk_id;
  }

  static const decltype(::tracing::mojom::ChunksToPatch::patches)& patches(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->patches;
  }

  static decltype(::tracing::mojom::ChunksToPatch::has_more_patches) has_more_patches(
      const ::tracing::mojom::ChunksToPatchPtr& input) {
    return input->has_more_patches;
  }

  static bool Read(::tracing::mojom::ChunksToPatch::DataView input, ::tracing::mojom::ChunksToPatchPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::CommitDataRequest::DataView,
                                         ::tracing::mojom::CommitDataRequestPtr> {
  static bool IsNull(const ::tracing::mojom::CommitDataRequestPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::CommitDataRequestPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::CommitDataRequest::chunks_to_move)& chunks_to_move(
      const ::tracing::mojom::CommitDataRequestPtr& input) {
    return input->chunks_to_move;
  }

  static const decltype(::tracing::mojom::CommitDataRequest::chunks_to_patch)& chunks_to_patch(
      const ::tracing::mojom::CommitDataRequestPtr& input) {
    return input->chunks_to_patch;
  }

  static bool Read(::tracing::mojom::CommitDataRequest::DataView input, ::tracing::mojom::CommitDataRequestPtr* output);
};


template <>
struct COMPONENT_EXPORT(TRACING_MOJOM) StructTraits<::tracing::mojom::DataSourceConfig::DataView,
                                         ::tracing::mojom::DataSourceConfigPtr> {
  static bool IsNull(const ::tracing::mojom::DataSourceConfigPtr& input) { return !input; }
  static void SetToNull(::tracing::mojom::DataSourceConfigPtr* output) { output->reset(); }

  static const decltype(::tracing::mojom::DataSourceConfig::name)& name(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->name;
  }

  static const decltype(::tracing::mojom::DataSourceConfig::trace_config)& trace_config(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->trace_config;
  }

  static decltype(::tracing::mojom::DataSourceConfig::target_buffer) target_buffer(
      const ::tracing::mojom::DataSourceConfigPtr& input) {
    return input->target_buffer;
  }

  static bool Read(::tracing::mojom::DataSourceConfig::DataView input, ::tracing::mojom::DataSourceConfigPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_H_