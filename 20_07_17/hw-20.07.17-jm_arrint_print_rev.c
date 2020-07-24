#include<stdio.h>

void jm_arrint_print_rev(int a[], int size);

//  test
int main() {
    int s = 3;
    int arr[] = {10, 15, -5};
    
    jm_arrint_print_rev(arr, s);
    return 0;
}

// function
void jm_arrint_print_rev(int a[], int size) { // get array and size of array as parameter
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d\n", size - 1 - i, a[size - 1 - i]);
    }
}