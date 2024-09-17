
/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/


#include<stdio.h>


int main()


{

int num;


printf("Enter the number: ");
scanf("%d",&num);

printf("All factor of %d is: ",num);

for(int i=1;i<24;i++)

{
  
  if(num%i==0)
  {
    printf("%d, ",i);
    
  }


}

printf("\n");




return 0;
}




















