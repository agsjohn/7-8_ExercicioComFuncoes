#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mesquita.h"

int matriz[5][5], linha, coluna;

void escreve(){
  printf("\n");
  printf("Matriz  gerada: \n");
  for (linha = 0; linha <= 4; linha++) {
    for (coluna = 0; coluna <= 4; coluna++) {
      printf("%2i - ", matriz[linha][coluna], " - ");
    }
    printf("\n");
  }
}

main() {
  srand(time(NULL));
  int numero = 0, contdiv = 0, x = 0;
  for (linha = 0; linha <= 4; linha++) {
    for (coluna = 0; coluna <= 4; coluna++) {
      if (linha < coluna) matriz[linha][coluna] = gerapar(101);
      if (coluna < linha) matriz[linha][coluna] = geraimpar(101);
      if (linha == coluna) matriz[linha][coluna] = geraprimo(101);
    }
  }
  escreve();
}