#include <stdio.h>


int main()
{

char ovo;
int quantidade;
float valor_f;

printf ("Preco, tipo e quantidade limite de ovos em um pedido:\n ");
printf ("Tipo A - R$ 12,00 - 50 ovos\n ");
printf ("Tipo B - R$ 15,50 - 30 ovos\n ");
printf ("Tipo C - R$ 21,30 - 20 ovos\n ");

printf ("\nInforme o tipo do ovo desejado: ");
scanf("%c", &ovo);
printf ("Informe a quantidade do pedido: ");
scanf("%d", &quantidade);

switch ( ovo )
{
case 'A':
    if (quantidade > 50){
        printf("\nQuantidade limite excedida em um unico pedido! (maximo 50 deste tipo)\n");
        system("pause");
        }
    else if(quantidade <=50 && quantidade >=1){
        valor_f = 12 * quantidade;
         printf("\nValor a ser pago: %.2f \n",valor_f );
         system("pause");
        }
    else{
        printf("\nNao existe compras negativas\n.");
        system("pause");
        }
break;
case 'B':
    if (quantidade > 30){
        printf("\nQuantidade limite excedida em um unico pedido! (maximo 30 deste tipo)\n");
        system("pause");
        }
    else if(quantidade <=30 && quantidade >=1){
        valor_f = 15.5 * quantidade;
         printf("\nValor a ser pago: %.2f \n",valor_f );
         system("pause");
        }
    else{
        printf("\nNao existe compras negativas\n.");
        system("pause");
        }
break;
case 'C':
    if (quantidade > 20){
        printf("\nQuantidade limite excedida em um unico pedido! (maximo 20 deste tipo)\n");
        system("pause");
        }
    else if(quantidade <=20 && quantidade >=1){
        valor_f = 21.3 * quantidade;
         printf("\nValor a ser pago: %.2f \n",valor_f );
         system("pause");
        }
    else{
        printf("\nNao existe compras negativas\n.");
        system("pause");
        }
break;

default :
printf ("Voce escolheu alguns dos tipos corretos de ovos? (A, B ou C)\n");
system("pause");
}



}


