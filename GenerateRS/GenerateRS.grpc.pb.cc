// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: GenerateRS.proto

#include "GenerateRS.pb.h"
#include "GenerateRS.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace AppleRemoteAuth {

static const char* aid_method_names[] = {
  "/AppleRemoteAuth.aid/GenerateRS",
};

std::unique_ptr< aid::Stub> aid::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< aid::Stub> stub(new aid::Stub(channel, options));
  return stub;
}

aid::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GenerateRS_(aid_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status aid::Stub::GenerateRS(::grpc::ClientContext* context, const ::AppleRemoteAuth::RemoteDeviceInfo& request, ::AppleRemoteAuth::rsdata* response) {
  return ::grpc::internal::BlockingUnaryCall< ::AppleRemoteAuth::RemoteDeviceInfo, ::AppleRemoteAuth::rsdata, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GenerateRS_, context, request, response);
}

void aid::Stub::async::GenerateRS(::grpc::ClientContext* context, const ::AppleRemoteAuth::RemoteDeviceInfo* request, ::AppleRemoteAuth::rsdata* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::AppleRemoteAuth::RemoteDeviceInfo, ::AppleRemoteAuth::rsdata, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenerateRS_, context, request, response, std::move(f));
}

void aid::Stub::async::GenerateRS(::grpc::ClientContext* context, const ::AppleRemoteAuth::RemoteDeviceInfo* request, ::AppleRemoteAuth::rsdata* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GenerateRS_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::AppleRemoteAuth::rsdata>* aid::Stub::PrepareAsyncGenerateRSRaw(::grpc::ClientContext* context, const ::AppleRemoteAuth::RemoteDeviceInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::AppleRemoteAuth::rsdata, ::AppleRemoteAuth::RemoteDeviceInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GenerateRS_, context, request);
}

::grpc::ClientAsyncResponseReader< ::AppleRemoteAuth::rsdata>* aid::Stub::AsyncGenerateRSRaw(::grpc::ClientContext* context, const ::AppleRemoteAuth::RemoteDeviceInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGenerateRSRaw(context, request, cq);
  result->StartCall();
  return result;
}

aid::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      aid_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< aid::Service, ::AppleRemoteAuth::RemoteDeviceInfo, ::AppleRemoteAuth::rsdata, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](aid::Service* service,
             ::grpc::ServerContext* ctx,
             const ::AppleRemoteAuth::RemoteDeviceInfo* req,
             ::AppleRemoteAuth::rsdata* resp) {
               return service->GenerateRS(ctx, req, resp);
             }, this)));
}

aid::Service::~Service() {
}

::grpc::Status aid::Service::GenerateRS(::grpc::ServerContext* context, const ::AppleRemoteAuth::RemoteDeviceInfo* request, ::AppleRemoteAuth::rsdata* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace AppleRemoteAuth

