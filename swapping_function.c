#include <stdio.h> 
 
void sum(int, int); 
void main() 
{ 
   int a,b; 
   printf("\n enter the 1st number"); 
   scanf(" %d",&a); 
   printf("\n enter the 2nd number"); 
   scanf(" %d",&b); 
   sum(a,b); 
   
} 
void sum(int a, int b) 
{ 
 
    int sum; 
    sum=a+b; 
    printf("\n the addition is %d", sum); 
     
} 