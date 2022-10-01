#include <stdio.h>
/**
* main - welcom to betty
* Return: 0 On success
*/
int main(void)
{

	int fahr, celsius;

	lower = 0; /* lower limit of temperature scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
	}
}
