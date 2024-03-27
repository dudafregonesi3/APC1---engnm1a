/*
Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>
int main()

int idades, meses, dias, total_dias;
printf("Digite a idade em anos, meses e dias (Formato: anos meses dias):");
    
scanf("%d %d %d", &idades, &meses, &dias);
    
total_days = idades * 365 + meses * 30 + dias;
printf("A idade de %d anos, %d meses e %d dias equivale a %d dias.\n", idades, meses, dias, total_dias);

    return 0;
}


