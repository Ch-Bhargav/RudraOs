#pragma once
#include <string>
#include <vector>

class HistoryCommand
{
private:
    std::vector<std::string> commandHistory;

public:
    void addCommand(const std::string &command);
    void show();
};