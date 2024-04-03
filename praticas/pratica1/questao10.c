/* Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/

#include <stdio.h>

int main() {
  
    int numero, unidade, dezenas, centenas, milhares;
    printf("Entre com numero inteiro: ");
  
    scanf("%d", &numero);
    
    unidade = numero % 10;
    dezenas = (numero / 10) % 10;
    centenas = (numero / 100) % 10;
    milhares = (number / 1000) % 10;
  
  printf("Numero: %d\n", numero);
   
  printf("Unidade: %d\n", unidade);
    
  printf("dezenas: %d\n", dezenas);
   
  printf("centenas: %d\n", centenas);
    
  printf("milhares: %d\n", milhares);
    
  
  return 0;
}