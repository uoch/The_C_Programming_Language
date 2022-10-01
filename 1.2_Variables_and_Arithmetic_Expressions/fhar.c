#include <stdio.h>
/**
* main - welcom to betty
* Return: 0 On success
*/
int main (void)
{
	int fahr, celsius;
	int  lower, upper,step ;
	
	lower = 0;
	upper = 300;
	step = 20;

	while (fahr <= upper)
		{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
		}
}
