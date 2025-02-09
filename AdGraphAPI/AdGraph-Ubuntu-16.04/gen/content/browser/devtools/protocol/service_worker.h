// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_ServiceWorker_h
#define content_protocol_ServiceWorker_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace ServiceWorker {

// ------------- Forward and enum declarations.
class ServiceWorkerRegistration;
using ServiceWorkerVersionRunningStatus = String;
using ServiceWorkerVersionStatus = String;
class ServiceWorkerVersion;
class ServiceWorkerErrorMessage;
class WorkerErrorReportedNotification;
class WorkerRegistrationUpdatedNotification;
class WorkerVersionUpdatedNotification;

namespace ServiceWorkerVersionRunningStatusEnum {
CONTENT_EXPORT extern const char Stopped[];
CONTENT_EXPORT extern const char Starting[];
CONTENT_EXPORT extern const char Running[];
CONTENT_EXPORT extern const char Stopping[];
} // namespace ServiceWorkerVersionRunningStatusEnum

namespace ServiceWorkerVersionStatusEnum {
CONTENT_EXPORT extern const char New[];
CONTENT_EXPORT extern const char Installing[];
CONTENT_EXPORT extern const char Installed[];
CONTENT_EXPORT extern const char Activating[];
CONTENT_EXPORT extern const char Activated[];
CONTENT_EXPORT extern const char Redundant[];
} // namespace ServiceWorkerVersionStatusEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT ServiceWorkerRegistration : public Serializable{
    PROTOCOL_DISALLOW_COPY(ServiceWorkerRegistration);
public:
    static std::unique_ptr<ServiceWorkerRegistration> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ServiceWorkerRegistration() override { }

    String GetRegistrationId() { return m_registrationId; }
    void SetRegistrationId(const String& value) { m_registrationId = value; }

    String GetScopeURL() { return m_scopeURL; }
    void SetScopeURL(const String& value) { m_scopeURL = value; }

    bool GetIsDeleted() { return m_isDeleted; }
    void SetIsDeleted(bool value) { m_isDeleted = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ServiceWorkerRegistration> clone() const;

    template<int STATE>
    class ServiceWorkerRegistrationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RegistrationIdSet = 1 << 1,
            ScopeURLSet = 1 << 2,
            IsDeletedSet = 1 << 3,
            AllFieldsSet = (RegistrationIdSet | ScopeURLSet | IsDeletedSet | 0)};


        ServiceWorkerRegistrationBuilder<STATE | RegistrationIdSet>& SetRegistrationId(const String& value)
        {
            static_assert(!(STATE & RegistrationIdSet), "property registrationId should not be set yet");
            m_result->SetRegistrationId(value);
            return castState<RegistrationIdSet>();
        }

        ServiceWorkerRegistrationBuilder<STATE | ScopeURLSet>& SetScopeURL(const String& value)
        {
            static_assert(!(STATE & ScopeURLSet), "property scopeURL should not be set yet");
            m_result->SetScopeURL(value);
            return castState<ScopeURLSet>();
        }

        ServiceWorkerRegistrationBuilder<STATE | IsDeletedSet>& SetIsDeleted(bool value)
        {
            static_assert(!(STATE & IsDeletedSet), "property isDeleted should not be set yet");
            m_result->SetIsDeleted(value);
            return castState<IsDeletedSet>();
        }

        std::unique_ptr<ServiceWorkerRegistration> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ServiceWorkerRegistration;
        ServiceWorkerRegistrationBuilder() : m_result(new ServiceWorkerRegistration()) { }

        template<int STEP> ServiceWorkerRegistrationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ServiceWorkerRegistrationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::ServiceWorkerRegistration> m_result;
    };

    static ServiceWorkerRegistrationBuilder<0> Create()
    {
        return ServiceWorkerRegistrationBuilder<0>();
    }

private:
    ServiceWorkerRegistration()
    {
          m_isDeleted = false;
    }

    String m_registrationId;
    String m_scopeURL;
    bool m_isDeleted;
};


