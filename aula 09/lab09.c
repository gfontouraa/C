#include <stdio.h>

int main()
{

int matriz[3][3];
int matriz_transposta[3][3];
int i,j;

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Informe a nota %d do aluno %d: ",j+1,i+1);
        scanf("%d",&matriz[i][j]);
    }
}

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        matriz_transposta[i][j] = matriz[j][i];
    }
}


printf("matriz original\n");
for(i=0;i<3;i++){
    for(j=0; j<3;j++){
        printf("%02d\t", matriz[i][j]);
    }
    printf("\n");
}

printf("matriz transposta\n");
for(i=0;i<3;i++){
    for(j=0; j<3;j++){
        printf("%02d\t", matriz_transposta[i][j]);
    }
    printf("\n");
}



system("pause");

return 0;


}
