#include <stdio.h>
#include <stdlib.h>

int imc()
{
    float altura,peso,resultado;
    printf("digite sua altura em metros.\n");
    scanf("%f", &altura);
    printf("digite seu peso\n");
    scanf("%f", &peso);
    resultado=peso/(altura*altura);
    if(18.5<resultado && resultado<24.9)
    {
        printf("peso normal.");
    }
    else
    {
        printf("fora do peso normal.");
    }
    return 0;
}


