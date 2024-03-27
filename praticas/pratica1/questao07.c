/*
Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
  */

#include <stdio.h>
#include <math.h>

int main() {
    double angulo, distancia, altura;
    printf("Digite o ângulo de inclinação do avião em graus (menor ou igual a 45): ");
    scanf("%lf", &angulo);

    if (angulo > 45) {
        printf("O ângulo de inclinação do avião deve ser menor ou igual a 45 graus.\n");
        return 1;
    }
    printf("Digite a distância percorrida pelo avião: ");
    scanf("%lf", &distancia);
    altura = sin(angulo * M_PI / 180) * distancia;
    printf("A altura alcançada pelo avião é: %.2f\n", altura);
    return 0;
}