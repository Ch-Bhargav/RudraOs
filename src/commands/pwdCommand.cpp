#include <iostream>
#include "pwdCommand.hpp"
#include <filesystem>

void PWDCommand::execute()
{
    std::cout << std::filesystem::current_path() << std::endl;
}