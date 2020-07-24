#include<stdio.h>

// function
void jm_arrint_rot(int arr[], int size, int shift, int dir);

// test
int main() {
    const int size = 9;
    int dir = 1;
    int shift = -1;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    jm_arrint_rot(arr, size, shift, dir);
    return 0;
}

// rotate the array
void jm_arrint_rot(int arr[], int size, int shift, int dir) {

    // start print
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
    printf("\n");
    
    int temp;
    /*
    for (int i = 0; i < size; i++)
    {
        temp = arr[size - 1 - i];
        arr[size - 1 - i] = arr[size - 1 -(i + shift*dir) % size];
        arr[size -1 -(i + shift*dir) % size] = temp;
    }
    */
    if (shift < 0 && dir == 1) {
        dir = 0;
        shift *= -1;
    }
    else if (shift < 0 && dir == 0) {
        dir = 1;
        shift *= -1;
    }

    if (!dir) {
        temp = arr[0];
        for (int i = 0; i < shift; i++) {
            for (int j = 1; j < size ; j++) {
                arr[j - 1] = arr[j];
            }
            arr[size - 1] = temp;
            temp = arr[0];
        }
    }
    else if (dir) {
        temp = arr[size - 1];
        for (int i = 0; i < shift; i++) {
            for (int j = 1; j < size; j++) {
                arr[size - j] = arr[size - j - 1];
            }
            arr[0] = temp;
            temp = arr[size - 1];
        }
    }
    
    // end print
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
    printf("\n");
}