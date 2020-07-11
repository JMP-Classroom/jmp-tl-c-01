// JMP TechLive, by @xbluecode

// Local Variables
/*
The variables declared inside a block are automatic or local variables.
The local variables exist only inside the block in which it is declared.
*/

#include <stdio.h>

void func()
{
    int n; // n2 is a local variable to func()
}

int main(void)
{

    for (int i = 0; i < 5; ++i)
    {
        printf("C programming");
    }

    // Error: i is not declared at this point
    printf("%d", i);

    // Error: n is not visible in main (not declared)
    printf("%d", n);

    return 0;
}
