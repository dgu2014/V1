#pragma once

#ifdef V1_PLATFORM_WINDOWS
    #ifdef V1_BUILD_DLL
        #define V1_API __declspec(dllexport)
    #else
        #define V1_API __declspec(dllimport) 
    #endif
#else
    #error V1 only support Windows!
#endif
