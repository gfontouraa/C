#include <stdio.h>

int main()
{

float base, altura, area, perimetro;

printf("Informe a base do retangulo: \n");
scanf("%f", &base);

printf("Informe a altura do retangulo: \n");
scanf("%f", &altura);

area = (base * altura);
perimetro = 2 * (base + altura);

printf("\nSua area: %.2f\nSeu perimetro: %.2f", area, perimetro);
printf("\n");
}


