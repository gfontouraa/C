#include <stdio.h>

int main()
{

char sexo = 'n';
char confirmacao = 's';
int idade = 0;
int idade_total_f = 0;
int idade_total_m = 0;
float salario = 0;
float salario_total_f = 0;
float salario_total_m = 0;
int total_f = 0;
int total_m = 0;
int media_idade_f = 0;
int media_idade_m = 0;
float media_salario_f = 0;
float media_salario_m = 0;

do {

printf("Informe o sexo do entrevistado: \n");
scanf( " %c", &sexo );

printf("Informe a idade do entrevistado: \n");
scanf( "%i", &idade );

printf("Informe o salario do entrevistado: \n");
scanf("%f", &salario);

if (sexo == 'f'){
    idade_total_f = idade + idade_total_f;
    salario_total_f = salario + salario_total_f;
    total_f++;
}
if (sexo == 'm'){
    idade_total_m = idade + idade_total_m;
    salario_total_m = salario + salario_total_m;
    total_m++;
}




printf("\nQuer inserir um novo entrevistado? \n");
scanf( " %c", &confirmacao );



}while( confirmacao == 's' );


if (total_f > 0){
media_salario_f = salario_total_f / total_f;
media_idade_f = idade_total_f / total_f;

} else {
media_idade_f = 0;
media_salario_f = 0;
}

if (total_m > 0){
media_idade_m = idade_total_m / total_m;
media_salario_m = salario_total_m / total_m;
} else {
media_idade_m = 0;
media_salario_m = 0;
}


printf("\nMedia de idade feminina %i",media_idade_f);
printf("\nMedia de salario feminino %.2f",media_salario_f);
printf("\nMedia de idade masculina %i",media_idade_m);
printf("\nMedia de salario masculino %.2f \n",media_salario_m);

system("pause");

return 0;


}
