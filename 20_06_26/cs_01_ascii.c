// JMP TechLive, by @xbluecode

#include <stdio.h>

int main(){

    // character to be treated
    char c = '!';

    if (c >= 65 && c <= 90)
    {
        printf("The char %c is Uppercase !\n", c);
    }
    else if (c >= 97 && c  <= 122)
    {
        printf("The char %c is Lowercase !\n", c);
    }
    else {
        printf("The char %c is not alphabet !\n", c);
    }
}