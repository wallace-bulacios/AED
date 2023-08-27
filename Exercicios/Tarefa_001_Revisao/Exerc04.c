/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exerc�cios para Revis�o da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em C que leia um n�mero inteiro dentro da fun��o main e passe esse n�mero para uma
fun��o. A fun��o deve receber esse n�mero e somar 1 a esse n�mero. A fun��o n�o deve retornar o n�mero
que ela recebeu como par�metro via comando return. A fun��o main deve imprimir o n�mero modificado.
Dica: utilize a parametriza��o por refer�ncia atrav�s dos ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaMaisUm(int num);

int main(void){

  int num, novoNumero;

  setlocale(LC_ALL, "Portuguese");

  printf("Digite um n�mero inteiro: ");
  scanf("%d", &num);

  printf("O numero informado �: %d", num);

  novoNumero = somaMaisUm(num);
  printf("\nO novo mumero �: %d",novoNumero);
  return 0;
}

int somaMaisUm(int numero){
  numero++;
  return numero;
}