#include <stdio.h>

int main()
{

int numero_escolhido, resto, soma_numeros=0;

do{
    printf("Escolha um numero inteiro maior que 0: ");
    scanf("%d", &numero_escolhido);

}while(numero_escolhido < 0);

for (int i = 1; i <= (numero_escolhido - 1); i++)
{
    resto = numero_escolhido % i;
if (resto == 0)
    {
        soma_numeros = soma_numeros + i;
    }
}

if (soma_numeros == numero_escolhido){
    printf("\nEh um numero perfeito\n");
}
else {
    printf("\nNao eh um numero perfeito\n");
}

system("pause");

return 0;


}
