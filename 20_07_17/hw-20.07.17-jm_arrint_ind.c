#include<stdio.h>

// function
void jm_arrint_ind(int arr[], int size, int id, int val);
void print_array_int(int a[], int size);

// test
int main() {
    const int size = 5;
    int array[] = {3, 15, -9, -7, 100};
    int index = 3;
    int valeu = 0;

    // before add
    print_array_int(array, size);
    // add valeu
    jm_arrint_ind(array, size, index, valeu);
    // after add
    print_array_int(array, size);
    return 0;
}

// add valeu
void jm_arrint_ind(int arr[], int size, int id, int val) {
    if (id < size && id >= 0)
        arr[id] = val;
    else
        printf("error \n");
}

// print
void print_array_int(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
        printf("%d | ", arr[i]);
    printf("\n");
}