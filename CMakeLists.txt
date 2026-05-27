cmake_minimum_required(VERSION 3.10)

project(RudraOs)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    RudraOs
    src/main.cpp

    src/shell/parser.cpp
    src/shell/commandHandler.cpp


    src/commands/pwdCommand.cpp
)