class CONTENT_EXPORT ServiceWorkerVersion : public Serializable{
    PROTOCOL_DISALLOW_COPY(ServiceWorkerVersion);
public:
    static std::unique_ptr<ServiceWorkerVersion> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ServiceWorkerVersion() override { }

    String GetVersionId() { return m_versionId; }
    void SetVersionId(const String& value) { m_versionId = value; }

    String GetRegistrationId() { return m_registrationId; }
    void SetRegistrationId(const String& value) { m_registrationId = value; }

    String GetScriptURL() { return m_scriptURL; }
    void SetScriptURL(const String& value) { m_scriptURL = value; }

    String GetRunningStatus() { return m_runningStatus; }
    void SetRunningStatus(const String& value) { m_runningStatus = value; }

    String GetStatus() { return m_status; }
    void SetStatus(const String& value) { m_status = value; }

    bool HasScriptLastModified() { return m_scriptLastModified.isJust(); }
    double GetScriptLastModified(double defaultValue) { return m_scriptLastModified.isJust() ? m_scriptLastModified.fromJust() : defaultValue; }
    void SetScriptLastModified(double value) { m_scriptLastModified = value; }

    bool HasScriptResponseTime() { return m_scriptResponseTime.isJust(); }
    double GetScriptResponseTime(double defaultValue) { return m_scriptResponseTime.isJust() ? m_scriptResponseTime.fromJust() : defaultValue; }
    void SetScriptResponseTime(double value) { m_scriptResponseTime = value; }

    bool HasControlledClients() { return m_controlledClients.isJust(); }
    protocol::Array<String>* GetControlledClients(protocol::Array<String>* defaultValue) { return m_controlledClients.isJust() ? m_controlledClients.fromJust() : defaultValue; }
    void SetControlledClients(std::unique_ptr<protocol::Array<String>> value) { m_controlledClients = std::move(value); }

    bool HasTargetId() { return m_targetId.isJust(); }
    String GetTargetId(const String& defaultValue) { return m_targetId.isJust() ? m_targetId.fromJust() : defaultValue; }
    void SetTargetId(const String& value) { m_targetId = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ServiceWorkerVersion> clone() const;

    template<int STATE>
    class ServiceWorkerVersionBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            VersionIdSet = 1 << 1,
            RegistrationIdSet = 1 << 2,
            ScriptURLSet = 1 << 3,
            RunningStatusSet = 1 << 4,
            StatusSet = 1 << 5,
            AllFieldsSet = (VersionIdSet | RegistrationIdSet | ScriptURLSet | RunningStatusSet | StatusSet | 0)};


        ServiceWorkerVersionBuilder<STATE | VersionIdSet>& SetVersionId(const String& value)
        {
            static_assert(!(STATE & VersionIdSet), "property versionId should not be set yet");
            m_result->SetVersionId(value);
            return castState<VersionIdSet>();
        }

        ServiceWorkerVersionBuilder<STATE | RegistrationIdSet>& SetRegistrationId(const String& value)
        {
            static_assert(!(STATE & RegistrationIdSet), "property registrationId should not be set yet");
            m_result->SetRegistrationId(value);
            return castState<RegistrationIdSet>();
        }

        ServiceWorkerVersionBuilder<STATE | ScriptURLSet>& SetScriptURL(const String& value)
        {
            static_assert(!(STATE & ScriptURLSet), "property scriptURL should not be set yet");
            m_result->SetScriptURL(value);
            return castState<ScriptURLSet>();
        }

        ServiceWorkerVersionBuilder<STATE | RunningStatusSet>& SetRunningStatus(const String& value)
        {
            static_assert(!(STATE & RunningStatusSet), "property runningStatus should not be set yet");
            m_result->SetRunningStatus(value);
            return castState<RunningStatusSet>();
        }

        ServiceWorkerVersionBuilder<STATE | StatusSet>& SetStatus(const String& value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->SetStatus(value);
            return castState<StatusSet>();
        }

