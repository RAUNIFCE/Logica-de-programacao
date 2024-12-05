#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
    float ingresso,valorf;
    int idade;
    printf("Digite o valor do ingresso\n");
    scanf("%f", &ingresso);
    printf("qual a sua idade? \n");
    scanf("%d", &idade);
    if(idade>60){
          valorf=ingresso*0.7;
          printf("teu ingresso agora é R$%.2f",valorf);
      }
      else{
          valorf=ingresso*0.9;
          printf("teu ingresso agora é  R$%.2f",valorf);
      }
    return 0;
}
