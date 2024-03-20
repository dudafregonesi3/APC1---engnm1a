/*
 Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0
  */
#include <stdio.h>

int main() {
    int base, altura;
    float area;

    // Solicita ao usuário que insira a base e a altura do triângulo
    printf("Insira a base do triângulo (um número inteiro maior que 0): ");
    scanf("%d", &base);
    printf("Insira a altura do triângulo (um número inteiro maior que 0): ");
    scanf("%d", &altura);

    // Verifica se a base e a altura são válidas
    if (base <= 0 || altura <= 0) {
        printf("A base e a altura devem ser maiores que 0.\n");
        return 1; // Termina o programa com código de erro
    }

    // Calcula a área do triângulo
    area = (float)(base * altura) / 2;

    // Exibe a área do triângulo
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
