#include<stdio.h>


int main()


{

int rev=0,rem,num;


printf("Enter the number: ");
scanf("%d", &num);



while(num!=0)

{

rem = num%10;
rev = rev*10+rem;
num = num/10;

}


printf("The reverse no. is %d\n",rev);



return 0;
}













