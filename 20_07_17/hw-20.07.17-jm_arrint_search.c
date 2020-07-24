#include<stdio.h>

// function
int jm_arrint_search(int arr[], int size, int n);

// test
int main() {
    const int size = 3;
    int arr[] = {6, 10, -5};
    int number = 10;
    
    // print if exists or not
    printf("%d ~~> ", jm_arrint_search(arr, size, number));
    printf((jm_arrint_search(arr, size, number) == 1) ? "exists \n" : "Not exists \n" );
    return 0;
}

// array search
int jm_arrint_search(int arr[], int size, int n) {
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
            return 1;
    }
    return 0;
}
