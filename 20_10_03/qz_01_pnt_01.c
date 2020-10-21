#include <stdio.h>

// Quiz: Predict what happen during execution (without exec)
int main()
{
    int *p;

    printf("%d\n", p);

    *p = 6;

    printf("Hello world !");
}
