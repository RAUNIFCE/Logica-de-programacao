#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{   setlocale(LC_ALL,"portuguese" );
    //some tudo e quando der zero exiba a soma;
    /*
    int a,soma=0;
    printf("digite um n�mero");
    scanf("%d",&a);
    soma+=a;
    while(a!=0){
        printf("digite um n�mero");
        scanf("%d",&a);
        soma+=a;
    }
    printf(" o resultado � %d",soma);
    */
    //inser��o de senha
    /*
    int senha;
    printf("digite a senha");
    scanf("%d",&senha);
    while(senha!=1234){
        printf("digite a senha");
        scanf("%d",&senha);
    }
    printf("acesso permitido");
    */
    //nota de alunos
    /*
    int nota=0,qtd=1;
    float media=0,soma=0;
    printf("digite a nota do aluno");
    scanf("%d",&nota);
    soma+=nota;
    while(nota>=0){
        printf("digite a nota do aluno");
        scanf("%d",&nota);
        if(nota<0){
            break;
        }
        soma+=nota;
        ++qtd;
    }
    media=soma/qtd;
    printf("A m�dia do aluno � %.1f",media);
    */
    //n�mero aleat�rio
    int numero_correto,tent;
    srand(time(NULL));
    numero_correto = (rand() % 100) + 1;
    printf("digite um n�mero de 0 a 100\n");
    scanf("%d",&tent);
    while(tent!=numero_correto){
        if(numero_correto>tent){
            printf("voc� digitou um menor\n");
        }
        if(numero_correto<tent){
            printf("voc� digitou um maior\n");
        }
        printf("digite um n�mero de 0 a 100 \n");
        scanf("%d",&tent);
    }
    printf("voc� acertou");





    return 0;
}
