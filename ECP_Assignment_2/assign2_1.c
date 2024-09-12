#include<stdio.h>

int main()
{
int a,b,div;
printf("Enter the first Number ");
scanf("%d",&a);
printf("Enter the second number");
scanf("%d",&b);
if(a>0 && b>0)
{
div = a/b;
printf("The division is %d",div);
}
else
printf("The division is not possible");
return 0; 

}