        ServiceWorkerVersionBuilder<STATE>& SetScriptLastModified(double value)
        {
            m_result->SetScriptLastModified(value);
            return *this;
        }

        ServiceWorkerVersionBuilder<STATE>& SetScriptResponseTime(double value)
        {
            m_result->SetScriptResponseTime(value);
            return *this;
        }

        ServiceWorkerVersionBuilder<STATE>& SetControlledClients(std::unique_ptr<protocol::Array<String>> value)
        {
            m_result->SetControlledClients(std::move(value));
            return *this;
        }

        ServiceWorkerVersionBuilder<STATE>& SetTargetId(const String& value)
        {
            m_result->SetTargetId(value);
            return *this;
        }

        std::unique_ptr<ServiceWorkerVersion> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ServiceWorkerVersion;
        ServiceWorkerVersionBuilder() : m_result(new ServiceWorkerVersion()) { }

        template<int STEP> ServiceWorkerVersionBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ServiceWorkerVersionBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::ServiceWorkerVersion> m_result;
    };

    static ServiceWorkerVersionBuilder<0> Create()
    {
        return ServiceWorkerVersionBuilder<0>();
    }

private:
    ServiceWorkerVersion()
    {
    }

    String m_versionId;
    String m_registrationId;
    String m_scriptURL;
    String m_runningStatus;
    String m_status;
    Maybe<double> m_scriptLastModified;
    Maybe<double> m_scriptResponseTime;
    Maybe<protocol::Array<String>> m_controlledClients;
    Maybe<String> m_targetId;
};


class CONTENT_EXPORT ServiceWorkerErrorMessage : public Serializable{
    PROTOCOL_DISALLOW_COPY(ServiceWorkerErrorMessage);
public:
    static std::unique_ptr<ServiceWorkerErrorMessage> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ServiceWorkerErrorMessage() override { }

    String GetErrorMessage() { return m_errorMessage; }
    void SetErrorMessage(const String& value) { m_errorMessage = value; }

    String GetRegistrationId() { return m_registrationId; }
    void SetRegistrationId(const String& value) { m_registrationId = value; }

    String GetVersionId() { return m_versionId; }
    void SetVersionId(const String& value) { m_versionId = value; }

    String GetSourceURL() { return m_sourceURL; }
    void SetSourceURL(const String& value) { m_sourceURL = value; }

    int GetLineNumber() { return m_lineNumber; }
    void SetLineNumber(int value) { m_lineNumber = value; }

    int GetColumnNumber() { return m_columnNumber; }
    void SetColumnNumber(int value) { m_columnNumber = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ServiceWorkerErrorMessage> clone() const;

    template<int STATE>
    class ServiceWorkerErrorMessageBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ErrorMessageSet = 1 << 1,
            RegistrationIdSet = 1 << 2,
            VersionIdSet = 1 << 3,
            SourceURLSet = 1 << 4,
            LineNumberSet = 1 << 5,
            ColumnNumberSet = 1 << 6,
            AllFieldsSet = (ErrorMessageSet | RegistrationIdSet | VersionIdSet | SourceURLSet | LineNumberSet | ColumnNumberSet | 0)};


