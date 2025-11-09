# 🐍 Python
### Challenge 01: HTTP Log Analyzer

---

## 🧩 Context

In real systems, logs are your black box recorder.  
They tell you which users hit your services, which endpoints are slow, and when things are on fire.

In this challenge, you'll build a **CLI log analyzer** that processes a web server log file (e.g. Nginx/Apache-style) and extracts meaningful metrics — just like a lightweight observability tool.

---

## 🎯 Objective

Build a Python script that:

- Reads a log file from disk.
- Parses each line.
- Calculates and prints:
  - Total number of requests.
  - Number of requests per HTTP status code.
  - Top 5 most requested endpoints.
  - Top 5 client IPs.
- Outputs a clean, human-readable summary.

---

## ⚙️ Technical Requirements

- [ ] Use **only standard library** (no external packages).
- [ ] Accept the log file path as:
  - A CLI argument (e.g. `python log_analyzer.py access.log`), **or**
  - A `--file` flag using `argparse`.
- [ ] Support at least a **common log format**, e.g.:
  ```text
  127.0.0.1 - - [10/Oct/2025:13:55:36 +0200] "GET /index.html HTTP/1.1" 200 2326