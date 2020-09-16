#include <stdio.h>
int main()
{

float velocidade, milhas;

printf("Informe a velocidade do veiculo em km/h: \n");
scanf("%f", &velocidade);

milhas = velocidade / 1.609344;

printf("\nKm/h:                 Mp/h:");
printf("\n%.2f                %.2f", velocidade, milhas);
printf("\n");
}


