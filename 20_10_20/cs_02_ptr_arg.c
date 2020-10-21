#include <stdio.h>
#include <stdlib.h>

// Tests: =================================================

void modify_arg_01(int a)
{
    a = 9;
}

void modify_arg_02(int *ptr_a)
{
    *ptr_a = 9;
}

void modify_arg_03(int *a)
{
    int x = 27;

    a = &x;
}

int add(a, b)
{
    int r1 = a + b;

    return r1;
}

int* add_sub_01(int a, int b)
{
    int res[2];
    int r1 = a + b;
    int r2 = a - b;

    res[0] = r1;
    res[1] = r2;
    return res;
}

void add_sub_02(int a, int b, int *r1, int *r2)
{
    *r1 = a + b;
    *r2 = a - b;
}

void test_01(void)
{
    int n = 5;

    printf("n=%02d | initial value\n", n);

    modify_arg_01(n);
    printf("n=%02d | after 'modify_arg_01'\n", n);

    modify_arg_02(&n);
    printf("n=%02d | after 'modify_arg_02'\n", n);

    modify_arg_03(&n);
    printf("n=%02d | after 'modify_arg_03'\n", n);
}

void test_02()
{
    int res1, res2;

    add_sub_02(7, 4, &res1, &res2);

    printf("a+b = %d\n", res1);
    printf("a-b = %d\n", res2);
}

// Main:  =================================================
typedef void (*test_func)(void); 
const int TESTS_SIZE = 2;
test_func tests[] = {
    &test_01,
    &test_02,
    //&test_03,
    //&test_04,
  };

int main(int ac, const char **av)
{
    printf("Executing %s ...\n", av[0]);
    if (ac < 2)
    {
        printf("Please execute again and provide a valid test number [1, %d] !!\n", TESTS_SIZE);
        return -1;
    }
    int test_num = atoi(av[1]);
    if (test_num < 1 || test_num > TESTS_SIZE )
        printf("Please execute again and provide a valid test number [1, %d] !!\n", TESTS_SIZE);
    else
    {
        printf("=============\n-- Test %02d --\n-------------\n",
            test_num);
        tests[test_num - 1]();
    }
}
