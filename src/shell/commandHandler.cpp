#include <string>
#include <iostream>

#include "commandHandler.hpp"
#include "parser.hpp"

#include "../commands/pwdCommand.hpp"
#include "../commands/lsCommand.hpp"
#include "../commands/mkdirCommand.hpp"
#include "../commands/helpCommand.hpp"
#include "../commands/clearCommand.hpp"

void CommandHandler::handleCommand(const std::string &command)
{
    Parser parser;
    std::vector<std::string> tokens = parser.tokenize(command);

    if (tokens.empty())
        return;

    if (tokens[0] == "pwd")
    {
        // Handle pwd command
        PWDCommand pwdCommand;
        pwdCommand.execute();
    }
    else if (tokens[0] == "ls")
    {
        // Handle ls command
        LsCommand lsCommand;
        lsCommand.execute();
    }
    else if (tokens[0] == "mkdir")
    {
        // Handle mkdir command
        MkdirCommand mkdirCommand;
        mkdirCommand.execute(std::vector<std::string>(tokens.begin() + 1, tokens.end()));
    }
    else if (tokens[0] == "help")
    {
        // Handle help command
        HelpCommand helpCommand;
        helpCommand.execute();
    }
    else if (tokens[0] == "clear")
    {
        // Handle clear command
        ClearCommand clearCommand;
        clearCommand.execute();
    }
    else
    {
        std::cout << "Unknown Command: " << tokens[0] << std::endl;
    }
}