// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"

namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class Rule_Data;

struct NetworkServiceTest_ShouldRequireCT_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  Rule_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Rule_Data));
      new (data()) Rule_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Rule_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Rule_Data>(index_);
    }
    Rule_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host_pattern;
  mojo::internal::Pointer<mojo::internal::String_Data> replacement;

 private:
  Rule_Data();
  ~Rule_Data() = delete;
};
static_assert(sizeof(Rule_Data) == 24,
              "Bad sizeof(Rule_Data)");
// Used by Rule::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Rule_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Rule_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Rule_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Rule_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Rule_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkServiceTest_AddRules_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_AddRules_Params_Data));
      new (data()) NetworkServiceTest_AddRules_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_AddRules_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_AddRules_Params_Data>(index_);
    }
    NetworkServiceTest_AddRules_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Rule_Data>>> rules;

 private:
  NetworkServiceTest_AddRules_Params_Data();
  ~NetworkServiceTest_AddRules_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_AddRules_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_AddRules_Params_Data)");
class  NetworkServiceTest_AddRules_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_AddRules_ResponseParams_Data));
      new (data()) NetworkServiceTest_AddRules_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_AddRules_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_AddRules_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_AddRules_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_AddRules_ResponseParams_Data();
  ~NetworkServiceTest_AddRules_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_AddRules_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_AddRules_ResponseParams_Data)");
class  NetworkServiceTest_SimulateNetworkChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateNetworkChange_Params_Data));
      new (data()) NetworkServiceTest_SimulateNetworkChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateNetworkChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateNetworkChange_Params_Data>(index_);
    }
    NetworkServiceTest_SimulateNetworkChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_SimulateNetworkChange_Params_Data();
  ~NetworkServiceTest_SimulateNetworkChange_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateNetworkChange_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_SimulateNetworkChange_Params_Data)");
class  NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data));
      new (data()) NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data();
  ~NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data)");
class  NetworkServiceTest_SimulateCrash_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SimulateCrash_Params_Data));
      new (data()) NetworkServiceTest_SimulateCrash_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SimulateCrash_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SimulateCrash_Params_Data>(index_);
    }
    NetworkServiceTest_SimulateCrash_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SimulateCrash_Params_Data();
  ~NetworkServiceTest_SimulateCrash_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SimulateCrash_Params_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SimulateCrash_Params_Data)");
class  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data));
      new (data()) NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t default_result;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data();
  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data)");
class  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data));
      new (data()) NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data();
  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data)");
class  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data));
      new (data()) NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::X509Certificate_Data> cert;
  mojo::internal::Pointer<mojo::internal::String_Data> host_pattern;
  mojo::internal::Pointer<::network::mojom::internal::CertVerifyResult_Data> verify_result;
  int32_t rv;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data();
  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data) == 40,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data)");
class  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data));
      new (data()) NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data();
  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data)");
class  NetworkServiceTest_SetShouldRequireCT_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SetShouldRequireCT_Params_Data));
      new (data()) NetworkServiceTest_SetShouldRequireCT_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SetShouldRequireCT_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SetShouldRequireCT_Params_Data>(index_);
    }
    NetworkServiceTest_SetShouldRequireCT_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t required;
  uint8_t padfinal_[4];

 private:
  NetworkServiceTest_SetShouldRequireCT_Params_Data();
  ~NetworkServiceTest_SetShouldRequireCT_Params_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SetShouldRequireCT_Params_Data) == 16,
              "Bad sizeof(NetworkServiceTest_SetShouldRequireCT_Params_Data)");
class  NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data));
      new (data()) NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data>(index_);
    }
    NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data();
  ~NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data) == 8,
              "Bad sizeof(NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_INTERNAL_H_