#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //1º da atividade string iniciais com codigos secretos
    /*
    char crpyt[50];
    char iniciais[50];
    int i=0;
    int ii=0;
    printf("digite um codigo de iniciais\n");
    fgets(crpyt,50,stdin);
    while(i<50){
      if(crpyt!=' ' && crpyt[i+1]!=' ' && crpyt[i-1]==' ' ){
        iniciais[ii]=crpyt[i];
        ii++;
      }

      else if(i==0 && crpyt!=' ' && crpyt[i+1]!=' ' ){
       iniciais[ii]=crpyt[i];
       ii++;
      }
      i++;
    }
    for(int turno=0;turno<50;turno++){
        if(iniciais[turno]!=' '){
            printf("%c",iniciais[turno]);
        }
    }
    */
    // jeito da professora
    /*
    int cont=0;
    char p[50];
    printf("informe uma frase:\n");
    fgets(p,50,stdin);
    for(int i=0;i<strlen(p);i++){
        if(p[i]==' '){
            cont=0;
            continue;
        }
        else{
            if(cont==0){
                printf("%c",p[i]);
                cont=1;
            }
        }
    }
    */
    //2º Setença dançante
    /*
    char palavra[50];
    int cont=0;
    printf("informe uma frase:\n");
    fgets(palavra,50,stdin);
    for(int i=0;i<strlen(palavra);i++){
        if(palavra[i]!=' ' && cont==0){
            palavra[i]=toupper(palavra[i]);
            cont=1;
        }
        else if(palavra[i]!=' ' && cont==1){
            palavra[i]=tolower(palavra[i]);
            cont=0;
        }
    }
    printf("%s",palavra);
    */
    //3º Criptografia
    char str[50];
    int n=0 ;
    printf("informe uma palavra:\n");
    fgets(str,50,stdin);
    n=strlen(str)-1;
    //printf("%d",n);
    int crypt[n];
    for(int i=0;i<n;i++){
        crypt[i]=str[i];
        //printf(" %c",crypt[i]);
    }
    //primeira passada
    for(int i=0;i<n;i++){
        if(91>crypt[i] && crypt[i]>64 || 123>crypt[i] && crypt[i]>96){
        crypt[i]=crypt[i]+3;
        }
        //printf(" %c",crypt[i]);
    }
    //Segunda passada
    int metade;
    int segurador;
    metade=n/2;
    for(int i=0;i<metade;i++){
        segurador=crypt[i];
        crypt[i]=crypt[n-i-1];
        crypt[n-i-1]=segurador;
    }
    /* //verificação da passada
    for(int i=0;i<n;i++){
    printf("%c",crypt[i]);
    }
    */
    //terceira Passada
    for(int i=metade;i<n;i++){
        crypt[i]=crypt[i]-1;
    }

     for(int i=0;i<n;i++){
    printf("%c",crypt[i]);
    }
    return 0;
}
