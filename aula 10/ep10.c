#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*

Crie uma fun��o em linguagem C chamada Dado() que retorna, atrav�s de
sorteio, um n�mero de 1 at� 6. Use a fun��o e lance o dado mil vezes. Conte quantas
vezes cada n�mero foi sorteado. Por fim, imprima a porcentagem de vezes que cada
n�mero foi sorteado.
Aten��o:
O programa dever� obrigatoriamente usar fun��es.
Dica:
use %% no printf para exibir a porcentagem.
Exemplo: printf("%.2f %%", 3.340567); ir� exibir na tela 3.34 %
use rand() da stdlib.h

*/

int Dado()
{
    int sorteio[0];
    int i = 0;

    sorteio[0] = 1 + rand() % 6;


    return sorteio[0];





}

int main()
{



    int i = 0;
    int contador_1 = 0;
    int contador_2 = 0;
    int contador_3 = 0;
    int contador_4 = 0;
    int contador_5 = 0;
    int contador_6 = 0;
    int sorteio_final[1000];


    for (i; i <=1000; i++ ){
        sorteio_final[i] = Dado();
    }

    for (i = 0; i <=1000; i++ ){

        switch (sorteio_final[i])
            {
            case 1:
            contador_1++;
            case 2:
            contador_2++;
            case 3:
            contador_3++;
            case 4:
            contador_4++;
            case 5:
            contador_5++;
            case 6:
            contador_6++;
            }
    }

    float perc_1 = contador_1;
    float perc_2 = contador_2;
    float perc_3 = contador_3;
    float perc_4 = contador_4;
    float perc_5 = contador_5;
    float perc_6 = contador_6;


    printf("O n�mero 1 teve uma porcentagem de: %.2f %%\n", perc_1/1000);
    printf("O n�mero 2 teve uma porcentagem de: %.2f %%\n", perc_2/1000);
    printf("O n�mero 3 teve uma porcentagem de: %.2f %%\n", perc_3/1000);
    printf("O n�mero 4 teve uma porcentagem de: %.2f %%\n", perc_4/1000);
    printf("O n�mero 5 teve uma porcentagem de: %.2f %%\n", perc_5/1000);
    printf("O n�mero 6 teve uma porcentagem de: %.2f %%\n", perc_6/1000);

system("pause");

return 0;

}


