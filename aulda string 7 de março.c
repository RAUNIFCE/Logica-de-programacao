

#include <stdio.h>
#include <string.h>
int main()
{
    //contador de caracteres
    /*
    char nome[60];
    int cont=0;
    printf("informe uma palavra:\n");
    fgets(nome,60,stdin);
    for(int i=0;nome[i]!='\0';i++){
        cont++;
    }
    printf("o tamanho é : %d",strlen(nome)-1);
    */
    
    //trocar A por @
    /*
    char nome[60];
    printf("informe uma palavra:\n");
    fgets(nome,60,stdin);
    for(int i=0;i<strlen(nome);i++){
        if(nome[i]=='a' || nome[i]=='A'){
            nome[i]='@';
        }
    }
    printf("nova palavra: %s",nome);
    */
    
    //variavel pra pegar caractere de uma string e mandar para outra
    /*
    char nome[60]="ânimo, hoje é sexta feira!!";
    char destino[60];
    strcpy(destino,nome);
    printf("cópia: %s",destino);
    */
    
    //concatenar palavras
    char str1[50]="Olá, ";
    char str2[]="mundo!";
    strcat(str1,str2);
    printf("concatenando: %s",str1);
    
    return 0;
}