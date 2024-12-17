#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese" );

// programa a vista 10 de desconto e a prazo 5 de juros
/*
    int vr;
    float valor;
    printf("digite o valor");
    scanf("%f",&valor);
    printf("escolha o meio de pagamento \n 1 - a vista \n 2 - parcelado 2 vezes \n parcelado 3 - vezes ou mais");
    scanf("%d",&vr);
    if(vr==1){
        valor=0.9*valor;
        printf("o valor total sera:%f",valor);
    }
     else if(vr==2){

        printf("o valor total sera:%f",valor);
    }
     else if(vr==3){
        valor=1.05*valor;
        printf("o valor total sera:%f",valor);
    }*/
 //Calculadora de imc
    /*
    float peso,altura,imc;
    printf("digite seu peso");
    scanf("%f", &peso);
    printf("digite sua altura em metros");
    scanf("%f", &altura);
    imc=(peso/(altura*altura));
    if(imc<=18.5){
        printf("abaixo do peso%f",imc);
    }
    else if(18.5<imc && imc<24.9){
         printf("peso normal%f",imc);
    }
     else if(25<imc && imc<29.9){
         printf("sobrepeso%f",imc);
    }
     else if(imc>=30){
         printf("obesidade %f",imc);
    }
    */
    //cálculo de nota de aluno
    /*

    float n1,n2,n3,media;
    printf("digite as três notas do aluno");
    scanf("%f %f %f" ,&n1 ,&n2, &n3);
    media=(n1+n2+n3)/3;
    if(media>=7){
        printf("aprovado");
    }
     else if(media>=5 && media<7){
         printf("recuperação");
    }
     else if(media<5){
         printf("reprovado");
    }
    */
    //Saber se número é par ou impar
    /*
    int n1,n2,n1v,n2v;
    printf("digite dois números inteiros");
    scanf("%d %d" ,&n1 ,&n2);
    n1v=n1%2;
    n2v=n2%2;

    if(n1v==0 && n2v==0){
        printf("Ambos são pares");
    }
     else if(n1v!=0 && n2v!=0){
         printf("Ambos são ímpares");
    }
     else{
         printf("um é par e outro é ímpar");
    }
    */
    //avaliação de triângulo
    /*
    float l1,l2,l3;
    printf("digite três valores para um triângulo");
    scanf("%f %f %f",&l1,&l2,&l3);
    if((l1+l2)>l3 && (l2+l3)>l1 && (l1+l3)>l2){

            if(l1==l2 && l2==l3 && l1==l3){
                printf("seu triângulo é equilátero");
            }
            else if(l1==l2 && l2!=l3 && l1!=l3){
                printf("seu triângulo é isóceles");
    }
            else if(l2==l3 && l2!=l1 && l1!=l3){
                printf("seu triângulo é isóceles");
    }
            else if(l1==l3 && l2!=l3 && l1!=l2){
                printf("seu triângulo é isóceles");
    }
    }


} */

     //Calculo de aposentadoria
    /*
    int idade,anost;
    printf("Digite seu a idade e depois os anos trabalhados");
    scanf("%d %d",&idade,&anost);
    if(idade>=65){
        printf("você pode se aposentar por idade");
    }
    else if(anost>=30){
        printf("você pode se aposentar por anos trabalhados");
    }
        else if(anost>=25 && idade>=60){
        printf("você pode se aposentar por anos trabalhados e pela idade");
    }
    else{
        printf("você não pode se aposentar");
    }   */

    //tres numeros inteiros e ordem crescente

    /*
    int n1,n2,n3;
    printf("digite três numeros");
    scanf(" %d %d %d",&n1,&n2,&n3);
    if (n1>=n2 && n1>=n3){
        if (n2>=n3){
            printf("%d %d %d",n1,n2,n3);
        }
        else {
            printf("%d %d %d",n1,n3,n2);
        }
    }

    else if (n2>=n1 && n2>=n3){
        if (n1>=n3){
            printf("%d %d %d",n2,n1,n3);
        }
        else {
            printf("%d %d %d",n2,n3,n1);
        }
    }

   else if (n3>=n2 && n3>=n1){
        if (n2>=n1){
            printf("%d %d %d",n3,n2,n1);
        }
        else {
            printf("%d %d %d",n3,n1,n2);
        }
    }
    */
    //tabela peso altura
    /*
    float altura,peso,classificacao;
    printf("digite seu peso e sua altura em metros com vírgula\n");
    scanf("%f %f",&peso,&altura);

    if (peso<60){
        if(altura<1.2){
           printf("classificação A");
        }
        else if(altura>=1.2 && altura<=1.7){
            printf("classificação B");
        }
        else if(altura>1.7){
             printf("classificação C");
        }
    }
    else if (peso>=60 && peso<=90){

        if(altura<1.2){
           printf("classificação D");
        }
        else if(altura>=1.2 && altura<=1.7){
            printf("classificação E");
        }
        else if(altura>1.7){
             printf("classificação F");
        }
        }

    else if (peso>90){
        if(altura<1.2){
           printf("classificação G");
        }
        else if(altura>=1.2 && altura<=1.7){
            printf("classificação H");
        }
        else if(altura>1.7){
             printf("classificação I");
        }
    }
    */

    //conceito de aluno
    /*
    float nota;
    int falta;
    printf("digite a nota do aluno e em seguida suas faltas");
    scanf("%f %d",&nota,&falta);
    if(falta<=20){
        if(nota>=9 && nota<=10){
            printf("seu conceito é A");
        }

        else if(nota>=7.5 && nota<9){
            printf("seu conceito é B");
        }

        else if(nota>=5 && nota<7.5){
            printf("seu conceito é C");
        }

        else if(nota>=4 && nota<5){
            printf("seu conceito é D");
        }

        else if( nota<4){
            printf("seu conceito é E");
        }
    }
    else if(falta>20){
        if(nota>=9 && nota<=10){
            printf("seu conceito é B");
        }

        else if(nota>=7.5 && nota<9){
            printf("seu conceito é C");
        }

        else if(nota>=5 && nota<7.5){
            printf("seu conceito é D");
        }

        else if(nota>=4 && nota<5){
            printf("seu conceito é E");
        }

        else if( nota<4){
            printf("seu conceito é E");
        }
    }
    */
    //Tarifa de parque

    int h1,mn1,h2,mn2;
    int minutostotais1,minutostotais2;
    int diferenca,resto,horatotal;
    float valortotal;
    printf("Digite a hora e o minuto de entrada\n");
    scanf("%d %d",&h1 ,&mn1);
    printf("Digite a hora e o minuto de saida\n");
    scanf("%d %d",&h2, &mn2);
    minutostotais1=(h1*60)+mn1;
    minutostotais2=(h2*60)+mn2;
    diferenca=minutostotais2-minutostotais1;
    resto=diferenca%60;
    horatotal=diferenca/60;
    if(h2<h1){
        diferenca=(minutostotais2-minutostotais1)+1440;
        horatotal=(24-h1+h2);
        resto=horatotal*60;

        if(diferenca<121 && diferenca>0){
        if (resto>0){
        valortotal=horatotal;
        printf("%f reais",valortotal);}
        else {
        valortotal=horatotal*1;
        printf("%f real",valortotal);}
    }
    else if(diferenca>=121 && diferenca<241){
        if (resto>0){
        valortotal=(((horatotal-1)*1.40)+2) ;
        printf("%f reais",valortotal);}
        else {
        valortotal=(((horatotal-2)*1.40)+2) ;
        printf("%f reais",valortotal);}
    }
    else if(diferenca>=241 && diferenca>0){

         if (resto>0){
       valortotal=(((horatotal-3)*2.00)+4.8);
        printf("%f reais",valortotal);}

        else {
      valortotal=(((horatotal-4)*2.00)+4.8);
        printf("%f reais",valortotal);}

    }
    }
    else{
    if(diferenca<121 && diferenca>0){
        if (resto>0){
        valortotal=1+horatotal;
        printf("%f reais",valortotal);}
        else {
        valortotal=horatotal*1;
        printf("%f real",valortotal);}
    }
    else if(diferenca>=121 && diferenca<241){
        if (resto>0){
        valortotal=(((horatotal-1)*1.40)+2) ;
        printf("%f reais",valortotal);}
        else {
        valortotal=(((horatotal-2)*1.40)+2) ;
        printf("%f reais",valortotal);}
    }
    else if(diferenca>=241 && diferenca>0){

         if (resto>0){
       valortotal=(((horatotal-3)*2.00)+4.8);
        printf("%f reais",valortotal);}

        else {
      valortotal=(((horatotal-4)*2.00)+4.8);
        printf("%f reais",valortotal);}

    }
    }
    return 0;
}
