#include<stdio.h>
void printbinary(int num)
{
unsigned int mask = 0x80000000;
printf("%d :",num) ; 
while(mask)
{
if(num&mask)
printf("1");
else 
printf("0");
mask = mask>>1;
}
printf("\n");
}
int main(void)
{
int num;
printf("Enter the number: ");
scanf("%d",&num);
printbinary(num);
return 0;
}































