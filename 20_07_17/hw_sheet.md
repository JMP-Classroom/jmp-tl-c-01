# Homework 20_07_17

## JMP TechLive, C Programming

**Individual Deadline:** *Wen 22th 07 2020 - at 11:59*.

**Teamwork Deadline:** *Wen 22th 07 2020 - at 23:59*.

**PS**: You should provide a test program which include the `main` function to test your functions, with the possibility of user input.

### Submission Guide

You must Return your solution in the following format for each exercise. The file must be named as follows: `hw-YY.MM.DD-FUNCTION_NAME.c` ie: `hw-20.07.17-jm_arrint_max.c` (*All characters in lowercase separated by underscore '`_`'* )

*Replace `@xbluecode` by your Github username*. In case of teamwork submission, then replace it with `@teamwork`

```c
// Homework By @xbluecode

// include libraries
#include <stdio.h>

// function prototypes
int jm_arrint_max(int arr[], int size);

int main()
{
    int arr1[5] = {2, 3, 8, 0, 2};
    int arr2[7] = {3, 3, 6, 7, 1, 2, 0};
    // arr2, arr3, ...

    res1 = jm_arrint_max(arr1, 5);
    // print result 1 in appropriate format.

    res2 = jm_arrint_max(arr1, 7);
    // print result 2 in appropriate format.

    // do more input examples in the same way

}

int jm_arrint_max()
{
    // Write your logic here!
}

```

### Exercises

****

. `jm_arrint_print(int a[], int size)`

Write a function to traverse and print all elements of an array in the following format `index: value`.

```txt
// Output example: 4 numbers
0: 25
1: -21
2: 450
3: -97
```

****

. `jm_arrint_print_rev(int a[], int size)`

Write a function to traverse and print all elements of an array in the reverse order as follows `index: value`.

```txt
// Output example: 4 numbers
3: -97
2: 450
1: -21
0: 25
```

****

. `int jm_arrint_search(int arr[], int size, int n)`

Write a function which takes an array of integers, its size and an integers `n`, it returns `1` if `n` exists in the array and `0` otherwise.

****

. `int jm_arrint_sum(int arr[], int size)`

Write a function which takes an array of integers and return the sum of its elements.

****

. `int jm_arrint_avg(int arr[], int size)`

Write a function which takes an array of integers and return the average of its elements.

****

. `int jm_arrint_min(int arr[], int size)`

Write a function which takes an array of integers and return the **minimum**.


****

. `int jm_arrint_max(int arr[], int size)`

Write a function which takes an array of integers and return the **maximum**.

****

. `int jm_arrint_mid(int arr[], int size)`

Write a function which takes an array of integers and return the **midium**.

****

. `int jm_arrint_copy(int arr1[], int arr2[], int size)`
Write a function to copy the elements from `arr1` into the array `arr2`.

*The array `arr2` must have the same size as the array `arr1`.*

****

. `int jm_arrint_copy_rev(int arr1[], int arr2[], int size)`
Write a function to copy the elements from `arr1` into the array `arr2` in reverse order.

*The array `arr2` must have the same size as the array `arr1`.*

****

. `int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2)`
Write a function to merge the elements from `arr1` and `arr2` into the array `arr3`.

*The array `arr3` must have the size equal to the sum of sizes `size1` and `size2`.*

****

. `int jm_arrint_is_sorted(int arr[], int size, int order)`
Write a function to check if `arr` is sorted in the given order.

- **(order: 0)** Ascending order.
- **(order: 1)** Descending order.

****

. `void jm_arrint_sort(int arr[], int size, int order)`
Write a function to sort an array of integers in the given order.

- **(order: 0)** Ascending order.
- **(order: 1)** Descending order.

****

. `int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2)`

Write a function to check if `arr1` and `arr2` are equals.

****

. `void jm_arrint_rot(int arr[], int size, int shift, int dir)`

Write a function to rotate the array `arr` by the given shift and direction `dir`.

- (**dir: 0**) - Left rotation.
- (**dir: 1**) - Right rotation.

****

. `void jm_arrint_rem(int arr[], int size, int id)`

Write a function to remove an element of index `id` from the array `arr`.

****

. `void jm_arrint_ind(int arr[], int size, int id, int val)`

Write a function to insert the element of value `val` the index `id` in the array `arr`.

****

. `void jm_arrint_print_unique(int arr[], int size)`

Write a function to print all unique elements in the array `arr`.

****
by [@xBlueCode](https://github.com/xBlueCode).
