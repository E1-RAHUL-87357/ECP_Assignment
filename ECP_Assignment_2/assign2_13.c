#include<stdio.h>
int main()
{
float x,y;
printf("Enter the x-axis value: ");
scanf("%f",&x);

printf("\nEnter the y-axis value: ");
scanf("%f",&y);

if(x>0 && y>0)
{
printf("The input cartesian co-ordinates exist on Ist Quadrant and both lies on +X-axis and +Y-axis\n");
}
else if (x<0 && y>0)
{
printf("The input cartesian co-ordinates exist on IInd Quadrant and lies on -X-axis and +Y-axis respectively\n");
}
else if ( x<0 && y<0)
{
printf("The input cartesian co-ordinates exist on IIIrd Quadrant and lies on -x-axis and -Y-axis respectively\n");
}       

else if (x>0 && y<0)
{
printf("The input cartesian co-ordinates exist on IVth Quadrant and lies on +x-axis and -Y-axis respectively\n");
}
else

{
printf("Please Enter the valid integer\n");
}


return 0;
}
