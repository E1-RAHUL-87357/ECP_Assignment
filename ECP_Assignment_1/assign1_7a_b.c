

#include<stdio.h>

int main()


{

int num;

printf("Enter the number: ");
scanf("%d",&num);

int temp = num;

printf("%d  ",num/1000);
num = num%1000;


printf("%d  ",num/100);
num = num%100;


printf("%d  ",num/10);
num = num%10;


printf("%d  \n",num);



printf("________________________\n");




printf("\n%d ",(temp/1000)*1000);
temp = temp%1000;


printf("%d ",(temp/100)*100);
temp = temp%100;



printf("%d ", (temp/10)*10);
temp = temp%10;


printf("%d  \n",temp);

return 0;




}	
