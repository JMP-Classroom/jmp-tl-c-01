

int main()
{
    /* Valid declaration*/
int arr1[2][2] = {1, 2, 3 ,4 };
/* Valid declaration*/ 
int arr2[][2] = {1, 2, 3 ,4 }; 
/* Invalid declaration – you must specify second dimension*/
int arr3[][] = {1, 2, 3 ,4 };  
/* Invalid because of the same reason  mentioned above*/
int arr4[2][] = {1, 2, 3 ,4};
}