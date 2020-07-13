// JMP TechLive, by @xbluecode

// Global Variables

/*
- Variables that are declared outside of all functions
    are known as external or global variables.
- They are accessible from any function inside the program.
*/

// Quiz: Give output without executing

#include <stdio.h>
void display();

int n = 5;  // global variable

int main()
{
    ++n;     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d\n", n);
}
