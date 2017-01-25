// Suma de los n primeros números


#include <stdio.h>

int main() {
  int cont, n, suma = 0;

  printf("Digite el total de números a sumar: "); scanf("%i", &n);

  cont = 1;

  while (cont <= n) {
    suma += cont; // suma = 1, 3 , 6, 10, 15
    cont++;
  }

  printf("\n\n\t La suma es: %i\n\n", suma);

  return 0;
}
