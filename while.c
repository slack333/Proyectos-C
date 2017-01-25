/* La sentencia while

    Sintaxis:

              while (condicion){
                instrucciones;
            }
                */

// Mostrar los 10 primeros numeros en pantalla

#include <stdio.h>

int main() {
    int i;

    i = 1;

    while (i<=100) {
      printf("%i.\n", i); // 1
      i++;

    }


  return 0;
}
