// include libraries
#include <stdio.h>

// Function prototypes
int jm_arrint_search(int arr[], int size, int n);

int main () {
    int arr[5] = {3, 5, 8, 12, 48};
    
    // test num 1 ~~> output : '0'
    printf("test 1:\n");
    printf("%d\n",jm_arrint_search(arr, 5, 9));
    printf("\n");

    // test num 2 ~~> output : '1'
    printf("test 2:\n");
    printf("%d\n",jm_arrint_search(arr, 5, 5));
    printf("\n");

    // test num 3 ~~> output : '1'
    printf("test 3:\n");
    printf("%d\n", jm_arrint_search(arr, 3, 8));
    printf("\n");

    // test num 4 ~~> output : '0'
    printf("test 4:\n");
    printf("%d\n", jm_arrint_search(arr, 2, 8));
    printf("\n");

    // test num 5 ~~> output : '0'
    printf("test 5:\n");
    printf("%d\n", jm_arrint_search(arr, -5, 8));
    printf("\n");
    return 0;
}