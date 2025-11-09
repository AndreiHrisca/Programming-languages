# 🐍 Python — The Data Magician  
### Challenge 02: API → ETL → Mini Dashboard

---

## 🧩 Context

Modern backends and data workflows live on APIs:
- You fetch data from an external service,
- Clean and transform it,
- Store it,
- And expose some kind of report.

In this challenge, you'll build a **tiny ETL pipeline in Python**:
API → process → store → generate a simple HTML/Markdown dashboard.

---

## 🎯 Objective

Create a Python script (or small package) that:

1. Fetches data from a **public API** (e.g. countries, crypto prices, Pokémon, GitHub repos — your choice).
2. Normalizes and filters the data.
3. Stores the result locally:
   - as a `.json` or `.csv` file.
4. Generates a **static report**:
   - in `.md` or `.html`,
   - with top N entries based on some metric (population, stars, price, etc.),
   - and summary stats.

Example idea:  
“Fetch top starred Python repos from GitHub and generate a report of the top 20 with stars, URL, and description.”

---

## ⚙️ Technical Requirements

- [ ] Use only standard library **plus** `requests` (or `urllib` if you want 100% stdlib).
- [ ] Structure:
  - `fetch_data()` → calls API.
  - `transform_data()` → cleans & filters.
  - `save_data()` → writes JSON/CSV.
  - `generate_report()` → creates `.md`/`.html`.
  - `main()` → orchestrates.
- [ ] Handle:
  - Network errors (timeouts, bad responses).
  - Empty or malformed responses.
- [ ] Allow configuration:
  - via CLI args (e.g. `--limit`, `--output-format`, `--min-stars`),
  - or via a small config dict in code.

---

## 🚫 Rules

- No full web frameworks (Flask, Django) for this challenge.
- No heavy data libs (`pandas`, `numpy`) in the base version.
- Do not hard-code secrets or tokens in the code (if API requires one, read from env var).
