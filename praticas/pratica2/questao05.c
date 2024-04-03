/*
Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).
*/

#include <stdio.h>

int main() {
  
    peso flutuante, altura, imc;
    printf("Entre com o peso da pessoa em quilogramas: ");
    scanf("%f", &peso);
  
    printf("Entre com a altura da pessoa em metros: ");
    scanf("%f", &altura);
  
      imc = peso / (altura * altura);
    printf("O indice de massa corporal (IMC) is: %.2f\n", imc);
    return 0;
}