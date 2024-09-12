
#include<stdio.h>
int main()
{
int num1, num2,num3;
printf("Enter the First number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("Enter the third number: ");
scanf("%d",&num3);
if(num1>num2 && num1>num3)
{
printf("The first number is greatest i.e. %d", num1);
}
else if(num2>num1 && num2>num3)
{
printf("The second number is greatest i.e. %d",num2);
}
else
{
printf("The Third number is greatest i.e. %d", num3);
}
 return 0;   
}