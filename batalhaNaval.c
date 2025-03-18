#include <stdio.h>

int main() {
  // definindo condições
  char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int tabuleiro[10][10] = {{0}};
  int navio1 = 3;
  int navio2 = 3;
  int navio3 = 3;
  int navio4 = 3;

  printf("* BATALHA NAVAL *\n");

  // Imprimindo colunas
  printf(" ");
  for (int i = 0; i < 10; i++) {
    printf("%c ", coluna[i]);
  }
  printf("\n");

  // posição do navio1 dentro do tabuleiro
 for (int i = 4; i <= 6; i++) { // coluna H5, H6 e H7
   tabuleiro[i][7] = navio1;
 }

 // posição do navio2 dentro do tabuleiro
 for (int i = 5; i <= 7; i++) { // colunas da linhas F3, G3 e H3
   tabuleiro[2][i] = navio2;
 }

  // posição do navio3 dentro do tabuleiro
  int linha4 = 4;
  int coluna1 = 1;
  for (int i = 0; i < 3; i++) { // colunas das linhas B5, C6 e D7
    tabuleiro[linha4 + i][coluna1 + i] = navio3;
  }

  // posição do navio4 dentro do tabuleiro
  int linha7 = 7;
  int coluna9 = 9;
  for (int i = 0; i < 3; i++) { // coluna das linhas H10, I9 e J8
    tabuleiro[linha7 + i][coluna9 - i] = navio4;
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
