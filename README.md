## `README.md`

````md
# RudraOS

RudraOS is a custom terminal shell written in C++.

The project is focused on learning:

- terminal architecture
- filesystem operations
- command parsing
- shell design
- interpreter development

The long-term vision is to evolve RudraOS into:

- a modular shell
- a programmable environment
- a BASIC-like scripting system

---

# Current Features

## Implemented Commands

- pwd
- help
- exit

---

# Project Structure

```text
src/
├── commands/
│   ├── pwdCommand.cpp
│   └── pwdCommand.hpp
│
├── shell/
│   ├── commandHandler.cpp
│   ├── commandHandler.hpp
│   ├── parser.cpp
│   └── parser.hpp
│
└── main.cpp
```
````

---

# Build Instructions

## Requirements

- C++17
- CMake 3.10+

---

## Build

```bash
mkdir build
cd build

cmake ..
make
```

---

## Run

```bash
./RudraOs
```

---

# Future Goals

## Shell Features

- ls
- cd
- mkdir
- touch
- rm
- cp
- mv

---

## Advanced Features

- command history
- aliases
- colored terminal output
- scripting support
- pipes
- environment variables

---

## BASIC Interpreter

Planned support for:

```basic
LET x = 10
PRINT x
IF x > 5 THEN
PRINT "large"
ENDIF
```

---

# Author

Built by Rudrana.

````

---

## `JOURNAL.md`

```md
# RudraOS Development Journal

---

# Phase 1
## Terminal Foundation

### Completed

- [x] Initialized CMake project
- [x] Created shell loop
- [x] Added command handler
- [x] Added parser/tokenizer
- [x] Added modular command structure
- [x] Implemented pwd command
- [x] Added Git repository
- [x] Added .gitignore

---

# Current Architecture

```text
main.cpp
    ↓
CommandHandler
    ↓
Parser
    ↓
Commands
````

---

# Current Commands

| Command | Status |
| ------- | ------ |
| pwd     | ✅     |
| help    | ❌     |
| ls      | ❌     |
| mkdir   | ❌     |
| touch   | ❌     |
| rm      | ❌     |
| cp      | ❌     |
| mv      | ❌     |
| cd      | ❌     |

---

# Known Issues

- include path cleanup needed
- naming convention inconsistent
- no error handling yet
- command registration still manual

---

# Next Goals

## Immediate

- [ ] implement ls
- [ ] implement mkdir
- [ ] implement touch
- [ ] implement rm

---

## Mid-Term

- [ ] implement cd
- [ ] add command registry
- [ ] improve parser
- [ ] support quoted arguments

---

## Long-Term

- [ ] build BASIC interpreter
- [ ] scripting support
- [ ] process execution
- [ ] shell variables
- [ ] pipes and redirection

---

# Notes

Current shell is intentionally minimal.

Focus right now:

- architecture clarity
- modularity
- filesystem understanding
- parser fundamentals

```

```

---

# Design Philosophy

RudraOS is intentionally being built from scratch without relying heavily on external shell frameworks.

The goal is to understand:

- how terminals work internally
- how commands are parsed
- how filesystems are accessed
- how interpreters are designed
- how modular systems evolve

The project prioritizes:

- clarity over complexity
- modularity over shortcuts
- learning over speed

---

# Planned Architecture

```text
User Input
    ↓
Shell Loop
    ↓
Parser
    ↓
Command Handler
    ↓
Command Modules
    ↓
Filesystem / System APIs
```

Future architecture:

```text
Shell
├── Command System
├── Filesystem Layer
├── Process Manager
├── Scripting Engine
└── BASIC Interpreter
```

---

# Example Usage

```bash
rudra> pwd
/Users/rudra/Documents/RUDRAOS

rudra> mkdir test

rudra> touch hello.txt

rudra> ls
test
hello.txt
```

---

# Learning Goals

This project is also being used to strengthen understanding of:

- C++
- Object-Oriented Design
- Filesystems
- Parsing
- Interpreters
- Operating System concepts
- Build Systems (CMake)
- Git workflow

---

# Development Status

Current version:

```text
v0.1-prealpha
```

Current focus:

```text
Core shell infrastructure
```

---

# Future Vision

RudraOS may eventually support:

- scripting files
- custom shell language
- plugin system
- process execution
- task automation
- environment variables
- piping and redirection
- configuration files
- shell themes

---

# Inspiration

Inspired by:

- Unix philosophy
- Bash
- PowerShell
- retro operating systems
- early BASIC interpreters
- low-level system tooling
