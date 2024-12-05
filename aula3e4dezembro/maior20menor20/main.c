#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL,"portuguese" );
    int n1,n2,total;
    printf("digite o 1° valor \n");
    scanf("%d",&n1);
    printf("digite o 2° valor \n");
    scanf("%d",&n2);
    total=n1+n2;
    if(total>20){
    total=total+8;
    printf("%d",total);
    }
    else{
    total-=5;
    printf("%d",total);
    }
    return 0;
}
