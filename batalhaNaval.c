#include <stdio.h>

int main() {
  char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tabuleiro[10][10] = {{0}};
  int navio1 = 3;
  int navio2 = 3;

  printf("* BATALHA NAVAL *\n");

  // Imprimindo colunas
  printf(" ");
  for (int i = 0; i < 10; i++) {
    printf("%c ", coluna[i]);
  }
  printf("\n");

  // posição do navio1
  for (int i = 4; i <= 6; i++) {
    tabuleiro[i][7] = navio1;
  }
    // posição do navio2
    for (int i = 5; i <= 7; i++) {
      tabuleiro[2][i] = navio2;
    }

  // Imprimindo linhas
  for (int i = 0; i < 10; i++) {
    printf("%d ", linha[i]);
    for (int j = 0; j < 10; j++) {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }

  return 0;
}
  printf("\n");
}

    return 0;
}
