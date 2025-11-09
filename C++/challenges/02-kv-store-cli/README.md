# ⚙️ C++  
### Challenge 02: In-Memory Key-Value Store (CLI Database)

---

## 🧩 Context

Databases, caches, config services… many systems boil down to some kind of **key-value store in memory**.  
In C++, implementing such a system lets you practice STL containers, RAII, parsing, and error handling while staying close to real-world use cases.

In this challenge you will build a **tiny in-memory key-value database** with a command-line interface.

---

## 🎯 Objective

Create a C++ program that:

- Runs as an interactive CLI.
- Allows the user to:
  - `SET <key> <value>`
  - `GET <key>`
  - `DEL <key>`
  - `KEYS`
  - `EXIT`
- Stores everything in memory using STL containers.
- Handles invalid commands gracefully.

---

## ⚙️ Technical Requirements

- [ ] Use modern C++ (**C++17 or later**).
- [ ] Use `std::unordered_map<std::string, std::string>` or similar as storage.
- [ ] Implement a **command loop**:
  - Read a line from `stdin`.
  - Parse command + args.
  - Execute and print a response.
- [ ] Behavior:
  - `SET k v` → store/override value.
  - `GET k` → print value or `NULL` if not found.
  - `DEL k` → delete key, print status.
  - `KEYS` → list all keys.
  - `EXIT` → terminate the program.
- [ ] Input should be **case-insensitive for commands** but case-sensitive for keys/values (bonus if implemented).
- [ ] Structure:
  - `KeyValueStore` class encapsulating the map and operations.
  - `main.cpp` with the REPL loop.

---

## 🚫 Rules

- No external libraries (Boost, fmt, etc.).
- No persistent storage in the base version (pure in-memory).
- No using `system()` or hacks — implement the logic yourself.
