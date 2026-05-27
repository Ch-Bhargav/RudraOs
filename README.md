# Rudra-OS

> A safe terminal sandbox for learning command-line systems without risking the real machine.

---

# Overview

Rudra-OS is a custom terminal environment written in modern C++.

Unlike a traditional shell, Rudra-OS operates inside a controlled sandbox filesystem, allowing users to safely experiment with terminal commands, scripting, and operating-system concepts.

The goal is to create an immersive learning environment where beginners can:

- learn terminal basics
- understand filesystem navigation
- practice shell commands
- explore scripting
- experiment safely

without damaging their actual operating system.

---

# Core Vision

Rudra-OS is evolving toward:

```text
Educational Shell
        +
Virtual Filesystem
        +
Sandboxed Environment
        +
Interactive Tutorials
        +
Custom Scripting Language
```

The project is inspired by:

- Unix philosophy
- retro operating systems
- shell environments
- educational sandboxes
- early BASIC interpreters

---

# Why Rudra-OS Exists

Many beginners avoid learning terminal systems because they fear:

- deleting important files
- damaging the operating system
- using dangerous commands
- breaking configurations

Rudra-OS solves this by creating a completely isolated learning environment.

Users interact only with:

```text
sandbox/
```

instead of their real filesystem.

---

# Current Features

## Implemented

- terminal shell loop
- command parser
- command handler
- modular architecture
- pwd command
- CMake build system
- Git integration

---

# Planned Features

## Shell Commands

- pwd
- ls
- cd
- mkdir
- touch
- rm
- cp
- mv
- clear
- help

---

## Sandbox Features

- isolated virtual filesystem
- protected path validation
- reset sandbox command
- safe command execution

---

## Learning Features

- interactive tutorials
- guided command lessons
- beginner challenges
- command explanations
- practice missions

Example:

```bash
tutorial ls
mission 1
```

---

## Scripting Support

Planned support for a BASIC-inspired scripting language:

```basic
LET x = 10

IF x > 5 THEN
PRINT "large"
ENDIF
```

Future goals:

- variables
- loops
- conditions
- functions
- script execution

---

# Project Structure

```text
Rudra-OS/
│
├── sandbox/
│
├── src/
│   ├── core/
│   ├── commands/
│   ├── filesystem/
│   └── main.cpp
│
├── build/
│
├── README.md
├── JOURNAL.md
├── run.sh
└── CMakeLists.txt
```

---

# Architecture

```text
User Input
    ↓
Shell Loop
    ↓
Parser
    ↓
Command Handler
    ↓
Commands
    ↓
Virtual Filesystem
    ↓
Sandbox
```

---

# Safety Philosophy

Rudra-OS never directly manipulates the user's real filesystem.

All operations are redirected into:

```text
sandbox/
```

This allows users to:

- create files
- delete files
- navigate directories
- experiment freely

without harming the host system.

---

# Build Instructions

## Requirements

- C++17+
- CMake 3.10+

---

## Build & Run

```bash
./run.sh
```

Or manually:

```bash
mkdir build
cd build

cmake ..
make

./RudraOs
```

---

# Development Roadmap

## Phase 1

Core shell infrastructure

- shell loop
- parser
- command system
- filesystem abstraction

---

## Phase 2

Sandbox environment

- virtual filesystem
- path protection
- safe operations

---

## Phase 3

Interactive learning

- tutorials
- challenges
- beginner guidance

---

## Phase 4

Scripting engine

- BASIC interpreter
- runtime environment
- script execution

---

## Phase 5

Advanced systems

- pipes
- variables
- aliases
- package simulation
- process simulation

---

# Long-Term Vision

Rudra-OS may eventually evolve into:

- browser-based terminal playground
- educational operating-system simulator
- cybersecurity training sandbox
- scripting environment
- multiplayer learning shell

---

# Learning Objectives

This project is also a deep dive into:

- C++
- filesystem design
- interpreters
- shell architecture
- operating-system concepts
- parser design
- software architecture
- modular systems

---

# Status

```text
Version: v0.1-prealpha
State: Early Foundation Development
```

---

# Author

Built by Rudrana.

> "Every operating system begins as a blinking cursor and an unreasonable amount of curiosity."
