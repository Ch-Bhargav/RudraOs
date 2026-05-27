#include <iostream>
#include <string>

#include "shell/commandHandler.hpp"

int main()
{
    std::cout << R"(

██████╗ ██╗   ██╗██████╗ ██████╗  █████╗        ██████╗ ███████╗
██╔══██╗██║   ██║██╔══██╗██╔══██╗██╔══██╗      ██╔═══██╗██╔════╝
██████╔╝██║   ██║██║  ██║██████╔╝███████║█████╗██║   ██║███████╗
██╔══██╗██║   ██║██║  ██║██╔══██╗██╔══██║╚════╝██║   ██║╚════██║
██║  ██║╚██████╔╝██████╔╝██║  ██║██║  ██║      ╚██████╔╝███████║
╚═╝  ╚═╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝       ╚═════╝ ╚══════╝

             Rudra-OS Terminal v0.1-prealpha
          A custom shell written in modern C++

Type 'help' to list available commands.
Type 'exit' to quit the shell.

)" << std::endl;

    std::string input;

    CommandHandler handler;

    while (true)
    {

        std::cout << "rudra> ";

        std::getline(std::cin, input);

        if (input == "exit")
            break;

        handler.handleCommand(input);
    }

    return 0;
}