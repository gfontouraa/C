#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*

Enunciado: Fa�a um programa C que pe�a ao usu�rio tr�s informa��es: (1) n�mero de
linhas, (2) n�mero de colunas e (3) um caractere. Em seguida, exiba na tela uma matriz
de caracteres com N linhas e M colunas. Para isso, crie uma fun��o que desenhe N linhas
de M caracteres cada na tela. A fun��o receber� como argumento o caractere que ser�
usado para formar a linha, o n�mero N de linhas e o n�mero M de caracteres por linha
(colunas) que dever� imprimir.
Dicas:
As leituras do n�mero de linhas, do n�mero de colunas e do caractere devem ficar
obrigatoriamente na fun��o main.
No scanf, use "%c" com um espa�o antes do % ao ler vari�veis do tipo char.
N�o � necess�rio criar uma vari�vel para armazenar a matriz.
Aten��o:
o programa dever� obrigatoriamente usar fun��es com par�metros

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


