#include <stdio.h>


int main()
{

int numero_escolhido, total = 0;
int candidatos[11];
int candidato_vencedor = 0;


candidatos[0] = 0;
candidatos[1] = 0;
candidatos[2] = 0;
candidatos[3] = 0;
candidatos[4] = 0;
candidatos[5] = 0;
candidatos[6] = 0;
candidatos[7] = 0;
candidatos[8] = 0;
candidatos[9] = 0;
candidatos[10] = 0;


do {
    printf("Escolha um candidato: (1 a 10) ");
    scanf( "%d", &numero_escolhido );

    if (numero_escolhido <= 0 || numero_escolhido > 10 ){
        printf("Numero invalido\n");
    } else{
        candidatos[numero_escolhido] = candidatos[numero_escolhido] + 1;
        total++;
    }
} while (numero_escolhido != 0);

printf("Candidato 1 teve: %d votos, numa porcentagem de %f%%\n",candidatos[1], (candidatos[1]/total) *100);
printf("Candidato 2 teve: %d votos, numa porcentagem de %f%%\n",candidatos[2], (candidatos[2]/total) *100);
printf("Candidato 3 teve: %d votos, numa porcentagem de %f%%\n",candidatos[3], (candidatos[3]/total) *100);
printf("Candidato 4 teve: %d votos, numa porcentagem de %f%%\n",candidatos[4], (candidatos[4]/total) *100);
printf("Candidato 5 teve: %d votos, numa porcentagem de %f%%\n",candidatos[5], (candidatos[5]/total) *100);
printf("Candidato 6 teve: %d votos, numa porcentagem de %f%%\n",candidatos[6], (candidatos[6]/total) *100);
printf("Candidato 7 teve: %d votos, numa porcentagem de %f%%\n",candidatos[7], (candidatos[7]/total) *100);
printf("Candidato 8 teve: %d votos, numa porcentagem de %f%%\n",candidatos[8], (candidatos[8]/total) *100);
printf("Candidato 9 teve: %d votos, numa porcentagem de %f%%\n",candidatos[9], (candidatos[9]/total) *100);
printf("Candidato 10 teve: %d votos, numa porcentagem de %f%%\n",candidatos[10], (candidatos[10]/total) *100);

for (int i = 1; i <=10; i++){
    if (candidatos[0] < candidatos[i]){
        candidatos[0] = candidatos[i];
        candidato_vencedor = i;
    }
}

printf("O candidato com mais voto: candidato numero %d com %d votos, com uma porcentagem de %f%%\n", candidato_vencedor, candidatos[0], ((candidatos[0]/total) *100) );


system("pause");

return 0;


}
