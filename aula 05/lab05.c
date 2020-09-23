#include <stdio.h>


int main()
{

unsigned long long int numero, valor_fatorado;

printf("Informe algum numero maior que 0: ");
scanf("%llu", &numero);

valor_fatorado = 1;

while(numero >1) {

valor_fatorado = valor_fatorado * numero;
numero = numero -1;

printf("Fatorial: %llu - Numero: %llu\n", valor_fatorado, numero);


};

printf("Fatorial: %llu - Numero: 0",valor_fatorado);

return 0;


}
