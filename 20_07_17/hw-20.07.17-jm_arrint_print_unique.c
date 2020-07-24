// test
#include<stdio.h>

// function
void jm_arrint_print_unique(int arr[], int size);
void jm_arrint_rem(int arr[], int size, int id);
void print_array_int(int arr[], int size);

// test
int main()
{
    const int size = 8;
    int arr[] = {5, 3, -5, 11, 8, 8, 8, 8};

    printf("Unique element ~~> ");
    jm_arrint_print_unique(arr, size);
    printf("array element  ~~> ");
    print_array_int(arr, size);
    return 0;
}


// unique element
void jm_arrint_print_unique(int arr[], int size)
{
    // temp
    int temp_array[size];
    int temp_deleted_case = 0;
    // copy valeu from arr[] to temp_array[]
    for (int i = 0; i < size; i++)
        temp_array[i] = arr[i];
    
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - 1; j++)
            if ((arr[i] == arr[j]) && i != j)
            {
                jm_arrint_rem(temp_array, size, i - temp_deleted_case);
                temp_deleted_case += 1;
                // temp_array ~~>     | 3 | 5 | 11 | -7 | -8 | 11 | -1 | 0 |
                // arr ~~>        | 5 | 3 | 5 | 11 | -7 | -8 | 11 | -1 | 0 |
                // temp_deleted_case = 0  ~~>  temp_deleted_case = 1

                // temp_array ~~> |   | 3 |   | 11 | -7 | -8 | 11 | -1 | 0 |
                // arr ~~>        | 5 | 3 | 5 | 11 | -7 | -8 | 11 | -1 | 0 |
                // temp_deleted_case = 1  ~~>  temp_deleted_case = 2

                // temp_array ~~>     | 3 |   |    | -7 | -8 | 11 | -1 | 0 |
                // arr ~~>        | 5 | 3 | 5 | 11 | -7 | -8 | 11 | -1 | 0 |
                // temp_deleted_case = 2  ~~>  temp_deleted_case = 3

                // temp_array ~~>     | 3 |   |    | -7 | -8 |    | -1 | 0 |
                // arr ~~>        | 5 | 3 | 5 | 11 | -7 | -8 | 11 | -1 | 0 |
                // temp_deleted_case = 3  ~~>  temp_deleted_case = 4

                // temp_array ~~> | 3 | -7 | -8 | -1 | 0 |
                // print temp_array 0 ~~> size - temp_deleted_case
                // ptint temp array ~~> unique valeu (number)
            }

    // print
    print_array_int(temp_array, size - temp_deleted_case);
}

// remove case from array
void jm_arrint_rem(int arr[], int size, int id) {
    for (int i = id; i < size - 1; i++) {
        arr[i] = arr[i+1];
    }
}

// print
void print_array_int(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
    printf("\n");
}