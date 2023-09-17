// #if _WIN64
//     #include <Windows.h>
//     #include <iostream>

//     int main()
//     {
//         std::cout << "Hello Windows" << std::endl;
//     }

// #elif defined(__linux__)
//     #include <pthread.h>
//     #include <iostream>

//     int main()
//     {
//         std::cout << "Hello Linux " << std::endl;
//     }

// #elif defined(__APPLE__) && defined(__MACH__)
//     #include <unistd.h>
//     #include <iostream>

//     int main()
//     {
//         std::cout << "Hello Apple "<< std::endl;
//     }

// #else 
//     #error "What is this !!!"

// #endif 


#include <iostream>


#if __has_include(<boost/filesystem.hpp>)
    #include <boost/filesystem.hpp>
    namespace fs = boost::filesystem;

#elif __has_include(<filesystem>)
    #include <filesystem>
    namespace fs = std::filesystem;

#else 
    #error "there is not any filesystem header file"
#endif 

int main()
{

    std::cout << "Hello World " << std::endl;
   
    std::cin.get();
    return EXIT_SUCCESS;
}