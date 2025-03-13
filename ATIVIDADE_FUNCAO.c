#include <stdio.h>
#include <math.h>
#include <string.h>
//função media e desvio padrão
float calcularMedia(int vetor[],int n){
    float soma=0;
    int i=0;
    for( i;i<n;i++){
        soma=soma+vetor[i];
    }
    return soma/n;
}

float calcularDesvioPadrao(int vetor[],int n, float media){
    int i=0;
    float somatorio=0;
    for(i;i<n;i++){
        float temp=(vetor[i]-media) * (vetor[i]-media);
        somatorio=somatorio+temp;
    }
    float mediageral=somatorio/n;
    float dp=sqrt(mediageral);
    return dp;
}
int ContarVogais(char str[] ){
    
    int cont=0;
    int vogais=0;
   

    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vogais++;
        }
    }
    
    return vogais;
}
int ContarConsoante(char str[] ){
    
    int cont=0;
    int consoantes=0;
   

    for(int i=0;i<strlen(str);i++){
        if(str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='j'||str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='v'||str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z'){
            consoantes++;
        }
    }
    
    return consoantes;
}
int main()
{
    //1º questão
    /*
   int n=0;
   
   float media=0,desvioP=0;
   printf("informe um tamanho:\n");
   scanf("%d",&n);
   int vetor[n];
   for( int i=0;i<n;i++){
        printf("informe um valor:\n");
        scanf("%d",&vetor[i]);
        printf("%d\n",i);
   }
    media=calcularMedia(vetor,n);
    desvioP=calcularDesvioPadrao(vetor,n,media);
    printf("Média:%.2f, Desvio padrão %.2f",media,desvioP);
    */
    
    //2º questão
    int consoante;
    int vogal;
    char str[50];
    printf("informe a palavra pra contar suas vogais\n");
    scanf("%s",str);
    for(int i = 0; str[i]; i++){
    str[i] = tolower(str[i]);
    }
    
    vogal=ContarVogais(str);
    printf(" vogais %d",vogal);
    consoante=ContarConsoante(str);
    printf(" consoantes %d",consoante);
    
    
    
    return 0;
}