/*
Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>

int main() {
  
   largura flutuante, comprimento, área_hectares;
    printf("Entre com a largura do terreno em metros: ");
    scanf("%f", &largura);
  
    printf("Entre com o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);
  
    area_hectares = (largura * comprimento) / 10000.0;
    printf("A área do terreno é de % 2f hectares.\n", area_hectares);

  
    return 0;
}
