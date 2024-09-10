
#include<stdio.h>


int main()
{

float Fa,Cel,ca,ce;

printf("Enter the value in farhenite to convert in celsius: ");

scanf("%f",&Fa);


 Cel = 0.555*(Fa-32);

 printf("The Value of Farhenite %.3f in degree Celsius is %.3f\n",Fa,Cel );



printf("Enter the value in Celsius to convert in Farhenite: ");
scanf("%f",&ca);

ce = 1.8*ca + 32;


printf("The value of celsius %.3f in farhenite is %.3f\n",ca,ce);

return 0;
 }
