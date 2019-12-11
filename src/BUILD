package(default_visibility = ["//visibility:public"])
load("@com_github_grpc_grpc//bazel:grpc_build_system.bzl", "grpc_proto_library")
load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

proto_library(
    name = "test_proto",
    srcs = ["test.proto"],
)

cc_proto_library(
    name = "test_cc_proto",
    deps = [":test_proto"],
)

cc_grpc_library(
    name = "test_cc_grpc",
    srcs = [":test_proto"],
    grpc_only = True,
    deps = [":test_cc_proto"],
)

cc_binary(
    name = "testing",
    srcs = ["test.cpp"],
    deps = [":test_cc_grpc", "@com_github_grpc_grpc//:grpc++"]
)

