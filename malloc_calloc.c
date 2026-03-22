#include <stdlib.h> 
 
int main() 
{ 
    int*ptr,i,sum; 
    ptr=(int*)malloc(7*sizeof(int)); 
      
    printf("Enter the 7 elements: "); 
  
    for(i=0;i<7;i++) 
     
    { 
        scanf("%d", &ptr[i]); 
    } 
     
    for(i=0;i<7;i++) 
     
    { 
        sum=sum+ptr[i]; 
    } 
    printf("Sum is %d",sum); 
     
    free(ptr); 
     
    return 0; 
} 