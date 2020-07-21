#include<stdio.h>

// function
void jm_arrint_rot(int arr[], int size, int shift, int dir);

// test
int main() {
    int s, dir, shift;
    printf("Size of array : ");
    scanf("%d", &s);
    printf("direction (<0/1>) ~~> ");
    scanf("%d", &dir);
    printf("Shift ~~> ");
    scanf("%d", &shift);
    int a[s];
    for (int i = 0; i < s; i++) {
        printf("valeu of case %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    jm_arrint_rot(a, s, shift, dir);
    return 0;
}

// rotate the array
void jm_arrint_rot(int arr[], int size, int shift, int dir) {

    // start print
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
    printf("\n");

    int temp;
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