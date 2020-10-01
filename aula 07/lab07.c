#include <stdio.h>

int main()
{

float notas[14], media;
int i;

for(i=0; i<15; i++)
{
printf("Informe a nota do aluno %d: ", i+1);
scanf("%f", &notas[i]);
}

float soma = 0;
for(i=0; i<15; i++)
{
soma = soma + notas[i];
}
media = soma/15;
printf("\nMedia das notas dos alunos eh igual a: %.2f\n", media);
printf("Notas menores que a media:\n");
for(i=0; i<15; i++)
{
 if (notas[i] < media)
    printf("%.2f\n",notas[i]);
}

system("pause");

return 0;


}
