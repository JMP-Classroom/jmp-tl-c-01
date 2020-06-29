// JMP TechLive, by @xbluecode

#include <stdio.h>

int add(int n1, int n2)
{
    int sum = n1 + n2;
    
    return (sum);
}

int inverse_sign(int n)
{
    return (-n);
}

int main()
{
    int x = -6;
    int y = 15;
    int ix = inverse_sign(x);
    printf("x= %d, ix= %d\n", x, ix);

    int res = add(x, y);
    printf("res: %d\n", res);
    res = add(res, x++);
    printf("res: %d\n", res);
    printf("x= %d\n", x);
}
