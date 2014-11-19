// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// Namespace ERR_F

namespace ERR_F {

    class Interface : public Service::Interface {
    public:
        Interface();
        ~Interface();
        /**
         * Gets the string port name used by CTROS for the service
         * @return Port name of service
         */
        std::string GetPortName() const {
            return "err:f";
        }
    };

} // namespace