#include <stdio.h>
#include <string.h>

char check()
{
    char sexo[1];
    int continuar = 0;

    do {
    printf("       Informe o sexo do aluno: ");
    scanf(" %s", sexo);

    if (strcmp(sexo, "F") == 0 || strcmp(sexo, "M") == 0)
        return sexo[0];


    } while (continuar == 0);


}

int main()
{

char matriz_sexo[10];
int contador_masc, contador_fem = (0,0);
char retorno[1];

int i;

for(i=0;i<10;i++)
{
    printf("Aluno %d: \n", i+1);
    matriz_sexo[i] = check();

}

for(i=0;i<10;i++)
{
    if (matriz_sexo[i] == 'F')
        contador_fem++;
    else
        contador_masc++;
}



printf("\nDas pessoas informadas, %d sao do sexo feminino e %d sao do sexo masculino\n", contador_fem, contador_masc);


system("pause");

return 0;

}


