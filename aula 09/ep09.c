#include <stdio.h>

int main()
{

float matriz_a[2][3];
float matriz_b[2][3];
float matriz_c[2][3];
int i,j;

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Informe o elemento %d,%d da matriz a: ",i,j);
        scanf("%f",&matriz_a[i][j]);
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("Informe o elemento %d,%d da matriz b: ",i,j);
        scanf("%f",&matriz_b[i][j]);
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
    }
}




printf("matriz a\n");
for(i=0;i<2;i++){
    for(j=0; j<3;j++){
        printf("%.2f\t", matriz_a[i][j]);
    }
    printf("\n");
}

printf("matriz b\n");
for(i=0;i<2;i++){
    for(j=0; j<3;j++){
        printf("%.2f\t", matriz_b[i][j]);
    }
    printf("\n");
}

printf("matriz c\n");
for(i=0;i<2;i++){
    for(j=0; j<3;j++){
        printf("%.2f\t", matriz_c[i][j]);
    }
    printf("\n");
}




system("pause");

return 0;


}
