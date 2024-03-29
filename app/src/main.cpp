#include "appconfig.h"

#include <iostream>
#include <filesystem>
#include <string>

int main(int argc, char** argv)
{
    std::cout << "Starting " << std::filesystem::path(argv[0]).stem().string() << "..." << std::endl;
    // report version
    std::cout << " Version " << APP_VERSION_MAJOR << "." << APP_VERSION_MINOR << std::endl;




    std::cout << "\nDone\n" << std::endl;
    return EXIT_SUCCESS;
}
