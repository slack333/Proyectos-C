//Calculo de longitud de circunferencia
//Este programa es de codigo libre escrito por slack333
//Version 0.01

#include <stdio.h>

int main() {
  float r,pi = 3.1416,var = 2,longitud;

  //Damos la bienvenida al usuario en el programa

  printf("Bienvenido al cálculo de logitud de circunferencia\n");
  printf("\n"); //Dejamos un espacio con un enter

  printf("Ingresa el radio de la circunferencia: ");
  scanf("%f",&r); //Ingreso del radio por parte de usuario

  longitud = var * pi * r; //caculo de longitud = 2 * PI * radio

  printf("La longitud de tu circunferencia es: %f\n",longitud);


  return 0;
}
