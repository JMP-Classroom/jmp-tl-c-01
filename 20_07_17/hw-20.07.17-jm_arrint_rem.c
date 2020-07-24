#include<stdio.h>

// function
void jm_arrint_rem(char arr[], int size, int id);
void print_array_int(int arr[], int size);

// test
// | 5 | 4 | -8 | 3 | 10 |
// remove index = 3
// | 5 | 4 | -8 | 10 |

// arr[3] = arr[3 + 1];
// | 5 | 4 | -8 | 10 | 10 |
// print array index 0 ~~> size - 1 
// | 5 | 4 | -8 | 10 |

// for (int i = index; i < size - 1; i++)
//      arr[i] = arr [i + 1];

// test
int main() {
    const int size = 4;
    char arr[] = "text";
    int index = 3;

    // before removing
    printf("%s\n", arr);
    // remove function
    jm_arrint_rem(arr, size, index);
    // after removing
    printf("%s\n", arr);
}

// remove case
// | T | E | X | T |
// | 
void jm_arrint_rem(char arr[], int size, int id) {
        for (int i = id; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
    arr[size - 1] = '\0';
}

// print array int
void print_array_int(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
    printf("\n");
}