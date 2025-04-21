```
cat flow.txt 
1 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0

1 2 0 0
0 0 0 0
0 0 0 0
0 0 0 0

1 2 3 0
0 0 0 0
0 0 0 0
0 0 0 0

1 2 3 4
0 0 0 0
0 0 0 0
0 0 0 0

1 2 4 4
0 0 0 0
0 0 0 0
0 0 0 0

1 2 4 3
0 0 0 0
0 0 0 0
0 0 0 0

1 3 4 3
0 0 0 0
0 0 0 0
0 0 0 0

1 3 2 3
0 0 0 0
0 0 0 0
0 0 0 0

1 3 2 4
0 0 0 0
0 0 0 0
0 0 0 0

1 3 2 4
2 0 0 0
0 0 0 0
0 0 0 0

1 3 2 4
2 1 0 0
0 0 0 0
0 0 0 0

1 3 2 4
2 1 3 0
0 0 0 0
0 0 0 0

1 3 2 4
2 1 4 0
0 0 0 0
0 0 0 0

1 3 2 4
2 1 4 3
0 0 0 0
0 0 0 0

1 3 2 4
2 1 4 3
3 0 0 0
0 0 0 0

1 3 2 4
2 1 4 3
3 2 0 0
0 0 0 0

1 3 2 4
2 1 4 3
3 2 1 0
0 0 0 0

1 3 2 4
2 1 4 3
3 4 1 0
0 0 0 0

1 3 2 4
2 1 4 3
3 4 1 0
0 0 0 0

1 3 2 4
2 1 4 3
3 4 1 2
0 0 0 0

1 3 2 4
2 1 4 3
3 4 1 2
4 0 0 0

1 3 2 4
2 1 4 3
3 4 1 2
4 0 0 0

1 3 2 4
2 1 4 3
4 4 1 2
4 0 0 0

1 3 2 4
2 1 4 3
4 2 1 2
4 0 0 0

1 3 2 4
2 1 4 3
4 2 1 2
4 0 0 0

1 3 2 4
2 1 4 3
4 2 3 2
4 0 0 0

1 3 2 4
2 1 4 3
4 2 3 1
4 0 0 0

1 3 2 4
2 1 4 3
4 2 3 1
4 0 0 0

1 3 2 4
2 4 4 3
4 2 3 1
4 0 0 0

1 3 2 4
2 4 1 3
4 2 3 1
4 0 0 0

1 3 2 4
2 4 1 3
4 2 3 1
4 0 0 0

1 → Trying i=1 at row=1, col=1
 not enuf col, next col
1.1 → Trying i=1 at row=1, col=2
1.2 → Trying i=2 at row=1, col=2
 not enuf col, next col
1.2.1 → Trying i=1 at row=1, col=3
1.2.2 → Trying i=2 at row=1, col=3
1.2.3 → Trying i=3 at row=1, col=3
 not enuf col, next col
1.2.3.1 → Trying i=1 at row=1, col=4
1.2.3.2 → Trying i=2 at row=1, col=4
1.2.3.3 → Trying i=3 at row=1, col=4
1.2.3.4 → Trying i=4 at row=1, col=4
check row
1.2.4 → Trying i=4 at row=1, col=3
 not enuf col, next col
1.2.4.1 → Trying i=1 at row=1, col=4
1.2.4.2 → Trying i=2 at row=1, col=4
1.2.4.3 → Trying i=3 at row=1, col=4
check row
1.2.4.4 → Trying i=4 at row=1, col=4
1.3 → Trying i=3 at row=1, col=2
 not enuf col, next col
1.3.1 → Trying i=1 at row=1, col=3
1.3.2 → Trying i=2 at row=1, col=3
 not enuf col, next col
1.3.2.1 → Trying i=1 at row=1, col=4
1.3.2.2 → Trying i=2 at row=1, col=4
1.3.2.3 → Trying i=3 at row=1, col=4
1.3.2.4 → Trying i=4 at row=1, col=4
check row
row 1 correct, next row
1.3.2.4.1 → Trying i=1 at row=2, col=1
1.3.2.4.2 → Trying i=2 at row=2, col=1
 not enuf col, next col
1.3.2.4.2.1 → Trying i=1 at row=2, col=2
 not enuf col, next col
1.3.2.4.2.1.1 → Trying i=1 at row=2, col=3
1.3.2.4.2.1.2 → Trying i=2 at row=2, col=3
1.3.2.4.2.1.3 → Trying i=3 at row=2, col=3
 not enuf col, next col
1.3.2.4.2.1.3.1 → Trying i=1 at row=2, col=4
1.3.2.4.2.1.3.2 → Trying i=2 at row=2, col=4
1.3.2.4.2.1.3.3 → Trying i=3 at row=2, col=4
1.3.2.4.2.1.3.4 → Trying i=4 at row=2, col=4
1.3.2.4.2.1.4 → Trying i=4 at row=2, col=3
 not enuf col, next col
1.3.2.4.2.1.4.1 → Trying i=1 at row=2, col=4
1.3.2.4.2.1.4.2 → Trying i=2 at row=2, col=4
1.3.2.4.2.1.4.3 → Trying i=3 at row=2, col=4
check row
row 2 correct, next row
1.3.2.4.2.1.4.3.1 → Trying i=1 at row=3, col=1
1.3.2.4.2.1.4.3.2 → Trying i=2 at row=3, col=1
1.3.2.4.2.1.4.3.3 → Trying i=3 at row=3, col=1
 not enuf col, next col
1.3.2.4.2.1.4.3.3.1 → Trying i=1 at row=3, col=2
1.3.2.4.2.1.4.3.3.2 → Trying i=2 at row=3, col=2
 not enuf col, next col
1.3 → Trying i=1 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
1.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 not enuf col, next col
4.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
4.1.1 → Trying i=1 at row=3, col=4
4.1.2 → Trying i=2 at row=3, col=4
check row
row 3 correct, next row
4.1.2.1 → Trying i=1 at row=4, col=1
4.1.2.2 → Trying i=2 at row=4, col=1
4.1.2.3 → Trying i=3 at row=4, col=1
4.1.2.4 → Trying i=4 at row=4, col=1
check vertical failed, break4.1.3 → Trying i=3 at row=3, col=4
4.1.4 → Trying i=4 at row=3, col=4
4.2 → Trying i=2 at row=3, col=3
4.3 → Trying i=3 at row=3, col=3
4.4 → Trying i=4 at row=3, col=3
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
2.1.1 → Trying i=1 at row=3, col=4
2.1.2 → Trying i=2 at row=3, col=4
2.1.3 → Trying i=3 at row=3, col=4
2.1.4 → Trying i=4 at row=3, col=4
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
check row
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=2
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 1 3 2 4
2 4 1 3
3 2 3 1
4 0 0 0

1 3 2 4
2 4 1 3
3 1 3 1
4 0 0 0

1 3 2 4
2 4 1 3
3 1 4 1
4 0 0 0

1 3 2 4
2 4 1 3
3 1 4 2
4 0 0 0

1 3 2 4
2 4 1 3
3 1 4 2
4 0 0 0

1 3 2 4
2 4 1 3
3 1 4 2
4 0 0 0

1 3 2 4
2 4 1 3
3 2 4 2
4 0 0 0

1 3 2 4
2 4 1 3
3 2 4 2
4 0 0 0

1 3 2 4
2 4 1 3
3 2 4 1
4 0 0 0

1 3 2 4
2 4 1 3
3 2 4 1
4 0 0 0

1 3 2 4
2 4 1 3
3 2 4 1
4 0 0 0

1 3 2 4
2 4 1 3
4 2 4 1
4 0 0 0

1 3 2 4
2 4 1 3
4 1 4 1
4 0 0 0

1 3 2 4
2 4 1 3
4 1 3 1
4 0 0 0

1 3 2 4
2 4 1 3
4 1 3 2
4 0 0 0

1 3 2 4
2 4 1 3
4 2 3 2
4 0 0 0

1 3 2 4
2 4 1 3
4 2 3 2
4 0 0 0

1 3 2 4
2 4 1 3
4 2 3 1
4 0 0 0

1 3 2 4
2 4 1 3
4 2 3 1
4 0 0 0

1 3 2 4
2 4 3 3
4 2 3 1
4 0 0 0

1 3 2 4
2 4 3 1
4 2 3 1
4 0 0 0

1 3 2 4
3 4 3 1
4 2 3 1
4 0 0 0

1 3 2 4
3 1 3 1
4 2 3 1
4 0 0 0

1 3 2 4
3 1 4 1
4 2 3 1
4 0 0 0

1 3 2 4
3 1 4 2
4 2 3 1
4 0 0 0

1 3 2 4
3 1 4 2
2 2 3 1
4 0 0 0

1 3 2 4
3 1 4 2
2 4 3 1
4 0 0 0

1 3 2 4
3 1 4 2
2 4 1 1
4 0 0 0

1 3 2 4
3 1 4 2
2 4 1 3
4 0 0 0

1 3 2 4
3 1 4 2
2 4 1 3
4 0 0 0

1 3 2 4
3 1 4 2
2 4 1 3
4 2 0 0

1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 0

1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 1

1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 1

→ Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
1.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
1.4.1 → Trying i=1 at row=3, col=4
1.4.2 → Trying i=2 at row=3, col=4
check row
row 3 correct, next row
1.4.2.1 → Trying i=1 at row=4, col=1
1.4.2.2 → Trying i=2 at row=4, col=1
1.4.2.3 → Trying i=3 at row=4, col=1
1.4.2.4 → Trying i=4 at row=4, col=1
check vertical failed, break1.4.3 → Trying i=3 at row=3, col=4
1.4.4 → Trying i=4 at row=3, col=4
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
2.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
2.4.1 → Trying i=1 at row=3, col=4
check row
row 3 correct, next row
2.4.1.1 → Trying i=1 at row=4, col=1
2.4.1.2 → Trying i=2 at row=4, col=1
2.4.1.3 → Trying i=3 at row=4, col=1
2.4.1.4 → Trying i=4 at row=4, col=1
check vertical failed, break2.4.2 → Trying i=2 at row=3, col=4
2.4.3 → Trying i=3 at row=3, col=4
2.4.4 → Trying i=4 at row=3, col=4
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
check row
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
check row
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 → Trying i=3 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 → Trying i=2 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 not enuf col, next col
4.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
4.1.1 → Trying i=1 at row=3, col=4
4.1.2 → Trying i=2 at row=3, col=4
4.1.3 → Trying i=3 at row=3, col=4
check row
row 3 correct, next row
4.1.3.1 → Trying i=1 at row=4, col=1
4.1.3.2 → Trying i=2 at row=4, col=1
4.1.3.3 → Trying i=3 at row=4, col=1
4.1.3.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
4.1.3.4.1 → Trying i=1 at row=4, col=2
4.1.3.4.2 → Trying i=2 at row=4, col=2
 not enuf col, next col
4.1.3.4.2.1 → Trying i=1 at row=4, col=3
4.1.3.4.2.2 → Trying i=2 at row=4, col=3
4.1.3.4.2.3 → Trying i=3 at row=4, col=3
 not enuf col, next col
4.1.3.4.2.3.1 → Trying i=1 at row=4, col=4
check row
row 4 correct, next row
check column
4.1.3.4.2.3.2 → Trying i=2 at row=4, col=4
4.1.3.4.2.3.3 → Trying i=3 at row=4, col=4
4.1.3.4.2.3.4 → Trying i=4 at row=4, col=4
4.1.3.4.2.4 → Trying i=4 at row=4, col=3
4.1.3.4.3 → Trying i=3 at row=4, col=2
4.1.3.4.4 → Trying i=4 at row=4, col=1 3 2 4
3 1 4 2
2 4 1 3
4 2 3 1

1 3 2 4
3 1 4 2
2 4 3 3
4 2 3 1

1 3 2 4
3 1 4 2
2 4 3 1
4 2 3 1

1 3 2 4
3 1 4 2
4 4 3 1
4 2 3 1

1 3 2 4
3 1 4 2
4 2 3 1
4 2 3 1

1 3 2 4
3 1 4 2
4 2 1 1
4 2 3 1

1 3 2 4
3 1 4 2
4 2 1 3
4 2 3 1

1 3 2 4
3 1 4 2
4 2 3 3
4 2 3 1

1 3 2 4
3 1 4 2
4 2 3 1
4 2 3 1

1 3 2 4
3 1 4 2
4 2 3 1
4 2 3 1

1 3 2 4
3 2 4 2
4 2 3 1
4 2 3 1

1 3 2 4
3 2 1 2
4 2 3 1
4 2 3 1

1 3 2 4
3 2 4 2
4 2 3 1
4 2 3 1

1 3 2 4
3 2 4 1
4 2 3 1
4 2 3 1

1 3 2 4
3 2 4 1
2 2 3 1
4 2 3 1

1 3 2 4
3 2 4 1
2 1 3 1
4 2 3 1

1 3 2 4
3 2 4 1
2 1 3 1
4 2 3 1

1 3 2 4
3 2 4 1
2 4 3 1
4 2 3 1

1 3 2 4
3 2 4 1
2 4 1 1
4 2 3 1

1 3 2 4
3 2 4 1
2 4 1 3
4 2 3 1

1 3 2 4
3 2 4 1
2 4 1 3
4 2 3 1

1 3 2 4
3 2 4 1
2 4 1 3
4 1 3 1

1 3 2 4
3 2 4 1
2 4 1 3
4 1 3 1

1 3 2 4
3 2 4 1
2 4 1 3
4 1 3 2

1 3 2 4
3 2 4 1
2 4 1 3
4 1 3 2

1 3 2 4
3 2 4 1
2 4 1 3
4 1 3 2

1 3 2 4
3 2 4 1
2 4 3 3
4 1 3 2

1 3 2 4
3 2 4 1
4 4 3 3
4 1 3 2

1 3 2 4
3 2 4 1
4 1 3 3
4 1 3 2

1 3 2 4
3 2 4 1
4 1 3 3
4 1 3 2

1 3 2 4
3 2 4 1
4 1 3 2
4 1 3 2

1 3 2 4
3 2 4 1
4 1 3 2
4 1 3 2

2
4.1.4 → Trying i=4 at row=3, col=4
4.2 → Trying i=2 at row=3, col=3
4.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
4.3.1 → Trying i=1 at row=3, col=4
check row
4.3.2 → Trying i=2 at row=3, col=4
4.3.3 → Trying i=3 at row=3, col=4
4.3.4 → Trying i=4 at row=3, col=4
4.4 → Trying i=4 at row=3, col=3
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
2.1.1 → Trying i=1 at row=3, col=4
2.1.2 → Trying i=2 at row=3, col=4
2.1.3 → Trying i=3 at row=3, col=4
check row
2.1.4 → Trying i=4 at row=3, col=4
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
check row
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 → Trying i=2 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 not enuf col, next col
4.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
4.1.1 → Trying i=1 at row=3, col=4
4.1.2 → Trying i=2 at row=3, col=4
4.1.3 → Trying i=3 at row=3, col=4
check row
row 3 correct, next row
4.1.3.1 → Trying i=1 at row=4, col=1
4.1.3.2 → Trying i=2 at row=4, col=1
4.1.3.3 → Trying i=3 at row=4, col=1
4.1.3.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
4.1.3.4.1 → Trying i=1 at row=4, col=2
 not enuf col, next col
4.1.3.4.1.1 → Trying i=1 at row=4, col=3
4.1.3.4.1.2 → Trying i=2 at row=4, col=3
4.1.3.4.1.3 → Trying i=3 at row=4, col=3
 not enuf col, next col
4.1.3.4.1.3.1 → Trying i=1 at row=4, col=4
4.1.3.4.1.3.2 → Trying i=2 at row=4, col=4
check row
row 4 correct, next row
check column
4.1.3.4.1.3.3 → Trying i=3 at row=4, col=4
4.1.3.4.1.3.4 → Trying i=4 at row=4, col=4
4.1.3.4.1.4 → Trying i=4 at row=4, col=3
4.1.3.4.2 → Trying i=2 at row=4, col=2
4.1.3.4.3 → Trying i=3 at row=4, col=2
4.1.3.4.4 → Trying i=4 at row=4, col=2
4.1.4 → Trying i=4 at row=3, col=4
4.2 → Trying i=2 at row=3, col=3
4.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
4.3.1 → Trying i=1 at row=3, col=4
4.3.2 → Trying i=2 at row=3, col=4
4.3.3 → Trying i=3 at row=3, col=4
4.3.4 → Trying i=4 at row=3, col=4
4.4 → Trying i=4 at row=3, col=3
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
check row
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i1 3 2 4
3 4 4 1
4 1 3 2
4 1 3 2

1 3 2 4
3 4 1 1
4 1 3 2
4 1 3 2

1 3 2 4
3 4 1 2
4 1 3 2
4 1 3 2

1 3 2 4
3 4 1 2
2 1 3 2
4 1 3 2

1 3 2 4
3 4 1 2
2 1 3 2
4 1 3 2

1 3 2 4
3 4 1 2
2 1 3 2
4 1 3 2

1 3 2 4
3 4 1 2
2 1 4 2
4 1 3 2

1 3 2 4
3 4 1 2
2 1 4 3
4 1 3 2

1 3 2 4
3 4 1 2
2 1 4 3
4 1 3 2

1 3 2 4
3 4 1 2
2 1 4 3
4 2 3 2

1 3 2 4
3 4 1 2
2 1 4 3
4 2 3 2

1 3 2 4
3 4 1 2
2 1 4 3
4 2 3 1

1 3 2 4
3 4 1 2
2 1 4 3
4 2 3 1

1 3 2 4
3 4 1 2
2 1 4 3
4 2 3 1

1 3 2 4
3 4 1 2
4 1 4 3
4 2 3 1

1 3 2 4
3 4 1 2
4 1 4 3
4 2 3 1

1 3 2 4
3 4 1 2
4 1 3 3
4 2 3 1

1 3 2 4
3 4 1 2
4 2 3 3
4 2 3 1

1 3 2 4
3 4 1 2
4 2 3 3
4 2 3 1

1 3 2 4
3 4 1 2
4 2 3 1
4 2 3 1

1 3 2 4
3 4 1 2
4 2 3 1
4 2 3 1

1 3 2 4
4 4 1 2
4 2 3 1
4 2 3 1

1 3 2 4
4 1 1 2
4 2 3 1
4 2 3 1

1 3 2 4
4 1 3 2
4 2 3 1
4 2 3 1

1 3 2 4
4 1 3 2
4 2 3 1
4 2 3 1

1 3 2 4
4 2 3 2
4 2 3 1
4 2 3 1

1 3 2 4
4 2 1 2
4 2 3 1
4 2 3 1

1 3 2 4
4 2 1 3
4 2 3 1
4 2 3 1

1 3 2 4
4 2 3 3
4 2 3 1
4 2 3 1

1 3 2 4
4 2 3 1
4 2 3 1
4 2 3 1

1 3 2 4
4 2 3 1
4 2 3 1
4 2 3 1

1 3 4 4
4 2 3 1
4 2 3 1
4 2 3 1

1 3 4 2
4 2 3 1
4 2 3 1
4 2 3 1

=4 at row=2, col=4
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 → Trying i=2 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
1.4.1 → Trying i=1 at row=3, col=4
1.4.2 → Trying i=2 at row=3, col=4
1.4.3 → Trying i=3 at row=3, col=4
check row
row 3 correct, next row
1.4.3.1 → Trying i=1 at row=4, col=1
1.4.3.2 → Trying i=2 at row=4, col=1
1.4.3.3 → Trying i=3 at row=4, col=1
1.4.3.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
1.4.3.4.1 → Trying i=1 at row=4, col=2
1.4.3.4.2 → Trying i=2 at row=4, col=2
 not enuf col, next col
1.4.3.4.2.1 → Trying i=1 at row=4, col=3
1.4.3.4.2.2 → Trying i=2 at row=4, col=3
1.4.3.4.2.3 → Trying i=3 at row=4, col=3
 not enuf col, next col
1.4.3.4.2.3.1 → Trying i=1 at row=4, col=4
check row
row 4 correct, next row
check column
1.4.3.4.2.3.2 → Trying i=2 at row=4, col=4
1.4.3.4.2.3.3 → Trying i=3 at row=4, col=4
1.4.3.4.2.3.4 → Trying i=4 at row=4, col=4
1.4.3.4.2.4 → Trying i=4 at row=4, col=3
1.4.3.4.3 → Trying i=3 at row=4, col=2
1.4.3.4.4 → Trying i=4 at row=4, col=2
1.4.4 → Trying i=4 at row=3, col=4
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
check row
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 → Trying i=4 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 → Trying i=3 at row=1, col=3
 → Trying i=4 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
check row
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=4 at r1 4 4 2
4 2 3 1
4 2 3 1
4 2 3 1

1 4 2 2
4 2 3 1
4 2 3 1
4 2 3 1

1 4 2 3
4 2 3 1
4 2 3 1
4 2 3 1

1 4 3 3
4 2 3 1
4 2 3 1
4 2 3 1

1 4 3 2
4 2 3 1
4 2 3 1
4 2 3 1

2 4 3 2
4 2 3 1
4 2 3 1
4 2 3 1

2 1 3 2
4 2 3 1
4 2 3 1
4 2 3 1

2 1 3 2
4 2 3 1
4 2 3 1
4 2 3 1

2 1 3 4
4 2 3 1
4 2 3 1
4 2 3 1

2 1 3 4
1 2 3 1
4 2 3 1
4 2 3 1

2 1 3 4
1 2 3 1
4 2 3 1
4 2 3 1

2 1 3 4
1 2 4 1
4 2 3 1
4 2 3 1

2 1 3 4
1 2 4 3
4 2 3 1
4 2 3 1

2 1 3 4
1 3 4 3
4 2 3 1
4 2 3 1

2 1 3 4
1 3 2 3
4 2 3 1
4 2 3 1

2 1 3 4
1 3 4 3
4 2 3 1
4 2 3 1

2 1 3 4
1 3 4 2
4 2 3 1
4 2 3 1

2 1 3 4
1 4 4 2
4 2 3 1
4 2 3 1

2 1 3 4
1 4 2 2
4 2 3 1
4 2 3 1

2 1 3 4
1 4 2 3
4 2 3 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 3 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 3 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 1 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 4 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 4 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 4 1
4 2 3 1

2 1 3 4
1 4 2 3
3 2 4 1
4 3 3 1

2 1 3 4
1 4 2 3
3 2 4 1
4 3 1 1

2 1 3 4
1 4 2 3
3 2 4 1
4 3 1 2

2 1 3 4
1 4 2 3
3 2 4 1
4 3 1 2

2 1 3 4
1 4 2 3
3 2 4 1
4 3 1 2

2 1 3 4
1 4 2 3
4 2 4 1
4 3 1 2

2 1 3 4
1 4 2 3
4 2 4 1
4 3 1 2

2 1 3 4
1 4 2 3
4 2 1 1
4 3 1 2

ow=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 → Trying i=2 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
check row
 → Trying i=4 at row=1, col=4
 → Trying i=3 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
check row
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=4 at row=1, col=3
 → Trying i=2 at row=1, col=1
 not enuf col, next col
 → Trying i=1 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 → Trying i=2 at row=1, col=3
 → Trying i=3 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
check row
row 1 correct, next row
 → Trying i=1 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 → Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
2.1.1 → Trying i=1 at row=3, col=4
2.1.2 → Trying i=2 at row=3, col=4
2.1.3 → Trying i=3 at row=3, col=4
2.1.4 → Trying i=4 at row=3, col=4
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
2.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
2.4.1 → Trying i=1 at row=3, col=4
check row
row 3 correct, next row
2.4.1.1 → Trying i=1 at row=4, col=1
2.4.1.2 → Trying i=2 at row=4, col=1
2.4.1.3 → Trying i=3 at row=4, col=1
2.4.1.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
2.4.1.4.1 → Trying i=1 at row=4, col=2
2.4.1.4.2 → Trying i=2 at row=4, col=2
2.4.1.4.3 → Trying i=3 at row=4, col=2
 not enuf col, next col
2.4.1.4.3.1 → Trying i=1 at row=4, col=3
 not enuf col, next col
2.4.1.4.3.1.1 → Trying i=1 at row=4, col=4
2.4.1.4.3.1.2 → Trying i=2 at row=4, col=4
check row
row 4 correct, next row
check column
2.4.1.4.3.1.3 → Trying i=3 at row=4, col=4
2.4.1.4.3.1.4 → Trying i=4 at row=4, col=4
2.4.1.4.3.2 → Trying i=2 at row=4, col=3
2.4.1.4.3.3 → Trying i=3 at row=4, col=3
2.4.1.4.3.4 → Trying i=4 at row=4, col=3
2.4.1.4.4 → Trying i=4 at row=4, col=2
2.4.2 → Trying i=2 at row=3, col=4
2.4.3 → Trying i=3 at row=3, col=4
2.4.4 → Trying i=4 at row=3, col=4
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
2.1.1 → Trying i=1 at row=3, col=4
2.1.2 → Trying i=2 at row=3, col=4
2.1.3 → Trying i=3 at row=3, col=4
2.1.4 → Trying i=4 at row=3, col=4
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
2 1 3 4
1 4 2 3
4 3 1 1
4 3 1 2

2 1 3 4
1 4 2 3
4 3 1 1
4 3 1 2

2 1 3 4
1 4 2 3
4 3 1 2
4 3 1 2

2 1 3 4
1 4 2 3
4 3 1 2
4 3 1 2

2 1 3 4
3 4 2 3
4 3 1 2
4 3 1 2

2 1 3 4
3 2 2 3
4 3 1 2
4 3 1 2

2 1 3 4
3 2 1 3
4 3 1 2
4 3 1 2

2 1 3 4
3 2 4 3
4 3 1 2
4 3 1 2

2 1 3 4
3 2 4 1
4 3 1 2
4 3 1 2

2 1 3 4
3 2 4 1
1 3 1 2
4 3 1 2

2 1 3 4
3 2 4 1
1 3 1 2
4 3 1 2

2 1 3 4
3 2 4 1
1 3 2 2
4 3 1 2

2 1 3 4
3 2 4 1
1 4 2 2
4 3 1 2

2 1 3 4
3 2 4 1
1 4 2 2
4 3 1 2

2 1 3 4
3 2 4 1
1 4 2 3
4 3 1 2

2 1 3 4
3 2 4 1
1 4 2 3
4 3 1 2

2 1 3 4
3 2 4 1
1 4 2 3
4 3 1 2

2 1 3 4
3 2 4 1
1 4 2 3
4 3 1 2

2 1 3 4
3 2 4 1
4 4 2 3
4 3 1 2

2 1 3 4
3 2 4 1
4 3 2 3
4 3 1 2

2 1 3 4
3 2 4 1
4 3 1 3
4 3 1 2

2 1 3 4
3 2 4 1
4 3 1 2
4 3 1 2

2 1 3 4
3 2 4 1
4 3 2 2
4 3 1 2

2 1 3 4
3 2 4 1
4 3 2 2
4 3 1 2

2 1 3 4
3 4 4 1
4 3 2 2
4 3 1 2

2 1 3 4
3 4 1 1
4 3 2 2
4 3 1 2

2 1 3 4
3 4 1 2
4 3 2 2
4 3 1 2

2 1 3 4
3 4 1 2
1 3 2 2
4 3 1 2

2 1 3 4
3 4 1 2
1 2 2 2
4 3 1 2

2 1 3 4
3 4 1 2
1 2 4 2
4 3 1 2

2 1 3 4
3 4 1 2
1 2 4 3
4 3 1 2

2 1 3 4
3 4 1 2
1 3 4 3
4 3 1 2

2 1 3 4
3 4 1 2
1 3 2 3
4 3 1 2

2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
 not enuf col, next col
3.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
3.1.1 → Trying i=1 at row=3, col=4
3.1.2 → Trying i=2 at row=3, col=4
check row
3.1.3 → Trying i=3 at row=3, col=4
3.1.4 → Trying i=4 at row=3, col=4
3.2 → Trying i=2 at row=3, col=3
3.3 → Trying i=3 at row=3, col=3
3.4 → Trying i=4 at row=3, col=3
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 → Trying i=2 at row=2, col=1
 → Trying i=3 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
 not enuf col, next col
3.1 → Trying i=1 at row=3, col=3
3.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
3.2.1 → Trying i=1 at row=3, col=4
3.2.2 → Trying i=2 at row=3, col=4
3.2.3 → Trying i=3 at row=3, col=4
3.2.4 → Trying i=4 at row=3, col=4
3.3 → Trying i=3 at row=3, col=3
3.4 → Trying i=4 at row=3, col=3
4 → Trying i=4 at row=3, col=2
 not enuf col, next col
4.1 → Trying i=1 at row=3, col=3
4.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
4.2.1 → Trying i=1 at row=3, col=4
4.2.2 → Trying i=2 at row=3, col=4
4.2.3 → Trying i=3 at row=3, col=4
check row
row 3 correct, next row
4.2.3.1 → Trying i=1 at row=4, col=1
4.2.3.2 → Trying i=2 at row=4, col=1
4.2.3.3 → Trying i=3 at row=4, col=1
4.2.3.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
4.2.3.4.1 → Trying i=1 at row=4, col=2
4.2.3.4.2 → Trying i=2 at row=4, col=2
4.2.3.4.3 → Trying i=3 at row=4, col=2
check vertical failed, break4.2.4 → Trying i=4 at row=3, col=4
4.3 → Trying i=3 at row=3, col=3
4.4 → Trying i=4 at row=3, col=3
 → Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
 not enuf col, next col
3.1 → Trying i=1 at row=3, col=3
 not enuf col, next col
3.1.1 → Trying i=1 at row=3, col=4
3.1.2 → Trying i=2 at row=3, col=4
check row
3.1.3 → Trying i=3 at row=3, col=4
3.1.4 → Trying i=4 at row=3, col=4
3.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
3.2.1 → Trying i=1 at row=3, col=4
3.2.2 → Trying i=2 at row=3, col=4
3.2.3 → Trying i=3 at row=3, col=4
3.2.4 → Trying i=4 at row=3, col=4
3.3 → Trying i=3 at row=3, col=3
3.4 → Trying i=4 at row=3, col=3
4 → Trying i=4 at row=3, col=2
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
2.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
2.4.1 → Trying i=1 at row=3, col=4
2.4.2 → Trying i=2 at row=3, col=4
2.4.3 → Trying i=3 at row=3, col=4
check row
2.4.4 → Trying i=4 at row=3, col=4
3 → Trying i=3 at row=3, col=2
 not enuf col, next col
3.1 → Trying i=1 at row=3, col=3
3.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
3.2.1 → Trying i=1 at row=3, col=4
3.2.2 → Trying i2 1 3 4
3 4 1 2
1 3 4 3
4 3 1 2

2 1 3 4
3 4 1 2
4 3 4 3
4 3 1 2

2 1 3 4
3 4 1 2
4 2 4 3
4 3 1 2

2 1 3 4
3 4 1 2
4 3 4 3
4 3 1 2

2 1 3 4
3 4 1 2
4 3 2 3
4 3 1 2

2 1 3 4
3 4 1 2
4 3 2 1
4 3 1 2

2 1 3 4
3 4 1 2
4 3 2 1
4 3 1 2

2 1 3 4
3 4 2 2
4 3 2 1
4 3 1 2

2 1 3 4
3 4 2 1
4 3 2 1
4 3 1 2

2 1 3 4
4 4 2 1
4 3 2 1
4 3 1 2

2 1 3 4
4 2 2 1
4 3 2 1
4 3 1 2

2 1 3 4
4 2 1 1
4 3 2 1
4 3 1 2

2 1 3 4
4 2 1 3
4 3 2 1
4 3 1 2

2 1 3 4
4 3 1 3
4 3 2 1
4 3 1 2

2 1 3 4
4 3 1 3
4 3 2 1
4 3 1 2

2 1 3 4
4 3 1 2
4 3 2 1
4 3 1 2

2 1 3 4
4 3 2 2
4 3 2 1
4 3 1 2

2 1 3 4
4 3 2 1
4 3 2 1
4 3 1 2

2 1 3 4
4 3 2 1
4 3 2 1
4 3 1 2

2 1 4 4
4 3 2 1
4 3 2 1
4 3 1 2

2 1 4 3
4 3 2 1
4 3 2 1
4 3 1 2

2 3 4 3
4 3 2 1
4 3 2 1
4 3 1 2

2 3 1 3
4 3 2 1
4 3 2 1
4 3 1 2

2 3 1 4
4 3 2 1
4 3 2 1
4 3 1 2

2 3 1 4
1 3 2 1
4 3 2 1
4 3 1 2

2 3 1 4
1 2 2 1
4 3 2 1
4 3 1 2

2 3 1 4
1 2 3 1
4 3 2 1
4 3 1 2

2 3 1 4
1 2 4 1
4 3 2 1
4 3 1 2

2 3 1 4
1 2 4 3
4 3 2 1
4 3 1 2

2 3 1 4
1 4 4 3
4 3 2 1
4 3 1 2

2 3 1 4
1 4 2 3
4 3 2 1
4 3 1 2

2 3 1 4
1 4 2 3
4 3 2 1
4 3 1 2

2 3 1 4
1 4 2 3
3 3 2 1
4 3 1 2

2 3 1 4
1 4 2 3
3 1 2 1
4 3 1 2

=2 at row=3, col=4
3.2.3 → Trying i=3 at row=3, col=4
3.2.4 → Trying i=4 at row=3, col=4
3.3 → Trying i=3 at row=3, col=3
3.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
3.4.1 → Trying i=1 at row=3, col=4
3.4.2 → Trying i=2 at row=3, col=4
3.4.3 → Trying i=3 at row=3, col=4
3.4.4 → Trying i=4 at row=3, col=4
4 → Trying i=4 at row=3, col=2
 → Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
 not enuf col, next col
3.1 → Trying i=1 at row=3, col=3
3.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
3.2.1 → Trying i=1 at row=3, col=4
check row
3.2.2 → Trying i=2 at row=3, col=4
3.2.3 → Trying i=3 at row=3, col=4
3.2.4 → Trying i=4 at row=3, col=4
3.3 → Trying i=3 at row=3, col=3
3.4 → Trying i=4 at row=3, col=3
4 → Trying i=4 at row=3, col=2
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 → Trying i=4 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 → Trying i=3 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 → Trying i=4 at row=2, col=2
 → Trying i=4 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
check row
 → Trying i=4 at row=1, col=4
 → Trying i=2 at row=1, col=2
 → Trying i=3 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
check row
row 1 correct, next row
 → Trying i=1 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 → Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, co2 3 1 4
1 4 2 3
3 1 4 1
4 3 1 2

2 3 1 4
1 4 2 3
3 1 4 2
4 3 1 2

2 3 1 4
1 4 2 3
3 1 4 2
4 3 1 2

2 3 1 4
1 4 2 3
3 1 4 2
4 2 1 2

2 3 1 4
1 4 2 3
3 1 4 2
4 2 3 2

2 3 1 4
1 4 2 3
3 1 4 2
4 2 3 2

2 3 1 4
1 4 2 3
3 2 4 2
4 2 3 2

2 3 1 4
1 4 2 3
3 2 4 2
4 2 3 2

2 3 1 4
1 4 2 3
3 2 4 1
4 2 3 2

2 3 1 4
1 4 2 3
3 2 4 1
4 2 3 2

2 3 1 4
1 4 2 3
3 2 4 1
4 1 3 2

2 3 1 4
1 4 2 3
3 2 4 1
4 1 3 2

2 3 1 4
1 4 2 3
4 2 4 1
4 1 3 2

2 3 1 4
1 4 2 3
4 1 4 1
4 1 3 2

2 3 1 4
1 4 2 3
4 1 3 1
4 1 3 2

2 3 1 4
1 4 2 3
4 1 3 2
4 1 3 2

2 3 1 4
1 4 2 3
4 2 3 2
4 1 3 2

2 3 1 4
1 4 2 3
4 2 3 2
4 1 3 2

2 3 1 4
1 4 2 3
4 2 3 1
4 1 3 2

2 3 1 4
1 4 2 3
4 2 3 1
4 1 3 2

2 3 1 4
1 4 3 3
4 2 3 1
4 1 3 2

2 3 1 4
1 4 3 2
4 2 3 1
4 1 3 2

2 3 1 4
3 4 3 2
4 2 3 1
4 1 3 2

2 3 1 4
3 1 3 2
4 2 3 1
4 1 3 2

2 3 1 4
3 1 2 2
4 2 3 1
4 1 3 2

2 3 1 4
3 1 4 2
4 2 3 1
4 1 3 2

2 3 1 4
3 1 4 2
4 2 3 1
4 1 3 2

2 3 1 4
3 1 4 2
1 2 3 1
4 1 3 2

2 3 1 4
3 1 4 2
1 2 3 1
4 1 3 2

2 3 1 4
3 1 4 2
1 2 3 1
4 1 3 2

2 3 1 4
3 1 4 2
1 4 3 1
4 1 3 2

2 3 1 4
3 1 4 2
1 4 2 1
4 1 3 2

2 3 1 4
3 1 4 2
1 4 2 3
4 1 3 2

l=3
1.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
1.4.1 → Trying i=1 at row=3, col=4
1.4.2 → Trying i=2 at row=3, col=4
check row
row 3 correct, next row
1.4.2.1 → Trying i=1 at row=4, col=1
1.4.2.2 → Trying i=2 at row=4, col=1
1.4.2.3 → Trying i=3 at row=4, col=1
1.4.2.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
1.4.2.4.1 → Trying i=1 at row=4, col=2
1.4.2.4.2 → Trying i=2 at row=4, col=2
 not enuf col, next col
1.4.2.4.2.1 → Trying i=1 at row=4, col=3
1.4.2.4.2.2 → Trying i=2 at row=4, col=3
1.4.2.4.2.3 → Trying i=3 at row=4, col=3
check vertical failed, break1.4.2.4.3 → Trying i=3 at row=4, col=2
1.4.2.4.4 → Trying i=4 at row=4, col=2
1.4.3 → Trying i=3 at row=3, col=4
1.4.4 → Trying i=4 at row=3, col=4
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
2.4 → Trying i=4 at row=3, col=3
 not enuf col, next col
2.4.1 → Trying i=1 at row=3, col=4
check row
row 3 correct, next row
2.4.1.1 → Trying i=1 at row=4, col=1
2.4.1.2 → Trying i=2 at row=4, col=1
2.4.1.3 → Trying i=3 at row=4, col=1
2.4.1.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
2.4.1.4.1 → Trying i=1 at row=4, col=2
check vertical failed, break2.4.2 → Trying i=2 at row=3, col=4
2.4.3 → Trying i=3 at row=3, col=4
2.4.4 → Trying i=4 at row=3, col=4
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
check row
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
check row
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 → Trying i=2 at row=2, col=1
 → Trying i=3 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 not enuf col, next col
4.1 → Trying i=1 at row=3, col=3
4.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
4.2.1 → Trying i=1 at row=3, col=4
4.2.2 → Trying i=2 at row=3, col=4
4.2.3 → Trying i=3 at row=3, col=4
check row
row 3 correct, next row
4.2.3.1 → Trying i=1 at row=4, col=1
4.2.3.2 → Trying i=2 at row=4, col=1
4.2.3.3 → Trying i=3 at row=4, col=1
4.2.3.4 → Trying i2 3 1 4
3 1 4 2
1 4 2 3
4 1 3 2

2 3 1 4
3 1 4 2
1 4 2 3
4 2 3 2

2 3 1 4
3 1 4 2
1 4 2 3
4 2 3 2

2 3 1 4
3 1 4 2
1 4 2 3
4 2 3 1

2 3 1 4
3 1 4 2
1 4 2 3
4 2 3 1

2 3 1 4
3 1 4 2
1 4 2 3
4 2 3 1

2 3 1 4
3 1 4 2
1 4 3 3
4 2 3 1

2 3 1 4
3 1 4 2
4 4 3 3
4 2 3 1

2 3 1 4
3 1 4 2
4 2 3 3
4 2 3 1

2 3 1 4
3 1 4 2
4 2 3 3
4 2 3 1

2 3 1 4
3 1 4 2
4 2 3 1
4 2 3 1

2 3 1 4
3 1 4 2
4 2 3 1
4 2 3 1

2 3 1 4
3 2 4 2
4 2 3 1
4 2 3 1

2 3 1 4
3 2 4 2
4 2 3 1
4 2 3 1

2 3 1 4
3 2 4 1
4 2 3 1
4 2 3 1

2 3 1 4
3 2 4 1
1 2 3 1
4 2 3 1

2 3 1 4
3 2 4 1
1 4 3 1
4 2 3 1

2 3 1 4
3 2 4 1
1 4 2 1
4 2 3 1

2 3 1 4
3 2 4 1
1 4 2 3
4 2 3 1

2 3 1 4
3 2 4 1
1 4 2 3
4 2 3 1

2 3 1 4
3 2 4 1
1 4 2 3
4 1 3 1

2 3 1 4
3 2 4 1
1 4 2 3
4 1 3 1

2 3 1 4
3 2 4 1
1 4 2 3
4 1 3 2

2 3 1 4
3 2 4 1
1 4 2 3
4 1 3 2

2 3 1 4
3 2 4 1
1 4 2 3
4 1 3 2

2 3 1 4
3 2 4 1
1 4 3 3
4 1 3 2

2 3 1 4
3 2 4 1
1 4 3 2
4 1 3 2

2 3 1 4
3 2 4 1
4 4 3 2
4 1 3 2

2 3 1 4
3 2 4 1
4 1 3 2
4 1 3 2

2 3 1 4
3 2 4 1
4 1 2 2
4 1 3 2

2 3 1 4
3 2 4 1
4 1 2 3
4 1 3 2

2 3 1 4
3 2 4 1
4 1 3 3
4 1 3 2

2 3 1 4
3 2 4 1
4 1 3 2
4 1 3 2

=4 at row=4, col=1
 not enuf col, next col
4.2.3.4.1 → Trying i=1 at row=4, col=2
4.2.3.4.2 → Trying i=2 at row=4, col=2
 not enuf col, next col
4.2.3.4.2.1 → Trying i=1 at row=4, col=3
4.2.3.4.2.2 → Trying i=2 at row=4, col=3
4.2.3.4.2.3 → Trying i=3 at row=4, col=3
 not enuf col, next col
4.2.3.4.2.3.1 → Trying i=1 at row=4, col=4
check row
row 4 correct, next row
check column
4.2.3.4.2.3.2 → Trying i=2 at row=4, col=4
4.2.3.4.2.3.3 → Trying i=3 at row=4, col=4
4.2.3.4.2.3.4 → Trying i=4 at row=4, col=4
4.2.3.4.2.4 → Trying i=4 at row=4, col=3
4.2.3.4.3 → Trying i=3 at row=4, col=2
4.2.3.4.4 → Trying i=4 at row=4, col=2
4.2.4 → Trying i=4 at row=3, col=4
4.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
4.3.1 → Trying i=1 at row=3, col=4
4.3.2 → Trying i=2 at row=3, col=4
4.3.3 → Trying i=3 at row=3, col=4
4.3.4 → Trying i=4 at row=3, col=4
4.4 → Trying i=4 at row=3, col=3
 → Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
 not enuf col, next col
2.1 → Trying i=1 at row=3, col=3
2.2 → Trying i=2 at row=3, col=3
2.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
2.3.1 → Trying i=1 at row=3, col=4
check row
2.3.2 → Trying i=2 at row=3, col=4
2.3.3 → Trying i=3 at row=3, col=4
2.3.4 → Trying i=4 at row=3, col=4
2.4 → Trying i=4 at row=3, col=3
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
row 2 correct, next row
 → Trying i=1 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
2 → Trying i=2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 not enuf col, next col
4.1 → Trying i=1 at row=3, col=3
4.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
4.2.1 → Trying i=1 at row=3, col=4
4.2.2 → Trying i=2 at row=3, col=4
4.2.3 → Trying i=3 at row=3, col=4
check row
row 3 correct, next row
4.2.3.1 → Trying i=1 at row=4, col=1
4.2.3.2 → Trying i=2 at row=4, col=1
4.2.3.3 → Trying i=3 at row=4, col=1
4.2.3.4 → Trying i=4 at row=4, col=1
 not enuf col, next col
4.2.3.4.1 → Trying i=1 at row=4, col=2
 not enuf col, next col
4.2.3.4.1.1 → Trying i=1 at row=4, col=3
4.2.3.4.1.2 → Trying i=2 at row=4, col=3
4.2.3.4.1.3 → Trying i=3 at row=4, col=3
 not enuf col, next col
4.2.3.4.1.3.1 → Trying i=1 at row=4, col=4
4.2.3.4.1.3.2 → Trying i=2 at row=4, col=4
check row
row 4 correct, next row
check column
4.2.3.4.1.3.3 → Trying i=3 at row=4, col=4
4.2.3.4.1.3.4 → Trying i=4 at row=4, col=4
4.2.3.4.1.4 → Trying i=4 at row=4, col=3
4.2.3.4.2 → Trying i=2 at row=4, col=2
4.2.3.4.3 → Trying i=3 at row=4, col=2
4.2.3.4.4 → Trying i=4 at row=4, col=2
4.2.4 → Trying i=4 at row=3, col=4
4.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
4.3.1 → Trying i=1 at row=3, col=4
4.3.2 → Trying i=2 at row=3, col=4
check row
4.3.3 → Trying i=3 at row=3, col=4
4.3.4 → Trying i=4 at row=3, col=4
4.4 → Trying i=4 at row=3, col=3
 → Trying i=2 at row=3, col=1
 → Trying i=3 at row=3, col=1
 → Trying i=4 at row=3, col=1
 not enuf col, next col
1 → Trying i=1 at row=3, col=2
 not enuf col, next col
1.1 → Trying i=1 at row=3, col=3
1.2 → Trying i=2 at row=3, col=3
 not enuf col, next col
1.2.1 → Trying i=1 at row=3, col=4
1.2.2 → Trying i=2 at row=3, col=4
1.2.3 → Trying i=3 at row=3, col=4
check row
1.2.4 → Trying i=4 at row=3, col=4
1.3 → Trying i=3 at row=3, col=3
 not enuf col, next col
1.3.1 → Trying i=1 at row=3, col=4
1.3.2 → Trying i=2 at row=3, col=4
check row
1.3.3 → Trying i=3 at row=3, col=4
1.3.4 → Trying i=4 at row=3, col=4
1.4 → Trying i=4 at row=3, col=3
2 → Trying i=2 3 1 4
3 2 4 1
4 1 3 2
4 1 3 2

2 3 1 4
3 4 4 1
4 1 3 2
4 1 3 2

2 3 1 4
3 4 2 1
4 1 3 2
4 1 3 2

2 3 1 4
3 4 2 1
4 1 3 2
4 1 3 2

2 3 1 4
4 4 2 1
4 1 3 2
4 1 3 2

2 3 1 4
4 1 2 1
4 1 3 2
4 1 3 2

2 3 1 4
4 1 2 1
4 1 3 2
4 1 3 2

2 3 1 4
4 1 2 3
4 1 3 2
4 1 3 2

2 3 1 4
4 1 3 3
4 1 3 2
4 1 3 2

2 3 1 4
4 1 3 2
4 1 3 2
4 1 3 2

2 3 1 4
4 2 3 2
4 1 3 2
4 1 3 2

2 3 1 4
4 2 3 2
4 1 3 2
4 1 3 2

2 3 1 4
4 2 3 1
4 1 3 2
4 1 3 2

2 3 1 4
4 2 3 1
4 1 3 2
4 1 3 2

2 3 4 4
4 2 3 1
4 1 3 2
4 1 3 2

2 3 4 1
4 2 3 1
4 1 3 2
4 1 3 2

2 4 4 1
4 2 3 1
4 1 3 2
4 1 3 2

2 4 1 1
4 2 3 1
4 1 3 2
4 1 3 2

2 4 1 3
4 2 3 1
4 1 3 2
4 1 3 2

2 4 3 3
4 2 3 1
4 1 3 2
4 1 3 2

2 4 3 1
4 2 3 1
4 1 3 2
4 1 3 2

3 4 3 1
4 2 3 1
4 1 3 2
4 1 3 2

3 1 3 1
4 2 3 1
4 1 3 2
4 1 3 2

3 1 2 1
4 2 3 1
4 1 3 2
4 1 3 2

3 1 2 4
4 2 3 1
4 1 3 2
4 1 3 2

3 1 4 4
4 2 3 1
4 1 3 2
4 1 3 2

3 1 4 2
4 2 3 1
4 1 3 2
4 1 3 2

3 2 4 2
4 2 3 1
4 1 3 2
4 1 3 2

3 2 1 2
4 2 3 1
4 1 3 2
4 1 3 2

3 2 1 4
4 2 3 1
4 1 3 2
4 1 3 2

3 2 4 4
4 2 3 1
4 1 3 2
4 1 3 2

3 2 4 1
4 2 3 1
4 1 3 2
4 1 3 2

3 4 4 1
4 2 3 1
4 1 3 2
4 1 3 2

3 4 1 1
4 2 3 1
4 1 3 2
4 1 3 2

3 4 1 2
4 2 3 1
4 1 3 2
4 1 3 2

3 4 2 2
4 2 3 1
4 1 3 2
4 1 3 2

3 4 2 1
4 2 3 1
4 1 3 2
4 1 3 2

4 4 2 1
4 2 3 1
4 1 3 2
4 1 3 2

4 1 2 1
4 2 3 1
4 1 3 2
4 1 3 2

4 1 2 1
4 2 3 1
4 1 3 2
4 1 3 2

2 at row=3, col=2
3 → Trying i=3 at row=3, col=2
4 → Trying i=4 at row=3, col=2
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 → Trying i=4 at row=2, col=3
 → Trying i=4 at row=2, col=1
 not enuf col, next col
 → Trying i=1 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
check row
 → Trying i=4 at row=2, col=4
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
 → Trying i=2 at row=2, col=4
check row
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 → Trying i=2 at row=2, col=2
 not enuf col, next col
 → Trying i=1 at row=2, col=3
 → Trying i=2 at row=2, col=3
 → Trying i=3 at row=2, col=3
 not enuf col, next col
 → Trying i=1 at row=2, col=4
check row
 → Trying i=2 at row=2, col=4
 → Trying i=3 at row=2, col=4
 → Trying i=4 at row=2, col=4
 → Trying i=4 at row=2, col=3
 → Trying i=3 at row=2, col=2
 → Trying i=4 at row=2, col=2
 → Trying i=2 at row=1, col=3
 → Trying i=3 at row=1, col=3
 → Trying i=4 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
check row
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=4 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
check row
 → Trying i=4 at row=1, col=4
 → Trying i=2 at row=1, col=3
 → Trying i=3 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
check row
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=4 at row=1, col=3
 → Trying i=3 at row=1, col=1
 not enuf col, next col
 → Trying i=1 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 → Trying i=2 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
check row
 → Trying i=3 at row=1, col=3
 → Trying i=4 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
check row
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=2 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
check row
 → Trying i=2 at row=1, col=3
 → Trying i=3 at row=1, col=3
 → Trying i=4 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
check row
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=3 at row=1, col=2
 → Trying i=4 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
check row
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=2 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
check row
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=3 at row=1, col=3
 → Trying i=4 at row=1, col=3
 → Trying i=4 at row=1, col=1
 not enuf col, next col
 → Trying i=1 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 → Trying i=2 at row=1, col=3
 not enuf 4 1 2 3
4 2 3 1
4 1 3 2
4 1 3 2

4 1 3 3
4 2 3 1
4 1 3 2
4 1 3 2

4 1 3 2
4 2 3 1
4 1 3 2
4 1 3 2

4 2 3 2
4 2 3 1
4 1 3 2
4 1 3 2

4 2 1 2
4 2 3 1
4 1 3 2
4 1 3 2

4 2 1 3
4 2 3 1
4 1 3 2
4 1 3 2

4 2 3 3
4 2 3 1
4 1 3 2
4 1 3 2

4 2 3 1
4 2 3 1
4 1 3 2
4 1 3 2

4 3 3 1
4 2 3 1
4 1 3 2
4 1 3 2

4 3 1 1
4 2 3 1
4 1 3 2
4 1 3 2

4 3 1 2
4 2 3 1
4 1 3 2
4 1 3 2

4 3 2 2
4 2 3 1
4 1 3 2
4 1 3 2

4 3 2 1
4 2 3 1
4 1 3 2
4 1 3 2

Error
col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
check row
 → Trying i=4 at row=1, col=4
 → Trying i=3 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
check row
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=4 at row=1, col=3
 → Trying i=2 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
check row
 → Trying i=4 at row=1, col=4
 → Trying i=2 at row=1, col=3
 → Trying i=3 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
check row
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=4 at row=1, col=3
 → Trying i=3 at row=1, col=2
 not enuf col, next col
 → Trying i=1 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
 → Trying i=2 at row=1, col=4
check row
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=2 at row=1, col=3
 not enuf col, next col
 → Trying i=1 at row=1, col=4
check row
 → Trying i=2 at row=1, col=4
 → Trying i=3 at row=1, col=4
 → Trying i=4 at row=1, col=4
 → Trying i=3 at row=1, col=3
 → Trying i=4 at row=1, col=3
 → Trying i=4 at row=1, col=2
```
