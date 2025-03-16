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

 void interseccao(int v1[], int v2[], int resultado[], int n){
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v1[i]==v2[j]){
                resultado[p]=v1[i];
                p++;
                break;
            }
        }
    }
 }

void imprimirResultado(int resultado[],int n){
printf("valores da interseccao\n");
    for(int i=0;i<n;i++){
        if(resultado[i]==0){
           break;
        }
        else{
           printf(" %d",resultado[i]);
        }
    }
}
void rotacionarVetor(int vetor[], int n, int k){
    n=n-1;
    int a,b;
    for(int j=0;j<k;j++){
    a=0;
    b=1;
    for(int i=0;i<n;i++){
        vetor[n-a]=vetor[n-a] ^ vetor[n-b];
        vetor[n-b]=vetor[n-a] ^ vetor[n-b];
        vetor[n-a]=vetor[n-a] ^ vetor[n-b];
        a+=1;
        b+=1;
        }
    }
}
void substituirCaractere(char str[],char antigo,char novo){
    for(int i=0;str[i]!='\0';i++){
    if(str[i]==antigo){
        str[i]=novo;
    }
    }
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
    /*
    int consoante;
    int vogal;
    char str[50];
    printf("informe a palavra pra contar suas vogais\n");
    fgets(str,50,stdin);
    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }

    vogal=ContarVogais(str);
    printf(" vogais %d",vogal);
    consoante=ContarConsoante(str);
    printf(" consoantes %d",consoante);
    printf("%s",str);
    */

    //3º questao comparadora de vetores
    /*
   int n=5;
    int v1[]={10,5,2,8,7};
    int v2[]={9,1,7,10,3};
    int resultado[5]={0};
    interseccao(v1,v2,resultado,n);
    imprimirResultado(resultado,n);
    */

    //4º questao rotacionar vetores
    /*
    int n;
    printf("digite o tamanho do vetor");
    scanf("%d",&n);
    int vetor[n];
    int k;
    for(int i=0;i<n;i++){
        printf("Digite o %dº valor do vetor",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("digite o numero de rotações");
    scanf("%d",&k);
    rotacionarVetor(vetor,n,k);
    for(int i=0;i<n;i++){
        printf("[%d]",vetor[i]);
    }
    */
    //5º troca de palavras
    char str[100],antigo,novo;
    printf("informe a palavra\n");
    scanf("%s",&str);
    printf("informe o caractere original\n");
    scanf(" %c",&antigo);
    printf("informe o caractere novo\n");
    scanf(" %c",&novo);
    substituirCaractere(str,antigo,novo);
    printf("a nova palavra é:\n %s",str);
    return 0;
}
