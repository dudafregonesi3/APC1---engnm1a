#include <stdio.h>

int main() {
printf("\x1b[32m--------------------------------\n");
  printf("   N O T A       L E G A L    \n");
  printf("------------------------------\x1b[0m\n");
  printf("ITEM           QTD VALOR      \n");
  printf("%-14s %03i \x1b[34m%11.2f\x1b[0m\n" ,  "banana nanica", 2, 28.00);
  printf("%-14s %03i \x1b[34m%11.2f\x1b[0m\n" ,  "uva globo", 1, 15.00);
  printf("%-14s %03i \x1b[34m%11.2f\x1b[0m\n" ,  "laranja lima", 1, 18.00);
    
  //printf("banana nanica   2      28,00  \n");
  //printf("uva globo       1      15,00  \n");
  //printf("laranja lima    1      18,00  \n");
  
  printf("------------------------------\n");
  printf("TOTAL.........: %10.2f \n",53,00);
  
  return 0;
}