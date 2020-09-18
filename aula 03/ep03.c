#include <stdio.h>
#include <math.h>

int main()
{

float altura, quilogramas, imc;

printf("Informe a altura em metros (exemplo 1.80)\n");
scanf("%f", &altura);

printf("Informe o peso em quilogramas\n");
scanf("%f", &quilogramas);

float altura_quadrado = pow(altura,2);
imc = quilogramas / altura_quadrado;

printf("Seu IMC e: %.2f", imc);

if(imc <17){
printf("\nMuito abaixo do peso!");
}
else if(imc >=17 && imc<18.50){
printf("\nAbaixo do peso!");
}
else if(imc >=18.5 && imc<24.99){
printf("\nPeso normal!");
}
else if(imc >=25 && imc<29.99){
printf("\nAcima do peso!");
}
else if(imc >=30 && imc<34.99){
printf("\nObesidade I!");
}
else if(imc >=35 && imc<39.99){
printf("\nObesidade II (severa)!");
}
else if(imc >40){
printf("\nObesidade III (morbida)!");
}



}


