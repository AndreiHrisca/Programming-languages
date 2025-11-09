# ⚙️ Assembler
### Challenge 01: Hello I/O

---

## 🧩 Context

High-level languages hide everything behind functions like `printf()` or `console.log()`.  
In assembly, you talk **directly to the operating system**.  
This challenge will teach you how to communicate with it using system calls.

You’ll write a minimal program that prints a message to the console — without using any libraries or runtime helpers.

---

## 🎯 Objective

Create a program in Assembly that:

- Prints `"Hello, world!"` (or a custom message).
- Exits cleanly with code `0`.

---

## ⚙️ Technical Requirements

- [ ] Target: **x86_64 Linux** (NASM or GAS syntax).
- [ ] Use **syscalls** (`write` and `exit`).
- [ ] No external libraries or includes.
- [ ] Output must be exactly the message + newline.

---

## 🚫 Rules

- No C functions (`printf`, `puts`, etc.).
- No linking against libc.
- Must assemble and link manually:
  ```bash
  nasm -f elf64 hello.asm -o hello.o
  ld hello.o -o hello
  ./hello