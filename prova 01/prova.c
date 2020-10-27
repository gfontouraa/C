#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

int matriz_t_s[5][5];
int matriz_t_i[5][5];
int matriz_d[5][5];
int numero_random = 0;
char opcao[1];
int i,j;

do {
    printf("Opcoes:\n TS) Triangular Superior\n TI)Triangular Inferior\n D) Diagonal\n S) Sair\n");
    scanf(" %s",opcao);

    if (strcmp(opcao, "TS") == 0){
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if (i == 0 && j == 0 || i == 0 && j == 1 || i == 1 && j == 1 || i == 0 && j == 2 || i == 1 && j == 2 || i == 2 && j == 2|| i == 0 && j == 3|| i == 1 && j == 3|| i == 2 && j == 3|| i == 3 && j == 3|| i == 0 && j == 4|| i == 1 && j == 4|| i == 2 && j == 4|| i == 3 && j == 4|| i == 4 && j == 4){
                numero_random = 500 + (rand() % 500);
                matriz_t_s[i][j] = numero_random;
                }else {
                matriz_t_s[i][j] = 0;
                }
            }


        }
        printf("\nMatriz Triangular Superior\n");
        for(i=0;i<5;i++){
            for(j=0; j<5;j++){
                printf("%03d\t", matriz_t_s[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    if (strcmp(opcao, "TI") == 0){
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if (i == 0 && j == 0 || i == 1 && j == 0 || i == 1 && j == 1 || i == 2 && j == 0 || i == 2 && j == 1 || i == 2 && j == 2|| i == 3 && j == 0|| i == 3 && j == 1|| i == 3 && j == 2|| i == 3 && j == 3|| i == 4 && j == 0|| i == 4 && j == 1|| i == 4 && j == 2|| i == 4 && j == 3|| i == 4 && j == 4){
                numero_random = 500 + (rand() % 500);
                matriz_t_i[i][j] = numero_random;
                }else {
                matriz_t_i[i][j] = 0;
                }
            }
        }

        printf("\nMatriz Triangular Inferior\n");
        for(i=0;i<5;i++){
            for(j=0; j<5;j++){
                printf("%03d\t", matriz_t_i[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    if (strcmp(opcao, "D") == 0){
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if (i == 0 && j == 0 || i == 1 && j == 1 || i == 2 && j == 2 || i == 3 && j == 3 || i == 4 && j == 4){
                numero_random = 500 + (rand() % 500);
                matriz_d[i][j] = numero_random;
                }else {
                matriz_d[i][j] = 0;
                }
            }
        }

        printf("\nMatriz Diagonal\n");
        for(i=0;i<5;i++){
            for(j=0; j<5;j++){
                printf("%03d\t", matriz_d[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

} while (strcmp(opcao, "S") == 1);






system("pause");

return 0;


}
