#include <stdio.h>
/* count characters in input; 2nd version */
int main(void)
{
double nc;
char c;
c = getchar();
for (nc = 0; getchar() != EOF; ++nc)
printf("%.0f\n", nc);
}