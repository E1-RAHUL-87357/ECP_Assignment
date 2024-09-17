
#include<stdio.h>

int main()
{
int pow=1, index,base; 
printf("Enter the base: ");
scanf("%d", &base);
printf("Enter the index: ");
scanf( "%d", &index);
for(int i =1;i<=index;i++)
{
pow = pow*base;
}
printf("The power of base to index is %d\n", pow);
return 0;
}
