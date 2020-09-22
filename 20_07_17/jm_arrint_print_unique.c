// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_print_unique(int *, int);

int main() {
    int arr[3] = {1, 1, 15};

    jm_arrint_print_unique(arr, 3);
    return 0;
}

void jm_arrint_print_unique(int arr[], int size) {
    int temp_time_fond = 0;
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j++){
            if (arr[i] == arr[j])
                temp_time_fond++;
        }
        if (temp_time_fond == 1)
            printf("%d ", arr[i]);
        temp_time_fond = 0;
    }
    printf("\n");
    return;
}