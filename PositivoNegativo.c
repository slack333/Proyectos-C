//Comprobacion de numeros negativos y positivos
//Aplicamos regla If-else
//Este programa es libre, escrito por slack333

#include <stdio.h>

int main() {
  int num;

  printf("Ingresa un número, negativo o postivo: "); scanf("%i", &num);

  if (num < 0) {
    printf("\nEste número es negativo\n");
  } else {
    printf("\nEste número es positivo\n");
  }

  return 0;
}
