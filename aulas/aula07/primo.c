#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    int qtde_divisores = 0;
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0)
        qtde_divisores++;
    }
    if (qtde_divisores == 2) {
      printf("%d é um número primo!\n", numero);
    } else {
      printf("o numero %i nuam eh primo!\n", numero);
    }
  } else {
  }
  printf("numero invalido!\n");

return 0;
}
