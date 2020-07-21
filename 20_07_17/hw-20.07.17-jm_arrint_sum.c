#include<stdio.h>

// function
int jm_arrint_sum(int arr[], int size);

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