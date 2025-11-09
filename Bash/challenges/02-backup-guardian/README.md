# 🖥️ Bash
### Challenge 02: Backup Guardian

---

## 🧩 Context

Servers fail. Disks die. People run `rm -rf` in the wrong folder.  
A disciplined engineer always has at least one automated backup in place.

In this challenge, you will build a **configurable backup script** in Bash that:
- Compresses important directories or files,
- Stores them in a target location,
- Keeps only a defined number of recent backups.

This should feel like a tiny, handcrafted `backupctl` tool.

---

## 🎯 Objective

Create a Bash script that:

- Reads a list of paths to backup.
- Creates timestamped compressed backups (e.g. `.tar.gz`).
- Saves them to a configurable destination directory.
- Keeps only the last **N** backups per source (deletes older ones).

The goal: a simple, reusable backup utility you could actually drop on a small server.

---

## ⚙️ Technical Requirements

- [ ] Use only standard tools: `bash`, `tar`, `date`, `ls`, `rm`, `mkdir`, etc.
- [ ] Accept configuration via:
  - Arguments **or**
  - A simple config file (e.g. `backup.conf`) with:
    - `SOURCE_PATHS=...`
    - `BACKUP_DIR=...`
    - `MAX_BACKUPS=...`
- [ ] Create backups with filenames including:
  - Source identifier
  - Timestamp (`YYYYMMDD-HHMMSS`)
- [ ] Verify the backup directory exists, or create it.
- [ ] Implement cleanup logic:
  - If there are more than `MAX_BACKUPS` archives for a given source, delete the oldest ones.

---

## 🚫 Rules

- No `rsync`, no external backup tools. The idea is to work core utilities.
- No hard-coded absolute paths; make it configurable.
- Script must **fail loudly** on errors (non-existent source, no permissions, etc.).
- Don’t overwrite existing backups — always generate unique names.

---

## 💡 Hints

- Use `date "+%Y%m%d-%H%M%S"` for clean timestamps.
- To handle multiple sources, loop over a list:
  ```bash
  for path in "${SOURCE_PATHS[@]}"; do
      # ...
  done
