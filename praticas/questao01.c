/*
Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um número inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
  }
  int numero_eh_divisivel_por_2 = numero % 2 == 0;

  if (numero_eh_divisivel_por_2) {
    printf("%d é um número par!\n", numero);
  } else {
    printf("%d é um número ímpar!\n", numero);
  }
}
else {
  prinft("numero invalido!. Tente novamente.\n");
  return 0;
}