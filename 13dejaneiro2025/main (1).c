#include <stdio.h>

int main()
{
    char operador;
    float num1,num2;
    
    printf("Digite um operador (+,-,*,/)\n");
    scanf( "%c",&operador);
    
    printf("Digite dois números\n");
    scanf( "%f %f",&num1,&num2);
    
    switch(operador){
        case '+':
            printf("O resultado da soma: %.2f",num1+num2);
            break;
         case '-':
            printf("O resultado da subtracao: %.2f",num1-num2);
            break;
         case '*':
            printf("O resultado da multiplicacao: %.2f",num1*num2);
            break;
         case '/':
            if(num2!=0){
            printf("O resultado da divisao: %.2f",num1/num2);
            break;
            }
            else{
            printf(" não se pode dividir por zero");
            break;
            }
        default:
            printf(" operacao invalida");
    }
    

    return 0;
}