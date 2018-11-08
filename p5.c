/* P5.c */
/* Ana Laura Araújo Costa */
/* 11811EEL020 */

#include <stdio.h>
#include <time.h>

typedef
unsigned long long int
Bytes8;
typedef
struct LCG
{
    Bytes8 a, c, m, rand_max, atual;
}
LCG;

void semente(LCG * r, Bytes8 seed)
{
    r->a = 0x5DEECE66DULL;
    r->c = 11ULL;
    r->m = (1ULL << 48);
    r->rand_max = r->m - 1;
    r->atual = seed;
}
Bytes8 lcg_rand(LCG * r)
{
    r->atual = (r->a * r->atual + r->c) % r->m;
    return r->atual;
}
double lcg_rand_01(LCG * r)
{
    return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_numeros(float * vetor, int tam, float min, float max, LCG * r)
{
    int i;
    for(i = 0; i < tam; i++)
        vetor[i] = (max-min)*lcg_rand_01(r) + min;
}

float soma (float *v_i , float *v_f)
{
	if(v_i != v_f + 1 )
	{
		return (v_i[0] + soma( v_i + 1 , v_f));
		
	}
	else
	{
	  	return 0;
	  	
	}
}

float produto(float *inicio_vet , float *fim_vet)
{
	if(inicio_vet < fim_vet)
	{
		return (inicio_vet[0]*produto( inicio_vet + 1 , fim_vet));
	}
	else
	return inicio_vet[0];
}

int main()
{
    LCG random;
    semente(&random, 123456);
    float vet[50];
    int opcao;
    gera_numeros(vet, 50, 0.5, 1.5, &random);

    do
    {
        printf("Digite 1 para a soma.\n");
        printf("Digite 2 para a multiplicacao.\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        getchar();
        switch(opcao)
        {
        case 1:
            printf ("\nSoma: %f.\n", soma (&vet[0], &vet[49]));
            break;
        case 2:
            printf ("\nProduto: %f.\n", produto (&vet[0], &vet[49]));
            break;
        }
    }
    while(opcao!=3);
    return 0;
}
