

#include<stdio.h>
int main()
{

int q;
float tp1,tp2,tp3;

printf("Enter the no. of quantity");
scanf("%d",&q);

if(q>30 && q<50)
{
tp1 = 5*q - 5*q*0.1;
printf("The price will be: %.2f",tp1);
}

else if ( q>50 )

{
tp2 = 5*q - 5*q*0.15;
printf("The price will be:  %.2f",tp2);

}

else
{
tp3 = 5*q;

printf("The price will be:  %.2f",tp3);

}

return 0;
}