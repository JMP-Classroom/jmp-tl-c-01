#include<stdio.h>

// function
int jm_arrint_max(int arr[], int size);

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
    printf("The max of Array elements is : %d \n", jm_arrint_max(a, s));
    return 0;
}

// min
int jm_arrint_max(int arr[], int size) {
    int temp = arr[0];
    for (int i = 1; i < size; i++)
        if (temp < arr[i])
            temp = arr[i];
    return temp;
}