#include<stdio.h>

// function
void jm_arrint_rem(int arr[], int size, int id);

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
    int index;
    printf("Remove valeu from index ~~> ");
    scanf("%d", &index);

    // before removing
    for (int i = 0; i < s; i++)
        printf("%d | ", a[i]);
    printf("\n");

    jm_arrint_rem(a, s, index);

    // after removing
    for (int i = 0; i < s - 1; i++)
        printf("%d | ", a[i]);
    printf("\n");
    return 0;
}

// remove case
void jm_arrint_rem(int arr[], int size, int id) {
    for (int i = id; i < size; i++) {
        arr[i] = arr[i+1];
    }
}