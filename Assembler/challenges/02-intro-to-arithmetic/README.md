# ⚙️ Assembler — The Bare-Metal Whisperer  
### Challenge 02: Intro to Arithmetic & Loops

---

## 🧩 Context

In Assembly, you control **every register and instruction**.  
This time, you’ll implement a small arithmetic algorithm:  
sum the integers from 1 to N (provided by the user) and print the result.

This will make you work with **loops, registers, stack usage**, and I/O — the building blocks of all computation.

---

## 🎯 Objective

Create a program that:

- Reads an integer `N` from standard input.
- Calculates the sum `1 + 2 + ... + N`.
- Prints the result to stdout.
- Exits cleanly.

---

## ⚙️ Technical Requirements

- [ ] x86_64 Assembly (NASM or GAS).
- [ ] Use syscalls only (`read`, `write`, `exit`).
- [ ] Implement a loop manually with `cmp`, `jmp`, `inc`, or `add`.
- [ ] Convert ASCII input to integer.
- [ ] Convert integer result back to ASCII before printing.

---

## 🚫 Rules

- No libc or helper functions.
- No `printf`/`scanf`.
- Only pure assembly and syscalls.