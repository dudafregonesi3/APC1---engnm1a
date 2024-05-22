#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  do {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) opcao = 0;
    while (getchar() != '\n'); //limpar buffer do teclado

    switch (opcao) {
    case 1: { 
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: ");
      deu_certo = scanf("%[^\n]s", nome);
      while (getchar() != '\n');
      printf("Ola %s\n", nome);
      printf("Pressione ENTER p/ iniciar");
      getchar();
      break; 
    }
    case 2: {  
      deu_certo = system("clear");
      printf ("resultado\n");
      printf ("1º lugar - Duda - 10000\n");
      printf ("2º lugar - Jose - 800\n");
      printf ("3º lugar - MP - 600\n");
      printf ("4º lugar - MA -500\n");
      printf ("5º lugar - ME - 400\n");
      printf ("pressione ENTER p/ voltar ao menu");
      getchar ();
        
      break;
    }
    case 3:    break;
    case 4:    break;
    default:
      printf("Opcao invalida! Pressione ENTER p/ continuar");
      getchar();
    }
  } while (opcao != 4);

  return 0;
}
