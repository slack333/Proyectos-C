/* Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares*/

#include "stdio.h"

int main() {
  int opcion;
  float agregar, saldo = 1000, retirar;

  printf("\tBienvenido a su Cajero Virtual");
  printf("\n1. Ingreso en cuenta");
  printf("\n2. Retirar dinero de la cuenta");
  printf("\n3. Salir");
  printf("\nOpción: ");
  scanf("%i",&opcion);

  switch (opcion) {
    case 1: printf("\nCuanto dinero desea ingresar en la cuenta?: ");
            scanf("%f", &agregar);
            saldo += agregar;
            printf("El saldo total es de: %.2f\n", saldo);

    break;
    case 2: printf("\nCuanto dinero desea retirar?: ");
            scanf("%f", &retirar);
            if (retirar > saldo) {
              printf("La cantidad a retirar es mayor al saldo\n");
            }else{
              saldo -= retirar;
              printf("El saldo actual es de: %.2f\n", saldo);
            }

    break;
    case 3:break;
    default: printf("Se equivoco de opción de menu\n");
  }
  return 0;
}
