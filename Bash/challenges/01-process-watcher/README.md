# 🖥️ Bash 
### Challenge 01: Process Watcher

---

## 🧩 Context

In system administration, certain background services are critical — databases, web servers, custom daemons, etc.  
Sometimes they crash silently and nobody notices until users start yelling.  

Your mission: build a small Bash watchdog script that keeps a specific process alive.  
If it goes down, your script should bring it back up and log the event automatically.  

---

## 🎯 Objective

Create a **self-healing Bash script** that:

- Monitors whether a given process is running.
- Restarts it if it stops.
- Logs all restart events with timestamps.
- Runs indefinitely (or periodically via `cron`).

---

## ⚙️ Technical Requirements

- [ ] Use only standard Bash utilities (`ps`, `grep`, `if`, `while`, `sleep`, etc.).
- [ ] Accept the process name (or PID) as a variable or argument.
- [ ] Write logs to a file (e.g. `/var/log/process_watcher.log`).
- [ ] Restart the process using a provided start command or script.
- [ ] Sleep between checks (configurable interval).

Optional but recommended:
- [ ] Configurable via environment variables (`CHECK_INTERVAL`, `PROCESS_NAME`, etc.).
- [ ] Graceful handling when the process doesn’t exist at all.

---

## 🚫 Rules

- No external monitoring tools (no `monit`, `systemd`, `supervisord`, etc.).
- Must be a pure Bash script (no Python, no Perl).
- Avoid busy loops — add a reasonable sleep delay between checks.

---

## 💡 Hints

- Combine `ps aux | grep "$PROCESS_NAME"` with proper filtering (don’t match the grep process itself).
- Redirect output:
  ```bash
  echo "$(date '+%Y-%m-%d %H:%M:%S') - Restarted $PROCESS_NAME" >> /var/log/process_watcher.log