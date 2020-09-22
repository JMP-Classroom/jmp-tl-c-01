// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_sort(int *, int, int);

int main () {
    int arr[5] = {2, 435, 9, 13, 3};
    
    jm_arrint_sort(arr, 5, 0);
    return 0;
}

void jm_arrint_sort(int arr[], int size, int order) {
    int temp;
    for (int j = 1; j <= size; j++) {
        for(int i = 0; i < size - 1; i++) {
            if(order == 0 && arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            if(order == 1 && arr[i] < arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            if(order != 1 && order != 0)
                return;
        }
    }
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}