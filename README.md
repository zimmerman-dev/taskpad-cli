# Taskpad-CLI – Development Roadmap

## Phase 1 – Session Skeleton
- [ ] Set up `main()` with a `while (running)` loop.
- [ ] Display a **session-focused menu**:
  - Add Task
  - View Session Tasks
  - View Session Summary
  - Quit Session
- [ ] Use an `int choice` and `if / else if` to control logic.
- [ ] Add `bool running = true;` to control the loop lifecycle.

&nbsp;
## Phase 2 – Session Data Structures
- [ ] `std::vector<std::string> tasks;` → holds task names.
- [ ] `std::vector<std::string> priorities;` → holds Low/Medium/High for each task.
- [ ] `std::vector<int> times;` → holds estimated minutes per task.
- [ ] Make sure all vectors’ indices align (index `i` represents the same task across all three).

&nbsp;
## Phase 3 – Add Task (Menu Option 1)
- [ ] Prompt: “Enter task name (for this session):”
- [ ] Prompt: “Priority (Low, Medium, High):”
  - Optional: Validate input is one of the three.
- [ ] Prompt: “Estimated time (minutes):”
  - Reject negative values with an error message.
- [ ] Push values into respective vectors.
- [ ] Print: “Task added to session.”

&nbsp;
## Phase 4 – View Tasks (Menu Option 2)
- [ ] If empty: print “No tasks logged for this session.”
- [ ] Otherwise: loop through tasks and print:
  - Index number
  - Task name
  - Priority
  - Estimated time (min)
- [ ] Keep output clear and session-oriented.

&nbsp;
## Phase 5 – View Session Summary (Menu Option 3)
- [ ] If empty: print “No tasks recorded.”
- [ ] Loop to calculate:
  - Total number of tasks.
  - Total estimated time (sum of all times).
- [ ] Also loop with conditionals to track total time per priority level.
- [ ] Print a clean summary:
  - “Session Total Tasks: X”
  - “Session Total Time: Y minutes”
  - Time breakdown by priority.

&nbsp;
## Phase 6 – Quit Session (Menu Option 4)
- [ ] Set `running = false;` and print:
  - “Ending session. Goodbye!”
- [ ] Allow the program to exit gracefully.

&nbsp;
## Phase 7 – Input Validation
- [ ] Validate menu input: only `1–4` accepted.
- [ ] Print “Invalid choice, try again” for bad input.
- [ ] (Optional) Validate priority input and re-prompt on errors.

&nbsp;
## Optional Phase 8 – Session Polishing
- [ ] After viewing summary, display average time per task.
- [ ] Print a warning if total session time exceeds a chosen threshold (e.g., 480 minutes).
- [ ] Add a session start time and end time printout (use `ctime` later when you learn it).

&nbsp;
## Optional Phase 9 – Future Expansion Hooks
- [ ] Placeholder comment in code:
  - `// Pomodoro feature to be added later.`
- [ ] This keeps the code ready to evolve when you learn `chrono` and more advanced loops.



