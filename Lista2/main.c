#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{

    setlocale(LC_ALL,"portuguese" );
    // IMC
    /*
    float altura,peso,resultado;
    printf("digite sua altura em metros.\n");
    scanf("%f", &altura);
    printf("digite seu peso\n");
    scanf("%f", &peso);
    resultado=peso/(altura*altura);
    if(18.5<resultado && resultado<24.9)
    {
        printf("peso normal.");
    }
    else
    {
        printf("fora do peso normal.");
    }
    */

    //Maior que 10 e divis�vel por 5

    /*
    int valor;
    printf("digite um n�mero.");
    scanf("%d", &valor);

      if(valor>10 && valor%5==0){
          printf("esse numero atende as condi��es.");
      }
      else{
          printf("esse  n�o atende as condi��es.");
      }
    */
    //500 conto d� desconto
    /*
    float valor;
    int resposta;
    printf("Digite o valor da compra\n");
    scanf("%f", &valor);
    printf("vai pagar � vista? \n0 se n�o.\n1 se sim.\n");
    scanf("%d", &resposta);
    if(valor>500 && resposta==1){
          printf("vc tem desconto.");
      }
      else{
          printf("sem deconto colega.");
      }
    */
    //par dobro e impar triplo
    /*
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
    */
    //conversor de farenheit
    /*
    float temp,ntemp;
    printf("digite um valor em graus celsius\n");
    scanf("%f",&temp);
    if(temp<20){
          ntemp=temp*9/5;
          printf("sua nova temperatura � %f fahrenheit.",ntemp);
      }
      else{
          ntemp=temp+273,15;
          printf("sua nova temperatura � %f kelvin.",ntemp);
      }
    */

    //multa de velocidade
    /*
    int speed,multa;
    printf("digite  valor capturado\n");
    scanf("%d", &speed);
    if(speed>80){
      multa=(speed-80)*5;
      printf("multa de R$%d.00",multa);
    }
    else{
      printf("o ve�culo t� de boa,relaxe.");
    }
    */

    //desconto para anci�es
    /*
    float ingresso,valorf;
    int idade;
    printf("Digite o valor do ingresso\n");
    scanf("%f", &ingresso);
    printf("qual a sua idade? \n");
    scanf("%d", &idade);
    if(idade>60){
          valorf=ingresso*0.7;
          printf("teu ingresso agora � R$%.2f",valorf);
      }
      else{
          valorf=ingresso*0.9;
          printf("teu ingresso agora �  R$%.2f",valorf);
      }
    */
    //aprovado e recupera��o

    /*
    float nota1,nota2,nota3,resultado;
    printf("digite a primeira nota\n");
    scanf("%f",&nota1);
    printf("digite a segunda nota\n");
    scanf("%f",&nota2);
    resultado=(nota1+nota2)/2;

    if(resultado>=7){

     printf("aprovado");
    }

    else{

        printf("digite a terceira nota\n");
        scanf("%f",&nota3);
        resultado=(nota1+nota2+nota3)/3;
        if(resultado>=5)
            {
          printf("aprovado com recupera��o");
      }
      else{
          printf("Reprovado.");
      }
    }
    */

    //maior q 20 e menor q 20
    /*
    int n1,n2,total;
    printf("digite o 1� valor \n");
    scanf("%d",&n1);
    printf("digite o 2� valor \n");
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
    */


    //emprestimo salario


    /*
    float salario,prestacao;
    printf("Digite o valor do salario\n");
    scanf("%f",&salario);
     printf("Digite o valor da presta��o\n");
    scanf("%f",&prestacao);
    if(salario*1.2>=prestacao){
        printf("presta��o concedida");
    }
    else{
         printf("presta��o negada");
    }
    */
    //maior e menor valor
    /*
    int va,vb;
    printf("digite dois numeros");
    scanf("%d %d",&va,&vb);
    if(va>vb){
        printf("o primeiro � maior");
    }
    else if(vb>va){
        printf("o segundo � maior");
    }
    else{
        printf("Ambos s�o iguais");
    }
    */

    //quatro valores maior menor

    /*
    int va,vb,vc,vd;
    printf("digite quatro numeros");
    scanf("%d %d %d %d",&va,&vb,&vc,&vd);
    if(va>vb && va>vc && va>vd){
        if(vb<vc && vb<vd){
            printf(" %d � maior e %d � menor",va,vb);
        }
        if(vc<vb && vc<vd){
            printf(" %d � maior e %d � menor",va,vc);
        }
        if(vd<vb && vd<vc){
            printf(" %d � maior e %d � menor",va,vd);
        }
        }

    else if(vb>va && vb>vc && vb>vd){
        if(va<vc && va<vd){
            printf(" %d � maior e %d � menor",vb,va);
        }
        if(vc<va && vc<vd){
            printf(" %d � maior e %d � menor",vb,vc);
        }
        if(vd<va && vd<vc){
            printf(" %d � maior e %d � menor",vb,vd);
        }
     }

    else if(vc>va && vc>vb && vc>vd){
        if(va<vb && va<vd){
            printf(" %d � maior e %d � menor",vc,va);
        }
        if(vb<va && vb<vd){
            printf(" %d � maior e %d � menor",vc,vb);
        }
        if(vd<va&& vd<vb){
            printf(" %d � maior e %d � menor",vc,vd);
        }
    }

    else if(vd>va && vd>vb && vd>vc){
        if(va<vb && va<vc){
            printf(" %d � maior e %d � menor",vd,va);
        }
        if(vb<va && vb<vc){
            printf(" %d � maior e %d � menor",vd,vb);
        }
        if(vc<va && vc<vb){
            printf(" %d � maior e %d � menor",vd,vc);
        }
     }
    */

    //Positivo raiz,negativo quadrado
    /*
    float num1,result;
    printf("digite um valor \n");
    scanf("%f",&num1);
    if(num1>0){
        result= sqrt( num1 );
        printf("%f",result);
    }
    else if(num1<0){
        result=num1*num1;
         printf("%f",result);
    }
    */
    // conta com altura de homem e mulher
    /*
    int cod;
    float altura,result;
    printf("qual sua altura?");
    scanf("%f",&altura);
    printf("qual seu g�nero? \n 1- Masculino \n 2- Feminino \n ");
    scanf("%d",&cod);
    if(cod==1){
        result=(72.7*altura)-58;
        printf("o valor total sera:%f",result);
    }
     else if(cod==2){
        result=(62.1*altura)-44.7;
        printf("o valor total sera:%f",result);
    }
    */

    //nota de aluno
    float n1,n2,n3,result;
    printf("digite as tres notas");
    scanf("%f %f %f",&n1,&n2,&n3);
    result=(n1+n2+(n3*2))/4;
    if(result>=6){
        printf("aprovado");
    }
    else if (result<6){
        printf("reprovado");
    }



    return 0;
}
