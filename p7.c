/* P7.c */
/*Ana Laura Araujo Costa*/
/* 11811EEL020 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos
{
	double x;
	double y;
};
void gerar_pontos(struct pontos *v, int l)
{
	int j;
	for(j=0;j<l;j++)
	{
		v[j].x=cos(j*2.0*M_PI/(l-1));
		v[j].y=sin(j*2.0*M_PI/(l-1));
	}	
}
int main()
{
	int l,j, opcao;
	FILE *pont;
	struct pontos *v;
	char conteudos[800];
	printf("\n1- Criar arquivo com pontos\n\n2 - Recuperar pontos do arquivo\nOpcao:");
	scanf("%d", &opcao);
	getchar();
	switch(opcao)
	{
		case 1:
			{
				printf("\n\nEscolha o numero de pontos desejados:");
			    scanf("%d", &l);
			    getchar();
				pont = fopen("pontos.dat", "wb");
				struct pontos *v = (struct pontos *)calloc(l, sizeof(struct pontos));
				gerar_pontos(v, l);
				for(j=0;j<l;j++)
						{
							fprintf(pont, "(%.3lf,%.3lf) ", v[j].x, v[j].y);
						}
				free(v);
				fclose(pont);
				printf("\nArquivo salvo");
				break;
			}
		case 2:
			{

            pont = fopen("pontos.dat", "rb");
            fread(&conteudos, sizeof(char), 800 , pont);
            printf("\nO conteudo do arquivo e:\n %s \n", conteudos);
            fclose(pont);
            break;
			}
		default:
			printf("\nOpcao indisponivel");
			break;
}
	return 0;
}
