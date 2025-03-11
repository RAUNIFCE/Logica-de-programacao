#include <stdio.h>

//declaração de funções
int soma(int n1,int n2){
    return n1+n2;
}
int subtrair(int n1,int n2){
    return n1-n2;
}
float media(float numerador,int divisor){
    float media;
    if(divisor>0){
        media=numerador/divisor;
    }
    else{
        printf("erro");
    }
    return media;
}
float somarNotas(float n1,float n2){
    return n1+n2;
}
int digitos(int n1){
    int digitos=1;
    while(n1/10>0){
        n1=n1/10;
        digitos+=1;
    }
    
    return digitos;
}
//procedimentos
void imprimirVetor(int v[5]){
    printf("-----vetor-----");
    for(int i=0;i<5;i++){
        printf("\n%d",v[i]);
    }
}
void paridade(int n1){
    if(n1 & 1){
        printf("é ímpar\n");
    }
    else{
        printf("é par\n");
    }
}

int main()
{
    /*
    int resultado;
    int v[5]={5,10,15,20};
    resultado=soma(15,21);
    printf("resultado soma:%d\n",resultado);
    resultado=soma(45,27);
    printf("resultado soma:%d\n",resultado);
    resultado=soma(15,21);
    printf("resultado subtracao:%d\n",subtrair(66,15));
    printf("resultado subtracao:%d\n",subtrair(91,11));
    imprimirVetor(v);
    */
    //chamar função somar notas
    /*
    float notas,m;
    notas=somarNotas(8.5,7.1);
    m=media(notas,2);
    printf("Media final %.2f",m);
    */
    //paridade
    /*
    int n;
    while(1){
        printf("informe um numero:\n");
        scanf("%d",&n);
        if(n<0){
            break;
        }
        else{
            paridade(n);
        }
    }
    */
    //contador de dígitos com função
    printf("%d digitos",digitos(100345));
    
    
    return 0;
}