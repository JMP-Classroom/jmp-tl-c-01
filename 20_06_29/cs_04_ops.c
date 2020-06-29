// JMP TechLive, by @xbluecode

#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;

    int c = a + b;
    int d;

    printf("c = %d\n", c);
    c = c + a + 1;
    printf("c = %d\n", c);
    c++; // c = c + 1
    printf("c = %d\n", c);
    c += a + 2; // c = c + a + 2;
    printf("c = %d\n", c);
    c -= a + 7; // c = c - (a + 7);
    printf("c = %d\n", c);
    c--;
    printf("c = %d\n", c);
    c *= a - 1; // c = c * (a - 1)
    printf("c = %d\n", c);
    c /= 2;
    printf("c = %d\n", c);
    c = c % 2;
    printf("c = %d\n", c);
    printf("--------------: c++\n");
    d = c++; // use c then increment
    // d = c;
    // c = c + 1;
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("--------------: ++c\n");
    d = ++c; // increment then use
    // c = c + 1;
    // d = c;
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("--------------: print --\n");
    printf("c = %d\n", --c);
    // c = c - 1;
    // printf("c = %d\n", c);
    printf("d = %d\n", d--);
    // printf("d = %d\n", d);
    // d = d - 1;
}
