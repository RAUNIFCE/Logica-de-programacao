#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese" );
    float temp,ntemp;
    printf("digite um valor em graus celsius\n");
    scanf("%f",&temp);
    if(temp<20){
          ntemp=temp*9/5;
          printf("sua nova temperatura é %f fahrenheit.",ntemp);
      }
      else{
          ntemp=temp+273,15;
          printf("sua nova temperatura é %f kelvin.",ntemp);
      }
    return 0;
}
