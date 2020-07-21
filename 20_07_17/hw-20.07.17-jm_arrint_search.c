#include<stdio.h>

// function
int jm_arrint_search(int arr[], int size, int n);

// test
int main() {
    int s, number;
    printf("Size of array : ");
    scanf("%d", &s);
    int a[s];
    printf("search number : ");
    scanf("%d", &number);
    for (int i = 0; i < s; i++) {
        printf("valeu of case %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("%d ~~> ", jm_arrint_search(a, s, number));
    printf((jm_arrint_search(a, s, number) == 1) ? "exists \n" : "Not exists \n" );
    return 0;
}

// array search
int jm_arrint_search(int arr[], int size, int n) {
    static int temp = 0;
    for (int i = 0; i < size; i++) {
        if (arr[temp] == n)
            return 1;
    }
    temp += 1;
    return 0;
}
