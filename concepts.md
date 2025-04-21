Important Concepts

🔢 1. Matrix Allocation and Setup
memory_allocation(rows, cols): Dynamic 2D array (matrix) allocation.

create_board(): Initializes a 6x6 board to hold both the puzzle and the clues.

set_clues(): Fills the edges of the board with clues from user input.

🧠 2. Clue and Visibility Logic
Clue format: 16 numbers — 4 top, 4 bottom, 4 left, 4 right.

get_clue(): Fetches correct clue based on direction and position.

calc_visible(): Calculates how many buildings are visible from a side (left/right/top/bottom).

is_correct_view(): Compares visibility count to clue.

🔍 3. Constraints Checking
is_in_row() / is_in_column(): Prevents duplicate values in the same row/column.

is_correct_row() / is_correct_col(): Validates both left-right and top-bottom clues.

🔁 4. Recursive Backtracking
solve_recursive(row, col):

Places a digit from 1 to 4.

Validates with all constraints (visibility + uniqueness).

Proceeds to next cell or backtracks if invalid.

Backtracking: If a placement leads to dead-end, it tries the next value or returns to previous state.

✅ 5. Success and Output
mark_success(): Flags the board as solved.

print_solution(): Outputs the solved 4x4 grid.

print_error(): Outputs error if puzzle is unsolvable or input is invalid.

📥 6. Input Parsing
is_correct_params(): Validates format of the input (e.g., "4 3 2 1 ...").

convert_in_array(): Converts a flat string into a 4x4 clues array.
