#include<stdio.h>

// function
int jm_arrint_is_sorted(int arr[], int size, int order);

// test
int main() {
    const int size = 4;
    int arr[] = {2, 4, 5, 9};
    int order = 0;
    int sorted = jm_arrint_is_sorted(arr, size, order);

    printf((sorted == 1) ? "sorted given is true \n" : "sorted given is false \n" );
    return 0;
}

// check giving sorted
int jm_arrint_is_sorted(int arr[], int size, int order) {
    if (order == 0) {
        for (int i = 0; i < size - 1; i++)
            if (arr[i] > arr[i + 1]) // | 2 | 3 | 65 | 
                return 0;
        return 1;
    }
    else {
        for (int i = 0; i < size - 1; i++)
            if (arr[i] < arr[i + 1])
                return 0;
        return 1;
    }
}