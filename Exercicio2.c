/*Aluno:Bruno Rodrigues Caputo*/
/*Data:23/06/2016*/
/*Nome:Exercicio2*/
/*Comando para compilação = gcc -Wall -pedantic -o Exercicio Exercicio2.c   */
/*Comando para execução = ./Exercicio   */
#include<stdio.h>
int main(void)
{
int n;/*Número inteiro n*/
int j,i;/*contadores*/
long double numerador=1;/*Inicialização do primeiro termo do numerador*/
long double denominador=2;/*Inicialização do primeiro termo do denominador*/
long double potNum=1;/*Incialização da Potencia do numerador*/
long double potDen=1;/*Incialização da Potencia do denominador*/
long double resultado=1.0/4.0;/*Inicializa resultado com o primeiro retorno da serie
uma vez que não entrará no for principal do programa*/
scanf("%d",&n);

for(i=1;i<n;i++){
  numerador=numerador + 2;/*calcular a PA do numerador*/
  for(j=0;j<numerador;j++)
    potNum=potNum*numerador;

  denominador=denominador + 2;/*calcular a PA do denominador*/
  for(j=0;j<denominador;j++)
    potDen=potDen*denominador;

  if(i%2==0)/*alternar o sinal entre "*" ou "+"*/
    resultado=resultado * (potNum/potDen);
  else
    resultado=resultado + (potNum/potDen);

  potNum=1;/*resetar o valor de potNum para ser utilizado na próxima iteração do for*/
  potDen=1;/*resetar o valor de potDen para ser utilizado na próxima iteração do for*/
                }

printf("%Lf\n",resultado);

return 0;
}
