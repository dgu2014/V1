#pragma once

#ifdef V1_PLATFORM_WINDOWS

extern V1::Application* V1::CreateApplication();

int main(int argc, char** argv)
{
    auto app = V1::CreateApplication();
    app->Run();
    delete app;
}

#endif
