#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{

    setlocale(LC_ALL,"portuguese" );
    //la�os de repeti��o
    //contadores
    /*
    c++ e ++c
    se
    int c=10
    int d
    d=++c
    ao printar c ser� 4 e d ser� 4
    mas se
    d=c++
    d ser� 3 e c ser� 4,d ficar� com o resto de c
    isso tamb�m serve para --c e c--*/
    // tabuada do 4
    /*
    for(int i=1;i<=10;i++){
        printf("4 x %d = %d \n",i,4*i);
    } */
    float media,nota;
    float soma=0; /* esse =0 � pra eviatr uns erros mas tirar da certo,*/
    int n=5;
    for(int i=1;i<=n;i++){
        printf("informe a %da nota:\n",i);
        scanf("%f",&nota);
        soma=soma+nota;
    }
    media=soma/n;
    printf("A m�dia �: %.2f",media);

    return 0;
}
