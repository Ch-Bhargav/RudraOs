#include <iostream>
#include <string>

#include "shell/commandHandler.hpp"

int main()
{

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