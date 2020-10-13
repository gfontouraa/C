#include <stdio.h>
#include <string.h>


int main()
{

char texto[501];
int i, l;
int contador = 0;

printf("Digite um texto: ");
gets(texto);
l = strlen(texto);

for (i=0;i<l;i++){
    if (texto[i] == ' ')
        contador++;

}

printf("O texto possui %d espacos\n",contador);

system("pause");

return 0;


}
