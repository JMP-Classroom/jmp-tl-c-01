
#include <stdio.h>

void jm_arrint_print_rev(int a[], int size)
{
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     printf("%d | ", a[i]);
    // }
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[size - 1 - i]);
    }
}

int main()
{
    int arr[] = {1, 3, 6, 8, 4, 99};

    jm_arrint_print_rev(arr, 6);
}