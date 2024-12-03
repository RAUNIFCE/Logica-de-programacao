#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
    int valor;
    printf("digite um número.");
    scanf("%d", &valor);

      if(valor>10 && valor%5==0){
          printf("esse numero atende as condições.");
      }
      else{
          printf("esse  não atende as condições.");
      }
    return 0;
}
