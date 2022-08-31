#include <stdio.h>                                                                                                                                 
  
int main(void)                                                                                                                                     
{                                                                                                                                                  
  int year;
  
    printf("Input the year: ");                                                                                                                
    scanf("%d\n", &year);                                                                                                                      
    
    if  (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))                                                                          
    {                                                                                                                                          
      printf(" %d is a leap year", year);                                                                                                
    }                                                                                                                                          
     else                                                                                                                                       
    {                                                                                                                                          
      printf("%d is not a leap year", year);                                                                                             
    }                                                                                                                                          
    return (0);                                                                                                                                
}       
