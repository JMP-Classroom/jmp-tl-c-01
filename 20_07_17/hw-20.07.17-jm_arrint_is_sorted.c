#include<stdio.h>
typedef enum boolian {false = 0, true} bool;

// function
int jm_arrint_is_sorted(int arr[], int size, int order);

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
    int ord;
    printf("Order ~~> ");
    scanf("%d", &ord);
    bool temp = jm_arrint_is_sorted(a, s, ord);
    printf((temp == true) ? "sorted given is true \n" : "sorted given is false \n" );
    return 0;
}

// check giving sorted
int jm_arrint_is_sorted(int arr[], int size, int order) {
    if (order == 0) {
        for (int i = 0; i < size - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;
        return true;
    }
    else {
        for (int i = 0; i < size - 1; i++)
            if (arr[i] < arr[i + 1])
                return false;
        return true;
    }
}