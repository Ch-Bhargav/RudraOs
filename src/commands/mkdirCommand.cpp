#include "mkdirCommand.hpp"

#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void MkdirCommand::execute(const std::vector<std::string> &folderName)
{
    if (folderName.size() != 1)
    {
        std::cout << "Usage: mkdir <folder_name>" << std::endl;
        return;
    }
    else
    {
        try
        {
            fs::create_directory(folderName[0]);
        }
        catch (const std::exception &e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
}
