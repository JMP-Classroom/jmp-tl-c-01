#include <stdio.h>

int main()
{
    int n = 6;
    // char c;
    int *ptr;

    printf("n adr: %d\n", &n);
    printf("n val: %d\n", n);

    printf("------------\n");
    ptr = &n;
    printf("ptr adr: %d\n", &ptr);
    printf("ptr val: %d\n", ptr);
    printf("ptr target_val: %d\n", *ptr);
}
