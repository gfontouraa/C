#include <stdio.h>



/*

Enunciado: Faça um programa C que leia (do teclado) um cadastro de 10 alunos,
indicando:
nome (string com 50 caracteres)
nota1 (float)
nota2 (float)
Calcule a média aritmética simples de cada um dos 10 alunos e depois escreva em um
arquivo texto (turma.txt) os dados de cada aluno: nome, nota1, nota2 e média.
Lembre-se de que as notas e média deverão ser apresentadas com até 2 casas decimais.
Dica:
Lembre-se de usar um tipo estruturado (struct) para facilitar o agrupamento de dados por
aluno.
Atenção:
O programa deverá obrigatoriamente manipular arquivos texto.



*/




main()
{

     struct aluno
     {
     char nome[49];
     float nota1;
     float nota2;
     float media;
     };

    struct aluno alunos[9];

    FILE * p_arq;
    p_arq = fopen("teste.txt","w");

    for (int i=0; i<10;i++){

        printf("Informe um nome para o aluno %d: ",i);
        scanf("%s", &alunos[i].nome);
        fflush(stdin);

        printf("Informe a primeira nota para o aluno %d: ",i);
        scanf("%d", &alunos[i].nota1);
        fflush(stdin);


        printf("Informe a segunda nota para o aluno %d: ",i);
        scanf("%f", &alunos[i].nota2);
        fflush(stdin);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2)/2;

    }

        for (int i=0; i<10;i++){
                fprintf(p_arq,"Oi");
                fprintf(p_arq,"Nome do aluno: %s, nota 1:  %.2f nota 2: %.2f Media: %.2f\n",alunos[i].nome,alunos[i].nota1,alunos[i].nota2,alunos[i].media);
            }

        fclose(p_arq);






}