        ServiceWorkerErrorMessageBuilder<STATE | ErrorMessageSet>& SetErrorMessage(const String& value)
        {
            static_assert(!(STATE & ErrorMessageSet), "property errorMessage should not be set yet");
            m_result->SetErrorMessage(value);
            return castState<ErrorMessageSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | RegistrationIdSet>& SetRegistrationId(const String& value)
        {
            static_assert(!(STATE & RegistrationIdSet), "property registrationId should not be set yet");
            m_result->SetRegistrationId(value);
            return castState<RegistrationIdSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | VersionIdSet>& SetVersionId(const String& value)
        {
            static_assert(!(STATE & VersionIdSet), "property versionId should not be set yet");
            m_result->SetVersionId(value);
            return castState<VersionIdSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | SourceURLSet>& SetSourceURL(const String& value)
        {
            static_assert(!(STATE & SourceURLSet), "property sourceURL should not be set yet");
            m_result->SetSourceURL(value);
            return castState<SourceURLSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | LineNumberSet>& SetLineNumber(int value)
        {
            static_assert(!(STATE & LineNumberSet), "property lineNumber should not be set yet");
            m_result->SetLineNumber(value);
            return castState<LineNumberSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | ColumnNumberSet>& SetColumnNumber(int value)
        {
            static_assert(!(STATE & ColumnNumberSet), "property columnNumber should not be set yet");
            m_result->SetColumnNumber(value);
            return castState<ColumnNumberSet>();
        }

        std::unique_ptr<ServiceWorkerErrorMessage> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ServiceWorkerErrorMessage;
        ServiceWorkerErrorMessageBuilder() : m_result(new ServiceWorkerErrorMessage()) { }

        template<int STEP> ServiceWorkerErrorMessageBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ServiceWorkerErrorMessageBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::ServiceWorkerErrorMessage> m_result;
    };

    static ServiceWorkerErrorMessageBuilder<0> Create()
    {
        return ServiceWorkerErrorMessageBuilder<0>();
    }

private:
    ServiceWorkerErrorMessage()
    {
          m_lineNumber = 0;
          m_columnNumber = 0;
    }

    String m_errorMessage;
    String m_registrationId;
    String m_versionId;
    String m_sourceURL;
    int m_lineNumber;
    int m_columnNumber;
};


class CONTENT_EXPORT WorkerErrorReportedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(WorkerErrorReportedNotification);
public:
    static std::unique_ptr<WorkerErrorReportedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~WorkerErrorReportedNotification() override { }

    protocol::ServiceWorker::ServiceWorkerErrorMessage* GetErrorMessage() { return m_errorMessage.get(); }
    void SetErrorMessage(std::unique_ptr<protocol::ServiceWorker::ServiceWorkerErrorMessage> value) { m_errorMessage = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<WorkerErrorReportedNotification> clone() const;

    template<int STATE>
    class WorkerErrorReportedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ErrorMessageSet = 1 << 1,
            AllFieldsSet = (ErrorMessageSet | 0)};


        WorkerErrorReportedNotificationBuilder<STATE | ErrorMessageSet>& SetErrorMessage(std::unique_ptr<protocol::ServiceWorker::ServiceWorkerErrorMessage> value)
        {
            static_assert(!(STATE & ErrorMessageSet), "property errorMessage should not be set yet");
            m_result->SetErrorMessage(std::move(value));
            return castState<ErrorMessageSet>();
        }

        std::unique_ptr<WorkerErrorReportedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class WorkerErrorReportedNotification;
        WorkerErrorReportedNotificationBuilder() : m_result(new WorkerErrorReportedNotification()) { }

        template<int STEP> WorkerErrorReportedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<WorkerErrorReportedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::WorkerErrorReportedNotification> m_result;
    };

    static WorkerErrorReportedNotificationBuilder<0> Create()
    {
        return WorkerErrorReportedNotificationBuilder<0>();
    }

private:
    WorkerErrorReportedNotification()
    {
    }

    std::unique_ptr<protocol::ServiceWorker::ServiceWorkerErrorMessage> m_errorMessage;
};


class CONTENT_EXPORT WorkerRegistrationUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(WorkerRegistrationUpdatedNotification);
public:
    static std::unique_ptr<WorkerRegistrationUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~WorkerRegistrationUpdatedNotification() override { }

    protocol::Array<protocol::ServiceWorker::ServiceWorkerRegistration>* GetRegistrations() { return m_registrations.get(); }
    void SetRegistrations(std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerRegistration>> value) { m_registrations = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<WorkerRegistrationUpdatedNotification> clone() const;

    template<int STATE>
    class WorkerRegistrationUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            RegistrationsSet = 1 << 1,
            AllFieldsSet = (RegistrationsSet | 0)};


        WorkerRegistrationUpdatedNotificationBuilder<STATE | RegistrationsSet>& SetRegistrations(std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerRegistration>> value)
        {
            static_assert(!(STATE & RegistrationsSet), "property registrations should not be set yet");
            m_result->SetRegistrations(std::move(value));
            return castState<RegistrationsSet>();
        }

        std::unique_ptr<WorkerRegistrationUpdatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class WorkerRegistrationUpdatedNotification;
        WorkerRegistrationUpdatedNotificationBuilder() : m_result(new WorkerRegistrationUpdatedNotification()) { }

        template<int STEP> WorkerRegistrationUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<WorkerRegistrationUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::WorkerRegistrationUpdatedNotification> m_result;
    };

