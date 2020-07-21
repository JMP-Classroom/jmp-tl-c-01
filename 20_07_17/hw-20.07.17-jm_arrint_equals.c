#include<stdio.h>
typedef enum boolian {false = 0, true} bool;

// function
int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2);

// test
int main() {
    int s1, s2;
    printf("Array 1 ~~> Size of array : ");
    scanf("%d", &s1);
    int a1[s1];
    for (int i = 0; i < s1; i++) {
        printf("Array 1 ~~> valeu of case %d : ", i + 1);
        scanf("%d", &a1[i]);
    }
    printf("Array 2 ~~> Size of array : ");
    scanf("%d", &s2);
    int a2[s2];
    for (int i = 0; i < s2; i++) {
        printf("Array 2 ~~> valeu of case %d : ", i + 1);
        scanf("%d", &a2[i]);
    }
    bool equal = jm_arrint_equals(a1, s1, a2, s2);
    printf((equal == true) ? "Array 1 and Array 2 are equals! \n" : "Array 1 and Array 2 are not equals! \n" );
    return 0;
}

// equal
int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2) {
    int temp_sum1 = 0;
    int temp_sum2 = 0;
    for (int i = 0; i < size1; i++)
        temp_sum1 += arr1[i];
    for (int i = 0; i < size2; i++)
        temp_sum2 += arr2[i];
    if (temp_sum1 == temp_sum2)
        return 1;
    else
        return 0;
}