#pragma once

#include "Core.h"

namespace V1
{
    class V1_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

// To be define in CLIENT
    Application* CreateApplication();
}



