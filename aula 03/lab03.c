#include <stdio.h>
int main()
{

float nota1, nota2, media;

printf("Informe a nota 1\n");
scanf("%f", &nota1);

printf("Informe a nota 2\n");
scanf("%f", &nota2);

media = (nota1 + nota2)/2;

if(media >=6){
printf("Aluno aprovado!");
}
else{
printf("Aluno reprovado!");
}



}


