#include <stdio.h>

int main()
{

float numero_escolhido,numero_total, maior_numero,menor_numero,media_numeros =0;



for (int i=0;i<10;i++){
    printf("Escolha um numero real: ");
    scanf("%f",&numero_escolhido );
    numero_total = numero_total + numero_escolhido;
    if (i==0){
        maior_numero = numero_escolhido;
        menor_numero = numero_escolhido;
    }else{
        if(numero_escolhido > maior_numero){
        maior_numero = numero_escolhido;
        }
        if (numero_escolhido < menor_numero){
        menor_numero = numero_escolhido;
        }
    }
}

media_numeros = numero_total/10;

printf("\nMaior numero %.2f",maior_numero);
printf("\nMenor numero %.2f",menor_numero);
printf("\nMedia dos numeros escolhidos %.2f\n\n",media_numeros);


system("pause");

return 0;


}
