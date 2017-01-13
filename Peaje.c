/* Selecconar un tipo de vehículo e indicar el peaje a pagar según un valor numérico
1- turismo, peaje $500
2- autobus, peaje $3000
3- motocicleta, peaje $300
caso contrario - Vehículo no autorizado.*/

#include <stdio.h>

int main() {

  int numero;


  printf("\nBienvenido al programa Peaje\n\n");
  printf("1 - Turismo, 2 - Autobus, 3 - Motocicleta.\n");
  printf("Ingrese del (1-3), que tipo de vehículo corresponde: ");
  scanf("%i", &numero);

  switch (numero) {
    case 1: printf("\nDebe pagar $500.\n"); printf("\nCobrado $500, Muchas gracias!\n"); break;

    case 2: printf("\nDebe pagar $3000.\n"); printf("\nCobrado $3000, Muchas gracias!\n"); break;

    case 3: printf("\nDebe pagar $300\n"); printf("\nCobrado $300, use casco, Muchas gracias!\n"); break;

    default: printf("\nVehículo no autorizado, Policia!!\n");
  }

  return 0;
}
