/*
Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main() {
    int numero;
    
  printf("Insira um número inteiro: ");
    scanf("%d", &numero);
    
  printf("O caractere correspondente na tabela ASCII ao número %d é: %c\n", numero, numero);
    return 0;
}