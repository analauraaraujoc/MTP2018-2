/* P2.c */
/* Ana Laura Araújo Costa */
/* 11811EEL020 */

#include<stdio.h>

int main ()
{	
char numero[256];
int val, i, n=0, nb;
    printf ("Digite um valor de 1 a 8:\n1- Binario para Decimal.\n2- Binario para Hexadecimal.\n3- Hexadecimal para Decimal.\n4- Hexadecimal para Binario.\n5- Decimal para Binario.\n6- Decimal para Hexadecimal.\n7- Octal para Decimal.\n8- Decimal para Octal.\n");
    scanf("%d", &val);
	getchar();
	
    if(val==1)
{
    printf("Digite um numero em Binario.\n");
    scanf("%s", numero); 
	getchar();
    
    for(i=0; numero[i] != '\0'; i++)
    n = n*2 + (numero[i] - '0');	
    printf("Valor em decimal: %d", n);
}
    else if(val == 2)
	{
    printf("Digite um numero em Binario.\n");
    scanf("%s", numero); 
	getchar();
	
    for(i=0; numero[i] != '\0'; i++)
    n = n*2 + (numero[i] - '0');		   
    printf("Valor em hexadecimal: %x", n);
}
    else if(val==3)
	{
    printf("Digite um numero em Hexadecimal.\n");
    scanf("%x", &n); getchar();
    printf("Valor em decimal: %d", n);
}
    else if(val==4){
    printf("Digite um numero em Hexadecimal.\n");
	scanf("%x", &n); 
	getchar();
	
	for(nb = 0; n >= (1 << nb); nb++){
	}
	char numero[nb];
	for(i=0; i<nb; i++)
	{
		if(n%2==0){
			numero[i]=0;
		}
		else{
			numero[i]=1;
		}
		n=n/2;
	}
	printf("Valor em binario: ");
	for(i=nb-1; i>=0; i--){
	    printf("%i", numero[i]);
	}
}
    else if(val==5){
    printf("Digite um numero em Decimal.\n");
	scanf("%d", &n);
	getchar();
	for(nb = 0; n >= (1 << nb); nb++){
	}	
	char numero[nb];
	for(i=0; i<nb; i++){
		if(n%2==0){
			numero[i]=0;
		}else{
			numero[i]=1;
		}
		n=n/2;
	}
	printf("Valor em binario: ");
	for(i=nb-1; i>=0; i--){
		printf("%i", numero[i]);
	}
}
    else if(val==6){
    printf("Digite um numero em Decimal.\n");
    	scanf("%d", &n); 
		getchar();
    	printf("Valor em hexadecimal: %x", n);
}
    else if(val==7){
    printf("Digite um numero em Octal.\n");
	    scanf("%o", &n);
		getchar();
	    printf("Valor em decimal: %d", n);
}
    else if(val==8){
    printf("Digite um numero em Decimal.\n");
	    scanf("%d", &n);
		getchar();
	    printf("Valor em Octal: %o", n);
}

	return 0;
}
