/*
Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>

int main() {
  
    float valor_compra, depreciacao, valor_veículo;
    int ano_fabricação, ano_depreciacao;
  
    printf("Entre com o valor de compra do veículo: ");
    scanf("%f", &valor_de_compra);
   
  printf("Entre com o ano de fabricacao do veículo: ");
    scanf("%d", &ano_fabricacao);
    
  printf("Entre com o ano de depreciacao do veículo: ");
    scanf("%d", &ano_depreciacao);
    
  depreciacao = (ano_depreciacao - ano_fabricacao) * 0,01 * valor_compra;
    
    valor_veiculo = valor_compra - depreciacao;
    printf("O valor depreciado do veiculo é: %.2f\n", valor_veiculo);
    
  return 0;
  
}


  