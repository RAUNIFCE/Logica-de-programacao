#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
    int valor,novo;
    printf("digite um n�mero inteiro sem ser zero.\n");
    scanf("%d", &valor);
    if(valor%2==0 && valor!=0){
          novo=valor*2;
          printf("seu novo valor � %d",novo);
      }
      else{
          novo=valor*3;
          printf("seu novo valor � %d",novo);
      }
    return 0;
}
