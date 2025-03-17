#include <stdio.h>
int main (){

    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

printf("* BATALHA NAVAL *\n");

// Imprimindo colunas
printf("  ");
for (int i = 0; i < 10; i++) {
  printf("%c ", coluna[i]);
}
printf("\n");

// Imprimindo linhas
    for (int i = 0; i < 10; i++) {
     printf("%d ", linha[i]);
     for (int j = 0; j < 10; j++) {
    printf("0 ");
  }
  printf("\n");
}

    return 0;
}
