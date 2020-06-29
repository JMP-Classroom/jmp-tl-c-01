// JMP TechLive, by @xbluecode

#include <stdio.h>
#include <unistd.h>

void print_hello()
{
    sleep(2);
    printf("Hello JMP!\n");
}

void print_num(int n)
{
    printf("num= %d\n", n);
}

int main()
{
    print_hello();
    print_num(17);

    return 0;
}
