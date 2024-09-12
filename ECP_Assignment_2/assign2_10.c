#include<stdio.h>

int main()

{

char ch;

printf("Enter the character: ");
scanf("%c",&ch);

if(ch>=65 &&ch<=90)

{
printf("The input character is Uppercase alphabet");
}

else if(ch>=97 &&ch<=122)
{
printf("The input character is lowercase Alphabet");
}

else if (ch>=48 && ch<=57)
{
printf("The Input number is digit");

}

else if (ch==32 && ch==9 && ch==13  )
{
    printf("The input number is Space");
}

else 
{

printf("Not Listed Above");

}

    return 0;
}