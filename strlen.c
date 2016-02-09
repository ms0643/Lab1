#include <stdio.h>
#include <string.h>

int stringlen(char string[]);

int main()
{
	char string[] = "Hello World I am using GitHub";
	int l = stringlen(string);
	printf("The length of string %s is %d \n",string,l);
	return 0;
}

int stringlen(char string[])
{
	return strlen(string);
}
