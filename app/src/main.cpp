#include <iostream>
#include <filesystem>

int main(int argc, char** argv)
{
    std::cout << "Starting " << std::filesystem::path(argv[0]).stem() << "..." << std::endl;





    std::cout << "\nDone\n" << std::endl;
    return EXIT_SUCCESS;
}
