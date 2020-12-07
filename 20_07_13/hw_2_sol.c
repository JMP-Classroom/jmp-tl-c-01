// Homework By @4NG3L-4

#include <stdio.h>
#include <math.h>
int i;

int seq_arith(int u0, int d,int n){
    int unt,u;
    u = u0;
    for (i=1; i<n;i++){
        unt= u + d;
        u= unt;
    }
    return  unt;
}
int seq_geometric(int u0, int r, int n){
    int unt,u;
    u = u0;
    for (i=1; i<n;i++){
        unt= u*r;
        u= unt;
    }
    return  unt;
}
int fact(int n){
  int facto=1;
  for(i=1;i<=n;i++){
      facto=facto*i;
  }
    return facto;
}
int print_fibonacci(int n){
    int first=0 , second=1, next,i;
    for (i=0; i <n; i++){
        if (i<=1){
            next=i;
        }
        else{
            next=first + second;
            first= second;
            second=next;
        }
        printf("%d\n",next);
    }

}
int pow_int(int n, int p){
    int power=n;
    for (i=1;i<p;i++){
        power=power*n;
    }
return power;
}
int hcf(int a, int b){
    int inter;
   while (b !=0){
       inter=b;
       b= a%b;
       a= inter;
   }
    return a;
}
int lcm(int a, int b){
   int max,locm;
   if (a > b){
       max =a;
   }
   else{
       max =b;
   }
   do {
       if (max%a==0 && max%b== 0){
           locm=max;
           break;
       }
       else{
           ++max;
       }
   }
   while (max);
    return locm;
}
is_prime(int n){
 int test=0;
 for (i=2; i <= n/2; ++i){
     if (n%i == 0){
         test =1;
         break;
     }
 }
 return test;
}
int n_digits(long long int n){
    int count=0;
    do{
        count++;
        n/=10;
    } while(n!=0);
    return count;
}
long long int n_reverse(long long int n){
    int revers=0,inter;
    while (n!=0){
        inter=n%10;
        revers=revers*10+inter;
        n/=10;
    }
    return revers;

}
int bin_to_dec(int n){
   int dec=0,base=1,inter;
   while (n>0){
       inter= n%10;
       dec=dec+inter*base;
       n/=10;
       base=base*2;
   }
   return dec;

}
int oct_to_dec(int n){
  int dec=0,i=0;
  while (n!=0){
      dec=dec+(n %10)* pow(8,i++);
      n/=10;
  }
return dec;
}
int main() {
    int s;
    int uu0,diff,nn,ratio,number,power,x,y;
    long long int number1;

     printf("please select a function:\n");
    printf("1: calculating arithmetic sequence\n"
           "2: calculating geometric sequence\n"
           "3: calculating factorial\n"
           "4: Fibonacci sequence\n"
           "5: calculating power\n"
           "6: calculating HCF\n"
           "7: calculating lcm\n"
           "8: Checking if number is prime\n"
           "9: Number of digits\n"
           "10: reversing a number\n"
           "11: Binary to decimal \n"
           "12: Octal to decimal\n"
           "13: exit\n") ;
    printf("function selected:");
    scanf("%d",&s);

    switch (s) {
        case 1:
            printf("enter u0, the difference, n-th element");
            scanf("%d %d %d",&uu0,&diff,&nn);
            printf("the %d-th element= %d",nn, seq_arith(uu0,diff,nn) );
            break;
        case 2:
            printf("enter u0, the ratio, n-th element");
            scanf("%d %d %d",&uu0,&ratio,&nn);
            printf("the %d-th element= %d",nn, seq_geometric(uu0,ratio,nn) );
            break;
        case 3:
            printf("enter the number");
            scanf("%d",&number);
            printf("the factorial of %d is %d",number, fact(number));
            break;
        case 4:
            printf("Enter the number of terms\n");
            scanf("%d", &number);
            printf("First %d terms of Fibonacci series are:\n", print_fibonacci(number) );
            break;
        case 5:
            printf("enter the number and the power");
            scanf("%d %d", &number, &power);
            printf("the power %d of %d is %d",power,number, pow_int(number,power));
            break;
        case 6:
            printf("Enter two integers\n");
            scanf("%d%d", &x, &y);
            printf("Greatest common divisor of %d and %d = %d\n", x, y,hcf(x,y) );
            break;
        case 7:
            printf("Enter two integers\n");
            scanf("%d%d", &x, &y);
            printf("lowest common multiple of %d and %d = %d\n", x, y,lcm(x,y) );
            break;
        case 8:
            printf("Enter a positive integer: ");
            scanf("%d", &number);
            if (is_prime(number)==1 || number ==1){
                printf("%d is not a prime number.", number);
            }
            else{
                printf("%d is a prime number", number);
            }
            break;
        case 9:
            printf("enter number");
            scanf("%d", &number);
            printf("number of digits in %d is %d", number1, n_digits(number1));
            break;
        case 10:
            printf("enter a number");
            scanf("%d",&number1);
            printf("%d reversed is: %d",number1,n_reverse(number1));
            break;
        case 11:
            printf("Enter a binary number\n");
            scanf("%d",&number);
            printf(" the decimal value of %d is : %d",number,bin_to_dec(number));
            break;
        case 12:
            printf("Enter an octal number\n");
            scanf("%d",&number);
            printf(" the decimal value of %d is : %d",number,oct_to_dec(number));
            break;
        case 13:
            break;
    }


}
