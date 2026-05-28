#include <iostream>
#include <string>

#include "shell/commandHandler.hpp"
#include "commands/historyCommand.hpp"

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
    HistoryCommand history;

    while (true)
    {

        std::cout << "rudra> ";

        std::getline(std::cin, input);
        history.addCommand(input);

        if (input == "exit")
            break;

        if (input == "history")
        {
            history.show();
            continue;
        }

        handler.handleCommand(input);
    }

    return 0;
}