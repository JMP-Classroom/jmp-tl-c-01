// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_rot(int *, int, int, int);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    jm_arrint_rot(arr, 5, 3, 1);
    return 0;
}

void jm_arrint_rot(int arr[], int size, int shift, int dir){
    int temp;

    for (int i = 1; i <= shift; i++) {
        if (dir != 1 && dir != 0)
            return;

        if (!dir) {
            temp = arr[0];
            for (int j = 1; j < size; j++) {
                arr[j-1] = arr[j];
            }
            arr[size-1] = temp;
        }

        if (dir == 1) {
            temp = arr[size-1];
            for (int j = size - 2; j >=0; j--) {
                arr[j+1] = arr[j];
            }
            arr[0] = temp;
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}