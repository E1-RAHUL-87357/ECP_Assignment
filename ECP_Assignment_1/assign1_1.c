#include<stdio.h>

int main()

{

int num1,num2,add,sub,mul;

printf("Enter the First number: ");
scanf("%d",&num1);

printf("Enter the second number: ");
scanf("%d",&num2);

add = num1 + num2;
mul = num1*num2;

sub = num1 - num2;

printf("The Addition of Two number is: %d\n",add);
printf("The subtraction of Two number is: %d\n",sub);
printf("The multiplication of Two number is: %d\n", mul);



 return 0;   
}