#include <stdio.h>



/*

Enunciado: Faça um programa C que leia os dados de 5 carros e um preço máximo. No
final o programa deverá imprimir o nome dos carros com preço menor ou igual ao preço
máximo informado.
Crie uma estrutura para armazenar os seguintes dados sobre carros:
Nome: 50 caracteres utilizáveis
Potência: cavalos de potência (inteiro)
Preço: em reais (real).
Atenção:
o programa deverá obrigatoriamente usar struct.
Para limpar o buffer do teclado antes de ler cada novo dado, use o comando fflush(stdin)
ou use a função abaixo:


*/




main()
{
    int preco_informado = 0;
     struct carro
     {
     char nome[49];
     int potencia;
     float preco;
     };

    struct carro carros[4];

    for (int i=0; i<5;i++){

        printf("Informe um nome para o carro %d: ",i);
        scanf("%s", &carros[i].nome);
        fflush(stdin);

        printf("Informe uma potencia para o carro %d: ",i);
        scanf("%d", &carros[i].potencia);
        fflush(stdin);


        printf("Informe um preco para o carro %d: ",i);
        scanf("%f", &carros[i].preco);
        fflush(stdin);
    }

        printf("\nInforme um preco para pesquisa:");
        scanf("%d", &preco_informado);

        printf("\nOs seguintes carros estao na faixa de preco:\n");

        for (int i=0; i<5;i++){

            if (carros[i].preco <= preco_informado){
                printf("Carro %d",i);
                printf("\nNome: %s \nPotencia: %d \nPreco: %.2f\n",carros[i].nome,carros[i].potencia,carros[i].preco);
            }
    }





}



