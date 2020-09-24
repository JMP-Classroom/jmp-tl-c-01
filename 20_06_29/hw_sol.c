// Homework By @4NG3L-4
#include <stdio.h>

// maximum func
int max_int(int n1, int n2){
    if (n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
//minimum function
int  min_int(int n1, int n2){
    if (n1< n2){
        return n1;
    }
    else{
        return n2;
    }
}

int mid_int (int n1, int n2){
    int mid;
    mid = (n1+n2)/2;
    return mid;
}
int get_parity(int n1){
    int part;
    part= n1%2;
    return part;
}
int in_range(int n, int d1, int d2){
    if ((n-d1) <= (d2-n)) {
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int a, b;
    printf("enter two numbers");
    scanf("%d %d", &a, &b);
    printf("the max is : %d\n", max_int(a, b));
    printf("the min is : %d\n", min_int(a, b));
    printf("the midium is : %d\n", mid_int(a, b));
    // getting parity
    switch (get_parity(a)) {
        case 0:
            printf("first number is even\n");
            break;
        case 1:
            printf("first number is odd\n");
            break;
    }
    switch (get_parity(b)) {
        case 0:
            printf("second number is even\n");
            break;
        case 1:
            printf("second number is odd\n");
            break;
    }
    printf("enter another number\n");
    int num;
    scanf("%d",&num);
    switch (in_range(num,a,b)){
        case 1:
            printf("%d is in range [%d,%d]",num,a,b);
            break;
        case 0:
            printf("%d is not in range ",num);
            break;
    }


}
