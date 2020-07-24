#include <stdio.h>

// function
int jm_arrint_sum(int arr[], int size);
float jm_arrint_avg(int arr[], int size);

// test
int main()
{
	const int n = 3;
    int arr[] = {5, 6, 9};

    printf("average of array is : %f\n", jm_arrint_avg(arr, n));
}

// sum 
int jm_arrint_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// average
float jm_arrint_avg(int arr[], int size) 
{
    // we use here temp to convert integer ~~> float
    float temp = jm_arrint_sum(arr, size);
    return temp / size;
}