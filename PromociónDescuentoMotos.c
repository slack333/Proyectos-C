//Una distribuidora de motocicletas tiene una promocion de fin de a;o que consiste en lo siguiente. Las motos marca Honda tienen un descuento del 5%, la marca Yamaha del 8% y las suzuki del 10%, las otras solo 2%.


#include <stdio.h>

int main() {
  float venta, calculo;
  char marca, sino;
  //char pregunta == printf("Desea comprarla? S/n: "); scanf("%c\n", &sino);

  printf("\nBienvendio a la venta de Motos con descuento\n\n");
  printf("Honda = h // Yamaha = y // Suzuki = s // Otras = o \n");

  printf("Ingrese la marca con mayuscula: "); scanf("%c", &marca);

  if (marca == 'h') {
    printf("Ud. eligió la marca Honda y tiene un descuento de un 5 porciento\n");
  }

  if (marca == 'y') {
    printf("Ud. eligió la marca Yamaha y tiene un descuento de un 8 porciento\n");
  }

  if (marca == 's') {
    printf("Ud. eligió la marca Suzuki y tiene un descuento de un 10 porciento\n");
  }

  if (marca == 'o') {
    printf("Ud. eligió Otras marcas y tiene un descuento de un 2 porciento\n");
  }

  return 0;
}
