// Copyright (c) 2016, Baidu.com, Inc. All Rights Reserved
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once
#include "subsystem.h"

namespace baidu {
namespace galaxy {
namespace cgroup {

class TcpThrotSubsystem : public Subsystem {
public:
    TcpThrotSubsystem();
    ~TcpThrotSubsystem();

    std::string Name();
    baidu::galaxy::util::ErrorCode Construct();
    baidu::galaxy::util::ErrorCode Collect(std::map<std::string, AutoValue>& stat);
    boost::shared_ptr<Subsystem> Clone();

};
}
}
}
