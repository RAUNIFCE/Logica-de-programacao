#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese" );

    //Desafio da lanchonete

    /*
    int termos,resultado;
    printf("digite o número de termos\n");
    scanf("%d",&termos);
    resultado=termos%2;
    if(resultado==0){
        printf("o resulatdo será 0");
    }
    else{
        printf("o resulatdo será 1");
    } */

    //Cálculo de Imposto
    /*
    float salario,imposto;
    printf("digite seu salário\n");
    scanf("%f",&salario);
    if(salario<=2000){
        printf("isento de imposto");
    }
    else if(salario>=2000.01 && salario<=3000){
        imposto=((salario-2000)*0.08);
        printf("seu valor a ser pago é R$ %.2f",imposto );
    }
     else if(salario>=3000.01 && salario<=4500){
        imposto=((1000*0.08)+((salario-3000)*0.18));
        printf("seu valor a ser pago é R$ %.2f",imposto );
    }
     else if(salario>=4500){
        imposto=((1000*0.08)+(1500*0.18)+((salario-4500)*0.28));
        printf("seu valor a ser pago é R$ %.2f",imposto );
    }
    */
    //saber multiplos
    /*
    int na,nb,r1,r2;
    printf("digite dois número inteiros\n");
    scanf("%d %d",&na, &nb);
    r1=na%nb;
    r2=nb%na;
    if(r1==0){
         printf("São múltiplos\n");
    }
    else if(r2==0){
         printf("São múltiplos\n");
    }
    else{

         printf("Não são múltiplos\n");
    }
*/
    //Achar nota ausente
    int n1,n2,media;
    printf("digite a nota e média\n");
    scanf("%d %d",&n1, &media);
    n2=((media*2)-n1);
    printf("%d",n2);

    return 0;
}
