
#include <stdio.h>

int jm_arrint_max(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        printf("step: %d -> max now is %d\n", i, max);
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {1, 4, 6, -2, 6, 9, 1};

    printf("%d\n", jm_arrint_max(arr, 7));
}