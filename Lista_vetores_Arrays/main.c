#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"portuguese" );
    //depositar variaveis em vetores
    /*
    int a,b,c,conta=0,contb=0,contc=0;
    int valores[10];
    for(int i=0;i<10;i++){
        printf("digite os valores numéricos");
        scanf("%d",&valores[i]);
    }
    printf("digite 3 valores diferentes para pesquisar\n");
    scanf("%d %d %d",&a,&b,&c);
    for(int i=0;i<10;i++){
        if(valores[i]==a){
            conta++;
        }
        else if(valores[i]==b){
            contb++;
        }
        else if(valores[i]==c){
            contc++;
        }
    }
    printf("A apareceu %d vezes,B apareceu %d vezes e C apareceu %d vezes",conta,contb,contc);
    */
    //2- 6 numeros fornecidos ao contrário
    /*
    int valores[6];
    for(int i=0;i<6;i++){
        printf("digite os valores numéricos");
        scanf("%d",&valores[i]);
    }
    for(int i=5;i>=0;i--){
        printf("%d",valores[i]);
    }
    */
    //medias de 10 alunos
    /*
    float n1[10],n2[10],media[10];
    for(int i=0;i<10;i++){
        printf("digite as notas da 1º prova\n");
        scanf("%f",&n1[i]);
    }
    for(int i=0;i<10;i++){
        printf("digite as notas da 2º prova\n");
        scanf("%f",&n2[i]);
    }
    for(int i=0;i<10;i++){
        media[i]=((n1[i]*2)+(n2[i]*3))/5;

    }
    for(int i=0;i<10;i++){
        printf("As notas são:%.2f",media[i]);

    }
    */
    //Diferença consecutiva
    /*
    int maior;
    float num[10],dif[9],maiorseq[2];
    for(int i=0;i<10;i++){
        printf("digite a sequencia numerica\n");
        scanf("%f",&num[i]);
    }
    for(int i=0;i<9;i++){
        if(i==0){
        maior=0;
        }
        if(i<9){
            dif[i]=(num[i+1])-(num[i]);
        }
        if(dif[i]<0){
            dif[i]=dif[i]*(-1);
        }
        if(dif[i]>maior){
            maior=dif[i];
            maiorseq[0]=num[i];
            maiorseq[1]=num[i+1];
        }
    }
    for(int i=0;i<9;i++){
        printf("As diferenças %.1f\n",dif[i]);

    }
    printf("a maior diferença é %d que é a diferença entre %.1f e %.1f ",maior,maiorseq[0],maiorseq[1]);
    */
    //média de idades
    /*
    int idade[5],desvio[5];
    float soma=0,media;
    for(int i=0;i<5;i++){
        printf("digite a idade do(a) cabra/cabrita\n");
        scanf("%d",&idade[i]);
        soma+=idade[i];
    }

    media=soma/5;
    printf("\nA média é %.1f\n",media);
    for(int i=0;i<5;i++){
        desvio[i]=idade[i]-media;
        printf("o desvio da %dº pessoa em relação a média %.1f é %d \n",i+1,media,desvio[i]);
    }
    */
    //6- leia 10 numeros,moste o menor e sua posição no vetor
    /*
    int num[10],maior,maiorpos[2];
    for(int i=0;i<10;i++){
        printf("digite a sequencia numerica\n");
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++){
        if(i==0){
        maior=num[i];
        }

        if(num[i]>maior){
            maior=num[i];
            maiorpos[0]=i;
            maiorpos[1]=i+1;
        }
    }
     printf("o maior é %d que tem índice %d e é o %dº número da lista ",maior,maiorpos[0],maiorpos[1]);
    */
    //7- temperatura da semana
    /*
    float temp[7],menor,maior,dif;
    for(int i=0;i<7;i++){
        printf("digite a temperatura do %dº dia da semana \n",i+1);
        scanf("%f",&temp[i]);
    }
    for(int i=0;i<7;i++){
        if(i==0){
        maior=temp[i];
        menor=temp[i];
        }

        if(temp[i]>maior){
            maior=temp[i];
        }
        if(temp[i]<menor){
            menor=temp[i];
        }
    }
    dif=maior-menor;
    printf("A diferença é %.1f°C",dif);
    */
    //8-Faça um programa que leia um valor T e preencha um vetor N[1000]
    //com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.
    /*
    int n[1000],t,cont;
    printf("digite o valor T");
    scanf("%d",&t);
    cont=0;
    for(int i=0;i<1000;i++){
        n[i]=cont;
        cont++;
        if(cont>=t){
            cont=0;
        }
    }
    for(int i=0;i<1000;i++){
        printf("%d ",n[i]);
    }
    */
    //9-Leia um vetor de 20, e inverta suas posições
    /*
    int n[20],segurador;
    for(int i=0;i<20;i++){
        printf("digite os 20 valores");
        scanf("%d",&n[i]);
    }
    for(int i=0;i<10;i++){
    //tradicional
      //segurador=n[i];
      //n[i]=n[19-i];
      //n[19-i]=segurador;

    //Meu jeito
    n[i]=n[i]^n[19-i];
    n[19-i]=n[i]^n[19-i];
    n[i]=n[i]^n[19-i];
    }
    for(int i=0;i<20;i++){
        printf(" N[%d]=%d",n,n[i]);
    }
    */

    //10-Vetor X substituindo zeros e negativos por 1
    /*
    int x[10];
     for(int i=0;i<10;i++){
        printf("digite os valores");
        scanf("%d",&x[i]);
    }
     for(int i=0;i<10;i++){
        if(x[i]==0 || x[i]<0){
            x[i]=1;

        }
    }
    for(int i=0;i<10;i++){
        printf(" x[%d]=%d",i,x[i]);
    }
    */
    //11- quem é menor que 0
    /*
    float A[20];
        for(int i=0;i<20;i++){
        printf("digite os valores");
        scanf("%f",&A[i]);
    }
        for(int i=0;i<20;i++){
            if(A[i]!=10){
                printf("\nA[%d]=%.1f",i,A[i]);
            }
        }
        */
    //12- metade do primeiro
    /*
    int X[20];
    printf("digite o número a ser cortado ao meio 19 vezes");
    scanf("%d",&X[0]);
    for(int i=1;i<20;i++){
        X[i]=((X[i-1])/2);
        printf("\n%d",X[i]);
    }
    */
    //-13

    int valores[15],par[5],impar[5],lista=0;
    int contpar=0,contimpar=0;
    for(int i=0;i<15;i++){
        printf("digite os valores");
        scanf("%d",&valores[i]);
    }
    for(int i=0;i<15;i++){
        if(contpar==5 || contpar==4 && i==14){
            for(int c=0;c<5;c++){
                printf("\npar[%d]=%d",c,par[c]);
            }
            contpar=0;
            lista++;
        }
        else if(contimpar==5 || contimpar==4 && i==14){
            for(int c=0;c<5;c++){
                printf("\nimpar[%d]=%d",c,impar[c]);
            }
            contimpar=0;
            lista++;
        }
        if(valores[i]%2==0){
            par[contpar]=valores[i];
            contpar++;
        }
        else if(valores[i]%2==1){
            impar[contimpar]=valores[i];
            contimpar++;
        }
        if(i==14 &&lista==2 && contpar<4 && contimpar<4){
            for(int c=0;c<contimpar;c++){
                printf("\nimpar[%d]=%d",c,impar[c]);
            }
            for(int c=0;c<contpar;c++){
                printf("\npar[%d]=%d",c,par[c]);
            }
        }
    }
    return 0;
}
