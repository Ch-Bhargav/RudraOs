#include <string>

#include "commandHandler.hpp"
#include "parser.hpp"

#include "../commands/pwdCommand.hpp"

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
}