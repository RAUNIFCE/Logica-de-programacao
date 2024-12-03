
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
     int speed,multa;
  printf("digite  valor capturado\n");
  scanf("%d", &speed);
  if(speed>80){
      multa=(speed-80)*5;
      printf("multa de R$%d.00",multa);
  }
  else{
      printf("o veículo tá de boa,relaxe.");
  }
    return 0;
}
