/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exerc�cios para Revis�o da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em linguagem C que leia dois n�meros inteiros, calcule a soma desses dois n�meros e
imprima o resultado. Escreva um programa monol�tico, ou seja, que possui somente a fun��o main.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    int num1, num2, soma;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primerio n�mero interio: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nA soma �: %d", soma);

    return 0;


}
