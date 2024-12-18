#include "FileManager.hpp"

int main(int argc, char **argv)
{
    try
    {
        FileManager::check_args(argc, argv);
        FileManager fm(argv);
        fm.process_file();
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
