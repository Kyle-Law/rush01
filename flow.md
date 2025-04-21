```
./test "3 2 2 1 1 2 2 3 3 2 2 1 1 2 2 3"
Trying i=1 at row=1 col=1
Placed 1 at board[1][1]
Current board state:
1 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=1 col=2
Conflict for 1 at board[1][2]
Trying i=2 at row=1 col=2
Placed 2 at board[1][2]
Current board state:
1 2 0 0
0 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=1 col=3
Conflict for 1 at board[1][3]
Trying i=2 at row=1 col=3
Conflict for 2 at board[1][3]
Trying i=3 at row=1 col=3
Placed 3 at board[1][3]
Current board state:
1 2 3 0
0 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=1 col=4
Conflict for 1 at board[1][4]
Trying i=2 at row=1 col=4
Conflict for 2 at board[1][4]
Trying i=3 at row=1 col=4
Conflict for 3 at board[1][4]
Trying i=4 at row=1 col=4
Placed 4 at board[1][4]
Current board state:
1 2 3 4
0 0 0 0
0 0 0 0
0 0 0 0
End of row 1, checking full row validity...
Backtracking at board[1][4]
Backtracking at board[1][3]
Trying i=4 at row=1 col=3
Placed 4 at board[1][3]
Current board state:
1 2 4 0
0 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=1 col=4
Conflict for 1 at board[1][4]
Trying i=2 at row=1 col=4
Conflict for 2 at board[1][4]
Trying i=3 at row=1 col=4
Placed 3 at board[1][4]
Current board state:
1 2 4 3
0 0 0 0
0 0 0 0
0 0 0 0
End of row 1, checking full row validity...
Backtracking at board[1][4]
Trying i=4 at row=1 col=4
Conflict for 4 at board[1][4]
Backtracking at board[1][3]
Backtracking at board[1][2]
Trying i=3 at row=1 col=2
Placed 3 at board[1][2]
Current board state:
1 3 0 0
0 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=1 col=3
Conflict for 1 at board[1][3]
Trying i=2 at row=1 col=3
Placed 2 at board[1][3]
Current board state:
1 3 2 0
0 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=1 col=4
Conflict for 1 at board[1][4]
Trying i=2 at row=1 col=4
Conflict for 2 at board[1][4]
Trying i=3 at row=1 col=4
Conflict for 3 at board[1][4]
Trying i=4 at row=1 col=4
Placed 4 at board[1][4]
Current board state:
1 3 2 4
0 0 0 0
0 0 0 0
0 0 0 0
End of row 1, checking full row validity...
Trying i=1 at row=2 col=1
Conflict for 1 at board[2][1]
Trying i=2 at row=2 col=1
Placed 2 at board[2][1]
Current board state:
1 3 2 4
2 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=2
Placed 1 at board[2][2]
Current board state:
1 3 2 4
2 1 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=3
Conflict for 1 at board[2][3]
Trying i=2 at row=2 col=3
Conflict for 2 at board[2][3]
Trying i=3 at row=2 col=3
Placed 3 at board[2][3]
Current board state:
1 3 2 4
2 1 3 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=4
Conflict for 1 at board[2][4]
Trying i=2 at row=2 col=4
Conflict for 2 at board[2][4]
Trying i=3 at row=2 col=4
Conflict for 3 at board[2][4]
Trying i=4 at row=2 col=4
Conflict for 4 at board[2][4]
Backtracking at board[2][3]
Trying i=4 at row=2 col=3
Placed 4 at board[2][3]
Current board state:
1 3 2 4
2 1 4 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=4
Conflict for 1 at board[2][4]
Trying i=2 at row=2 col=4
Conflict for 2 at board[2][4]
Trying i=3 at row=2 col=4
Placed 3 at board[2][4]
Current board state:
1 3 2 4
2 1 4 3
0 0 0 0
0 0 0 0
End of row 2, checking full row validity...
Trying i=1 at row=3 col=1
Conflict for 1 at board[3][1]
Trying i=2 at row=3 col=1
Conflict for 2 at board[3][1]
Trying i=3 at row=3 col=1
Placed 3 at board[3][1]
Current board state:
1 3 2 4
2 1 4 3
3 0 0 0
0 0 0 0
Trying i=1 at row=3 col=2
Conflict for 1 at board[3][2]
Trying i=2 at row=3 col=2
Placed 2 at board[3][2]
Current board state:
1 3 2 4
2 1 4 3
3 2 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Placed 1 at board[3][3]
Current board state:
1 3 2 4
2 1 4 3
3 2 1 0
0 0 0 0
Trying i=1 at row=3 col=4
Conflict for 1 at board[3][4]
Trying i=2 at row=3 col=4
Conflict for 2 at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Conflict for 3 at board[3][3]
Trying i=4 at row=3 col=3
Conflict for 4 at board[3][3]
Backtracking at board[3][2]
Trying i=3 at row=3 col=2
Conflict for 3 at board[3][2]
Trying i=4 at row=3 col=2
Placed 4 at board[3][2]
Current board state:
1 3 2 4
2 1 4 3
3 4 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Placed 1 at board[3][3]
Current board state:
1 3 2 4
2 1 4 3
3 4 1 0
0 0 0 0
Trying i=1 at row=3 col=4
Conflict for 1 at board[3][4]
Trying i=2 at row=3 col=4
Placed 2 at board[3][4]
Current board state:
1 3 2 4
2 1 4 3
3 4 1 2
0 0 0 0
End of row 3, checking full row validity...
Trying i=1 at row=4 col=1
Conflict for 1 at board[4][1]
Trying i=2 at row=4 col=1
Conflict for 2 at board[4][1]
Trying i=3 at row=4 col=1
Conflict for 3 at board[4][1]
Trying i=4 at row=4 col=1
Placed 4 at board[4][1]
Current board state:
1 3 2 4
2 1 4 3
3 4 1 2
4 0 0 0
Top view failed at col=1, backtracking...
Backtracking at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Conflict for 3 at board[3][3]
Trying i=4 at row=3 col=3
Conflict for 4 at board[3][3]
Backtracking at board[3][2]
Backtracking at board[3][1]
Trying i=4 at row=3 col=1
Placed 4 at board[3][1]
Current board state:
1 3 2 4
2 1 4 3
4 0 0 0
0 0 0 0
Trying i=1 at row=3 col=2
Conflict for 1 at board[3][2]
Trying i=2 at row=3 col=2
Placed 2 at board[3][2]
Current board state:
1 3 2 4
2 1 4 3
4 2 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Placed 1 at board[3][3]
Current board state:
1 3 2 4
2 1 4 3
4 2 1 0
0 0 0 0
Trying i=1 at row=3 col=4
Conflict for 1 at board[3][4]
Trying i=2 at row=3 col=4
Conflict for 2 at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Placed 3 at board[3][3]
Current board state:
1 3 2 4
2 1 4 3
4 2 3 0
0 0 0 0
Trying i=1 at row=3 col=4
Placed 1 at board[3][4]
Current board state:
1 3 2 4
2 1 4 3
4 2 3 1
0 0 0 0
End of row 3, checking full row validity...
Backtracking at board[3][4]
Trying i=2 at row=3 col=4
Conflict for 2 at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Trying i=4 at row=3 col=3
Conflict for 4 at board[3][3]
Backtracking at board[3][2]
Trying i=3 at row=3 col=2
Conflict for 3 at board[3][2]
Trying i=4 at row=3 col=2
Conflict for 4 at board[3][2]
Backtracking at board[3][1]
Backtracking at board[2][4]
Trying i=4 at row=2 col=4
Conflict for 4 at board[2][4]
Backtracking at board[2][3]
Backtracking at board[2][2]
Trying i=2 at row=2 col=2
Conflict for 2 at board[2][2]
Trying i=3 at row=2 col=2
Conflict for 3 at board[2][2]
Trying i=4 at row=2 col=2
Placed 4 at board[2][2]
Current board state:
1 3 2 4
2 4 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=3
Placed 1 at board[2][3]
Current board state:
1 3 2 4
2 4 1 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=4
Conflict for 1 at board[2][4]
Trying i=2 at row=2 col=4
Conflict for 2 at board[2][4]
Trying i=3 at row=2 col=4
Placed 3 at board[2][4]
Current board state:
1 3 2 4
2 4 1 3
0 0 0 0
0 0 0 0
End of row 2, checking full row validity...
Trying i=1 at row=3 col=1
Conflict for 1 at board[3][1]
Trying i=2 at row=3 col=1
Conflict for 2 at board[3][1]
Trying i=3 at row=3 col=1
Placed 3 at board[3][1]
Current board state:
1 3 2 4
2 4 1 3
3 0 0 0
0 0 0 0
Trying i=1 at row=3 col=2
Placed 1 at board[3][2]
Current board state:
1 3 2 4
2 4 1 3
3 1 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Conflict for 1 at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Conflict for 3 at board[3][3]
Trying i=4 at row=3 col=3
Placed 4 at board[3][3]
Current board state:
1 3 2 4
2 4 1 3
3 1 4 0
0 0 0 0
Trying i=1 at row=3 col=4
Conflict for 1 at board[3][4]
Trying i=2 at row=3 col=4
Placed 2 at board[3][4]
Current board state:
1 3 2 4
2 4 1 3
3 1 4 2
0 0 0 0
End of row 3, checking full row validity...
Trying i=1 at row=4 col=1
Conflict for 1 at board[4][1]
Trying i=2 at row=4 col=1
Conflict for 2 at board[4][1]
Trying i=3 at row=4 col=1
Conflict for 3 at board[4][1]
Trying i=4 at row=4 col=1
Placed 4 at board[4][1]
Current board state:
1 3 2 4
2 4 1 3
3 1 4 2
4 0 0 0
Top view failed at col=1, backtracking...
Backtracking at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Backtracking at board[3][2]
Trying i=2 at row=3 col=2
Placed 2 at board[3][2]
Current board state:
1 3 2 4
2 4 1 3
3 2 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Conflict for 1 at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Conflict for 3 at board[3][3]
Trying i=4 at row=3 col=3
Placed 4 at board[3][3]
Current board state:
1 3 2 4
2 4 1 3
3 2 4 0
0 0 0 0
Trying i=1 at row=3 col=4
Placed 1 at board[3][4]
Current board state:
1 3 2 4
2 4 1 3
3 2 4 1
0 0 0 0
End of row 3, checking full row validity...
Trying i=1 at row=4 col=1
Conflict for 1 at board[4][1]
Trying i=2 at row=4 col=1
Conflict for 2 at board[4][1]
Trying i=3 at row=4 col=1
Conflict for 3 at board[4][1]
Trying i=4 at row=4 col=1
Placed 4 at board[4][1]
Current board state:
1 3 2 4
2 4 1 3
3 2 4 1
4 0 0 0
Top view failed at col=1, backtracking...
Backtracking at board[3][4]
Trying i=2 at row=3 col=4
Conflict for 2 at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Backtracking at board[3][2]
Trying i=3 at row=3 col=2
Conflict for 3 at board[3][2]
Trying i=4 at row=3 col=2
Conflict for 4 at board[3][2]
Backtracking at board[3][1]
Trying i=4 at row=3 col=1
Placed 4 at board[3][1]
Current board state:
1 3 2 4
2 4 1 3
4 0 0 0
0 0 0 0
Trying i=1 at row=3 col=2
Placed 1 at board[3][2]
Current board state:
1 3 2 4
2 4 1 3
4 1 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Conflict for 1 at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Placed 3 at board[3][3]
Current board state:
1 3 2 4
2 4 1 3
4 1 3 0
0 0 0 0
Trying i=1 at row=3 col=4
Conflict for 1 at board[3][4]
Trying i=2 at row=3 col=4
Placed 2 at board[3][4]
Current board state:
1 3 2 4
2 4 1 3
4 1 3 2
0 0 0 0
End of row 3, checking full row validity...
Backtracking at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Trying i=4 at row=3 col=3
Conflict for 4 at board[3][3]
Backtracking at board[3][2]
Trying i=2 at row=3 col=2
Placed 2 at board[3][2]
Current board state:
1 3 2 4
2 4 1 3
4 2 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Conflict for 1 at board[3][3]
Trying i=2 at row=3 col=3
Conflict for 2 at board[3][3]
Trying i=3 at row=3 col=3
Placed 3 at board[3][3]
Current board state:
1 3 2 4
2 4 1 3
4 2 3 0
0 0 0 0
Trying i=1 at row=3 col=4
Placed 1 at board[3][4]
Current board state:
1 3 2 4
2 4 1 3
4 2 3 1
0 0 0 0
End of row 3, checking full row validity...
Backtracking at board[3][4]
Trying i=2 at row=3 col=4
Conflict for 2 at board[3][4]
Trying i=3 at row=3 col=4
Conflict for 3 at board[3][4]
Trying i=4 at row=3 col=4
Conflict for 4 at board[3][4]
Backtracking at board[3][3]
Trying i=4 at row=3 col=3
Conflict for 4 at board[3][3]
Backtracking at board[3][2]
Trying i=3 at row=3 col=2
Conflict for 3 at board[3][2]
Trying i=4 at row=3 col=2
Conflict for 4 at board[3][2]
Backtracking at board[3][1]
Backtracking at board[2][4]
Trying i=4 at row=2 col=4
Conflict for 4 at board[2][4]
Backtracking at board[2][3]
Trying i=2 at row=2 col=3
Conflict for 2 at board[2][3]
Trying i=3 at row=2 col=3
Placed 3 at board[2][3]
Current board state:
1 3 2 4
2 4 3 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=4
Placed 1 at board[2][4]
Current board state:
1 3 2 4
2 4 3 1
0 0 0 0
0 0 0 0
End of row 2, checking full row validity...
Backtracking at board[2][4]
Trying i=2 at row=2 col=4
Conflict for 2 at board[2][4]
Trying i=3 at row=2 col=4
Conflict for 3 at board[2][4]
Trying i=4 at row=2 col=4
Conflict for 4 at board[2][4]
Backtracking at board[2][3]
Trying i=4 at row=2 col=3
Conflict for 4 at board[2][3]
Backtracking at board[2][2]
Backtracking at board[2][1]
Trying i=3 at row=2 col=1
Placed 3 at board[2][1]
Current board state:
1 3 2 4
3 0 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=2
Placed 1 at board[2][2]
Current board state:
1 3 2 4
3 1 0 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=3
Conflict for 1 at board[2][3]
Trying i=2 at row=2 col=3
Conflict for 2 at board[2][3]
Trying i=3 at row=2 col=3
Conflict for 3 at board[2][3]
Trying i=4 at row=2 col=3
Placed 4 at board[2][3]
Current board state:
1 3 2 4
3 1 4 0
0 0 0 0
0 0 0 0
Trying i=1 at row=2 col=4
Conflict for 1 at board[2][4]
Trying i=2 at row=2 col=4
Placed 2 at board[2][4]
Current board state:
1 3 2 4
3 1 4 2
0 0 0 0
0 0 0 0
End of row 2, checking full row validity...
Trying i=1 at row=3 col=1
Conflict for 1 at board[3][1]
Trying i=2 at row=3 col=1
Placed 2 at board[3][1]
Current board state:
1 3 2 4
3 1 4 2
2 0 0 0
0 0 0 0
Trying i=1 at row=3 col=2
Conflict for 1 at board[3][2]
Trying i=2 at row=3 col=2
Conflict for 2 at board[3][2]
Trying i=3 at row=3 col=2
Conflict for 3 at board[3][2]
Trying i=4 at row=3 col=2
Placed 4 at board[3][2]
Current board state:
1 3 2 4
3 1 4 2
2 4 0 0
0 0 0 0
Trying i=1 at row=3 col=3
Placed 1 at board[3][3]
Current board state:
1 3 2 4
3 1 4 2
2 4 1 0
0 0 0 0
Trying i=1 at row=3 col=4
Conflict for 1 at board[3][4]
Trying i=2 at row=3 col=4
Conflict for 2 at board[3][4]
Trying i=3 at row=3 col=4
Placed 3 at board[3][4]
Current board state:
1 3 2 4
3 1 4 2
2 4 1 3
0 0 0 0
End of row 3, checking full row validity...
Trying i=1 at row=4 col=1
Conflict for 1 at board[4][1]
Trying i=2 at row=4 col=1
Conflict for 2 at board[4][1]
Trying i=3 at row=4 col=1
Conflict for 3 at board[4][1]
Trying i=4 at row=4 col=1
Placed 4 at board[4][1]
Current board state:
1 3 2 4
3 1 4 2
2 4 1 3
4 0 0 0
Trying i=1 at row=4 col=2
Conflict for 1 at board[4][2]
Trying i=2 at row=4 col=2
Placed 2 at board[4][2]
Current board state:
1 3 2 4
3 1 4 2
2 4 1 3
4 2 0 0
Trying i=1 at row=4 col=3
Conflict for 1 at board[4][3]
Trying i=2 at row=4 col=3
Conflict for 2 at board[4][3]
Trying i=3 at row=4 col=3
Placed 3 at board[4][3]
Current board state:
1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 0
Trying i=1 at row=4 col=4
Placed 1 at board[4][4]
Current board state:
1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 1
End of row 4, checking full row validity...
1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 1
```
