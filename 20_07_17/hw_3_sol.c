// Homework By @4NG3L-4

// include libraries
#include <stdio.h>
#define MAX_SIZE 100
int i;
void jm_arrint_print(int arr[], int size);
void jm_arrint_print_rev(int arr[], int size);
int jm_arrint_search(int arr[], int size, int n);
int jm_arrint_sum(int arr[], int size);
int jm_arrint_avg(int arr[], int size);
int jm_arrint_min(int arr[], int size);
int jm_arrint_max(int arr[], int size) ;
int jm_arrint_mid(int arr[], int size);
int jm_arrint_copy(int arr1[], int arr2[], int size);
int jm_arrint_copy_rev(int arr1[], int arr2[], int size);
// int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2);
int jm_arrint_is_sorted(int arr[], int size, int order);
//void jm_arrint_sort(int arr[], int size, int order);
int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2);
//void jm_arrint_rot(int arr[], int size, int shift, int dir);
void jm_arrint_rem(int arr[], int size, int id);
void jm_arrint_ind(int arr[], int size, int id, int val);
//void jm_arrint_print_unique(int arr[], int size);


int main(){
    int siz=MAX_SIZE,siz2,ord,s,idx,value;
    int second_arr[MAX_SIZE]={12,89,2,15,3};
    int stand_arr[MAX_SIZE]={13,9,32,14,18};
    siz=10;// depends on testing case
    printf("the array is: ");
    jm_arrint_print(stand_arr ,siz);

  printf("Choose one function that can be applied on that array \n"
         "1 :print all elements of an array in the reverse order\n"
    "2: search in ar array \n"
    "3 : sum of elements\n"
    "4: average of elements\n"
    "5 : the minimum \n"
    "6 : the maximum \n"
    "7 : the midium\n"
    "8 : copy its elements into another \n"
    "9 : copy its elements into another in reverse order \n"
    "10 : merging the elements of two arrays into another\n"
    "11 : checking if the array is sorted\n"
    "12 : sort it \n"
    "13 : checking if they're equals"
    "14 : rotate it \n"
    "15 : remove an element\n"
    "16 : insert an element \n"
    "17 : print unique elements \n"
    "18 : exit \n");
    scanf("%d",&s);
    switch (s) {
        case 1:
            printf("the reversed array is");
            jm_arrint_print_rev(stand_arr,siz);
            break;
        case 2:
            printf("enter a number to search");
            scanf("%d",&s);
            if (jm_arrint_search(stand_arr,siz,s) == 1){
                printf("element found");
            }
            else{
                printf("element not found");
            }
            break;
        case 3:
            printf("the sum of array elets is : %d ", jm_arrint_sum(stand_arr, siz));
            break;
        case 4:
            printf("the average of array' elets is : %d ", jm_arrint_avg(stand_arr, siz));
            break;
        case 5:
            printf("the min of array' elets is : %d ", jm_arrint_min(stand_arr, siz));
            break;
        case 6:
            printf("the max of array' elets is : %d ", jm_arrint_max(stand_arr, siz));
            break;
        case 7:
            printf("the midium of array' elets is : %d ", jm_arrint_mid(stand_arr, siz));
            break;
        case 8:
            printf("the array is :\n");
            jm_arrint_print(stand_arr,siz);
            jm_arrint_copy(stand_arr,second_arr, siz);
            printf("Copied successfully; the second array is :\n");
            jm_arrint_print(second_arr,siz);
            break;
        case 9:
            printf("the array is :\n");
            jm_arrint_print(stand_arr,siz);
            jm_arrint_copy_rev(stand_arr,second_arr, siz);
            printf("Copied successfully; the second array is :\n");
            jm_arrint_print(second_arr,siz);
            break;
        case 10:
            break;
        case 11:
            printf("please choose order, 0 for ascending, 1 for descending");
            scanf("%d",&ord);
            if (jm_arrint_is_sorted(stand_arr,siz,ord)==1){
                printf("the array is sorted");
            }
            else{
                printf("the array is not sorted");
            }
            break;
        case 12:
            break;
        case 13:
            siz2=siz; //depends on testing case
            if (jm_arrint_equals(stand_arr, siz,second_arr,siz2)==1){
                printf("arrays are equal");
            }
            else{
                printf("arrays are not equal");
            }
            break;
        case 14:
            break;
        case 15:
            printf("the array before removing elet");
            jm_arrint_print(stand_arr,  siz);
            printf("select index of the element to be removed");
            scanf("%d",&idx);
            printf("the element should be removed is : %d\n",stand_arr[idx]);
            jm_arrint_rem(stand_arr, siz,idx);
            printf("the array after removing elet");
            jm_arrint_print(stand_arr, siz);
            break;
        case 16:
            printf("the array before adding elet");
            jm_arrint_print(stand_arr,  siz);
            printf("select index of the element to be added");
            scanf("%d",&idx);
            printf("select the valueof the element to be added");
            scanf("%d",&value);
            jm_arrint_ind(stand_arr, siz,idx,value);
            printf("the array after addiing elet");
            jm_arrint_print(stand_arr, siz);

            break;
        case 17:
            break;
        case 18:
            break;
    }

    }

