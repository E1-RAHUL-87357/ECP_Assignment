#include<stdio.h>

void binary(void *pnum, int size)
{

for(int i = size-1; i>=0; i--)
{

int num =     *( (char*)pnum+i);

unsigned char mask = 0x80;

while(mask)

{


if(num&mask)
 
 printf("1");

else 

printf("0");

mask = mask>>1;

}

printf(" ");

}


printf("\n");

}
int main()
{


return 0;
}










































