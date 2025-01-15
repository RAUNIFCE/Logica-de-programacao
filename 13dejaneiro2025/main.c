/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um número\n");
    scanf( "%d",&num);
    switch(num){
        case 1:
            printf("esse número equivale a domingo"); break;
        case 2:
            printf("esse número equivale a segunda");break;
        case 3:
            printf("esse número equivale a terça");break;
        case 4:
            printf("esse número equivale a quarta");break;
        case 5:
            printf("esse número equivale a quinta");break;
        case 6:
            printf("esse número equivale a sexta");break;
        case 7:
            printf("esse número equivale a sabado");break;
        default:
                    printf("vale nada não");break;

    }

    return 0;
}