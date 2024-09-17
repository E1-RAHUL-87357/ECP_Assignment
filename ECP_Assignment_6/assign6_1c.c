#include<stdio.h>
#include<string.h>

char *my_strcat(char *dest, const char *src)
{
	int i = 0;
	while(dest[i] != '\0')
		i++;
	for(int j = 0 ; src[j] != '\0' ; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	char str1[20], str2[20];

	printf("Enter string : ");
	scanf("%[^\n]s", str1);

	printf("Enter string : ");
	scanf("%*c%[^\n]s", str2);
	
	printf("str1 = %s, str2 = %s\n", str1, str2);


my_strcat(str2, str1);

	printf("str2 = %s\n", str2);

	return 0;
}























































