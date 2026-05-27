#include <iostream>
#include <filesystem>

#include "lsCommand.hpp"

namespace fs = std::filesystem;

void LsCommand::execute()
{
    for (const auto &entr : fs::directory_iterator(fs::current_path()))
    {
        std::cout << entr.path().filename() << std::endl;
    }
}