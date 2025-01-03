// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_Forward_h
#define headless_protocol_Forward_h

#include "headless/public/headless_export.h"
#include "headless/lib/browser/protocol/protocol_string.h"

#include <vector>

namespace headless {
namespace protocol {

template<typename T> class Array;
class DictionaryValue;
class DispatchResponse;
class ErrorSupport;
class FundamentalValue;
class ListValue;
template<typename T> class Maybe;
class Object;
using Response = DispatchResponse;
class SerializedValue;
class StringValue;
class UberDispatcher;
class Value;

} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_Forward_h)


// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_Allocator_h
#define headless_protocol_Allocator_h

namespace headless {
namespace protocol {

enum NotNullTagEnum { NotNullLiteral };

#define PROTOCOL_DISALLOW_NEW()                                 \
    private:                                                    \
        void* operator new(size_t) = delete;                    \
        void* operator new(size_t, NotNullTagEnum, void*) = delete; \
        void* operator new(size_t, void*) = delete;             \
    public:

#define PROTOCOL_DISALLOW_COPY(ClassName) \
    private: \
        ClassName(const ClassName&) = delete; \
        ClassName& operator=(const ClassName&) = delete

} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_Allocator_h)


// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef headless_protocol_FrontendChannel_h
#define headless_protocol_FrontendChannel_h

namespace headless {
namespace protocol {

class HEADLESS_EXPORT Serializable {
public:
    virtual String serialize() = 0;
    virtual ~Serializable() = default;
};

class HEADLESS_EXPORT FrontendChannel {
public:
    virtual ~FrontendChannel() { }
    virtual void sendProtocolResponse(int callId, std::unique_ptr<Serializable> message) = 0;
    virtual void sendProtocolNotification(std::unique_ptr<Serializable> message) = 0;
    virtual void flushProtocolNotifications() = 0;
};

} // namespace headless
} // namespace protocol

#endif // !defined(headless_protocol_FrontendChannel_h)
