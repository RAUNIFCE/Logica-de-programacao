#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese" );

    //Peso e altura fixos
    /*
    float peso,altura;
    peso=68.5;
    altura=1.75;
    printf("Altura: %.2f metros e Peso %.2f kg\n",altura,peso);
    */

    //variavel double
    /*
    double num1,num2,resultado;
    num1=5.0;
    num2=2.0;
    resultado=num1/num2;
    printf("O resultado da divisão é %.2f",resultado);
    */

    // Soma de números
    /*
    float num1,num2,soma;
    printf("Digite o primeiro e o segundo número");
    scanf("%f %f",&num1,&num2);
    soma=num1+num2;
    printf("A soma de %.1f e %.1f é %.1f",num1,num2,soma);
    */

    //area de triangulo
    /*
    float base,altura,area;
    printf("Digite a base e a altura");
    scanf("%f %f",&base,&altura);
    area=(base*altura)/2;
    printf("A area é %.1f",area);
    */

    //conversor de metros em centímetros

    /*
    float metro,cm;
    printf("Digite o valor em metros");
    scanf("%f",&metro);
    cm=metro*100;
    printf("%.2f metros equivale a %.2f centímetros",metro,cm);
    */
    //media de alunos

    /*
    float n1,n2,n3,media;
    printf("Digite as três notas");
    scanf("%f %f %f",&n1,&n2,&n3);
    media=(n1+n2+n3)/3;
    printf("A média é %.2f",media);
    */

    //preço de produto e quantidade
    /*
    float preco,total;
    int qtd;
    printf("digite o preço do produto");
    scanf("%f",&preco);
    printf("digite a quantidade");
    scanf("%d",&qtd);
    total=preco*qtd;
    printf("o total é R$ %.2f",total);
    */

    //Cálculo de salário
    float horas,valorh,total;
    printf("digite o valor do seu salário em horas");
    scanf("%f",&valorh);
    printf("digite a quantidade de horas trabalhadas");
    scanf("%f",&horas);
    total=horas*valorh;
    printf("seu salário é de R$ %.2f",total);

    return 0;
}
