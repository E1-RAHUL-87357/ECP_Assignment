#include<stdio.h>

int main()

{

unsigned int num1,num2;
unsigned int add,sub,mul;

printf("Enter the First number: ");
scanf("%u",&num1);

printf("Enter the second number: ");
scanf("%u",&num2);

add = num1 + num2;
mul = num1*num2;

sub = num1 - num2;

printf("The Addition of Two number is: %u\n",add);
printf("The subtraction of Two number is: %d\n",sub);
printf("The multiplication of Two number is: %u\n", mul);



 return 0;   
}