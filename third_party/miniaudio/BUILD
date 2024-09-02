load("@rules_cc//cc:defs.bzl", "cc_library")

package(
    default_visibility = ["//visibility:public"],
)

filegroup(
    name = "miniaudio_srcs",
    srcs = ["miniaudio.h"],
)

cc_library(
    name = "miniaudio",
    hdrs = [":miniaudio_srcs"],
)