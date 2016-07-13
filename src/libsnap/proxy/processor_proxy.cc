#include <grpc++/grpc++.h>

#include "plugin.grpc.pb.h"

#include "plugin.h"

using grpc::Server;
using grpc::ServerContext;
using grpc::Status;

using rpc::Processor;
using rpc::MetricsArg;
using rpc::MetricsReply;

using Plugin::Proxy;

Status ProcessorImpl::Process(ServerContext* context, const MetricsArg* request,
                              MetricsReply* response) {
}
