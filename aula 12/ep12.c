#include <stdio.h>



/*

Enunciado:
Crie um programa que leia um vetor de 12 números inteiros e depois leia mais dois números
inteiros A e B. Implemente uma função que receba como parâmetros o vetor de inteiros e
mais dois inteiros (A e B). A função deve trocar todas as ocorrências de A no vetor por B.
Ao final, imprima o vetor modificado na tela na main().
Atenção:
O programa deverá obrigatoriamente usar funções.
A função deverá receber por referência o vetor e os dois inteiros por cópia.



*/

void troca(int *vet, int a, int b)
{
    for (int i=0; i<=11;i++){
        if (vet[i] == a){
                vet[i] = b;
        }
    }


}



main()
{
    int i, vetor[11], a, b;

    for (i=0; i<=11;i++){
        printf("Informe um numero para a posicao %d do vetor: ",i);
        scanf("%d", &vetor[i]);
    }

    printf("Informe um numero a ser substituido: ",a);
    scanf("%d", &a);

    printf("Informe o numero que subistutuira: ",b);
    scanf("%d", &b);

    printf("\nVetor antes da troca:\n");
    for (i=0; i<=11;i++){
        printf("\t%d",vetor[i]);
    }

     troca(vetor, a, b);
     printf("\nVetor depois da troca:\n");
     for (i=0; i<=11;i++){
        printf("\t%d ",vetor[i]);
    }


}



