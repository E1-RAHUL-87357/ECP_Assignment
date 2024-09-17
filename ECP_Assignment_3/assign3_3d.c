
/*Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/

#include<stdio.h>
#include<math.h>

int main()

{

int rem,temp, num,sum=0;

printf("Enter the number: ");

scanf("%d",&num);

temp = num;

while(num!=0)

{

rem = num%10;

sum += pow(rem,3);

num = num/10;

}

//printf("%d\n",sum);


if(sum==temp)

{

printf(" The given number %d is an Armstrong number", temp);
}

else

{

printf("The given number %d is not an Armstrong number",temp);

}


return 0;
}































