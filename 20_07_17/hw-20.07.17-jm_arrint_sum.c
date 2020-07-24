#include<stdio.h>

// function
int jm_arrint_sum(int arr[], int size);

// test
int main() {
    const int s = 3;
    int a[3] = {5, 6, 9};

    printf("The sum of Array elements is : %d \n", jm_arrint_sum(a, s));
    return 0;
}

// sum 
int jm_arrint_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}