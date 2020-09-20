#include <stdio.h>


int main()
{

int valor;

printf ("Informe o numero do mes escolhido (1 a 12): ");
scanf("%d", &valor);

switch ( valor )
{
case 1 :
printf ("\nJaneiro: 31 dias");
break;
case 2 :
printf ("\nFevereiro: 29 dias");
break;
case 3 :
printf ("\nMarço: 31 dias");
break;
case 4 :
printf ("\nAbril: 30 dias");
break;
case 5 :
printf ("\nMaio: 31 dias");
break;
case 6 :
printf ("\nJunho: 30 dias");
break;
case 7 :
printf ("\nJulho: 31 dias");
break;
case 8 :
printf ("\nAgosto: 31 dias");
break;
case 9 :
printf ("\nSetembro: 30 dias");
break;
case 10 :
printf ("\nOutubro: 31 dias");
break;
case 11 :
printf ("\nNovembro: 30 dias");
break;
case 12 :
printf ("\nDezembro: 31 dias");
break;
default :
printf ("O mes foi informado equivocadamente! Escolha um numero de 1 a 12");
}



}


