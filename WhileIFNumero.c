/*Digite un número, si el número supera a 10, multiplique los 10 primeros números, sino, súmelos*/
//Este programa es libre, escrito por Bruno Aiub(slack333)
//Utilizamos If Else y While

#include <stdio.h>

int main() {
  int cont, n, suma = 0, multi = 1;

  printf("Digite un número, si es mayor a 10 se multiplicarán: ");
  scanf("%i", &n);

  cont = 1;

  if (n >= 10) { //Mientras n es mayor o igual a 10, entonces...
    while (cont <= n) {
      multi *= cont; // multiplcar
      cont++;
    }
    printf("\n\n\t La multiplicacion es: %i\n\n", multi);
  } else { //Sino, se suma
    while (cont <= n) {
      suma += cont; // sumar
      cont++;
    }
    printf("\n\n\t La suma es: %i\n\n", suma);
  }


  return 0;
}
