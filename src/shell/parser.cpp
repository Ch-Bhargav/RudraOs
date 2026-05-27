#include <vector>
#include <string>
#include <sstream>
#include "parser.hpp"

std::vector<std::string> Parser::tokenize(const std::string &input)
{
    std::vector<std::string> tokens;
    std::string currentToken;

    std::stringstream ss(input);
    while (ss >> currentToken)
    {
        tokens.push_back(currentToken);
    }
    return tokens;
}