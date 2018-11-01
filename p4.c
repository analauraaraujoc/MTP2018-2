/* P4.c */
/* Ana Laura Araújo Costa */
/* 11811EEL020 */

#include <stdio.h>

int  A (int m, int n)
{
	if(m == 0)
	{
	return n+1;
	}             
	else if(m>0 && n==0)
	{
	A(m-1, 1);
	}
	else if(m>0 && n>0)
	{
	A(m - 1, A(m, n - 1));
	}
}
int main ()
{
	int m, n;
	printf("Digite,respectivamente, valores para m e n: \n");
	scanf("%d %d", &m, &n);
	printf("Total: %d" ,A (m, n));
	return 0;
}
