#include <stdio.h>



/*

Enunciado:
Crie um programa que leia um vetor de 12 n�meros inteiros e depois leia mais dois n�meros
inteiros A e B. Implemente uma fun��o que receba como par�metros o vetor de inteiros e
mais dois inteiros (A e B). A fun��o deve trocar todas as ocorr�ncias de A no vetor por B.
Ao final, imprima o vetor modificado na tela na main().
Aten��o:
O programa dever� obrigatoriamente usar fun��es.
A fun��o dever� receber por refer�ncia o vetor e os dois inteiros por c�pia.



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



