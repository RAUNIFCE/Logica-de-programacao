#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{

    setlocale(LC_ALL,"portuguese" );
    //laços de repetição
    //contadores
    /*
    c++ e ++c
    se
    int c=10
    int d
    d=++c
    ao printar c será 4 e d será 4
    mas se
    d=c++
    d será 3 e c será 4,d ficará com o resto de c
    isso também serve para --c e c--*/
    // tabuada do 4
    /*
    for(int i=1;i<=10;i++){
        printf("4 x %d = %d \n",i,4*i);
    } */
    float media,nota;
    float soma=0; /* esse =0 é pra eviatr uns erros mas tirar da certo,*/
    int n=5;
    for(int i=1;i<=n;i++){
        printf("informe a %da nota:\n",i);
        scanf("%f",&nota);
        soma=soma+nota;
    }
    media=soma/n;
    printf("A média é: %.2f",media);

    return 0;
}
