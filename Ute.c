#include <stdio.h>
#define TARIFA1 1.5
#define TARIFA2 1.0
#define TARIFA3 0.8

int main() {
  float gasto, tasa, precio, calculo;
  printf("\nBienvenidos al programa de cáculo de gasto de energía eléctrica\n");
  printf("\nIngrese el precio del kWh: $"); scanf("%f", &precio);
  printf("Ingrese el consumo en kW: "); scanf("%f", &gasto);

  if (gasto <= 1000) {
    tasa = TARIFA1;
    calculo = precio * gasto;
    printf("El monto a pagar de este período es de: %.2f\n", calculo);
    printf("El mejor ahorrista ha sido Ud.\n");
  }
  if (gasto >= 1001 && gasto <= 1850) {
    tasa = TARIFA2;
    calculo = precio * gasto;
    printf("El monto a pagar de este período es de: %.2f\n", calculo);
    printf("Este período fue un consumo medio\n");
  }
  if (gasto >= 1851) {
    tasa = TARIFA2;
    calculo = precio * gasto;
    printf("El monto a pagar de este período es de: %.2f\n", calculo);
    printf("Valla, este período ha sido accionista de UTE\n" );
  }

  return 0;
}
