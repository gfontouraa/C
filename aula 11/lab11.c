#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*

Enunciado: Faça um programa C que peça ao usuário três informações: (1) número de
linhas, (2) número de colunas e (3) um caractere. Em seguida, exiba na tela uma matriz
de caracteres com N linhas e M colunas. Para isso, crie uma função que desenhe N linhas
de M caracteres cada na tela. A função receberá como argumento o caractere que será
usado para formar a linha, o número N de linhas e o número M de caracteres por linha
(colunas) que deverá imprimir.
Dicas:
As leituras do número de linhas, do número de colunas e do caractere devem ficar
obrigatoriamente na função main.
No scanf, use "%c" com um espaço antes do % ao ler variáveis do tipo char.
Não é necessário criar uma variável para armazenar a matriz.
Atenção:
o programa deverá obrigatoriamente usar funções com parâmetros

*/

int criar_matriz(numero_linhas, numero_colunas, caractere)
{
    int i = 0;
    int j = 0;
    char matriz[numero_linhas][numero_colunas];
    char caracteres = caractere;

    printf("%d\n", numero_linhas);
    printf("%d\n", numero_colunas);
    printf("%c\n\n", caracteres);

    for (i=0;i<=numero_linhas; i++){
            for (j=0;j<=numero_colunas; j++){
                matriz[i][j] = caracteres;
            }
    }

    printf("matriz formada\n");
    for(i=0;i<=numero_linhas;i++){
        for(j=0; j<numero_colunas;j++){
            printf("%c\t", matriz[i][j]);
        }
        printf("\n");
}




}

int main()
{

int numero_linhas = 0;
int numero_colunas = 0;
char caractere;

printf("Qual o caractere escolhido:\n");
scanf(" %c", &caractere);

printf("Qual o numero de linhas:\n");
scanf("%d", &numero_linhas);

printf("Qual o numero de colunas:\n");
scanf("%d", &numero_colunas);

criar_matriz(numero_linhas, numero_colunas, caractere);

system("pause");

return 0;

}


