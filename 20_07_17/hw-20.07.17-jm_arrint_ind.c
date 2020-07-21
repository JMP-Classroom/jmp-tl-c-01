#include<stdio.h>

// function
void jm_arrint_ind(int arr[], int size, int id, int val);

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
    printf("Add valeu to index ~~> ");
    scanf("%d", &index);
    int valeu;
    printf("Valeu ~~> ");
    scanf("%d", &valeu);

    // before add
    for (int i = 0; i < s; i++)
        printf("%d | ", a[i]);
    printf("\n");

    jm_arrint_ind(a, s, index, valeu);

    // after add
    for (int i = 0; i < s; i++)
        printf("%d | ", a[i]);
    printf("\n");

    return 0;
}

// add valeu
void jm_arrint_ind(int arr[], int size, int id, int val) {
    if (id < size && id >= 0)
        arr[id] = val;
    else
        printf("error \n");
}