#include <stdio.h> 
int main() 
{ 
int num,i,f=1; 
 
printf("enter a positive integer: "); 
scanf("%d", &num); 
 
for(i=1;i<=num;i++) 
 
{ 
f=f*i; 
} 
 
printf("the factorial is %d" ,f); 
return 0; 
}