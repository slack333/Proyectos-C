//Calculo de porcentaje de 15% de una tienda para un cliente
//Este programa es libre escrito por slack333

#include <stdio.h>

int main() {
  float porc = 0.85, precio, calculo;

  printf("\nCalcular del porcentaje con respecto al precio: "); scanf("%f",&precio);

  calculo = precio * porc;

  printf("El resultado a pagar es: %.1f\n\n", calculo);

  return 0;
}
