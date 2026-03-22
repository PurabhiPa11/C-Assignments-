#include <stdio.h> 
 
void print_leap_years(int year) 
{ 
    if(year > 2030) 
    { 
        return; 
    } 
     
    if(year % 4 ==0) 
    { 
        printf("%d\n", year); 
    } 
 
    print_leap_years(year + 1); 
} 
int main() 
{ 
    printf("leap years between 2000 and 2030 are:\n"); 
    print_leap_years(2000); 
    return 0; 
} 