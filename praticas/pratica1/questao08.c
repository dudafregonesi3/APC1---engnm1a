/*
Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>
int main() {
  
    int segundos, horas, minutos, segundos_restantes;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
  
    horas = segundos / 3600; // 1 hora = 3600 segundos
    minutos = (segundos % 3600) / 60;
    remaining_segundos = segundos % 60;
  
    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_restantes);
  
    return 0;
}