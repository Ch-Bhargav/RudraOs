---
# Session Log

## Session 01

### Achievements

- created project structure
- configured CMake
- initialized Git repository
- implemented shell loop
- implemented parser
- implemented command handler
- implemented pwd command
- fixed filesystem configuration issues
- fixed linker issues
- learned header/source separation
---

# Technical Lessons Learned

## 1. Header vs Source Files

### `.hpp`

Contains:

- declarations
- interfaces
- class definitions

### `.cpp`

Contains:

- implementations
- executable logic

---

## 2. Linker Errors

Learned that:

- compiler checks syntax
- linker connects implementations

Common issue:

```text
function declared but implementation missing
```

---

## 3. CMake Basics

Learned:

- only `.cpp` files should be compiled
- `.hpp` files are included automatically
- build directory should remain separate

---

## 4. Filesystem Support

`std::filesystem` requires:

```text
C++17+
```

Required:

```cmake
set(CMAKE_CXX_STANDARD 17)
```

---

# Upcoming Tasks

## High Priority

- [ ] implement ls command
- [ ] implement mkdir command
- [ ] implement touch command
- [ ] implement rm command

---

## Medium Priority

- [ ] command registry system
- [ ] argument validation
- [ ] colored shell prompt
- [ ] better error handling

---

## Future Research

Topics to study:

- lexer design
- AST creation
- interpreters
- shell piping
- process spawning
- POSIX APIs
- ncurses
- readline library

---

# Personal Notes

Main objective right now:
build a strong foundation before adding complexity.

Avoid:

- premature optimization
- overengineering
- giant abstractions too early

Focus:

- understanding
- architecture
- consistency
