#include <stdio.h>



/*

Enunciado:
Faça um programa C que leia 15 valores inteiros para um vetor. Passando o vetor de valores
por referência para uma função, a função deverá indicar qual posição (índice) do vetor possui
o maior valor. A leitura dos valores deverá ser feita na função principal (main()). Imprimir
na main() o índice retornado pela função.
Dicas:
Devemos passar o vetor de valores por referência para a função.
A função irá receber como parâmetros o vetor, e procurar o maior valor. Depois a função
deverá retornar a posição do vetor em que se encontra o maior valor.
Atenção:
o programa deverá obrigatoriamente usar funções com parâmetros.


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



