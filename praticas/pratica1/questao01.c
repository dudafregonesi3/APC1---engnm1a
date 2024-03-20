/*
   Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/

#include <stdio.h>

int main() {
    float A1, A2, media;

    // Solicita ao usuário que insira as notas A1 e A2
    printf("Insira a nota da A1 (entre 0 e 10): ");
    scanf("%f", &A1);
    printf("Insira a nota da A2 (entre 0 e 10): ");
    scanf("%f", &A2);

    // Verifica se as notas estão dentro do intervalo válido
    if (A1 < 0 || A1 > 10 || A2 < 0 || A2 > 10) {
        printf("As notas devem estar entre 0 e 10.\n");
        return 1; // Termina o programa com código de erro
    }

    // Calcula a média final
    media = 0.4 * A1 + 0.6 * A2;

    // Exibe a média final
    printf("A média final é: %.2f\n", media);

    return 0;
}

