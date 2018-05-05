// Copyright 2004-present Facebook. All Rights Reserved.
// Generated by: //native/museum/run_codegen.sh
// This is generated code -- do not modify manually.

// @generated SignedSource<<b78d3b76faf5050cb2d9cdf90c3bbbf1>>
// @model md5 751560b4aef258378afda8d49f08b0fc


#include <museum/5.0.0/art/runtime/base/logging.h>
#include <museum/5.0.0/art/runtime/mirror/array.h>
#include <museum/5.0.0/art/runtime/mirror/art_method.h>
#include <museum/5.0.0/art/runtime/runtime.h>
#include <museum/5.0.0/art/runtime/thread.h>
#include <museum/5.0.0/art/runtime/utils.h>
#include <new>

#include <museum/libs.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION {



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6mirror5Array35ThrowArrayIndexOutOfBoundsExceptionEi() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6mirror5Array35ThrowArrayIndexOutOfBoundsExceptionEi",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { namespace mirror { 

  
  void Array::ThrowArrayIndexOutOfBoundsException(int p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6mirror5Array35ThrowArrayIndexOutOfBoundsExceptionEi
      <void
        (Array *, int)>()
      (this, p1);
  }
} } // namespace art::mirror::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6mirror9ArtMethod13IsProxyMethodEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6mirror9ArtMethod13IsProxyMethodEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { namespace mirror { 

  
  bool ArtMethod::IsProxyMethod()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6mirror9ArtMethod13IsProxyMethodEv
      <bool
        (ArtMethod *)>()
      (this);
  }
} } // namespace art::mirror::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art10LogMessageD1Ev() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art10LogMessageD1Ev",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
   LogMessage::~LogMessage()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessageD1Ev
      <void
        (LogMessage *)>()
      (this);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art14LogMessageDataC1EPKciii() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art14LogMessageDataC1EPKciii",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
   LogMessageData::LogMessageData(char const* p1, int p2, LogSeverity p3, int p4)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art14LogMessageDataC1EPKciii
      <void
        (LogMessageData *, char const*, int, LogSeverity, int)>()
      (this, p1, p2, p3, p4);
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  bool Runtime::IsShuttingDown(Thread* p1)   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE
      <bool
        (Runtime *, Thread*)>()
      (this, p1);
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art7Runtime9instance_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art7Runtime9instance_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  Runtime*& Runtime::instance_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime9instance_E
      <Runtime*
        >()
      ;
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread11is_started_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread11is_started_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef is_started_
  #undef is_started_
#else
  #error "is_started_ is not method-wrapped and will not be proxied correctly"
#endif
  
  bool& Thread::is_started_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread11is_started_E
      <bool
        >()
      ;
  }
} // namespace art::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6Thread17pthread_key_self_E() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6Thread17pthread_key_self_E",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 
#ifdef pthread_key_self_
  #undef pthread_key_self_
#else
  #error "pthread_key_self_ is not method-wrapped and will not be proxied correctly"
#endif
  
  pthread_key_t& Thread::pthread_key_self_()   {
    return *
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread17pthread_key_self_E
      <pthread_key_t
        >()
      ;
  }
} // namespace art::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN3art6GetTidEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN3art6GetTidEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace art { 

  
  pid_t GetTid()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6GetTidEv
      <pid_t
        ()>()
      ();
  }
} // namespace art::


namespace libart {
  void preinitSymbols() {
    using namespace ::facebook::museum::MUSEUM_VERSION::art::mirror;
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6mirror5Array35ThrowArrayIndexOutOfBoundsExceptionEi
        <void
          (Array *, int)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6mirror9ArtMethod13IsProxyMethodEv
        <bool
          (ArtMethod *)>();
    
    
    using namespace ::facebook::museum::MUSEUM_VERSION::art;
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art10LogMessageD1Ev
        <void
          (LogMessage *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art14LogMessageDataC1EPKciii
        <void
          (LogMessageData *, char const*, int, LogSeverity, int)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime14IsShuttingDownEPNS_6ThreadE
        <bool
          (Runtime *, Thread*)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art7Runtime9instance_E
        <Runtime*
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread11is_started_E
        <bool
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6Thread17pthread_key_self_E
        <pthread_key_t
          >();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN3art6GetTidEv
        <pid_t
          ()>();
    
    
  }
} // namespace libart

} } } // namespace facebook::museum::MUSEUM_VERSION
