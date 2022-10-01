#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */
/* print Fahrenheit-Celsius table */
int main ()
{
int fahr;
for (fahr = 0; fahr <= 300; fahr = fahr + 20)
printf("%6.1f %3d\n",(5.0/9.0)*(fahr-32), fahr );
return (0);
}