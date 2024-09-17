#include<stdio.h>
int fact(int num)
{
    int mul =1;
    for(int i = 1; i <= num;i++)
    {
        mul *= i;
    }
    return mul;
}
int main()
{
int num;
printf("Enter the number: ");
scanf("%d",&num);
int o = fact(num);
printf("The factorial of %d is %d\n",num,o);
return 0;
}
