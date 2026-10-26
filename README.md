# NCV Technical Programming — Level 3 C++ Submissions

**Lecturer Development Programme — Session 2: C++ Programming (NCV Level 3)**
**Dates:** Monday 26 October – Friday 30 October 2026

This repository is used **only** to submit your completed programming tasks.

> Complete each programming task locally, commit your changes and push them to your own GitHub fork. At the end of the five-day programme, submit one pull request to the facilitator's original repository. Your pull request does not need to be merged.

| Day | Date | Folder |
|---|---|---|
| Day 1 | Monday, 26 October 2026 | day-01 |
| Day 2 | Tuesday, 27 October 2026 | day-02 |
| Day 3 | Wednesday, 28 October 2026 | day-03 |
| Day 4 | Thursday, 29 October 2026 | day-04 |
| Day 5 | Friday, 30 October 2026 | day-05 |

## Where each step happens

| Step | Where |
|---|---|
| Fork the repository | GitHub website |
| Clone your fork | Terminal |
| Create task folders and write your programs | Terminal / Code::Blocks |
| `git status` → `git add` → `git commit` → `git push` | Terminal |
| Submit the final pull request | GitHub website |

---

## 1. Fork this repository (GitHub website — once)

1. Sign in to **your own** GitHub account.
2. Open `https://github.com/fredre/ncv-level3-C-submissions`.
3. Click **Fork** (top right).
4. Choose **your own account** as the owner, then click **Create fork**.
5. Check the address bar. It must show **your** username:
   `https://github.com/USERNAME/ncv-level3-C-submissions`

## 2. Copy the clone URL from your fork

On **your fork** (not the original), click the green **Code** button, select **HTTPS** and copy the URL.

## 3. Clone your fork (terminal — once)

Replace `USERNAME` with your own GitHub username:

```bash
git clone https://github.com/USERNAME/ncv-level3-C-submissions.git
```

## 4. Enter the local repository

```bash
cd ncv-level3-C-submissions
```

## 5. Verify `origin`

```bash
git remote -v
git branch --show-current
```

`origin` must show **your** username, and the branch must be `main`. `origin` is the place your work is pushed to — your own fork. If it shows `fredre`, you cloned the wrong repository; ask the facilitator for help.

## 6. Create the task folder

The facilitator will announce the day and task. Example for Day 1, Task 1 (run from inside the repository folder):

```bash
mkdir -p day-01/task1
```

Windows PowerShell:

```powershell
New-Item -ItemType Directory -Force -Path "day-01/task1"
```

Task folders are named `task1`, `task2`, `task3`, … and numbering restarts each day. Do **not** create folders with your name.

## 7. Save your C++ files in the task folder

Write your program in Code::Blocks and save it directly into the task folder, for example `day-01/task1/main.cpp`. If you create a Code::Blocks project, create it inside the task folder. Submit your source files (`.cpp`, `.h`) and the project file (`.cbp`) — not the compiled `bin/` and `obj/` folders or `.exe` files.

## 8. Check what changed — `git status`

```bash
git status
```

Your new files should appear under the correct `day-XX/taskN/` folder.

## 9. Stage the task — `git add`

```bash
git add day-01/task1/
git diff --cached --name-only
```

The second command lists exactly what will be committed. Avoid `git add .` — it may include files you did not intend to submit.

## 10. Commit — `git commit`

```bash
git commit -m "Day 1: Complete Task 1"
```

A commit saves your work in your **local** history only. It is not on GitHub yet.

## 11. Push — `git push`

```bash
git push origin main
```

This uploads your commits to your fork. Never type your GitHub account password into the terminal — sign in through the browser window or credential manager when prompted, or follow the facilitator's instructions.

## 12. Verify on GitHub

Open your fork in the browser, go to `day-01/task1/` and check that your files are there.

Repeat steps 6–12 for every task. **Do not fork or clone again.** Keep working in the same folder and on the `main` branch all week.

## 13. Final submission — one pull request (Day 5, GitHub website)

1. Run `git status` and `git push origin main` one last time.
2. Open **your fork** on GitHub.
3. Click **Contribute → Open pull request** (or **Pull requests → New pull request → compare across forks**).
4. Check the settings:
   - **base repository:** `fredre/ncv-level3-C-submissions` — **base:** `main`
   - **head repository:** `USERNAME/ncv-level3-C-submissions` — **compare:** `main`
5. Review the list of changed files.
6. Title: `NCV L3 Final Submission - USERNAME`, complete the template, then click **Create pull request**.
7. Copy the pull request URL and send it to the facilitator.

Keep your fork until the review is finished. Corrections can be committed and pushed to `main` in your fork — they update the same pull request automatically.

---

## Command reference

```bash
# Once
git clone https://github.com/USERNAME/ncv-level3-C-submissions.git
cd ncv-level3-C-submissions
git remote -v

# For every task (change the day and task number)
mkdir -p day-01/task1
git status
git add day-01/task1/
git diff --cached --name-only
git commit -m "Day 1: Complete Task 1"
git push origin main
```

**Day 2, Task 3 example:** `mkdir -p day-02/task3` → `git add day-02/task3/` → `git commit -m "Day 2: Complete Task 3"` → `git push origin main`
