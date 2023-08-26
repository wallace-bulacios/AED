/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exercícios para Revisão da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em C que leia o salário de um funcionário e uma porcentagem de aumento de salário. Em
seguida, calcule e imprima o novo salário do funcionário e o valor que o funcionário receberá de
aumento. O cálculo deve ser feito por uma função. Não utilize variáveis com escopo global.
*/

#include <stdio.h>
#include <locale.h>


float calcularNovoSalario (float valorSalario, float porcentagemAumento);

int main(void){

    float salario, percentualAumento, novoSalario;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o valor do salário: ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentualAumento);

    printf("O salario atual é: R$%.2f", salario);
    printf("\nO percentual de aumento é : %.2f%%", percentualAumento);

    novoSalario = calcularNovoSalario(salario, percentualAumento);

    printf("\nO novo salario é de R$%2.f", novoSalario);

    return 0;

}

float calcularNovoSalario(float valorSalario, float porcentagemAumento){

    float calculoSalario;
    calculoSalario = (valorSalario + ((valorSalario * porcentagemAumento)/100));
    return calculoSalario;

}
