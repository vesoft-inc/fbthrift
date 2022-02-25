/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/ServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_types.h"
#include "thrift/annotation/gen-cpp2/cpp_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class ServiceSvAsyncIf {
 public:
  virtual ~ServiceSvAsyncIf() {}
  virtual void async_tm_func(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>>> callback, std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::std::string> p_arg2, std::unique_ptr<::cpp2::Foo> p_arg3) = 0;
  virtual folly::Future<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>> future_func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::std::string> p_arg2, std::unique_ptr<::cpp2::Foo> p_arg3) = 0;
  virtual folly::SemiFuture<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>> semifuture_func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::std::string> p_arg2, std::unique_ptr<::cpp2::Foo> p_arg3) = 0;
};

class ServiceAsyncProcessor;

class ServiceServiceInfoHolder : public apache::thrift::ServiceInfoHolder {
  public:
   apache::thrift::ServiceRequestInfoMap const& requestInfoMap() const override;
   static apache::thrift::ServiceRequestInfoMap staticRequestInfoMap();
};

class ServiceSvIf : public ServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "Service"; }

  typedef ServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;
  std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> getServiceRequestInfoMap() const override;

  virtual ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> /*arg1*/, std::unique_ptr<::std::string> /*arg2*/, std::unique_ptr<::cpp2::Foo> /*arg3*/);
  folly::Future<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>> future_func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::std::string> p_arg2, std::unique_ptr<::cpp2::Foo> p_arg3) override;
  folly::SemiFuture<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>> semifuture_func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::std::string> p_arg2, std::unique_ptr<::cpp2::Foo> p_arg3) override;
  void async_tm_func(std::unique_ptr<apache::thrift::HandlerCallback<::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t>>> callback, std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> p_arg1, std::unique_ptr<::std::string> p_arg2, std::unique_ptr<::cpp2::Foo> p_arg3) override;
 private:
  static ServiceServiceInfoHolder __fbthrift_serviceInfoHolder;
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_func{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class ServiceSvNull : public ServiceSvIf {
 public:
  ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> func(std::unique_ptr<::apache::thrift::adapt_detail::adapted_t<my::Adapter2, ::std::string>> /*arg1*/, std::unique_ptr<::std::string> /*arg2*/, std::unique_ptr<::cpp2::Foo> /*arg3*/) override;
};

class ServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ServiceSvIf* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  void executeRequest(apache::thrift::ServerRequest&& serverRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<ServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const ServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const ServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_func(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void executeRequest_func(apache::thrift::ServerRequest&& serverRequest);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_func(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_func(apache::thrift::ContextStack* ctx, ::apache::thrift::adapt_detail::adapted_t<my::Adapter1, ::std::int32_t> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_func(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  ServiceAsyncProcessor(ServiceSvIf* iface) :
      iface_(iface) {}
  ~ServiceAsyncProcessor() override {}
};

} // cpp2
