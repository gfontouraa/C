#include <stdio.h>
#include <string.h>



/*

Enunciado: Fa�a um programa que leia um caractere informado pelo usu�rio e depois l�
um arquivo de texto. O programa dever� contar quantas vezes o caractere aparece no
arquivo e exibir na tela a contagem. O nome do arquivo dever� ser informado pelo
usu�rio e o arquivo n�o dever� ser alterado.
Aten��o:
o programa dever� obrigatoriamente manipular arquivos texto.
Foram disponibilizados no Moodle dois arquivos de exemplo para teste. Voc� tamb�m
pode usar qualquer arquivo .txt.
Dica: utilize o bloco de notas e escreva seu pr�prio arquivo e teste seu programa com ele.



*/




main()
{
    FILE * fp;
    char texto[100];
    char caractere[1];
    int contador = 0;

    printf("Escolha um caractere: ");
    scanf("%c ", &caractere);


    fp = fopen("teste.txt", "r");

    while(!feof(fp)){
        fgets(texto, 100, fp);
        for (int i = 0; i<=strlen(texto);i++){
            if (texto[i] = caractere[0])
                contador++;
        }

    }

    printf("Totalizador: %d",contador);



}



