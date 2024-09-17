#include<stdio.h>

int avgmarks(int num1,int num2,int num3,int num4, int num5)

{

int total  = num1+ num2 +num3 +num4 +num5; 
float avg = total/5;
return avg;
}

int main()

{

int num1,num2,num3, num4,num5; 

printf("Enter the first number: ");
scanf("%d",&num1);

printf("Enter the second number: ");
scanf("%d",&num2);

printf("Enter the third number: ");
scanf("%d",&num3);

printf("Enter the fourth number: ");
scanf("%d",&num4);

printf("Enter the fifth number: ");
scanf("%d",&num5);

printf("The average marks of given number is: %d\n", avgmarks(num1,num2,num3 ,num4, num5));

return 0;
}











































