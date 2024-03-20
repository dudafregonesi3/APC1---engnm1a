/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

#define PI 3.1416 // Definindo a constante PI

int main() {
    int raio;
    float perimetro;

    printf("Insira o raio da pizza (em unidades inteiras): ");
    int deu_certo = scanf("%d", &raio);

    perimetro = 2 * PI * raio;

    printf("O perímetro da pizza é: %.2f unidades\n", perimetro);

    return 0;
}

