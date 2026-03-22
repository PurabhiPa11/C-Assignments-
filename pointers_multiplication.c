#include <stdio.h> 
 
void sum (int* , int* , int*); 
int main() 
{ 
    int num1, num2, total; 
    printf("\n enter the 1st number:  "); 
    scanf("%d", &num1); 
    printf("\n enter the 2nd number:  "); 
    scanf("%d", &num2); 
    sum(&num1, &num2, &total); 
    printf("\n total = %d" , total); 
    return 0; 
} 
void sum (int*a , int*b , int*t) 
{ 
    *t = *a * *b; 
} 