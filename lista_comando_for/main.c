#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"portuguese" );


    // tabuada do 7
    /*
    for(int i=1;i<=10;i++){
        printf("7 x %d = %d \n",i,7*i);
    } */

    //tabuada de qualquer n�mero escolhido pelo us�rio
    /*
    int num;
    printf("digite um n�mero para exibir sua tabuada");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d \n",num,i,num*i);
    } */
    // n�meros �mpares entre 100 e 300
    /*
    int impar;
    for(int i=100;i<=300;i++){
        if(i%2==1){

            impar=impar+1;
        }
    }
    printf("existem %d n�meros impares entre 100 e 300 \n",impar);
    */
    // valor de 10 compras
    /*
    int valor;
    float soma=0;
    float media;
    int i=1;
    float max;
    float min;
    for( ;i<=10;i++){
        printf("digite o valor da %d� compra \n",i);
        scanf("%d",&valor);
        if(i==1){
        max = valor;
        min=valor;
        }
        if(valor>max){
            max=valor;
        }
        if(valor<min){
            min=valor;
        }
        soma=valor+soma;
    }
    media=(soma/(i-1));
    printf("a media das compras foi: %.2f \no maior valor foi %.2f \no menor valor foi %.2f\na diferen�a � %.2f",media,max,min,max-min);
    */
    //altura e peso de 5 pessoas
    /*
    int idade,mais50anos=0,menos60kg=0,entre1e2=0;
    float alt,peso;
    for(int i=1;i<=5;i++){
    printf("digite o peso da %d� pessoa\n",i);
    scanf("%f",&peso);
    printf("digite a altura da %d� pessoa \n",i);
    scanf("%f",&alt);
    printf("digite a idade da %d� pessoa \n",i);
    scanf("%d",&idade);
    if(idade>50){
        mais50anos=mais50anos+1;
    }
    if(peso<60){
        menos60kg=menos60kg+1;
    }
    if(alt>1 && alt<2){
        entre1e2=entre1e2+1;
    }

    }
    printf("temos %d pessoas com +60 anos\n %d pessoas com menos de 60kg \n %d pessoas entre 1 metro e 2 metros",mais50anos,menos60kg,entre1e2);
    */
    //Leitor de n�meros inteiros
    /*
    int valor;
    float soma=0;
    float media;
    int i=1;
    float max;
    float min;
    for( ;i<=10;i++){
        printf("digite o valor do %d� n�mero \n",i);
        scanf("%d",&valor);
        if(i==1){
        max = valor;
        min=valor;
        }
        if(valor>max){
            max=valor;
        }
        if(valor<min){
            min=valor;
        }
        soma=valor+soma;
    }
    media=(soma/(i-1));
    printf("a media das compras foi: %.2f \no maior valor foi %.2f \no menor valor foi %.2f\n  ",media,max,min);
    */
    //codigos de loja
    /*
    int vista=0,prazo=0,total=0,valor;
    char cod;
    int i=1;
    for( ;i<=10;i++){
        printf("digite o c�digo da %d� compra  \n",i);
        scanf(" %c",&cod);
        printf("digite o valor da %d� compra  \n",i);
        scanf("%d",&valor);
        if(cod=='p'){
            prazo=prazo+valor;
        }
        if(cod=='v'){
            vista=vista+valor;
        }
        total=total+valor;
    }
    printf("temos R$%d � prazo, R$%d � vista e total ficou R$%d  ",prazo,vista,total);
    */
    //Prefeitura coletando dados
    /*
    int valor=0,filho=0;
    float soma=0,somaF=0,m550=0,taxa;
    float mediaV,mediaF=0;
    int i=1;
    float maxsal=0;

    for( ;i<=10;i++){
        printf("digite o valor do salario da %d� fam�lia \n",i);
        scanf("%d",&valor);
        printf("digite o n�mero de filhos da %d� fam�lia \n",i);
        scanf("%d",&filho);
        if(valor>maxsal){
            maxsal=valor;
        }
         if(valor<550){
        m550=m550+1;
        }
        somaF=somaF+filho;
        soma=valor+soma;
    }
    taxa=(m550/(i-1)*100);
    mediaV=(soma/(i-1));
    mediaF=(somaF/(i-1));
    printf("a media de sal�rio foi %.2f \no maior sal�rio foi %.2f \na m�dia de filhos foi %.2f a taxa de pessoas com menos de 550 � %.2f%% ",mediaV,maxsal,mediaF,taxa);
    */
    //contador de positivos e negativos
    /*
    int ciclo,valor=0;
    float cnegativo=0,cpositivo=0;
    float soma=0,media=0,pn,pp;
    printf("digite quantos a quantidade de valores que voc� ir� digitar\n");
    scanf("%d",&ciclo);
    int i=1;
    for( ;i<=ciclo;i++){
        printf("digite os %d� valor \n",i);
        scanf("%d",&valor);
        soma=soma+valor;
        if(valor>0){
            cpositivo=cpositivo+1;
        }
         if(valor<0){
            cnegativo=cnegativo+1;
        }
    }
    media=(soma/(i-1));
    pn=(cnegativo/(i-1)*100);
    pp=(cpositivo/(i-1)*100);
    printf("media � %f  \n quantidade de negativos � %f \n quantidade de positivos � %f \n o percentual de positivo e negativo resp. s�o %.2f%% e %.2f%%",media,cnegativo,cpositivo,pp,pn);
    */
    //A!
    /*
    int a,multi=1;
    printf("digite o n�mero fatorial\n");
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        printf("%dx%d",multi,i);
        multi=i*multi;
        printf("=%d ",multi);
    }
    printf("o %d fatorial � %d ",a,multi);
    */
    //fibonacci
    /*
    int ciclo,soma1,soma2,soma3;
    printf("digite quantos numeros vc quer em fibonacci menor que 46\n");
    scanf("%d",&ciclo);
    for(int i=1;i<=ciclo;i++){
        if(i==1){
        soma1=0;
        soma2=1;
        soma3=1;
        printf("0");
        }

        else if(i>1 && i<=46){

        soma3=soma2+soma1;
        printf(" %d",soma3);
        soma2=soma1;
        soma1=soma3;
        }
    }
    */
    //X colunas e Y n�meros
    /*
    int x=0,y=0;
    printf("digite o quantos numeros ser�o contados\n");
    scanf("%d",&y);
    printf("digite o n�mero de colunas entre 1 e 20\n");
    scanf("%d",&x);
    for(int i=1;i<=y;i++){
    int resto;
        resto=(i%x);
        printf("%d",i);
        if(resto==0 && i!=y){
            printf("\n");
        }

        else{
            printf(" ");
        }
    }
    */
    //Leitura de X indefinidas vezes
    /*
    int x=0,s1=0,st=0,resto=0;

    for(int i=1;i>0;i++){
    printf("digite o valor a ser somado com seus 5 sucessores pares\n");
    scanf("%d",&x);
    resto=x%2;
     if(x==0){
            printf("%d\n",st);
            break;
        }
    if(resto==0){
        s1=(x*5)+20;
    }
    if(resto==1){
       s1=(x*5)+25;
    }
    st=st+s1;
    }
    */















    return 0;
}
