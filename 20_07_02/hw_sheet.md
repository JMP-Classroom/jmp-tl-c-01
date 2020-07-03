# Homework 20_06_29
## JMP TechLive, C Programming

**PS**: You should provide a test program which include the `main` function to test your functions, with the possibility of user input.

### Functions

Write the following functions.

- ```int is_leap(int year)```

    It checks if a given year is leap or not, it returns `1` if it's leap and `0` if not.

    Info: *A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400*.

- `int seq_arith(int u0, int d, int n)`

    It calculates the value of **n-th** element of a geometric sequence, where **u0** is the initial element and **d** is thte common difference.

    `U(n+1) = U(n) + d`, `U(0) = 3`, `d=2`, `U(1) = 5`

    *DON'T use the simplified formula, unless for testing.*

- `int seq_geometric(int u0, int r, int n)`

    It calculates the value of **n-th** element of a geometric sequence, where **u0** is the initial element and **r** is the common ratio.

    `U(n+1) = r.U(n)`

    *DON'T use the simplified formula, unless for testing.*

- `int fact(int n)`

    It caclulates the factorial number of **n**.

- `int print_fibonacci(int n)`

    It displays the Fibonacci sequence of first n numbers.

    *The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are `0` followed by `1`.*

    `U(n) = U(n - 1) + U(n - 2)`, `U(0) = 1`, `U(1) = 1`

    *DON'T use the simplified formula, unless for testing.*

- `int pow_int(int n, int p)`

    It calculates the power of the number `n` using a loop.
    
    **ie**: `pow(2, 3) ---> 2*2*2 = 8`

- `int hcf(int a, int b)`

    It calculates **HCF** (**PGCD**) of two integers (for both positive and negative integers).

    *DON'T use the simplified formula, unless for testing.*

- `int lcm(int a, int b)`

    It calculate the **LCM** (*Lowest common multiple*) of two numbers.

    *DON'T use the simplified formula, unless for testing.*

- `int n_digits(long long int n)`

    It count the number of digits in an integer.

- `long long int n_reverse(long long int n)`

    It reverse the number `n`, ie: `20394` become `49302`.

- `int n_palindrome(long long int n)`

    It checks whether the number `n` is a palindrome or not. it returns `1` if it's palindrom and `0` otherwise. ie: `27572` is palindrome.

- `int is_armstrong(int n)`

    It checks whether an integer `n` is an Armstrong number or not. it returns `1` if it's Armstrong number and `0` otherwise.

- `is_prime(int n)`

    It checks whether a number is Prime number or not. it returns `1` if `n` is prime, and `0` otherwise.

- `int bin_to_dec(int n)`

    It finds the decimal value of an integer representing a binary number.
    **ie**: `bin_to_dec(110) ---> 6`

- `int oct_to_dec(int n)`

    It finds the decimal value of an integer representing a octal number.
    **ie**: `bin_to_dec(12) ---> 10`

- `void tri_pascal(int n)`

    It prints pascal triangle up to n rows using loop.

    ```c
    n = 5
    =========
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
    ```

- Write a program to draw the following star patterns, each pattern must be implemented in a separate function, and the main function must provide a menu to let the user choose which pattern to draw with the possibility to exit the menu.

    Pattern 1

    ```c
    *****
    *****
    *****
    *****
    *****
    ```

    Pattern 2

    ```c
    *****
    *   *
    *   *
    *   *
    *****
    ```

    Pattern 3

    ```c
    *
    **
    ***
    ****
    *****
    ```

    Pattern 4

    ```c
    *
    **
    * *
    *  *
    *****
    ```

    Pattern 5

    ```c
        *
       ***
      *****
     *******
    *********
    ```

    Pattern 6

    ```c
        *
       * *
      *   *
     *     *
    *********
    ```

    Pattern 7

    ```c
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
    ```

    Pattern 8

    ```c
    *       *
     *     *
      *   *
       * *
        *
       * *
      *   *
     *     *
    *       *
    ```
