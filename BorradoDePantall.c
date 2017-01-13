// Programa que borra la pantalla presionando 1

#include <stdio.h>
#include <stdlib.h>

int main() {
  char tecla;

  printf("Programa de borrado de pantalla!!!!\n");
  printf("Programa de borrado de pantalla!!!!\n");
  printf("Programa de borrado de pantalla!!!!\n");
  printf("Programa de borrado de pantalla!!!!\n");
  printf("Programa de borrado de pantalla!!!!\n");
  printf("Programa de borrado de pantalla!!!!\n");
  printf("Programa de borrado de pantalla!!!!\n");

  printf("Digite el número 1: ");
  scanf("%c", &tecla);

  if (tecla == '1') {
    system("clear");
    printf("Ha funcionado el limpiado de pantalla\n");

  } else {
    fflush(stdin); //funciona solo en windows, se utiliza para borrar el buffer
    printf("No ha funcionado el limpiado de pantalla\n");
    printf("Por favor, digite el número 1: "); scanf("%c", &tecla);

    if (tecla == '1') {
      system("clear");
      printf("No ha funcionado\n");
    }
  }

  return 0;
}
