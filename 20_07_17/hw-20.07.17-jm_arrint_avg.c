#include<stdio.h>

// function
int jm_arrint_avg(int arr[], int size);

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
    printf("The average of Array elements is : %d \n", jm_arrint_avg(a, s));
    return 0;
}

// average
int jm_arrint_avg(int arr[], int size) {
    int average = 0;
    for (int i = 0; i < size; i++) {
        average += arr[i];
    }
    average /= size;
    return average;
}