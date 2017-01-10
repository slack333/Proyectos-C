//Conversor de grados F a C
//Es un programa libre escrito por slack333

#include <stdio.h>

int main() {
  //creamos 4 variables f,divi,multi,resta
  //f es la variable que se va a ingresar
  //Todas las variables estan como float
  float f, divi=0,multi = 0,resta = 0;


  printf("Ingrese los grados F: ");
  scanf("%f", &f); //pedimos el valor al usuario

  //ecuaciones para calcular a grados C
  resta = f - 32; //valor f resta 32
  multi = resta * 5;//resta multiplica por 5
  divi = multi / 9; //multi se divide entre 9
  //restultado se muestra abajo
  //reducimos el float a 2 digitos despues de la coma
  printf("Son en grados C: %.2f\n", divi);

  return 0;
}
