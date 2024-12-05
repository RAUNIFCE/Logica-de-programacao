#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"portuguese" );
    float nota1,nota2,nota3,resultado;
    printf("digite a primeira nota\n");
    scanf("%f",&nota1);
    printf("digite a segunda nota\n");
    scanf("%f",&nota2);
    resultado=(nota1+nota2)/2;

    if(resultado>=7){

     printf("aprovado");
    }

    else{

        printf("digite a terceira nota\n");
        scanf("%f",&nota3);
        resultado=(nota1+nota2+nota3)/3;
        if(resultado>=5)
            {
          printf("aprovado com recuperação");
      }
      else{
          printf("Reprovado.");
      }
    }

    return 0;
}