    static WorkerRegistrationUpdatedNotificationBuilder<0> Create()
    {
        return WorkerRegistrationUpdatedNotificationBuilder<0>();
    }

private:
    WorkerRegistrationUpdatedNotification()
    {
    }

    std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerRegistration>> m_registrations;
};


class CONTENT_EXPORT WorkerVersionUpdatedNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(WorkerVersionUpdatedNotification);
public:
    static std::unique_ptr<WorkerVersionUpdatedNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~WorkerVersionUpdatedNotification() override { }

    protocol::Array<protocol::ServiceWorker::ServiceWorkerVersion>* GetVersions() { return m_versions.get(); }
    void SetVersions(std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerVersion>> value) { m_versions = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<WorkerVersionUpdatedNotification> clone() const;

    template<int STATE>
    class WorkerVersionUpdatedNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            VersionsSet = 1 << 1,
            AllFieldsSet = (VersionsSet | 0)};


        WorkerVersionUpdatedNotificationBuilder<STATE | VersionsSet>& SetVersions(std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerVersion>> value)
        {
            static_assert(!(STATE & VersionsSet), "property versions should not be set yet");
            m_result->SetVersions(std::move(value));
            return castState<VersionsSet>();
        }

        std::unique_ptr<WorkerVersionUpdatedNotification> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class WorkerVersionUpdatedNotification;
        WorkerVersionUpdatedNotificationBuilder() : m_result(new WorkerVersionUpdatedNotification()) { }

        template<int STEP> WorkerVersionUpdatedNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<WorkerVersionUpdatedNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::WorkerVersionUpdatedNotification> m_result;
    };

    static WorkerVersionUpdatedNotificationBuilder<0> Create()
    {
        return WorkerVersionUpdatedNotificationBuilder<0>();
    }

private:
    WorkerVersionUpdatedNotification()
    {
    }

    std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerVersion>> m_versions;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse DeliverPushMessage(const String& in_origin, const String& in_registrationId, const String& in_data) = 0;
    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse DispatchSyncEvent(const String& in_origin, const String& in_registrationId, const String& in_tag, bool in_lastChance) = 0;
    virtual DispatchResponse Enable() = 0;
    virtual DispatchResponse InspectWorker(const String& in_versionId) = 0;
    virtual DispatchResponse SetForceUpdateOnPageLoad(bool in_forceUpdateOnPageLoad) = 0;
    virtual DispatchResponse SkipWaiting(const String& in_scopeURL) = 0;
    virtual DispatchResponse StartWorker(const String& in_scopeURL) = 0;
    class CONTENT_EXPORT StopAllWorkersCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~StopAllWorkersCallback() { }
    };
    virtual void StopAllWorkers(std::unique_ptr<StopAllWorkersCallback> callback) = 0;
    virtual DispatchResponse StopWorker(const String& in_versionId) = 0;
    virtual DispatchResponse Unregister(const String& in_scopeURL) = 0;
    virtual DispatchResponse UpdateRegistration(const String& in_scopeURL) = 0;

};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void WorkerErrorReported(std::unique_ptr<protocol::ServiceWorker::ServiceWorkerErrorMessage> errorMessage);
    void WorkerRegistrationUpdated(std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerRegistration>> registrations);
    void WorkerVersionUpdated(std::unique_ptr<protocol::Array<protocol::ServiceWorker::ServiceWorkerVersion>> versions);

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

} // namespace ServiceWorker
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_ServiceWorker_h)
