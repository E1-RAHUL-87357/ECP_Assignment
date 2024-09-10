#include <stdio.h>
#include<limits.h>

int main()
{   
    
    printf("The size of character is %d and the Range of Characters is = %d to %d\n" ,sizeof(char),SCHAR_MIN, SCHAR_MAX);


   printf(" The size of Unsigned character is %d and The Range of Unsigned Characters = 0 to %d\n",sizeof(unsigned char), UCHAR_MAX);


   printf(" The size of short int is %d and the Range of Short Int    = %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);


   printf("The size of Unsigned short int is %d and the Range of Unsigned Short Int  = 0 to %d\n",sizeof(unsigned short int), USHRT_MAX);
   
  
    printf("The size of integer is %d and the Range of Integer      = %d to %d\n",sizeof(int), INT_MIN, INT_MAX);
    
   
    printf("The size of unsigned integer is %d and the Range of Unsigned Integer    = 0 to %d\n",sizeof(unsigned int), UINT_MAX);

    
    printf("The size of long is %d and the Range of Long         = %ld to %ld\n",sizeof(long), LONG_MIN, LONG_MAX);
    
    printf("The size of unsigned long is %d and the Range of Unsigned Long       = 0 to %lu\n",sizeof(unsigned long), ULONG_MAX);
  
     return 0;


} 
