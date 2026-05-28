#include <string>
#include <iostream>
#include "historyCommand.hpp"
#include <vector>

void HistoryCommand::addCommand(const std::string &command)
{
    commandHistory.push_back(command);
}
void HistoryCommand::show()
{
    std::cout << "Command History:" << std::endl;
    for (size_t i = 0; i < commandHistory.size(); ++i)
    {
        std::cout << i + 1 << ": " << commandHistory[i] << std::endl;
    }
}