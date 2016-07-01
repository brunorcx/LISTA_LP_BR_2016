/*Aluno:Bruno Rodrigues Caputo*/
/*Data:23/06/2016*/
/*Nome:Exercicio3*/
/*Comando para compilação = gcc -Wall -pedantic -o Exercicio Exercicio3.c   */
/*Comando para execução = ./Exercicio   */


#include<stdio.h>
#include<string.h>
int main(void)
{


int i;
int cont=0;/*inicialização do contador que será usado para escolher qual o fator da conta*/
char c;
char vetor[100];
char PrimeiraS[100];/*Primeira String*/
char SegundaS[100];/*Segunda String*/

for(i=0;c!='\n';i++){/*Ler caracter por caracter até que Enter('\n') seja lido*/

  scanf("%c",&c);
  if(c==' ')
    i--;

if(c==','|| c=='\n'){
  cont++;
  if(cont>2){
    vetor[i]='\0';
    if(strcmp(vetor,PrimeiraS)<0){/*A função strcmp compara lexograficamente as duas strings*/
      if(strcmp(PrimeiraS,SegundaS)<0){/*Se for <0,significa que a string PrimeiraS é menor que a SegundaS*/
        strcpy(SegundaS,PrimeiraS);/*copia os elementos da string PrimeiraS para SegundaS*/
        strcpy(PrimeiraS,vetor);
                                      }
                                 }
    else if(strcmp(vetor,SegundaS)<0)
      strcpy(SegundaS,vetor);
             }
  else{
    if(cont%2==0)/*Decide qual fator será usado no cálculo*/
      strcpy(SegundaS,vetor);
    else
      strcpy(PrimeiraS,vetor);
      }

  i=-1;/*reseta o indice para a leitura*/
                      }
else{
 vetor[i]=c;

    }
                    }

  printf("%s , %s\n",PrimeiraS,SegundaS);


return 0;
}
