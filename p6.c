/* P6.c */
/* Ana Laura Araújo Costa */
/* 11811EEL020 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926536

typedef struct 
{
  float a, b;
}
Pont;
int main()
{
	int N;
	int j;
	Pont *ab;
    printf("Digite o total de pontos: ");
    scanf("%i", &N);
    getche();
    ab= (Pont*) malloc(N*sizeof(Pont)); 
    printf("\n\n");
    for(j=0; j<N; j++)
	{
    	xy->x = cos(j*2.0*PI/(N-1));
     	xy->y = sin(j*2.0*PI/(N-1));
        printf("(%.3f, %.3f) ", xy->x, xy->y);
    }
    printf("\n");
	free(xy);
	return 0;
}
