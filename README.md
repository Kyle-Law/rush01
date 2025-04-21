# Rush01

### Function invocation flow

```
main()
│
├── is_correct_params(argv)               → Validate input
│
├── convert_in_array(argv[1])             → Converts string to clues[4][4]
│       │
│       └── memory_allocation(4, 4)
│
└── rush(clues)
    │
    ├── create_board()                    → Allocates 6x6 board
    │       └── memory_allocation(6, 6)
    │
    ├── set_clues(board, clues)           → Inserts clues around board edges
    │
    └── solve_recursive(board, 1, 1)      → Start solving puzzle recursively
            │
            ├── Loop i from 1 to 4
            │   ├── is_in_column(...)
            │   ├── is_in_row(...)
            │   ├── is_correct_top_view(...) if row == 4
            │   │      └── is_correct_view(...)
            │   │             └── calc_visible(...)
            │   │                    └── get_board_value(...)
            │   │
            │   ├── if col == 4
            │   │   └── exec_row_four(...)
            │   │         ├── is_correct_row(...)
            │   │         │     ├── is_correct_left_view(...)
            │   │         │     └── is_correct_right_view(...)
            │   │         ├── solve_recursive(row + 1, 1)
            │   │         └── if row == 4 and is_correct_col(...) 
            │   │               ├── mark_success(...)
            │   │               └── print_solution(...)
            │   │
            │   └── else
            │       └── solve_recursive(row, col + 1)
            │
            └── Recurse until board[0][0] == '1' or backtrack
```
