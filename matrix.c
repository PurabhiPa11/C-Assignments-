#include <stdio.h> 
 
int main() 
{ 
  int i,j; 
  int matrix[3][3]={100,200,300,200,150,50,350,300,600}; 
  printf("\n the 9 elements of 3*3 matrix is :"); 
  printf("\n"); 
  for(i=0;i<3;i++) 
  { 
 
      for(j=0;j<3;j++) 
      { 
          printf("%d \t",matrix[i][j]); 
          
      } 
    printf("\n");   
  } 
  return 0; 
} 