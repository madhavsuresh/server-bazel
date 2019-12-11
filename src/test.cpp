//
// Created by madhav on 12/11/19.
//

#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include "src/test.grpc.pb.h"

using test::TestReq;
using test::TestResp;
using test::Test;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;


class TestClient {
	public:
		TestClient(std::shared_ptr<Channel> channel)
		: stub_(Test::NewStub(channel)) {}
	
	void Test() {
		TestReq request;
		TestResp resp;
		ClientContext context;
		Status status = stub_->Test(&context, request, &resp);
	}

	private:
		std::unique_ptr<Test::Stub> stub_;
};

int main() {

}
