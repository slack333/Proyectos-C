/*Cajero automatico, el usuario depositara un saldo en la cuenta y podrá retirar, consultar y volver a depositar. */


#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcion = 0;
  float agregar, saldo = 0,retirar;

  system("clear"); //limpiamos pantalla

  while (opcion <= 3) { //Bucle si opcion es menor o igual a 3 continua imprimiendo el menú, en caso que sea mayor, termina el programa

    printf("\tBienvenido a su Cajero Virtual");
    printf("\n\t1. Ingreso en cuenta.");
    printf("\n\t2. Retirar dinero de la cuenta.");
    printf("\n\t3. Consultar saldo.");
    printf("\n\t4. Salir.");
    printf("\n\nOpción: ");
    scanf("%i",&opcion);

    system("clear"); //limpiamos pantalla

    switch (opcion) {
      case 1: printf("\nCuanto dinero desea ingresar en la cuenta?: $");
              scanf("%f", &agregar);
              saldo += agregar;
              system("clear"); // limpiamos pantalla
              printf("\n\tEl saldo total es de: $%.2f\n\n", saldo);

      break;
      case 2: printf("\nCuanto dinero desea retirar?: $");
              scanf("%f", &retirar);
              if (retirar > saldo) {
                system("clear"); // limpiamos pantalla
                printf("\nLa cantidad a retirar es mayor al saldo\n\n");
              }else{
                saldo -= retirar;
                system("clear"); // limpiamos pantalla
                printf("\n\tEl saldo actual es de: $%.2f\n\n", saldo);
              }

      break;
      case 3:
              system("clear"); // limpiamos pantalla
              printf("\n\tEl saldo actual es de: $%.2f\n\n", saldo);
      break;
      case 4:break;
      default: printf("Se equivoco de opción de menu\n");

    }

  }

  return 0;
}
