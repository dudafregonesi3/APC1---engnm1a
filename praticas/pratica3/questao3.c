/*
Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido
com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima
de 500.00 aplica 10%.
*/
#include <stdio.h>
int main() {
  float valor_bruto;
  float desconto;
  printf("Entre com o valor bruto: ");
  int leu_certo = scanf("%f", &valor_bruto);
  if (leu_certo) {
    if (valor_bruto <= 100.00) {
      desconto = valor_bruto * 0.01;
    } else if (valor_bruto > 100.00 && valor_bruto <= 500.00) {
      desconto = valor_bruto * 0.05;
    } else {
      desconto = valor_bruto * 0.10;
    }
    float valor_final = valor_bruto - desconto;
    printf("Desconto calculado: %.2f\n", desconto);
    printf("Valor final após desconto: %.2f\n", valor_final);
  }
  return 0;
}