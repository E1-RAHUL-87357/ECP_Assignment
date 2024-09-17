

/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output: ******
*/



#include<stdio.h>

int main()

{

int num;
char ch;

printf("Enter the number to print no. of times: ");
scanf("%d",&num);


printf("Enter the character: ");
scanf("%*c%c",&ch);


for(int i= 0;i<=6;i++)

{

printf("%c",ch);

}	

printf("\n");

return 0;

}

