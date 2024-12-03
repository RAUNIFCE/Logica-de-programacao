#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
    float valor;

    int resposta;
    printf("Digite o valor da compra\n");
    scanf("%f", &valor);
    printf("vai pagar à vista? \n0 se não.\n1 se sim.\n");
    scanf("%d", &resposta);
    if(valor>500 && resposta==1){
          printf("vc tem desconto.");
      }
      else{
          printf("sem deconto colega.");
      }
    return 0;
}
