#include <stdio.h> 
 
int main() 
{ 
 float a,b,c,d; 
  
 printf("\n enter the marks of three subjects"); 
 printf("\n marks of subject one: "); 
 scanf("%d",&a); 
 printf("\n marks of subject two: "); 

 scanf("%d",&b); 
 printf("\n marks of subject three: "); 
 scanf("%d",&c); 
  
 d=(a+b+c)/3; 
 printf("your percentage is=%f",d); 
  
 return 0; 
} 