# ⚙️ C++
### Challenge 01: 2D Particle Simulation (Console Engine)

---

## 🧩 Context

C++ shines when you need **control + performance**: memory layout, CPU cache, no VM magic.  
In this challenge you’ll build a tiny 2D particle simulation engine in pure C++, using only the STL and your own logic.

Think of it as a minimal physics sandbox: a set of particles moving in a box, bouncing off walls.

---

## 🎯 Objective

Create a console-based simulation that:

- Initializes **N particles** in a 2D box.
- Updates their positions over time based on velocity.
- Handles **wall collisions** (particles bounce).
- Prints the simulation state at each step (or every few steps).

No graphics required — just correctness, structure and clean code.

---

## ⚙️ Technical Requirements

- [ ] Use modern C++ (**C++17 or later**).
- [ ] Define a `Particle` struct/class:
  - `x`, `y` position (float or double)
  - `vx`, `vy` velocity
  - (Optional) `id` or `mass`
- [ ] Store particles in `std::vector<Particle>`.
- [ ] Simulation space: e.g. `width = 100`, `height = 30`.
- [ ] At each step:
  - Update positions: `x += vx`, `y += vy`
  - Detect collisions with borders and invert velocity (`vx` or `vy`).
- [ ] Run for a fixed number of steps or until the user stops it.
- [ ] Provide **basic configuration**:
  - Number of particles.
  - Number of steps.
  - Time step or speed factor.

Implementation details:

- [ ] Separate code into at least:
  - `Particle` (data/behavior)
  - `Simulation` (update loop)
  - `main.cpp` (wiring & CLI).

---

## 🚫 Rules

- No game engines.
- No external libraries for physics or graphics.
- No globals full of magic; keep things reasonably structured.
- Don’t leak memory (obviously).

---

## 💡 Hints

- Use `std::mt19937` + `<random>` to generate initial positions/velocities.
- Represent walls at `x = 0`, `x = width`, `y = 0`, `y = height`.
- On collision:
  ```cpp
  if (p.x <= 0 || p.x >= width)  p.vx *= -1;
  if (p.y <= 0 || p.y >= height) p.vy *= -1;
