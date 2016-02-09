#include <stdio.h>
int F; /* Farenheit */
int C; /* Celsius */
int main()
{
	printf("Farenheit \t Celsius \n");
	for(F == 0; F <= 300; F+=10)
		{ 
			C = (5*(F-32))/9;
			printf("%9d\t%8d\n", F,C);
		}
	return 0;
}
