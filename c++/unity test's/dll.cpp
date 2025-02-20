#include <iostream>

#ifdef _WIN32
    #define EXPORT_API __attribute__((dllexport))
#else
    #define EXPORT_API
#endif

extern "C" {
    EXPORT_API void showmessage() {
        std::cout << "Hello from C++ Plugin!" << std::endl;
    }
}
