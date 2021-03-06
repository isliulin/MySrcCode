// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.0
//
// <auto-generated>
//
// Generated from file `Caculator.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Caculator_h__
#define __Caculator_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace MCal
{

class Cal;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::MCal::Cal>&);
::IceProxy::Ice::Object* upCast(::IceProxy::MCal::Cal*);

}

}

namespace MCal
{

class Cal;
bool operator==(const Cal&, const Cal&);
bool operator<(const Cal&, const Cal&);
::Ice::Object* upCast(::MCal::Cal*);
typedef ::IceInternal::Handle< ::MCal::Cal> CalPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::MCal::Cal> CalPrx;
void __patch(CalPtr&, const ::Ice::ObjectPtr&);

}

namespace MCal
{

class Callback_Cal_add_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Cal_add_Base> Callback_Cal_addPtr;

class Callback_Cal_sub_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Cal_sub_Base> Callback_Cal_subPtr;

}

namespace IceProxy
{

namespace MCal
{

class Cal : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int add(::Ice::Int num1, ::Ice::Int num2)
    {
        return add(num1, num2, 0);
    }
    ::Ice::Int add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx)
    {
        return add(num1, num2, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_add(::Ice::Int num1, ::Ice::Int num2, const ::IceInternal::Function<void (::Ice::Int)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_add(num1, num2, 0, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_add(::Ice::Int num1, ::Ice::Int num2, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_add(num1, num2, 0, ::Ice::newCallback(completed, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& ctx, const ::IceInternal::Function<void (::Ice::Int)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_add(num1, num2, &ctx, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_add(num1, num2, &ctx, ::Ice::newCallback(completed, sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context* ctx, const ::IceInternal::Function<void (::Ice::Int)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception, const ::IceInternal::Function<void (bool)>& sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (::Ice::Int)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::MCal::CalPrx __proxy = ::MCal::CalPrx::uncheckedCast(__result->getProxy());
                ::Ice::Int __ret;
                try
                {
                    __ret = __proxy->end_add(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (::Ice::Int)> _response;
        };
        return begin_add(num1, num2, ctx, new Cpp11CB(response, exception, sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_add(::Ice::Int num1, ::Ice::Int num2)
    {
        return begin_add(num1, num2, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx)
    {
        return begin_add(num1, num2, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_add(num1, num2, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_add(num1, num2, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_add(::Ice::Int num1, ::Ice::Int num2, const ::MCal::Callback_Cal_addPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_add(num1, num2, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_add(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx, const ::MCal::Callback_Cal_addPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_add(num1, num2, &__ctx, __del, __cookie);
    }

    ::Ice::Int end_add(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_add(::Ice::Int, ::Ice::Int, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    ::Ice::Int sub(::Ice::Int num1, ::Ice::Int num2)
    {
        return sub(num1, num2, 0);
    }
    ::Ice::Int sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx)
    {
        return sub(num1, num2, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::IceInternal::Function<void (::Ice::Int)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_sub(num1, num2, 0, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_sub(num1, num2, 0, ::Ice::newCallback(completed, sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& ctx, const ::IceInternal::Function<void (::Ice::Int)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_sub(num1, num2, &ctx, response, exception, sent);
    }
    ::Ice::AsyncResultPtr
    begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_sub(num1, num2, &ctx, ::Ice::newCallback(completed, sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context* ctx, const ::IceInternal::Function<void (::Ice::Int)>& response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& exception, const ::IceInternal::Function<void (bool)>& sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (::Ice::Int)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::MCal::CalPrx __proxy = ::MCal::CalPrx::uncheckedCast(__result->getProxy());
                ::Ice::Int __ret;
                try
                {
                    __ret = __proxy->end_sub(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (::Ice::Int)> _response;
        };
        return begin_sub(num1, num2, ctx, new Cpp11CB(response, exception, sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_sub(::Ice::Int num1, ::Ice::Int num2)
    {
        return begin_sub(num1, num2, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx)
    {
        return begin_sub(num1, num2, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_sub(num1, num2, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_sub(num1, num2, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::MCal::Callback_Cal_subPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_sub(num1, num2, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_sub(::Ice::Int num1, ::Ice::Int num2, const ::Ice::Context& __ctx, const ::MCal::Callback_Cal_subPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_sub(num1, num2, &__ctx, __del, __cookie);
    }

    ::Ice::Int end_sub(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::Int sub(::Ice::Int, ::Ice::Int, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_sub(::Ice::Int, ::Ice::Int, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<Cal> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_secure(bool __secure) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_twoway() const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_oneway() const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_batchOneway() const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_datagram() const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_batchDatagram() const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_compress(bool __compress) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Cal> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<Cal*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace MCal
{

class Cal : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual ::Ice::Int sub(::Ice::Int, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace MCal
{

class Cal : virtual public ::IceDelegate::MCal::Cal,
            virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual ::Ice::Int sub(::Ice::Int, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace MCal
{

class Cal : virtual public ::IceDelegate::MCal::Cal,
            virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual ::Ice::Int sub(::Ice::Int, ::Ice::Int, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace MCal
{

class Cal : virtual public ::Ice::Object
{
public:

    typedef CalPrx ProxyType;
    typedef CalPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int add(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___add(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::Int sub(::Ice::Int, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___sub(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const Cal& l, const Cal& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Cal& l, const Cal& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace MCal
{

template<class T>
class CallbackNC_Cal_add : public Callback_Cal_add_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(::Ice::Int);

    CallbackNC_Cal_add(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::MCal::CalPrx __proxy = ::MCal::CalPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_add(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_Cal_addPtr
newCallback_Cal_add(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Cal_add<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Cal_addPtr
newCallback_Cal_add(T* instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Cal_add<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Cal_add : public Callback_Cal_add_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(::Ice::Int, const CT&);

    Callback_Cal_add(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::MCal::CalPrx __proxy = ::MCal::CalPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_add(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_Cal_addPtr
newCallback_Cal_add(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Cal_add<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Cal_addPtr
newCallback_Cal_add(T* instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Cal_add<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_Cal_sub : public Callback_Cal_sub_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(::Ice::Int);

    CallbackNC_Cal_sub(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::MCal::CalPrx __proxy = ::MCal::CalPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_sub(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_Cal_subPtr
newCallback_Cal_sub(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Cal_sub<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Cal_subPtr
newCallback_Cal_sub(T* instance, void (T::*cb)(::Ice::Int), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Cal_sub<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Cal_sub : public Callback_Cal_sub_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(::Ice::Int, const CT&);

    Callback_Cal_sub(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::MCal::CalPrx __proxy = ::MCal::CalPrx::uncheckedCast(__result->getProxy());
        ::Ice::Int __ret;
        try
        {
            __ret = __proxy->end_sub(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_Cal_subPtr
newCallback_Cal_sub(const IceUtil::Handle<T>& instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Cal_sub<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Cal_subPtr
newCallback_Cal_sub(T* instance, void (T::*cb)(::Ice::Int, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Cal_sub<T, CT>(instance, cb, excb, sentcb);
}

}

#endif
