#include<stdio.h>
int main()

{

int num,temp,rem,rev = 0;
printf("Enter the number ");
scanf("%d",&num);
temp = num;

while(num!=0)
{
rem = num%10;
rev = rev*10+rem;
num = num/10;
}
printf("The reverse number is %d\n",rev);
if(rev == temp)
{
    printf("The number is palindrome");
}
else
{
printf("The number is not a palindrome number");
}

return 0;

}