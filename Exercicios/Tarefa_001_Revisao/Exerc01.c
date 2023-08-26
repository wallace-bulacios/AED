/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exercícios para Revisão da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em linguagem C que leia dois números inteiros, calcule a soma desses dois números e
imprima o resultado. Escreva um programa monolítico, ou seja, que possui somente a função main.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){

    int num1, num2, soma;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primerio número interio: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("\nA soma é: %d", soma);

    return 0;


}
