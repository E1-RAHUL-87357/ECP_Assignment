
#include<stdio.h>

int main()

{

char ch;
printf("Enter the Valid Character: ");
scanf("%c", &ch);

if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
{
printf("The decimal value of character is: %d\n",ch);
printf("The Hexadecimal value of character is: %x\n",ch);
printf("The Octal value of character is: %o\n",ch);
printf("The input character is: %c\n",ch);
}

else
{
printf("Invalid Character");

}

return 0;
}
