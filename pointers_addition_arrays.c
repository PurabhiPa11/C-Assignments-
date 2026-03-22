#include <stdio.h> 
int main() 
    { 
        int arr1[] = {1 , 2 , 3, 4, 5}; 
        int arr2[] = {6 , 7, 8 ,9  ,10}; 
        int *ptr1 = arr1, *ptr2 = arr2; 
        int size = sizeof (arr1) / sizeof(arr1[0]); 
         
        printf("sum of the arrays: \n"); 
        for (int i = 0; i < size; i++) 
        { 
 
            printf("%d ", *(ptr1 + i)+ *(ptr2 + i)); 
        } 
        printf("\n"); 
        return 0; 
    }