#include<stdio.h>
int addition(int a, int b)
{
int sum = a+b;
return sum;
}

int subtraction(int a, int b)  
   {
  int  sub = a-b;
   return sub;
   
  }


int Multiplication(int a, int b)
{
int mul = a*b;
 return mul;

}

float Division(float a, float b)

{

float Div = a/b;

return Div; 

}

int main()
{
int a,b,res;
int oper;

printf("\n***Menu***\n\n");

printf("1.Addition\n");
printf("2.subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5. Exit\n");

scanf("%d" ,&oper);

printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);

switch(oper)
{

    case 1 :printf("Addition = %d \n",addition(a,b));
              break;
				  

    case 2 :printf("Subtraction = %d \n", subtraction(a, b));
              break;    
                
    case 3 :printf("Multiplication = %d \n", Multiplication(a, b));
              break;
                 

    case 4 :printf("Division = %.3f \n",Division( a,  b) );
              break;
             
    case 5: printf("Exiting the program.\n");
             return 0; 
             

default      :printf("Invalid Operator  \n");
			  break;

}



return 0;


}



























