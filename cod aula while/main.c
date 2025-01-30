#include <stdio.h>

int main()
{
    //program fecha depois de 5 pares
    /*
    int n,x=0;
    int cont=1;
    while(cont!=0){
        printf("informe um valor");
        scanf("%d",&n);
       
        if(n%2==0){
            x++; 
            if(x>=5){
                cont=0;
            }
        }
    }
    */
    //exiba a media depois de 3 valores usando while
    /*
    int n,soma=0;
    int cont=0;
    while(cont<3){
        printf("informe um valor");
        scanf("%d",&n);
        cont++;
        soma+=n;
    }
    float media=soma/3;
    printf("%.1f",media);
    */
    //peça 6 valores e some os que são maiores de 10
    /*
    int n,soma=0;
    int cont=0;
    while(cont<6){
        printf("informe um valor");
        scanf("%d",&n);
        cont++;
        if(n>10){
        soma+=n;
        }
    }
    printf("%d",soma);
    */
    //multiplas somas e para no 0
    /*
    int n,soma=0;
    int cont=1;
    float divi;
    while(cont!=0){
        printf("informe um valor");
        scanf("%d",&n);
        soma+=n;
        cont++;
        if(n==0){
            divi=cont-2;
            cont=0;
        }
    }
    float media=soma/divi;
    printf("%.1f",media);
    */
    // informe valores e só pare quando inserir 3 impares ou a soma deles for maior que 25
    int n,soma=0,impar=0;
    int cont=1;
    while(cont!=0){
        printf("informe um valor");
        scanf("%d",&n);
        if(n%2!=0){
            impar++;
        }
        soma+=n;
        if(soma>24){
        cont=0;
        }
        
        if(impar>2){
        cont=0;
        }
        
    }
    
    
    
    
    return 0;
}