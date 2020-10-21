#include <stdio.h>
#include <stdlib.h>


// Tests: =================================================
void test_01()
{
    int *ptr = NULL; // <==> // int *ptr = 0;
    int *bad_ptr;

    printf("The value of ptr is: %d\n", ptr);
    printf("The value of bad_ptr is: %p\n", bad_ptr);

    if (!ptr) // ptr == NULL
        printf("ptr is NULL\n");
    else
        printf("ptr is not NULL\n");

    if (bad_ptr == NULL) // <==> !bad_ptr 
        printf("bad_ptr is NULL\n");
    else
        printf("bad_ptr is not NULL\n");
}

void test_02()
{
    int *ptr = NULL; // <==> ... = 0

    printf("The value of target var is: %d", *ptr);
}

void test_03()
{
    int *ptr;

    printf("The value of target var is: %d\n", *ptr);
}

void test_04()
{
    int *ptr = NULL;
    int n = 19;

    ptr = &n;

    printf("The value of target var is: %d\n", *ptr);
}


// Main:  =================================================
typedef void (*test_func)(void); 
const int TESTS_SIZE = 4;
test_func tests[] = {
    &test_01,
    &test_02,
    &test_03,
    &test_04,
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