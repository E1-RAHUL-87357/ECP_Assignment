

#include<stdio.h>
#include<math.h>
int main()


{	

float a,b,c,s,p,Area;


printf("Enter the first side of triangle: ");
scanf("%f",&a);


printf("Enter the second side of triangle: ");
scanf("%f",&b);


printf("Enter the third side of triangle: ");
scanf("%f",&c);


s = (a+b+c)/2;
Area = sqrt(s*(s-a)*(s-b)*(s-c));	
p = a+b+c;

printf("The perimeter of triangle is %.2f\n",p);

printf("The Area of triangle is %.2f\n",Area);


return 0;

}       
