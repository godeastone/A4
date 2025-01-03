// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Forward_h
#define protocol_Forward_h

#include "chrome/browser/devtools/protocol_string.h"

#include <vector>

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

} // namespace protocol

#endif // !defined(protocol_Forward_h)


// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Allocator_h
#define protocol_Allocator_h

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

} // namespace protocol

#endif // !defined(protocol_Allocator_h)


// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_FrontendChannel_h
#define protocol_FrontendChannel_h

namespace protocol {

class  Serializable {
public:
    virtual String serialize() = 0;
    virtual ~Serializable() = default;
};

class  FrontendChannel {
public:
    virtual ~FrontendChannel() { }
    virtual void sendProtocolResponse(int callId, std::unique_ptr<Serializable> message) = 0;
    virtual void sendProtocolNotification(std::unique_ptr<Serializable> message) = 0;
    virtual void flushProtocolNotifications() = 0;
};

} // namespace protocol

#endif // !defined(protocol_FrontendChannel_h)
