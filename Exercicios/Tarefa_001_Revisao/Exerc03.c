/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exerc�cios para Revis�o da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em C que leia o sal�rio de um funcion�rio e uma porcentagem de aumento de sal�rio. Em
seguida, calcule e imprima o novo sal�rio do funcion�rio e o valor que o funcion�rio receber� de
aumento. O c�lculo deve ser feito por uma fun��o. N�o utilize vari�veis com escopo global.
*/

#include <stdio.h>
#include <locale.h>


float calcularNovoSalario (float valorSalario, float porcentagemAumento);

int main(void){

    float salario, percentualAumento, novoSalario;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o valor do sal�rio: ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentualAumento);

    printf("O salario atual �: R$%.2f", salario);
    printf("\nO percentual de aumento � : %.2f%%", percentualAumento);

    novoSalario = calcularNovoSalario(salario, percentualAumento);

    printf("\nO novo salario � de R$%2.f", novoSalario);

    return 0;

}

float calcularNovoSalario(float valorSalario, float porcentagemAumento){

    float calculoSalario;
    calculoSalario = (valorSalario + ((valorSalario * porcentagemAumento)/100));
    return calculoSalario;

}
