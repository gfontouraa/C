#include <stdio.h>



/*

Enunciado: Elaborar um programa C que auxilie no controle de uma fazenda de gado que
possu� um total de 2000 cabe�as de gado. A base de dados � formada por um conjunto
de estruturas (registros) contendo os seguintes campos referente a cada cabe�a de gado:
C�digo: c�digo da cabe�a de gado (inteiro).
Leite: n�mero de litros de leite produzido por semana (inteiro).
Alimento: quilos de alimento consumidos por semana (inteiro).
Idade: idade dada em meses (inteiro).
Leia os dados das vaquinhas, at� que o c�digo digitado seja igual a zero e ent�o o
programa deve informar:
Quantidade de leite produzido por m�s (litros). Considere 4,5 semanas por m�s.
Quantidade de alimento consumido por m�s (quilos).
Informe o n�mero de vacas quem podem ser vendidas (todas com 5 anos ou mais)
Quantidade de leite produzido por m�s pelas vacas a serem vendidas.
Quantidade de alimento consumido por m�s pelas vacas a serem vendidas.
Aten��o: o programa dever� obrigatoriamente usar struct.



*/




main()
{
    int total_leite = 0;
    int total_alimento = 0;
    int vacas_vendidas = 0;
    int vendidas_leite = 0;
    int vendidas_alimento = 0;
    int total_vacas = 0;

     struct gado
     {
     int codigo;
     int leite;
     int alimento;
     int idade;
     };

    struct gado gados[200];

    for (int i=0; i<200;i++){
        printf("Informe o codigo (0 para sair): ");
        scanf("%d",&gados[i].codigo);

        if (gados[i].codigo!=0){
            total_vacas++;
            printf("Informe quantos litros de leite ela produz por semana:");
            scanf("%d",&gados[i].leite);
            printf("Informe quantos kilos de alimento ela come: ");
            scanf("%d",&gados[i].alimento);
            printf("Informe a idade em meses:");
            scanf("%d",&gados[i].idade);

        }else{
            break;
        }
    }

        for (int j=0; j<=total_vacas;j++){

        total_leite = total_leite + (gados[j].leite *4.5);
        total_alimento = total_alimento + (gados[j].alimento * 4.5);

        if (gados[j].idade >=60){
            vacas_vendidas++;
            vendidas_leite = vendidas_leite + (gados[j].leite * 4.5);
            vendidas_alimento = vendidas_alimento + (gados[j].alimento * 4.5);
        }

    }

    printf("\nQuantidade total de leite: %d",total_leite);
    printf("\nQuantidade total de alimento: %d",total_alimento);
    printf("\nQuantidade total de vacas que podem ser vendidas: %d",vacas_vendidas);
    printf("\nQuantidade total de leite das vacas que podem ser vendidas: %d",vendidas_leite);
    printf("\nQuantidade total de alimento das vacas que podem ser vendidas: %d",vendidas_alimento);


}



