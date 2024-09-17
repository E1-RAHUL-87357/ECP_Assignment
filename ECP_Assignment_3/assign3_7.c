


/*Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24

*/

#include<stdio.h>

int main()

{

int num;

printf("Enter the number: ");
scanf("%d",&num);


for(int i = 1;i*i<24;i++)
{

if(num%i==0)

printf("%d*%d = %d\n",i,num/i,num);

}


return 0;
}


