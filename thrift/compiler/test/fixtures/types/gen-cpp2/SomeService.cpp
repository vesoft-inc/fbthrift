/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.tcc"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace apache { namespace thrift { namespace fixtures { namespace types {
std::unique_ptr<apache::thrift::AsyncProcessor> SomeServiceSvIf::getProcessor() {
  return std::make_unique<SomeServiceAsyncProcessor>(this);
}

SomeServiceSvIf::CreateMethodMetadataResult SomeServiceSvIf::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<SomeServiceAsyncProcessor>();
}

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> SomeServiceSvIf::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

  SomeServiceServiceInfoHolder SomeServiceSvIf::__fbthrift_serviceInfoHolder;


void SomeServiceSvIf::bounce_map(::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("bounce_map");
}

folly::SemiFuture<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> SomeServiceSvIf::semifuture_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_bounce_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::apache::thrift::fixtures::types::SomeMap>();
  bounce_map(*ret, std::move(p_m));
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> SomeServiceSvIf::future_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_bounce_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_bounce_map(std::move(p_m)), getInternalKeepAlive());
}

void SomeServiceSvIf::async_tm_bounce_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>>> callback, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_bounce_map.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_bounce_map.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_bounce_map(std::move(p_m));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_bounce_map(std::move(p_m));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::apache::thrift::fixtures::types::SomeMap _return;
        bounce_map(_return, std::move(p_m));
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void SomeServiceSvIf::binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& /*_return*/, std::unique_ptr<::std::vector<::std::int64_t>> /*r*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("binary_keyed_map");
}

folly::SemiFuture<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> SomeServiceSvIf::semifuture_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  auto ret = std::make_unique<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>();
  binary_keyed_map(*ret, std::move(p_r));
  return folly::makeSemiFuture(std::move(ret));
}

folly::Future<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> SomeServiceSvIf::future_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_binary_keyed_map(std::move(p_r)), getInternalKeepAlive());
}

void SomeServiceSvIf::async_tm_binary_keyed_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>> callback, std::unique_ptr<::std::vector<::std::int64_t>> p_r) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
  auto invocationType = __fbthrift_invocation_binary_keyed_map.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
        __fbthrift_invocation_binary_keyed_map.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_binary_keyed_map(std::move(p_r));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_binary_keyed_map(std::move(p_r));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t> _return;
        binary_keyed_map(_return, std::move(p_r));
        callback->result(_return);
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void SomeServiceSvNull::bounce_map(::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/) {}

void SomeServiceSvNull::binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& /*_return*/, std::unique_ptr<::std::vector<::std::int64_t>> /*r*/) {}



const char* SomeServiceAsyncProcessor::getServiceName() {
  return "SomeService";
}

void SomeServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<SomeServiceSvIf>::gen(response);
}

void SomeServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

void SomeServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void SomeServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const SomeServiceAsyncProcessor::ProcessMap& SomeServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const SomeServiceAsyncProcessor::ProcessMap SomeServiceAsyncProcessor::kOwnProcessMap_ {
  {"bounce_map",
    {&SomeServiceAsyncProcessor::setUpAndProcess_bounce_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::setUpAndProcess_bounce_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_bounce_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_bounce_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"binary_keyed_map",
    {&SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_binary_keyed_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &SomeServiceAsyncProcessor::executeRequest_binary_keyed_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& SomeServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap SomeServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"bounce_map",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "SomeService.bounce_map",
     std::nullopt}},
  {"binary_keyed_map",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "SomeService.binary_keyed_map",
     std::nullopt}},
  };

  return requestInfoMap;
}
}}}} // apache::thrift::fixtures::types
