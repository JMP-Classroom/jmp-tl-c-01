
#include <stdio.h>

void print_hello(int n)
{
    for (int i = 0; i < n; i++)
        printf("hello\n");
}

long long i;

void print_hello_r(int n)
{
    if (n <= 0)
    {
        return;
    }
    printf("hello %lld\n", i++);
    print_hello_r(n - 1);
}

int main()
{
    // print_hello(5);
    print_hello_r(5);
}



