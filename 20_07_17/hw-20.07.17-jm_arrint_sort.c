#include<stdio.h>

// function
void jm_arrint_sort(int arr[], int size, int order);

// test
int main() {
    int s;
    printf("Size of array : ");
    scanf("%d", &s);
    int a[s];
    for (int i = 0; i < s; i++) {
        printf("valeu of case %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    int ord;
    printf("Order ~~> ");
    scanf("%d", &ord);
    jm_arrint_sort(a, s, ord);
    return 0;
}

// sorted
void jm_arrint_sort(int arr[], int size, int order) {
    int temp ;
    if (order == 0) {
        for (int i = 0; i < size - 1; i++) {
            temp = arr[i];
            for (int j = 1 + i; j < size; j++) {
                if (temp > arr[j]) {
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
                temp = arr[j];
            }
        }
    }
    if (order == 1) {
        for (int i = 0; i < size - 1; i++) {
            temp = arr[i];
            for (int j = i + 1; j < size; j++) {
                if (temp < arr[j]) {
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
                temp = arr[j];
            }
        }
    }
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
}