/*Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
*/


#include<stdio.h>

int main()

{


int sum,num;


printf("Enter the number");
scanf("%d",&num);

while(num!=0)

{

sum = sum+num%10;
num = num/10;

}


printf("The sum of given number is %d\n",sum);


return 0;
}










































