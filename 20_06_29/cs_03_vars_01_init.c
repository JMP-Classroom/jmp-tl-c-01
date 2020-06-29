// JMP TechLive, by @xbluecode

/**
 * when the variable is declared inside a function it is not initialised,
 * and when it is declared in static or global scope it's set to 0
 * */

#include <stdio.h>

int g;

int main()
{
    int l;
    int x;

    printf("g = %d\n", g);
    printf("x = %d\n", x);
}