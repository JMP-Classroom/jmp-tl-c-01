# Problem Set PS-06

## JMP TechLive, C Programming (Matrices)

### Notes

The `shape` prameter is an array of size `2`, where the first element (`shape[0]`) is the number of rows in the matrix, and the second element (`shape[1]`) is the number of columns in the matrix.

### Notes

### Problems

-----

. Write a function which takes two matrices and return their addition.

```c
int jm_mtxint_add(int **mtx1, int **mtx2, int shape1[2], int shape2[2], int **res);
```

-----

. Write a function which takes two matrices and return their substraction.

```c
int jm_mtxint_sub(int **mtx1, int **mtx2, int shape1[2], int shape2[2], int **res);
```

-----

. Write a function which takes two matrices and return the *element-wise multiplication* of them.

```c
int jm_mtxint_mul(int **mtx1, int **mtx2, int shape1[2], int shape2[2], int **res);
```

-----

. Write a function which takes two matrices and return the *dot product* of them.

```c
int jm_mtxint_dot(int **mtx1, int **mtx2, int shape1[2], int shape2[2], int **res);
```

-----

. Given a square matrix `mtx`, Write a function which calculate the **Trace** of this matrix (sum of *major diagonal* (*main diagonal*)).

```c
int jm_mtxint_tr(int **mtx, int shape[2]);
```

-----

. Given a square matrix `mtx`, Write a function which calculate the sum of *minor diagonal* (*secondary diagonal*).

```c
int jm_mtxint_d_min_sum(int **mtx, int shape[2]);
```

-----

. Given a square matrix `mtx`, Write a function which calculate the sum of both *major diagonal* and *minor diagonal*.

```c
int jm_mtxint_d_all_sum(int **mtx, int shape[2]);
```

-----

. Given a square matrix `mtx`, Write a function which calculate the sum of *upper triangle* elements.

```c
int jm_mtxint_triup_sum(int **mtx, int shape[2]);
```

-----

. Given a square matrix `mtx`, Write a function which calculate the sum of *lower triangle* elements.

```c
int jm_mtxint_trilo_sum(int **mtx, int shape[2]);
```

-----

. Given a square matrix `mtx`, Write a function which interchange (*swap*) the diagonals of this matrix.

```c
int jm_mtxint_swap_d(int **mtx, int shape[2]);
```

-----

. Given a matrix `mtx`, Write a function which interchange (*swap*) the rows at indices `r1` and `r2`.

```c
int jm_mtxint_swap_r(int **mtx, int shape[2], int r1, int r2);
```

-----

. Given a matrix `mtx`, Write a function which interchange (*swap*) the columns at indices `c1` and `c2`.

```c
int jm_mtxint_swap_r(int **mtx, int shape[2], int c1, int c2);
```

-----

. Given a square matrix `mtx`, Write a function which interchange (*swap*) the row and column at indices `r` and `c`.

```c
int jm_mtxint_swap_rc(int **mtx, int shape[2], int r, int c);
```

-----

. Given a matrix `mtx`, Write a function which find the transpose of this matrix.

```c
int jm_mtxint_t(int **mtx, int shape[2], int **t);
```

-----

. Given a matrix `mtx`, Write a function which find the determinant of this matrix.

```c
int jm_mtxint_det(int **mtx, int shape[2], int **tr);
```

-----

. Write a function to check if the matrix `mtx` is an *Identity Matrix*.

```c
int jm_mtxint_is_id(int **mtx, int shape[2]);
```

-----

. Write a function to check if the matrix `mtx` is an *Sparse Matrix*.

```c
int jm_mtxint_is_sparse(int **mtx, int shape[2]);
```

-----

. Write a function to check if the matrix `mtx` is an *Symmetric Matrix*.

```c
int jm_mtxint_is_sym(int **mtx, int shape[2]);
```

[//]: # (print triangle[up & lo] with unified spacing between elements)

