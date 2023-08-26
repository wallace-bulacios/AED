/**
--------------------------------------------------------------------------------------------------------------
                                     AED - Algoritmos e Estruturas de Dados
                                     Exercícios para Revisão da Linguagem C
                                       Professor Sandro Teixeira Carvalho
--------------------------------------------------------------------------------------------------------------
Escreva um programa em C que leia o raio de uma esfera e calcule e imprima a área da superfície dessa
esfera. Utilize o qualificador const da linguagem C para criar a constante com o nome PI. O cálculo
deve ser feito por uma função. Não utilize variáveis com escopo global.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//#define VALOR_PI 3.1415;

float calcularSuperficie(float raio);

int main(void){

    float raioEsfera, s_Esfera;

    setlocale(LC_ALL, "Portuguese");

    printf("Forneça o raio da esfera em cm: ");
    scanf("%f", &raioEsfera);

    s_Esfera = calcularSuperficie(raioEsfera);

    printf("\nA superficie da esfera é: %.2f cm",s_Esfera);

    return 0;
}

float calcularSuperficie(float raio){

    float areaSuperficie;
    const float PI = 3.14;

    areaSuperficie = (4 * PI * pow(raio,2));

    return areaSuperficie;
}
