#include<stdio.h>
int main()
{
	int month,year;
	printf("Enter the Month  : ");
	scanf("%d",&month);//   1
	printf("Enter the year : ");
	scanf("%d",&year);// 2024

	switch(month )
	{
		case 1 :printf("Jan - 31 \n");
				break;

		case 2:  if((year % 400 == 0 && year % 100 != 0  )  || (year % 4 ==0 ))
					printf("Feb - 29 Days \n ");
				else
					printf("Feb - 28 days \n");
				break;

		case 3 :printf("Mar - 31 days \n");
				break;
		case 4 :printf("April - 30 days \n");
				break;

        case 5 :printf("May - 31 days \n");
				break;

        case 6 :printf("june - 30 days \n");
				break;

        case 7 :printf("july - 31 days \n");
				break;  

        case 8 :printf("August - 31 days \n");
				break;   

        case 9 :printf("September - 30 days \n");
				break; 

        case 10 :printf("October - 31 days \n");
				break; 

        case 11 :printf("November - 30 days \n");
				break;

         case 12 :printf("December - 31 days \n");
				break;                        



		default :printf("Invalid INPUT \n  ");
				break;
	}

	return 0;
}
