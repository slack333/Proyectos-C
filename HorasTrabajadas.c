//Programa de calculo de horas trabajadas segun valores ingresados por el usuario
//Este programa es libre escrito por slack333

#include <stdio.h>

int main() {
  int horas;
  float valor_H,calculo;

  printf("\nBienvenidos al programa de calculos de horas trabajadas\n\n");

  printf("Ingresa el precio de la hora de trabajo: $"); scanf("%f", &valor_H);
  printf("Ingresa las horas trabajadas: "); scanf("%i", &horas);

  calculo = horas * valor_H;

  printf("El salario es: $%.2f\n\n", calculo);


  return 0;
}
