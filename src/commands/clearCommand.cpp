#include <cstdlib>
#include "clearCommand.hpp"

void ClearCommand::execute()
{
    // Clear the terminal screen
    std::system("clear");
}