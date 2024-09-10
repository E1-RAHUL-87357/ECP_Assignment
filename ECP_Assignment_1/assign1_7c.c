#include<stdio.h>

int main()
{

int temp, num,reverse=0,rem;


printf("Enter the value");
scanf("%d",&num);

temp = num;

while(num!=0)
{

rem = num%10;
reverse = reverse*10+rem;

num = num/10;

}


printf("The reverse of %d is %d",temp,reverse);

printf("The reverse o")


return 0;

}

