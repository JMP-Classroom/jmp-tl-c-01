# Problem Set PS-05

## JMP TechLive, C Programming (nD Arrays / Pointers)

### Notes

The `shape` prameter is an array of size `2`, where the first element (`shape[0]`) is the number of rows in the matrix, and the second element (`shape[1]`) is the number of columns in the matrix.

### Exercises

-----

. Write a function that returns the maximum value in the 2d parameter array a.

`int jm_mtxint_max(int** a, int shape[2], int x)`

-----

. Write a function that returns the sum of the elements in Row x of a.

`int jm_mtxint_row_sum(int** a, int shape[2], int x)`

-----

. Write a function that returns the sum of the elements in Column x of a.

`int jm_mtxint_col_sum(int** a, int shape[2], int x)`

-----

. Write a function that calculates the row sum for every row and returns each of the values in an array. Index i of the return array contains the sum of elements in row i.

`int[] jm_mtxint_row_sum_all(int** a, int shape[2])`

-----

. Write a function that checks if the array is row-magic (this means that every row has the same row sum).

`int jm_mtxint_is_row_magic(int** a, int shape[2])`

-----

. Write a function that checks if the array is column-magic (this means that every column has the same column sum).

`int jm_mtxint_is_col_magic(int** a, int shape[2])`

-----

.Write a function that checks if the array is a magic square. This means that it must be square, and that all row sums, all column sums, and the two diagonal-sums must all be equal.

`int jm_mtxint_is_magic(int** a, int shape[2])`

-----

. Write a function that takes the address of two integers and swap their values

`void jm_int_swap(int *n1, int *n2)`
