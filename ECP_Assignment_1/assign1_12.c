
#include<stdio.h>
#include <float.h>

#include<limits.h>

int main()


{
 
 printf("The size of float is %lu bytes and the range of float is: %e to %e \n", sizeof(float), FLT_TRUE_MIN, FLT_MAX);

 printf("The size of long double is  %zu bytes and the range of long double is: %LE to %LE \n", sizeof(long double),LDBL_MIN,LDBL_MAX);

 printf("The size of double is  %zu bytes and the range of double is:  %.5e to %.5e \n", sizeof(double),DBL_MIN,DBL_MAX);

 return 0;

}  





	
	






































