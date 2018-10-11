/* P0.c */
/* Ana Laura Araújo Costa */
/* 11811EEL020 */

#include <stdio.h>
int main()
{
char bits [256];
int estado = 0, i, aux;
printf("Escreva um numero binario: ");
scanf("%s",bits);
for(i=0;bits[i] != '\0';i++)
{
if(estado == 0){
if(bits[i] == '0')
aux = 0;
else
aux = 1;
}
if(estado == 1){
if(bits[i] == '0')
    aux = 2;
else
    aux =0;
}
if(estado == 2)
{
if(bits[i] == '0')
aux = 1;
else
aux = 2;
}
estado = aux; 
}
if(estado ==0){
printf(" numero digitado.%s Eh multiplo de 3",bits);
}
else
{
printf(" numero digitado.%s Nao eh multiplo de 3",bits);
}
return 0;
}
