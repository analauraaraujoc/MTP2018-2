/* P3.c */
/* Ana Laura Araújo Costa */
/* 11811EEL020 */

#include <stdio.h>

int main()
{
    int i=0, cum=0;
	char bits[256];  
	scanf("%s", bits);
        for(i=0;bits[i]!= '\0';i++)
	{
    	if(bits[i] >= 48 && bits[i] <= 57) 
		{
			bits[i] = bits[i] - '0'; 
			cum = cum * 10 + bits[i];
		}
	}
	printf("\nretorna:%d", cum);
	getchar();
	return 0;
}
