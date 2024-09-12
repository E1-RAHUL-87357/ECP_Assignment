#include<Stdio.h>

int main()

{

int Mo,yr;

printf("Enter the Month in number");
scanf("%d",&Mo);

printf("Enter the year");
scanf("%d",&yr);

if((Mo==2) && ((yr%400==0) || ((yr%100!=0)&&(yr%4==0))))
{
        printf("Number of days is 29");
}

else if(Mo==2)
{
        printf("Number of days is 28");
}

else if(Mo==1 || Mo==3 || Mo==5 || Mo==7 || Mo==8 || Mo==10 || Mo==12)

{
        printf("Number of days is 31");

}
else if(Mo==4 || Mo==6 || Mo==9 || Mo==11)
{
        printf("Number of days is 30");
}
else

{
printf("please Enter a valid Month");

}

return 0; 
}