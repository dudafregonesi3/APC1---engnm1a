/*
Faça um programa em C que leia três números reais e imprima a média aritmética destes números.
*/

#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("Insira três números reais: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética dos números %.2f, %.2f e %.2f é: %.2f\n", num1, num2, num3, media);

    return 0;
}