void jm_arrint_print(int arr[], int size){
    for (i=0;i<size;i++){
        printf(" %d  |",arr[i]);
    }
    printf("\n");
}
void jm_arrint_print_rev(int arr[], int size){
    for (i = 0; i <size ; i++){
        printf(" %d  |",arr[size-i-1]);
    }
}
int jm_arrint_search(int arr[], int size, int n){
    int test;
    for (i=0;i< size;i++){
        if (arr[i]==n){
            test=1;
        }
    }
    return test;

}
int jm_arrint_sum(int arr[], int size){
    int sum=0;
    for(i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int jm_arrint_avg(int arr[], int size){
    int sum=0;
    for (i=0;i<size;i++){
        sum+= arr[i];
    }
    return sum/size;
}
int jm_arrint_min(int arr[], int size){
    int min=arr[0];
    for (i=1;i<size;i++){
        if (min > arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int jm_arrint_max(int arr[], int size) {
    int max = arr[0];
    for (i = 1; i <= size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}
int jm_arrint_mid(int arr[], int size){
    return arr[size/2];
}
int jm_arrint_copy(int arr1[], int arr2[], int size){
    for(i=0;i<size;i++){
        arr2[i]=arr1[i];
    }

}
int jm_arrint_copy_rev(int arr1[], int arr2[], int size){
    for (i = 0; i < size ; i++) {
        arr2[i]=arr1[size-i-1];
    }
}
// int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2){}

int jm_arrint_is_sorted(int arr[], int size, int order){
    int inter,test;
    if (order==0){
        inter=arr[0];
        for (i=0; i < size ; i++){
            if (inter<arr[i+1]){
                inter=arr[i+1];
            }

        }
        if (inter==arr[size-1]){
            test=1;
        }
        else{
            test=0;
        }
    }
    if (order==1){
        inter=arr[0];
        for (i=0;i<= size;i++){
            if (inter>arr[i+1]){
                inter=arr[i+1];
            }

        }
        if (inter==arr[size-1]){
            test=1;
        }
        else{
            test=0;
        }
    }
    return test;
}
//void jm_arrint_sort(int arr[], int size, int order){}

int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2){
    int count,test;
    if(size1 == size2){
        for (i=0;i<size1;i++){
            if (arr1[i]==arr2[i]){
                count++;
            }
            if (count==size1 && count==size2){
                test=1;
            }
        }
    }
    else{
        test=0;
    }
    return test;
}
//void jm_arrint_rot(int arr[], int size, int shift, int dir){}
void jm_arrint_rem(int arr[], int size, int id){
    i=id+1;
    arr[id]=arr[id+1];
    for (i=id+1;i<size;i++){
        arr[i]=arr[i+1];
    }
}
void jm_arrint_ind(int arr[], int size, int id, int val){
    int inter=arr[id], inter2;
    arr[id]=val;
    for (i=id+1;i<=size;i++){
        inter2=arr[i];
        arr[i]=inter;
    }
}
//void jm_arrint_print_unique(int arr[], int size){}
