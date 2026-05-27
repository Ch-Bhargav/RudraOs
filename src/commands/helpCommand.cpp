#include "helpCommand.hpp"
#include <iostream>

void HelpCommand::execute()
{
    std::cout << "Available Commands:" << std::endl;
    std::cout << "  pwd   - Print the current working directory" << std::endl;
    std::cout << "  ls    - List files and directories in the current directory" << std::endl;
    std::cout << "  mkdir <folder_name> - Create a new directory with the specified name" << std::endl;
    std::cout << "  help  - Display this help message" << std::endl;
    std::cout << "  exit  - Exit the shell" << std::endl;
}