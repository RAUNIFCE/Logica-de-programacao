#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{   setlocale(LC_ALL,"portuguese" );
    //some tudo e quando der zero exiba a soma;
    /*
    int a,soma=0;
    printf("digite um número");
    scanf("%d",&a);
    soma+=a;
    while(a!=0){
        printf("digite um número");
        scanf("%d",&a);
        soma+=a;
    }
    printf(" o resultado é %d",soma);
    */
    //inserção de senha
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
    printf("A média do aluno é %.2f",media);
    */
    //número aleatório
    /*
    int numero_correto,tent;
    srand(time(NULL));
    numero_correto = (rand() % 100) + 1;
    printf("digite um número de 0 a 100\n");
    scanf("%d",&tent);
    while(tent!=numero_correto){
        if(numero_correto>tent){
            printf("você digitou um menor\n");
        }
        if(numero_correto<tent){
            printf("você digitou um maior\n");
        }
        printf("digite um número de 0 a 100 \n");
        scanf("%d",&tent);
    }
    printf("você acertou");
    */
    //contagem regresiiva
    /*
    int num;
    printf("digite um número\n");
    scanf("%d",&num);
    while(num!=0){
        if(num>0){
            num--;
            printf("%d\n",num);

        }
        if(num<0){
            num++;
            printf("%d\n",num);

        }
    }
    */
    //crivo de erastóstenes
    /*
    int num,cont=2;
    printf("digite um número\n");
    scanf("%d",&num);
    while(cont<num){
        int multip=0;
            for(int i=cont;i>num;i++){
                if(cont%i==0){
                    multip+=1;


            printf("%d %d %d ",num,cont,multip);
                }
            }

        if(multip<2){
        printf("%d",cont);
        cont++;
        }
    }
    */
    //crivo erastostenes da professora
    /*
    int n,j,primo;
    printf("informe um valor:\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        primo=1;
        j=2;
        while(j*j<=i){
            if(i%j==0){
                primo=0;
                break;
            }
            j++;
        }
        if(primo){
            printf("%d\n",i);
        }
    }
    */
    //MDC números positivos de um um número só
    /*
    int n,j,primo,maxp;
    printf("informe um valor:\n");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        primo=1;
        j=n-1;
        while(n%j!=0){
            j--;
        }
        maxp=j;


    }
    printf("%d",maxp);
    */
    //MDC de dois números
    /*
    int n,n2,ja,jb,primo,maxp;
    printf("informe dois valores para calcular mdc:\n");
    scanf("%d %d",&n,&n2);
    if(n%n2==0 || n2%n==0){
        if(n<=n2){
        maxp=n;
        }
        if(n>=n2){
        maxp=n2;
        }
    }
    else{
         for(int i=2;i<=n;i++){
        primo=1;
        ja=n-1;
        jb=n2-1;
        while(n%ja!=0){
            ja--;
        }
        while(n2%jb!=0){
            jb--;
        }
        while(ja!=jb){
            if(ja>jb ){
                ja--;
            }
             if(ja<jb ){
                jb--;
            }
        }
        while(n%ja!=0 || n2%ja!=0){
            ja--;
        }
        maxp=ja;


    }
    }

    printf("%d",maxp);
    */
    // sequencia de collatz
    /*
    int num=0;
    printf("informe um valor:\n");
    scanf("%d",&num);
    while(num>1){
        printf(" %d",num);
        if(num==1){
            printf("%d",num);
            break;
            }
        if(num%2==0){
            num=num/2;

        }
        else if(num%2==1){

            num=(num*3)+1;

        }

    }
    printf(" %d",num);
    */

    // Juca alcançar chico
    /*
    float juca=0,chico=0,anos=0;
    juca=1.1;
    chico= 1.7;
    while(juca<chico){
        juca+=0.03;
        chico+=0.02;
        anos+=1;
        printf("juca %.2f chico %.2f \n",juca,chico);

    }
    printf("tempo necessário são: %.f anos\n",anos);
    */
    //série harmônica
    /*
    int cont;
    float num,expressao,soma=0;
    printf("informe um valor:\n");
    scanf("%f",&num);
    cont=0;
    while(cont<num){
        cont++;
        expressao=1/(num-(num-cont));

        soma+=expressao;
    }
    printf("%f",soma);
    */
    //DECIMAL PRA BINÁRIO

    int num=0,bin=0,resto=0,fator=1;
    printf("informe um valor:\n");
    scanf("%d",&num);
    while(num>0){
        resto=num%2;
        bin=bin+(resto*fator);
        num=num/2;
        fator=fator*10;

    }
    printf(" %d",bin);

    //soma dos algarismos
    /*
    int num,soma=0;
    printf("informe um valor:\n");
    scanf("%d",&num);
    while(num!=0){
        soma+=(num%10);
        num=num/10;

    }

    printf("a soma dos algarismos é: %d",soma);
    */





    return 0;
}
