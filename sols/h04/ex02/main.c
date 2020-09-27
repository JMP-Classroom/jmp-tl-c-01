// include libraries
#include <stdio.h>

// Function prototypes
void jm_arrint_print_rev(int a[], int size);

int main() {
    int arr[4] = {25, -21, 450, -97};
    
    // test num 1 ~~> output : 
    //  3: -97
    //  2: 450
    //  1: -21
    //  0: 25
    printf("test 1:\n");
    jm_arrint_print_rev(arr, 4);
    printf("\n");

    // test num 2 ~~> output :
    //  3: -97
    //  2: 450
    printf("test 2:\n");
    jm_arrint_print_rev(arr, 2);
    printf("\n");

    // test num 3 ~~> output : Emptu output
    printf("test 3:\n");
    jm_arrint_print_rev(arr, 0);
    printf("\n");

    // test num 4 ~~> output : Empty output
    printf("test 4:\n");
    jm_arrint_print_rev(arr, -2);
    printf("\n");
    return 0;
}
