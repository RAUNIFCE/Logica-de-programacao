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

    //Maior que 10 e divisível por 5

    /*
    int valor;
    printf("digite um número.");
    scanf("%d", &valor);

      if(valor>10 && valor%5==0){
          printf("esse numero atende as condições.");
      }
      else{
          printf("esse  não atende as condições.");
      }
    */
    //500 conto dá desconto
    /*
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
    */
    //par dobro e impar triplo
    /*
    int valor,novo;
    printf("digite um número inteiro sem ser zero.\n");
    scanf("%d", &valor);
    if(valor%2==0 && valor!=0){
          novo=valor*2;
          printf("seu novo valor é %d",novo);
      }
      else{
          novo=valor*3;
          printf("seu novo valor é %d",novo);
      }
    */
    //conversor de farenheit
    /*
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
      printf("o veículo tá de boa,relaxe.");
    }
    */

    //desconto para anciões
    /*
    float ingresso,valorf;
    int idade;
    printf("Digite o valor do ingresso\n");
    scanf("%f", &ingresso);
    printf("qual a sua idade? \n");
    scanf("%d", &idade);
    if(idade>60){
          valorf=ingresso*0.7;
          printf("teu ingresso agora é R$%.2f",valorf);
      }
      else{
          valorf=ingresso*0.9;
          printf("teu ingresso agora é  R$%.2f",valorf);
      }
    */
    //aprovado e recuperação

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
          printf("aprovado com recuperação");
      }
      else{
          printf("Reprovado.");
      }
    }
    */

    //maior q 20 e menor q 20
    /*
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
    */


    //emprestimo salario


    /*
    float salario,prestacao;
    printf("Digite o valor do salario\n");
    scanf("%f",&salario);
     printf("Digite o valor da prestação\n");
    scanf("%f",&prestacao);
    if(salario*1.2>=prestacao){
        printf("prestação concedida");
    }
    else{
         printf("prestação negada");
    }
    */
    //maior e menor valor
    /*
    int va,vb;
    printf("digite dois numeros");
    scanf("%d %d",&va,&vb);
    if(va>vb){
        printf("o primeiro é maior");
    }
    else if(vb>va){
        printf("o segundo é maior");
    }
    else{
        printf("Ambos são iguais");
    }
    */

    //quatro valores maior menor

    /*
    int va,vb,vc,vd;
    printf("digite quatro numeros");
    scanf("%d %d %d %d",&va,&vb,&vc,&vd);
    if(va>vb && va>vc && va>vd){
        if(vb<vc && vb<vd){
            printf(" %d é maior e %d é menor",va,vb);
        }
        if(vc<vb && vc<vd){
            printf(" %d é maior e %d é menor",va,vc);
        }
        if(vd<vb && vd<vc){
            printf(" %d é maior e %d é menor",va,vd);
        }
        }

    else if(vb>va && vb>vc && vb>vd){
        if(va<vc && va<vd){
            printf(" %d é maior e %d é menor",vb,va);
        }
        if(vc<va && vc<vd){
            printf(" %d é maior e %d é menor",vb,vc);
        }
        if(vd<va && vd<vc){
            printf(" %d é maior e %d é menor",vb,vd);
        }
     }

    else if(vc>va && vc>vb && vc>vd){
        if(va<vb && va<vd){
            printf(" %d é maior e %d é menor",vc,va);
        }
        if(vb<va && vb<vd){
            printf(" %d é maior e %d é menor",vc,vb);
        }
        if(vd<va&& vd<vb){
            printf(" %d é maior e %d é menor",vc,vd);
        }
    }

    else if(vd>va && vd>vb && vd>vc){
        if(va<vb && va<vc){
            printf(" %d é maior e %d é menor",vd,va);
        }
        if(vb<va && vb<vc){
            printf(" %d é maior e %d é menor",vd,vb);
        }
        if(vc<va && vc<vb){
            printf(" %d é maior e %d é menor",vd,vc);
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
    printf("qual seu gênero? \n 1- Masculino \n 2- Feminino \n ");
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
