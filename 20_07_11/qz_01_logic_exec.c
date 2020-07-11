// JMP TechLive, by @xbluecode

/*
Give the output of each test without executing the program.
*/

#include <stdio.h>

int g;

void test1()
{
    printf("=== Test 1 ===\n");

    int i = 1;

    if (g && ++i)
        i += ++i;
    printf("%d, %d\n", g, i);
}

void test2()
{
    printf("=== Test 2 ===\n");
    
    int i = 1;

    if (g || ++i)
        i += ++i;
    printf("%d, %d\n", g, i);
    
}

void test3()
{
    printf("=== Test 3 ===\n");
    
    int i = 1;

    if (!g && --i)
        i += ++i;
    printf("%d, %d\n", g, i);
}

void test4()
{
    printf("=== Test 4 ===\n");

    int i = 1;

    if (g || i--)
        i += ++i;
    printf("%d, %d\n", g, i);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
}
