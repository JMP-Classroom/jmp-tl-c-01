#include <stdio.h>

// function
int jm_arrint_max(int arr[], int size);

// test
int main()
{
	const int n = 3;
    int arr[] = {3, -5, 9};
	
    printf("the minimum number is : %d\n",jm_arrint_max(arr, n));
	return 0;
}

// min
int jm_arrint_max(int arr[], int size)
{
    int min = arr[0];
	for(int i = 1; i < size; i++)
	{	
		if(arr[i] < min)
		    min = arr[i];
	}
    return min;
}