/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exercícios para Revisão da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em C que leia um número inteiro dentro da função main e passe esse número para uma
função. A função deve receber esse número e somar 1 a esse número. A função não deve retornar o número
que ela recebeu como parâmetro via comando return. A função main deve imprimir o número modificado.
Dica: utilize a parametrização por referência através dos ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somaMaisUm(int num);

int main(void){

  int num, novoNumero;

  setlocale(LC_ALL, "Portuguese");

  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  printf("O numero informado é: %d", num);

  novoNumero = somaMaisUm(num);
  printf("\nO novo mumero é: %d",novoNumero);
  return 0;
}

int somaMaisUm(int numero){
  numero++;
  return numero;
}