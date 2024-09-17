

#include<stdio.h>

int main()

{

int temp,rem,num,rev=0;

printf("Enter the number:");
scanf("%d", &num);

temp = num;

while(num!=0)

{

rem = num%10;

rev = rev*10+rem;

num = num/10;

}


printf("The reverse is %d\n",rev);

if(rev==temp)

{
printf("nThe given number is palindrome\n");
}

else
{
printf("The given number is not a palindrome number\n");

}


return 0;
}






































