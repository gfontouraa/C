#include <stdio.h>
#include <math.h>

/*

Enunciado: Fa�a um programa C que solicite ao usu�rio 2 n�meros reais e informe:
a. A soma dos n�meros;
b. O produto do primeiro n�mero pelo quadrado do segundo;
c. O quadrado do primeiro n�mero;
d. A raiz quadrada da soma dos quadrados;
e. O seno da diferen�a do primeiro n�mero pelo segundo;
f. O m�dulo do primeiro n�mero.
Para cada c�lculo, deve ser implementada uma fun��o diferente.
Aten��o:
O programa dever� obrigatoriamente usar fun��es.
Dica:
utilize a fun��o sin da math.h para calcular o seno.
utilize a fun��o sqrt da math.h para calcular a raiz quadrada

*/

void soma(float numero_1, float numero_2)
{
    float soma = numero_1 + numero_2;
    printf("\nO resultado da soma eh: %f\n", soma);

}

void produto(float numero_1, float numero_2)
{
    float produto = numero_1 * pow(numero_2,2);
    printf("O resultado da multiplicacao eh: %f\n", produto);

}

void quadrado(float numero_1)
{
    float quadrado = pow(numero_1,2);
    printf("O resultado do quadrado do primeiro numero eh: %f\n", quadrado);
}

void raiz_quadrada(float numero_1, float numero_2)
{

    float soma = pow(numero_1,2) + pow(numero_2,2);
    float raiz_quadrada = sqrt(soma);
    printf("O resultado da raiz quadrada da soma eh: %f\n", raiz_quadrada);

}

void seno(float numero_1, float numero_2)
{
    float diferenca = numero_1 - numero_2;
    float seno = sin(diferenca);
    printf("O resultado do seno da diferenca eh: %f\n", seno);

}

void modulo(float numero_1)
{
    float modulo = abs(numero_1);
    printf("O modulo do primeiro numero eh: %f\n", modulo);
}

int main()
{

float numero_1 = 0;
float numero_2 = 0;

printf("Qual o numero real 1:\n");
scanf("%f", &numero_1);

printf("Qual o numero de linhas:\n");
scanf("%f", &numero_2);



soma(numero_1,numero_2);
produto(numero_1,numero_2);
quadrado(numero_1);
raiz_quadrada(numero_1,numero_2);
seno(numero_1,numero_2);
modulo(numero_1);

system("pause");

return 0;

}



