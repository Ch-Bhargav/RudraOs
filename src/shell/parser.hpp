#pragma once

#include <string>
#include <vector>

class Parser
{
public:
    std::vector<std::string> tokenize(const std::string &input);
};