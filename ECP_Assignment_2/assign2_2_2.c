#include<stdio.h>

int main()
{

int num1,num2,res;
char oper;

printf("Enter the first number");
scanf("%d",&num1);

printf("Enter the OPerator [+ , - * / ] : ");
scanf("%*c%c",&oper);

printf("Enter the second number: ");
scanf("%d",&num2);


switch(oper)
{

    case '+' :printf("Addition = %d \n",num1 + num2);
              break;
				  

    case '-' :printf("Subtraction = %d \n",num1-num2);
              break;    
                

    case '*' :printf("Multiplication = %d \n",num1*num2);
              break;
                 

    case '/' :printf("Division = %d \n",num1/num2);
              break;
             

default      :printf("Invalid Operator  \n");
	   				break;

}


return 0;


}
