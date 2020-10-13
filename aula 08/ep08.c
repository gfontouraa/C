#include <stdio.h>
#include <string.h>


int main()
{

char texto[101];
char texto_inverso[101] = "0";
int i, l;
int contador = 0;

printf("Digite um texto (max 100 caracteres): ");
gets(texto);
l = strlen(texto);

for (i=(l -1);i>=0;i--){
    texto_inverso[contador] = texto[i];
    contador++;

}

if (strcmp(texto, texto_inverso) == 0){
    printf("Eh um palindromo! ");
} else {
   printf("Nao eh um palindromo! ");
}

system("pause");

return 0;


}
