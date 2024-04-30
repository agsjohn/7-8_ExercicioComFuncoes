#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gerapar(int limite) {
  int numero;
  do {
    numero = rand() % limite;
  } while ((numero % 2) != 0);
  return numero;
}

int geraimpar(int limite) {
  int numero;
  do {
    numero = rand() % limite;
  } while ((numero % 2) == 0);
  return numero;
}

int geraprimo(int limite) {
  int contdiv, numero, x;
  do {
    contdiv = 0;
    numero = rand() % limite;
    for (x = 1; x <= numero; x++) {
      if ((numero % x) == 0) {
        contdiv = contdiv + 1;
      }
    }
  } while (contdiv > 2);
  return numero;
}