// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_SystemInfo_h
#define content_protocol_SystemInfo_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace SystemInfo {

// ------------- Forward and enum declarations.
class GPUDevice;
class GPUInfo;

// ------------- Type and builder declarations.

class CONTENT_EXPORT GPUDevice : public Serializable{
    PROTOCOL_DISALLOW_COPY(GPUDevice);
public:
    static std::unique_ptr<GPUDevice> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~GPUDevice() override { }

    double GetVendorId() { return m_vendorId; }
    void SetVendorId(double value) { m_vendorId = value; }

    double GetDeviceId() { return m_deviceId; }
    void SetDeviceId(double value) { m_deviceId = value; }

    String GetVendorString() { return m_vendorString; }
    void SetVendorString(const String& value) { m_vendorString = value; }

    String GetDeviceString() { return m_deviceString; }
    void SetDeviceString(const String& value) { m_deviceString = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<GPUDevice> clone() const;

    template<int STATE>
    class GPUDeviceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            VendorIdSet = 1 << 1,
            DeviceIdSet = 1 << 2,
            VendorStringSet = 1 << 3,
            DeviceStringSet = 1 << 4,
            AllFieldsSet = (VendorIdSet | DeviceIdSet | VendorStringSet | DeviceStringSet | 0)};


        GPUDeviceBuilder<STATE | VendorIdSet>& SetVendorId(double value)
        {
            static_assert(!(STATE & VendorIdSet), "property vendorId should not be set yet");
            m_result->SetVendorId(value);
            return castState<VendorIdSet>();
        }

        GPUDeviceBuilder<STATE | DeviceIdSet>& SetDeviceId(double value)
        {
            static_assert(!(STATE & DeviceIdSet), "property deviceId should not be set yet");
            m_result->SetDeviceId(value);
            return castState<DeviceIdSet>();
        }

        GPUDeviceBuilder<STATE | VendorStringSet>& SetVendorString(const String& value)
        {
            static_assert(!(STATE & VendorStringSet), "property vendorString should not be set yet");
            m_result->SetVendorString(value);
            return castState<VendorStringSet>();
        }

        GPUDeviceBuilder<STATE | DeviceStringSet>& SetDeviceString(const String& value)
        {
            static_assert(!(STATE & DeviceStringSet), "property deviceString should not be set yet");
            m_result->SetDeviceString(value);
            return castState<DeviceStringSet>();
        }

        std::unique_ptr<GPUDevice> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class GPUDevice;
        GPUDeviceBuilder() : m_result(new GPUDevice()) { }

        template<int STEP> GPUDeviceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<GPUDeviceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::SystemInfo::GPUDevice> m_result;
    };

    static GPUDeviceBuilder<0> Create()
    {
        return GPUDeviceBuilder<0>();
    }

private:
    GPUDevice()
    {
          m_vendorId = 0;
          m_deviceId = 0;
    }

    double m_vendorId;
    double m_deviceId;
    String m_vendorString;
    String m_deviceString;
};


class CONTENT_EXPORT GPUInfo : public Serializable{
    PROTOCOL_DISALLOW_COPY(GPUInfo);
public:
    static std::unique_ptr<GPUInfo> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~GPUInfo() override { }

    protocol::Array<protocol::SystemInfo::GPUDevice>* GetDevices() { return m_devices.get(); }
    void SetDevices(std::unique_ptr<protocol::Array<protocol::SystemInfo::GPUDevice>> value) { m_devices = std::move(value); }

    bool HasAuxAttributes() { return m_auxAttributes.isJust(); }
    protocol::DictionaryValue* GetAuxAttributes(protocol::DictionaryValue* defaultValue) { return m_auxAttributes.isJust() ? m_auxAttributes.fromJust() : defaultValue; }
    void SetAuxAttributes(std::unique_ptr<protocol::DictionaryValue> value) { m_auxAttributes = std::move(value); }

    bool HasFeatureStatus() { return m_featureStatus.isJust(); }
    protocol::DictionaryValue* GetFeatureStatus(protocol::DictionaryValue* defaultValue) { return m_featureStatus.isJust() ? m_featureStatus.fromJust() : defaultValue; }
    void SetFeatureStatus(std::unique_ptr<protocol::DictionaryValue> value) { m_featureStatus = std::move(value); }

    protocol::Array<String>* GetDriverBugWorkarounds() { return m_driverBugWorkarounds.get(); }
    void SetDriverBugWorkarounds(std::unique_ptr<protocol::Array<String>> value) { m_driverBugWorkarounds = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<GPUInfo> clone() const;

    template<int STATE>
    class GPUInfoBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            DevicesSet = 1 << 1,
            DriverBugWorkaroundsSet = 1 << 2,
            AllFieldsSet = (DevicesSet | DriverBugWorkaroundsSet | 0)};


        GPUInfoBuilder<STATE | DevicesSet>& SetDevices(std::unique_ptr<protocol::Array<protocol::SystemInfo::GPUDevice>> value)
        {
            static_assert(!(STATE & DevicesSet), "property devices should not be set yet");
            m_result->SetDevices(std::move(value));
            return castState<DevicesSet>();
        }

        GPUInfoBuilder<STATE>& SetAuxAttributes(std::unique_ptr<protocol::DictionaryValue> value)
        {
            m_result->SetAuxAttributes(std::move(value));
            return *this;
        }

        GPUInfoBuilder<STATE>& SetFeatureStatus(std::unique_ptr<protocol::DictionaryValue> value)
        {
            m_result->SetFeatureStatus(std::move(value));
            return *this;
        }

        GPUInfoBuilder<STATE | DriverBugWorkaroundsSet>& SetDriverBugWorkarounds(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & DriverBugWorkaroundsSet), "property driverBugWorkarounds should not be set yet");
            m_result->SetDriverBugWorkarounds(std::move(value));
            return castState<DriverBugWorkaroundsSet>();
        }

        std::unique_ptr<GPUInfo> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class GPUInfo;
        GPUInfoBuilder() : m_result(new GPUInfo()) { }

        template<int STEP> GPUInfoBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<GPUInfoBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::SystemInfo::GPUInfo> m_result;
    };

    static GPUInfoBuilder<0> Create()
    {
        return GPUInfoBuilder<0>();
    }

private:
    GPUInfo()
    {
    }

    std::unique_ptr<protocol::Array<protocol::SystemInfo::GPUDevice>> m_devices;
    Maybe<protocol::DictionaryValue> m_auxAttributes;
    Maybe<protocol::DictionaryValue> m_featureStatus;
    std::unique_ptr<protocol::Array<String>> m_driverBugWorkarounds;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CONTENT_EXPORT GetInfoCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::SystemInfo::GPUInfo> gpu, const String& modelName, const String& modelVersion, const String& commandLine) = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~GetInfoCallback() { }
    };
    virtual void GetInfo(std::unique_ptr<GetInfoCallback> callback) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::OK();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CONTENT_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CONTENT_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace SystemInfo
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_SystemInfo_h)
