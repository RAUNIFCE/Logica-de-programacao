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
    return 0;
}
