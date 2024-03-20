/*
Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>

int main() {
    int dividendo, divisor, quociente, resto;

    printf("Insira o dividendo (número a ser dividido): ");
    scanf("%d", &dividendo);

    printf("Insira o divisor (número pelo qual dividir): ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Quociente da divisão: %d\n", quociente);
    printf("Resto da divisão: %d\n", resto);

    return 0;
}
