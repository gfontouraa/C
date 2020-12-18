#include <stdio.h>



/*

Enunciado:
Fa�a um programa C que leia 15 valores inteiros para um vetor. Passando o vetor de valores
por refer�ncia para uma fun��o, a fun��o dever� indicar qual posi��o (�ndice) do vetor possui
o maior valor. A leitura dos valores dever� ser feita na fun��o principal (main()). Imprimir
na main() o �ndice retornado pela fun��o.
Dicas:
Devemos passar o vetor de valores por refer�ncia para a fun��o.
A fun��o ir� receber como par�metros o vetor, e procurar o maior valor. Depois a fun��o
dever� retornar a posi��o do vetor em que se encontra o maior valor.
Aten��o:
o programa dever� obrigatoriamente usar fun��es com par�metros.


*/

int maior_valor(int *vetor)
{
    int numero_controle, indice, i = (0,0,0);

    for (i=0; i<15;i++){
        if (vetor[i] > numero_controle){
                numero_controle = vetor[i];
                indice = i;
        }
    }

    return indice;

}



main()
{
    int i, vetor[14], indice;

    for (i=0; i<15;i++){
        printf("Informe um numero para a posicao %d do vetor: ",i);
        scanf("%d", &vetor[i]);
    }

    indice = maior_valor(vetor);

    printf("\nO maior numero fica na posicao %d", indice);

}



