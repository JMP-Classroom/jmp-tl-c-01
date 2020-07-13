// JMP TechLive, by @xbluecode

// Static Variables

/*
- The value of a static variable persists until
    the end of the program.
*/

// Quiz: Give output without executing

#include <stdio.h>
void display();
void display_static();

int main()
{
    display();
    display();
    display_static();
    display_static();
}

void display()
{
    int c = 1;
    c += 5;
    printf("local c: %d  \n", c);
}

void display_static()
{
    static int c = 1;
    c += 5;
    printf("static c: %d  \n",c);
}
