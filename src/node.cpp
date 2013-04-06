// Copyright (c) 2012 Plenluno All rights reserved.

#include <libnode/node.h>

#include <uv.h>

namespace libj {
namespace node {

void run() {
    uv_run(uv_default_loop(), UV_RUN_DEFAULT);
}

}  // namespace node
}  // namespace libj
