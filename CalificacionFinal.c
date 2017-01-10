//Programa para calcular calificacion final de un alumno
//Este programa es libre escrito por slack333
/* Un alumno desea saber cual sera su calificacion fina len la materia algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:

55% del promedio de sus tres calificaciones parciales.
30% de la calificacion del examen final.
15% de la calificacion de un trabajo final. */

#include <stdio.h>

int main() {
  int examen1, examen2, examen3, examenfinal, trabajofinal;
  float calculo, porcentaje1 = 0.55, porcentaje2 = 0.30, porcentaje3 = 0.15;

  printf("Bienvenido al cálculo de calificaciones.\n\n");

  printf("\nIngrese calificacion primer examen: "); scanf("%i", &examen1);
  printf("Ingrese calificacion segundo examen: "); scanf("%i", &examen2);
  printf("Ingrese calificacion tercer examen: "); scanf("%i", &examen3);
  printf("Ingrese califiacion examen final: "); scanf("%i", &examenfinal);
  printf("Ingrese calificacion trabajo final: "); scanf("%i", &trabajofinal);

  calculo = (((examen1 + examen2 + examen3) / 3) * porcentaje1) + (examenfinal * porcentaje2) + (trabajofinal * porcentaje3);

  printf("La calificacion final será: %.1f\n\n", calculo);

  return 0;
}
