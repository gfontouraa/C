#include <stdio.h>
#include <math.h>
#include <string.h>



int calcular_distancia (int origem, int destino){

    int distancia = 0;

    distancia = pow(origem - destino,2);


    return distancia;
}

int primeiro ( int cep ){
int r;
for (r = cep ; r >= 10; r /= 10);
return r;
}


int calcula_id(){
    FILE * fp;
    FILE * fg;
    int linhas_fp = 0;
    int linhas_fg = 0;
    int linhas = 0;
    char texto[100];
    fp = fopen("relatorioFP.txt", "r");
    fg = fopen("relatorioFG.txt", "r");
    if (fp == NULL){
        linhas_fp = 0;
    }else{
        while(!feof(fp)){
        fgets(texto,100,fp);
        if(strlen(texto) < 99){
            linhas_fp++;
        }
        }
    }

    if (fg == NULL){
        linhas_fg = 0;
    }else{
        while(!feof(fg)){
        fgets(texto,100,fg);
        if(strlen(texto) < 99){
            linhas_fg++;
        }
        }
    }

    fclose(fp);
    fclose(fg);


    linhas = linhas_fp + linhas_fg;
    return linhas;
}




main()
{
    int distancia, m, digito_cep_origem, digito_cep_destino, linhas, id;
    char premium;
    float frete;

    typedef struct {
     float peso;
     int largura;
     int comprimento;
     int altura;
    } PACOTE;

    typedef struct {
     int cep_origem;
     int cep_destino;
     int codigo_cliente;
     PACOTE pacote;
     float valor;
    } ENCOMENDA;

    ENCOMENDA encomenda;
    PACOTE pacote;


    printf("Informe o CEP de origem: ");
    scanf("%d",&encomenda.cep_origem);
    fflush(stdin);

    printf("Informe o CEP de destino: ");
    scanf("%d",&encomenda.cep_destino);
    fflush(stdin);

    printf("Informe o valor da compra: ");
    scanf("%f",&encomenda.valor);
    fflush(stdin);

    printf("Informe o codigo do cliente: ");
    scanf("%d",&encomenda.codigo_cliente);
    fflush(stdin);

    printf("Informe o peso do pacote: ");
    scanf("%f",&encomenda.pacote.peso);
    fflush(stdin);

    printf("Informe a largura do pacote: ");
    scanf("%d",&encomenda.pacote.largura);
    fflush(stdin);

    printf("Informe o comprimento do pacote: ");
    scanf("%d",&encomenda.pacote.comprimento);
    fflush(stdin);

    printf("Informe a altura do pacote: ");
    scanf("%d",&encomenda.pacote.altura);
    fflush(stdin);

    printf("O Cliente e assinate do servico premium? (S ou N): ");
    scanf(" %c",&premium);
    fflush(stdin);

    distancia = calcular_distancia(encomenda.cep_origem, encomenda.cep_destino);

    if (premium == 'S'){
        frete = 0;
    }
    else{
        if (encomenda.pacote.peso <= 3 && encomenda.valor >= 400){
            frete = 0;
        }
        else {
            digito_cep_origem = primeiro(encomenda.cep_origem);
            digito_cep_destino = primeiro(encomenda.cep_destino);
            if (digito_cep_origem == digito_cep_destino){
                m = 1/6000;
                frete = sqrt((m * distancia) + pow(encomenda.pacote.peso,2));
            }
            else
                m = 1/2500;
                frete = sqrt((m * distancia) + pow(encomenda.pacote.peso,2));
        }
    }


    linhas = calcula_id();
    id = linhas + 1;

    printf("O frete saiu: %f reais",frete);

    if (frete > 0){
        FILE * fp;
        fp = fopen("relatorioFP.txt", "a+");
        fprintf(fp,"%d,%d,%d,%d,%f,%f,%f\n",id,encomenda.cep_origem, encomenda.cep_destino,encomenda.codigo_cliente,encomenda.valor,encomenda.pacote.peso, frete);
    }else{
        FILE * fg;
        fg = fopen("relatorioFG.txt", "a+");
        fprintf(fg,"%d,%d,%d,%d,%f,%f,%f\n",id,encomenda.cep_origem, encomenda.cep_destino,encomenda.codigo_cliente,encomenda.valor,encomenda.pacote.peso, frete);
    }











}



