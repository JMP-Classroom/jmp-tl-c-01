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
void jm_arrint_print_rev(int a[], int size) {
    if (size == 0)
        return ;
    else {
        printf("%d: %d \n", --size , a[size - 1]);
        jm_arrint_print_rev(a, size);
    }
}