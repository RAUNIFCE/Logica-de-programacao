#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
    int valor;
    printf("digite um n�mero.");
    scanf("%d", &valor);

      if(valor>10 && valor%5==0){
          printf("esse numero atende as condi��es.");
      }
      else{
          printf("esse  n�o atende as condi��es.");
      }
    return 0;
}
